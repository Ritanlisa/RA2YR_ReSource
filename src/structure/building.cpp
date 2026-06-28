#include "structure/building.hpp"
#include "type/building_type.hpp"
#include "core/reverse_marker.hpp"
#include "fundamentals.hpp"
#include "object/techno.hpp"
#include "core/coordinate.hpp"
#include "house/house.hpp"
#include "structure/infantry.hpp"
#include "type/infantry_type.hpp"
#include "misc/super_weapon.hpp"

#include <cstring>

extern SuperWeaponTypeClass* g_SuperWeaponTypeItems[];

namespace DynamicVector {
    int GetOrGrow(DynamicVectorClass<SuperClass*>* vec, int index);
}

namespace gamemd {

// ============================================================
// Section 1: Construction/Destruction
// ============================================================

BuildingClass::BuildingClass() noexcept
    : Type(nullptr)
    , Factory(nullptr)
    , C4Timer{}
    , BuildingClass_field_int_534(0)
    , BuildingClass_field_int_538(0)
    , OwnerCountryIndex(0)
    , C4AppliedBy(nullptr)
    , BuildingClass_field_544(0)
    , FirestormAnim(nullptr)
    , PsiWarnAnim(nullptr)
    , BuildingClass_field_timer_550{}
    , RequiresDamageFires(false)
    , FiringSWType(-1)
    , SuperWeaponToken(0)
    , Spotlight(nullptr)
    , GateTimer{}
    , LightSource(nullptr)
    , LaserFenceFrame(0)
    , FirestormWallFrame(0)
    , RepairProgress{}
    , BuildingClass_field_rect_63C{}
    , BuildingClass_field_coord_64C{}
    , BuildingClass_field_int_658(0)
    , BuildingClass_field_65C(0)
    , HasPower(false)
    , IsOverpowered(false)
    , RegisteredAsPoweredUnitSource(false)
    , SupportingPrisms(0)
    , HasExtraPowerBonus(false)
    , HasExtraPowerDrain(false)
    , FiringOccupantIndex(-1)
    , Audio7{}
    , Audio8{}
    , WasOnline(false)
    , ShowRealName(false)
    , BeingProduced(false)
    , ShouldRebuild(false)
    , HasEngineer(false)
    , CashProductionTimer{}
    , BuildingClass_field_bool_6DC(false)
    , BuildingClass_field_bool_6DD(false)
    , NeedsRepairs(false)
    , C4Applied(false)
    , NoCrew(false)
    , BuildingClass_field_bool_6E1(false)
    , BuildingClass_field_bool_6E2(false)
    , HasBeenCaptured(false)
    , ActuallyPlacedOnMap(false)
    , BuildingClass_field_bool_6E5(false)
    , IsDamaged(false)
    , IsFogged(false)
    , IsBeingRepaired(false)
    , BuildingClass_field_bool_6E9(false)
    , StuffEnabled(false)
    , HasCloakingData(0)
    , CloakRadius(0)
    , Translucency(0)
    , StorageFilledSlots(0)
    , SecretProduction(nullptr)
    , ColorAdd{}
    , BuildingClass_field_int_6FC(0)
    , BuildingClass_field_short_700(0)
    , UpgradeLevel(0)
    , GateStage(0)
    , PrismStage((PrismChargeState)(0))
    , PrismTargetCoords{}
    , DelayBeforeFiring(0)
    , BunkerState(0)
    , ProductionTimer(0)
    , PlacementAllowed(false)
    , ProductionBlocked(0)
    , padProd1(0)
    , padProd2(0)
    , ProductionAccum(0)
    , ProductionFrame(0)
    , ProductionRate(0)
    , ProductionSpeed(0)
    , CostAccumulator(0.0)
    , PipelineStep(0)
{
    padProd3[0] = padProd3[1] = padProd3[2] = 0;
    std::memset(Anims, 0, sizeof(Anims));
    std::memset(AnimStates, 0, sizeof(AnimStates));
    std::memset(DamageFireAnims, 0, sizeof(DamageFireAnims));
    std::memset(Upgrades, 0, sizeof(Upgrades));
}

// IDA 0x43b740
// 0x43b740
void BuildingClass::Construct()
{
// [IDA decompile]
int __thiscall BuildingClass::Construct(int this, int a2, int a3)
{
  int v4; // edx
  int v5; // edx
  __int16 v6; // cx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // edi
  int v13; // eax
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // eax
  int Vtable3; // [esp+18h] [ebp+4h]

  TechnoClass::TechnoClass((_DWORD *)this, a3);
  *(_DWORD *)(this + 1312) = a2;
  *(_DWORD *)(this + 1316) = 0;
  *(_DWORD *)(this + 1320) = dword_A8ED54[12];
  *(_DWORD *)(this + 1328) = 0;
  *(_DWORD *)(this + 1332) = -1;
  *(_DWORD *)(this + 1336) = -1;
  *(_DWORD *)(this + 1340) = 0;
  *(_DWORD *)(this + 1344) = 0;
  *(_DWORD *)(this + 1348) = 0;
  *(_DWORD *)(this + 1352) = 0;
  *(_DWORD *)(this + 1356) = 0;
  *(_DWORD *)(this + 1360) = dword_A8ED54[12];
  *(_DWORD *)(this + 1368) = 0;
  *(_BYTE *)(this + 1512) = 0;
  *(_DWORD *)(this + 1528) = -1;
  *(_DWORD *)(this + 1532) = -1;
  *(_DWORD *)(this + 1536) = 0;
  v4 = dword_A8ED54[12];
  *(_DWORD *)(this + 1548) = 0;
  *(_DWORD *)(this + 1540) = v4;
  *(_DWORD *)(this + 1552) = 0;
  *(_DWORD *)(this + 1556) = 0;
  *(_DWORD *)(this + 1560) = 0;
  *(_DWORD *)(this + 1564) = 0;
  *(_DWORD *)(this + 1568) = 0;
  *(_BYTE *)(this + 1572) = 0;
  *(_DWORD *)(this + 1576) = dword_A8ED54[12];
  *(_DWORD *)(this + 1584) = 0;
  *(_DWORD *)(this + 1588) = 0;
  *(_DWORD *)(this + 1592) = 1;
  *(_DWORD *)(this + 1596) = MEMORY[0x87F7E8][29704];
  *(_DWORD *)(this + 1600) = MEMORY[0x87F7E8][29705];
  *(_DWORD *)(this + 1604) = MEMORY[0x87F7E8][29706];
  *(_DWORD *)(this + 1608) = MEMORY[0x87F7E8][29707];
  *(_DWORD *)(this + 1612) = MEMORY[0x87F7E8][29720];
  *(_DWORD *)(this + 1616) = MEMORY[0x87F7E8][29721];
  *(_DWORD *)(this + 1620) = MEMORY[0x87F7E8][29722];
  *(_DWORD *)(this + 1624) = 0;
  *(_DWORD *)(this + 1628) = 0;
  *(_BYTE *)(this + 1632) = 1;
  *(_BYTE *)(this + 1633) = 0;
  *(_BYTE *)(this + 1634) = 0;
  *(_DWORD *)(this + 1636) = 0;
  *(_BYTE *)(this + 1640) = 0;
  *(_BYTE *)(this + 1641) = 0;
  *(_DWORD *)(this + 1648) = 0;
  *(_DWORD *)(this + 1652) = 0;
  *(_BYTE *)(this + 1656) = 1;
  *(_BYTE *)(this + 1657) = 0;
  *(_DWORD *)(this + 1644) = &DynamicVectorClass<InfantryClass *>::`vftable';
  *(_DWORD *)(this + 1664) = 10;
  *(_DWORD *)(this + 1660) = 0;
  *(_DWORD *)(this + 1672) = 0;
  *(_DWORD *)(this + 1676) = 0;
  *(_BYTE *)(this + 1680) = 1;
  *(_BYTE *)(this + 1681) = 0;
  *(_DWORD *)(this + 1668) = &DynamicVectorClass<InfantryClass *>::`vftable';
  *(_DWORD *)(this + 1688) = 10;
  *(_DWORD *)(this + 1684) = 0;
  *(_DWORD *)(this + 1692) = 0;
  *(_BYTE *)(this + 1736) = 0;
  *(_BYTE *)(this + 1737) = 0;
  *(_BYTE *)(this + 1738) = 0;
  *(_BYTE *)(this + 1739) = 0;
  *(_BYTE *)(this + 1740) = 0;
  v5 = dword_A8ED54[12];
  *(_DWORD *)(this + 1752) = 0;
  *(_DWORD *)(this + 1744) = v5;
  *(_BYTE *)(this + 1756) = 1;
  *(_BYTE *)(this + 1757) = 0;
  *(_BYTE *)(this + 1758) = 0;
  *(_BYTE *)(this + 1759) = 0;
  *(_BYTE *)(this + 1760) = 0;
  *(_BYTE *)(this + 1761) = 0;
  *(_BYTE *)(this + 1762) = 0;
  *(_BYTE *)(this + 1763) = 0;
  *(_BYTE *)(this + 1764) = 0;
  *(_BYTE *)(this + 1765) = 0;
  *(_BYTE *)(this + 1766) = 0;
  *(_BYTE *)(this + 1767) = 0;
  *(_BYTE *)(this + 1768) = 0;
  *(_BYTE *)(this + 1769) = 0;
  *(_BYTE *)(this + 1770) = 1;
  *(_BYTE *)(this + 1771) = 0;
  *(_BYTE *)(this + 1772) = 0;
  *(_BYTE *)(this + 1773) = 0;
  *(_DWORD *)(this + 1776) = 0;
  *(_DWORD *)(this + 1780) = 0;
  *(_BYTE *)(this + 1784) = 0;
  *(_BYTE *)(this + 1785) = 0;
  *(_BYTE *)(this + 1786) = 0;
  *(_DWORD *)(this + 1788) = 0;
  *(_WORD *)(this + 1792) = 1000;
  *(_BYTE *)(this + 1794) = 0;
  *(_BYTE *)(this + 1795) = -1;
  *(_DWORD *)(this + 1796) = 0;
  *(_DWORD *)(this + 1812) = 0;
  *(_DWORD *)(this + 1816) = 0;
  *(_DWORD *)this = &BuildingClass_Vtable;
  *(_DWORD *)(this + 4) = &BuildingClass_Vtable2;
  *(_DWORD *)(this + 8) = &BuildingClass_Vtable3;
  *(_DWORD *)(this + 12) = &BuildingClass_Vtable4;
  AbstractClass::GenerateUniqueID(this + 4);
  *(_DWORD *)(this + 1516) = 0;
  LOBYTE(v6) = 0;
  *(_DWORD *)(this + 1520) = 0;
  *(_DWORD *)(this + 1524) = 0;
  *(_DWORD *)(this + 1800) = 0;
  v7 = *(_DWORD *)(this + 1312);
  *(_DWORD *)(this + 1804) = 0;
  *(_DWORD *)(this + 1808) = 0;
  if ( v7 )
  {
    HIBYTE(v6) = *(_BYTE *)(v7 + 5904);
    LOWORD(a3) = v6;
    FacingClass::Update((char *)(this + 880), &a3);
  }
  memset((void *)(this + 1372), 0, 0x54u);
  memset((void *)(this + 1480), 0, 0x20u);
  *(_DWORD *)(this + 1456) = 0;
  *(_DWORD *)(this + 1460) = 0;
  *(_DWORD *)(this + 1464) = 0;
  *(_DWORD *)(this + 1468) = 0;
  *(_DWORD *)(this + 1472) = 0;
  *(_BYTE *)(this + 1476) = 0;
  AudioController::Init((_DWORD *)(this + 1696));
  AudioController::Init((_DWORD *)(this + 1716));
  LOWORD(a3) = 0x4000;
  FacingClass::Update((char *)(this + 880), &a3);
  *(_DWORD *)(this + 1568) = 0;
  if ( MEMORY[0x87F7E8][539866] < MEMORY[0x87F7E8][539864]
    || (BYTE1(MEMORY[0x87F7E8][539865]) || !MEMORY[0x87F7E8][539864])
    && MEMORY[0x87F7E8][539867] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(MEMORY[0x87F7E8][539862] + 8))(
         &MEMORY[0x87F7E8][539862],
         MEMORY[0x87F7E8][539867] + MEMORY[0x87F7E8][539864],
         0) )
  {
    v8 = MEMORY[0x87F7E8][539866]++;
    *(_DWORD *)(MEMORY[0x87F7E8][539863] + 4 * v8) = this;
  }
  BuildingClass::Update((#377 *)this);
  if ( dword_A8ED54[131647] < dword_A8ED54[131645]
    || (BYTE1(dword_A8ED54[131646]) || !dword_A8ED54[131645])
    && dword_A8ED54[131648] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8ED54[131643] + 8))(
         &dword_A8ED54[131643],
         dword_A8ED54[131648] + dword_A8ED54[131645],
         0) )
  {
    v9 = dword_A8ED54[131647]++;
    *(_DWORD *)(dword_A8ED54[131644] + 4 * v9) = this;
  }
  if ( dword_A8ED54[131613] < dword_A8ED54[131611]
    || (BYTE1(dword_A8ED54[131612]) || !dword_A8ED54[131611])
    && dword_A8ED54[131614] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8ED54[131609] + 8))(
         &dword_A8ED54[131609],
         dword_A8ED54[131614] + dword_A8ED54[131611],
         0) )
  {
    v10 = dword_A8ED54[131613]++;
    *(_DWORD *)(dword_A8ED54[131610] + 4 * v10) = this;
  }
  Vtable3 = AbstractClass::GetVtable3(this + 4);
  if ( dword_A8ED54[130748] + 1 <= dword_A8ED54[130749] )
    goto LABEL_29;
  if ( dword_A8ED54[130749] )
  {
    v11 = dword_A8ED54[130749];
    if ( dword_A8ED54[130749] < 0 )
      goto LABEL_30;
  }
  else
  {
    v11 = 10;
  }
  a3 = v11 + dword_A8ED54[130749];
  v12 = __2_YAPAXI_Z(8 * (v11 + dword_A8ED54[130749]));
  if ( v12 )
  {
    v13 = 0;
    --a3;
    if ( dword_A8ED54[130748] > 0 )
    {
      do
      {
        v14 = (_DWORD *)(dword_A8ED54[130747] + 8 * v13++);
        *(_DWORD *)(v12 + 8 * v13 - 8) = *v14;
        *(_DWORD *)(v12 + 8 * v13 - 4) = v14[1];
      }
      while ( v13 < dword_A8ED54[130748] );
    }
    __3_YAXPAX_Z((void *)dword_A8ED54[130747]);
    dword_A8ED54[130747] = v12;
    dword_A8ED54[130749] += v11;
    dword_A8ED54[130751] = 0;
LABEL_29:
    *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748]) = Vtable3;
    *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748] + 4) = this;
    LOBYTE(dword_A8ED54[130750]) = 0;
    ++dword_A8ED54[130748];
  }
LABEL_30:
  v15 = *(_DWORD *)(this + 1312);
  if ( v15 )
  {
    v16 = *(_DWORD *)(v15 + 6016);
    if ( v16 < 1 )
      v16 = 1;
    RadioClass::SetLinkCount((_DWORD *)this, v16);
    return this;
  }
  else
  {
    RadioClass::SetLinkCount((_DWORD *)this, 1);
    return this;
  }
}

/* ASM:
mov     eax, [esp+arg_4]
push    ebx
push    ebp
push    esi
push    edi
mov     esi, ecx
push    eax
call    TechnoClass__TechnoClass
mov     ecx, [esp+10h+arg_0]
xor     ebx, ebx
mov     [esi+520h], ecx
mov     [esi+524h], ebx
mov     edx, dword_A8ED54+30h
or      eax, 0FFFFFFFFh
mov     [esi+528h], edx
mov     [esi+530h], ebx
mov     [esi+534h], eax
mov     [esi+538h], eax
mov     [esi+53Ch], ebx
mov     [esi+540h], ebx
mov     [esi+544h], ebx
mov     [esi+548h], ebx
mov     [esi+54Ch], ebx
mov     ecx, dword_A8ED54+30h
mov     [esi+550h], ecx
mov     [esi+558h], ebx
mov     [esi+5E8h], bl
mov     [esi+5F8h], eax
mov     [esi+5FCh], eax
mov     [esi+600h], ebx
mov     edx, dword_A8ED54+30h
mov     [esi+60Ch], ebx
mov     [esi+604h], edx
mov     [esi+610h], ebx
mov     [esi+614h], ebx
mov     [esi+618h], ebx
mov     [esi+61Ch], ebx
mov     [esi+620h], ebx
mov     [esi+624h], bl
mov     ecx, dword_A8ED54+30h
mov     [esi+628h], ecx
mov     [esi+630h], ebx
mov     [esi+634h], ebx
mov     dword ptr [esi+638h], 1
mov     ecx, ds:89C808h
lea     edx, [esi+63Ch]
mov     [esi+63Ch], ecx
mov     ecx, ds:89C80Ch
mov     [edx+4], ecx
mov     ecx, ds:89C810h
mov     [edx+8], ecx
mov     ecx, ds:89C814h
mov     [edx+0Ch], ecx
mov     ecx, ds:89C848h
lea     edx, [esi+64Ch]
mov     [esi+64Ch], ecx
mov     ecx, ds:89C84Ch
mov     [edx+4], ecx
mov     ecx, ds:89C850h
mov     [edx+8], ecx
xor     ecx, ecx
mov     [esi+658h], ecx
mov     [esi+65Ch], ebx
mov     byte ptr [esi+660h], 1
mov     [esi+661h], bl
mov     [esi+662h], bl
mov     [esi+664h], ebx
mov     [esi+668h], bl
mov     ecx, offset ??_7?$DynamicVectorClass@PAVInfantryClass@@@@6B@ ; const DynamicVectorClass<InfantryClass *>::`vftable'
mov     edx, 0Ah
mov     [esi+669h], bl
mov     [esi+670h], ebx
mov     [esi+674h], ebx
mov     byte ptr [esi+678h], 1
mov     [esi+679h], bl
mov     [esi+66Ch], ecx
mov     [esi+680h], edx
mov     [esi+67Ch], ebx
mov     [esi+688h], ebx
mov     [esi+68Ch], ebx
mov     byte ptr [esi+690h], 1
mov     [esi+691h], bl
mov     [esi+684h], ecx
mov     [esi+698h], edx
mov     [esi+694h], ebx
mov     [esi+69Ch], ebx
mov     [esi+6C8h], bl
mov     [esi+6C9h], bl
mov     [esi+6CAh], bl
mov     [esi+6CBh], bl
mov     [esi+6CCh], bl
mov     edx, dword_A8ED54+30h
mov     [esi+6D8h], ebx
mov     [esi+6D0h], edx
mov     byte ptr [esi+6DCh], 1
mov     [esi+6DDh], bl
lea     ebp, [esi+4]
mov     [esi+6DEh], bl
mov     [esi+6DFh], bl
push    ebp
mov     [esi+6E0h], bl
mov     [esi+6E1h], bl
mov     [esi+6E2h], bl
mov     [esi+6E3h], bl
mov     [esi+6E4h], bl
mov     [esi+6E5h], bl
mov     [esi+6E6h], bl
mov     [esi+6E7h], bl
mov     [esi+6E8h], bl
mov     [esi+6E9h], bl
mov     byte ptr [esi+6EAh], 1
mov     [esi+6EBh], bl
mov     [esi+6ECh], bl
mov     [esi+6EDh], bl
mov     [esi+6F0h], ebx
mov     [esi+6F4h], ebx
mov     [esi+6F8h], bl
mov     [esi+6F9h], bl
mov     [esi+6FAh], bl
mov     [esi+6FCh], ebx
mov     word ptr [esi+700h], 3E8h
mov     [esi+702h], bl
mov     [esi+703h], al
mov     [esi+704h], ebx
mov     [esi+714h], ebx
mov     [esi+718h], ebx
mov     dword ptr [esi], offset BuildingClass_Vtable
mov     dword ptr [ebp+0], offset BuildingClass_Vtable2
mov     dword ptr [esi+8], offset BuildingClass_Vtable3
mov     dword ptr [esi+0Ch], offset BuildingClass_Vtable4
call    AbstractClass__GenerateUniqueID
xor     eax, eax
lea     edx, [esi+708h]
mov     [esi+5ECh], eax
xor     ecx, ecx
mov     [esi+5F0h], eax
mov     [esi+5F4h], eax
mov     [edx], eax
mov     eax, [esi+520h]
mov     [edx+4], ecx
cmp     eax, ebx
mov     [edx+8], ebx
jz      short loc_43BA63
mov     ch, [eax+1710h]
lea     edx, [esp+10h+arg_4]
mov     word ptr [esp+10h+arg_4], cx
push    edx
lea     ecx, [esi+370h]
call    FacingClass__Update

loc_43BA63:                             ; CODE XREF: BuildingClass__Construct+306↑j
mov     ecx, 15h
xor     eax, eax
lea     edi, [esi+55Ch]
rep stosd
lea     edi, [esi+5C8h]
mov     ecx, 8
rep stosd
mov     [esi+5B0h], eax
lea     ecx, [esi+6A0h]
mov     [esi+5B4h], eax
mov     [esi+5B8h], eax
mov     [esi+5BCh], eax
mov     [esi+5C0h], eax
mov     [esi+5C4h], al
call    AudioController__Init
lea     ecx, [esi+6B4h]
call    AudioController__Init
lea     ecx, [esp+10h+arg_4]
mov     word ptr [esp+10h+arg_4], 4000h
push    ecx
lea     ecx, [esi+370h]
call    FacingClass__Update
mov     [esi+620h], ebx
mov     eax, ds:0A8EB48h
cmp     ds:0A8EB50h, eax
jl      short loc_43BB0F
cmp     ds:0A8EB4Dh, bl
jnz     short loc_43BAEF
cmp     eax, ebx
jnz     short loc_43BB27

loc_43BAEF:                             ; CODE XREF: BuildingClass__Construct+3A9↑j
mov     ecx, ds:0A8EB54h
cmp     ecx, ebx
jle     short loc_43BB27
mov     edx, ds:0A8EB40h
add     eax, ecx
push    ebx
push    eax
mov     ecx, 0A8EB40h
call    dword ptr [edx+8]
test    al, al
jz      short loc_43BB27

loc_43BB0F:                             ; CODE XREF: BuildingClass__Construct+3A1↑j
mov     ecx, ds:0A8EB50h
mov     eax, ecx
inc     ecx
mov     ds:0A8EB50h, ecx
mov     ecx, ds:0A8EB44h
mov     [ecx+eax*4], esi

loc_43BB27:                             ; CODE XREF: BuildingClass__Construct+3AD↑j
; BuildingClass__Construct+3B7↑j ...
mov     ecx, esi        ; this
call    BuildingClass__Update
mov     eax, dword_A8ED54+808F4h
mov     ecx, dword_A8ED54+808FCh
cmp     ecx, eax
jl      short loc_43BB69
cmp     byte ptr dword_A8ED54+808F9h, bl
jnz     short loc_43BB49
cmp     eax, ebx
jnz     short loc_43BB81

loc_43BB49:                             ; CODE XREF: BuildingClass__Construct+403↑j
mov     ecx, dword_A8ED54+80900h
cmp     ecx, ebx
jle     short loc_43BB81
mov     edx, dword_A8ED54+808ECh
add     eax, ecx
push    ebx
push    eax
mov     ecx, (offset dword_A8ED54+808ECh)
call    dword ptr [edx+8]
test    al, al
jz      short loc_43BB81

loc_43BB69:                             ; CODE XREF: BuildingClass__Construct+3FB↑j
mov     ecx, dword_A8ED54+808FCh
mov     eax, ecx
inc     ecx
mov     dword_A8ED54+808FCh, ecx
mov     ecx, dword_A8ED54+808F0h
mov     [ecx+eax*4], esi

loc_43BB81:                             ; CODE XREF: BuildingClass__Construct+407↑j
; BuildingClass__Construct+411↑j ...
mov     eax, dword_A8ED54+8086Ch
mov     ecx, dword_A8ED54+80874h
cmp     ecx, eax
jl      short loc_43BBBC
cmp     byte ptr dword_A8ED54+80871h, bl
jnz     short loc_43BB9C
cmp     eax, ebx
jnz     short loc_43BBD4

loc_43BB9C:                             ; CODE XREF: BuildingClass__Construct+456↑j
mov     ecx, dword_A8ED54+80878h
cmp     ecx, ebx
jle     short loc_43BBD4
mov     edx, dword_A8ED54+80864h
add     eax, ecx
push    ebx
push    eax
mov     ecx, (offset dword_A8ED54+80864h)
call    dword ptr [edx+8]
test    al, al
jz      short loc_43BBD4

loc_43BBBC:                             ; CODE XREF: BuildingClass__Construct+44E↑j
mov     ecx, dword_A8ED54+80874h
mov     eax, ecx
inc     ecx
mov     dword_A8ED54+80874h, ecx
mov     ecx, dword_A8ED54+80868h
mov     [ecx+eax*4], esi

loc_43BBD4:                             ; CODE XREF: BuildingClass__Construct+45A↑j
; BuildingClass__Construct+464↑j ...
push    ebp
call    AbstractClass__GetVtable3
mov     edx, dword_A8ED54+7FAF0h
mov     [esp+10h+arg_0], eax
mov     eax, dword_A8ED54+7FAF4h
inc     edx
cmp     edx, eax
jle     loc_43BC80
cmp     eax, ebx
jnz     short loc_43BBFD
mov     ebp, 0Ah
jmp     short loc_43BC07
; ---------------------------------------------------------------------------

loc_43BBFD:                             ; CODE XREF: BuildingClass__Construct+4B4↑j
mov     ebp, eax
cmp     ebp, ebx
jl      loc_43BCB3

loc_43BC07:                             ; CODE XREF: BuildingClass__Construct+4BB↑j
add     eax, ebp
mov     [esp+10h+arg_4], eax
shl     eax, 3
push    eax             ; Size
call    ??2_YAPAXI_Z
mov     edi, eax
add     esp, 4
cmp     edi, ebx
jz      loc_43BCB3
mov     ecx, [esp+10h+arg_4]
xor     eax, eax
dec     ecx
mov     [esp+10h+arg_4], ecx
mov     ecx, dword_A8ED54+7FAF0h
cmp     ecx, ebx
jle     short loc_43BC59

loc_43BC38:                             ; CODE XREF: BuildingClass__Construct+517↓j
mov     edx, dword_A8ED54+7FAECh
lea     ecx, [edx+eax*8]
inc     eax
mov     edx, [ecx]
mov     [edi+eax*8-8], edx
mov     ecx, [ecx+4]
mov     [edi+eax*8-4], ecx
mov     ecx, dword_A8ED54+7FAF0h
cmp     eax, ecx
jl      short loc_43BC38

loc_43BC59:                             ; CODE XREF: BuildingClass__Construct+4F6↑j
mov     edx, dword_A8ED54+7FAECh
push    edx             ; Block
call    ??3_YAXPAX_Z
mov     eax, dword_A8ED54+7FAF4h
add     esp, 4
add     eax, ebp
mov     dword_A8ED54+7FAECh, edi
mov     dword_A8ED54+7FAF4h, eax
mov     dword_A8ED54+7FAFCh, ebx

loc_43BC80:                             ; CODE XREF: BuildingClass__Construct+4AC↑j
mov     ecx, dword_A8ED54+7FAECh
mov     edx, dword_A8ED54+7FAF0h
mov     eax, [esp+10h+arg_0]
mov     [ecx+edx*8], eax
mov     eax, dword_A8ED54+7FAF0h
mov     ecx, dword_A8ED54+7FAECh
mov     [ecx+eax*8+4], esi
mov     eax, dword_A8ED54+7FAF0h
inc     eax
mov     byte ptr dword_A8ED54+7FAF8h, bl
mov     dword_A8ED54+7FAF0h, eax

loc_43BCB3:                             ; CODE XREF: BuildingClass__Construct+4C1↑j
; BuildingClass__Construct+4DD↑j
mov     eax, [esi+520h]
cmp     eax, ebx
jz      short loc_43BCDE
mov     eax, [eax+1780h]
cmp     eax, 1
jge     short loc_43BCCD
mov     eax, 1

loc_43BCCD:                             ; CODE XREF: BuildingClass__Construct+586↑j
push    eax
mov     ecx, esi
call    RadioClass__SetLinkCount
mov     eax, esi
pop     edi
pop     esi
pop     ebp
pop     ebx
retn    8
; ---------------------------------------------------------------------------

loc_43BCDE:                             ; CODE XREF: BuildingClass__Construct+57B↑j
push    1
mov     ecx, esi
call    RadioClass__SetLinkCount
mov     eax, esi
pop     edi
pop     esi
pop     ebp
pop     ebx
retn    8
*/
}

// IDA 0x43bcf0
// 0x43bcf0
void BuildingClass::Dtor()
{
// [IDA decompile]
int __thiscall BuildingClass::Dtor(void **this)
{
  void **v2; // edi
  int v3; // edx
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  void **v8; // edi
  int v9; // ebx
  int v10; // eax
  char v11; // cl
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // ecx
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  char *v20; // eax
  int v21; // eax
  int v22; // ecx
  int i; // eax
  _DWORD *v24; // eax
  int v25; // edi
  int v26; // ebx
  void *v27; // eax
  void *v28; // eax
  void **Vtable3; // [esp+18h] [ebp-4h] BYREF

  v2 = this + 429;
  *this = &BuildingClass_Vtable;
  *(this + 1) = &BuildingClass_Vtable2;
  *(this + 2) = &BuildingClass_Vtable3;
  *(this + 3) = &BuildingClass_Vtable4;
  Mixer::ReleaseChannel((int **)this + 429);
  Mixer::ReleaseChannel((int **)this + 424);
  AudioFileClass::Release(v2);
  AudioFileClass::Release(this + 424);
  v4 = (int)*(this + 389);
  if ( v4 )
  {
    MapClass::ScrollOnce(v4, 0);
    v5 = (int)*(this + 389);
    if ( v5 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1);
    *(this + 389) = 0;
  }
  LOBYTE(v3) = 1;
  AbstractClass::AnnounceExpiredPointer(this, v3);
  BuildingClass::Sell((#377 *)this);
  Vtable3 = this;
  v6 = (*(int (__thiscall **)(_DWORD *, void ***))(MEMORY[0x87F7E8][539862] + 16))(&MEMORY[0x87F7E8][539862], &Vtable3);
  if ( v6 != -1 )
    Vector::RemoveAt(&MEMORY[0x87F7E8][539862], v6);
  Vtable3 = this;
  v7 = (*(int (__thiscall **)(_DWORD *, void ***))(MEMORY[0x87F7E8][53886] + 16))(&MEMORY[0x87F7E8][53886], &Vtable3);
  if ( v7 != -1 )
    Vector::RemoveAt(&MEMORY[0x87F7E8][53886], v7);
  BuildingClass::ClearAnims((int *)this, -2);
  BuildingTypeClass::IsPowered((int)*(this + 328));
  v8 = this + 370;
  v9 = 8;
  do
  {
    if ( *v8 )
    {
      (*(void (__thiscall **)(void *))(*(_DWORD *)*v8 + 248))(*v8);
      *v8 = 0;
    }
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( LOBYTE(MEMORY[0x87F7E8][539758]) )
  {
    v10 = (int)*(this + 328);
    if ( v10 )
    {
      if ( *(_BYTE *)(v10 + 5831) )
      {
        v11 = *((_BYTE *)this + 1772);
        *((_BYTE *)this + 1771) = -1;
        if ( !v11 )
          *((_BYTE *)this + 1772) = *(_BYTE *)(v10 + 5895);
        *((_BYTE *)this + 128) = 1;
        *((_BYTE *)this + 1772) = 1;
        BuildingClass::CleanupOccupation((#377 *)this);
      }
    }
  }
  v12 = *((_DWORD *)*(this + 328) + 1468);
  if ( (v12 == -1
     || (v13 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(MEMORY[0x87F7E8][528693] + 4 * v12) + 40) + 200)) == 0
     || DynamicVector::GetOrGrow((_DWORD *)*(this + 135) + 5460, *(_DWORD *)(v13 + 3576)))
    && *((_DWORD *)*(this + 328) + 1468) != -1
    || ((v14 = *((_DWORD *)*(this + 328) + 1469), v14 == -1)
     || (v15 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(MEMORY[0x87F7E8][528693] + 4 * v14) + 40) + 200)) == 0
     || DynamicVector::GetOrGrow((_DWORD *)*(this + 135) + 5460, *(_DWORD *)(v15 + 3576)))
    && *((_DWORD *)*(this + 328) + 1469) != -1 )
  {
    SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((int)*(this + 135));
  }
  if ( LOBYTE(MEMORY[0x87F7E8][539758]) )
  {
    if ( *(this + 27) != *(this + 337) )
      *((_BYTE *)*(this + 135) + 22392) = 1;
    if ( LOBYTE(MEMORY[0x87F7E8][539758]) && *(this + 328) )
    {
      v16 = *(this + 135);
      if ( v16 )
        HouseClass::DecrementUnitCount(v16, this);
      BuildingClass::Sell((#377 *)this);
    }
  }
  v17 = (int)*(this + 329);
  if ( v17 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v17 + 32))(v17, 1);
  *(this + 329) = 0;
  Vtable3 = this;
  v18 = (*(int (__thiscall **)(int *, void ***))(dword_A8ED54[131609] + 16))(&dword_A8ED54[131609], &Vtable3);
  if ( v18 != -1 )
    DynamicVector::RemoveItem(&dword_A8ED54[131609], v18);
  Vtable3 = this;
  v19 = (*(int (__thiscall **)(int *, void ***))(dword_A8ED54[131643] + 16))(&dword_A8ED54[131643], &Vtable3);
  if ( v19 != -1 )
    DynamicVector::RemoveItem(&dword_A8ED54[131643], v19);
  Vtable3 = (void **)AbstractClass::GetVtable3((int)(this + 1));
  v20 = BuildingTypeClass::Dequeue((char **)&dword_A8ED54[130747], (int *)&Vtable3);
  if ( v20 )
  {
    v21 = (int)&v20[-dword_A8ED54[130747]] >> 3;
    if ( v21 != -1 )
    {
      v22 = v21 + 1;
      for ( i = dword_A8ED54[130748]; v22 < dword_A8ED54[130748]; i = dword_A8ED54[130748] )
      {
        v24 = (_DWORD *)(dword_A8ED54[130747] + 8 * v22++);
        *(v24 - 2) = *v24;
        *(v24 - 1) = v24[1];
      }
      dword_A8ED54[130748] = i - 1;
      *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748]) = 0;
      *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748] + 4) = 0;
      dword_A8ED54[130751] = 0;
    }
  }
  *(this + 328) = 0;
  *((_BYTE *)this + 144) = 0;
  v25 = (int)*(this + 413);
  (*((void (__thiscall **)(void **))*(this + 411) + 3))(this + 411);
  (*((void (__thiscall **)(void **, int, _DWORD))*(this + 411) + 2))(this + 411, v25, 0);
  v26 = (int)*(this + 419);
  (*((void (__thiscall **)(void **))*(this + 417) + 3))(this + 417);
  (*((void (__thiscall **)(void **, int, _DWORD))*(this + 417) + 2))(this + 417, v26, 0);
  v27 = *(this + 418);
  *(this + 417) = &VectorClass<InfantryClass *>::`vftable';
  if ( v27 && *((_BYTE *)this + 1681) )
  {
    __3_YAXPAX_Z(v27);
    *(this + 418) = 0;
  }
  *((_BYTE *)this + 1681) = 0;
  *(this + 419) = 0;
  v28 = *(this + 412);
  *(this + 411) = &VectorClass<InfantryClass *>::`vftable';
  if ( v28 && *((_BYTE *)this + 1657) )
  {
    __3_YAXPAX_Z(v28);
    *(this + 412) = 0;
  }
  *((_BYTE *)this + 1657) = 0;
  *(this + 413) = 0;
  return TechnoClass::DTOR((int)this);
}

/* ASM:
push    ecx
push    ebx
push    ebp
push    esi
mov     esi, ecx
push    edi
lea     edi, [esi+6B4h]
mov     dword ptr [esi], offset BuildingClass_Vtable
mov     ecx, edi
mov     dword ptr [esi+4], offset BuildingClass_Vtable2
mov     dword ptr [esi+8], offset BuildingClass_Vtable3
mov     dword ptr [esi+0Ch], offset BuildingClass_Vtable4
call    Mixer__ReleaseChannel
lea     ebx, [esi+6A0h]
mov     ecx, ebx
call    Mixer__ReleaseChannel
mov     ecx, edi
call    AudioFileClass__Release
mov     ecx, ebx
call    AudioFileClass__Release
mov     ecx, [esi+614h]
xor     ebp, ebp
cmp     ecx, ebp
jz      short loc_43BD63
push    ebp
call    MapClass__ScrollOnce
mov     ecx, [esi+614h]
cmp     ecx, ebp
jz      short loc_43BD5D
mov     eax, [ecx]
push    1
call    dword ptr [eax+20h]

loc_43BD5D:                             ; CODE XREF: BuildingClass__Dtor+64↑j
mov     [esi+614h], ebp

loc_43BD63:                             ; CODE XREF: BuildingClass__Dtor+54↑j
mov     dl, 1
mov     ecx, esi        ; void **
call    AbstractClass__AnnounceExpiredPointer
mov     ecx, esi        ; this
call    BuildingClass__Sell
mov     edx, ds:0A8EB40h
lea     ecx, [esp+14h+var_4]
push    ecx
mov     ecx, 0A8EB40h
mov     [esp+18h+var_4], esi
call    dword ptr [edx+10h]
cmp     eax, 0FFFFFFFFh
jz      short loc_43BD9A
push    eax
mov     ecx, 0A8EB40h
call    Vector__RemoveAt

loc_43BD9A:                             ; CODE XREF: BuildingClass__Dtor+9D↑j
mov     edx, ds:8B41E0h
lea     eax, [esp+14h+var_4]
push    eax
mov     ecx, 8B41E0h
mov     [esp+18h+var_4], esi
call    dword ptr [edx+10h]
cmp     eax, 0FFFFFFFFh
jz      short loc_43BDC1
push    eax
mov     ecx, 8B41E0h
call    Vector__RemoveAt

loc_43BDC1:                             ; CODE XREF: BuildingClass__Dtor+C4↑j
push    0FFFFFFFEh
mov     ecx, esi
call    BuildingClass__ClearAnims
mov     ecx, [esi+520h]
call    BuildingTypeClass__IsPowered
lea     edi, [esi+5C8h]
mov     ebx, 8

loc_43BDE0:                             ; CODE XREF: BuildingClass__Dtor+104↓j
mov     ecx, [edi]
cmp     ecx, ebp
jz      short loc_43BDF0
mov     eax, [ecx]
call    dword ptr [eax+0F8h]
mov     [edi], ebp

loc_43BDF0:                             ; CODE XREF: BuildingClass__Dtor+F4↑j
add     edi, 4
dec     ebx
jnz     short loc_43BDE0
mov     al, ds:0A8E9A0h
test    al, al
jz      short loc_43BE47
mov     eax, [esi+520h]
cmp     eax, ebp
jz      short loc_43BE47
mov     cl, [eax+16C7h]
test    cl, cl
jz      short loc_43BE47
mov     cl, [esi+6ECh]
mov     byte ptr [esi+6EBh], 0FFh
test    cl, cl
jnz     short loc_43BE30
mov     cl, [eax+1707h]
mov     [esi+6ECh], cl

loc_43BE30:                             ; CODE XREF: BuildingClass__Dtor+132↑j
push    1
mov     ecx, esi        ; this
mov     byte ptr [esi+80h], 1
mov     byte ptr [esi+6ECh], 1
call    BuildingClass__CleanupOccupation

loc_43BE47:                             ; CODE XREF: BuildingClass__Dtor+10D↑j
; BuildingClass__Dtor+117↑j ...
mov     edx, [esi+520h]
or      edi, 0FFFFFFFFh
mov     eax, [edx+16F0h]
cmp     eax, edi
jz      short loc_43BE8C
mov     ecx, ds:0A83CBCh
mov     edx, [ecx+eax*4]
mov     eax, [edx+28h]
mov     eax, [eax+0C8h]
cmp     eax, ebp
jz      short loc_43BE8C
mov     ecx, [eax+0DF8h]
push    ecx
mov     ecx, [esi+21Ch]
add     ecx, 5550h
call    DynamicVector__GetOrGrow
test    eax, eax
jz      short loc_43BE9A

loc_43BE8C:                             ; CODE XREF: BuildingClass__Dtor+168↑j
; BuildingClass__Dtor+17E↑j
mov     edx, [esi+520h]
cmp     [edx+16F0h], edi
jnz     short loc_43BEEA

loc_43BE9A:                             ; CODE XREF: BuildingClass__Dtor+19A↑j
mov     eax, [esi+520h]
mov     eax, [eax+16F4h]
cmp     eax, edi
jz      short loc_43BEDC
mov     ecx, ds:0A83CBCh
mov     edx, [ecx+eax*4]
mov     eax, [edx+28h]
mov     eax, [eax+0C8h]
cmp     eax, ebp
jz      short loc_43BEDC
mov     ecx, [eax+0DF8h]
push    ecx
mov     ecx, [esi+21Ch]
add     ecx, 5550h
call    DynamicVector__GetOrGrow
test    eax, eax
jz      short loc_43BEF5

loc_43BEDC:                             ; CODE XREF: BuildingClass__Dtor+1B8↑j
; BuildingClass__Dtor+1CE↑j
mov     edx, [esi+520h]
cmp     [edx+16F4h], edi
jz      short loc_43BEF5

loc_43BEEA:                             ; CODE XREF: BuildingClass__Dtor+1A8↑j
mov     ecx, [esi+21Ch]
call    SuperWeapon__UpdateSuperWeaponsOwnedHouseClass

loc_43BEF5:                             ; CODE XREF: BuildingClass__Dtor+1EA↑j
; BuildingClass__Dtor+1F8↑j
mov     al, ds:0A8E9A0h
test    al, al
jz      short loc_43BF40
mov     eax, [esi+6Ch]
mov     ecx, [esi+544h]
cmp     eax, ecx
jz      short loc_43BF18
mov     ecx, [esi+21Ch]
mov     byte ptr [ecx+5778h], 1

loc_43BF18:                             ; CODE XREF: BuildingClass__Dtor+219↑j
mov     al, ds:0A8E9A0h
test    al, al
jz      short loc_43BF40
cmp     [esi+520h], ebp
jz      short loc_43BF40
mov     ecx, [esi+21Ch]
cmp     ecx, ebp
jz      short loc_43BF39
push    esi
call    HouseClass__DecrementUnitCount

loc_43BF39:                             ; CODE XREF: BuildingClass__Dtor+241↑j
mov     ecx, esi        ; this
call    BuildingClass__Sell

loc_43BF40:                             ; CODE XREF: BuildingClass__Dtor+20C↑j
; BuildingClass__Dtor+22F↑j ...
mov     ecx, [esi+524h]
cmp     ecx, ebp
jz      short loc_43BF51
mov     edx, [ecx]
push    1
call    dword ptr [edx+20h]

loc_43BF51:                             ; CODE XREF: BuildingClass__Dtor+258↑j
mov     [esi+524h], ebp
mov     edx, dword_A8ED54+80864h
lea     eax, [esp+14h+var_4]
mov     ecx, (offset dword_A8ED54+80864h)
push    eax
mov     [esp+18h+var_4], esi
call    dword ptr [edx+10h]
cmp     eax, edi
jz      short loc_43BF7D
push    eax
mov     ecx, (offset dword_A8ED54+80864h)
call    DynamicVector__RemoveItem

loc_43BF7D:                             ; CODE XREF: BuildingClass__Dtor+280↑j
mov     edx, dword_A8ED54+808ECh
lea     eax, [esp+14h+var_4]
push    eax
mov     ecx, (offset dword_A8ED54+808ECh)
mov     [esp+18h+var_4], esi
call    dword ptr [edx+10h]
cmp     eax, edi
jz      short loc_43BFA3
push    eax
mov     ecx, (offset dword_A8ED54+808ECh)
call    DynamicVector__RemoveItem

loc_43BFA3:                             ; CODE XREF: BuildingClass__Dtor+2A6↑j
lea     eax, [esi+4]
push    eax
call    AbstractClass__GetVtable3
mov     [esp+14h+var_4], eax
lea     eax, [esp+14h+var_4]
push    eax
mov     ecx, (offset dword_A8ED54+7FAECh)
call    BuildingTypeClass__Dequeue
cmp     eax, ebp
jz      short loc_43C022
sub     eax, dword_A8ED54+7FAECh
sar     eax, 3
cmp     eax, edi
jz      short loc_43C022
lea     ecx, [eax+1]
mov     eax, dword_A8ED54+7FAF0h
cmp     ecx, eax
jge     short loc_43BFFA

loc_43BFDC:                             ; CODE XREF: BuildingClass__Dtor+308↓j
mov     edx, dword_A8ED54+7FAECh
lea     eax, [edx+ecx*8]
inc     ecx
mov     edx, [eax]
mov     [eax-8], edx
mov     edx, [eax+4]
mov     [eax-4], edx
mov     eax, dword_A8ED54+7FAF0h
cmp     ecx, eax
jl      short loc_43BFDC

loc_43BFFA:                             ; CODE XREF: BuildingClass__Dtor+2EA↑j
mov     edi, dword_A8ED54+7FAECh
dec     eax
xor     ecx, ecx
mov     dword_A8ED54+7FAF0h, eax
mov     [edi+eax*8], ecx
mov     eax, dword_A8ED54+7FAF0h
mov     ecx, dword_A8ED54+7FAECh
xor     edx, edx
mov     [ecx+eax*8+4], edx
mov     dword_A8ED54+7FAFCh, ebp

loc_43C022:                             ; CODE XREF: BuildingClass__Dtor+2D1↑j
; BuildingClass__Dtor+2DE↑j
mov     [esi+520h], ebp
lea     ebp, [esi+66Ch]
mov     byte ptr [esi+90h], 0
mov     ecx, ebp
mov     edx, [ebp+0]
mov     edi, [ebp+8]
call    dword ptr [edx+0Ch]
mov     eax, [ebp+0]
push    0
push    edi
mov     ecx, ebp
call    dword ptr [eax+8]
mov     edx, [esi+684h]
mov     ebx, [esi+68Ch]
lea     edi, [esi+684h]
mov     ecx, edi
call    dword ptr [edx+0Ch]
mov     eax, [edi]
push    0
push    ebx
mov     ecx, edi
call    dword ptr [eax+8]
mov     eax, [edi+4]
xor     ebx, ebx
cmp     eax, ebx
mov     dword ptr [edi], offset ??_7?$VectorClass@PAVInfantryClass@@@@6B@ ; const VectorClass<InfantryClass *>::`vftable'
jz      short loc_43C08E
mov     cl, [edi+0Dh]
test    cl, cl
jz      short loc_43C08E
push    eax             ; Block
call    ??3_YAXPAX_Z
add     esp, 4
mov     [edi+4], ebx

loc_43C08E:                             ; CODE XREF: BuildingClass__Dtor+389↑j
; BuildingClass__Dtor+390↑j
mov     byte ptr [edi+0Dh], 0
mov     [edi+8], ebx
mov     eax, [ebp+4]
mov     dword ptr [ebp+0], offset ??_7?$VectorClass@PAVInfantryClass@@@@6B@ ; const VectorClass<InfantryClass *>::`vftable'
cmp     eax, ebx
jz      short loc_43C0B6
mov     cl, [ebp+0Dh]
test    cl, cl
jz      short loc_43C0B6
push    eax             ; Block
call    ??3_YAXPAX_Z
add     esp, 4
mov     [ebp+4], ebx

loc_43C0B6:                             ; CODE XREF: BuildingClass__Dtor+3B1↑j
; BuildingClass__Dtor+3B8↑j
mov     ecx, esi
mov     byte ptr [ebp+0Dh], 0
mov     [ebp+8], ebx
call    TechnoClass__DTOR
pop     edi
pop     esi
pop     ebp
pop     ebx
pop     ecx
retn
*/
}

// IDA 0x459f20: scalar destructor → calls Dtor, conditionally frees memory
// 0x459f20
int BuildingClass::ScalarDtor()
{
// [IDA decompile]
int __thiscall BuildingClass::ScalarDtor(#377 *this)
{
  char v3; // [esp+8h] [ebp+4h]

  BuildingClass::Dtor((void **)this);
  if ( (v3 & 1) != 0 )
    __3_YAXPAX_Z(this);
  return (int)this;
}

/* ASM:
push    esi
mov     esi, ecx
call    BuildingClass__Dtor
test    [esp+4+arg_0], 1
jz      short loc_459F38
push    esi             ; Block
call    ??3_YAXPAX_Z
add     esp, 4

loc_459F38:                             ; CODE XREF: BuildingClass__ScalarDtor+D↑j
mov     eax, esi
pop     esi
retn    4
*/
}

// Inherited from TechnoClass::Activate (IDA 0x70fbe0) — BuildingClass does not override
int BuildingClass::Activate()
{
    WasOnline = true;
    StuffEnabled = true;
    return 0;
}

// IDA 0x452480: deactivate building power
// 0x452480
int BuildingClass::Deactivate()
{
// [IDA decompile]
void __thiscall BuildingClass_Deactivate(int this)
{
  int v2; // ecx
  _BYTE *v3; // eax
  char v4; // cl
  int v5; // esi
  _BYTE **v6; // ebx

  v2 = *(_DWORD *)(this + 1556);
  *(_BYTE *)(this + 1770) = 0;
  if ( v2 )
    MapClass::ScrollOnce(v2, 0);
  v3 = *(_BYTE **)(this + 1312);
  if ( v3[5831] )
  {
    v4 = *(_BYTE *)(this + 1772);
    *(_BYTE *)(this + 1771) = -1;
    if ( !v4 )
      *(_BYTE *)(this + 1772) = v3[5895];
    *(_BYTE *)(this + 128) = 1;
  }
  if ( v3[3281] && *(_BYTE *)(this + 617) )
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 1048))(this);
  if ( *(_BYTE *)(*(_DWORD *)(this + 1312) + 5822) )
    BuildingClass::RepairPlacement((_BYTE *)this, 0);
  v5 = 0;
  v6 = (_BYTE **)(this + 1372);
  do
  {
    if ( *(_BYTE *)(*(_DWORD *)(this + 1312) + v5 + 3980) )
    {
      if ( *v6 )
        BuildingClass::SetField8(*v6);
    }
    v5 += 68;
    ++v6;
  }
  while ( v5 < 1428 );
}

/* ASM:
push    ebx
push    esi
push    edi
mov     edi, ecx
mov     ecx, [edi+614h]
mov     byte ptr [edi+6EAh], 0
test    ecx, ecx
jz      short loc_45249D
push    0
call    MapClass__ScrollOnce

loc_45249D:                             ; CODE XREF: BuildingClass__Deactivate+14↑j
mov     eax, [edi+520h]
mov     cl, [eax+16C7h]
test    cl, cl
jz      short loc_4524D1
mov     cl, [edi+6ECh]
mov     byte ptr [edi+6EBh], 0FFh
test    cl, cl
jnz     short loc_4524CA
mov     cl, [eax+1707h]
mov     [edi+6ECh], cl

loc_4524CA:                             ; CODE XREF: BuildingClass__Deactivate+3C↑j
mov     byte ptr [edi+80h], 1

loc_4524D1:                             ; CODE XREF: BuildingClass__Deactivate+2B↑j
mov     cl, [eax+0CD1h]
test    cl, cl
jz      short loc_4524EF
mov     al, [edi+269h]
test    al, al
jz      short loc_4524EF
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+418h]

loc_4524EF:                             ; CODE XREF: BuildingClass__Deactivate+59↑j
; BuildingClass__Deactivate+63↑j
mov     eax, [edi+520h]
mov     cl, [eax+16BEh]
test    cl, cl
jz      short loc_452508
push    0
mov     ecx, edi
call    BuildingClass__RepairPlacement

loc_452508:                             ; CODE XREF: BuildingClass__Deactivate+7D↑j
xor     esi, esi
lea     ebx, [edi+55Ch]

loc_452510:                             ; CODE XREF: BuildingClass__Deactivate+B8↓j
mov     ecx, [edi+520h]
mov     al, [ecx+esi+0F8Ch]
test    al, al
jz      short loc_45252C
mov     ecx, [ebx]
test    ecx, ecx
jz      short loc_45252C
call    BuildingClass__SetField8

loc_45252C:                             ; CODE XREF: BuildingClass__Deactivate+9F↑j
; BuildingClass__Deactivate+A5↑j
add     esi, 44h ; 'D'
add     ebx, 4
cmp     esi, 594h
jl      short loc_452510
pop     edi
pop     esi
pop     ebx
retn
*/
}

// IDA 0x459e80: Destroyed notification — set destroyed state
// 0x459e80
void BuildingClass::Destroyed(ObjectClass* killer)
{
// [IDA decompile]
int __thiscall BuildingClass::Destroyed(#377 *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  if ( !v2 )
    return -2147467261;
  *v2 = 237448646;
  v2[1] = 298949647;
  v2[2] = -1610610249;
  v2[3] = -777003740;
  return 0;
}

/* ASM:
mov     eax, [esp+arg_4]
test    eax, eax
jnz     short loc_459E90
mov     eax, 80004003h
retn    8
; ---------------------------------------------------------------------------

loc_459E90:                             ; CODE XREF: BuildingClass__Destroyed+6↑j
mov     ecx, dword ptr ds:stru_7E96A0
mov     [eax], ecx
mov     edx, dword ptr ds:stru_7E96A0+4
mov     [eax+4], edx
mov     ecx, dword ptr ds:stru_7E96A0+8
mov     [eax+8], ecx
mov     edx, dword ptr ds:stru_7E96A0+0Ch
mov     [eax+0Ch], edx
xor     eax, eax
retn    8
*/
}

// IDA 0x43bd40: after destruction cleanup
// 0x441f60
void BuildingClass::AfterDestruction()
{
// [IDA decompile]
char __thiscall TriggerBuildingDestruction(_DWORD *this)
{
  _DWORD *v1; // ebx
  _WORD *v2; // ebp
  _DWORD *v3; // eax
  _WORD *v4; // eax
  __int16 v5; // dx
  __int16 *v6; // esi
  _DWORD *v7; // edi
  int *PlacementRectBuildingClass; // esi
  int *StartCoordsHouse; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // edx
  int v13; // ebp
  int v14; // eax
  int v15; // esi
  int v16; // edi
  int *v17; // eax
  void *v18; // eax
  char result; // al
  _DWORD *v20; // eax
  int v21; // edx
  int v22; // [esp+10h] [ebp-40h] BYREF
  int v23; // [esp+14h] [ebp-3Ch]
  int v24; // [esp+18h] [ebp-38h] BYREF
  int v25; // [esp+1Ch] [ebp-34h]
  _DWORD v26[2]; // [esp+20h] [ebp-30h] BYREF
  char v27[4]; // [esp+28h] [ebp-28h] BYREF
  char v28[4]; // [esp+2Ch] [ebp-24h] BYREF
  int v29[4]; // [esp+30h] [ebp-20h] BYREF
  _DWORD v30[4]; // [esp+40h] [ebp-10h] BYREF

  v1 = this;
  v26[0] = this;
  if ( (unsigned __int8)((_DWORD (__stdcall *)(char *, char *))BuildingClass::GetPlacementCoords)(v28, v27) )
  {
    v2 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v1 + 264))(v1, 0);
    v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v1 + 172))(v1, v29);
    LOWORD(v23) = *v3 / 256;
    HIWORD(v23) = v3[1] / 256;
    v22 = v23;
    while ( *v2 != 0x7FFF || v2[1] != 0x7FFF )
    {
      v4 = v2;
      v2 += 2;
      v5 = HIWORD(v22) + v4[1];
      LOWORD(v23) = v22 + *v4;
      HIWORD(v23) = v5;
      v24 = v23;
      v6 = (__int16 *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v24);
      BuildingClass::CreatePlacementCrater(v6);
      *((_DWORD *)v6 + 17) = 239;
      *((_DWORD *)v6 + 16) = 0;
      House::AnnounceUpgrade((int)v6, -1);
      Cell::SetRadar(MEMORY[0x87F7E8], v6 + 18);
      Radar::Update(MEMORY[0x87F7E8], v6 + 18);
      ((void (__thiscall *)(__int16 *))AbstractClass::ClearTargetToMeClearManagerTarget)(v6);
    }
    v7 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v22);
    v7[16] = v1[328];
    PlacementRectBuildingClass = BuildingClass::GetPlacementRect((int)v7, v29);
    StartCoordsHouse = House::GetStartCoords((int)v7, v30);
    if ( StartCoordsHouse[2] <= 0 || StartCoordsHouse[3] <= 0 )
    {
      v10 = *PlacementRectBuildingClass;
      v12 = PlacementRectBuildingClass[1];
      v16 = PlacementRectBuildingClass[2];
      v14 = PlacementRectBuildingClass[3];
    }
    else
    {
      v23 = PlacementRectBuildingClass[2];
      if ( v23 <= 0 || (v25 = PlacementRectBuildingClass[3], v25 <= 0) )
      {
        v10 = *StartCoordsHouse;
        v12 = StartCoordsHouse[1];
        v16 = StartCoordsHouse[2];
        v14 = StartCoordsHouse[3];
      }
      else
      {
        v10 = *StartCoordsHouse;
        v11 = *PlacementRectBuildingClass;
        v12 = StartCoordsHouse[1];
        v13 = StartCoordsHouse[2];
        v14 = StartCoordsHouse[3];
        if ( v10 > *PlacementRectBuildingClass )
        {
          v13 += v10 - v11;
          v10 = *PlacementRectBuildingClass;
        }
        v15 = PlacementRectBuildingClass[1];
        v24 = v15;
        if ( v12 > v15 )
        {
          v14 += v12 - v15;
          v12 = v15;
        }
        if ( v10 + v13 < v11 + v23 )
          v13 = v11 - v10 + v23 + 1;
        if ( v14 + v12 < v25 + v24 )
          v14 = v25 + v24 - v12 + 1;
        v1 = (_DWORD *)v26[0];
        v16 = v13;
      }
    }
    v26[0] = v10 - MEMORY[0x87F7E8][7662];
    v26[1] = v12 - MEMORY[0x87F7E8][7663];
    v17 = Rect::Construct(v30, v26, v16, v14);
    Cell::CreateCrater(*v17, v17[1], v17[2], v17[3], 0);
    v18 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v22);
    Tactical::AddCellToDrawList(MEMORY[0x87F7E8][7887], (int)v18);
  }
  result = *(_BYTE *)(v1[328] + 5991);
  if ( result )
  {
    v20 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v1 + 172))(v1, v29);
    LOWORD(v22) = *v20 / 256;
    v21 = v1[328];
    HIWORD(v22) = v20[1] / 256;
    if ( *(_BYTE *)(v21 + 5993) )
      return BuildingClass::SearchPlacement(MEMORY[0x87F7E8], v22, 0);
    else
      return BuildingClass::SearchPlacement(MEMORY[0x87F7E8], v22, 20);
  }
  return result;
}

/* ASM:
sub     esp, 40h
push    ebx
push    ebp
mov     ebx, ecx
push    esi
lea     eax, [esp+4Ch+var_28]
push    edi
lea     ecx, [esp+50h+var_24]
push    eax
push    ecx
mov     ecx, [ebx+520h]
mov     [esp+58h+var_30], ebx
call    BuildingClass__GetPlacementCoords
test    al, al
jz      loc_4421A4
mov     edx, [ebx]
push    0
mov     ecx, ebx
call    dword ptr [edx+108h]
lea     ecx, [esp+50h+var_20]
mov     ebp, eax
mov     eax, [ebx]
push    ecx
mov     ecx, ebx
call    dword ptr [eax+0ACh]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+50h+var_3C], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+50h+var_3C+2], ax
mov     edx, [esp+50h+var_3C]
mov     [esp+50h+var_40], edx

loc_441FD8:                             ; CODE XREF: BuildingClass__AfterDestruction+FF↓j
cmp     word ptr [ebp+0], 7FFFh
jnz     short loc_441FE8
cmp     word ptr [ebp+2], 7FFFh
jz      short loc_442064

loc_441FE8:                             ; CODE XREF: BuildingClass__AfterDestruction+7E↑j
mov     eax, ebp
add     ebp, 4
mov     cx, [eax]
mov     dx, [eax+2]
add     cx, word ptr [esp+50h+var_40]
add     dx, word ptr [esp+50h+var_40+2]
mov     word ptr [esp+50h+var_3C], cx
lea     ecx, [esp+50h+var_38]
mov     word ptr [esp+50h+var_3C+2], dx
mov     eax, [esp+50h+var_3C]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+54h+var_38], eax
call    CellCoord__To_CellObj
mov     esi, eax
mov     ecx, esi
call    BuildingClass__CreatePlacementCrater
push    0FFFFFFFFh
mov     ecx, esi
mov     dword ptr [esi+44h], 0EFh
mov     dword ptr [esi+40h], 0
call    House__AnnounceUpgrade
lea     edi, [esi+24h]
mov     ecx, 87F7E8h
push    edi
call    Cell__SetRadar
push    edi
mov     ecx, 87F7E8h
call    Radar__Update
mov     ecx, esi
call    AbstractClass__ClearTargetToMeClearManagerTarget
jmp     loc_441FD8
; ---------------------------------------------------------------------------

loc_442064:                             ; CODE XREF: BuildingClass__AfterDestruction+86↑j
lea     edx, [esp+50h+var_40]
mov     ecx, 87F7E8h
push    edx
call    CellCoord__To_CellObj
lea     ecx, [esp+50h+var_20]
mov     edi, eax
mov     eax, [ebx+520h]
push    ecx
mov     ecx, edi
mov     [edi+40h], eax
call    BuildingClass__GetPlacementRect
lea     edx, [esp+50h+var_10]
mov     ecx, edi
push    edx
mov     esi, eax
call    House__GetStartCoords
mov     ecx, [eax+8]
test    ecx, ecx
jle     loc_44212E
mov     ecx, [eax+0Ch]
test    ecx, ecx
jle     loc_44212E
mov     ecx, [esi+8]
test    ecx, ecx
mov     [esp+50h+var_3C], ecx
jle     short loc_442121
mov     ecx, [esi+0Ch]
test    ecx, ecx
mov     [esp+50h+var_34], ecx
jle     short loc_442121
mov     ecx, [eax]
mov     edi, [esi]
mov     edx, [eax+4]
mov     ebp, [eax+8]
mov     eax, [eax+0Ch]
cmp     ecx, edi
jle     short loc_4420DB
sub     ecx, edi
add     ebp, ecx
mov     ecx, edi

loc_4420DB:                             ; CODE XREF: BuildingClass__AfterDestruction+173↑j
mov     esi, [esi+4]
cmp     edx, esi
mov     [esp+50h+var_38], esi
jle     short loc_4420EC
sub     edx, esi
add     eax, edx
mov     edx, esi

loc_4420EC:                             ; CODE XREF: BuildingClass__AfterDestruction+184↑j
mov     ebx, [esp+50h+var_3C]
lea     esi, [ecx+ebp]
add     ebx, edi
cmp     esi, ebx
jge     short loc_442103
mov     esi, [esp+50h+var_3C]
sub     edi, ecx
lea     ebp, [edi+esi+1]

loc_442103:                             ; CODE XREF: BuildingClass__AfterDestruction+197↑j
mov     esi, [esp+50h+var_38]
mov     edi, [esp+50h+var_34]
add     esi, edi
lea     edi, [eax+edx]
cmp     edi, esi
jge     short loc_442119
sub     esi, edx
inc     esi
mov     eax, esi

loc_442119:                             ; CODE XREF: BuildingClass__AfterDestruction+1B2↑j
mov     ebx, [esp+50h+var_30]
mov     edi, ebp
jmp     short loc_442139
; ---------------------------------------------------------------------------

loc_442121:                             ; CODE XREF: BuildingClass__AfterDestruction+157↑j
; BuildingClass__AfterDestruction+162↑j
mov     ecx, [eax]
mov     edx, [eax+4]
mov     edi, [eax+8]
mov     eax, [eax+0Ch]
jmp     short loc_442139
; ---------------------------------------------------------------------------

loc_44212E:                             ; CODE XREF: BuildingClass__AfterDestruction+13D↑j
; BuildingClass__AfterDestruction+148↑j
mov     ecx, [esi]
mov     edx, [esi+4]
mov     edi, [esi+8]
mov     eax, [esi+0Ch]

loc_442139:                             ; CODE XREF: BuildingClass__AfterDestruction+1BF↑j
; BuildingClass__AfterDestruction+1CC↑j
mov     esi, ds:886FA0h
mov     ebp, ds:886FA4h
push    0
sub     ecx, esi
push    eax
lea     eax, [esp+58h+var_30]
sub     edx, ebp
mov     [esp+58h+var_30], ecx
push    edi
push    eax
lea     ecx, [esp+60h+var_10]
mov     [esp+60h+var_2C], edx
call    Rect__Construct
mov     edx, [eax]
sub     esp, 10h
mov     ecx, esp
mov     [ecx], edx
mov     edx, [eax+4]
mov     [ecx+4], edx
mov     edx, [eax+8]
mov     eax, [eax+0Ch]
mov     [ecx+8], edx
mov     [ecx+0Ch], eax
mov     ecx, ds:887324h
call    Cell__CreateCrater
lea     ecx, [esp+50h+var_40]
push    ecx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, ds:887324h
push    eax
call    Tactical__AddCellToDrawList

loc_4421A4:                             ; CODE XREF: BuildingClass__AfterDestruction+24↑j
mov     edx, [ebx+520h]
mov     al, [edx+1767h]
test    al, al
jz      short loc_442226
mov     eax, [ebx]
lea     ecx, [esp+50h+var_20]
push    ecx
mov     ecx, ebx
call    dword ptr [eax+0ACh]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+50h+var_40], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
mov     edx, [ebx+520h]
sar     eax, 8
mov     word ptr [esp+50h+var_40+2], ax
mov     al, [edx+1769h]
test    al, al
jz      short loc_442215
mov     eax, [esp+50h+var_40]
push    0
push    eax
mov     ecx, 87F7E8h
call    BuildingClass__SearchPlacement
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 40h
retn
; ---------------------------------------------------------------------------

loc_442215:                             ; CODE XREF: BuildingClass__AfterDestruction+29A↑j
mov     ecx, [esp+50h+var_40]
push    14h
push    ecx
mov     ecx, 87F7E8h
call    BuildingClass__SearchPlacement

loc_442226:                             ; CODE XREF: BuildingClass__AfterDestruction+252↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 40h
retn
*/
}

// IDA 0x43bd10: Cleanup → clear anims + super weapon anim
// 0x43eeb0
void BuildingClass::Cleanup()
{
// [IDA decompile]
void __thiscall sub_43EEB0(int *this, int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  char v5[64]; // [esp+8h] [ebp-40h] BYREF

  if ( a2 != *(this + 383) && !*(_BYTE *)(*(this + 328) + 5829) )
  {
    BuildingClass::ClearAnims(this, 9);
    if ( a2 != -1 )
    {
      strcpy(v5, (const char *)(*(this + 328) + 504));
      v3 = strlen(asc_818D7C) + 1;
      qmemcpy(&v5[strlen(v5)], asc_818D7C, v3);
      v4 = strlen(v5);
      v5[v4] = a2 + 66;
      v5[v4 + 1] = 0;
      BuildingClass::PlayAnim(this, v3, v5, 9, 0, 0, 0);
      *(this + 383) = a2;
    }
  }
}

/* ASM:
sub     esp, 40h
push    ebx
mov     ebx, [esp+44h+arg_0]
push    ebp
mov     ebp, ecx
cmp     ebx, [ebp+5FCh]
jz      loc_43EF7F
mov     eax, [ebp+520h]
mov     cl, [eax+16C5h]
test    cl, cl
jnz     loc_43EF7F
push    9
mov     ecx, ebp
call    BuildingClass__ClearAnims
cmp     ebx, 0FFFFFFFFh
jz      loc_43EF7F
push    esi
push    edi
mov     edi, [ebp+520h]
or      ecx, 0FFFFFFFFh
add     edi, 1F8h
xor     eax, eax
repne scasb
not     ecx
sub     edi, ecx
lea     edx, [esp+50h+var_40]
mov     eax, ecx
mov     esi, edi
mov     edi, edx
lea     edx, [esp+50h+var_40]
shr     ecx, 2
rep movsd
mov     ecx, eax
xor     eax, eax
and     ecx, 3
push    0               ; int
rep movsb
mov     edi, offset asc_818D7C ; "_"
or      ecx, 0FFFFFFFFh
repne scasb
not     ecx
sub     edi, ecx
push    0               ; int
mov     esi, edi
mov     edi, edx
mov     edx, ecx
or      ecx, 0FFFFFFFFh
repne scasb
mov     ecx, edx
dec     edi
shr     ecx, 2
rep movsd
mov     ecx, edx
push    0               ; int
and     ecx, 3
push    9               ; int
rep movsb
lea     edi, [esp+60h+var_40]
or      ecx, 0FFFFFFFFh
repne scasb
not     ecx
mov     al, bl
dec     ecx
add     al, 42h ; 'B'
mov     [esp+ecx+60h+var_40], al
mov     [esp+ecx+60h+var_3F], 0
lea     ecx, [esp+60h+var_40]
push    ecx             ; void *
mov     ecx, ebp
call    BuildingClass__PlayAnim
pop     edi
mov     [ebp+5FCh], ebx
pop     esi

loc_43EF7F:                             ; CODE XREF: BuildingClass__Cleanup+11↑j
; BuildingClass__Cleanup+25↑j ...
pop     ebp
pop     ebx
add     esp, 40h
retn    4
*/
}

// IDA 0x43bcf0: Place building on map
void BuildingClass::Place(bool bUnk)
{
    ActuallyPlacedOnMap = true;
    BeingProduced = false;
    if (Type && Type->CloakGenerator) {
        HasCloakingData = 1;
        CloakRadius = Type->CloakRadiusInCells;
    }
}

// IDA 0x43bfa0: Load from save stream
void BuildingClass::LoadFromStream(void* stream)
{
    // IStream* pStm = (IStream*)(stream);
    // if (pStm)
    //     ObjectClass::LoadFromStream_Common(pStm); // removed in hpp rewrite
}

// IDA 0x454190: return sizeof(BuildingClass)
// 0x454190
int BuildingClass::Size()
{
// [IDA decompile]
int __thiscall BuildingClass::Size(#377 *this)
{
  int SizeMax; // ebp
  int v2; // edx
  int result; // eax
  int v4; // ebx
  int v5; // edx
  int v6; // ebx
  _DWORD *v7; // [esp+38h] [ebp+4h]
  int v8; // [esp+3Ch] [ebp+8h]
  int v9; // [esp+40h] [ebp+Ch] BYREF

  SizeMax = IPersistStream::GetSizeMax((int)v7, v8, v9);
  if ( SizeMax < 0 )
    return SizeMax;
  v2 = *(_DWORD *)v8;
  v9 = v7[415];
  result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v2 + 16))(v8, &v9, 4, 0);
  if ( result < 0 )
    return result;
  v4 = 0;
  if ( v9 <= 0 )
  {
LABEL_6:
    v5 = *(_DWORD *)v8;
    v9 = v7[421];
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v5 + 16))(v8, &v9, 4, 0);
    if ( result < 0 )
      return result;
    v6 = 0;
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v8 + 16))(v8, v7[418] + 4 * v6, 4, 0);
        if ( result < 0 )
          break;
        if ( ++v6 >= v9 )
          return SizeMax;
      }
      return result;
    }
    return SizeMax;
  }
  while ( 1 )
  {
    result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v8 + 16))(v8, v7[412] + 4 * v4, 4, 0);
    if ( result < 0 )
      return result;
    if ( ++v4 >= v9 )
      goto LABEL_6;
  }
}

/* ASM:
mov     eax, [esp+arg_8]
push    ebx
push    ebp
push    esi
mov     esi, [esp+0Ch+arg_4]
push    edi
mov     edi, [esp+10h+arg_0]
push    eax
push    esi
push    edi
call    IPersistStream__GetSizeMax
mov     ebp, eax
test    ebp, ebp
jl      loc_454242
mov     ecx, [edi+67Ch]
mov     edx, [esi]
push    0
lea     eax, [esp+14h+arg_8]
push    4
push    eax
push    esi
mov     [esp+20h+arg_8], ecx
call    dword ptr [edx+10h]
test    eax, eax
jl      short loc_454244
mov     eax, [esp+10h+arg_8]
xor     ebx, ebx
test    eax, eax
jle     short loc_4541FA

loc_4541D9:                             ; CODE XREF: BuildingClass__Size+68↓j
mov     edx, [edi+670h]
mov     ecx, [esi]
push    0
push    4
lea     eax, [edx+ebx*4]
push    eax
push    esi
call    dword ptr [ecx+10h]
test    eax, eax
jl      short loc_454244
mov     eax, [esp+10h+arg_8]
inc     ebx
cmp     ebx, eax
jl      short loc_4541D9

loc_4541FA:                             ; CODE XREF: BuildingClass__Size+47↑j
mov     ecx, [edi+694h]
mov     edx, [esi]
push    0
lea     eax, [esp+14h+arg_8]
push    4
push    eax
push    esi
mov     [esp+20h+arg_8], ecx
call    dword ptr [edx+10h]
test    eax, eax
jl      short loc_454244
mov     eax, [esp+10h+arg_8]
xor     ebx, ebx
test    eax, eax
jle     short loc_454242

loc_454221:                             ; CODE XREF: BuildingClass__Size+B0↓j
mov     edx, [edi+688h]
mov     ecx, [esi]
push    0
push    4
lea     eax, [edx+ebx*4]
push    eax
push    esi
call    dword ptr [ecx+10h]
test    eax, eax
jl      short loc_454244
mov     eax, [esp+10h+arg_8]
inc     ebx
cmp     ebx, eax
jl      short loc_454221

loc_454242:                             ; CODE XREF: BuildingClass__Size+1C↑j
; BuildingClass__Size+8F↑j
mov     eax, ebp

loc_454244:                             ; CODE XREF: BuildingClass__Size+3D↑j
; BuildingClass__Size+5F↑j ...
pop     edi
pop     esi
pop     ebp
pop     ebx
retn    0Ch
*/
}

// ============================================================
// Section 2: Foundation / Cell
// ============================================================

// IDA 0x70d1a0: check if cell is placeable for this building type
// 0x4260f0
bool BuildingClass::IsCellPlaceable(int cell_x, int cell_y) const
{
// [IDA decompile]
char __thiscall BuildingClass_IsCellPlaceable(_DWORD *this, __int16 *a2)
{
  _BYTE *v3; // eax
  int v5; // ecx
  int v6; // ecx

  v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2);
  if ( (*((_DWORD *)v3 + 80) & 0x100) != 0 && *(this + 41) - MEMORY[0x89A1C0] * (char)v3[283] > 2 * MEMORY[0x89A1C0] )
  {
    if ( (v3[296] & 0xE0) != 0 )
      return 0;
  }
  else
  {
    v5 = *((_DWORD *)v3 + 59);
    switch ( v5 )
    {
      case 3:
        return 0;
      case 10:
        return 0;
      case 4:
        return 0;
    }
    v6 = *((_DWORD *)v3 + 17);
    if ( v6 != -1 )
    {
      if ( *(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84] + v6) + 680) )
        return 0;
    }
    if ( (v3[292] & 0xE0) != 0 || MEMORY[0x89A1C0] * (char)v3[283] - *(this + 41) > 2 * MEMORY[0x89A1C0] )
      return 0;
  }
  return 1;
}

/* ASM:
mov     eax, [esp+arg_0]
sub     esp, 0Ch
push    esi
mov     esi, ecx
push    edi
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, [eax+140h]
mov     edx, ds:89A1C0h
test    ch, 1
jz      short loc_426157
lea     ecx, [esi+9Ch]
mov     edi, [esi+9Ch]
mov     [esp+14h+var_C], edi
mov     edi, [ecx+4]
mov     [esp+14h+var_8], edi
movsx   edi, byte ptr [eax+11Bh]
imul    edi, edx
mov     ecx, [ecx+8]
sub     ecx, edi
lea     edi, [edx+edx]
cmp     ecx, edi
jle     short loc_426157
test    byte ptr [eax+128h], 0E0h
jz      short loc_4261BB

loc_42614D:                             ; CODE XREF: BuildingClass__IsCellPlaceable+70↓j
; BuildingClass__IsCellPlaceable+75↓j ...
pop     edi
xor     al, al
pop     esi
add     esp, 0Ch
retn    4
; ---------------------------------------------------------------------------

loc_426157:                             ; CODE XREF: BuildingClass__IsCellPlaceable+25↑j
; BuildingClass__IsCellPlaceable+52↑j
mov     ecx, [eax+0ECh]
cmp     ecx, 3
jz      short loc_42614D
cmp     ecx, 0Ah
jz      short loc_42614D
cmp     ecx, 4
jz      short loc_42614D
mov     ecx, [eax+44h]
cmp     ecx, 0FFFFFFFFh
jz      short loc_426189
mov     edi, ds:0A83D84h
push    ebx
mov     ecx, [edi+ecx*4]
mov     bl, [ecx+2A8h]
test    bl, bl
pop     ebx
jnz     short loc_42614D

loc_426189:                             ; CODE XREF: BuildingClass__IsCellPlaceable+82↑j
test    byte ptr [eax+124h], 0E0h
jnz     short loc_42614D
movsx   eax, byte ptr [eax+11Bh]
add     esi, 9Ch
imul    eax, edx
mov     ecx, [esi]
mov     [esp+14h+var_C], ecx
mov     ecx, [esi+4]
mov     [esp+14h+var_8], ecx
mov     ecx, [esi+8]
sub     eax, ecx
lea     ecx, [edx+edx]
cmp     eax, ecx
jg      short loc_42614D

loc_4261BB:                             ; CODE XREF: BuildingClass__IsCellPlaceable+5B↑j
pop     edi
mov     al, 1
pop     esi
add     esp, 0Ch
retn    4
*/
}

// IDA 0x44d310: validate placement passes all checks
// 0x480630
bool BuildingClass::ValidatePlacement() {
// [IDA decompile]
void __thiscall BuildingClass_ValidatePlacement(void **this, char a2)
{
  int *v2; // edi
  int v3; // eax
  void **v4; // esi
  int *StartCoords; // edi
  int *PlacementRect; // eax
  int v7; // ebx
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int *v11; // edi
  int v12; // eax
  char v13; // bl
  int v14; // ecx
  _DWORD *v15; // eax
  int *v16; // eax
  void **v17; // edi
  void *v18; // eax
  _DWORD *v19; // ebp
  int v20; // eax
  __int16 v21; // dx
  char v22; // bl
  char v23; // al
  void *v24; // ecx
  char v25; // al
  char v26; // bl
  char v27; // al
  char v28; // al
  unsigned int i; // esi
  int v30; // eax
  __int16 v31; // dx
  _BYTE *v32; // eax
  int v33; // [esp-Ch] [ebp-E8h]
  _DWORD *v34; // [esp-8h] [ebp-E4h]
  int v35; // [esp-8h] [ebp-E4h]
  int *v36; // [esp-4h] [ebp-E0h]
  __int16 *v37; // [esp-4h] [ebp-E0h]
  unsigned int v38; // [esp+10h] [ebp-CCh] BYREF
  void *v39; // [esp+14h] [ebp-C8h] BYREF
  char *v40; // [esp+18h] [ebp-C4h]
  unsigned int v41; // [esp+1Ch] [ebp-C0h]
  void *v42; // [esp+20h] [ebp-BCh]
  int v43; // [esp+24h] [ebp-B8h] BYREF
  int v44; // [esp+28h] [ebp-B4h] BYREF
  void **v45; // [esp+2Ch] [ebp-B0h]
  int v46; // [esp+30h] [ebp-ACh]
  int v47; // [esp+34h] [ebp-A8h]
  _DWORD v48[2]; // [esp+38h] [ebp-A4h] BYREF
  int v49; // [esp+40h] [ebp-9Ch] BYREF
  char v50[8]; // [esp+44h] [ebp-98h] BYREF
  int v51; // [esp+4Ch] [ebp-90h]
  int v52; // [esp+50h] [ebp-8Ch]
  int v53[4]; // [esp+5Ch] [ebp-80h] BYREF
  char v54[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v55[4]; // [esp+7Ch] [ebp-60h] BYREF
  int v56[4]; // [esp+8Ch] [ebp-50h] BYREF
  int v57[4]; // [esp+9Ch] [ebp-40h] BYREF
  int v58[4]; // [esp+ACh] [ebp-30h] BYREF
  int v59[4]; // [esp+BCh] [ebp-20h] BYREF
  int v60[4]; // [esp+CCh] [ebp-10h] BYREF

  v2 = (int *)&unk_81CC70;
  v45 = this;
  v40 = (char *)&unk_81CC70;
  while ( 1 )
  {
    v3 = *v2;
    if ( (unsigned int)*v2 < 8 )
    {
      v43 = (int)*(this + 9);
      v44 = *CellStruct::Add(&v43, &v49, (_WORD *)(4 * (v3 & 7) + 9041544));
      v4 = (void **)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v44);
    }
    else
    {
      v4 = this;
    }
    if ( !a2 || *v2 != -1 )
    {
      StartCoords = House::GetStartCoords((int)v4, v55);
      PlacementRect = BuildingClass::GetPlacementRect((int)v4, v53);
      if ( StartCoords[2] > 0 && StartCoords[3] > 0 && PlacementRect[2] > 0 && PlacementRect[3] > 0 )
      {
        v7 = StartCoords[1];
        if ( *StartCoords > *PlacementRect )
          v51 = *PlacementRect;
        v8 = PlacementRect[1];
        if ( v7 > v8 )
          v52 = v8;
      }
    }
    v36 = BuildingClass::GetPlacementRect((int)v4, v59);
    v34 = House::GetStartCoords((int)v4, v57);
    v9 = (_DWORD *)CellClass::GetScreenRect(v54);
    v10 = Rect::Union(v56, v9, v34);
    v11 = Rect::Union(v58, v10, v36);
    v48[1] = MEMORY[0x886FA4];
    v12 = *v11;
    v13 = 0;
    v48[0] = MEMORY[0x886FA0];
    v14 = v11[1];
    v46 = v12;
    v47 = v14;
    v35 = v11[3];
    v33 = v11[2];
    v15 = (_DWORD *)Coord2D::Sub(v50, v48);
    v16 = Rect::Construct(v60, v15, v33, v35);
    Cell::CreateCrater(*v16, v16[1], v16[2], v16[3], 0);
    v17 = v4 + 9;
    BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)(v4 + 9));
    v18 = v4[17];
    if ( v18 != (void *)-1 && *(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84] + (_DWORD)v18) + 680) )
    {
      v38 = 0;
      v19 = &unk_81CC70;
      do
      {
        if ( *v19 < 8u )
        {
          v20 = *v19 & 7;
          v39 = *v17;
          v21 = MEMORY[0x89F688][v20];
          LOWORD(v20) = HIWORD(MEMORY[0x89F688][v20]);
          LOWORD(v42) = (_WORD)v39 + v21;
          HIWORD(v42) = HIWORD(v39) + v20;
          v39 = v42;
          CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v39);
        }
        if ( (unsigned __int8)BuildingPlacement::ValidateType(v4[17], *v19) )
          v38 |= 1 << v13;
        ++v19;
        ++v13;
      }
      while ( v19 < &dword_81CC80 );
      v22 = v38;
      v23 = *((_BYTE *)v4 + 286) & 0xF0;
      v38 = (unsigned int)v4[19];
      v24 = v4[17];
      v25 = v22 | v23;
      v26 = 0;
      *((_BYTE *)v4 + 286) = v25;
      if ( (v24 == (void *)2 || v24 == (void *)26) && (v25 == 48 || v25 == 32) )
      {
        v4[17] = (void *)-1;
        *((_BYTE *)v4 + 286) = 0;
        AbstractClass::AnnounceExpiredPointer(v4);
        v26 = 1;
      }
      if ( !v4[17] )
      {
        v27 = *((_BYTE *)v4 + 286);
        if ( v27 == 16 || v27 == 32 )
        {
          v4[17] = (void *)-1;
          *((_BYTE *)v4 + 286) = 0;
          v4[20] = (void *)-1;
          AbstractClass::AnnounceExpiredPointer(v4);
          v26 = 1;
        }
      }
      if ( v4[17] == (void *)1 && *((_BYTE *)v4 + 286) == 32 )
      {
        v4[17] = (void *)-1;
        *((_BYTE *)v4 + 286) = 0;
        v4[20] = (void *)-1;
        AbstractClass::AnnounceExpiredPointer(v4);
        v26 = 1;
      }
      if ( v4[17] == (void *)22 )
      {
        v28 = *((_BYTE *)v4 + 286);
        if ( v28 == 16 || v28 == 32 )
        {
          v4[17] = (void *)-1;
          *((_BYTE *)v4 + 286) = 0;
          v4[20] = (void *)-1;
          AbstractClass::AnnounceExpiredPointer(v4);
          v26 = 1;
        }
      }
      if ( v4[17] == (void *)3 && *((_BYTE *)v4 + 286) == 16 )
      {
        v4[17] = (void *)-1;
        *((_BYTE *)v4 + 286) = 0;
        v4[20] = (void *)-1;
        AbstractClass::AnnounceExpiredPointer(v4);
        v26 = 1;
      }
      House::AnnounceUpgrade((int)v4, -1);
      if ( v4[19] != (void *)v38 )
      {
        v37 = (__int16 *)(v4 + 9);
        if ( v26 )
        {
          Cell::SetRadar((int *)&MEMORY[0x87F7E8], v37);
          Radar::Update(&MEMORY[0x87F7E8], (__int16 *)v4 + 18);
          for ( i = 0; i < 8; ++i )
          {
            v30 = i & 7;
            v31 = *((_WORD *)v17 + 1) + HIWORD(MEMORY[0x89F688][v30]);
            LOWORD(v41) = LOWORD(MEMORY[0x89F688][v30]) + *(_WORD *)v17;
            HIWORD(v41) = v31;
            v38 = v41;
            v32 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v38);
            --v32[290];
          }
        }
        else
        {
          CellClass::DetermineTileConnectivity(v37);
          Radar::Update(&MEMORY[0x87F7E8], (__int16 *)v4 + 18);
        }
      }
    }
    v2 = (int *)(v40 + 4);
    v40 += 4;
    if ( v40 >= byte_81CC84 )
      break;
    this = v45;
  }
}

/* ASM:
sub     esp, 0CCh
push    ebx
push    ebp
push    esi
push    edi
mov     edi, offset unk_81CC70
mov     [esp+0DCh+var_B0], ecx
mov     [esp+0DCh+var_C4], edi
jmp     short loc_48064D
; ---------------------------------------------------------------------------

loc_480649:                             ; CODE XREF: BuildingClass__ValidatePlacement+3E4↓j
mov     ecx, [esp+0DCh+var_B0]

loc_48064D:                             ; CODE XREF: BuildingClass__ValidatePlacement+17↑j
mov     eax, [edi]
cmp     eax, 8
jb      short loc_480658
mov     esi, ecx
jmp     short loc_48068F
; ---------------------------------------------------------------------------

loc_480658:                             ; CODE XREF: BuildingClass__ValidatePlacement+22↑j
mov     ecx, [ecx+24h]
and     eax, 7
mov     [esp+0DCh+var_B8], ecx
lea     ecx, [esp+0DCh+var_B8]
lea     edx, ds:89F688h[eax*4]
lea     eax, [esp+0DCh+var_9C]
push    edx
push    eax
call    CellStruct__Add
mov     eax, [eax]
lea     ecx, [esp+0DCh+var_B4]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+0E0h+var_B4], eax
call    CellCoord__To_CellObj
mov     esi, eax

loc_48068F:                             ; CODE XREF: BuildingClass__ValidatePlacement+26↑j
mov     al, [esp+0DCh+arg_0]
test    al, al
jz      short loc_48069F
cmp     dword ptr [edi], 0FFFFFFFFh
jz      short loc_4806FD

loc_48069F:                             ; CODE XREF: BuildingClass__ValidatePlacement+68↑j
lea     edx, [esp+0DCh+var_60]
mov     ecx, esi
push    edx
call    House__GetStartCoords
mov     edi, eax
lea     eax, [esp+0DCh+var_80]
push    eax
mov     ecx, esi
call    BuildingClass__GetPlacementRect
mov     ecx, [edi+8]
test    ecx, ecx
jle     short loc_4806FD
mov     ecx, [edi+0Ch]
test    ecx, ecx
jle     short loc_4806FD
mov     ecx, [eax+8]
test    ecx, ecx
jle     short loc_4806FD
mov     ecx, [eax+0Ch]
test    ecx, ecx
jle     short loc_4806FD
mov     ecx, [edi]
mov     edx, [eax]
mov     ebx, [edi+4]
mov     ebp, [edi+8]
mov     edi, [edi+0Ch]
cmp     ecx, edx
jle     short loc_4806EE
sub     ecx, edx
mov     [esp+0DCh+var_90], edx
add     ebp, ecx

loc_4806EE:                             ; CODE XREF: BuildingClass__ValidatePlacement+B4↑j
mov     eax, [eax+4]
cmp     ebx, eax
jle     short loc_4806FD
sub     ebx, eax
mov     [esp+0DCh+var_8C], eax
add     edi, ebx

loc_4806FD:                             ; CODE XREF: BuildingClass__ValidatePlacement+6D↑j
; BuildingClass__ValidatePlacement+8E↑j ...
lea     ecx, [esp+0DCh+var_20]
push    ecx
mov     ecx, esi
call    BuildingClass__GetPlacementRect
lea     edx, [esp+0DCh+var_40]
push    eax             ; lprcDst
push    edx
mov     ecx, esi
call    House__GetStartCoords
push    eax             ; lprcDst
lea     eax, [esp+0E4h+var_70]
push    eax
mov     ecx, esi
call    CellClass__GetScreenRect
mov     edx, eax
lea     ecx, [esp+0E4h+var_50]
call    Rect__Union
mov     edx, eax
lea     ecx, [esp+0E0h+var_30]
call    Rect__Union
mov     edi, eax
mov     ebx, ds:886FA4h
mov     ebp, ds:886FA0h
mov     [esp+0DCh+var_A0], ebx
mov     eax, [edi]
xor     ebx, ebx
push    ebx
mov     [esp+0E0h+var_A4], ebp
mov     ecx, [edi+4]
mov     [esp+0E0h+var_AC], eax
mov     [esp+0E0h+var_A8], ecx
lea     ecx, [esp+0E0h+var_A4]
mov     edx, [edi+8]
mov     edi, [edi+0Ch]
push    edi
push    edx
lea     edx, [esp+0E8h+var_98]
push    ecx
push    edx
lea     ecx, [esp+0F0h+var_AC]
call    Coord2D__Sub
push    eax
lea     ecx, [esp+0ECh+var_10]
call    Rect__Construct
mov     edx, [eax]
sub     esp, 10h
mov     ecx, esp
mov     [ecx], edx
mov     edx, [eax+4]
mov     [ecx+4], edx
mov     edx, [eax+8]
mov     eax, [eax+0Ch]
mov     [ecx+8], edx
mov     [ecx+0Ch], eax
mov     ecx, ds:887324h
call    Cell__CreateCrater
lea     edi, [esi+24h]
mov     ecx, 87F7E8h
push    edi
call    BuildingClass__AddUpgrade
mov     eax, [esi+44h]
cmp     eax, 0FFFFFFFFh
jz      loc_480A03
mov     ecx, ds:0A83D84h
mov     edx, [ecx+eax*4]
mov     al, [edx+2A8h]
test    al, al
jz      loc_480A03
mov     [esp+0DCh+var_CC], ebx
mov     ebp, offset unk_81CC70

loc_4807F3:                             ; CODE XREF: BuildingClass__ValidatePlacement+23E↓j
mov     eax, [ebp+0]
cmp     eax, 8
jb      short loc_4807FF
mov     eax, esi
jmp     short loc_480844
; ---------------------------------------------------------------------------

loc_4807FF:                             ; CODE XREF: BuildingClass__ValidatePlacement+1C9↑j
mov     ecx, [edi]
and     eax, 7
mov     [esp+0DCh+var_C8], ecx
mov     dx, ds:89F688h[eax*4]
lea     eax, ds:89F688h[eax*4]
add     dx, cx
mov     ax, [eax+2]
mov     word ptr [esp+0DCh+var_BC], dx
add     ax, word ptr [esp+0DCh+var_C8+2]
lea     edx, [esp+0DCh+var_C8]
push    edx
mov     word ptr [esp+0E0h+var_BC+2], ax
mov     ecx, [esp+0E0h+var_BC]
mov     [esp+0E0h+var_C8], ecx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj

loc_480844:                             ; CODE XREF: BuildingClass__ValidatePlacement+1CD↑j
mov     ecx, [ebp+0]
mov     edx, [esi+44h]
push    ecx
push    edx
mov     ecx, eax
call    BuildingPlacement__ValidateType
test    al, al
jz      short loc_480864
mov     eax, 1
mov     ecx, ebx
shl     eax, cl
or      [esp+0DCh+var_CC], eax

loc_480864:                             ; CODE XREF: BuildingClass__ValidatePlacement+225↑j
add     ebp, 4
inc     ebx
cmp     ebp, offset dword_81CC80
jb      short loc_4807F3
mov     al, [esi+11Eh]
mov     ecx, [esi+4Ch]
mov     bl, byte ptr [esp+0DCh+var_CC]
and     al, 0F0h
mov     [esp+0DCh+var_CC], ecx
mov     ecx, [esi+44h]
or      al, bl
xor     bl, bl
cmp     ecx, 2
mov     [esi+11Eh], al
jz      short loc_48089A
cmp     ecx, 1Ah
jnz     short loc_4808BC

loc_48089A:                             ; CODE XREF: BuildingClass__ValidatePlacement+263↑j
cmp     al, 30h ; '0'
jz      short loc_4808A2
cmp     al, 20h ; ' '
jnz     short loc_4808BC

loc_4808A2:                             ; CODE XREF: BuildingClass__ValidatePlacement+26C↑j
or      ebp, 0FFFFFFFFh
mov     dl, 1
mov     ecx, esi        ; void **
mov     [esi+44h], ebp
mov     byte ptr [esi+11Eh], 0
call    AbstractClass__AnnounceExpiredPointer
mov     bl, 1
jmp     short loc_4808BF
; ---------------------------------------------------------------------------

loc_4808BC:                             ; CODE XREF: BuildingClass__ValidatePlacement+268↑j
; BuildingClass__ValidatePlacement+270↑j
or      ebp, 0FFFFFFFFh

loc_4808BF:                             ; CODE XREF: BuildingClass__ValidatePlacement+28A↑j
mov     eax, [esi+44h]
test    eax, eax
jnz     short loc_4808EC
mov     al, [esi+11Eh]
cmp     al, 10h
jz      short loc_4808D4
cmp     al, 20h ; ' '
jnz     short loc_4808EC

loc_4808D4:                             ; CODE XREF: BuildingClass__ValidatePlacement+29E↑j
mov     dl, 1
mov     ecx, esi        ; void **
mov     [esi+44h], ebp
mov     byte ptr [esi+11Eh], 0
mov     [esi+50h], ebp
call    AbstractClass__AnnounceExpiredPointer
mov     bl, 1

loc_4808EC:                             ; CODE XREF: BuildingClass__ValidatePlacement+294↑j
; BuildingClass__ValidatePlacement+2A2↑j
cmp     dword ptr [esi+44h], 1
jnz     short loc_480913
cmp     byte ptr [esi+11Eh], 20h ; ' '
jnz     short loc_480913
mov     dl, 1
mov     ecx, esi        ; void **
mov     [esi+44h], ebp
mov     byte ptr [esi+11Eh], 0
mov     [esi+50h], ebp
call    AbstractClass__AnnounceExpiredPointer
mov     bl, 1

loc_480913:                             ; CODE XREF: BuildingClass__ValidatePlacement+2C0↑j
; BuildingClass__ValidatePlacement+2C9↑j
cmp     dword ptr [esi+44h], 16h
jnz     short loc_48093F
mov     al, [esi+11Eh]
cmp     al, 10h
jz      short loc_480927
cmp     al, 20h ; ' '
jnz     short loc_48093F

loc_480927:                             ; CODE XREF: BuildingClass__ValidatePlacement+2F1↑j
mov     dl, 1
mov     ecx, esi        ; void **
mov     [esi+44h], ebp
mov     byte ptr [esi+11Eh], 0
mov     [esi+50h], ebp
call    AbstractClass__AnnounceExpiredPointer
mov     bl, 1

loc_48093F:                             ; CODE XREF: BuildingClass__ValidatePlacement+2E7↑j
; BuildingClass__ValidatePlacement+2F5↑j
cmp     dword ptr [esi+44h], 3
jnz     short loc_480966
cmp     byte ptr [esi+11Eh], 10h
jnz     short loc_480966
mov     dl, 1
mov     ecx, esi        ; void **
mov     [esi+44h], ebp
mov     byte ptr [esi+11Eh], 0
mov     [esi+50h], ebp
call    AbstractClass__AnnounceExpiredPointer
mov     bl, 1

loc_480966:                             ; CODE XREF: BuildingClass__ValidatePlacement+313↑j
; BuildingClass__ValidatePlacement+31C↑j
push    ebp
mov     ecx, esi
call    House__AnnounceUpgrade
mov     edx, [esp+0DCh+var_CC]
mov     eax, [esi+4Ch]
cmp     eax, edx
jz      loc_480A03
test    bl, bl
push    edi
mov     ecx, 87F7E8h
jz      short loc_4809F3
call    Cell__SetRadar
push    edi
mov     ecx, 87F7E8h
call    Radar__Update
xor     esi, esi

loc_480999:                             ; CODE XREF: BuildingClass__ValidatePlacement+3BF↓j
mov     cx, [edi]
mov     eax, esi
and     eax, 7
add     cx, ds:89F688h[eax*4]
mov     dx, ds:89F68Ah[eax*4]
add     dx, [edi+2]
lea     eax, ds:89F688h[eax*4]
mov     word ptr [esp+0DCh+var_C0], cx
lea     ecx, [esp+0DCh+var_CC]
mov     word ptr [esp+0DCh+var_C0+2], dx
mov     eax, [esp+0DCh+var_C0]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+0E0h+var_CC], eax
call    CellCoord__To_CellObj
mov     dl, [eax+122h]
dec     dl
inc     esi
cmp     esi, 8
mov     [eax+122h], dl
jb      short loc_480999
jmp     short loc_480A03
; ---------------------------------------------------------------------------

loc_4809F3:                             ; CODE XREF: BuildingClass__ValidatePlacement+355↑j
call    CellClass__DetermineTileConnectivity
push    edi
mov     ecx, 87F7E8h
call    Radar__Update

loc_480A03:                             ; CODE XREF: BuildingClass__ValidatePlacement+19D↑j
; BuildingClass__ValidatePlacement+1B4↑j ...
mov     edi, [esp+0DCh+var_C4]
add     edi, 4
cmp     edi, offset byte_81CC84
mov     [esp+0DCh+var_C4], edi
jb      loc_480649
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0CCh
retn    4
*/
}
bool BuildingClass::ValidateFoundation() { return CheckBuildability(); }
bool BuildingClass::ValidateFoundation_0() { return ValidateFoundation(); }
bool BuildingClass::Validate() { return ValidateFoundation(); }
bool BuildingClass::ValidateCell(int x, int y) { return IsCellPlaceable(x, y); }
bool BuildingClass::ValidatePlacementEx() { return ValidateFoundation(); }

// IDA 0x449820: find cells occupied by building foundation
// 0x7447b0
void BuildingClass::FindPlacementCells()
{
// [IDA decompile]
int __thiscall BuildingClass_FindPlacementCells(_DWORD *this, int a2)
{
  _DWORD **v2; // edi
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  void *v5; // eax
  void *v6; // ebp
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  char IsBuildableAdvanced; // al
  int v10; // eax
  int v11; // eax
  int v12; // eax
  void *v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  __int16 *v18; // eax
  void *v19; // eax
  void *v20; // edi
  int v21; // eax
  void *v22; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  void *v26; // edi
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int result; // eax
  int v37; // edx
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  __int16 *v46; // ecx
  int v47; // eax
  void *v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  void *v52; // edi
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // edx
  int v57; // eax
  void *v58; // edi
  int v59; // eax
  int v60; // ecx
  int v61; // eax
  int v62; // edx
  int v63; // eax
  int v64; // eax
  int TileIndex; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  void *v72; // edi
  int v73; // eax
  int v74; // ecx
  int v75; // eax
  int v76; // edx
  int v77; // eax
  void *v78; // edi
  int v79; // eax
  int v80; // ecx
  int v81; // eax
  int v82; // edx
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // eax
  int v89; // eax
  void *v90; // edi
  int v91; // eax
  int v92; // ecx
  int v93; // eax
  int v94; // edx
  int v95; // eax
  int v96; // eax
  void *v97; // edi
  int v98; // eax
  int v99; // ecx
  int v100; // eax
  int v101; // edx
  int v102; // eax
  int v103; // eax
  char v104; // [esp+12h] [ebp-2Eh]
  char v105; // [esp+13h] [ebp-2Dh]
  int v106; // [esp+14h] [ebp-2Ch] BYREF
  int v107; // [esp+18h] [ebp-28h] BYREF
  _DWORD **v108; // [esp+1Ch] [ebp-24h] BYREF
  int v109; // [esp+20h] [ebp-20h] BYREF
  int v110; // [esp+24h] [ebp-1Ch] BYREF
  int v111; // [esp+28h] [ebp-18h] BYREF
  int v112; // [esp+2Ch] [ebp-14h] BYREF
  int v113; // [esp+30h] [ebp-10h] BYREF
  _DWORD v114[3]; // [esp+34h] [ebp-Ch] BYREF

  v2 = (_DWORD **)this;
  v108 = (_DWORD **)this;
  v3 = this + 354;
  (*(void (__thiscall **)(_DWORD *))(*(this + 354) + 12))(this + 354);
  v105 = ((int (__thiscall *)(_DWORD **, _DWORD))(*v2)[47])(v2, 0);
  v4 = (_DWORD *)((int (__thiscall *)(_DWORD **, _DWORD *, _DWORD))(*v2)[19])(v2, v114, 0);
  LOWORD(v111) = *v4 / 256;
  HIWORD(v111) = v4[1] / 256;
  v106 = v111;
  v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v106);
  if ( Cell::IsBuildableAdvanced((int)v5) || (v104 = 0, ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0) )
    v104 = 1;
  v6 = (void *)a2;
  v7 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 72))(a2, v114);
  LOWORD(a2) = *v7 / 256;
  HIWORD(a2) = v7[1] / 256;
  v107 = a2;
  v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v107);
  LOBYTE(a2) = BYTE1(v8[80]) & 1;
  IsBuildableAdvanced = Cell::IsBuildableAdvanced((int)v8);
  if ( !v105 )
  {
    if ( v104 )
    {
      if ( (_BYTE)a2 )
      {
        a2 = *Pathfinding::SelectRegionPath(&v113, (__int16 *)&v107, (int)&v107);
        if ( !BuildingTypeClass::IsPlacementValid(v2, (__int16 *)&v106, (__int16 *)&a2) )
        {
          if ( a2 != v106 )
          {
            v20 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2);
            v21 = v3[2];
            if ( v3[4] < v21 )
              goto LABEL_200;
            if ( *((_BYTE *)v3 + 13) )
              goto LABEL_70;
LABEL_69:
            if ( v21 )
              goto LABEL_39;
            goto LABEL_70;
          }
          goto LABEL_40;
        }
        v112 = 0;
        TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&a2, 0, 0);
        v110 = *LayerClass::Pathfinding_Find(
                  &MEMORY[0x87F7E8],
                  (int)&v113,
                  &v113,
                  (__int16 *)&a2,
                  1,
                  TileIndex,
                  0,
                  0,
                  1,
                  1,
                  0,
                  1,
                  1,
                  1,
                  (__int16 *)&v112,
                  0,
                  0);
        if ( v110 != MEMORY[0xB1CFB8] )
        {
          v46 = (__int16 *)&v110;
          goto LABEL_134;
        }
        if ( MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v106, (__int16 *)&v107, 0, 0, 1, 0) )
        {
          if ( a2 != v106 )
          {
            v46 = (__int16 *)&a2;
            goto LABEL_134;
          }
          goto LABEL_40;
        }
        v112 = 0;
        v110 = *LayerClass::Pathfinding_Find(
                  &MEMORY[0x87F7E8],
                  (int)&v112,
                  &v113,
                  (__int16 *)&v107,
                  1,
                  -1,
                  0,
                  0,
                  1,
                  1,
                  0,
                  0,
                  1,
                  1,
                  (__int16 *)&v112,
                  0,
                  0);
        if ( v110 != MEMORY[0xB1CFB8] )
          goto LABEL_77;
        v112 = 0;
        v66 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0);
        v111 = *LayerClass::Pathfinding_Find(
                  &MEMORY[0x87F7E8],
                  (int)&v113,
                  &v113,
                  (__int16 *)&v107,
                  1,
                  v66,
                  0,
                  0,
                  1,
                  1,
                  0,
                  1,
                  0,
                  1,
                  (__int16 *)&v112,
                  0,
                  0);
        if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 )
          return 0;
      }
      else
      {
        if ( IsBuildableAdvanced || !BuildingTypeClass::IsPlacementValid(v2, (__int16 *)&v106, (__int16 *)&v107) )
          goto LABEL_40;
        v112 = 0;
        v67 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v107, 0, 0);
        a2 = *LayerClass::Pathfinding_Find(
                &MEMORY[0x87F7E8],
                (int)&v113,
                &v113,
                (__int16 *)&v107,
                1,
                v67,
                0,
                0,
                1,
                1,
                0,
                1,
                1,
                1,
                (__int16 *)&v112,
                0,
                0);
        if ( a2 != MEMORY[0xB1CFB8] )
        {
          v46 = (__int16 *)&a2;
          goto LABEL_134;
        }
        if ( MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v106, (__int16 *)&v107, 0, 1, 1, 0) )
          goto LABEL_40;
        v112 = 0;
        a2 = *LayerClass::Pathfinding_Find(
                &MEMORY[0x87F7E8],
                (int)&v112,
                &v113,
                (__int16 *)&v107,
                1,
                -1,
                0,
                0,
                1,
                1,
                0,
                0,
                1,
                1,
                (__int16 *)&v112,
                0,
                0);
        if ( a2 != MEMORY[0xB1CFB8] )
        {
          v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2);
          goto LABEL_40;
        }
        v112 = 0;
        v68 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0);
        v111 = *LayerClass::Pathfinding_Find(
                  &MEMORY[0x87F7E8],
                  (int)&v113,
                  &v113,
                  (__int16 *)&v107,
                  1,
                  v68,
                  0,
                  0,
                  1,
                  1,
                  0,
                  0,
                  0,
                  1,
                  (__int16 *)&v112,
                  0,
                  0);
        if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 )
          return 0;
      }
LABEL_218:
      v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v111);
      goto LABEL_40;
    }
    if ( (_BYTE)a2 )
    {
      a2 = *Pathfinding::SelectRegionPath(&v113, (__int16 *)&v107, (int)&v107);
      if ( !BuildingTypeClass::IsPlacementValid(v2, (__int16 *)&v106, (__int16 *)&a2) )
      {
        if ( a2 != v106 )
        {
          v18 = (__int16 *)&a2;
          goto LABEL_16;
        }
        goto LABEL_40;
      }
      v112 = 0;
      v69 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0);
      v109 = *LayerClass::Pathfinding_Find(
                &MEMORY[0x87F7E8],
                (int)&v113,
                &v113,
                (__int16 *)&v106,
                1,
                v69,
                0,
                0,
                1,
                1,
                0,
                1,
                1,
                1,
                (__int16 *)&v112,
                0,
                0);
      v112 = 0;
      v70 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&a2, 0, 0);
      v71 = *LayerClass::Pathfinding_Find(
               &MEMORY[0x87F7E8],
               (int)&v113,
               &v113,
               (__int16 *)&a2,
               1,
               v70,
               0,
               0,
               1,
               1,
               0,
               1,
               1,
               1,
               (__int16 *)&v112,
               0,
               0);
      v110 = v71;
      if ( v109 != MEMORY[0xB1CFB8] && __PAIR32__(HIWORD(v110), v71) != MEMORY[0xB1CFB8] )
      {
        v72 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v109);
        v73 = v3[2];
        if ( v3[4] < v73
          || (*((_BYTE *)v3 + 13) || !v73)
          && (v74 = v3[5], v74 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v74 + v73, 0) )
        {
          v75 = v3[4];
          v76 = v3[1];
          v3[4] = v75 + 1;
          *(_DWORD *)(v76 + 4 * v75) = v72;
        }
        v18 = (__int16 *)&v110;
        goto LABEL_16;
      }
      if ( !MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v106, (__int16 *)&v107, 0, 0, 1, 0) )
      {
        if ( v109 == MEMORY[0xB1CFB8] )
        {
          v112 = 0;
          v84 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0);
          v111 = *LayerClass::Pathfinding_Find(
                    &MEMORY[0x87F7E8],
                    (int)&v113,
                    &v113,
                    (__int16 *)&v107,
                    1,
                    v84,
                    0,
                    0,
                    1,
                    1,
                    0,
                    0,
                    0,
                    1,
                    (__int16 *)&v112,
                    0,
                    0);
          if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 )
            return 0;
        }
        else
        {
          v112 = 0;
          v77 = *LayerClass::Pathfinding_Find(
                   &MEMORY[0x87F7E8],
                   (int)&v112,
                   &v113,
                   (__int16 *)&v107,
                   1,
                   -1,
                   0,
                   0,
                   1,
                   1,
                   0,
                   0,
                   1,
                   1,
                   (__int16 *)&v112,
                   0,
                   0);
          v110 = v77;
          if ( v77 != MEMORY[0xB1CFB8] && v109 != v77 )
          {
            v78 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v109);
            v79 = v3[2];
            if ( v3[4] < v79
              || (*((_BYTE *)v3 + 13) || !v79)
              && (v80 = v3[5], v80 > 0)
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v80 + v79, 0) )
            {
              v81 = v3[4];
              v82 = v3[1];
              v3[4] = v81 + 1;
              *(_DWORD *)(v82 + 4 * v81) = v78;
            }
            goto LABEL_38;
          }
          v112 = 0;
          v83 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0);
          v111 = *LayerClass::Pathfinding_Find(
                    &MEMORY[0x87F7E8],
                    (int)&v113,
                    &v113,
                    (__int16 *)&v107,
                    1,
                    v83,
                    0,
                    0,
                    1,
                    1,
                    0,
                    0,
                    0,
                    1,
                    (__int16 *)&v112,
                    0,
                    0);
          if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 )
            return 0;
        }
        goto LABEL_218;
      }
      if ( a2 == v106 )
        goto LABEL_40;
      v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2);
    }
    else
    {
      if ( !IsBuildableAdvanced )
      {
        if ( !BuildingTypeClass::IsPlacementValid(v2, (__int16 *)&v106, (__int16 *)&v107) )
          goto LABEL_40;
        v112 = 0;
        v87 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0);
        a2 = *LayerClass::Pathfinding_Find(
                &MEMORY[0x87F7E8],
                (int)&v113,
                &v113,
                (__int16 *)&v106,
                1,
                v87,
                0,
                0,
                1,
                1,
                0,
                1,
                1,
                1,
                (__int16 *)&v112,
                0,
                0);
        v112 = 0;
        v88 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v107, 0, 0);
        v89 = *LayerClass::Pathfinding_Find(
                 &MEMORY[0x87F7E8],
                 (int)&v113,
                 &v113,
                 (__int16 *)&v107,
                 1,
                 v88,
                 0,
                 0,
                 1,
                 1,
                 0,
                 1,
                 1,
                 1,
                 (__int16 *)&v112,
                 0,
                 0);
        v110 = v89;
        if ( a2 != MEMORY[0xB1CFB8] && __PAIR32__(HIWORD(v110), v89) != MEMORY[0xB1CFB8] )
        {
          v90 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2);
          v91 = v3[2];
          if ( v3[4] < v91
            || (*((_BYTE *)v3 + 13) || !v91)
            && (v92 = v3[5], v92 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v92 + v91, 0) )
          {
            v93 = v3[4];
            v94 = v3[1];
            v3[4] = v93 + 1;
            *(_DWORD *)(v94 + 4 * v93) = v90;
          }
          v20 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v110);
          v21 = v3[2];
          if ( v3[4] < v21 )
            goto LABEL_200;
          if ( !*((_BYTE *)v3 + 13) )
          {
LABEL_197:
            if ( v21 )
              goto LABEL_39;
          }
LABEL_198:
          v45 = v3[5];
          if ( v45 <= 0 )
            goto LABEL_39;
LABEL_199:
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v45 + v21, 0) )
            goto LABEL_200;
LABEL_39:
          v2 = v108;
          goto LABEL_40;
        }
        if ( MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v106, (__int16 *)&v107, 0, 1, 1, 0) )
          goto LABEL_40;
        if ( a2 == MEMORY[0xB1CFB8] )
        {
          v112 = 0;
          v103 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0);
          v111 = *LayerClass::Pathfinding_Find(
                    &MEMORY[0x87F7E8],
                    (int)&v113,
                    &v113,
                    (__int16 *)&v107,
                    1,
                    v103,
                    0,
                    0,
                    1,
                    1,
                    0,
                    0,
                    0,
                    1,
                    (__int16 *)&v112,
                    0,
                    0);
          if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 )
            return 0;
        }
        else
        {
          v112 = 0;
          v96 = *LayerClass::Pathfinding_Find(
                   &MEMORY[0x87F7E8],
                   (int)&v112,
                   &v113,
                   (__int16 *)&v107,
                   1,
                   -1,
                   0,
                   0,
                   1,
                   1,
                   0,
                   0,
                   1,
                   1,
                   (__int16 *)&v112,
                   0,
                   0);
          v110 = v96;
          if ( v96 != MEMORY[0xB1CFB8] && a2 != v96 )
          {
            v97 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2);
            v98 = v3[2];
            if ( v3[4] < v98
              || (*((_BYTE *)v3 + 13) || !v98)
              && (v99 = v3[5], v99 > 0)
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v99 + v98, 0) )
            {
              v100 = v3[4];
              v101 = v3[1];
              v3[4] = v100 + 1;
              *(_DWORD *)(v101 + 4 * v100) = v97;
            }
            goto LABEL_38;
          }
          v112 = 0;
          v102 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0);
          v111 = *LayerClass::Pathfinding_Find(
                    &MEMORY[0x87F7E8],
                    (int)&v113,
                    &v113,
                    (__int16 *)&v107,
                    1,
                    v102,
                    0,
                    0,
                    1,
                    1,
                    0,
                    0,
                    0,
                    1,
                    (__int16 *)&v112,
                    0,
                    0);
          if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 )
            return 0;
        }
        goto LABEL_218;
      }
      if ( !BuildingTypeClass::IsPlacementValid(v2, (__int16 *)&v106, (__int16 *)&v107) )
        goto LABEL_40;
      a2 = 0;
      v85 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0);
      v112 = *LayerClass::Pathfinding_Find(
                &MEMORY[0x87F7E8],
                (int)&v113,
                &v113,
                (__int16 *)&v106,
                1,
                v85,
                0,
                0,
                1,
                1,
                0,
                1,
                1,
                1,
                (__int16 *)&a2,
                0,
                0);
      if ( v112 == MEMORY[0xB1CFB8] )
      {
        if ( MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v106, (__int16 *)&v107, 0, 0, 0, 0) )
          goto LABEL_40;
        a2 = 0;
        v86 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0);
        v111 = *LayerClass::Pathfinding_Find(
                  &MEMORY[0x87F7E8],
                  (int)&v113,
                  &v113,
                  (__int16 *)&v107,
                  1,
                  v86,
                  0,
                  0,
                  1,
                  1,
                  0,
                  0,
                  0,
                  1,
                  (__int16 *)&a2,
                  0,
                  0);
        if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 )
          return 0;
        goto LABEL_218;
      }
      v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v112);
    }
LABEL_17:
    v20 = v19;
    v21 = v3[2];
    if ( v3[4] >= v21 )
    {
      if ( !*((_BYTE *)v3 + 13) )
        goto LABEL_197;
      goto LABEL_198;
    }
LABEL_200:
    v95 = v3[4];
    v3[4] = v95 + 1;
    *(_DWORD *)(v3[1] + 4 * v95) = v20;
    goto LABEL_39;
  }
  if ( (_BYTE)a2 )
  {
    a2 = *Pathfinding::SelectRegionPath(&v112, (__int16 *)&v106, (int)&v107);
    v111 = *Pathfinding::SelectRegionPath(&v112, (__int16 *)&v107, (int)&v107);
    if ( !BuildingTypeClass::IsPlacementValid(v2, (__int16 *)&a2, (__int16 *)&v111) )
    {
      if ( a2 == v106 )
        goto LABEL_63;
      v22 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2);
      v41 = v3[2];
      if ( v3[4] >= v41 )
      {
        if ( !*((_BYTE *)v3 + 13) && v41 )
          goto LABEL_63;
        v42 = v3[5];
        if ( v42 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v42 + v41, 0) )
          goto LABEL_63;
      }
LABEL_62:
      v43 = v3[4];
      v3[4] = v43 + 1;
      *(_DWORD *)(v3[1] + 4 * v43) = v22;
LABEL_63:
      v18 = (__int16 *)&v111;
LABEL_16:
      v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v18);
      goto LABEL_17;
    }
    v112 = 0;
    v10 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&a2, 0, 0);
    v109 = *LayerClass::Pathfinding_Find(
              &MEMORY[0x87F7E8],
              (int)&v113,
              &v113,
              (__int16 *)&a2,
              1,
              v10,
              0,
              0,
              1,
              1,
              0,
              1,
              1,
              1,
              (__int16 *)&v112,
              0,
              0);
    v112 = 0;
    v11 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&a2, 0, 0);
    v12 = *LayerClass::Pathfinding_Find(
             &MEMORY[0x87F7E8],
             (int)&v113,
             &v113,
             (__int16 *)&v111,
             1,
             v11,
             0,
             0,
             1,
             1,
             0,
             1,
             1,
             1,
             (__int16 *)&v112,
             0,
             0);
    v110 = v12;
    if ( v109 != MEMORY[0xB1CFB8] && __PAIR32__(HIWORD(v110), v12) != MEMORY[0xB1CFB8] )
    {
      v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v109);
      v14 = v3[2];
      if ( v3[4] < v14
        || (*((_BYTE *)v3 + 13) || !v14)
        && (v15 = v3[5], v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v15 + v14, 0) )
      {
        v16 = v3[4];
        v17 = v3[1];
        v3[4] = v16 + 1;
        *(_DWORD *)(v17 + 4 * v16) = v13;
      }
      v18 = (__int16 *)&v110;
      goto LABEL_16;
    }
    if ( MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v106, (__int16 *)&v107, 0, 1, 1, 0) )
    {
      if ( a2 == v106 )
        goto LABEL_63;
      v22 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2);
      v23 = v3[2];
      if ( v3[4] >= v23 )
      {
        if ( !*((_BYTE *)v3 + 13) && v23 )
          goto LABEL_63;
        v24 = v3[5];
        if ( v24 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v24 + v23, 0) )
          goto LABEL_63;
      }
      goto LABEL_62;
    }
    if ( v109 == MEMORY[0xB1CFB8] )
    {
      v112 = 0;
      v40 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 1);
      v108 = (_DWORD **)*LayerClass::Pathfinding_Find(
                           &MEMORY[0x87F7E8],
                           (int)&v113,
                           &v113,
                           (__int16 *)&v107,
                           1,
                           v40,
                           0,
                           1,
                           1,
                           1,
                           0,
                           1,
                           0,
                           1,
                           (__int16 *)&v112,
                           0,
                           0);
      if ( v108 != (_DWORD **)MEMORY[0xB1CFB8] && ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) >= 0 )
      {
LABEL_52:
        v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v108);
        goto LABEL_40;
      }
      return 0;
    }
    v112 = 0;
    v25 = *LayerClass::Pathfinding_Find(
             &MEMORY[0x87F7E8],
             (int)&v112,
             &v113,
             (__int16 *)&v107,
             1,
             -1,
             0,
             1,
             1,
             1,
             0,
             0,
             1,
             1,
             (__int16 *)&v112,
             0,
             0);
    v110 = v25;
    if ( v25 == MEMORY[0xB1CFB8] || v109 == v25 )
    {
      v112 = 0;
      v39 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 1);
      v108 = (_DWORD **)*LayerClass::Pathfinding_Find(
                           &MEMORY[0x87F7E8],
                           (int)&v113,
                           &v113,
                           (__int16 *)&v107,
                           1,
                           v39,
                           0,
                           1,
                           1,
                           1,
                           0,
                           1,
                           0,
                           1,
                           (__int16 *)&v112,
                           0,
                           0);
      if ( v108 != (_DWORD **)MEMORY[0xB1CFB8] && ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) >= 0 )
        goto LABEL_52;
      return 0;
    }
    v26 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v109);
    v27 = v3[2];
    if ( v3[4] < v27
      || (*((_BYTE *)v3 + 13) || !v27)
      && (v28 = v3[5], v28 > 0)
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v28 + v27, 0) )
    {
      v29 = v3[4];
      v30 = v3[1];
      v3[4] = v29 + 1;
      *(_DWORD *)(v30 + 4 * v29) = v26;
    }
LABEL_38:
    v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v110);
    goto LABEL_39;
  }
  if ( IsBuildableAdvanced )
  {
    a2 = *Pathfinding::SelectRegionPath(&v113, (__int16 *)&v106, (int)&v107);
    if ( BuildingTypeClass::IsPlacementValid(v2, (__int16 *)&a2, (__int16 *)&v107) )
    {
      v112 = 0;
      v44 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&a2, 0, 0);
      v111 = *LayerClass::Pathfinding_Find(
                &MEMORY[0x87F7E8],
                (int)&v113,
                &v113,
                (__int16 *)&a2,
                1,
                v44,
                0,
                0,
                1,
                1,
                0,
                1,
                1,
                1,
                (__int16 *)&v112,
                0,
                0);
      if ( v111 != MEMORY[0xB1CFB8] )
      {
        v20 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v111);
        v21 = v3[2];
        if ( v3[4] < v21 )
          goto LABEL_200;
        if ( !*((_BYTE *)v3 + 13) )
          goto LABEL_69;
LABEL_70:
        v45 = v3[5];
        if ( v45 <= 0 )
          goto LABEL_39;
        goto LABEL_199;
      }
      if ( MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v106, (__int16 *)&v107, 0, 1, 0, 0) )
      {
        if ( a2 != v106 )
        {
          v46 = (__int16 *)&a2;
LABEL_134:
          v48 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v46);
          goto LABEL_135;
        }
        goto LABEL_40;
      }
      v112 = 0;
      v47 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 1);
      v110 = *LayerClass::Pathfinding_Find(
                &MEMORY[0x87F7E8],
                (int)&v113,
                &v113,
                (__int16 *)&v107,
                1,
                v47,
                0,
                1,
                1,
                1,
                0,
                1,
                0,
                1,
                (__int16 *)&v112,
                0,
                0);
      if ( v110 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 )
        return 0;
LABEL_77:
      v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v110);
      goto LABEL_40;
    }
    if ( a2 == v106 )
      goto LABEL_40;
LABEL_79:
    v48 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2);
    goto LABEL_135;
  }
  a2 = *Pathfinding::SelectRegionPath(&v113, (__int16 *)&v106, (int)&v107);
  if ( !BuildingTypeClass::IsPlacementValid(v2, (__int16 *)&a2, (__int16 *)&v107) )
  {
    if ( a2 == v106 )
      goto LABEL_40;
    goto LABEL_79;
  }
  v112 = 0;
  v49 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&a2, 0, 0);
  v109 = *LayerClass::Pathfinding_Find(
            &MEMORY[0x87F7E8],
            (int)&v113,
            &v113,
            (__int16 *)&a2,
            1,
            v49,
            0,
            0,
            1,
            1,
            0,
            1,
            1,
            1,
            (__int16 *)&v112,
            0,
            0);
  v112 = 0;
  v50 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v107, 0, 0);
  v51 = *LayerClass::Pathfinding_Find(
           &MEMORY[0x87F7E8],
           (int)&v113,
           &v113,
           (__int16 *)&v107,
           1,
           v50,
           0,
           0,
           1,
           1,
           0,
           1,
           1,
           1,
           (__int16 *)&v112,
           0,
           0);
  v110 = v51;
  if ( v109 != MEMORY[0xB1CFB8] && __PAIR32__(HIWORD(v110), v51) != MEMORY[0xB1CFB8] )
  {
    v52 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v109);
    v53 = v3[2];
    if ( v3[4] < v53
      || (*((_BYTE *)v3 + 13) || !v53)
      && (v54 = v3[5], v54 > 0)
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v53 + v54, 0) )
    {
      v55 = v3[4];
      v56 = v3[1];
      v3[4] = v55 + 1;
      *(_DWORD *)(v56 + 4 * v55) = v52;
    }
    v48 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v110);
LABEL_135:
    v20 = v48;
    v21 = v3[2];
    if ( v3[4] < v21 )
      goto LABEL_200;
    if ( *((_BYTE *)v3 + 13) )
      goto LABEL_70;
    goto LABEL_69;
  }
  if ( !MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v106, (__int16 *)&v107, 0, 1, 0, 0) )
  {
    if ( v109 == MEMORY[0xB1CFB8] )
    {
      v112 = 0;
      v64 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 1);
      v111 = *LayerClass::Pathfinding_Find(
                &MEMORY[0x87F7E8],
                (int)&v113,
                &v113,
                (__int16 *)&v107,
                1,
                v64,
                0,
                1,
                1,
                1,
                0,
                1,
                0,
                1,
                (__int16 *)&v112,
                0,
                0);
      if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 )
        return 0;
    }
    else
    {
      v112 = 0;
      v57 = *LayerClass::Pathfinding_Find(
               &MEMORY[0x87F7E8],
               (int)&v112,
               &v113,
               (__int16 *)&v107,
               1,
               -1,
               0,
               1,
               1,
               1,
               0,
               1,
               1,
               1,
               (__int16 *)&v112,
               0,
               0);
      v110 = v57;
      if ( v57 != MEMORY[0xB1CFB8] && v57 != v109 )
      {
        v58 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v109);
        v59 = v3[2];
        if ( v3[4] < v59
          || (*((_BYTE *)v3 + 13) || !v59)
          && (v60 = v3[5], v60 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v59 + v60, 0) )
        {
          v61 = v3[4];
          v62 = v3[1];
          v3[4] = v61 + 1;
          *(_DWORD *)(v62 + 4 * v61) = v58;
        }
        goto LABEL_38;
      }
      v112 = 0;
      v63 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 1);
      v111 = *LayerClass::Pathfinding_Find(
                &MEMORY[0x87F7E8],
                (int)&v113,
                &v113,
                (__int16 *)&v107,
                1,
                v63,
                0,
                1,
                1,
                1,
                0,
                1,
                0,
                1,
                (__int16 *)&v112,
                0,
                0);
      if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 )
        return 0;
    }
    goto LABEL_218;
  }
  if ( a2 != v106 )
  {
    v46 = (__int16 *)&a2;
    goto LABEL_134;
  }
LABEL_40:
  v31 = v3[2];
  if ( v3[4] < v31
    || (*((_BYTE *)v3 + 13) || !v31)
    && (v32 = v3[5], v32 > 0)
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v32 + v31, 0) )
  {
    v33 = v3[4];
    v34 = v3[1];
    v3[4] = v33 + 1;
    *(_DWORD *)(v34 + 4 * v33) = v6;
  }
  v35 = v3[4];
  result = *v2[355];
  if ( v35 > 0 )
  {
    v37 = v35 - 1;
    v38 = 0;
    for ( v3[4] = v37; v38 < v3[4]; *(_DWORD *)(v3[1] + 4 * v38 - 4) = *(_DWORD *)(v3[1] + 4 * v38) )
      ++v38;
  }
  return result;
}

/* ASM:
sub     esp, 30h
push    ebx
push    ebp
push    esi
push    edi
mov     edi, ecx
mov     [esp+40h+var_24], edi
mov     eax, [edi+588h]
lea     esi, [edi+588h]
mov     ecx, esi
call    dword ptr [eax+0Ch]
mov     edx, [edi]
xor     ebx, ebx
push    ebx
mov     ecx, edi
call    dword ptr [edx+0BCh]
lea     ecx, [esp+40h+var_C]
mov     byte ptr [esp+40h+var_30+3], al
mov     eax, [edi]
push    ebx
push    ecx
mov     ecx, edi
call    dword ptr [eax+4Ch]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+40h+var_18], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
mov     ecx, 87F7E8h
add     eax, edx
sar     eax, 8
mov     word ptr [esp+40h+var_18+2], ax
mov     edx, [esp+40h+var_18]
lea     eax, [esp+40h+var_2C]
mov     [esp+40h+var_2C], edx
push    eax
call    CellCoord__To_CellObj
mov     ecx, eax
call    Cell__IsBuildableAdvanced
test    al, al
jnz     short loc_744849
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+1C8h]
test    eax, eax
mov     byte ptr [esp+40h+var_30+2], bl
jge     short loc_74484E

loc_744849:                             ; CODE XREF: BuildingClass__FindPlacementCells+85↑j
mov     byte ptr [esp+40h+var_30+2], 1

loc_74484E:                             ; CODE XREF: BuildingClass__FindPlacementCells+97↑j
mov     ebp, [esp+40h+arg_0]
lea     ecx, [esp+40h+var_C]
push    ecx
mov     ecx, ebp
mov     eax, [ebp+0]
call    dword ptr [eax+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+40h+arg_0], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
mov     ecx, 87F7E8h
add     eax, edx
sar     eax, 8
mov     word ptr [esp+40h+arg_0+2], ax
mov     edx, [esp+40h+arg_0]
lea     eax, [esp+40h+var_28]
mov     [esp+40h+var_28], edx
push    eax
call    CellCoord__To_CellObj
mov     edx, [eax+140h]
mov     ecx, eax
shr     edx, 8
and     dl, 1
mov     byte ptr [esp+40h+arg_0], dl
call    Cell__IsBuildableAdvanced
cmp     byte ptr [esp+40h+var_30+3], bl
jz      loc_74534C
cmp     byte ptr [esp+40h+arg_0], bl
jz      loc_744DCA
lea     ecx, [esp+40h+var_28]
lea     edx, [esp+40h+var_2C]
push    ecx
lea     eax, [esp+44h+var_14]
push    edx
push    eax
mov     ecx, 87F7E8h
call    Pathfinding__SelectRegionPath
mov     ecx, [eax]
lea     edx, [esp+40h+var_28]
mov     [esp+40h+arg_0], ecx
lea     eax, [esp+40h+var_28]
push    edx
lea     ecx, [esp+44h+var_14]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    Pathfinding__SelectRegionPath
mov     edx, [eax]
lea     eax, [esp+40h+var_18]
lea     ecx, [esp+40h+arg_0]
push    eax
push    ecx
mov     ecx, edi
mov     [esp+48h+var_18], edx
call    BuildingTypeClass__IsPlacementValid
test    al, al
jz      loc_744D60
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+arg_0]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+arg_0]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
push    ebx
mov     [esp+44h+var_20], eax
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+arg_0]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_18]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     ecx, dword_A8ED54+8E264h
mov     eax, [eax]
cmp     word ptr [esp+40h+var_20], cx
mov     dx, word ptr dword_A8ED54+8E266h
mov     [esp+40h+var_1C], eax
jnz     short loc_7449DC
cmp     word ptr [esp+40h+var_20+2], dx
jz      loc_744A5E

loc_7449DC:                             ; CODE XREF: BuildingClass__FindPlacementCells+21F↑j
cmp     ax, cx
jnz     short loc_7449E8
cmp     word ptr [esp+40h+var_1C+2], dx
jz      short loc_744A5E

loc_7449E8:                             ; CODE XREF: BuildingClass__FindPlacementCells+22F↑j
lea     eax, [esp+40h+var_20]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ecx, [esi+10h]
mov     edi, eax
mov     eax, [esi+8]
cmp     ecx, eax
jl      short loc_744A22
cmp     [esi+0Dh], bl
jnz     short loc_744A0C
cmp     eax, ebx
jnz     short loc_744A31

loc_744A0C:                             ; CODE XREF: BuildingClass__FindPlacementCells+256↑j
mov     ecx, [esi+14h]
cmp     ecx, ebx
jle     short loc_744A31
mov     edx, [esi]
add     eax, ecx
push    ebx
push    eax
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_744A31

loc_744A22:                             ; CODE XREF: BuildingClass__FindPlacementCells+251↑j
mov     eax, [esi+10h]
mov     edx, [esi+4]
lea     ecx, [eax+1]
mov     [esi+10h], ecx
mov     [edx+eax*4], edi

loc_744A31:                             ; CODE XREF: BuildingClass__FindPlacementCells+25A↑j
; BuildingClass__FindPlacementCells+261↑j ...
lea     eax, [esp+40h+var_1C]

loc_744A35:                             ; CODE XREF: BuildingClass__FindPlacementCells+615↓j
; BuildingClass__FindPlacementCells+1100↓j ...
push    eax

loc_744A36:                             ; CODE XREF: BuildingClass__FindPlacementCells+1143↓j
; BuildingClass__FindPlacementCells+13EE↓j
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, [esi+10h]
mov     edi, eax
mov     eax, [esi+8]
cmp     ecx, eax
jl      loc_745DC7
cmp     [esi+0Dh], bl
jnz     loc_745DA9
jmp     loc_745DA1
; ---------------------------------------------------------------------------

loc_744A5E:                             ; CODE XREF: BuildingClass__FindPlacementCells+226↑j
; BuildingClass__FindPlacementCells+236↑j
push    ebx
push    1
push    1
lea     eax, [esp+4Ch+var_28]
push    ebx
lea     ecx, [esp+50h+var_2C]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    MapSeed__CheckTileMatch
test    al, al
jz      short loc_744AE7
mov     dx, word ptr [esp+40h+arg_0]
cmp     dx, word ptr [esp+40h+var_2C]
jnz     short loc_744A98
mov     ax, word ptr [esp+40h+arg_0+2]
cmp     ax, word ptr [esp+40h+var_2C+2]
jz      loc_744DC1

loc_744A98:                             ; CODE XREF: BuildingClass__FindPlacementCells+2D6↑j
lea     ecx, [esp+40h+arg_0]
push    ecx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, [esi+10h]
mov     edi, eax
mov     eax, [esi+8]
cmp     ecx, eax
jl      loc_744DB2
cmp     [esi+0Dh], bl
jnz     short loc_744AC4
cmp     eax, ebx
jnz     loc_744DC1

loc_744AC4:                             ; CODE XREF: BuildingClass__FindPlacementCells+30A↑j
mov     ecx, [esi+14h]
cmp     ecx, ebx
jle     loc_744DC1
mov     edx, [esi]
add     eax, ecx
push    ebx
push    eax
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      loc_744DC1
jmp     loc_744DB2
; ---------------------------------------------------------------------------

loc_744AE7:                             ; CODE XREF: BuildingClass__FindPlacementCells+2CA↑j
mov     ax, word ptr [esp+40h+var_20]
cmp     ax, word ptr dword_A8ED54+8E264h
jnz     short loc_744B07
mov     cx, word ptr [esp+40h+var_20+2]
cmp     cx, word ptr dword_A8ED54+8E266h
jz      loc_744CCF

loc_744B07:                             ; CODE XREF: BuildingClass__FindPlacementCells+343↑j
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    ebx
push    ebx
push    ecx
push    eax
push    eax
push    ebx
push    0FFFFFFFFh
push    eax
lea     eax, [esp+74h+var_28]
lea     ecx, [esp+74h+var_10]
push    eax
push    ecx
mov     ecx, 87F7E8h
mov     word ptr [esp+7Ch+var_14], bx
mov     word ptr [esp+7Ch+var_14+2], bx
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_1C], eax
mov     cx, word ptr [esp+40h+var_1C+2]
jnz     short loc_744B5F
cmp     cx, word ptr dword_A8ED54+8E266h
jz      loc_744C3E

loc_744B5F:                             ; CODE XREF: BuildingClass__FindPlacementCells+3A0↑j
cmp     word ptr [esp+40h+var_20], ax
jnz     short loc_744B71
cmp     word ptr [esp+40h+var_20+2], cx
jz      loc_744C3E

loc_744B71:                             ; CODE XREF: BuildingClass__FindPlacementCells+3B4↑j
lea     edx, [esp+40h+var_20]
mov     ecx, 87F7E8h
push    edx
call    CellCoord__To_CellObj
mov     ecx, [esi+10h]
mov     edi, eax
mov     eax, [esi+8]
cmp     ecx, eax
jl      short loc_744BAB
cmp     [esi+0Dh], bl
jnz     short loc_744B95
cmp     eax, ebx
jnz     short loc_744BBA

loc_744B95:                             ; CODE XREF: BuildingClass__FindPlacementCells+3DF↑j
mov     ecx, [esi+14h]
cmp     ecx, ebx
jle     short loc_744BBA
mov     edx, [esi]
add     eax, ecx
push    ebx
push    eax
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_744BBA

loc_744BAB:                             ; CODE XREF: BuildingClass__FindPlacementCells+3DA↑j
mov     eax, [esi+10h]
mov     edx, [esi+4]
lea     ecx, [eax+1]
mov     [esi+10h], ecx
mov     [edx+eax*4], edi

loc_744BBA:                             ; CODE XREF: BuildingClass__FindPlacementCells+3E3↑j
; BuildingClass__FindPlacementCells+3EA↑j ...
lea     eax, [esp+40h+var_1C]

loc_744BBE:                             ; CODE XREF: BuildingClass__FindPlacementCells+A4F↓j
; BuildingClass__FindPlacementCells+1217↓j ...
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ebp, eax

loc_744BCB:                             ; CODE XREF: BuildingClass__FindPlacementCells+6E5↓j
; BuildingClass__FindPlacementCells+6F0↓j ...
mov     edi, [esp+40h+var_24]

loc_744BCF:                             ; CODE XREF: BuildingClass__FindPlacementCells+51A↓j
; BuildingClass__FindPlacementCells+5AB↓j ...
mov     ecx, [esi+8]
mov     eax, [esi+10h]
cmp     eax, ecx
jl      short loc_744BF8
cmp     [esi+0Dh], bl
jnz     short loc_744BE2
cmp     ecx, ebx
jnz     short loc_744C07

loc_744BE2:                             ; CODE XREF: BuildingClass__FindPlacementCells+42C↑j
mov     eax, [esi+14h]
cmp     eax, ebx
jle     short loc_744C07
mov     edx, [esi]
add     ecx, eax
push    ebx
push    ecx
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_744C07

loc_744BF8:                             ; CODE XREF: BuildingClass__FindPlacementCells+427↑j
mov     eax, [esi+10h]
mov     edx, [esi+4]
lea     ecx, [eax+1]
mov     [esi+10h], ecx
mov     [edx+eax*4], ebp

loc_744C07:                             ; CODE XREF: BuildingClass__FindPlacementCells+430↑j
; BuildingClass__FindPlacementCells+437↑j ...
mov     eax, [edi+58Ch]
mov     ecx, [esi+10h]
cmp     ecx, ebx
mov     eax, [eax]
jle     short loc_744C34
lea     edx, [ecx-1]
xor     ecx, ecx
cmp     edx, ebx
mov     [esi+10h], edx
jle     short loc_744C34

loc_744C22:                             ; CODE XREF: BuildingClass__FindPlacementCells+482↓j
mov     edx, [esi+4]
inc     ecx
mov     edi, [edx+ecx*4]
mov     [edx+ecx*4-4], edi
mov     edx, [esi+10h]
cmp     ecx, edx
jl      short loc_744C22

loc_744C34:                             ; CODE XREF: BuildingClass__FindPlacementCells+464↑j
; BuildingClass__FindPlacementCells+470↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 30h
retn    4
; ---------------------------------------------------------------------------

loc_744C3E:                             ; CODE XREF: BuildingClass__FindPlacementCells+3A9↑j
; BuildingClass__FindPlacementCells+3BB↑j
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    ebx
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    eax
push    ebx
push    eax
lea     eax, [esp+70h+var_2C]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_28]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_24], eax
jnz     short loc_744CA7
mov     ax, word ptr [esp+40h+var_24+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      loc_745FEB

loc_744CA7:                             ; CODE XREF: BuildingClass__FindPlacementCells+4E3↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+1C8h]
test    eax, eax
jl      loc_745FEB
lea     eax, [esp+40h+var_24]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ebp, eax
jmp     loc_744BCF
; ---------------------------------------------------------------------------

loc_744CCF:                             ; CODE XREF: BuildingClass__FindPlacementCells+351↑j
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    ebx
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    eax
push    ebx
push    eax
lea     eax, [esp+70h+var_2C]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_28]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_24], eax
jnz     short loc_744D38
mov     ax, word ptr [esp+40h+var_24+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      loc_745FEB

loc_744D38:                             ; CODE XREF: BuildingClass__FindPlacementCells+574↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+1C8h]
test    eax, eax
jl      loc_745FEB
lea     eax, [esp+40h+var_24]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ebp, eax
jmp     loc_744BCF
; ---------------------------------------------------------------------------

loc_744D60:                             ; CODE XREF: BuildingClass__FindPlacementCells+16B↑j
mov     cx, word ptr [esp+40h+arg_0]
cmp     cx, word ptr [esp+40h+var_2C]
jnz     short loc_744D78
mov     dx, word ptr [esp+40h+arg_0+2]
cmp     dx, word ptr [esp+40h+var_2C+2]
jz      short loc_744DC1

loc_744D78:                             ; CODE XREF: BuildingClass__FindPlacementCells+5BA↑j
lea     eax, [esp+40h+arg_0]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ecx, [esi+10h]
mov     edi, eax
mov     eax, [esi+8]
cmp     ecx, eax
jl      short loc_744DB2
cmp     [esi+0Dh], bl
jnz     short loc_744D9C
cmp     eax, ebx
jnz     short loc_744DC1

loc_744D9C:                             ; CODE XREF: BuildingClass__FindPlacementCells+5E6↑j
mov     ecx, [esi+14h]
cmp     ecx, ebx
jle     short loc_744DC1
mov     edx, [esi]
add     eax, ecx
push    ebx
push    eax
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_744DC1

loc_744DB2:                             ; CODE XREF: BuildingClass__FindPlacementCells+301↑j
; BuildingClass__FindPlacementCells+332↑j ...
mov     eax, [esi+10h]
lea     ecx, [eax+1]
mov     [esi+10h], ecx
mov     edx, [esi+4]
mov     [edx+eax*4], edi

loc_744DC1:                             ; CODE XREF: BuildingClass__FindPlacementCells+2E2↑j
; BuildingClass__FindPlacementCells+30E↑j ...
lea     eax, [esp+40h+var_18]
jmp     loc_744A35
; ---------------------------------------------------------------------------

loc_744DCA:                             ; CODE XREF: BuildingClass__FindPlacementCells+114↑j
cmp     al, bl
lea     eax, [esp+40h+var_28]
lea     ecx, [esp+40h+var_2C]
push    eax
push    ecx
jz      loc_744FAA
lea     edx, [esp+48h+var_10]
mov     ecx, 87F7E8h
push    edx
call    Pathfinding__SelectRegionPath
mov     eax, [eax]
lea     ecx, [esp+40h+var_28]
lea     edx, [esp+40h+arg_0]
push    ecx
push    edx
mov     ecx, edi
mov     [esp+48h+arg_0], eax
call    BuildingTypeClass__IsPlacementValid
test    al, al
jz      loc_744F84
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+arg_0]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+arg_0]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_18], eax
jnz     short loc_744E6F
mov     ax, word ptr [esp+40h+var_18+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      short loc_744EB1

loc_744E6F:                             ; CODE XREF: BuildingClass__FindPlacementCells+6AF↑j
lea     ecx, [esp+40h+var_18]
push    ecx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, [esi+10h]
mov     edi, eax
mov     eax, [esi+8]
cmp     ecx, eax
jl      loc_745DC7
cmp     [esi+0Dh], bl
jnz     short loc_744E9B

loc_744E93:                             ; CODE XREF: BuildingClass__FindPlacementCells+DDB↓j
; BuildingClass__FindPlacementCells+E8E↓j
cmp     eax, ebx
jnz     loc_744BCB

loc_744E9B:                             ; CODE XREF: BuildingClass__FindPlacementCells+6E1↑j
; BuildingClass__FindPlacementCells+DD5↓j ...
mov     ecx, [esi+14h]
cmp     ecx, ebx
jle     loc_744BCB
mov     edx, [esi]
add     ecx, eax
push    ebx
push    ecx
jmp     loc_745DBA
; ---------------------------------------------------------------------------

loc_744EB1:                             ; CODE XREF: BuildingClass__FindPlacementCells+6BD↑j
push    ebx
push    ebx
push    1
lea     eax, [esp+4Ch+var_28]
push    ebx
lea     ecx, [esp+50h+var_2C]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    MapSeed__CheckTileMatch
test    al, al
jz      short loc_744EF3
mov     dx, word ptr [esp+40h+arg_0]
cmp     dx, word ptr [esp+40h+var_2C]
jnz     short loc_744EEA
mov     ax, word ptr [esp+40h+arg_0+2]
cmp     ax, word ptr [esp+40h+var_2C+2]
jz      loc_744BCF

loc_744EEA:                             ; CODE XREF: BuildingClass__FindPlacementCells+728↑j
lea     ecx, [esp+40h+arg_0]
jmp     loc_74561A
; ---------------------------------------------------------------------------

loc_744EF3:                             ; CODE XREF: BuildingClass__FindPlacementCells+71C↑j
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    ebx
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    eax
push    ebx
push    eax
lea     eax, [esp+70h+var_2C]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_28]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_1C], eax
jnz     short loc_744F5C
mov     ax, word ptr [esp+40h+var_1C+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      loc_745FEB

loc_744F5C:                             ; CODE XREF: BuildingClass__FindPlacementCells+798↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+1C8h]
test    eax, eax
jl      loc_745FEB
lea     eax, [esp+40h+var_1C]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ebp, eax
jmp     loc_744BCF
; ---------------------------------------------------------------------------

loc_744F84:                             ; CODE XREF: BuildingClass__FindPlacementCells+654↑j
mov     cx, word ptr [esp+40h+arg_0]
cmp     cx, word ptr [esp+40h+var_2C]
jnz     short loc_744FA0
mov     dx, word ptr [esp+40h+arg_0+2]
cmp     dx, word ptr [esp+40h+var_2C+2]
jz      loc_744BCF

loc_744FA0:                             ; CODE XREF: BuildingClass__FindPlacementCells+7DE↑j
lea     eax, [esp+40h+arg_0]
push    eax
jmp     loc_74561B
; ---------------------------------------------------------------------------

loc_744FAA:                             ; CODE XREF: BuildingClass__FindPlacementCells+626↑j
lea     edx, [esp+48h+var_10]
mov     ecx, 87F7E8h
push    edx
call    Pathfinding__SelectRegionPath
mov     eax, [eax]
lea     ecx, [esp+40h+var_28]
lea     edx, [esp+40h+arg_0]
push    ecx
push    edx
mov     ecx, edi
mov     [esp+48h+arg_0], eax
call    BuildingTypeClass__IsPlacementValid
test    al, al
jz      loc_745326
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+arg_0]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+arg_0]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
push    ebx
mov     [esp+44h+var_20], eax
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+var_28]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_28]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     ecx, dword_A8ED54+8E264h
mov     eax, [eax]
cmp     word ptr [esp+40h+var_20], cx
mov     dx, word ptr dword_A8ED54+8E266h
mov     [esp+40h+var_1C], eax
jnz     short loc_74508F
cmp     word ptr [esp+40h+var_20+2], dx
jz      short loc_7450EE

loc_74508F:                             ; CODE XREF: BuildingClass__FindPlacementCells+8D6↑j
cmp     ax, cx
jnz     short loc_74509B
cmp     word ptr [esp+40h+var_1C+2], dx
jz      short loc_7450EE

loc_74509B:                             ; CODE XREF: BuildingClass__FindPlacementCells+8E2↑j
lea     eax, [esp+40h+var_20]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ecx, [esi+10h]
mov     edi, eax
mov     eax, [esi+8]
cmp     ecx, eax
jl      short loc_7450D5
cmp     [esi+0Dh], bl
jnz     short loc_7450BF
cmp     eax, ebx
jnz     short loc_7450E4

loc_7450BF:                             ; CODE XREF: BuildingClass__FindPlacementCells+909↑j
mov     ecx, [esi+14h]
cmp     ecx, ebx
jle     short loc_7450E4
mov     edx, [esi]
add     ecx, eax
push    ebx
push    ecx
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_7450E4

loc_7450D5:                             ; CODE XREF: BuildingClass__FindPlacementCells+904↑j
mov     eax, [esi+10h]
mov     edx, [esi+4]
lea     ecx, [eax+1]
mov     [esi+10h], ecx
mov     [edx+eax*4], edi

loc_7450E4:                             ; CODE XREF: BuildingClass__FindPlacementCells+90D↑j
; BuildingClass__FindPlacementCells+914↑j ...
lea     eax, [esp+40h+var_1C]
push    eax
jmp     loc_74561B
; ---------------------------------------------------------------------------

loc_7450EE:                             ; CODE XREF: BuildingClass__FindPlacementCells+8DD↑j
; BuildingClass__FindPlacementCells+8E9↑j
push    ebx
push    ebx
push    1
lea     eax, [esp+4Ch+var_28]
push    ebx
lea     ecx, [esp+50h+var_2C]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    MapSeed__CheckTileMatch
test    al, al
jz      short loc_745130
mov     dx, word ptr [esp+40h+arg_0]
cmp     dx, word ptr [esp+40h+var_2C]
jnz     short loc_745127
mov     ax, word ptr [esp+40h+arg_0+2]
cmp     ax, word ptr [esp+40h+var_2C+2]
jz      loc_744BCF

loc_745127:                             ; CODE XREF: BuildingClass__FindPlacementCells+965↑j
lea     ecx, [esp+40h+arg_0]
jmp     loc_74561A
; ---------------------------------------------------------------------------

loc_745130:                             ; CODE XREF: BuildingClass__FindPlacementCells+959↑j
mov     ax, word ptr [esp+40h+var_20]
cmp     ax, word ptr dword_A8ED54+8E264h
jnz     short loc_745150
mov     cx, word ptr [esp+40h+var_20+2]
cmp     cx, word ptr dword_A8ED54+8E266h
jz      loc_745295

loc_745150:                             ; CODE XREF: BuildingClass__FindPlacementCells+98C↑j
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    eax
push    ebx
push    0FFFFFFFFh
push    eax
lea     eax, [esp+74h+var_28]
lea     ecx, [esp+74h+var_10]
push    eax
push    ecx
mov     ecx, 87F7E8h
mov     word ptr [esp+7Ch+var_14], bx
mov     word ptr [esp+7Ch+var_14+2], bx
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_1C], eax
mov     cx, word ptr [esp+40h+var_1C+2]
jnz     short loc_7451A4
cmp     cx, word ptr dword_A8ED54+8E266h
jz      short loc_745204

loc_7451A4:                             ; CODE XREF: BuildingClass__FindPlacementCells+9E9↑j
cmp     ax, word ptr [esp+40h+var_20]
jnz     short loc_7451B2
cmp     cx, word ptr [esp+40h+var_20+2]
jz      short loc_745204

loc_7451B2:                             ; CODE XREF: BuildingClass__FindPlacementCells+9F9↑j
lea     edx, [esp+40h+var_20]
mov     ecx, 87F7E8h
push    edx
call    CellCoord__To_CellObj
mov     ecx, [esi+10h]
mov     edi, eax
mov     eax, [esi+8]
cmp     ecx, eax
jl      short loc_7451EC
cmp     [esi+0Dh], bl
jnz     short loc_7451D6
cmp     eax, ebx
jnz     short loc_7451FB

loc_7451D6:                             ; CODE XREF: BuildingClass__FindPlacementCells+A20↑j
mov     ecx, [esi+14h]
cmp     ecx, ebx
jle     short loc_7451FB
mov     edx, [esi]
add     ecx, eax
push    ebx
push    ecx
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_7451FB

loc_7451EC:                             ; CODE XREF: BuildingClass__FindPlacementCells+A1B↑j
mov     eax, [esi+10h]
mov     edx, [esi+4]
lea     ecx, [eax+1]
mov     [esi+10h], ecx
mov     [edx+eax*4], edi

loc_7451FB:                             ; CODE XREF: BuildingClass__FindPlacementCells+A24↑j
; BuildingClass__FindPlacementCells+A2B↑j ...
lea     eax, [esp+40h+var_1C]
jmp     loc_744BBE
; ---------------------------------------------------------------------------

loc_745204:                             ; CODE XREF: BuildingClass__FindPlacementCells+9F2↑j
; BuildingClass__FindPlacementCells+A00↑j
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    ebx
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    eax
push    ebx
push    eax
lea     eax, [esp+70h+var_2C]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_28]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_18], eax
jnz     short loc_74526D
mov     ax, word ptr [esp+40h+var_18+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      loc_745FEB

loc_74526D:                             ; CODE XREF: BuildingClass__FindPlacementCells+AA9↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+1C8h]
test    eax, eax
jl      loc_745FEB
lea     eax, [esp+40h+var_18]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ebp, eax
jmp     loc_744BCF
; ---------------------------------------------------------------------------

loc_745295:                             ; CODE XREF: BuildingClass__FindPlacementCells+99A↑j
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    ebx
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    eax
push    ebx
push    eax
lea     eax, [esp+70h+var_2C]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_28]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_18], eax
jnz     short loc_7452FE
mov     ax, word ptr [esp+40h+var_18+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      loc_745FEB

loc_7452FE:                             ; CODE XREF: BuildingClass__FindPlacementCells+B3A↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+1C8h]
test    eax, eax
jl      loc_745FEB
lea     eax, [esp+40h+var_18]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ebp, eax
jmp     loc_744BCF
; ---------------------------------------------------------------------------

loc_745326:                             ; CODE XREF: BuildingClass__FindPlacementCells+822↑j
mov     cx, word ptr [esp+40h+arg_0]
cmp     cx, word ptr [esp+40h+var_2C]
jnz     short loc_745342
mov     dx, word ptr [esp+40h+arg_0+2]
cmp     dx, word ptr [esp+40h+var_2C+2]
jz      loc_744BCF

loc_745342:                             ; CODE XREF: BuildingClass__FindPlacementCells+B80↑j
lea     eax, [esp+40h+arg_0]
push    eax
jmp     loc_74561B
; ---------------------------------------------------------------------------

loc_74534C:                             ; CODE XREF: BuildingClass__FindPlacementCells+10A↑j
mov     cl, byte ptr [esp+40h+var_30+2]
cmp     cl, bl
mov     cl, byte ptr [esp+40h+arg_0]
jz      loc_745760
cmp     cl, bl
jz      loc_745590
lea     eax, [esp+40h+var_28]
lea     ecx, [esp+40h+var_28]
push    eax
lea     edx, [esp+44h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    Pathfinding__SelectRegionPath
mov     eax, [eax]
lea     ecx, [esp+40h+arg_0]
lea     edx, [esp+40h+var_2C]
push    ecx
push    edx
mov     ecx, edi
mov     [esp+48h+arg_0], eax
call    BuildingTypeClass__IsPlacementValid
test    al, al
jz      loc_745547
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+arg_0]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+arg_0]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_1C], eax
jnz     short loc_745401
mov     ax, word ptr [esp+40h+var_1C+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      short loc_74540A

loc_745401:                             ; CODE XREF: BuildingClass__FindPlacementCells+C41↑j
lea     ecx, [esp+40h+var_1C]
jmp     loc_74561A
; ---------------------------------------------------------------------------

loc_74540A:                             ; CODE XREF: BuildingClass__FindPlacementCells+C4F↑j
push    ebx
push    1
push    ebx
lea     eax, [esp+4Ch+var_28]
push    ebx
lea     ecx, [esp+50h+var_2C]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    MapSeed__CheckTileMatch
test    al, al
jz      short loc_74544C
mov     dx, word ptr [esp+40h+arg_0]
cmp     dx, word ptr [esp+40h+var_2C]
jnz     short loc_745443
mov     ax, word ptr [esp+40h+arg_0+2]
cmp     ax, word ptr [esp+40h+var_2C+2]
jz      loc_744BCF

loc_745443:                             ; CODE XREF: BuildingClass__FindPlacementCells+C81↑j
lea     ecx, [esp+40h+arg_0]
jmp     loc_74561A
; ---------------------------------------------------------------------------

loc_74544C:                             ; CODE XREF: BuildingClass__FindPlacementCells+C75↑j
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    ebx
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    0FFFFFFFFh
push    eax
lea     eax, [esp+74h+var_28]
lea     ecx, [esp+74h+var_10]
push    eax
push    ecx
mov     ecx, 87F7E8h
mov     word ptr [esp+7Ch+var_14], bx
mov     word ptr [esp+7Ch+var_14+2], bx
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_1C], eax
jnz     short loc_7454A0
mov     dx, word ptr [esp+40h+var_1C+2]
cmp     dx, word ptr dword_A8ED54+8E266h
jz      short loc_7454B6

loc_7454A0:                             ; CODE XREF: BuildingClass__FindPlacementCells+CE0↑j
lea     eax, [esp+40h+var_1C]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ebp, eax
jmp     loc_744BCF
; ---------------------------------------------------------------------------

loc_7454B6:                             ; CODE XREF: BuildingClass__FindPlacementCells+CEE↑j
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    ebx
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+var_2C]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_28]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_18], eax
jnz     short loc_74551F
mov     ax, word ptr [esp+40h+var_18+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      loc_745FEB

loc_74551F:                             ; CODE XREF: BuildingClass__FindPlacementCells+D5B↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+1C8h]
test    eax, eax
jl      loc_745FEB
lea     eax, [esp+40h+var_18]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ebp, eax
jmp     loc_744BCF
; ---------------------------------------------------------------------------

loc_745547:                             ; CODE XREF: BuildingClass__FindPlacementCells+BE6↑j
mov     cx, word ptr [esp+40h+arg_0]
cmp     cx, word ptr [esp+40h+var_2C]
jnz     short loc_745563
mov     dx, word ptr [esp+40h+arg_0+2]
cmp     dx, word ptr [esp+40h+var_2C+2]
jz      loc_744BCF

loc_745563:                             ; CODE XREF: BuildingClass__FindPlacementCells+DA1↑j
lea     eax, [esp+40h+arg_0]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ecx, [esi+10h]
mov     edi, eax
mov     eax, [esi+8]
cmp     ecx, eax
jl      loc_745DC7
cmp     [esi+0Dh], bl
jnz     loc_744E9B
jmp     loc_744E93
; ---------------------------------------------------------------------------

loc_745590:                             ; CODE XREF: BuildingClass__FindPlacementCells+BAE↑j
cmp     al, bl
jnz     loc_744BCF
lea     eax, [esp+40h+var_28]
lea     ecx, [esp+40h+var_2C]
push    eax
push    ecx
mov     ecx, edi
call    BuildingTypeClass__IsPlacementValid
test    al, al
jz      loc_744BCF
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+var_28]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_28]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+arg_0], eax
jnz     short loc_745616
mov     ax, word ptr [esp+40h+arg_0+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      short loc_745643

loc_745616:                             ; CODE XREF: BuildingClass__FindPlacementCells+E56↑j
lea     ecx, [esp+40h+arg_0]

loc_74561A:                             ; CODE XREF: BuildingClass__FindPlacementCells+73E↑j
; BuildingClass__FindPlacementCells+97B↑j ...
push    ecx

loc_74561B:                             ; CODE XREF: BuildingClass__FindPlacementCells+7F5↑j
; BuildingClass__FindPlacementCells+939↑j ...
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, [esi+10h]
mov     edi, eax
mov     eax, [esi+8]
cmp     ecx, eax
jl      loc_745DC7
cmp     [esi+0Dh], bl
jnz     loc_744E9B
jmp     loc_744E93
; ---------------------------------------------------------------------------

loc_745643:                             ; CODE XREF: BuildingClass__FindPlacementCells+E64↑j
push    ebx
push    1
push    1
lea     eax, [esp+4Ch+var_28]
push    ebx
lea     ecx, [esp+50h+var_2C]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    MapSeed__CheckTileMatch
test    al, al
jnz     loc_744BCF
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    ebx
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    0FFFFFFFFh
push    eax
lea     eax, [esp+74h+var_28]
lea     ecx, [esp+74h+var_10]
push    eax
push    ecx
mov     ecx, 87F7E8h
mov     word ptr [esp+7Ch+var_14], bx
mov     word ptr [esp+7Ch+var_14+2], bx
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+arg_0], eax
jnz     short loc_7456B9
mov     dx, word ptr [esp+40h+arg_0+2]
cmp     dx, word ptr dword_A8ED54+8E266h
jz      short loc_7456CF

loc_7456B9:                             ; CODE XREF: BuildingClass__FindPlacementCells+EF9↑j
lea     eax, [esp+40h+arg_0]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ebp, eax
jmp     loc_744BCF
; ---------------------------------------------------------------------------

loc_7456CF:                             ; CODE XREF: BuildingClass__FindPlacementCells+F07↑j
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    ebx
mov     ecx, eax
push    ebx
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+var_2C]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_28]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_18], eax
jnz     short loc_745738
mov     ax, word ptr [esp+40h+var_18+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      loc_745FEB

loc_745738:                             ; CODE XREF: BuildingClass__FindPlacementCells+F74↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+1C8h]
test    eax, eax
jl      loc_745FEB
lea     eax, [esp+40h+var_18]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ebp, eax
jmp     loc_744BCF
; ---------------------------------------------------------------------------

loc_745760:                             ; CODE XREF: BuildingClass__FindPlacementCells+BA6↑j
cmp     cl, bl
jz      loc_745B13
lea     ecx, [esp+40h+var_28]
lea     edx, [esp+40h+var_28]
push    ecx
lea     eax, [esp+44h+var_10]
push    edx
push    eax
mov     ecx, 87F7E8h
call    Pathfinding__SelectRegionPath
mov     ecx, [eax]
lea     edx, [esp+40h+arg_0]
lea     eax, [esp+40h+var_2C]
mov     [esp+40h+arg_0], ecx
push    edx
push    eax
mov     ecx, edi
call    BuildingTypeClass__IsPlacementValid
test    al, al
jz      loc_745AEE
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+var_2C]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_2C]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
push    ebx
mov     [esp+44h+var_20], eax
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+arg_0]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+arg_0]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     ecx, dword_A8ED54+8E264h
mov     eax, [eax]
cmp     word ptr [esp+40h+var_20], cx
mov     dx, word ptr dword_A8ED54+8E266h
mov     [esp+40h+var_1C], eax
jnz     short loc_745857
cmp     word ptr [esp+40h+var_20+2], dx
jz      short loc_7458B5

loc_745857:                             ; CODE XREF: BuildingClass__FindPlacementCells+109E↑j
cmp     ax, cx
jnz     short loc_745863
cmp     word ptr [esp+40h+var_1C+2], dx
jz      short loc_7458B5

loc_745863:                             ; CODE XREF: BuildingClass__FindPlacementCells+10AA↑j
lea     eax, [esp+40h+var_20]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ecx, [esi+10h]
mov     edi, eax
mov     eax, [esi+8]
cmp     ecx, eax
jl      short loc_74589D
cmp     [esi+0Dh], bl
jnz     short loc_745887
cmp     eax, ebx
jnz     short loc_7458AC

loc_745887:                             ; CODE XREF: BuildingClass__FindPlacementCells+10D1↑j
mov     ecx, [esi+14h]
cmp     ecx, ebx
jle     short loc_7458AC
mov     edx, [esi]
add     eax, ecx
push    ebx
push    eax
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_7458AC

loc_74589D:                             ; CODE XREF: BuildingClass__FindPlacementCells+10CC↑j
mov     eax, [esi+10h]
mov     edx, [esi+4]
lea     ecx, [eax+1]
mov     [esi+10h], ecx
mov     [edx+eax*4], edi

loc_7458AC:                             ; CODE XREF: BuildingClass__FindPlacementCells+10D5↑j
; BuildingClass__FindPlacementCells+10DC↑j ...
lea     eax, [esp+40h+var_1C]
jmp     loc_744A35
; ---------------------------------------------------------------------------

loc_7458B5:                             ; CODE XREF: BuildingClass__FindPlacementCells+10A5↑j
; BuildingClass__FindPlacementCells+10B1↑j
push    ebx
push    1
push    ebx
lea     eax, [esp+4Ch+var_28]
push    ebx
lea     ecx, [esp+50h+var_2C]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    MapSeed__CheckTileMatch
test    al, al
jz      short loc_7458F8
mov     dx, word ptr [esp+40h+arg_0]
cmp     dx, word ptr [esp+40h+var_2C]
jnz     short loc_7458EE
mov     ax, word ptr [esp+40h+arg_0+2]
cmp     ax, word ptr [esp+40h+var_2C+2]
jz      loc_744BCF

loc_7458EE:                             ; CODE XREF: BuildingClass__FindPlacementCells+112C↑j
lea     ecx, [esp+40h+arg_0]
push    ecx
jmp     loc_744A36
; ---------------------------------------------------------------------------

loc_7458F8:                             ; CODE XREF: BuildingClass__FindPlacementCells+1120↑j
mov     ax, word ptr [esp+40h+var_20]
cmp     ax, word ptr dword_A8ED54+8E264h
jnz     short loc_745918
mov     cx, word ptr [esp+40h+var_20+2]
cmp     cx, word ptr dword_A8ED54+8E266h
jz      loc_745A5D

loc_745918:                             ; CODE XREF: BuildingClass__FindPlacementCells+1154↑j
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    ebx
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    0FFFFFFFFh
push    eax
lea     eax, [esp+74h+var_28]
lea     ecx, [esp+74h+var_10]
push    eax
push    ecx
mov     ecx, 87F7E8h
mov     word ptr [esp+7Ch+var_14], bx
mov     word ptr [esp+7Ch+var_14+2], bx
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_1C], eax
mov     cx, word ptr [esp+40h+var_1C+2]
jnz     short loc_74596C
cmp     cx, word ptr dword_A8ED54+8E266h
jz      short loc_7459CC

loc_74596C:                             ; CODE XREF: BuildingClass__FindPlacementCells+11B1↑j
cmp     word ptr [esp+40h+var_20], ax
jnz     short loc_74597A
cmp     word ptr [esp+40h+var_20+2], cx
jz      short loc_7459CC

loc_74597A:                             ; CODE XREF: BuildingClass__FindPlacementCells+11C1↑j
lea     edx, [esp+40h+var_20]
mov     ecx, 87F7E8h
push    edx
call    CellCoord__To_CellObj
mov     ecx, [esi+10h]
mov     edi, eax
mov     eax, [esi+8]
cmp     ecx, eax
jl      short loc_7459B4
cmp     [esi+0Dh], bl
jnz     short loc_74599E
cmp     eax, ebx
jnz     short loc_7459C3

loc_74599E:                             ; CODE XREF: BuildingClass__FindPlacementCells+11E8↑j
mov     ecx, [esi+14h]
cmp     ecx, ebx
jle     short loc_7459C3
mov     edx, [esi]
add     eax, ecx
push    ebx
push    eax
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_7459C3

loc_7459B4:                             ; CODE XREF: BuildingClass__FindPlacementCells+11E3↑j
mov     eax, [esi+10h]
mov     edx, [esi+4]
lea     ecx, [eax+1]
mov     [esi+10h], ecx
mov     [edx+eax*4], edi

loc_7459C3:                             ; CODE XREF: BuildingClass__FindPlacementCells+11EC↑j
; BuildingClass__FindPlacementCells+11F3↑j ...
lea     eax, [esp+40h+var_1C]
jmp     loc_744BBE
; ---------------------------------------------------------------------------

loc_7459CC:                             ; CODE XREF: BuildingClass__FindPlacementCells+11BA↑j
; BuildingClass__FindPlacementCells+11C8↑j
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    ebx
mov     ecx, eax
push    ebx
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+var_2C]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_28]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_18], eax
jnz     short loc_745A35
mov     ax, word ptr [esp+40h+var_18+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      loc_745FEB

loc_745A35:                             ; CODE XREF: BuildingClass__FindPlacementCells+1271↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+1C8h]
test    eax, eax
jl      loc_745FEB
lea     eax, [esp+40h+var_18]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ebp, eax
jmp     loc_744BCF
; ---------------------------------------------------------------------------

loc_745A5D:                             ; CODE XREF: BuildingClass__FindPlacementCells+1162↑j
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    ebx
mov     ecx, eax
push    ebx
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+var_2C]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_28]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_18], eax
jnz     short loc_745AC6
mov     ax, word ptr [esp+40h+var_18+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      loc_745FEB

loc_745AC6:                             ; CODE XREF: BuildingClass__FindPlacementCells+1302↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+1C8h]
test    eax, eax
jl      loc_745FEB
lea     eax, [esp+40h+var_18]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ebp, eax
jmp     loc_744BCF
; ---------------------------------------------------------------------------

loc_745AEE:                             ; CODE XREF: BuildingClass__FindPlacementCells+FEA↑j
mov     cx, word ptr [esp+40h+arg_0]
cmp     cx, word ptr [esp+40h+var_2C]
jnz     short loc_745B0A
mov     dx, word ptr [esp+40h+arg_0+2]
cmp     dx, word ptr [esp+40h+var_2C+2]
jz      loc_744BCF

loc_745B0A:                             ; CODE XREF: BuildingClass__FindPlacementCells+1348↑j
lea     eax, [esp+40h+arg_0]
jmp     loc_744A35
; ---------------------------------------------------------------------------

loc_745B13:                             ; CODE XREF: BuildingClass__FindPlacementCells+FB2↑j
cmp     al, bl
jz      loc_745C54
lea     eax, [esp+40h+var_28]
lea     ecx, [esp+40h+var_2C]
push    eax
push    ecx
mov     ecx, edi
call    BuildingTypeClass__IsPlacementValid
test    al, al
jz      loc_744BCF
push    ebx
lea     edx, [esp+44h+arg_0]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+var_2C]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+arg_0], bx
mov     word ptr [esp+78h+arg_0+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_2C]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_14], eax
jnz     short loc_745B99
mov     ax, word ptr [esp+40h+var_14+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      short loc_745BA3

loc_745B99:                             ; CODE XREF: BuildingClass__FindPlacementCells+13D9↑j
lea     ecx, [esp+40h+var_14]
push    ecx
jmp     loc_744A36
; ---------------------------------------------------------------------------

loc_745BA3:                             ; CODE XREF: BuildingClass__FindPlacementCells+13E7↑j
push    ebx
push    ebx
push    ebx
lea     eax, [esp+4Ch+var_28]
push    ebx
lea     ecx, [esp+50h+var_2C]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    MapSeed__CheckTileMatch
test    al, al
jnz     loc_744BCF
push    ebx
lea     edx, [esp+44h+arg_0]
mov     eax, 1
push    ebx
push    edx
push    eax
push    ebx
mov     ecx, eax
push    ebx
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+var_2C]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+arg_0], bx
mov     word ptr [esp+78h+arg_0+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_28]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_18], eax
jnz     short loc_745C2C
mov     ax, word ptr [esp+40h+var_18+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      loc_745FEB

loc_745C2C:                             ; CODE XREF: BuildingClass__FindPlacementCells+1468↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+1C8h]
test    eax, eax
jl      loc_745FEB
lea     eax, [esp+40h+var_18]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ebp, eax
jmp     loc_744BCF
; ---------------------------------------------------------------------------

loc_745C54:                             ; CODE XREF: BuildingClass__FindPlacementCells+1365↑j
lea     ecx, [esp+40h+var_28]
lea     edx, [esp+40h+var_2C]
push    ecx
push    edx
mov     ecx, edi
call    BuildingTypeClass__IsPlacementValid
test    al, al
jz      loc_744BCF
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+var_2C]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_2C]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
push    ebx
mov     [esp+44h+arg_0], eax
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+var_28]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_28]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     ecx, dword_A8ED54+8E264h
mov     eax, [eax]
cmp     word ptr [esp+40h+arg_0], cx
mov     dx, word ptr dword_A8ED54+8E266h
mov     [esp+40h+var_1C], eax
jnz     short loc_745D28
cmp     word ptr [esp+40h+arg_0+2], dx
jz      loc_745DDB

loc_745D28:                             ; CODE XREF: BuildingClass__FindPlacementCells+156B↑j
cmp     ax, cx
jnz     short loc_745D38
cmp     word ptr [esp+40h+var_1C+2], dx
jz      loc_745DDB

loc_745D38:                             ; CODE XREF: BuildingClass__FindPlacementCells+157B↑j
lea     eax, [esp+40h+arg_0]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ecx, [esi+10h]
mov     edi, eax
mov     eax, [esi+8]
cmp     ecx, eax
jl      short loc_745D72
cmp     [esi+0Dh], bl
jnz     short loc_745D5C
cmp     eax, ebx
jnz     short loc_745D81

loc_745D5C:                             ; CODE XREF: BuildingClass__FindPlacementCells+15A6↑j
mov     ecx, [esi+14h]
cmp     ecx, ebx
jle     short loc_745D81
mov     edx, [esi]
add     eax, ecx
push    ebx
push    eax
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_745D81

loc_745D72:                             ; CODE XREF: BuildingClass__FindPlacementCells+15A1↑j
mov     eax, [esi+10h]
mov     edx, [esi+4]
lea     ecx, [eax+1]
mov     [esi+10h], ecx
mov     [edx+eax*4], edi

loc_745D81:                             ; CODE XREF: BuildingClass__FindPlacementCells+15AA↑j
; BuildingClass__FindPlacementCells+15B1↑j ...
lea     eax, [esp+40h+var_1C]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ecx, [esi+10h]
mov     edi, eax
mov     eax, [esi+8]
cmp     ecx, eax
jl      short loc_745DC7
cmp     [esi+0Dh], bl
jnz     short loc_745DA9

loc_745DA1:                             ; CODE XREF: BuildingClass__FindPlacementCells+2A9↑j
cmp     eax, ebx
jnz     loc_744BCB

loc_745DA9:                             ; CODE XREF: BuildingClass__FindPlacementCells+2A3↑j
; BuildingClass__FindPlacementCells+15EF↑j
mov     ecx, [esi+14h]
cmp     ecx, ebx
jle     loc_744BCB
mov     edx, [esi]
add     eax, ecx
push    ebx
push    eax

loc_745DBA:                             ; CODE XREF: BuildingClass__FindPlacementCells+6FC↑j
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      loc_744BCB

loc_745DC7:                             ; CODE XREF: BuildingClass__FindPlacementCells+29A↑j
; BuildingClass__FindPlacementCells+6D8↑j ...
mov     eax, [esi+10h]
lea     ecx, [eax+1]
mov     [esi+10h], ecx
mov     edx, [esi+4]
mov     [edx+eax*4], edi
jmp     loc_744BCB
; ---------------------------------------------------------------------------

loc_745DDB:                             ; CODE XREF: BuildingClass__FindPlacementCells+1572↑j
; BuildingClass__FindPlacementCells+1582↑j
push    ebx
push    1
push    1
lea     eax, [esp+4Ch+var_28]
push    ebx
lea     ecx, [esp+50h+var_2C]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    MapSeed__CheckTileMatch
test    al, al
jnz     loc_744BCF
mov     dx, word ptr [esp+40h+arg_0]
cmp     dx, word ptr dword_A8ED54+8E264h
jnz     short loc_745E1D
mov     ax, word ptr [esp+40h+arg_0+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      loc_745F62

loc_745E1D:                             ; CODE XREF: BuildingClass__FindPlacementCells+1659↑j
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    eax
mov     ecx, eax
push    ebx
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    0FFFFFFFFh
push    eax
lea     eax, [esp+74h+var_28]
lea     ecx, [esp+74h+var_10]
push    eax
push    ecx
mov     ecx, 87F7E8h
mov     word ptr [esp+7Ch+var_14], bx
mov     word ptr [esp+7Ch+var_14+2], bx
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_1C], eax
mov     cx, word ptr [esp+40h+var_1C+2]
jnz     short loc_745E71
cmp     cx, word ptr dword_A8ED54+8E266h
jz      short loc_745ED1

loc_745E71:                             ; CODE XREF: BuildingClass__FindPlacementCells+16B6↑j
cmp     word ptr [esp+40h+arg_0], ax
jnz     short loc_745E7F
cmp     word ptr [esp+40h+arg_0+2], cx
jz      short loc_745ED1

loc_745E7F:                             ; CODE XREF: BuildingClass__FindPlacementCells+16C6↑j
lea     edx, [esp+40h+arg_0]
mov     ecx, 87F7E8h
push    edx
call    CellCoord__To_CellObj
mov     ecx, [esi+10h]
mov     edi, eax
mov     eax, [esi+8]
cmp     ecx, eax
jl      short loc_745EB9
cmp     [esi+0Dh], bl
jnz     short loc_745EA3
cmp     eax, ebx
jnz     short loc_745EC8

loc_745EA3:                             ; CODE XREF: BuildingClass__FindPlacementCells+16ED↑j
mov     ecx, [esi+14h]
cmp     ecx, ebx
jle     short loc_745EC8
mov     edx, [esi]
add     eax, ecx
push    ebx
push    eax
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_745EC8

loc_745EB9:                             ; CODE XREF: BuildingClass__FindPlacementCells+16E8↑j
mov     eax, [esi+10h]
mov     edx, [esi+4]
lea     ecx, [eax+1]
mov     [esi+10h], ecx
mov     [edx+eax*4], edi

loc_745EC8:                             ; CODE XREF: BuildingClass__FindPlacementCells+16F1↑j
; BuildingClass__FindPlacementCells+16F8↑j ...
lea     eax, [esp+40h+var_1C]
jmp     loc_744BBE
; ---------------------------------------------------------------------------

loc_745ED1:                             ; CODE XREF: BuildingClass__FindPlacementCells+16BF↑j
; BuildingClass__FindPlacementCells+16CD↑j
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    ebx
mov     ecx, eax
push    ebx
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+var_2C]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_28]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_18], eax
jnz     short loc_745F3A
mov     ax, word ptr [esp+40h+var_18+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      loc_745FEB

loc_745F3A:                             ; CODE XREF: BuildingClass__FindPlacementCells+1776↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+1C8h]
test    eax, eax
jl      loc_745FEB
lea     eax, [esp+40h+var_18]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ebp, eax
jmp     loc_744BCF
; ---------------------------------------------------------------------------

loc_745F62:                             ; CODE XREF: BuildingClass__FindPlacementCells+1667↑j
push    ebx
lea     edx, [esp+44h+var_14]
mov     eax, 1
push    ebx
push    edx
push    eax
push    ebx
mov     ecx, eax
push    ebx
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    ebx
lea     eax, [esp+70h+var_2C]
push    ebx
push    eax
mov     ecx, 87F7E8h
mov     word ptr [esp+78h+var_14], bx
mov     word ptr [esp+78h+var_14+2], bx
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+70h+var_28]
push    1
lea     edx, [esp+74h+var_10]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+40h+var_18], eax
jnz     short loc_745FC7
mov     ax, word ptr [esp+40h+var_18+2]
cmp     ax, word ptr dword_A8ED54+8E266h
jz      short loc_745FEB

loc_745FC7:                             ; CODE XREF: BuildingClass__FindPlacementCells+1807↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+1C8h]
test    eax, eax
jl      short loc_745FEB
lea     eax, [esp+40h+var_18]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ebp, eax
jmp     loc_744BCF
; ---------------------------------------------------------------------------

loc_745FEB:                             ; CODE XREF: BuildingClass__FindPlacementCells+4F1↑j
; BuildingClass__FindPlacementCells+503↑j ...
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 30h
retn    4
*/
}

// IDA 0x449830: find placement cells variant
// 0x6b0300
void BuildingClass::FindPlacementCells2() {
// [IDA decompile]
_DWORD *__thiscall BuildingClass_FindPlacementCells2(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  int FoundationWidth; // eax
  int v8; // ebx
  int v9; // edi
  int FoundationHeight; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int16 *v14; // eax
  int TileIndex; // eax
  int v16; // eax
  __int16 v17; // dx
  int v19; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD v20[2]; // [esp+10h] [ebp-8h] BYREF

  v4 = *(this + 9);
  if ( v4 && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6 )
  {
    v5 = *(this + 9);
    if ( v5 )
      v6 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 44))(*(this + 9)) == 6 ? v5 : 0;
    else
      v6 = 0;
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v6 + 1312));
    v8 = *(this + 9);
    v9 = FoundationWidth;
    if ( v8 )
    {
      v11 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v8 + 44))(*(this + 9));
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(_DWORD *)(v11 == 6 ? v8 + 0x520 : 1312), 0);
    }
    else
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(MEMORY[0x520], 0);
    }
  }
  else if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 9) + 132))(*(this + 9)) + 1028) )
  {
    v12 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 9) + 132))(*(this + 9));
    v9 = BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v12 + 1028));
    v13 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 9) + 132))(*(this + 9));
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(_DWORD *)(v13 + 1028), 0);
  }
  else
  {
    v9 = 1;
    FoundationHeight = 1;
  }
  v14 = (__int16 *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)*(this + 9) + 440))(*(this + 9), &v19);
  TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], v14, 0, 0);
  v16 = *LayerClass::Pathfinding_Find(
           &MEMORY[0x87F7E8],
           (int)v20,
           v20,
           (__int16 *)&a3,
           1,
           TileIndex,
           0,
           0,
           v9,
           FoundationHeight,
           1,
           0,
           0,
           0,
           (__int16 *)&a3,
           0,
           1);
  v20[0] = v16;
  v17 = HIWORD(v16);
  if ( v16 == MEMORY[0xB0B5B8] )
  {
    *a2 = MEMORY[0xB0B5B8];
    return a2;
  }
  else
  {
    if ( v9 > 2 )
    {
      HIWORD(a3) = HIWORD(v20[0]);
      LOWORD(a3) = v16 + 1;
      v16 = a3;
      v20[0] = a3;
      v17 = HIWORD(a3);
    }
    if ( FoundationHeight > 2 )
    {
      LOWORD(a3) = v16;
      HIWORD(a3) = v17 + 1;
      v16 = a3;
    }
    *a2 = v16;
    return a2;
  }
}

/* ASM:
sub     esp, 0Ch
push    ebx
push    esi
mov     esi, ecx
push    edi
mov     ecx, [esi+24h]
test    ecx, ecx
jz      short loc_6B037F
mov     eax, [ecx]
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     short loc_6B037F
mov     edi, [esi+24h]
test    edi, edi
jnz     short loc_6B0324
xor     eax, eax
jmp     short loc_6B0336
; ---------------------------------------------------------------------------

loc_6B0324:                             ; CODE XREF: BuildingClass__FindPlacementCells2+1E↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
sub     eax, 6
neg     eax
sbb     eax, eax
not     eax
and     eax, edi

loc_6B0336:                             ; CODE XREF: BuildingClass__FindPlacementCells2+22↑j
mov     ecx, [eax+520h]
call    BuildingTypeClass__GetFoundationWidth
mov     ebx, [esi+24h]
mov     edi, eax
test    ebx, ebx
jnz     short loc_6B035C
xor     eax, eax
push    eax
mov     ecx, [eax+520h]
call    BuildingTypeClass__GetFoundationHeight
mov     ebx, eax
jmp     short loc_6B03CF
; ---------------------------------------------------------------------------

loc_6B035C:                             ; CODE XREF: BuildingClass__FindPlacementCells2+48↑j
mov     eax, [ebx]
mov     ecx, ebx
call    dword ptr [eax+2Ch]
sub     eax, 6
push    0
neg     eax
sbb     eax, eax
not     eax
and     eax, ebx
mov     ecx, [eax+520h]
call    BuildingTypeClass__GetFoundationHeight
mov     ebx, eax
jmp     short loc_6B03CF
; ---------------------------------------------------------------------------

loc_6B037F:                             ; CODE XREF: BuildingClass__FindPlacementCells2+D↑j
; BuildingClass__FindPlacementCells2+17↑j
mov     ecx, [esi+24h]
mov     edx, [ecx]
call    dword ptr [edx+84h]
mov     ecx, [eax+404h]
test    ecx, ecx
jz      short loc_6B03C8
mov     ecx, [esi+24h]
mov     eax, [ecx]
call    dword ptr [eax+84h]
mov     ecx, [eax+404h]
call    BuildingTypeClass__GetFoundationWidth
mov     ecx, [esi+24h]
push    0
mov     edi, eax
mov     edx, [ecx]
call    dword ptr [edx+84h]
mov     ecx, [eax+404h]
call    BuildingTypeClass__GetFoundationHeight
mov     ebx, eax
jmp     short loc_6B03CF
; ---------------------------------------------------------------------------

loc_6B03C8:                             ; CODE XREF: BuildingClass__FindPlacementCells2+92↑j
mov     edi, 1
mov     ebx, edi

loc_6B03CF:                             ; CODE XREF: BuildingClass__FindPlacementCells2+5A↑j
; BuildingClass__FindPlacementCells2+7D↑j ...
push    1
lea     eax, [esp+1Ch+arg_4]
mov     ecx, [esi+24h]
push    0
push    eax
push    0
push    0
mov     edx, [ecx]
push    0
push    1
push    ebx
push    edi
push    0
push    0
push    0
lea     eax, [esp+48h+var_C]
push    0
push    eax
call    dword ptr [edx+1B8h]
push    eax
mov     ecx, 87F7E8h
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+48h+arg_4]
push    1
lea     edx, [esp+4Ch+var_8]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
mov     ecx, dword_A8ED54+7C864h
mov     [esp+18h+var_8], eax
mov     edx, [esp+18h+var_8+2]
cmp     ax, cx
jnz     short loc_6B0449
cmp     dx, word ptr dword_A8ED54+7C866h
jnz     short loc_6B0449
mov     eax, [esp+18h+arg_0]
pop     edi
pop     esi
pop     ebx
mov     [eax], ecx
add     esp, 0Ch
retn    8
; ---------------------------------------------------------------------------

loc_6B0449:                             ; CODE XREF: BuildingClass__FindPlacementCells2+12F↑j
; BuildingClass__FindPlacementCells2+138↑j
cmp     edi, 2
jle     short loc_6B0465
inc     eax
mov     [esp+18h+arg_6], dx
mov     word ptr [esp+18h+arg_4], ax
mov     eax, dword ptr [esp+18h+arg_4]
mov     [esp+18h+var_8], eax
mov     edx, [esp+18h+var_8+2]

loc_6B0465:                             ; CODE XREF: BuildingClass__FindPlacementCells2+14C↑j
cmp     ebx, 2
jle     short loc_6B0479
inc     edx
mov     word ptr [esp+18h+arg_4], ax
mov     [esp+18h+arg_6], dx
mov     eax, dword ptr [esp+18h+arg_4]

loc_6B0479:                             ; CODE XREF: BuildingClass__FindPlacementCells2+168↑j
mov     ecx, [esp+18h+arg_0]
pop     edi
pop     esi
pop     ebx
mov     [ecx], eax
mov     eax, ecx
add     esp, 0Ch
retn    8
*/
}

// IDA 0x449840: search for valid placement
// 0x56bec0
void BuildingClass::SearchPlacement()
{
// [IDA decompile]
char __thiscall BuildingClass_SearchPlacement(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  _DWORD *v7; // ecx
  unsigned int v8; // eax
  _BYTE *v9; // eax
  int v11; // [esp-34h] [ebp-48h]
  __int16 v12[2]; // [esp+Ch] [ebp-8h] BYREF
  int v13; // [esp+10h] [ebp-4h] BYREF

  v4 = (__int16)a2 + (SHIWORD(a2) << 9);
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v4)) == 0 )
  {
    MEMORY[0xABDC74] = a2;
    v5 = &MEMORY[0xABDC50];
  }
  if ( v5[59] == 2 )
    v11 = 5;
  else
    v11 = 1;
  v12[0] = 0;
  v12[1] = 0;
  a2 = *LayerClass::Pathfinding_Find(
          &MEMORY[0x87F7E8],
          (int)v12,
          &v13,
          (__int16 *)&a2,
          v11,
          -1,
          0,
          0,
          1,
          1,
          0,
          0,
          0,
          1,
          v12,
          0,
          0);
  v6 = 0;
  v7 = this + 89;
  do
  {
    if ( *v7 == MEMORY[0xABD480] )
      break;
    ++v6;
    v7 += 4;
  }
  while ( v6 < 256 );
  if ( v6 == 256 || !(unsigned __int8)BuildingClass::BeginCrumblingTimer(&a2) )
    return 0;
  if ( a3 != 20 )
  {
    v8 = (__int16)a2 + (SHIWORD(a2) << 9);
    if ( v8 >= 0x40000 || (v9 = *(_BYTE **)(MEMORY[0x87F924] + 4 * v8)) == 0 )
    {
      MEMORY[0xABDC74] = a2;
      v9 = &MEMORY[0xABDC50];
    }
    v9[286] = a3;
  }
  return 1;
}

/* ASM:
sub     esp, 8
movsx   eax, word ptr [esp+8+arg_0+2]
push    ebx
push    esi
push    edi
mov     edi, ecx
mov     ecx, [esp+18h]
mov     ebx, 0
movsx   edx, cx
shl     eax, 9
add     eax, edx
js      short loc_56BEF4
cmp     eax, 40000h
jge     short loc_56BEF4
mov     edx, ds:87F924h
mov     eax, [edx+eax*4]
cmp     eax, ebx
jnz     short loc_56BEFF

loc_56BEF4:                             ; CODE XREF: BuildingClass__SearchPlacement+1E↑j
; BuildingClass__SearchPlacement+25↑j
mov     dword_A8ED54+2EF20h, ecx
mov     eax, (offset dword_A8ED54+2EEFCh)

loc_56BEFF:                             ; CODE XREF: BuildingClass__SearchPlacement+32↑j
cmp     dword ptr [eax+0ECh], 2
jnz     short loc_56BF37
push    ebx
lea     edx, [esp+18h+var_8]
mov     eax, 1
push    ebx
push    edx
push    eax
push    ebx
mov     ecx, eax
push    ebx
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    0FFFFFFFFh
lea     eax, [esp+44h+arg_0]
push    5
mov     [esp+48h+var_8], bx
mov     [esp+48h+var_6], bx
push    eax
lea     ecx, [esp+4Ch+var_4]
jmp     short loc_56BF63
; ---------------------------------------------------------------------------

loc_56BF37:                             ; CODE XREF: BuildingClass__SearchPlacement+46↑j
push    ebx
lea     edx, [esp+18h+var_8]
mov     eax, 1
push    ebx
push    edx
push    eax
push    ebx
mov     ecx, eax
push    ebx
push    ebx
push    ecx
push    eax
push    ebx
push    ebx
push    0FFFFFFFFh
push    eax
lea     eax, [esp+48h+arg_0]
mov     [esp+48h+var_8], bx
mov     [esp+48h+var_6], bx
push    eax
lea     ecx, [esp+4Ch+var_4]

loc_56BF63:                             ; CODE XREF: BuildingClass__SearchPlacement+75↑j
push    ecx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     edx, [eax]
mov     si, word ptr dword_A8ED54+2E72Eh
mov     [esp+14h+arg_0], edx
mov     edx, dword_A8ED54+2E72Ch
xor     eax, eax
lea     ecx, [edi+164h]

loc_56BF89:                             ; CODE XREF: BuildingClass__SearchPlacement+DD↓j
cmp     [ecx], dx
jnz     short loc_56BF94
cmp     [ecx+2], si
jz      short loc_56BF9F

loc_56BF94:                             ; CODE XREF: BuildingClass__SearchPlacement+CC↑j
inc     eax
add     ecx, 10h
cmp     eax, 100h
jl      short loc_56BF89

loc_56BF9F:                             ; CODE XREF: BuildingClass__SearchPlacement+D2↑j
cmp     eax, 100h
jz      short loc_56C00A
lea     ecx, [esp+14h+arg_0]
shl     eax, 4
push    ecx
lea     ecx, [eax+edi+158h]
call    BuildingClass__BeginCrumblingTimer
test    al, al
jz      short loc_56C00A
mov     edx, [esp+14h+arg_4]
cmp     edx, 14h
jz      short loc_56BFFF
movsx   eax, word ptr [esp+14h+arg_0+2]
mov     ecx, [esp+14h+arg_0]
movsx   esi, cx
shl     eax, 9
add     eax, esi
js      short loc_56BFEE
cmp     eax, 40000h
jge     short loc_56BFEE
mov     esi, ds:87F924h
mov     eax, [esi+eax*4]
cmp     eax, ebx
jnz     short loc_56BFF9

loc_56BFEE:                             ; CODE XREF: BuildingClass__SearchPlacement+118↑j
; BuildingClass__SearchPlacement+11F↑j
mov     dword_A8ED54+2EF20h, ecx
mov     eax, (offset dword_A8ED54+2EEFCh)

loc_56BFF9:                             ; CODE XREF: BuildingClass__SearchPlacement+12C↑j
mov     [eax+11Eh], dl

loc_56BFFF:                             ; CODE XREF: BuildingClass__SearchPlacement+105↑j
pop     edi
pop     esi
mov     al, 1
pop     ebx
add     esp, 8
retn    8
; ---------------------------------------------------------------------------

loc_56C00A:                             ; CODE XREF: BuildingClass__SearchPlacement+E4↑j
; BuildingClass__SearchPlacement+FC↑j
pop     edi
pop     esi
xor     al, al
pop     ebx
add     esp, 8
retn    8
*/
}

// IDA 0x449850: visualize placement footprint
// 0x485af0
void BuildingClass::VisualizePlacement()
{
// [IDA decompile]
void __thiscall BuildingClass::VisualizePlacement(_BYTE *this)
{
  _BYTE *v1; // ebp
  int *PlacementRect; // esi
  _DWORD *StartCoords; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  char v8; // al
  signed int v9; // ebx
  _DWORD *NeighbourContent; // esi
  int v11; // eax
  int BridgeBitfield; // edi
  int v13; // eax
  int *v14; // ebp
  int *v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // ebx
  int v19; // edi
  int v20; // eax
  bool v21; // cc
  int v22; // ebp
  int v23; // edx
  int v24; // eax
  int *v25; // edi
  int *v26; // eax
  int v27; // edx
  int v28; // ecx
  int v29; // ebp
  int v30; // ebx
  int v31; // edi
  int v32; // eax
  int v33; // ecx
  int *v34; // eax
  _DWORD *v35; // eax
  int *v36; // eax
  int *v37; // eax
  int v38; // eax
  int *v39; // eax
  int v40; // edx
  int v41; // eax
  int *v42; // eax
  int *v43; // eax
  int v44; // eax
  int *v45; // eax
  int *v46; // eax
  int *v47; // [esp-Ch] [ebp-1C4h]
  int *v48; // [esp-Ch] [ebp-1C4h]
  int v49; // [esp-8h] [ebp-1C0h]
  int v50; // [esp-4h] [ebp-1BCh]
  int *v51; // [esp-4h] [ebp-1BCh]
  _DWORD *v52; // [esp-4h] [ebp-1BCh]
  _DWORD *v53; // [esp-4h] [ebp-1BCh]
  int v54; // [esp+10h] [ebp-1A8h]
  int v55; // [esp+10h] [ebp-1A8h]
  signed int v56; // [esp+34h] [ebp-184h]
  int v57; // [esp+38h] [ebp-180h] BYREF
  int v58; // [esp+3Ch] [ebp-17Ch]
  int v59; // [esp+40h] [ebp-178h]
  int v60; // [esp+44h] [ebp-174h]
  int v61; // [esp+48h] [ebp-170h]
  int v62; // [esp+4Ch] [ebp-16Ch]
  int v63; // [esp+50h] [ebp-168h]
  _BYTE *v64; // [esp+54h] [ebp-164h]
  _DWORD rcDst[6]; // [esp+58h] [ebp-160h] BYREF
  int v66; // [esp+74h] [ebp-144h]
  int v67; // [esp+80h] [ebp-138h]
  int v68; // [esp+84h] [ebp-134h]
  _DWORD v69[2]; // [esp+88h] [ebp-130h] BYREF
  int v70; // [esp+90h] [ebp-128h] BYREF
  int v71; // [esp+98h] [ebp-120h]
  int v72; // [esp+A0h] [ebp-118h] BYREF
  int v73; // [esp+A8h] [ebp-110h]
  _DWORD v74[2]; // [esp+B0h] [ebp-108h] BYREF
  int v75; // [esp+B8h] [ebp-100h] BYREF
  __int128 rcSrc1; // [esp+C0h] [ebp-F8h] BYREF
  int v77[4]; // [esp+D0h] [ebp-E8h] BYREF
  __int128 v78; // [esp+E0h] [ebp-D8h] BYREF
  _DWORD v79[4]; // [esp+F0h] [ebp-C8h] BYREF
  int v80; // [esp+100h] [ebp-B8h] BYREF
  int v81[4]; // [esp+108h] [ebp-B0h] BYREF
  int v82[4]; // [esp+118h] [ebp-A0h] BYREF
  int v83[4]; // [esp+128h] [ebp-90h] BYREF
  int v84[4]; // [esp+138h] [ebp-80h] BYREF
  int v85[4]; // [esp+148h] [ebp-70h] BYREF
  int v86[4]; // [esp+168h] [ebp-50h] BYREF
  int v87[4]; // [esp+178h] [ebp-40h] BYREF
  int v88[4]; // [esp+1A8h] [ebp-10h] BYREF

  v1 = this;
  v64 = this;
  if ( !BuildingClass::CheckAdjacentCells((int)this) )
    return;
  PlacementRect = BuildingClass::GetPlacementRect((int)v1, &v72);
  StartCoords = House::GetStartCoords((int)v1, &v70);
  if ( (int)StartCoords[2] <= 0 || (int)StartCoords[3] <= 0 )
  {
    v7 = PlacementRect[3];
  }
  else
  {
    if ( PlacementRect[2] > 0 )
    {
      v63 = PlacementRect[3];
      if ( v63 > 0 )
      {
        v4 = StartCoords[1];
        v5 = StartCoords[3];
        v6 = PlacementRect[1];
        if ( v4 > v6 )
        {
          v5 += v4 - v6;
          v4 = v6;
        }
        if ( v5 + v4 < v63 + v6 )
          v5 = v63 + v6 - v4 + 1;
        v1 = v64;
        v66 = v5;
        goto LABEL_14;
      }
    }
    v7 = StartCoords[3];
  }
  v66 = v7;
LABEL_14:
  BuildingClass::AddUpgrade((int)MEMORY[0x87F7E8], (int)(v1 + 36));
  v8 = v1[284];
  *((_DWORD *)v1 + 17) = 126;
  if ( !v8 )
  {
    v9 = 0;
    v1[286] = (int)abs32(Random::State((_DWORD *)(MEMORY[0x87F7E8][536210] + 536))) % 3 + 48;
    v56 = 0;
    while ( 1 )
    {
      NeighbourContent = Cell::GetNeighbourContent(v1, v9);
      v11 = NeighbourContent[17];
      if ( v11 == 126 )
      {
        if ( *((_BYTE *)NeighbourContent + 286) < 0x30u )
          goto LABEL_21;
      }
      else if ( v11 == -1 || !*(_BYTE *)(*(_DWORD *)(MEMORY[0x87F7E8][528743] + 4 * v11) + 686) )
      {
LABEL_21:
        if ( *((_BYTE *)NeighbourContent + 284) )
        {
          Rect::Set(&v57, 0, 0, 0, 0);
          v51 = BuildingClass::GetPlacementRect((int)NeighbourContent, v84);
          House::GetStartCoords((int)NeighbourContent, v87);
          v38 = Rect::Union(v51);
          v39 = (int *)Rect::Union(v38);
          v57 = *v39;
          v58 = v39[1];
          v59 = v39[2];
          v40 = v39[3];
          NeighbourContent[17] = 126;
          v60 = v40;
          *((_BYTE *)NeighbourContent + 286) = 2 * *((_BYTE *)NeighbourContent + 284)
                                             + (abs32(Random::State((_DWORD *)(MEMORY[0x87F7E8][536210] + 536))) & 1)
                                             + 51;
          v52 = CellStruct::Copy(&MEMORY[0x87F7E8][7662], v74);
          v47 = BuildingClass::GetPlacementRect((int)NeighbourContent, v77);
          House::GetStartCoords((int)NeighbourContent, v79);
          v41 = Rect::Union(v47);
          v42 = (int *)Rect::Union(v41);
          v43 = Bounds::Subtract(v42, &rcSrc1, v52);
          v57 = *v43;
          v58 = v43[1];
          v59 = v43[2];
          v60 = v43[3];
          Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0);
        }
        else
        {
          BridgeBitfield = CellClass::GetBridgeBitfield(NeighbourContent);
          v13 = NeighbourContent[17];
          v61 = BridgeBitfield;
          if ( v13 == -1 || BridgeBitfield <= 15 && *((unsigned __int8 *)NeighbourContent + 286) / 3 != BridgeBitfield )
          {
            v14 = BuildingClass::GetPlacementRect((int)NeighbourContent, v88);
            v15 = House::GetStartCoords((int)NeighbourContent, v83);
            if ( v15[2] <= 0 || v15[3] <= 0 )
            {
              v67 = v14[2];
              v20 = v14[3];
            }
            else
            {
              v54 = v14[2];
              if ( v54 <= 0 || (v62 = v14[3], v62 <= 0) )
              {
                v23 = v15[2];
                v20 = v15[3];
                v67 = v23;
              }
              else
              {
                v16 = *v15;
                v17 = *v14;
                v18 = v15[2];
                v19 = v15[1];
                v20 = v15[3];
                v21 = v16 <= *v14;
                v71 = v18;
                if ( !v21 )
                {
                  v18 += v16 - v17;
                  v16 = v17;
                  v71 = v18;
                }
                v22 = v14[1];
                v63 = v22;
                if ( v19 > v22 )
                {
                  v20 += v19 - v22;
                  v19 = v22;
                }
                if ( v16 + v18 < v17 + v54 )
                  v71 = v17 - v16 + v54 + 1;
                if ( v20 + v19 < v62 + v63 )
                  v20 = v62 + v63 - v19 + 1;
                v67 = v71;
              }
            }
            v68 = v20;
            NeighbourContent[17] = 126;
            v24 = Random::State((_DWORD *)(MEMORY[0x87F7E8][536210] + 536));
            *((_BYTE *)NeighbourContent + 286) = 3 * v61 + abs32(v24 % 3);
            House::AnnounceUpgrade((int)NeighbourContent, (_DWORD *)0xFFFFFFFF);
            v69[0] = MEMORY[0x87F7E8][7662];
            v69[1] = MEMORY[0x87F7E8][7663];
            v25 = House::GetStartCoords((int)NeighbourContent, v85);
            v26 = BuildingClass::GetPlacementRect((int)NeighbourContent, v86);
            if ( v25[2] <= 0 || v25[3] <= 0 )
            {
              rcDst[0] = *v26;
              rcDst[1] = v26[1];
              rcDst[2] = v26[2];
              rcDst[3] = v26[3];
            }
            else
            {
              v55 = v26[2];
              if ( v55 <= 0 || (v61 = v26[3], v61 <= 0) )
              {
                rcDst[0] = *v25;
                rcDst[1] = v25[1];
                rcDst[2] = v25[2];
                rcDst[3] = v25[3];
              }
              else
              {
                v27 = *v25;
                v28 = *v26;
                v29 = v25[2];
                v30 = v25[1];
                v31 = v25[3];
                v21 = v27 <= *v26;
                v73 = v29;
                if ( !v21 )
                {
                  v29 += v27 - v28;
                  v27 = v28;
                  v73 = v29;
                }
                v32 = v26[1];
                v62 = v32;
                if ( v30 > v32 )
                {
                  v31 += v30 - v32;
                  v30 = v32;
                }
                if ( v27 + v29 >= v28 + v55 )
                  v33 = v73;
                else
                  v33 = v28 - v27 + v55 + 1;
                if ( v31 + v30 < v62 + v61 )
                  v31 = v62 + v61 - v30 + 1;
                rcDst[0] = v27;
                rcDst[1] = v30;
                rcDst[2] = v33;
                rcDst[3] = v31;
              }
            }
            v34 = (int *)Rect::Union(rcDst);
            v50 = v34[3];
            v49 = v34[2];
            v35 = CellStruct::Copy(v34, &v75);
            v36 = Coord2D::Sub(v35, &v80, v69);
            v37 = Rect::Construct(v82, v36, v49, v50);
            Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0);
            v9 = v56;
            v1 = v64;
          }
        }
        BuildingClass::AddUpgrade((int)MEMORY[0x87F7E8], (int)(NeighbourContent + 9));
      }
      v9 += 2;
      v56 = v9;
      if ( v9 >= 8 )
      {
        BuildingClass::CreateIdleAnim((int)v1);
        goto LABEL_62;
      }
    }
  }
  v1[286] = 2 * v1[284] + (abs32(Random::State((_DWORD *)(MEMORY[0x87F7E8][536210] + 536))) & 1) + 51;
LABEL_62:
  v53 = CellStruct::Copy(&MEMORY[0x87F7E8][7662], v74);
  v48 = BuildingClass::GetPlacementRect((int)v1, v81);
  House::GetStartCoords((int)v1, v79);
  v44 = Rect::Union(v48);
  v45 = (int *)Rect::Union(v44);
  v46 = Bounds::Subtract(v45, &v78, v53);
  Cell::CreateCrater(*v46, v46[1], v46[2], v46[3], 0);
  House::AnnounceUpgrade((int)v1, (_DWORD *)0xFFFFFFFF);
}

/* ASM:
rcDst           = byte ptr -160h
var_148         = dword ptr -148h
var_144         = dword ptr -144h
var_138         = dword ptr -138h
var_134         = dword ptr -134h
var_130         = dword ptr -130h
var_12C         = dword ptr -12Ch
var_128         = dword ptr -128h
var_120         = dword ptr -120h
var_118         = dword ptr -118h
var_110         = dword ptr -110h
var_108         = byte ptr -108h
var_100         = dword ptr -100h
rcSrc1          = xmmword ptr -0F8h
var_E8          = dword ptr -0E8h
var_D8          = xmmword ptr -0D8h
var_C8          = dword ptr -0C8h
var_B8          = dword ptr -0B8h
var_B0          = dword ptr -0B0h
var_A0          = dword ptr -0A0h
var_90          = dword ptr -90h
var_80          = dword ptr -80h
var_70          = dword ptr -70h
var_60          = dword ptr -60h
var_50          = dword ptr -50h
var_40          = dword ptr -40h
var_30          = dword ptr -30h
var_20          = dword ptr -20h
var_10          = dword ptr -10h

sub     esp, 1A8h
push    ebx
push    ebp
push    esi             ; lprcSrc2
push    edi             ; lprcSrc1
mov     ebp, ecx
xor     edi, edi
mov     [esp+1B8h+var_164], ebp
mov     [esp+1B8h+var_1A4], edi
mov     [esp+1B8h+var_1A0], edi
mov     [esp+1B8h+var_19C], edi
mov     [esp+1B8h+var_198], edi
call    BuildingClass__CheckAdjacentCells
test    al, al
jz      loc_486374
lea     eax, [esp+1B8h+var_118]
mov     ecx, ebp
push    eax
call    BuildingClass__GetPlacementRect
lea     ecx, [esp+1B8h+var_128]
mov     esi, eax
push    ecx
mov     ecx, ebp
call    House__GetStartCoords
cmp     [eax+8], edi
jle     loc_485BD3
cmp     [eax+0Ch], edi
jle     loc_485BD3
mov     ecx, [esi+8]
cmp     ecx, edi
mov     [esp+1B8h+var_1A8], ecx
jle     short loc_485BC6
mov     ecx, [esi+0Ch]
cmp     ecx, edi
mov     [esp+1B8h+var_168], ecx
jle     short loc_485BC6
mov     ecx, [eax]
mov     edx, [esi]
mov     edi, [eax+4]
mov     ebx, [eax+8]
mov     eax, [eax+0Ch]
cmp     ecx, edx
jle     short loc_485B7E
sub     ecx, edx
add     ebx, ecx
mov     ecx, edx

loc_485B7E:                             ; CODE XREF: BuildingClass__VisualizePlacement+86↑j
mov     esi, [esi+4]
cmp     edi, esi
mov     [esp+1B8h+var_184], esi
jle     short loc_485B8F
sub     edi, esi
add     eax, edi
mov     edi, esi

loc_485B8F:                             ; CODE XREF: BuildingClass__VisualizePlacement+97↑j
mov     ebp, [esp+1B8h+var_1A8]
lea     esi, [ebx+ecx]
add     ebp, edx
cmp     esi, ebp
jge     short loc_485BA6
mov     esi, [esp+1B8h+var_1A8]
sub     edx, ecx
lea     ebx, [edx+esi+1]

loc_485BA6:                             ; CODE XREF: BuildingClass__VisualizePlacement+AA↑j
mov     edx, [esp+1B8h+var_184]
mov     esi, [esp+1B8h+var_168]
add     edx, esi
lea     esi, [eax+edi]
cmp     esi, edx
jge     short loc_485BBC
sub     edx, edi
inc     edx
mov     eax, edx

loc_485BBC:                             ; CODE XREF: BuildingClass__VisualizePlacement+C5↑j
mov     ebp, [esp+1B8h+var_164]
mov     [esp+1B8h+var_144], eax
jmp     short loc_485BE2
; ---------------------------------------------------------------------------

loc_485BC6:                             ; CODE XREF: BuildingClass__VisualizePlacement+6A↑j
; BuildingClass__VisualizePlacement+75↑j
mov     ecx, [eax]
mov     edi, [eax+4]
mov     ebx, [eax+8]
mov     eax, [eax+0Ch]
jmp     short loc_485BDE
; ---------------------------------------------------------------------------

loc_485BD3:                             ; CODE XREF: BuildingClass__VisualizePlacement+52↑j
; BuildingClass__VisualizePlacement+5B↑j
mov     ecx, [esi]
mov     edi, [esi+4]
mov     ebx, [esi+8]
mov     eax, [esi+0Ch]

loc_485BDE:                             ; CODE XREF: BuildingClass__VisualizePlacement+E1↑j
mov     [esp+1B8h+var_144], eax

loc_485BE2:                             ; CODE XREF: BuildingClass__VisualizePlacement+D4↑j
mov     edx, [esp+1B8h+var_19C]
test    edx, edx
jle     loc_485C7B
mov     esi, [esp+1B8h+var_198]
test    esi, esi
jle     loc_485C7B
test    ebx, ebx
jle     short loc_485C6F
test    eax, eax
jle     short loc_485C6F
mov     eax, [esp+1B8h+var_1A4]
mov     ebp, [esp+1B8h+var_1A0]
mov     [esp+1B8h+var_174], esi
mov     esi, eax
cmp     esi, ecx
mov     [esp+1B8h+var_178], edx
jle     short loc_485C22
sub     edx, ecx
mov     eax, ecx
add     edx, esi
mov     [esp+1B8h+var_178], edx

loc_485C22:                             ; CODE XREF: BuildingClass__VisualizePlacement+126↑j
cmp     ebp, edi
jle     short loc_485C34
mov     edx, [esp+1B8h+var_174]
sub     ebp, edi
add     edx, ebp
mov     ebp, edi
mov     [esp+1B8h+var_174], edx

loc_485C34:                             ; CODE XREF: BuildingClass__VisualizePlacement+134↑j
mov     esi, [esp+1B8h+var_178]
lea     edx, [ecx+ebx]
add     esi, eax
cmp     esi, edx
jge     short loc_485C49
sub     ecx, eax
lea     edx, [ecx+ebx+1]
jmp     short loc_485C4D
; ---------------------------------------------------------------------------

loc_485C49:                             ; CODE XREF: BuildingClass__VisualizePlacement+14F↑j
mov     edx, [esp+1B8h+var_178]

loc_485C4D:                             ; CODE XREF: BuildingClass__VisualizePlacement+157↑j
mov     ecx, [esp+1B8h+var_144]
mov     esi, [esp+1B8h+var_174]
add     edi, ecx
lea     ecx, [esi+ebp]
cmp     ecx, edi
jge     short loc_485C63
sub     edi, ebp
inc     edi
mov     esi, edi

loc_485C63:                             ; CODE XREF: BuildingClass__VisualizePlacement+16C↑j
mov     ecx, eax
mov     edi, ebp
mov     ebp, [esp+1B8h+var_164]
mov     eax, esi
jmp     short loc_485C7D
; ---------------------------------------------------------------------------

loc_485C6F:                             ; CODE XREF: BuildingClass__VisualizePlacement+10C↑j
; BuildingClass__VisualizePlacement+110↑j
mov     ecx, [esp+1B8h+var_1A4]
mov     edi, [esp+1B8h+var_1A0]
mov     eax, esi
jmp     short loc_485C7D
; ---------------------------------------------------------------------------

loc_485C7B:                             ; CODE XREF: BuildingClass__VisualizePlacement+F8↑j
; BuildingClass__VisualizePlacement+104↑j
mov     edx, ebx

loc_485C7D:                             ; CODE XREF: BuildingClass__VisualizePlacement+17D↑j
; BuildingClass__VisualizePlacement+189↑j
mov     [esp+1B8h+var_19C], edx
lea     edx, [ebp+24h]
mov     [esp+1B8h+var_1A4], ecx
push    edx
mov     ecx, 87F7E8h
mov     [esp+1BCh+var_1A0], edi
mov     [esp+1BCh+var_198], eax
call    BuildingClass__AddUpgrade
mov     al, [ebp+11Ch]
mov     dword ptr [ebp+44h], 7Eh ; '~'
test    al, al
jnz     loc_48629C
mov     eax, ds:0A8B230h
lea     ecx, [eax+218h]
call    Random__State
cdq
xor     eax, edx
mov     ecx, 3
sub     eax, edx
cdq
idiv    ecx
add     dl, 30h ; '0'
xor     ebx, ebx
mov     [ebp+11Eh], dl
mov     [esp+1B8h+var_184], ebx

loc_485CDC:                             ; CODE XREF: BuildingClass__VisualizePlacement+79D↓j
push    ebx
mov     ecx, ebp
call    Cell__GetNeighbourContent
mov     esi, eax
mov     eax, [esi+44h]
cmp     eax, 7Eh ; '~'
jnz     short loc_485CFF
cmp     byte ptr [esi+11Eh], 30h ; '0'
jnb     loc_486283
cmp     eax, eax
jz      short loc_485D1B

loc_485CFF:                             ; CODE XREF: BuildingClass__VisualizePlacement+1FC↑j
cmp     eax, 0FFFFFFFFh
jz      short loc_485D1B
mov     edx, ds:0A83D84h
mov     eax, [edx+eax*4]
mov     cl, [eax+2AEh]
test    cl, cl
jnz     loc_486283

loc_485D1B:                             ; CODE XREF: BuildingClass__VisualizePlacement+20D↑j
; BuildingClass__VisualizePlacement+212↑j
mov     al, [esi+11Ch]
test    al, al
jnz     loc_486136
mov     ecx, esi
call    CellClass__GetBridgeBitfield
mov     edi, eax
mov     eax, [esi+44h]
cmp     eax, 0FFFFFFFFh
mov     [esp+1B8h+var_170], edi
jz      short loc_485D65
cmp     edi, 0Fh
jg      loc_486275
xor     ecx, ecx
mov     eax, 55555556h
mov     cl, [esi+11Eh]
imul    ecx
mov     ecx, edx
shr     ecx, 1Fh
add     edx, ecx
cmp     edx, edi
jz      loc_486275

loc_485D65:                             ; CODE XREF: BuildingClass__VisualizePlacement+24C↑j
lea     edx, [esp+1B8h+var_10]
xor     eax, eax
push    edx
mov     ecx, esi
mov     [esp+1BCh+var_194], eax
mov     [esp+1BCh+var_190], eax
mov     [esp+1BCh+var_18C], eax
mov     [esp+1BCh+var_188], eax
call    BuildingClass__GetPlacementRect
mov     ebp, eax
lea     eax, [esp+1B8h+var_90]
push    eax
mov     ecx, esi
call    House__GetStartCoords
mov     ecx, [eax+8]
test    ecx, ecx
jle     loc_485E57
mov     ecx, [eax+0Ch]
test    ecx, ecx
jle     loc_485E57
mov     ecx, [ebp+8]
test    ecx, ecx
mov     [esp+1B8h+var_1A8], ecx
jle     loc_485E43
mov     ecx, [ebp+0Ch]
test    ecx, ecx
mov     [esp+1B8h+var_16C], ecx
jle     short loc_485E43
mov     ecx, [eax]
mov     edx, [ebp+0]
mov     ebx, [eax+8]
mov     edi, [eax+4]
mov     eax, [eax+0Ch]
cmp     ecx, edx
mov     [esp+1B8h+var_120], ebx
jle     short loc_485DED
sub     ecx, edx
add     ebx, ecx
mov     ecx, edx
mov     [esp+1B8h+var_120], ebx

loc_485DED:                             ; CODE XREF: BuildingClass__VisualizePlacement+2EE↑j
mov     ebp, [ebp+4]
cmp     edi, ebp
mov     [esp+1B8h+var_168], ebp
jle     short loc_485DFE
sub     edi, ebp
add     eax, edi
mov     edi, ebp

loc_485DFE:                             ; CODE XREF: BuildingClass__VisualizePlacement+306↑j
mov     ebp, [esp+1B8h+var_1A8]
add     ebx, ecx
add     ebp, edx
cmp     ebx, ebp
jge     short loc_485E1B
mov     ebx, [esp+1B8h+var_1A8]
sub     edx, ecx
lea     edx, [edx+ebx+1]
mov     [esp+1B8h+var_120], edx

loc_485E1B:                             ; CODE XREF: BuildingClass__VisualizePlacement+318↑j
mov     edx, [esp+1B8h+var_168]
mov     ebx, [esp+1B8h+var_16C]
add     edx, ebx
lea     ebx, [eax+edi]
cmp     ebx, edx
jge     short loc_485E31
sub     edx, edi
inc     edx
mov     eax, edx

loc_485E31:                             ; CODE XREF: BuildingClass__VisualizePlacement+33A↑j
mov     edx, [esp+1B8h+var_120]
mov     ebx, edi
mov     [esp+1B8h+var_138], edx
jmp     short loc_485E6A
; ---------------------------------------------------------------------------

loc_485E43:                             ; CODE XREF: BuildingClass__VisualizePlacement+2C6↑j
; BuildingClass__VisualizePlacement+2D5↑j
mov     edx, [eax+8]
mov     ecx, [eax]
mov     ebx, [eax+4]
mov     eax, [eax+0Ch]
mov     [esp+1B8h+var_138], edx
jmp     short loc_485E6A
; ---------------------------------------------------------------------------

loc_485E57:                             ; CODE XREF: BuildingClass__VisualizePlacement+2AC↑j
; BuildingClass__VisualizePlacement+2B7↑j
mov     eax, [ebp+8]
mov     ecx, [ebp+0]
mov     ebx, [ebp+4]
mov     [esp+1B8h+var_138], eax
mov     eax, [ebp+0Ch]

loc_485E6A:                             ; CODE XREF: BuildingClass__VisualizePlacement+351↑j
; BuildingClass__VisualizePlacement+365↑j
mov     edi, [esp+1B8h+var_18C]
mov     [esp+1B8h+var_134], eax
test    edi, edi
jle     loc_485F1B
mov     ebp, [esp+1B8h+var_188]
test    ebp, ebp
jle     loc_485F1B
mov     edx, [esp+1B8h+var_138]
test    edx, edx
jle     short loc_485F0F
test    eax, eax
jle     short loc_485F0F
mov     eax, [esp+1B8h+var_194]
mov     edx, [esp+1B8h+var_190]
mov     [esp+1B8h+var_144], ebp
mov     ebp, eax
cmp     ebp, ecx
mov     [esp+1B8h+var_148], edi
jle     short loc_485EB8
sub     edi, ecx
mov     eax, ecx
add     edi, ebp
mov     [esp+1B8h+var_148], edi

loc_485EB8:                             ; CODE XREF: BuildingClass__VisualizePlacement+3BC↑j
cmp     edx, ebx
jle     short loc_485ECA
mov     edi, [esp+1B8h+var_144]
sub     edx, ebx
add     edi, edx
mov     edx, ebx
mov     [esp+1B8h+var_144], edi

loc_485ECA:                             ; CODE XREF: BuildingClass__VisualizePlacement+3CA↑j
mov     edi, [esp+1B8h+var_138]
mov     ebp, [esp+1B8h+var_148]
add     edi, ecx
add     ebp, eax
cmp     ebp, edi
jge     short loc_485EEC
mov     edi, [esp+1B8h+var_138]
sub     ecx, eax
lea     edi, [ecx+edi+1]
jmp     short loc_485EF0
; ---------------------------------------------------------------------------

loc_485EEC:                             ; CODE XREF: BuildingClass__VisualizePlacement+3EB↑j
mov     edi, [esp+1B8h+var_148]

loc_485EF0:                             ; CODE XREF: BuildingClass__VisualizePlacement+3FA↑j
mov     ecx, [esp+1B8h+var_134]
mov     ebp, [esp+1B8h+var_144]
add     ebx, ecx
lea     ecx, [edx+ebp]
cmp     ecx, ebx
jge     short loc_485F09
sub     ebx, edx
inc     ebx
mov     ebp, ebx

loc_485F09:                             ; CODE XREF: BuildingClass__VisualizePlacement+412↑j
mov     ecx, eax
mov     eax, ebp
jmp     short loc_485F24
; ---------------------------------------------------------------------------

loc_485F0F:                             ; CODE XREF: BuildingClass__VisualizePlacement+3A2↑j
; BuildingClass__VisualizePlacement+3A6↑j
mov     ecx, [esp+1B8h+var_194]
mov     edx, [esp+1B8h+var_190]
mov     eax, ebp
jmp     short loc_485F24
; ---------------------------------------------------------------------------

loc_485F1B:                             ; CODE XREF: BuildingClass__VisualizePlacement+387↑j
; BuildingClass__VisualizePlacement+393↑j
mov     edi, [esp+1B8h+var_138]
mov     edx, ebx

loc_485F24:                             ; CODE XREF: BuildingClass__VisualizePlacement+41D↑j
; BuildingClass__VisualizePlacement+429↑j
mov     [esp+1B8h+var_190], edx
mov     dword ptr [esi+44h], 7Eh ; '~'
mov     edx, ds:0A8B230h
mov     [esp+1B8h+var_194], ecx
mov     [esp+1B8h+var_18C], edi
mov     [esp+1B8h+var_188], eax
lea     ecx, [edx+218h]
call    Random__State
cdq
mov     ecx, 3
push    0FFFFFFFFh
idiv    ecx
mov     eax, edx
cdq
mov     ecx, eax
mov     al, byte ptr [esp+1BCh+var_170]
xor     ecx, edx
sub     ecx, edx
mov     dl, 3
imul    dl
add     cl, al
mov     [esi+11Eh], cl
mov     ecx, esi
call    House__AnnounceUpgrade
mov     eax, ds:886FA0h
mov     ecx, ds:886FA4h
mov     [esp+1B8h+var_130], eax
lea     eax, [esp+1B8h+var_70]
mov     [esp+1B8h+var_12C], ecx
push    eax
mov     ecx, esi
call    House__GetStartCoords
lea     ecx, [esp+1B8h+var_50]
mov     edi, eax
push    ecx
mov     ecx, esi
call    BuildingClass__GetPlacementRect
mov     ecx, [edi+8]
test    ecx, ecx
jle     loc_486079
mov     ecx, [edi+0Ch]
test    ecx, ecx
jle     loc_486079
mov     ecx, [eax+8]
test    ecx, ecx
mov     [esp+1B8h+var_1A8], ecx
jle     loc_48605C
mov     ecx, [eax+0Ch]
test    ecx, ecx
mov     [esp+1B8h+var_170], ecx
jle     short loc_48605C
mov     edx, [edi]
mov     ecx, [eax]
mov     ebp, [edi+8]
mov     ebx, [edi+4]
mov     edi, [edi+0Ch]
cmp     edx, ecx
mov     [esp+1B8h+var_110], ebp
jle     short loc_486004
sub     edx, ecx
add     ebp, edx
mov     edx, ecx
mov     [esp+1B8h+var_110], ebp

loc_486004:                             ; CODE XREF: BuildingClass__VisualizePlacement+505↑j
mov     eax, [eax+4]
cmp     ebx, eax
mov     [esp+1B8h+var_16C], eax
jle     short loc_486015
sub     ebx, eax
add     edi, ebx
mov     ebx, eax

loc_486015:                             ; CODE XREF: BuildingClass__VisualizePlacement+51D↑j
mov     eax, [esp+1B8h+var_1A8]
add     ebp, edx
add     eax, ecx
cmp     ebp, eax
jge     short loc_48602D
mov     eax, [esp+1B8h+var_1A8]
sub     ecx, edx
lea     ecx, [ecx+eax+1]
jmp     short loc_486034
; ---------------------------------------------------------------------------

loc_48602D:                             ; CODE XREF: BuildingClass__VisualizePlacement+52F↑j
mov     ecx, [esp+1B8h+var_110]

loc_486034:                             ; CODE XREF: BuildingClass__VisualizePlacement+53B↑j
mov     eax, [esp+1B8h+var_170]
mov     ebp, [esp+1B8h+var_16C]
add     eax, ebp
lea     ebp, [edi+ebx]
cmp     ebp, eax
jge     short loc_48604A
sub     eax, ebx
inc     eax
mov     edi, eax

loc_48604A:                             ; CODE XREF: BuildingClass__VisualizePlacement+553↑j
mov     dword ptr [esp+1B8h+rcDst], edx
mov     dword ptr [esp+1B8h+rcDst+4], ebx
mov     dword ptr [esp+1B8h+rcDst+8], ecx
mov     dword ptr [esp+1B8h+rcDst+0Ch], edi
jmp     short loc_486094
; ---------------------------------------------------------------------------

loc_48605C:                             ; CODE XREF: BuildingClass__VisualizePlacement+4DE↑j
; BuildingClass__VisualizePlacement+4ED↑j
mov     ecx, [edi]
mov     dword ptr [esp+1B8h+rcDst], ecx
mov     edx, [edi+4]
mov     dword ptr [esp+1B8h+rcDst+4], edx
mov     eax, [edi+8]
mov     dword ptr [esp+1B8h+rcDst+8], eax
mov     ecx, [edi+0Ch]
mov     dword ptr [esp+1B8h+rcDst+0Ch], ecx
jmp     short loc_486094
; ---------------------------------------------------------------------------

loc_486079:                             ; CODE XREF: BuildingClass__VisualizePlacement+4C4↑j
; BuildingClass__VisualizePlacement+4CF↑j
mov     edx, [eax]
mov     dword ptr [esp+1B8h+rcDst], edx
mov     ecx, [eax+4]
mov     dword ptr [esp+1B8h+rcDst+4], ecx
mov     edx, [eax+8]
mov     dword ptr [esp+1B8h+rcDst+8], edx
mov     eax, [eax+0Ch]
mov     dword ptr [esp+1B8h+rcDst+0Ch], eax

loc_486094:                             ; CODE XREF: BuildingClass__VisualizePlacement+56A↑j
; BuildingClass__VisualizePlacement+587↑j
lea     ecx, [esp+1B8h+rcDst]
lea     edx, [esp+1B8h+var_194]
push    ecx             ; lprcDst
lea     ecx, [esp+1BCh+var_30]
call    Rect__Union
mov     edx, [eax+0Ch]
mov     ecx, [eax+8]
push    edx
lea     edx, [esp+1BCh+var_130]
push    ecx
push    edx
lea     ecx, [esp+1C4h+var_B8]
lea     edx, [esp+1C4h+var_100]
push    ecx
push    edx
mov     ecx, eax
call    CellStruct__Copy
mov     ecx, eax
call    Coord2D__Sub
push    eax
lea     ecx, [esp+1C4h+var_A0]
call    Rect__Construct
mov     ecx, eax
push    0
sub     esp, 10h
mov     edx, [ecx]
mov     [esp+1CCh+var_194], edx
mov     edx, [ecx+4]
mov     [esp+1CCh+var_190], edx
mov     edx, [ecx+8]
mov     [esp+1CCh+var_18C], edx
mov     edx, esp
mov     ecx, [ecx+0Ch]
mov     [esp+1CCh+var_188], ecx
mov     ecx, [eax]
mov     [edx], ecx
mov     ecx, [eax+4]
mov     [edx+4], ecx
mov     ecx, [eax+8]
mov     eax, [eax+0Ch]
mov     [edx+8], ecx
mov     ecx, ds:887324h
mov     [edx+0Ch], eax
call    Cell__CreateCrater
mov     ebx, [esp+1B8h+var_184]
mov     ebp, [esp+1B8h+var_164]
jmp     loc_486275
; ---------------------------------------------------------------------------

loc_486136:                             ; CODE XREF: BuildingClass__VisualizePlacement+233↑j
push    0
push    0
push    0
push    0
lea     ecx, [esp+1C8h+var_180]
call    Rect__Set
lea     ecx, [esp+1B8h+var_80]
push    ecx
mov     ecx, esi
call    BuildingClass__GetPlacementRect
lea     edx, [esp+1B8h+var_40]
push    eax             ; lprcDst
push    edx
mov     ecx, esi
call    House__GetStartCoords
mov     edx, eax
lea     ecx, [esp+1BCh+var_60]
call    Rect__Union
push    eax             ; lprcDst
lea     edx, [esp+1BCh+var_180]
lea     ecx, [esp+1BCh+var_20]
call    Rect__Union
mov     ecx, [eax]
mov     [esp+1B8h+var_180], ecx
mov     edx, [eax+4]
mov     [esp+1B8h+var_17C], edx
mov     ecx, [eax+8]
mov     [esp+1B8h+var_178], ecx
mov     edx, [eax+0Ch]
mov     dword ptr [esi+44h], 7Eh ; '~'
mov     eax, ds:0A8B230h
mov     [esp+1B8h+var_174], edx
lea     ecx, [eax+218h]
call    Random__State
mov     cl, [esi+11Ch]
cdq
xor     eax, edx
sub     eax, edx
lea     edx, [esp+1B8h+var_108]
and     al, 1
push    edx
shl     cl, 1
add     al, cl
mov     ecx, 886FA0h
add     al, 33h ; '3'
mov     [esi+11Eh], al
call    CellStruct__Copy
push    eax             ; lprcSrc2
lea     eax, [esp+1BCh+rcSrc1]
lea     ecx, [esp+1BCh+var_E8]
push    eax             ; lprcSrc1
push    ecx
mov     ecx, esi
call    BuildingClass__GetPlacementRect
lea     edx, [esp+1C0h+var_C8]
push    eax             ; lprcDst
push    edx
mov     ecx, esi
call    House__GetStartCoords
mov     edx, eax
lea     ecx, [esp+1C4h+var_B0]
call    Rect__Union
push    eax             ; lprcDst
lea     edx, [esp+1C4h+var_180]
lea     ecx, [esp+1C4h+var_D8]
call    Rect__Union
mov     ecx, eax
call    Bounds__Subtract
mov     ecx, eax
push    0
sub     esp, 10h
mov     edx, [ecx]
mov     [esp+1CCh+var_180], edx
mov     edx, [ecx+4]
mov     [esp+1CCh+var_17C], edx
mov     edx, [ecx+8]
mov     [esp+1CCh+var_178], edx
mov     edx, esp
mov     ecx, [ecx+0Ch]
mov     [esp+1CCh+var_174], ecx
mov     ecx, [eax]
mov     [edx], ecx
mov     ecx, [eax+4]
mov     [edx+4], ecx
mov     ecx, [eax+8]
mov     eax, [eax+0Ch]
mov     [edx+8], ecx
mov     ecx, ds:887324h
mov     [edx+0Ch], eax
call    Cell__CreateCrater

loc_486275:                             ; CODE XREF: BuildingClass__VisualizePlacement+251↑j
; BuildingClass__VisualizePlacement+26F↑j ...
add     esi, 24h ; '$'
mov     ecx, 87F7E8h
push    esi
call    BuildingClass__AddUpgrade

loc_486283:                             ; CODE XREF: BuildingClass__VisualizePlacement+205↑j
; BuildingClass__VisualizePlacement+225↑j
add     ebx, 2
cmp     ebx, 8
mov     [esp+1B8h+var_184], ebx
jl      loc_485CDC
mov     ecx, ebp
call    BuildingClass__CreateIdleAnim
jmp     short loc_4862C6
; ---------------------------------------------------------------------------

loc_48629C:                             ; CODE XREF: BuildingClass__VisualizePlacement+1BA↑j
mov     ecx, ds:0A8B230h
add     ecx, 218h
call    Random__State
cdq
xor     eax, edx
sub     eax, edx
mov     dl, [ebp+11Ch]
and     al, 1
shl     dl, 1
add     al, dl
add     al, 33h ; '3'
mov     [ebp+11Eh], al

loc_4862C6:                             ; CODE XREF: BuildingClass__VisualizePlacement+7AA↑j
lea     eax, [esp+1B8h+var_108]
mov     ecx, 886FA0h
push    eax
call    CellStruct__Copy
lea     ecx, [esp+1B8h+var_D8]
push    eax             ; lprcSrc2
lea     edx, [esp+1BCh+var_B0]
push    ecx             ; lprcSrc1
push    edx
mov     ecx, ebp
call    BuildingClass__GetPlacementRect
push    eax             ; lprcDst
lea     eax, [esp+1C4h+var_C8]
push    eax
mov     ecx, ebp
call    House__GetStartCoords
mov     edx, eax
lea     ecx, [esp+1C4h+var_E8]
call    Rect__Union
push    eax             ; lprcDst
lea     edx, [esp+1C4h+var_1A4]
lea     ecx, [esp+1C4h+rcSrc1]
call    Rect__Union
mov     ecx, eax
call    Bounds__Subtract
mov     ecx, eax
push    0
sub     esp, 10h
mov     edx, [ecx]
mov     [esp+1CCh+var_1A4], edx
mov     edx, [ecx+4]
mov     [esp+1CCh+var_1A0], edx
mov     edx, [ecx+8]
mov     [esp+1CCh+var_19C], edx
mov     edx, esp
mov     ecx, [ecx+0Ch]
mov     [esp+1CCh+var_198], ecx
mov     ecx, [eax]
mov     [edx], ecx
mov     ecx, [eax+4]
mov     [edx+4], ecx
mov     ecx, [eax+8]
mov     eax, [eax+0Ch]
mov     [edx+8], ecx
mov     ecx, ds:887324h
mov     [edx+0Ch], eax
call    Cell__CreateCrater
push    0FFFFFFFFh
mov     ecx, ebp
call    House__AnnounceUpgrade

loc_486374:                             ; CODE XREF: BuildingClass__VisualizePlacement+29↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 1A8h
retn
*/
}

// IDA 0x4258c0: get placement coords
// 0x45f160
CoordStruct* BuildingClass::GetPlacementCoords(CoordStruct* out) const
{
    if (out) *out = location;
    return out;
}

// IDA 0x425910: get placement rect from type foundation
// 0x47fde0
RectangleStruct* BuildingClass::GetPlacementRect(RectangleStruct* out) const
{
    if (!out || !Type) return nullptr;
    int fw = Type->GetFoundationWidth();
    int fh = Type->GetFoundationHeight(false);
    out->X = location.X;
    out->Y = location.Y;
    out->Width = fw * 256;
    out->Height = fh * 256;
    return out;
}

// IDA 0x44e3a0: check overlap with other buildings
// 0x44e3a0
bool BuildingClass::CheckOverlapWithOthers() {
// [IDA decompile]
char __thiscall sub_44E3A0(_DWORD *this)
{
  int v2; // ebp
  _WORD *v3; // esi
  _DWORD *v4; // eax
  char v6; // [esp+13h] [ebp-9h]
  int v7; // [esp+14h] [ebp-8h]
  int v8; // [esp+18h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 440))(this, &v8);
  v3 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 264))(this, 0);
  v6 = 0;
LABEL_2:
  while ( *v3 != 0x7FFF || v3[1] != 0x7FFF )
  {
    LOWORD(v7) = v2 + *v3;
    HIWORD(v7) = HIWORD(v2) + v3[1];
    v8 = v7;
    v3 += 2;
    v4 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v8) + 57);
    if ( v4 )
    {
      while ( this == v4 )
      {
        v4 = (_DWORD *)v4[12];
        if ( !v4 )
          goto LABEL_2;
      }
      v6 = 1;
    }
  }
  return v6;
}

/* ASM:
sub     esp, 0Ch
push    ebx
push    ebp
push    esi
push    edi
mov     edi, ecx
lea     ecx, [esp+1Ch+var_4]
mov     eax, [edi]
push    ecx
mov     ecx, edi
call    dword ptr [eax+1B8h]
mov     ebp, [eax]
mov     edx, [edi]
push    0
mov     ecx, edi
mov     [esp+20h+var_8], ebp
call    dword ptr [edx+108h]
mov     bx, word ptr [esp+1Ch+var_8+2]
mov     esi, eax
mov     byte ptr [esp+1Ch+var_C+3], 0

loc_44E3D6:                             ; CODE XREF: BuildingClass__CheckOverlapWithOthers+7A↓j
; BuildingClass__CheckOverlapWithOthers+87↓j ...
mov     ax, [esi]
cmp     ax, 7FFFh
jnz     short loc_44E3E5
cmp     [esi+2], ax
jz      short loc_44E430

loc_44E3E5:                             ; CODE XREF: BuildingClass__CheckOverlapWithOthers+3D↑j
add     eax, ebp
lea     edx, [esp+1Ch+var_4]
mov     word ptr [esp+1Ch+var_8], ax
mov     ax, [esi+2]
add     ax, bx
push    edx
mov     word ptr [esp+20h+var_8+2], ax
mov     ecx, [esp+20h+var_8]
mov     [esp+20h+var_4], ecx
mov     ecx, 87F7E8h
add     esi, 4
call    CellCoord__To_CellObj
mov     eax, [eax+0E4h]
test    eax, eax
jz      short loc_44E3D6

loc_44E41C:                             ; CODE XREF: BuildingClass__CheckOverlapWithOthers+85↓j
cmp     edi, eax
jnz     short loc_44E429
mov     eax, [eax+30h]
test    eax, eax
jnz     short loc_44E41C
jmp     short loc_44E3D6
; ---------------------------------------------------------------------------

loc_44E429:                             ; CODE XREF: BuildingClass__CheckOverlapWithOthers+7E↑j
mov     byte ptr [esp+1Ch+var_C+3], 1
jmp     short loc_44E3D6
; ---------------------------------------------------------------------------

loc_44E430:                             ; CODE XREF: BuildingClass__CheckOverlapWithOthers+43↑j
mov     al, byte ptr [esp+1Ch+var_C+3]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0Ch
retn
*/
}
// IDA 0x44e400: check footprint blocked
// 0x4578c0
bool BuildingClass::IsFootprintBlocked() {
// [IDA decompile]
int __thiscall BuildingClass::_vt169(#377 *this)
{
  int result; // eax
  int *v3; // eax
  _DWORD *v4; // ecx
  int FoundationWidth; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // edi
  __int16 v9; // si
  __int16 v10; // di
  __int16 v11; // si
  _DWORD *v12; // eax
  #377 *ClosestObjectCell; // eax
  _DWORD *v14; // eax
  int v15; // [esp+10h] [ebp-30h]
  int v16; // [esp+14h] [ebp-2Ch]
  int v17; // [esp+18h] [ebp-28h]
  int v18; // [esp+1Ch] [ebp-24h]
  int v19; // [esp+20h] [ebp-20h] BYREF
  int v20; // [esp+24h] [ebp-1Ch] BYREF
  int v21; // [esp+28h] [ebp-18h]
  int v22; // [esp+2Ch] [ebp-14h] BYREF
  int v23; // [esp+30h] [ebp-10h]
  _DWORD v24[2]; // [esp+38h] [ebp-8h] BYREF

  if ( !TechnoClass::ShouldNotBeCloaked((float *)this) )
  {
    v3 = (int *)(*(int (__thiscall **)(#377 *, int *))(*(_DWORD *)this + 440))(this, &v22);
    v4 = (_DWORD *)*((_DWORD *)this + 328);
    v23 = *v3;
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(v4);
    v6 = *((_DWORD *)this + 328);
    v7 = FoundationWidth;
    v22 = FoundationWidth;
    result = BuildingTypeClass::GetFoundationHeight(v6, 0);
    v8 = -1;
    v21 = result;
    v18 = -1;
    if ( v7 < -1 )
    {
LABEL_13:
      LOBYTE(result) = 0;
      return result;
    }
    while ( 1 )
    {
      v9 = -1;
      v17 = -1;
      if ( result >= -1 )
        break;
LABEL_12:
      v18 = ++v8;
      if ( v8 > v7 )
        goto LABEL_13;
    }
    v10 = v23 + v8;
    while ( 1 )
    {
      v24[0] = 0;
      v24[1] = 0;
      v11 = HIWORD(v23) + v9;
      LOWORD(v15) = v10;
      HIWORD(v15) = v11;
      v19 = v15;
      v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19);
      ClosestObjectCell = (#377 *)Object::FindClosestObjectCell(v12, v24, 0, 0);
      if ( ClosestObjectCell == this )
      {
        LOWORD(v16) = v10;
        HIWORD(v16) = v11;
        v20 = v16;
        v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v20);
        ClosestObjectCell = (#377 *)WTFMode::FindObjectByType(v14, 0);
      }
      if ( ClosestObjectCell )
      {
        if ( *((_DWORD *)ClosestObjectCell + 135) != *((_DWORD *)this + 135) )
        {
          result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)ClosestObjectCell + 132))(ClosestObjectCell);
          if ( *(_BYTE *)(result + 3229) )
            break;
        }
      }
      result = v21;
      v9 = ++v17;
      if ( v17 > v21 )
      {
        v7 = v22;
        v8 = v18;
        goto LABEL_12;
      }
    }
  }
  LOBYTE(result) = 1;
  return result;
}

/* ASM:
sub     esp, 30h
push    ebx
push    ebp
push    esi
push    edi
mov     ebp, ecx
call    TechnoClass__ShouldNotBeCloaked
test    al, al
jnz     loc_4579FD
mov     eax, [ebp+0]
lea     ecx, [esp+40h+var_14]
push    ecx
mov     ecx, ebp
call    dword ptr [eax+1B8h]
mov     edx, [eax]
mov     ecx, [ebp+520h]
mov     [esp+40h+var_10], edx
call    BuildingTypeClass__GetFoundationWidth
mov     ecx, [ebp+520h]
mov     ebx, eax
push    0
mov     [esp+44h+var_14], ebx
call    BuildingTypeClass__GetFoundationHeight
or      edi, 0FFFFFFFFh
cmp     ebx, 0FFFFFFFFh
mov     [esp+40h+var_18], eax
mov     [esp+40h+var_24], edi
jl      loc_4579F3

loc_45791E:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+12D↓j
or      esi, 0FFFFFFFFh
cmp     eax, 0FFFFFFFFh
mov     [esp+40h+var_28], esi
jl      loc_4579E6
mov     eax, [esp+40h+var_10]
add     edi, eax

loc_457934:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+118↓j
mov     ecx, [esp+40h+var_10+2]
xor     eax, eax
push    eax
mov     [esp+44h+var_8], eax
mov     [esp+44h+var_4], eax
push    eax
add     esi, ecx
lea     eax, [esp+48h+var_8]
lea     ecx, [esp+48h+var_20]
mov     word ptr [esp+48h+var_30], di
mov     word ptr [esp+48h+var_30+2], si
mov     edx, [esp+48h+var_30]
push    eax
push    ecx
mov     ecx, 87F7E8h
mov     [esp+50h+var_20], edx
call    CellCoord__To_CellObj
mov     ecx, eax
call    Object__FindClosestObjectCell
cmp     eax, ebp
jnz     short loc_4579A1
mov     word ptr [esp+40h+var_2C], di
mov     word ptr [esp+40h+var_2C+2], si
mov     edx, [esp+40h+var_2C]
lea     eax, [esp+40h+var_1C]
push    0
push    eax
mov     ecx, 87F7E8h
mov     [esp+48h+var_1C], edx
call    CellCoord__To_CellObj
mov     ecx, eax
call    WTFMode__FindObjectByType

loc_4579A1:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+B5↑j
test    eax, eax
jz      short loc_4579C9
mov     ecx, [eax+21Ch]
mov     edx, [ebp+21Ch]
cmp     ecx, edx
jz      short loc_4579C9
mov     edx, [eax]
mov     ecx, eax
call    dword ptr [edx+84h]
mov     cl, [eax+0C9Dh]
test    cl, cl
jnz     short loc_4579FD

loc_4579C9:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+E3↑j
; BuildingClass__IsFootprintBlocked+F3↑j
mov     esi, [esp+40h+var_28]
mov     eax, [esp+40h+var_18]
inc     esi
cmp     esi, eax
mov     [esp+40h+var_28], esi
jle     loc_457934
mov     ebx, [esp+40h+var_14]
mov     edi, [esp+40h+var_24]

loc_4579E6:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+68↑j
inc     edi
cmp     edi, ebx
mov     [esp+40h+var_24], edi
jle     loc_45791E

loc_4579F3:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+58↑j
pop     edi
pop     esi
pop     ebp
xor     al, al
pop     ebx
add     esp, 30h
retn
; ---------------------------------------------------------------------------

loc_4579FD:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+10↑j
; BuildingClass__IsFootprintBlocked+107↑j
pop     edi
pop     esi
pop     ebp
mov     al, 1
pop     ebx
add     esp, 30h
retn
*/
}
void BuildingClass::DamageFactoryBibCells() {}
void BuildingClass::ClearFactoryBib() {}
void BuildingClass::RepairPlacement() {}

// IDA 0x63ac70: check if building can be placed at location
// 0x63ac70
bool BuildingClass::CheckBuildability()
{
// [IDA decompile]
int __thiscall BuildingClass_CheckBuildability(void *this)
{
  #72 *v1; // ebp
  int v2; // edi
  int v4; // ecx
  int Type; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // esi
  void *v11; // [esp+14h] [ebp-4h] BYREF

  v1 = MEMORY[0xA8ECC8];
  v2 = 0;
  if ( (int)MEMORY[0xA8ECC8] <= 0 )
    return -1;
  while ( 1 )
  {
    v4 = *((_DWORD *)MEMORY[0xA8ECBC] + v2);
    if ( v4 )
    {
      if ( (*(_BYTE *)(v4 + 20) & 1) != 0 )
      {
        Type = BuildingClass::GetType((_DWORD *)v4);
        v6 = Type;
        if ( Type )
        {
          if ( *(int *)(Type + 148) >= 0 )
            return 1;
          v7 = *(_DWORD *)(Type + 4);
          v11 = this;
          v8 = (*(int (__thiscall **)(int, void **))(v7 + 16))(v6 + 4, &v11);
          if ( v8 == -1 )
            return 5;
          v9 = *(_DWORD *)(v6 + 20);
          if ( v8 == v9 - 1 )
            return 2;
          if ( v8 == v9 - 2 )
            break;
        }
      }
    }
    if ( ++v2 >= (int)v1 )
      return -1;
  }
  return 3;
}

/* ASM:
sub     esp, 8
push    ebx
push    ebp
mov     ebp, ds:0A8ECC8h
push    esi
push    edi
xor     edi, edi
test    ebp, ebp
mov     ebx, ecx
jle     loc_63AD1B

loc_63AC89:                             ; CODE XREF: BuildingClass__CheckBuildability+75↓j
mov     eax, ds:0A8ECBCh
mov     ecx, [eax+edi*4]
test    ecx, ecx
jz      short loc_63ACE0
mov     dl, [ecx+14h]
and     dl, 1
mov     [esp+18h+var_5], dl
jz      short loc_63ACE0
call    BuildingClass__GetType
mov     esi, eax
test    esi, esi
jz      short loc_63ACE0
mov     eax, [esi+94h]
test    eax, eax
jg      short loc_63ACE7
jz      short loc_63ACE7
mov     eax, [esi+4]
lea     ecx, [esi+4]
lea     edx, [esp+18h+var_4]
mov     [esp+18h+var_4], ebx
push    edx
call    dword ptr [eax+10h]
cmp     eax, 0FFFFFFFFh
jz      short loc_63ACF4
mov     esi, [esi+14h]
lea     ecx, [esi-1]
cmp     eax, ecx
jz      short loc_63AD01
add     esi, 0FFFFFFFEh
cmp     eax, esi
jz      short loc_63AD0E

loc_63ACE0:                             ; CODE XREF: BuildingClass__CheckBuildability+23↑j
; BuildingClass__CheckBuildability+2F↑j ...
inc     edi
cmp     edi, ebp
jge     short loc_63AD1B
jmp     short loc_63AC89
; ---------------------------------------------------------------------------

loc_63ACE7:                             ; CODE XREF: BuildingClass__CheckBuildability+44↑j
; BuildingClass__CheckBuildability+46↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn
; ---------------------------------------------------------------------------

loc_63ACF4:                             ; CODE XREF: BuildingClass__CheckBuildability+5D↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 5
pop     ebx
add     esp, 8
retn
; ---------------------------------------------------------------------------

loc_63AD01:                             ; CODE XREF: BuildingClass__CheckBuildability+67↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 2
pop     ebx
add     esp, 8
retn
; ---------------------------------------------------------------------------

loc_63AD0E:                             ; CODE XREF: BuildingClass__CheckBuildability+6E↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 3
pop     ebx
add     esp, 8
retn
; ---------------------------------------------------------------------------

loc_63AD1B:                             ; CODE XREF: BuildingClass__CheckBuildability+13↑j
; BuildingClass__CheckBuildability+73↑j
pop     edi
pop     esi
pop     ebp
or      eax, 0FFFFFFFFh
pop     ebx
add     esp, 8
retn
*/
}

// IDA 0x70c5a0: check cell passability (delegates to TechnoClass flag)
// 0x70c5a0
bool BuildingClass::CheckCellPassability()
{
// [IDA decompile]
int __thiscall BuildingClass::_vt162(#377 *this)
{
  int result; // eax

  LOBYTE(result) = *((_BYTE *)this + 978) != 0;
  return result;
}

/* ASM:
mov     al, [ecx+3D2h]
test    al, al
setnz   al
retn
*/
}

// IDA 0x710670: placement complete notification
// 0x710670
void BuildingClass::OnCellPlacementComplete()
{
// [IDA decompile]
int __thiscall BuildingClass::_vt229(#377 *this)
{
  int result; // eax
  int v3; // edx
  int v4; // eax
  _DWORD v5[3]; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v6; // [esp+18h] [ebp+4h]

  CellClass::AddObject((_DWORD *)this + 69, v6);
  if ( v6 )
  {
    result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this);
    if ( *(_DWORD *)(result + 1380) != -1 )
    {
      v5[0] = *((_DWORD *)this + 39);
      v3 = *(_DWORD *)this;
      v5[1] = *((_DWORD *)this + 40);
      v5[2] = *((_DWORD *)this + 41);
      v4 = (*(int (__thiscall **)(#377 *))(v3 + 132))(this);
      return PlayAudioAt2(*(_DWORD *)(v4 + 1380), v5, 0);
    }
  }
  return result;
}

/* ASM:
sub     esp, 0Ch
push    esi
push    edi
mov     edi, [esp+14h+arg_0]
mov     esi, ecx
push    edi
lea     ecx, [esi+114h]
call    CellClass__AddObject
test    edi, edi
jz      short loc_7106D5
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
cmp     dword ptr [eax+564h], 0FFFFFFFFh
jz      short loc_7106D5
lea     ecx, [esi+9Ch]
push    0
lea     edi, [esp+18h+var_C]
mov     edx, [ecx]
mov     [esp+18h+var_C], edx
mov     edx, [esi]
mov     eax, [ecx+4]
mov     [esp+18h+var_8], eax
mov     ecx, [ecx+8]
mov     [esp+18h+var_4], ecx
mov     ecx, esi
call    dword ptr [edx+84h]
mov     ecx, [eax+564h]
mov     edx, edi
call    PlayAudioAt2

loc_7106D5:                             ; CODE XREF: BuildingClass__OnCellPlacementComplete+19↑j
; BuildingClass__OnCellPlacementComplete+2C↑j
pop     edi
pop     esi
add     esp, 0Ch
retn    4
*/
}

// ============================================================
// Section 3: Exit / Unlimbo
// ============================================================

// IDA 0x44e1b0: get exit coordinates for units leaving building
// 0x447ac0
CoordStruct* BuildingClass::GetExitCoords(CoordStruct* out, uint32_t unknown) const
{
    if (!Type || !out) return out;
    int fh = Type->GetFoundationHeight(false);
    int fw = Type->GetFoundationWidth();
    out->X = location.X + ((fw << 7) - 128);
    out->Y = location.Y + ((fh << 7) - 128);
    out->Z = location.Z;
    return out;
}

CoordStruct* BuildingClass::GetAdjustedExitCoords(CoordStruct* out) const { return GetExitCoords(out, 0); }
// 0x44f640
CoordStruct* BuildingClass::GetFactoryPosition(CoordStruct* out) const {
// [IDA decompile]
int __thiscall BuildingClass::GetFactoryPosition(#377 *this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // ecx
  int v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  int *v9; // ecx
  char v10[12]; // [esp+4h] [ebp-Ch] BYREF
  int *v11; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)*((_DWORD *)this + 328);
  if ( v1[946] == MEMORY[0x89C848] && v1[947] == MEMORY[0x89C84C] && v1[948] == MEMORY[0x89C850] )
  {
    v9 = (int *)(*(int (__thiscall **)(#377 *, char *))(*(_DWORD *)this + 72))(this, v10);
    *v11 = *v9;
    v11[1] = v9[1];
    v11[2] = v9[2];
    return (int)v11;
  }
  else
  {
    v2 = (_DWORD *)((char *)this + 156);
    v3 = v2[1];
    v4 = v2[2];
    v5 = *v2 + v1[946];
    v6 = v3 + v1[947];
    v7 = v1[948];
    *v11 = v5;
    v11[1] = v6;
    v11[2] = v4 + v7;
    return (int)v11;
  }
}

/* ASM:
mov     eax, [ecx+520h]
sub     esp, 0Ch
mov     edx, [eax+0EC8h]
push    esi
cmp     edx, ds:89C848h
jnz     short loc_44F678
mov     edx, [eax+0ECCh]
mov     esi, ds:89C84Ch
cmp     edx, esi
jnz     short loc_44F678
mov     edx, [eax+0ED0h]
mov     esi, ds:89C850h
cmp     edx, esi
jz      short loc_44F6B5

loc_44F678:                             ; CODE XREF: BuildingClass__GetFactoryPosition+16↑j
; BuildingClass__GetFactoryPosition+26↑j
add     ecx, 9Ch
push    edi
mov     edx, [ecx]
mov     esi, [ecx+4]
mov     edi, [ecx+8]
mov     ecx, [eax+0EC8h]
add     ecx, edx
mov     edx, [eax+0ECCh]
add     edx, esi
mov     esi, [eax+0ED0h]
mov     eax, [esp+14h+arg_0]
add     esi, edi
mov     edi, eax
mov     [edi], ecx
mov     [edi+4], edx
mov     [edi+8], esi
pop     edi
pop     esi
add     esp, 0Ch
retn    8
; ---------------------------------------------------------------------------

loc_44F6B5:                             ; CODE XREF: BuildingClass__GetFactoryPosition+36↑j
mov     eax, [ecx]
lea     edx, [esp+10h+var_C]
push    edx
call    dword ptr [eax+48h]
mov     ecx, eax
mov     eax, [esp+10h+arg_0]
mov     edx, eax
mov     esi, [ecx]
mov     [edx], esi
mov     esi, [ecx+4]
mov     [edx+4], esi
pop     esi
mov     ecx, [ecx+8]
mov     [edx+8], ecx
add     esp, 0Ch
retn    8
*/
}
CoordStruct* BuildingClass::CalcExitCoords(CoordStruct* out, int dir) const { (void)dir; return GetExitCoords(out, 0); }
CoordStruct* BuildingClass::GetRallyPointCoord(CoordStruct* out) const { return GetExitCoords(out, 0); }

// IDA 0x4497c0: get build coords adjusted
// 0x459ef0
CoordStruct* BuildingClass::GetBuildCoordsAdjusted(CoordStruct* out) const
{
    if (out) *out = location;
    return out;
}

// IDA 0x44cd60: set rally point
// 0x443860
void BuildingClass::SetRallyPoint(CoordStruct* target)
{
// [IDA decompile]
void __thiscall BuildingClass::SetRallyPoint(int this, __int16 *a2, char a3)
{
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int TileIndex; // eax
  _DWORD *v11; // eax
  _BYTE *WaypointCoords; // eax
  _BYTE *v13; // eax
  int v14; // eax
  char *v15; // eax
  int v16; // ebp
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  _BYTE *v19; // eax
  _BYTE *v20; // eax
  int v21; // eax
  char *v22; // eax
  int v23; // [esp-10h] [ebp-B4h]
  int v24; // [esp-10h] [ebp-B4h]
  char v25; // [esp-Ch] [ebp-B0h]
  char v26; // [esp-Ch] [ebp-B0h]
  int v27; // [esp-8h] [ebp-ACh]
  int v28; // [esp-8h] [ebp-ACh]
  char v29; // [esp-4h] [ebp-A8h]
  char v30; // [esp-4h] [ebp-A8h]
  __int16 v31[4]; // [esp+10h] [ebp-94h] BYREF
  char v32[8]; // [esp+18h] [ebp-8Ch] BYREF
  int v33; // [esp+20h] [ebp-84h]
  int v34; // [esp+24h] [ebp-80h] BYREF
  _BYTE v35[8]; // [esp+28h] [ebp-7Ch] BYREF
  int v36; // [esp+30h] [ebp-74h]
  char v37[112]; // [esp+34h] [ebp-70h] BYREF

  v33 = 0;
  v4 = 0;
  v5 = *((_DWORD *)CellCoord::To_CellObj(MEMORY[0x87F7E8], a2) + 80);
  v6 = *(_DWORD *)(this + 1312);
  v32[0] = BYTE1(v5) & 1;
  if ( *(_DWORD *)(v6 + 3768) == 3 )
  {
    v33 = 4;
    v4 = 9;
  }
  if ( *(_BYTE *)(v6 + 3278) )
  {
    v33 = 6;
    v4 = 4;
  }
  v7 = *(_DWORD *)v32;
  v8 = *(_DWORD *)(this + 156);
  v9 = *(_DWORD *)(this + 160);
  v36 = *(_DWORD *)(this + 164);
  v31[0] = v8 / 256;
  v31[1] = v9 / 256;
  TileIndex = MapClass::GetTileIndex(MEMORY[0x87F7E8], v31, v4, v32[0]);
  v31[0] = 0;
  v31[1] = 0;
  v34 = *LayerClass::Pathfinding_Find(
           MEMORY[0x87F7E8],
           v33,
           v32,
           a2,
           v33,
           TileIndex,
           v4,
           v7,
           1,
           1,
           0,
           0,
           0,
           1,
           v31,
           0,
           0);
  if ( v34 != MEMORY[0x87F7E8][29708] )
  {
    v11 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v34);
    WaypointCoords = ScriptAction::GetWaypointCoords(v32, v11);
    v27 = *(_DWORD *)WaypointCoords;
    v29 = WaypointCoords[4];
    v13 = ScriptAction::GetWaypointCoords(v31, (_DWORD *)this);
    v23 = *(_DWORD *)v13;
    v25 = v13[4];
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 56))(this);
    v15 = ScenarioClass::SetEvent(v37, v14, 30, v23, v25, v27, v29);
    if ( MEMORY[0x87F7E8][524984] < 128 )
    {
      qmemcpy((char *)&MEMORY[0x87F7E8][524987] + 111 * MEMORY[0x87F7E8][524986], v15, 0x6Fu);
      MEMORY[0x87F7E8][MEMORY[0x87F7E8][524986] + 528539] = ((int (*)(void))timeGetTime)();
      MEMORY[0x87F7E8][524986] = (LOBYTE(MEMORY[0x87F7E8][524986]) + 1) & 0x7F;
      ++MEMORY[0x87F7E8][524984];
    }
    goto LABEL_8;
  }
  if ( !*(_BYTE *)(*(_DWORD *)(this + 1312) + 5817)
    || !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540))
    || !MEMORY[0x87F7E8][536212]
    || !LOBYTE(MEMORY[0x87F7E8][536270])
    || *(_DWORD *)(this + 704) )
  {
LABEL_8:
    if ( a3 )
    {
      if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(this + 540)) )
      {
        v16 = *(_DWORD *)(this + 1312);
        if ( !*(_BYTE *)(v16 + 5817) && !*(_BYTE *)(v16 + 1517) )
          VoxClass::FindAndPlay(aEvaNewrallypoi, -1);
      }
    }
    return;
  }
  v17 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 72))(this, v35);
  v18 = Coord::To_Cell(MEMORY[0x87F7E8], v17);
  v19 = ScriptAction::GetWaypointCoords(v32, v18);
  v28 = *(_DWORD *)v19;
  v30 = v19[4];
  v20 = ScriptAction::GetWaypointCoords(v31, (_DWORD *)this);
  v24 = *(_DWORD *)v20;
  v26 = v20[4];
  v21 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 56))(this);
  v22 = ScenarioClass::SetEvent(v37, v21, 30, v24, v26, v28, v30);
  if ( MEMORY[0x87F7E8][524984] < 128 )
  {
    qmemcpy((char *)&MEMORY[0x87F7E8][524987] + 111 * MEMORY[0x87F7E8][524986], v22, 0x6Fu);
    MEMORY[0x87F7E8][MEMORY[0x87F7E8][524986] + 528539] = ((int (*)(void))timeGetTime)();
    MEMORY[0x87F7E8][524986] = (LOBYTE(MEMORY[0x87F7E8][524986]) + 1) & 0x7F;
    ++MEMORY[0x87F7E8][524984];
  }
}

/* ASM:
sub     esp, 94h
mov     eax, [esp+94h+arg_0]
push    ebx
push    ebp
push    esi
mov     ebp, ecx
push    edi
xor     ebx, ebx
push    eax
mov     ecx, 87F7E8h
mov     [esp+0A8h+var_84], ebx
xor     esi, esi
call    CellCoord__To_CellObj
mov     ecx, [eax+140h]
mov     eax, [ebp+520h]
shr     ecx, 8
and     cl, 1
mov     [esp+0A4h+var_8C], cl
mov     ecx, [eax+0EB8h]
cmp     ecx, 3
jnz     short loc_4438B4
mov     [esp+0A4h+var_84], 4
mov     esi, 9

loc_4438B4:                             ; CODE XREF: BuildingClass__SetRallyPoint+45↑j
cmp     [eax+0CCEh], bl
jz      short loc_4438C9
mov     [esp+0A4h+var_84], 6
mov     esi, 4

loc_4438C9:                             ; CODE XREF: BuildingClass__SetRallyPoint+5A↑j
lea     edx, [ebp+9Ch]
mov     edi, dword ptr [esp+0A4h+var_8C]
push    edi
push    esi
mov     eax, [edx]
mov     ecx, [edx+4]
mov     edx, [edx+8]
mov     [esp+0ACh+var_74], edx
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     [esp+0ACh+var_94], ax
mov     eax, ecx
cdq
and     edx, 0FFh
lea     ecx, [esp+0ACh+var_94]
add     eax, edx
push    ecx
sar     eax, 8
mov     [esp+0B0h+var_94+2], ax
mov     eax, dword ptr [esp+0B0h+var_94]
mov     ecx, 87F7E8h
mov     dword ptr [esp+0B0h+var_94], eax
call    MapClass__GetTileIndex
push    ebx
mov     [esp+0A8h+var_94], bx
mov     [esp+0A8h+var_94+2], bx
push    ebx
lea     ebx, [esp+0ACh+var_94]
mov     ecx, 1
push    ebx
push    ecx
push    0
mov     edx, ecx
push    0
push    0
push    edx
mov     edx, [esp+0C4h+var_84]
push    ecx
push    edi
push    esi
push    eax
mov     eax, [esp+0D4h+arg_0]
push    edx
lea     ecx, [esp+0D8h+var_8C]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, ds:89C818h
mov     [esp+0A4h+var_80], eax
jnz     short loc_44397D
mov     dx, word ptr [esp+0A4h+var_80+2]
cmp     dx, ds:89C81Ah
jz      loc_443A7B

loc_44397D:                             ; CODE XREF: BuildingClass__SetRallyPoint+109↑j
lea     eax, [esp+0A4h+var_80]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
push    eax
lea     ecx, [esp+0A8h+var_8C]
call    ScriptAction__GetWaypointCoords
mov     edx, [eax]
sub     esp, 8
mov     ecx, esp
mov     al, [eax+4]
push    ebp
mov     [ecx], edx
mov     [ecx+4], al
lea     ecx, [esp+0B0h+var_94]
call    ScriptAction__GetWaypointCoords
mov     edx, [eax]
sub     esp, 8
mov     ecx, esp
mov     al, [eax+4]
push    1Eh
mov     [ecx], edx
mov     edx, [ebp+0]
mov     [ecx+4], al
mov     ecx, ebp
call    dword ptr [edx+38h]
push    eax
lea     ecx, [esp+0BCh+var_70]
call    ScenarioClass__SetEvent
cmp     dword ptr ds:0A802C8h, 80h
jge     short loc_443A2B
mov     ecx, ds:0A802D0h
mov     esi, eax
lea     edx, [ecx+ecx*8]
lea     ecx, [ecx+edx*4]
lea     edi, [ecx+ecx*2+0A802D4h]
mov     ecx, 1Bh
rep movsd
movsw
movsb
call    ds:__imp_timeGetTime
mov     ecx, ds:0A802D0h
mov     ds:0A83A54h[ecx*4], eax
mov     edx, ds:0A802D0h
mov     eax, ds:0A802C8h
inc     edx
and     edx, 7Fh
inc     eax
mov     ds:0A802D0h, edx
mov     ds:0A802C8h, eax

loc_443A2B:                             ; CODE XREF: BuildingClass__SetRallyPoint+17C↑j
; BuildingClass__SetRallyPoint+229↓j ...
mov     al, [esp+0A4h+arg_4]
test    al, al
jz      short loc_443A6E
mov     ecx, [ebp+21Ch] ; this
call    House__IsHumanPlayer
test    al, al
jz      short loc_443A6E
mov     ebp, [ebp+520h]
mov     al, [ebp+16B9h]
test    al, al
jnz     short loc_443A6E
mov     al, [ebp+5EDh]
test    al, al
jnz     short loc_443A6E
push    0FFFFFFFFh      ; int
or      edx, 0FFFFFFFFh
mov     ecx, offset aEvaNewrallypoi ; "EVA_NewRallyPointEstablished"
call    VoxClass__FindAndPlay

loc_443A6E:                             ; CODE XREF: BuildingClass__SetRallyPoint+1D4↑j
; BuildingClass__SetRallyPoint+1E3↑j ...
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 94h
retn    8
; ---------------------------------------------------------------------------

loc_443A7B:                             ; CODE XREF: BuildingClass__SetRallyPoint+117↑j
mov     eax, [ebp+520h]
mov     cl, [eax+16B9h]
test    cl, cl
jz      short loc_443A2B
mov     ecx, [ebp+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jz      short loc_443A2B
mov     eax, ds:0A8B238h
test    eax, eax
jz      short loc_443A2B
mov     al, ds:0A8B320h
test    al, al
jz      loc_443A2B
mov     eax, [ebp+2C0h]
test    eax, eax
jnz     loc_443A2B
mov     edx, [ebp+0]
lea     eax, [esp+0A4h+var_7C]
push    eax
mov     ecx, ebp
call    dword ptr [edx+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
push    eax
lea     ecx, [esp+0A8h+var_8C]
call    ScriptAction__GetWaypointCoords
mov     edx, [eax]
sub     esp, 8
mov     ecx, esp
mov     al, [eax+4]
push    ebp
mov     [ecx], edx
mov     [ecx+4], al
lea     ecx, [esp+0B0h+var_94]
call    ScriptAction__GetWaypointCoords
mov     edx, [eax]
sub     esp, 8
mov     ecx, esp
mov     al, [eax+4]
push    1Eh
mov     [ecx], edx
mov     edx, [ebp+0]
mov     [ecx+4], al
mov     ecx, ebp
call    dword ptr [edx+38h]
push    eax
lea     ecx, [esp+0BCh+var_70]
call    ScenarioClass__SetEvent
cmp     dword ptr ds:0A802C8h, 80h
jge     loc_443A6E
mov     ecx, ds:0A802D0h
mov     esi, eax
lea     edx, [ecx+ecx*8]
lea     ecx, [ecx+edx*4]
lea     edi, [ecx+ecx*2+0A802D4h]
mov     ecx, 1Bh
rep movsd
movsw
movsb
call    ds:__imp_timeGetTime
mov     ecx, ds:0A802D0h
pop     edi
pop     esi
pop     ebp
mov     ds:0A83A54h[ecx*4], eax
mov     edx, ds:0A802D0h
mov     eax, ds:0A802C8h
inc     edx
and     edx, 7Fh
inc     eax
mov     ds:0A802D0h, edx
mov     ds:0A802C8h, eax
pop     ebx
add     esp, 94h
retn    8
*/
}

// IDA 0x4a9650: mark exit path cells
// 0x4a9650
void BuildingClass::MarkExitPath()
{
// [IDA decompile]
char __thiscall sub_4A9650(__int16 **this, _WORD *a2, _WORD *a3)
{
  _WORD *v3; // ebp
  _DWORD *v5; // eax
  __int16 *v6; // esi
  char v7; // bl
  __int16 *v8; // eax
  __int16 v9; // dx
  int v10; // ecx

  v3 = a2;
  LOWORD(v5) = *a2;
  if ( *(_DWORD *)a2 != MEMORY[0x8A03F8] )
  {
    v6 = *(this + 1123);
    v7 = (char)a3;
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF )
    {
      v8 = v6;
      v6 += 2;
      v9 = *v8;
      LOWORD(v8) = v3[1] + v8[1];
      LOWORD(a3) = *v3 + v9;
      HIWORD(a3) = (_WORD)v8;
      a2 = a3;
      LOBYTE(v5) = LayerClass::CoordinatesLegal(this, (__int16 *)&a2);
      if ( (_BYTE)v5 )
      {
        v5 = CellCoord::To_CellObj(this, (__int16 *)&a2);
        v10 = v5[75];
        if ( v7 )
          v5[75] = v10 | 4;
        else
          v5[75] = v10 & 0xFFFFFFFB;
      }
    }
  }
  return (char)v5;
}

/* ASM:
push    ebx
push    ebp
mov     ebp, [esp+8+arg_0]
push    esi
push    edi
mov     edi, ecx
mov     ax, [ebp+0]
cmp     ax, ds:8A03F8h
jnz     short loc_4A9674
mov     cx, [ebp+2]
cmp     cx, ds:8A03FAh
jz      short loc_4A96EF

loc_4A9674:                             ; CODE XREF: BuildingClass__MarkExitPath+15↑j
mov     esi, [edi+118Ch]
mov     bl, byte ptr [esp+10h+arg_4]

loc_4A967E:                             ; CODE XREF: BuildingClass__MarkExitPath+71↓j
; BuildingClass__MarkExitPath+92↓j ...
cmp     word ptr [esi], 7FFFh
jnz     short loc_4A968D
cmp     word ptr [esi+2], 7FFFh
jz      short loc_4A96EF

loc_4A968D:                             ; CODE XREF: BuildingClass__MarkExitPath+33↑j
mov     eax, esi
add     esi, 4
mov     dx, [eax]
mov     ax, [eax+2]
add     dx, [ebp+0]
add     ax, [ebp+2]
mov     word ptr [esp+10h+arg_4], dx
mov     word ptr [esp+10h+arg_4+2], ax
mov     ecx, [esp+10h+arg_4]
lea     edx, [esp+10h+arg_0]
mov     [esp+10h+arg_0], ecx
push    edx
mov     ecx, edi
call    LayerClass__CoordinatesLegal
test    al, al
jz      short loc_4A967E
lea     eax, [esp+10h+arg_0]
mov     ecx, edi
push    eax
call    CellCoord__To_CellObj
mov     ecx, [eax+12Ch]
test    bl, bl
jz      short loc_4A96E4
or      ecx, 4
mov     [eax+12Ch], ecx
jmp     short loc_4A967E
; ---------------------------------------------------------------------------

loc_4A96E4:                             ; CODE XREF: BuildingClass__MarkExitPath+87↑j
and     ecx, 0FFFFFFFBh
mov     [eax+12Ch], ecx
jmp     short loc_4A967E
; ---------------------------------------------------------------------------

loc_4A96EF:                             ; CODE XREF: BuildingClass__MarkExitPath+22↑j
; BuildingClass__MarkExitPath+3B↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
retn    8
*/
}

// IDA 0x44f590: check exit path is clear
// 0x639cb0
bool BuildingClass::CheckExitPath()
{
// [IDA decompile]
int __thiscall sub_639CB0(_DWORD *this)
{
  int result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // edx
  int v10; // edx
  int v11; // esi
  int v12; // ecx
  int v13; // edx
  int v14; // esi
  int i; // ecx
  int v16; // eax
  int v17; // [esp+10h] [ebp-8h]
  _DWORD *v18; // [esp+14h] [ebp-4h]

  result = BuildingClass::GetType(this);
  v2 = result;
  v3 = 0;
  v18 = (_DWORD *)result;
  v4 = *(_DWORD *)(result + 20);
  v5 = *(_DWORD *)(result + 148);
  v17 = v4;
  if ( v4
    && (v4 > 0
     || v5 >= 0 && (result = -v5 / *(_DWORD *)(result + 144), v3 = v5 + -v5 % *(_DWORD *)(v2 + 144), v3 >= 0) && v3 < v4) )
  {
    result = *(_DWORD *)(v2 + 8);
    v6 = *(_DWORD *)(result + 4 * v3);
  }
  else
  {
    v6 = 0;
  }
  v7 = *(_DWORD *)(v6 + 16);
  v8 = 0;
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD **)(*(_DWORD *)(v6 + 4) + 4 * v8);
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v9 + 1216))(*v9);
      if ( (_BYTE)result )
        break;
      if ( ++v8 >= v7 )
        return result;
    }
    if ( v5 < v17 )
    {
      while ( 1 )
      {
        v10 = v5;
        v11 = v18[5];
        if ( !v11 )
          break;
        if ( v5 >= v11 )
        {
          v12 = v18[37];
          if ( v12 < 0 )
            break;
          v10 = v12 + (v5 - v12) % v18[36];
        }
        if ( v10 < 0 || v10 >= v11 )
          break;
        v13 = *(_DWORD *)(v18[2] + 4 * v10);
LABEL_21:
        v14 = *(_DWORD *)(v13 + 16);
        for ( i = 0; i < v14; ++i )
        {
          v16 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v13 + 4) + 4 * i) + 4);
          if ( *(_BYTE *)(v16 + 12) == 2 )
            *(_BYTE *)(v16 + 12) = 29;
        }
        result = v17;
        if ( ++v5 >= v17 )
          return result;
      }
      v13 = 0;
      goto LABEL_21;
    }
  }
  return result;
}

/* ASM:
sub     esp, 8
push    ebx
push    ebp
push    esi
push    edi
call    BuildingClass__GetType
mov     ecx, eax
xor     edx, edx
mov     [esp+18h+var_4], ecx
mov     esi, [ecx+14h]
mov     ebp, [ecx+94h]
test    esi, esi
mov     [esp+18h+var_8], esi
jz      short loc_639CFA
jg      short loc_639CF2
test    ebp, ebp
jg      short loc_639CDD
jnz     short loc_639CFA

loc_639CDD:                             ; CODE XREF: BuildingClass__CheckExitPath+29↑j
mov     eax, ebp
neg     eax
cdq
idiv    dword ptr [ecx+90h]
add     edx, ebp
test    edx, edx
jl      short loc_639CFA
cmp     edx, esi
jge     short loc_639CFA

loc_639CF2:                             ; CODE XREF: BuildingClass__CheckExitPath+25↑j
mov     eax, [ecx+8]
mov     edi, [eax+edx*4]
jmp     short loc_639CFC
; ---------------------------------------------------------------------------

loc_639CFA:                             ; CODE XREF: BuildingClass__CheckExitPath+23↑j
; BuildingClass__CheckExitPath+2B↑j ...
xor     edi, edi

loc_639CFC:                             ; CODE XREF: BuildingClass__CheckExitPath+48↑j
mov     ebx, [edi+10h]
xor     esi, esi
test    ebx, ebx
jle     loc_639D97

loc_639D09:                             ; CODE XREF: BuildingClass__CheckExitPath+70↓j
mov     ecx, [edi+4]
mov     edx, [ecx+esi*4]
mov     ecx, [edx]
mov     eax, [ecx]
call    dword ptr [eax+4C0h]
test    al, al
jnz     short loc_639D2A
inc     esi
cmp     esi, ebx
jl      short loc_639D09
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn
; ---------------------------------------------------------------------------

loc_639D2A:                             ; CODE XREF: BuildingClass__CheckExitPath+6B↑j
cmp     ebp, [esp+18h+var_8]
jge     short loc_639D97
mov     bl, 2

loc_639D32:                             ; CODE XREF: BuildingClass__CheckExitPath+E5↓j
mov     edi, [esp+18h+var_4]
mov     edx, ebp
mov     esi, [edi+14h]
test    esi, esi
jz      short loc_639D6C
cmp     ebp, esi
jl      short loc_639D5C
mov     ecx, [edi+94h]
test    ecx, ecx
jg      short loc_639D4F
jnz     short loc_639D6C

loc_639D4F:                             ; CODE XREF: BuildingClass__CheckExitPath+9B↑j
mov     eax, ebp
sub     eax, ecx
cdq
idiv    dword ptr [edi+90h]
add     edx, ecx

loc_639D5C:                             ; CODE XREF: BuildingClass__CheckExitPath+91↑j
test    edx, edx
jl      short loc_639D6C
cmp     edx, esi
jge     short loc_639D6C
mov     ecx, [edi+8]
mov     edx, [ecx+edx*4]
jmp     short loc_639D6E
; ---------------------------------------------------------------------------

loc_639D6C:                             ; CODE XREF: BuildingClass__CheckExitPath+8D↑j
; BuildingClass__CheckExitPath+9D↑j ...
xor     edx, edx

loc_639D6E:                             ; CODE XREF: BuildingClass__CheckExitPath+BA↑j
mov     esi, [edx+10h]
xor     ecx, ecx
test    esi, esi
jle     short loc_639D8E

loc_639D77:                             ; CODE XREF: BuildingClass__CheckExitPath+DC↓j
mov     eax, [edx+4]
mov     eax, [eax+ecx*4]
mov     eax, [eax+4]
cmp     [eax+0Ch], bl
jnz     short loc_639D89
mov     byte ptr [eax+0Ch], 1Dh

loc_639D89:                             ; CODE XREF: BuildingClass__CheckExitPath+D3↑j
inc     ecx
cmp     ecx, esi
jl      short loc_639D77

loc_639D8E:                             ; CODE XREF: BuildingClass__CheckExitPath+C5↑j
mov     eax, [esp+18h+var_8]
inc     ebp
cmp     ebp, eax
jl      short loc_639D32

loc_639D97:                             ; CODE XREF: BuildingClass__CheckExitPath+53↑j
; BuildingClass__CheckExitPath+7E↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn
*/
}

void BuildingClass::RenderExitPosition() {}
void BuildingClass::ReassignFlagPosition() {}

// IDA 0x44f620: toggle primary factory status
// 0x447e90
bool BuildingClass::TogglePrimaryFactory()
{
// [IDA decompile]
int __thiscall BuildingClass::TogglePrimaryFactory(#377 *this)
{
  _BYTE *v1; // eax
  int v2; // eax
  _DWORD *v3; // ecx
  _BYTE v5[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v6; // [esp+14h] [ebp+4h]
  int v7; // [esp+18h] [ebp+8h]

  v1 = (_BYTE *)*((_DWORD *)this + 328);
  if ( v1[5835] || v1[5801] || v1[5803] )
    v2 = (*(int (__thiscall **)(#377 *, _BYTE *, int))(*(_DWORD *)this + 168))(this, v5, v7);
  else
    v2 = (*(int (__thiscall **)(#377 *, _BYTE *))(*(_DWORD *)this + 72))(this, v5);
  v3 = (_DWORD *)v2;
  *v6 = *v3;
  v6[1] = v3[1];
  v6[2] = v3[2];
  return (int)v6;
}

/* ASM:
mov     eax, [ecx+520h]
sub     esp, 0Ch
mov     dl, [eax+16CBh]
push    esi
test    dl, dl
jz      short loc_447EB8
mov     edx, [esp+10h+arg_4]
mov     eax, [ecx]
push    edx
lea     edx, [esp+14h+var_C]
push    edx
call    dword ptr [eax+0A8h]
jmp     short loc_447EEA
; ---------------------------------------------------------------------------

loc_447EB8:                             ; CODE XREF: BuildingClass__TogglePrimaryFactory+12↑j
mov     dl, [eax+16A9h]
test    dl, dl
jnz     short loc_447ED8
mov     dl, [eax+16ABh]
test    dl, dl
jnz     short loc_447ED8
mov     edx, [ecx]
lea     eax, [esp+10h+var_C]
push    eax
call    dword ptr [edx+48h]
jmp     short loc_447EEA
; ---------------------------------------------------------------------------

loc_447ED8:                             ; CODE XREF: BuildingClass__TogglePrimaryFactory+30↑j
; BuildingClass__TogglePrimaryFactory+3A↑j
mov     eax, [esp+10h+arg_4]
mov     edx, [ecx]
push    eax
lea     eax, [esp+14h+var_C]
push    eax
call    dword ptr [edx+0A8h]

loc_447EEA:                             ; CODE XREF: BuildingClass__TogglePrimaryFactory+26↑j
; BuildingClass__TogglePrimaryFactory+46↑j
mov     ecx, eax
mov     eax, [esp+10h+arg_0]
mov     edx, eax
mov     esi, [ecx]
mov     [edx], esi
mov     esi, [ecx+4]
mov     [edx+4], esi
pop     esi
mov     ecx, [ecx+8]
mov     [edx+8], ecx
add     esp, 0Ch
retn    8
*/
}

// IDA 0x44f640: is factory selectable
// 0x457620
bool BuildingClass::IsFactorySelectable()
{
// [IDA decompile]
int __thiscall BuildingClass::IsFactorySelectable(#377 *this)
{
  return BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable(*((_DWORD *)this + 328));
}

/* ASM:
mov     ecx, [ecx+520h]
jmp     BuildingClass__Is1x1AndUndeployable_BuildingMassSelectable
*/
}

// ============================================================
// Section 4: Mission Controllers
// ============================================================

int BuildingClass::Mission_Construction()
{
    return UpdateConstruction();
}

// IDA 0x459ec0: returns 6 (wait timer constant)
// 0x443c60
int BuildingClass::UpdateConstruction()
{
// [IDA decompile]
int __thiscall BuildingClass::UpdateConstruction(#377 *this)
{
  int v2; // eax
  char *v3; // ebp
  unsigned int v4; // eax
  int v5; // edx
  __int16 v6; // di
  int (__thiscall **v7)(#377 *); // edx
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  __int16 v10; // ax
  int v11; // eax
  int v12; // eax
  int v13; // esi
  void *v14; // eax
  int *PlacementCells_Alt; // eax
  int v16; // esi
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // esi
  _BYTE *v24; // eax
  int result; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // ecx
  _DWORD *v31; // eax
  int v32; // ebp
  int v33; // ebx
  __int16 *v34; // eax
  int v35; // ecx
  int v36; // edx
  double v37; // st7
  unsigned int v38; // ebp
  _DWORD *v39; // eax
  _WORD *v40; // ebp
  __int16 v41; // ax
  _DWORD *v42; // eax
  int (__thiscall **v43)(#377 *); // edx
  _DWORD *v44; // eax
  int v45; // kr14_4
  int v46; // eax
  int v47; // eax
  void *v48; // eax
  int v49; // ebx
  int v50; // eax
  int v51; // esi
  int v52; // esi
  _DWORD *v53; // eax
  int *Coords; // eax
  int v55; // ebx
  int v56; // eax
  #377 *v57; // ebp
  int v58; // ebx
  int v59; // ebp
  int v60; // eax
  int v61; // ebp
  int v62; // eax
  int (__thiscall **v63)(#377 *); // edx
  int v64; // edx
  __int16 v65; // ax
  __int16 v66; // cx
  int (__thiscall **v67)(#377 *); // edx
  int *v68; // eax
  double v69; // st7
  int (__thiscall **v70)(#377 *); // eax
  unsigned int v71; // ebx
  _DWORD *v72; // ecx
  __int16 v73; // bp
  int v74; // ecx
  int v75; // ecx
  __int16 v76; // ax
  int v77; // ecx
  int v78; // edx
  int v79; // eax
  int v80; // ebp
  int v81; // ebx
  int v82; // ecx
  int v83; // edx
  int v84; // ebp
  int v85; // ecx
  int v86; // eax
  int v87; // ebx
  void *v88; // eax
  int (__thiscall **vfptr0)(#377 *); // edx
  int v90; // eax
  int *v91; // ecx
  int v92; // eax
  int v93; // ebx
  int v94; // edx
  _DWORD *v95; // ebp
  int v96; // eax
  int *v97; // eax
  double v98; // st7
  int (__thiscall **v99)(#377 *); // eax
  unsigned int v100; // ebp
  _DWORD *v101; // ecx
  __int16 v102; // bx
  int v103; // ecx
  int FoundationHeight; // eax
  __int16 v105; // cx
  int v106; // eax
  int v107; // edx
  int v108; // ecx
  int v109; // ebp
  int v110; // ebx
  int v111; // edx
  int v112; // edx
  int v113; // ebp
  int v114; // eax
  int v115; // ecx
  int v116; // ebx
  void *v117; // eax
  void *v118; // eax
  void *v119; // eax
  _DWORD *v120; // eax
  int v121; // eax
  int v122; // eax
  int v123; // eax
  int v124; // ecx
  __int16 *v125; // ebx
  unsigned int *v126; // eax
  int v127; // ecx
  int v128; // ebp
  int v129; // ecx
  int v130; // ebp
  int v131; // ebp
  int v132; // eax
  _DWORD *v133; // ebx
  int v134; // edx
  int v135; // eax
  unsigned int *v136; // eax
  int v137; // edx
  int v138; // eax
  int v139; // edx
  #375 *v140; // eax
  int v141; // edx
  void *v142; // eax
  int v143; // eax
  int v144; // eax
  int v145; // eax
  int v146; // eax
  int v147; // esi
  int v148; // ecx
  int v149; // ecx
  int v150; // edx
  int v151; // eax
  int v152; // ecx
  _DWORD *v153; // edi
  _DWORD *v154; // ecx
  int v155; // eax
  int v156; // ecx
  int v157; // eax
  int v158; // eax
  int v159; // esi
  int v160; // ecx
  int v161; // ebx
  int v162; // esi
  int *i; // eax
  int v164; // eax
  int v165; // edi
  int v166; // eax
  int v167; // ecx
  int v168; // ecx
  int v169; // edx
  int v170; // edi
  int v171; // eax
  int v172; // ebx
  int v173; // ecx
  bool v174; // zf
  int v175; // ecx
  int v176; // esi
  int v177; // ecx
  int v178; // ecx
  int v179; // edx
  int v180; // eax
  int v181; // ecx
  _DWORD *v182; // edi
  _DWORD *v183; // ecx
  int FreeSlot; // eax
  int v185; // esi
  int v186; // ecx
  int v187; // ecx
  int v188; // edx
  int v189; // eax
  int v190; // ecx
  _DWORD *v191; // edi
  _DWORD *v192; // ecx
  void *v193; // [esp-Ch] [ebp-178h]
  __int64 v194; // [esp+0h] [ebp-16Ch] BYREF
  double v195; // [esp+8h] [ebp-164h] BYREF
  double v196; // [esp+10h] [ebp-15Ch] BYREF
  int v197; // [esp+18h] [ebp-154h] BYREF
  int v198; // [esp+1Ch] [ebp-150h]
  int *v199; // [esp+20h] [ebp-14Ch]
  int v200; // [esp+24h] [ebp-148h]
  int v201; // [esp+28h] [ebp-144h]
  int v202; // [esp+2Ch] [ebp-140h]
  int v203; // [esp+30h] [ebp-13Ch] BYREF
  int v204; // [esp+34h] [ebp-138h] BYREF
  unsigned int v205; // [esp+38h] [ebp-134h]
  int v206; // [esp+3Ch] [ebp-130h]
  _DWORD *v207; // [esp+40h] [ebp-12Ch]
  int v208; // [esp+44h] [ebp-128h] BYREF
  int v209; // [esp+48h] [ebp-124h]
  int v210; // [esp+4Ch] [ebp-120h]
  int v211; // [esp+50h] [ebp-11Ch] BYREF
  int v212; // [esp+54h] [ebp-118h]
  int v213; // [esp+58h] [ebp-114h] BYREF
  int v214; // [esp+5Ch] [ebp-110h] BYREF
  int v215; // [esp+60h] [ebp-10Ch]
  int v216; // [esp+64h] [ebp-108h] BYREF
  int v217; // [esp+68h] [ebp-104h]
  int v218; // [esp+6Ch] [ebp-100h] BYREF
  int v219; // [esp+70h] [ebp-FCh]
  __int16 v220[6]; // [esp+74h] [ebp-F8h] BYREF
  int v221; // [esp+80h] [ebp-ECh] BYREF
  int v222[3]; // [esp+84h] [ebp-E8h] BYREF
  int v223; // [esp+90h] [ebp-DCh] BYREF
  int v224; // [esp+94h] [ebp-D8h] BYREF
  _DWORD v225[3]; // [esp+98h] [ebp-D4h] BYREF
  _DWORD v226[4]; // [esp+A4h] [ebp-C8h] BYREF
  int v227; // [esp+B4h] [ebp-B8h] BYREF
  _DWORD v228[2]; // [esp+B8h] [ebp-B4h] BYREF
  int v229; // [esp+C0h] [ebp-ACh] BYREF
  char v230[4]; // [esp+C4h] [ebp-A8h] BYREF
  _DWORD v231[2]; // [esp+C8h] [ebp-A4h] BYREF
  int v232; // [esp+D0h] [ebp-9Ch] BYREF
  char v233[8]; // [esp+D4h] [ebp-98h] BYREF
  unsigned int v234; // [esp+DCh] [ebp-90h] BYREF
  unsigned int v235; // [esp+E4h] [ebp-88h] BYREF
  char v236[8]; // [esp+ECh] [ebp-80h] BYREF
  char v237[12]; // [esp+F4h] [ebp-78h] BYREF
  char v238[4]; // [esp+100h] [ebp-6Ch] BYREF
  char v239[8]; // [esp+104h] [ebp-68h] BYREF
  _BYTE v240[16]; // [esp+10Ch] [ebp-60h] BYREF
  int v241[2]; // [esp+11Ch] [ebp-50h] BYREF
  char v242[12]; // [esp+124h] [ebp-48h] BYREF
  char v243[48]; // [esp+130h] [ebp-3Ch] BYREF
  char v244[12]; // [esp+160h] [ebp-Ch] BYREF
  _BYTE *v245; // [esp+170h] [ebp+4h]
  #375 *v246; // [esp+174h] [ebp+8h]

  if ( !v245 )
    return 0;
  v2 = *(_DWORD *)v245;
  v245[981] = 1;
  v3 = 0;
  if ( (*(int (__thiscall **)(_BYTE *))(v2 + 44))(v245) == 2 )
    v3 = v245;
  v4 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v245 + 44))(v245) - 1;
  if ( v4 > 0xE )
    return 0;
  switch ( *(_BYTE *)(v4 + 4478648) )
  {
    case 0:
      v24 = (_BYTE *)*((_DWORD *)this + 328);
      if ( !v24[5825] && !v24[5826] && !v24[5821] && !RadioClass::HasFreeLink((int *)this) )
        return 1;
      v26 = *((_DWORD *)this + 328);
      if ( !*(_BYTE *)(v26 + 5825) && !*(_BYTE *)(v26 + 5826) )
      {
        v27 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v245 + 44))(v245);
        HouseClass::UpdateBuildState(*((_DWORD *)this + 135), v27);
        if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v245 + 44))(v245) == 1 )
          *(_DWORD *)(*((_DWORD *)this + 135) + 22096) = -1;
        if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v245 + 44))(v245) == 15 )
          *(_DWORD *)(*((_DWORD *)this + 135) + 22100) = -1;
      }
      v28 = *((_DWORD *)this + 328);
      if ( *(_BYTE *)(v28 + 5819) || *(_BYTE *)(v28 + 5820) )
      {
        if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v245 + 44))(v245) != 1 )
        {
          (*(void (__thiscall **)(_BYTE *, _DWORD *, int, _DWORD))(*(_DWORD *)v245 + 372))(
            v245,
            &MEMORY[0x87F7E8][29720],
            1,
            0);
          return 0;
        }
        v120 = (_DWORD *)(*(int (__thiscall **)(#377 *, char *))(*(_DWORD *)this + 72))(this, v244);
        v200 = 160;
        LOWORD(v209) = *v120 / 256;
        v121 = v120[1];
        v226[2] = 0;
        LOWORD(v209) = LOWORD(MEMORY[0x87F7E8][32685]) + v209;
        HIWORD(v209) = v121 / 256 + HIWORD(MEMORY[0x87F7E8][32685]);
        ++MEMORY[0x87F7E8][539633];
        v205 = v209;
        v122 = *(_DWORD *)v245;
        v226[0] = ((__int16)(v209 + LOWORD(MEMORY[0x87F7E8][32684])) << 8) + 128;
        v226[1] = ((__int16)(HIWORD(v209) + HIWORD(MEMORY[0x87F7E8][32684])) << 8) + 128;
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, _DWORD *, int))(v122 + 216))(v245, v226, 160) )
        {
          v220[0] = 0x8000;
          ((void (__stdcall *)(__int16 *))FacingClass::Set_SyncLog)(v220);
          (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)v245 + 488))(v245, 10, 0);
        }
        goto LABEL_146;
      }
      if ( !*(_BYTE *)(v28 + 5821) )
      {
        if ( *(_DWORD *)(v28 + 3768) == 16 || *(_BYTE *)(v28 + 5825) || *(_BYTE *)(v28 + 5826) || *(_BYTE *)(v28 + 5804) )
        {
          TechnoClass::SetFocus(v245, *((_DWORD *)this + 134));
          vfptr0 = *(int (__thiscall ***)(#377 *))this;
          v201 = MEMORY[0x87F7E8][29708];
          v200 = (int)v245;
          v199 = &v229;
          v203 = *(_DWORD *)vfptr0[309](this);
          if ( v203 == MEMORY[0x87F7E8][29708] )
            return 0;
          v90 = *((_DWORD *)this + 328);
          if ( *(_DWORD *)(v90 + 3768) == 16 && !*(_BYTE *)(v90 + 5804) )
          {
            v91 = (int *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v245 + 132))(v245);
            v92 = *((_DWORD *)this + 135);
            v93 = 0;
            v216 = (int)v91;
            if ( *(int *)(v92 + 264) > 0 )
            {
              while ( 1 )
              {
                v94 = *v91;
                v95 = *(_DWORD **)(*(_DWORD *)(v92 + 252) + 4 * v93);
                v198 = v95[135];
                v96 = (*(int (__thiscall **)(int *))(v94 + 140))(v91);
                (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v95 + 256))(v95, v96, MEMORY[0x87F7E8][29708]);
                v92 = *((_DWORD *)this + 135);
                if ( ++v93 >= *(_DWORD *)(v92 + 264) )
                  break;
                v91 = (int *)v213;
              }
            }
          }
          v205 = (SHIWORD(v200) << 8) + 128;
          v204 = ((__int16)v200 << 8) + 128;
          v97 = (int *)(*(int (__thiscall **)(#377 *, char *))(*(_DWORD *)this + 72))(this, v243);
          v212 = *v97;
          v98 = Math::CalcAngle((double)v97[1] - (double)v204, (double)v203 - (double)v212);
          LOWORD(v212) = Math::RoundToInt((v98 - 1.570796326794897) * -10430.06004058427);
          v212 = (unsigned __int8)((((unsigned int)v212 >> 7) + 1) >> 1);
          v99 = *(int (__thiscall ***)(#377 *))this;
          v203 = (int)v199;
          v100 = *(_DWORD *)((int (__thiscall *)(#377 *, char *))v99[110])(this, v233);
          v101 = (_DWORD *)*((_DWORD *)this + 328);
          v205 = v100;
          v199 = (int *)(__int16)v100;
          v102 = v202;
          if ( (__int16)v202 < (__int16)v100 + BuildingTypeClass::GetFoundationWidth(v101) )
          {
            if ( (__int16)v202 < (__int16)v100 )
              v102 = v202 + 1;
          }
          else
          {
            v102 = v202 - 1;
          }
          v103 = *((_DWORD *)this + 328);
          v201 = SHIWORD(v205);
          FoundationHeight = BuildingTypeClass::GetFoundationHeight(v103, 0);
          v105 = HIWORD(v202);
          if ( SHIWORD(v202) < SHIWORD(v205) + FoundationHeight )
          {
            if ( SHIWORD(v202) < SHIWORD(v205) )
              v105 = HIWORD(v202) + 1;
          }
          else
          {
            v105 = HIWORD(v202) - 1;
          }
          v106 = (v102 << 8) + 128;
          v107 = (v105 << 8) + 128;
          v210 = 0;
          v108 = *((_DWORD *)this + 328);
          v109 = v106;
          v110 = v107;
          v208 = v106;
          v209 = v107;
          if ( *(_BYTE *)(v108 + 5860) )
          {
            if ( (int *)(__int16)v198 == (int *)((char *)v199 + 1) && SHIWORD(v198) == v201 + 2 )
            {
              v110 = v107 + *(_DWORD *)(v108 + 3788);
              v111 = *(_DWORD *)(v108 + 3792);
              v109 = *(_DWORD *)(v108 + 3784) + v106;
              v209 = v110;
              v208 = v109;
              v210 = v111;
            }
            else
            {
              v110 = v209;
              v109 = v208;
            }
          }
          if ( *(_BYTE *)(v108 + 5861) && (int *)(__int16)v198 == (int *)((char *)v199 + 2) && SHIWORD(v198) == v201 + 2 )
          {
            v112 = *(_DWORD *)(v108 + 3792);
            v109 += *(_DWORD *)(v108 + 3784);
            v110 += *(_DWORD *)(v108 + 3788);
            v208 = v109;
            v209 = v110;
            v210 += v112;
          }
          if ( *(_BYTE *)(v108 + 5862) && (int *)(__int16)v198 == (int *)((char *)v199 + 2) && SHIWORD(v198) == v201 + 1 )
          {
            v113 = *(_DWORD *)(v108 + 3784) + v109;
            v114 = *(_DWORD *)(v108 + 3788);
            v115 = *(_DWORD *)(v108 + 3792);
            v208 = v113;
            v209 = v110 + v114;
            v210 += v115;
          }
          ++MEMORY[0x87F7E8][539633];
          if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int *, int))(*(_DWORD *)v245 + 216))(v245, &v208, v211) )
          {
            if ( *((_DWORD *)v245 + 361)
              && !*(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v245 + 132))(v245) + 3476)
              && !*(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v245 + 132))(v245) + 3284) )
            {
              if ( *((_DWORD *)v245 + 361) )
                TechnoClass::SetFocus(v245, *((_DWORD *)v245 + 361));
              (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)v245 + 488))(v245, 2, 0);
              v116 = *(_DWORD *)v245;
              v117 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v195 + 2);
              (*(void (__thiscall **)(_BYTE *, void *, int))(v116 + 1152))(v245, v117, 1);
            }
            if ( !(unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135))
              || *(_BYTE *)(*((_DWORD *)this + 328) + 5825) )
            {
              (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)v245 + 488))(v245, 11, 0);
              LODWORD(v194) = *BuildingPlacement::FindPosition(&v224, v245);
              if ( (_DWORD)v194 == MEMORY[0x87F7E8][29708] || !*(_DWORD *)(*((_DWORD *)this + 328) + 3768) )
              {
                TechnoClass::SetFocus(v245, 0);
              }
              else
              {
                v118 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v194);
                TechnoClass::SetFocus(v245, (int)v118);
                v119 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v194);
                ((void (__stdcall *)(void *))BuildingClass::AddToProductionQueue)(v119);
              }
            }
            if ( (*(int (__thiscall **)(#377 *, int, _BYTE *))(*(_DWORD *)this + 632))(this, 2, v245) == 1 )
              (*(void (__thiscall **)(#377 *, int, _BYTE *))(*(_DWORD *)this + 632))(this, 9, v245);
            goto LABEL_99;
          }
        }
        else
        {
          v63 = *(int (__thiscall ***)(#377 *))this;
          v201 = (int)v246;
          v64 = *(_DWORD *)((int (__thiscall *)(#377 *, char *, _BYTE *))v63[309])(this, v230, v245);
          v65 = v64;
          v203 = v64;
          v66 = HIWORD(v64);
          if ( v64 == MEMORY[0x87F7E8][29708] )
            return 0;
          v67 = *(int (__thiscall ***)(#377 *))this;
          v216 = (v65 << 8) + 128;
          v217 = (v66 << 8) + 128;
          v68 = (int *)((int (__thiscall *)(#377 *, char *))v67[18])(this, v242);
          v206 = *v68;
          v69 = Math::CalcAngle((double)v68[1] - (double)v216, (double)v215 - (double)v206);
          LOWORD(v206) = Math::RoundToInt((v69 - 1.570796326794897) * -10430.06004058427);
          v215 = (unsigned __int8)((((unsigned int)v206 >> 7) + 1) >> 1);
          v70 = *(int (__thiscall ***)(#377 *))this;
          v209 = v202;
          v71 = *(_DWORD *)((int (__thiscall *)(#377 *, _DWORD *))v70[110])(this, v228);
          v72 = (_DWORD *)*((_DWORD *)this + 328);
          v205 = v71;
          v202 = (__int16)v71;
          v73 = v208;
          if ( (__int16)v208 < (__int16)v71 + BuildingTypeClass::GetFoundationWidth(v72) )
          {
            if ( (__int16)v208 < (__int16)v71 )
              v73 = v208 + 1;
          }
          else
          {
            v73 = v208 - 1;
          }
          v74 = *((_DWORD *)this + 328);
          v204 = SHIWORD(v205);
          v75 = BuildingTypeClass::GetFoundationHeight(v74, 0);
          v76 = HIWORD(v208);
          if ( SHIWORD(v208) < SHIWORD(v205) + v75 )
          {
            if ( SHIWORD(v208) < SHIWORD(v205) )
              v76 = HIWORD(v208) + 1;
          }
          else
          {
            v76 = HIWORD(v208) - 1;
          }
          v77 = (v73 << 8) + 128;
          v78 = (v76 << 8) + 128;
          v213 = 0;
          v79 = *((_DWORD *)this + 328);
          v80 = v77;
          v81 = v78;
          v211 = v77;
          v212 = v78;
          if ( *(_BYTE *)(v79 + 5860) )
          {
            if ( (__int16)v201 == v202 + 1 && SHIWORD(v201) == v204 + 2 )
            {
              v80 = v77 + *(_DWORD *)(v79 + 3784);
              v82 = *(_DWORD *)(v79 + 3792);
              v81 = v78 + *(_DWORD *)(v79 + 3788);
              v211 = v80;
              v212 = v81;
              v213 = v82;
            }
            else
            {
              v81 = v212;
              v80 = v211;
            }
          }
          if ( *(_BYTE *)(v79 + 5861) && (__int16)v201 == v202 + 2 && SHIWORD(v201) == v204 + 2 )
          {
            v83 = v81 + *(_DWORD *)(v79 + 3788);
            v80 += *(_DWORD *)(v79 + 3784);
            v207 = (_DWORD *)(v213 + *(_DWORD *)(v79 + 3792));
            v81 = v83;
            v211 = v80;
            v212 = v83;
            v213 = (int)v207;
          }
          if ( *(_BYTE *)(v79 + 5862) && (__int16)v201 == v202 + 2 && SHIWORD(v201) == v204 + 1 )
          {
            v84 = *(_DWORD *)(v79 + 3784) + v80;
            v85 = *(_DWORD *)(v79 + 3788);
            v86 = *(_DWORD *)(v79 + 3792);
            v211 = v84;
            v212 = v81 + v85;
            v213 += v86;
          }
          ++MEMORY[0x87F7E8][539633];
          if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int *, int))(*(_DWORD *)v245 + 216))(v245, &v211, v214) )
          {
            (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)v245 + 488))(v245, 2, 0);
            v87 = *(_DWORD *)v245;
            v88 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v197);
            (*(void (__thiscall **)(_BYTE *, void *, int))(v87 + 1152))(v245, v88, 1);
            if ( !(unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135)) )
            {
              (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)v245 + 488))(v245, 11, 0);
              v197 = *BuildingPlacement::FindPosition(&v227, v245);
              if ( v197 == MEMORY[0x87F7E8][29708] || !*(_DWORD *)(*((_DWORD *)this + 328) + 3768) )
              {
                TechnoClass::SetFocus(v245, 0);
              }
              else
              {
                v193 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v197);
                TechnoClass::SetFocus(v245, (int)v193);
              }
            }
            goto LABEL_99;
          }
        }
        goto LABEL_146;
      }
      if ( !*(_BYTE *)(v28 + 3278) )
      {
        TechnoClass::SetFocus(v245, *((_DWORD *)this + 134));
        if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) == 16 )
        {
          v55 = 0;
          v210 = *(_DWORD *)(*((_DWORD *)this + 135) + 120);
          v56 = v210;
          if ( v210 <= 0 )
            return 1;
          while ( 1 )
          {
            v57 = *(#377 **)(*(_DWORD *)(*((_DWORD *)this + 135) + 108) + 4 * v55);
            if ( *((_DWORD *)v57 + 328) == *((_DWORD *)this + 328) && v57 != this )
            {
              if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v57 + 388))(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 135)
                                                                                                + 108)
                                                                                    + 4 * v55)) == 5
                && !*((_DWORD *)v57 + 329) )
              {
                v58 = *((_DWORD *)this + 329);
                *((_DWORD *)v57 + 329) = v58;
                *((_DWORD *)this + 329) = 0;
                result = (*(int (__thiscall **)(#377 *, _BYTE *, _DWORD))(*(_DWORD *)v57 + 256))(
                           v57,
                           v245,
                           MEMORY[0x87F7E8][29708]);
                *((_DWORD *)v57 + 329) = 0;
                *((_DWORD *)this + 329) = v58;
                return result;
              }
              v56 = v210;
            }
            if ( ++v55 >= v56 )
              return 1;
          }
        }
        v201 = 64;
        ++MEMORY[0x87F7E8][539633];
        v59 = *(_DWORD *)v245;
        v60 = (*(int (__thiscall **)(#377 *, char *, _DWORD, int))(*(_DWORD *)this + 180))(this, v238, 0, 64);
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int))(v59 + 216))(v245, v60) )
        {
          (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v245 + 292))(v245, 0);
          v61 = *(_DWORD *)v245;
          v62 = (*(int (__thiscall **)(#377 *, char *, _DWORD))(*(_DWORD *)this + 180))(this, v239, 0);
          (*(void (__thiscall **)(_BYTE *, int))(v61 + 436))(v245, v62);
          (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v245 + 292))(v245, 1);
          (*(void (__thiscall **)(#377 *, int, _BYTE *))(*(_DWORD *)this + 632))(this, 2, v245);
          (*(void (__thiscall **)(#377 *, int, _BYTE *))(*(_DWORD *)this + 632))(this, 24, v245);
          (*(void (__thiscall **)(#377 *, int, _DWORD))(*(_DWORD *)this + 488))(this, 16, 0);
          goto LABEL_99;
        }
        goto LABEL_146;
      }
      if ( !Team::AllMembersValid((int *)this) )
        (*(void (__thiscall **)(#377 *, int, _DWORD))(*(_DWORD *)this + 488))(this, 16, 0);
      v29 = (_DWORD *)(*(int (__thiscall **)(#377 *, int *))(*(_DWORD *)this + 72))(this, &v214);
      LOWORD(v204) = *v29 / 256;
      v30 = *((_DWORD *)this + 134);
      HIWORD(v204) = v29[1] / 256;
      v206 = v204;
      if ( v30 )
      {
        v31 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v30 + 72))(v30, &v213);
        v32 = *v31 / 256;
        v33 = v31[1] / 256;
        v34 = (__int16 *)(*(int (__thiscall **)(#377 *, _DWORD *))(*(_DWORD *)this + 440))(this, v231);
        v35 = *v34;
        v205 = (__int16)v32;
        v36 = v34[1];
        v205 = (__int16)v33;
        v37 = Math::CalcAngle((double)v36 - (double)(__int16)v33, (double)(__int16)v32 - (double)v35);
        LOWORD(v205) = Math::RoundToInt((v37 - 1.570796326794897) * -10430.06004058427);
        v38 = (((v205 >> 12) + 1) >> 1) & 7;
        v39 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v204);
        if ( Cell::IsBridge(v39) == (_DWORD *)this )
        {
          v40 = (_WORD *)(4 * (v38 & 7) + 9041544);
          do
          {
            v41 = HIWORD(v204) + v40[1];
            LOWORD(v202) = *v40 + v204;
            HIWORD(v202) = v41;
            v204 = v202;
            v42 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v204);
          }
          while ( Cell::IsBridge(v42) == (_DWORD *)this );
        }
      }
      if ( *((_DWORD *)this + 134) && *((_DWORD *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v204) + 59) == 2 )
      {
        v196 = 0.0;
        v221 = 0;
        v222[0] = 0;
        CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v204);
        JUMPOUT(0x444329);
      }
      v43 = *(int (__thiscall ***)(#377 *))this;
      v217 = 0;
      v44 = (_DWORD *)((int (__thiscall *)(#377 *, int *))v43[18])(this, &v211);
      LODWORD(v196) = 0;
      LOWORD(v201) = *v44 / 256;
      v45 = v44[1];
      *(_QWORD *)&v195 = (unsigned int)&v216;
      v194 = 0x100000000LL;
      HIWORD(v201) = v45 / 256;
      v46 = *(_DWORD *)v245;
      v218 = v201;
      v47 = (*(int (__thiscall **)(_BYTE *))(v46 + 132))(v245);
      v203 = *LayerClass::Pathfinding_Find(
                MEMORY[0x87F7E8],
                (int)&v218,
                v231,
                (__int16 *)&v218,
                *(_DWORD *)(v47 + 1660),
                -1,
                0,
                0,
                1,
                1,
                0,
                0,
                0,
                1,
                (__int16 *)LODWORD(v195),
                SBYTE4(v195),
                0);
      v48 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v203);
      v49 = *(_DWORD *)v245;
      v50 = (*(int (__thiscall **)(void *, _BYTE *, int))(*(_DWORD *)v48 + 72))(v48, v240, 64);
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int))(v49 + 216))(v245, v50) )
      {
        v51 = *((_DWORD *)this + 134);
        if ( v51 )
        {
          (*(void (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)v245 + 1152))(v245, v51, 1);
          (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)v245 + 488))(v245, 2, 0);
        }
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v245 + 292))(v245, 0);
        v52 = *(_DWORD *)v245;
        v53 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v196);
        Coords = CellClass::GetCoords(v53, v241);
        (*(void (__thiscall **)(_BYTE *, int *))(v52 + 436))(v245, Coords);
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v245 + 292))(v245, 1);
        return 2;
      }
      return 0;
    case 1:
      HouseClass::UpdateBuildState(*((_DWORD *)this + 135), 2);
      v5 = *((_DWORD *)this + 135);
      v201 = (int)v245;
      *(_DWORD *)(v5 + 22104) = -1;
      if ( Array::ContainsValue((int *)this, v201)
        || HouseClass::IonSensitivesShouldBeOffline() && !*(_BYTE *)(*((_DWORD *)v3 + 433) + 3597) )
      {
        ObjectClass::SetAnim(v3, 0);
        ++MEMORY[0x87F7E8][539633];
        if ( HouseClass::IonSensitivesShouldBeOffline() )
        {
          PlacementCells_Alt = MapClass::FindPlacementCellsAlt(v3, &v232, (int)this);
          v16 = *(_DWORD *)v3;
          v210 = *PlacementCells_Alt;
          v228[1] = 0;
          v227 = ((__int16)v210 << 8) + 128;
          v228[0] = (SHIWORD(v210) << 8) + 128;
          v17 = ((int (__thiscall *)(char *))AbstractClass::GetField9)(v3);
          if ( (*(unsigned __int8 (__thiscall **)(char *, int *, int))(v16 + 216))(v3, &v227, v17) )
          {
LABEL_99:
            --MEMORY[0x87F7E8][539633];
            return 2;
          }
        }
        else
        {
          v18 = *(_DWORD *)v3;
          v19 = ((int (__thiscall *)(char *))AbstractClass::GetField9)(v3);
          v20 = (*(int (__thiscall **)(#377 *, _BYTE *, char *, int))(*(_DWORD *)this + 168))(this, v240, v3, v19);
          if ( (*(unsigned __int8 (__thiscall **)(char *, int))(v18 + 216))(v3, v20) )
          {
            (*(void (__thiscall **)(#377 *, int, char *))(*(_DWORD *)this + 632))(this, 2, v3);
            (*(void (__thiscall **)(#377 *, int, char *))(*(_DWORD *)this + 632))(this, 24, v3);
            v21 = *(_DWORD *)v3;
            v22 = (*(int (__thiscall **)(#377 *, int *, char *))(*(_DWORD *)this + 168))(this, v241, v3);
            (*(void (__thiscall **)(char *, int))(v21 + 436))(v3, v22);
            *((_DWORD *)v3 + 435) = this;
            v23 = *((_DWORD *)this + 134);
            if ( v23 && !*(_BYTE *)(*((_DWORD *)v3 + 433) + 3597) )
            {
              (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v3 + 1152))(v3, v23, 1);
              (*(void (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v3 + 488))(v3, 2, 0);
            }
            goto LABEL_99;
          }
        }
      }
      else
      {
        if ( *(_BYTE *)(*((_DWORD *)v3 + 433) + 3597) )
          return 0;
        LOWORD(v213) = MEMORY[0x87F7E8][64];
        HIWORD(v213) = MEMORY[0x87F7E8][64];
        HIWORD(v207) = MEMORY[0x87F7E8][61];
        LOWORD(v219) = MEMORY[0x87F7E8][63];
        HIWORD(v219) = -LOWORD(MEMORY[0x87F7E8][63]);
        LOWORD(v210) = LOWORD(MEMORY[0x87F7E8][63]) + 1;
        HIWORD(v210) = LOWORD(MEMORY[0x87F7E8][61]) - LOWORD(MEMORY[0x87F7E8][63]);
        LOWORD(v207) = LOWORD(MEMORY[0x87F7E8][64]) + LOWORD(MEMORY[0x87F7E8][63]) + 1;
        v6 = LOWORD(MEMORY[0x87F7E8][61]) - LOWORD(MEMORY[0x87F7E8][63]) + LOWORD(MEMORY[0x87F7E8][64]);
        v7 = *(int (__thiscall ***)(#377 *))this;
        HIWORD(v207) = v6;
        v8 = (_DWORD *)((int (__thiscall *)(#377 *, char *))v7[18])(this, v237);
        LOWORD(v218) = *v8 / 256;
        HIWORD(v218) = v8[1] / 256;
        if ( (__int16)(v218 - v206) - (__int16)(HIWORD(v218) - HIWORD(v206)) <= MEMORY[0x87F7E8][65] )
        {
          v200 = MEMORY[0x87F7E8][66];
          LOWORD(v206) = v206 - 1;
          HIWORD(v206) = v6;
          v199 = 0;
          v205 = v206;
          v9 = (_DWORD *)(MEMORY[0x87F7E8][536210] + 536);
        }
        else
        {
          LOWORD(v209) = MEMORY[0x87F7E8][65];
          HIWORD(v218) = v6;
          HIWORD(v209) = -LOWORD(MEMORY[0x87F7E8][65]);
          LOWORD(v218) = v206 - 1;
          LOWORD(v206) = LOWORD(MEMORY[0x87F7E8][65]) + v206 - 1;
          HIWORD(v206) = v6 - LOWORD(MEMORY[0x87F7E8][65]);
          v205 = v206;
          v9 = (_DWORD *)(MEMORY[0x87F7E8][536210] + 536);
          v200 = MEMORY[0x87F7E8][66];
          v199 = 0;
        }
        v10 = Random::Range(v9, (int)v199, v200);
        LOWORD(v205) = v10 + v205;
        HIWORD(v205) += v10;
        v200 = 0;
        v225[0] = ((__int16)v205 << 8) + 128;
        ++MEMORY[0x87F7E8][539633];
        v11 = *(_DWORD *)v3;
        v225[1] = (SHIWORD(v205) << 8) + 128;
        v225[2] = 0;
        if ( (*(unsigned __int8 (__thiscall **)(char *, _DWORD *, _DWORD))(v11 + 216))(v3, v225, 0) )
        {
          v12 = *((_DWORD *)this + 134);
          if ( v12 )
          {
            (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v3 + 1152))(v3, v12, 1);
            (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 496))(v3, 2);
          }
          else
          {
            v204 = *MapClass::FindPlacementCellsAlt(v3, &v229, (int)this);
            if ( v204 == MEMORY[0x87F7E8][29708] )
            {
              (*(void (__thiscall **)(char *, _DWORD, int))(*(_DWORD *)v3 + 1152))(v3, 0, 1);
              (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 496))(v3, 2);
            }
            else
            {
              v13 = *(_DWORD *)v3;
              v14 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v204);
              (*(void (__thiscall **)(char *, void *, int))(v13 + 1152))(v3, v14, 1);
              (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 496))(v3, 2);
            }
          }
          goto LABEL_99;
        }
      }
LABEL_146:
      --MEMORY[0x87F7E8][539633];
      result = 0;
      break;
    case 2:
      if ( (unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135)) )
        return 0;
      HouseClass::UpdateBuildState(*((_DWORD *)this + 135), 6);
      *(_DWORD *)(*((_DWORD *)this + 135) + 22092) = -1;
      v123 = BuildingQueue::AllocSlot(
               (_DWORD *)(*((_DWORD *)this + 135) + 22272),
               *(_DWORD *)(*((_DWORD *)v245 + 328) + 3576));
      v124 = *((_DWORD *)v245 + 328);
      v207 = (_DWORD *)v123;
      v213 = 0;
      v214 = 0;
      v215 = 0;
      v209 = v124;
      if ( v123 && ((v125 = (__int16 *)(v123 + 4), *(_WORD *)(v123 + 4)) || *(_WORD *)(v123 + 6)) )
      {
        if ( *(_BYTE *)(v209 + 3720)
          || (unsigned __int8)((_DWORD (__stdcall *)(int, __int16 *))BuildingTypeClass::ProcessData)(v209, v125) )
        {
          v134 = v125[1];
          v135 = *v125;
          v133 = v207;
          v132 = (v135 << 8) + 128;
          v131 = (v134 << 8) + 128;
          v213 = v132;
          v214 = v131;
          v215 = 0;
        }
        else
        {
          v126 = HouseClass::ScanBuildLocation(
                   *((_DWORD *)this + 135),
                   &v235,
                   v209,
                   (int (__fastcall *)(int, int *, int, int))globalHelper_005F80,
                   -1);
          v127 = *(__int16 *)v126;
          v128 = *((__int16 *)v126 + 1);
          v215 = 0;
          v129 = (v127 << 8) + 128;
          v130 = (v128 << 8) + 128;
          v213 = v129;
          v214 = v130;
          if ( v129 == MEMORY[0x87F7E8][29720] && v130 == MEMORY[0x87F7E8][29721] && !MEMORY[0x87F7E8][29722] )
            return 0;
          LOWORD(v210) = v129 / 256;
          HIWORD(v210) = v130 / 256;
          *(_DWORD *)v125 = v210;
          v131 = v214;
          v132 = v213;
          v133 = v207;
        }
      }
      else
      {
        if ( *(_BYTE *)(v209 + 3720) )
        {
          v138 = *(_DWORD *)((_DWORD *(__stdcall *)(char *, int))HouseClass::FindBestProductionBuilding)(v236, v209);
          v219 = v138;
          if ( v138 == MEMORY[0x87F7E8][29708] )
          {
            v131 = v214;
            v132 = v213;
          }
          else
          {
            v139 = (SHIWORD(v138) << 8) + 128;
            v132 = ((__int16)v138 << 8) + 128;
            v131 = v139;
            v213 = v132;
            v214 = v139;
            v215 = 0;
          }
        }
        else
        {
          v136 = HouseClass::ScanBuildLocation(
                   *((_DWORD *)this + 135),
                   &v234,
                   v209,
                   (int (__fastcall *)(int, int *, int, int))globalHelper_005F80,
                   -1);
          v137 = (*((__int16 *)v136 + 1) << 8) + 128;
          v132 = (*(__int16 *)v136 << 8) + 128;
          v131 = v137;
          v213 = v132;
          v214 = v137;
          v215 = 0;
        }
        v133 = v207;
        if ( v207
          && (v132 != MEMORY[0x87F7E8][29720] || v131 != MEMORY[0x87F7E8][29721] || v215 != MEMORY[0x87F7E8][29722]) )
        {
          LOWORD(v210) = v132 / 256;
          HIWORD(v210) = v131 / 256;
          v207[1] = v210;
          v131 = v214;
          v132 = v213;
        }
      }
      if ( v132 == MEMORY[0x87F7E8][29720] && v131 == MEMORY[0x87F7E8][29721] && v215 == MEMORY[0x87F7E8][29722] )
      {
        if ( *(_BYTE *)(v209 + 3720) )
        {
          if ( (_DWORD *)BuildingQueue::AllocSlot((_DWORD *)(*((_DWORD *)this + 135) + 22272), -1) == v133 )
          {
            FreeSlot = BuildingQueue::FindFreeSlot((_DWORD *)(*((_DWORD *)this + 135) + 22272), -1);
            v185 = *((_DWORD *)this + 135) + 22276;
            v186 = *(_DWORD *)(v185 + 16);
            if ( FreeSlot < v186 )
            {
              v187 = v186 - 1;
              v188 = FreeSlot;
              *(_DWORD *)(v185 + 16) = v187;
              if ( FreeSlot < v187 )
              {
                v189 = 16 * FreeSlot;
                do
                {
                  v190 = *(_DWORD *)(v185 + 4);
                  v191 = (_DWORD *)(v190 + v189 + 16);
                  v192 = (_DWORD *)(v189 + v190);
                  ++v188;
                  v189 += 16;
                  *v192 = *v191;
                  v192[1] = v191[1];
                  v192[2] = v191[2];
                  v192[3] = v191[3];
                }
                while ( v188 < *(_DWORD *)(v185 + 16) );
              }
            }
          }
        }
        return 0;
      }
      LOWORD(v210) = v132 / 256;
      HIWORD(v210) = v131 / 256;
      v140 = (#375 *)*((_DWORD *)this + 135);
      v223 = v210;
      v141 = *(_DWORD *)v245;
      v201 = (int)v140;
      v200 = (int)&v223;
      v142 = (void *)(*(int (__thiscall **)(_BYTE *))(v141 + 136))(v245);
      v143 = BuildingClass::ApplyFoundationDamage(v142, &v223, (#375 *)v201);
      if ( v143 )
      {
        v144 = v143 - 1;
        if ( !v144 )
        {
          v145 = HouseClass::FailedToPlaceNode((int)v133);
          if ( MEMORY[0x87F7E8][536212] )
          {
            if ( v145 > *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3656) )
            {
              if ( v133 )
              {
                v146 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)(*((_DWORD *)this + 135) + 22276) + 20))(
                         *((_DWORD *)this + 135) + 22276,
                         v133);
                v147 = *((_DWORD *)this + 135) + 22276;
                v148 = *(_DWORD *)(v147 + 16);
                if ( v146 < v148 )
                {
                  v149 = v148 - 1;
                  v150 = v146;
                  *(_DWORD *)(v147 + 16) = v149;
                  if ( v146 < v149 )
                  {
                    v151 = 16 * v146;
                    do
                    {
                      v152 = *(_DWORD *)(v147 + 4);
                      v153 = (_DWORD *)(v152 + v151 + 16);
                      v154 = (_DWORD *)(v151 + v152);
                      ++v150;
                      v151 += 16;
                      *v154 = *v153;
                      v154[1] = v153[1];
                      v154[2] = v153[2];
                      v154[3] = v153[3];
                    }
                    while ( v150 < *(_DWORD *)(v147 + 16) );
                  }
                }
              }
            }
          }
          return 1;
        }
        if ( v144 != 1 )
          return 0;
      }
      else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int *, _DWORD))(*(_DWORD *)v245 + 216))(v245, &v213, 0) )
      {
        if ( *((_DWORD *)v245 + 182) )
          ((void (*)(void))BuildingClass::RefreshOccupierCache)();
        if ( v133 )
        {
          v155 = *((_DWORD *)this + 135);
          if ( *(_DWORD *)(*((_DWORD *)v245 + 328) + 3576) == *(_DWORD *)(v155 + 22092) )
            *(_DWORD *)(v155 + 22092) = -1;
        }
        if ( *((_DWORD *)v245 + 43) == -1 && *((_DWORD *)v245 + 45) == 18 )
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v245 + 492))(v245);
        if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v245 + 44))(v245) == 6 )
        {
          v156 = *((_DWORD *)v245 + 328);
          if ( *(_BYTE *)(v156 + 5824) )
          {
            v199 = (int *)*((_DWORD *)v245 + 328);
            LOWORD(v208) = v211 / 256;
            HIWORD(v208) = v212 / 256;
            v198 = *((_DWORD *)this + 135);
            v222[0] = v208;
            globalHelper_088570((int)v222, v198, (int)v199);
          }
          else
          {
            v157 = *(_DWORD *)(v156 + 3668);
            if ( v157 && *(_BYTE *)(v157 + 680) )
            {
              v199 = (int *)*((_DWORD *)v245 + 328);
              LOWORD(v208) = v211 / 256;
              HIWORD(v208) = v212 / 256;
              v198 = *((_DWORD *)this + 135);
              v221 = v208;
              ScanBuildingPlacementCells(&v221, v198, v199);
            }
          }
        }
        if ( *((_DWORD *)v245 + 328) == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 2172) )
        {
          v158 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)(*((_DWORD *)this + 135) + 22276) + 20))(
                   *((_DWORD *)this + 135) + 22276,
                   v133);
          v159 = *((_DWORD *)this + 135);
          v160 = v158 + 1;
          v161 = *(_DWORD *)(v159 + 22292);
          if ( v158 + 1 < v161 )
          {
            v162 = *(_DWORD *)(v159 + 22280);
            for ( i = (int *)(v162 + 16 * v160);
                  *i < 0 || !*(_BYTE *)(*(_DWORD *)(MEMORY[0x87F7E8][528673] + 4 * *i) + 5894);
                  i += 4 )
            {
              if ( ++v160 >= v161 )
                return 2;
            }
            v164 = *((_DWORD *)v245 + 39);
            v165 = *((_DWORD *)v245 + 40);
            v215 = *((_DWORD *)v245 + 41);
            LOWORD(v207) = v164 / 256;
            HIWORD(v207) = v165 / 256;
            *(_DWORD *)(16 * v160 + v162 + 4) = v207;
          }
        }
        return 2;
      }
      if ( !v133 )
        return 0;
      v166 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)(*((_DWORD *)this + 135) + 22276) + 20))(
               *((_DWORD *)this + 135) + 22276,
               v133);
      v167 = *(_DWORD *)(MEMORY[0x87F7E8][528673] + 4 * *v133);
      if ( !*(_BYTE *)(v167 + 5489) && !*(_BYTE *)(v167 + 5815) )
      {
        v168 = *((_DWORD *)this + 135);
        v169 = 0;
        v170 = v212 / 256;
        v171 = v213 / 256;
        if ( *(int *)(v168 + 22292) <= 0 )
          return 0;
        v172 = 0;
        do
        {
          v173 = *(_DWORD *)(v168 + 22280);
          v174 = *(_WORD *)(v173 + v172 + 4) == (unsigned __int16)v170;
          v175 = v173 + v172 + 4;
          if ( v174 && *(_WORD *)(v175 + 2) == (_WORD)v171 )
          {
            v209 = 0;
            *(_DWORD *)v175 = 0;
          }
          v168 = *((_DWORD *)this + 135);
          ++v169;
          v172 += 16;
        }
        while ( v169 < *(_DWORD *)(v168 + 22292) );
        return 0;
      }
      v176 = *((_DWORD *)this + 135) + 22276;
      v177 = *(_DWORD *)(v176 + 16);
      if ( v166 < v177 )
      {
        v178 = v177 - 1;
        v179 = v166;
        *(_DWORD *)(v176 + 16) = v178;
        if ( v166 < v178 )
        {
          v180 = 16 * v166;
          do
          {
            v181 = *(_DWORD *)(v176 + 4);
            v182 = (_DWORD *)(v181 + v180 + 16);
            v183 = (_DWORD *)(v180 + v181);
            ++v179;
            v180 += 16;
            *v183 = *v182;
            v183[1] = v182[1];
            v183[2] = v182[2];
            v183[3] = v182[3];
          }
          while ( v179 < *(_DWORD *)(v176 + 16) );
          return 0;
        }
      }
      return 0;
    case 3:
      return 0;
  }
  return result;
}

/* ASM:
sub     esp, 130h
push    ebx
push    ebp
push    esi
push    edi
mov     edi, [esp+140h+arg_0]
xor     ebx, ebx
cmp     edi, ebx
mov     esi, ecx
jz      loc_445696      ; jumptable 00443CAD case 3
mov     eax, [edi]
mov     ecx, edi
mov     byte ptr [edi+3D5h], 1
xor     ebp, ebp
call    dword ptr [eax+2Ch]
cmp     eax, 2
jnz     short loc_443C94
mov     ebp, edi

loc_443C94:                             ; CODE XREF: BuildingClass__UpdateConstruction+30↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
dec     eax
cmp     eax, 0Eh
ja      loc_445696      ; jumptable 00443CAD case 3
xor     ecx, ecx
mov     cl, [eax+4456B8h]
jmp     ds:jpt_443CAD[ecx*4] ; switch 4 cases
; ---------------------------------------------------------------------------

loc_443CB4:                             ; CODE XREF: BuildingClass__UpdateConstruction+4D↑j
; DATA XREF: .text:jpt_443CAD↓o
mov     ecx, [esi+21Ch] ; jumptable 00443CAD case 1
push    2
call    HouseClass__UpdateBuildState
mov     edx, [esi+21Ch]
push    edi
mov     ecx, esi
mov     dword ptr [edx+5658h], 0FFFFFFFFh
call    Array__ContainsValue
test    al, al
jnz     loc_443F54
mov     ecx, [esi+21Ch]
call    HouseClass__IonSensitivesShouldBeOffline
test    al, al
jz      short loc_443D04
mov     eax, [ebp+6C4h]
mov     cl, [eax+0E0Dh]
test    cl, cl
jz      loc_443F54

loc_443D04:                             ; CODE XREF: BuildingClass__UpdateConstruction+8E↑j
mov     ecx, [ebp+6C4h]
mov     al, [ecx+0E0Dh]
test    al, al
jnz     loc_445696      ; jumptable 00443CAD case 3
mov     eax, ds:87F8E8h
mov     dx, ds:87F8DCh
mov     word ptr [esp+140h+var_114], ax
mov     word ptr [esp+140h+var_114+2], ax
mov     eax, ds:87F8E4h
mov     word ptr [esp+140h+var_12C+2], dx
mov     ecx, [esp+140h+var_12C+2]
mov     word ptr [esp+140h+var_FC], ax
neg     eax
mov     word ptr [esp+140h+var_FC+2], ax
mov     eax, [esp+140h+var_FC]
mov     edx, [esp+140h+var_FC+2]
inc     eax
add     ecx, edx
mov     word ptr [esp+140h+var_120], ax
mov     eax, [esp+140h+var_114]
mov     word ptr [esp+140h+var_120+2], cx
mov     ecx, [esp+140h+var_120]
mov     edx, [esp+140h+var_120+2]
add     ecx, eax
mov     eax, [esp+140h+var_114+2]
mov     word ptr [esp+140h+var_12C], cx
mov     ecx, esi
lea     edi, [edx+eax]
mov     edx, [esi]
lea     eax, [esp+140h+var_78]
mov     word ptr [esp+140h+var_12C+2], di
push    eax
call    dword ptr [edx+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+144h+var_100], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
mov     edx, [esp+144h+var_130]
sar     eax, 8
mov     word ptr [esp+144h+var_100+2], ax
mov     ecx, [esp+144h+var_100+2]
mov     eax, [esp+144h+var_100]
sub     ecx, [esp+144h+var_130+2]
sub     eax, edx
movsx   eax, ax
movsx   ecx, cx
sub     eax, ecx
mov     ecx, eax
mov     eax, ds:87F8ECh
cmp     ecx, eax
jle     short loc_443E2B
mov     word ptr [esp+144h+var_124], ax
mov     word ptr [esp+144h+var_100+2], di
mov     ecx, [esp+144h+var_100+2]
neg     eax
dec     edx
mov     word ptr [esp+144h+var_124+2], ax
mov     word ptr [esp+144h+var_100], dx
mov     edx, [esp+144h+var_124]
mov     eax, [esp+144h+var_100]
add     eax, edx
mov     edx, [esp+144h+var_124+2]
add     ecx, edx
mov     word ptr [esp+144h+var_130], ax
mov     word ptr [esp+144h+var_130+2], cx
mov     eax, [esp+144h+var_130]
mov     ecx, ds:0A8B230h
mov     [esp+144h+var_134], eax
mov     eax, ds:87F8F0h
add     ecx, 218h
push    eax
push    ebx
jmp     short loc_443E50
; ---------------------------------------------------------------------------

loc_443E2B:                             ; CODE XREF: BuildingClass__UpdateConstruction+177↑j
mov     eax, ds:87F8F0h
dec     edx
push    eax
mov     eax, ds:0A8B230h
mov     word ptr [esp+148h+var_130], dx
mov     word ptr [esp+148h+var_130+2], di
mov     edx, [esp+148h+var_130]
push    ebx
mov     [esp+14Ch+var_134], edx
lea     ecx, [eax+218h]

loc_443E50:                             ; CODE XREF: BuildingClass__UpdateConstruction+1C9↑j
call    Random__Range
add     word ptr [esp+144h+var_134], ax
add     word ptr [esp+144h+var_134+2], ax
movsx   ecx, word ptr [esp+144h+var_134]
movsx   edx, word ptr [esp+144h+var_134+2]
mov     eax, ds:0A8E7ACh
push    ebx
shl     ecx, 8
add     ecx, 80h
inc     eax
mov     [esp+148h+var_D4], ecx
lea     ecx, [esp+148h+var_D4]
shl     edx, 8
mov     ds:0A8E7ACh, eax
mov     eax, [ebp+0]
add     edx, 80h
push    ecx
mov     ecx, ebp
mov     [esp+14Ch+var_D0], edx
mov     [esp+14Ch+var_CC], ebx
call    dword ptr [eax+0D8h]
test    al, al
jz      loc_444EDE
mov     eax, [esi+218h]
cmp     eax, ebx
jz      short loc_443ED8
mov     edx, [ebp+0]
push    1
push    eax
mov     ecx, ebp
call    dword ptr [edx+480h]
mov     edx, [ebp+0]
push    2
mov     ecx, ebp
call    dword ptr [edx+1F0h]
jmp     loc_444971
; ---------------------------------------------------------------------------

loc_443ED8:                             ; CODE XREF: BuildingClass__UpdateConstruction+256↑j
lea     eax, [esp+14Ch+var_AC]
push    esi
push    eax
mov     ecx, ebp
call    MapClass__FindPlacementCellsAlt
mov     eax, [eax]
cmp     ax, ds:89C818h
mov     [esp+14Ch+var_138], eax
jnz     short loc_443F05
mov     cx, word ptr [esp+14Ch+var_138+2]
cmp     cx, ds:89C81Ah
jz      short loc_443F34

loc_443F05:                             ; CODE XREF: BuildingClass__UpdateConstruction+295↑j
mov     esi, [ebp+0]
lea     edx, [esp+14Ch+var_138]
push    1
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, ebp
call    dword ptr [esi+480h]
mov     edx, [ebp+0]
push    2
mov     ecx, ebp
call    dword ptr [edx+1F0h]
jmp     loc_444971
; ---------------------------------------------------------------------------

loc_443F34:                             ; CODE XREF: BuildingClass__UpdateConstruction+2A3↑j
mov     eax, [ebp+0]
push    1
push    ebx
mov     ecx, ebp
call    dword ptr [eax+480h]
mov     edx, [ebp+0]
push    2
mov     ecx, ebp
call    dword ptr [edx+1F0h]
jmp     loc_444971
; ---------------------------------------------------------------------------

loc_443F54:                             ; CODE XREF: BuildingClass__UpdateConstruction+7B↑j
; BuildingClass__UpdateConstruction+9E↑j
push    ebx
mov     ecx, ebp
call    ObjectClass__SetAnim
mov     edx, ds:0A8E7ACh
inc     edx
mov     ds:0A8E7ACh, edx
mov     ecx, [esi+21Ch]
call    HouseClass__IonSensitivesShouldBeOffline
test    al, al
jz      short loc_443FE5
lea     eax, [esp+140h+var_9C]
push    esi
push    eax
mov     ecx, ebp
call    MapClass__FindPlacementCellsAlt
mov     eax, [eax]
mov     esi, [ebp+0]
movsx   ecx, ax
mov     [esp+140h+var_120], eax
mov     [esp+140h+var_B0], ebx
movsx   edx, word ptr [esp+140h+var_120+2]
shl     ecx, 8
add     ecx, 80h
shl     edx, 8
mov     [esp+140h+var_B8], ecx
add     edx, 80h
mov     ecx, ebp
mov     [esp+140h+var_B4], edx
call    AbstractClass__GetField9
push    eax
lea     eax, [esp+144h+var_B8]
push    eax
mov     ecx, ebp
call    dword ptr [esi+0D8h]
test    al, al
jz      loc_444EDE
jmp     loc_444971
; ---------------------------------------------------------------------------

loc_443FE5:                             ; CODE XREF: BuildingClass__UpdateConstruction+316↑j
mov     edi, [ebp+0]
mov     ecx, ebp
call    AbstractClass__GetField9
mov     edx, [esi]
push    eax
lea     eax, [esp+144h+var_60]
push    ebp
push    eax
mov     ecx, esi
call    dword ptr [edx+0A8h]
push    eax
mov     ecx, ebp
call    dword ptr [edi+0D8h]
test    al, al
jz      loc_444EDE
mov     edx, [esi]
push    ebp
push    2
mov     ecx, esi
call    dword ptr [edx+278h]
mov     eax, [esi]
push    ebp
push    18h
mov     ecx, esi
call    dword ptr [eax+278h]
mov     edx, [esi]
mov     edi, [ebp+0]
lea     eax, [esp+160h+var_50]
push    ebp
push    eax
mov     ecx, esi
call    dword ptr [edx+0A8h]
push    eax
mov     ecx, ebp
call    dword ptr [edi+1B4h]
mov     [ebp+6CCh], esi
mov     esi, [esi+218h]
cmp     esi, ebx
jz      loc_444971
mov     ecx, [ebp+6C4h]
mov     al, [ecx+0E0Dh]
test    al, al
jnz     loc_444971
mov     edx, [ebp+0]
push    1
push    esi
mov     ecx, ebp
call    dword ptr [edx+480h]
mov     eax, [ebp+0]
push    ebx
push    2
mov     ecx, ebp
call    dword ptr [eax+1E8h]
jmp     loc_444971
; ---------------------------------------------------------------------------

loc_444096:                             ; CODE XREF: BuildingClass__UpdateConstruction+4D↑j
; DATA XREF: .text:jpt_443CAD↓o
mov     eax, [esi+520h] ; jumptable 00443CAD case 0
mov     cl, [eax+16C1h]
test    cl, cl
jnz     short loc_4440D7
mov     cl, [eax+16C2h]
test    cl, cl
jnz     short loc_4440D7
mov     cl, [eax+16BDh]
test    cl, cl
jnz     short loc_4440D7
mov     ecx, esi
call    RadioClass__HasFreeLink
test    al, al
jnz     short loc_4440D7
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 130h
retn    8
; ---------------------------------------------------------------------------

loc_4440D7:                             ; CODE XREF: BuildingClass__UpdateConstruction+444↑j
; BuildingClass__UpdateConstruction+44E↑j ...
mov     eax, [esi+520h]
or      ebp, 0FFFFFFFFh
mov     cl, [eax+16C1h]
test    cl, cl
jnz     short loc_444137
mov     cl, [eax+16C2h]
test    cl, cl
jnz     short loc_444137
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
mov     ecx, [esi+21Ch]
push    eax
call    HouseClass__UpdateBuildState
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
cmp     eax, 1
jnz     short loc_44411F
mov     ecx, [esi+21Ch]
mov     [ecx+5650h], ebp

loc_44411F:                             ; CODE XREF: BuildingClass__UpdateConstruction+4B1↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 0Fh
jnz     short loc_444137
mov     eax, [esi+21Ch]
mov     [eax+5654h], ebp

loc_444137:                             ; CODE XREF: BuildingClass__UpdateConstruction+488↑j
; BuildingClass__UpdateConstruction+492↑j ...
mov     eax, [esi+520h]
mov     cl, [eax+16BBh]
test    cl, cl
jnz     loc_444DE4

loc_44414B:                             ; DATA XREF: .data:off_84AB9C↓o
mov     cl, [eax+16BCh]
test    cl, cl
jnz     loc_444DE4
mov     cl, [eax+16BDh]
test    cl, cl
jz      loc_4445FB
mov     cl, [eax+0CCEh]
test    cl, cl
jz      loc_444492
mov     ecx, esi
call    Team__AllMembersValid
test    al, al
jnz     short loc_44418D
mov     edx, [esi]
push    ebx
push    10h
mov     ecx, esi
call    dword ptr [edx+1E8h]

loc_44418D:                             ; CODE XREF: BuildingClass__UpdateConstruction+51E↑j
mov     eax, [esi]
lea     ecx, [esp+148h+var_110]
push    ecx
mov     ecx, esi
call    dword ptr [eax+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+14Ch+var_138], ax
mov     eax, [ecx+4]
cdq
mov     ecx, [esi+218h]
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+14Ch+var_138+2], ax
mov     edx, [esp+14Ch+var_138]
cmp     ecx, ebx
mov     [esp+14Ch+var_130], edx
jz      loc_4442E5
mov     eax, [ecx]
lea     edx, [esp+14Ch+var_114]
push    edx
call    dword ptr [eax+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
mov     ebp, eax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
lea     ecx, [esp+150h+var_A4]
add     eax, edx
push    ecx
mov     ebx, eax
mov     eax, [esi]
mov     ecx, esi
sar     ebp, 8
sar     ebx, 8
call    dword ptr [eax+1B8h]
mov     cx, [eax]
sub     esp, 8
movsx   edx, bp
movsx   ecx, cx
mov     [esp+15Ch+var_134], edx
sub     esp, 8
fild    [esp+164h+var_134]
movsx   edx, word ptr [eax+2]
mov     [esp+164h+var_134], ecx
fild    [esp+164h+var_134]
movsx   eax, bx
fsubp   st(1), st
mov     [esp+164h+var_134], edx
fstp    [esp+164h+var_15C] ; double
fild    [esp+164h+var_134]
mov     [esp+164h+var_134], eax
fild    [esp+164h+var_134]
fsubp   st(1), st
fstp    [esp+164h+var_164] ; double
call    Math__CalcAngle
fsub    ds:dbl_7E2820
add     esp, 10h
fmul    ds:dbl_7E2818
call    Math__RoundToInt
mov     word ptr [esp+154h+var_134], ax
mov     ebp, [esp+154h+var_134]
shr     ebp, 0Ch
inc     ebp
lea     ecx, [esp+154h+var_138]
shr     ebp, 1
push    ecx
mov     ecx, 87F7E8h
and     ebp, 7
call    CellCoord__To_CellObj
mov     ecx, eax
call    Cell__IsBridge
cmp     eax, esi
jnz     short loc_4442E5
and     ebp, 7
lea     ebp, ds:89F688h[ebp*4]

loc_4442A7:                             ; CODE XREF: BuildingClass__UpdateConstruction+683↓j
mov     dx, word ptr [esp+154h+var_138]
mov     ax, [ebp+2]
add     dx, [ebp+0]
add     ax, word ptr [esp+154h+var_138+2]
mov     word ptr [esp+154h+var_140], dx
mov     word ptr [esp+154h+var_140+2], ax
mov     ecx, [esp+154h+var_140]
lea     edx, [esp+154h+var_138]
mov     [esp+154h+var_138], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, eax
call    Cell__IsBridge
cmp     eax, esi
jz      short loc_4442A7

loc_4442E5:                             ; CODE XREF: BuildingClass__UpdateConstruction+572↑j
; BuildingClass__UpdateConstruction+63B↑j
mov     eax, [esi+218h]
xor     ebx, ebx
cmp     eax, ebx
jz      short loc_44434B
lea     eax, [esp+154h+var_138]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
cmp     dword ptr [eax+0ECh], 2
jnz     short loc_44434B
push    ebx
lea     ecx, [esp+158h+var_EC]
push    ebx
lea     edx, [esp+15Ch+var_138]
push    ecx
push    edx
mov     ecx, 87F7E8h
mov     [esp+164h+var_EC], ebx
mov     [esp+164h+var_E8], ebx
call    CellCoord__To_CellObj
mov     ecx, eax
; ---------------------------------------------------------------------------
db 0E8h
db 0A2h
db  80h
db 3
; ---------------------------------------------------------------------------

loc_44432D:                             ; DATA XREF: .data:SubStr↓o
add     [ebp-72E68A40h], al
inc     esp
and     al, 1Ch
push    1
push    eax
mov     ecx, 87F7E8h
call    LayerClass__IsWithinUsableArea
test    al, al
jnz     loc_4443E7

loc_44434B:                             ; CODE XREF: BuildingClass__UpdateConstruction+68F↑j
; BuildingClass__UpdateConstruction+6A7↑j
mov     edx, [esi]
xor     eax, eax
mov     word ptr [esp+154h+var_104], ax
mov     word ptr [esp+154h+var_104+2], ax
lea     eax, [esp+154h+var_11C]
mov     ebx, 1
push    eax
mov     ecx, esi
mov     ebp, ebx
call    dword ptr [edx+48h]
mov     ecx, eax
push    0
push    0
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+160h+var_144], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+160h+var_108]
push    edx
push    ebx
push    0
push    0
sar     eax, 8
push    0
mov     word ptr [esp+174h+var_144+2], ax
mov     ecx, [esp+174h+var_144]
mov     eax, [edi]
push    ebp
push    ebx
push    0
mov     [esp+180h+var_100], ecx
push    0
push    0FFFFFFFFh
mov     ecx, edi
call    dword ptr [eax+84h]
mov     ecx, [eax+67Ch]
lea     edx, [esp+188h+var_100]
push    ecx
lea     eax, [esp+18Ch+var_A4]
push    edx
push    eax
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     ecx, [eax]
mov     [esp+158h+var_13C], ecx

loc_4443E7:                             ; CODE XREF: BuildingClass__UpdateConstruction+6E5↑j
lea     edx, [esp+158h+var_13C]
mov     ecx, 87F7E8h
push    edx
call    CellCoord__To_CellObj
mov     edx, [eax]
mov     ebx, [edi]
lea     ecx, [esp+158h+var_60]
push    40h ; '@'
push    ecx
mov     ecx, eax
call    dword ptr [edx+48h]
push    eax
mov     ecx, edi
call    dword ptr [ebx+0D8h]
test    al, al
jz      loc_445696      ; jumptable 00443CAD case 3
mov     esi, [esi+218h]
test    esi, esi
jz      short loc_44443F
mov     edx, [edi]
push    1
push    esi
mov     ecx, edi
call    dword ptr [edx+480h]
mov     eax, [edi]
push    0
push    2
mov     ecx, edi
call    dword ptr [eax+1E8h]

loc_44443F:                             ; CODE XREF: BuildingClass__UpdateConstruction+7C2↑j
mov     edx, [edi]
push    0
mov     ecx, edi
call    dword ptr [edx+124h]
mov     esi, [edi]
lea     eax, [esp+178h+var_50]
lea     ecx, [esp+178h+var_15C]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, eax
call    CellClass__GetCoords
push    eax
mov     ecx, edi
call    dword ptr [esi+1B4h]
mov     edx, [edi]
push    1
mov     ecx, edi
call    dword ptr [edx+124h]
pop     edi
pop     esi
pop     ebp
mov     eax, 2
pop     ebx
add     esp, 130h
retn    8
; ---------------------------------------------------------------------------

loc_444492:                             ; CODE XREF: BuildingClass__UpdateConstruction+50F↑j
mov     eax, [esi+218h]
mov     ecx, edi
push    eax
call    TechnoClass__SetFocus
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 10h
jnz     loc_444565
mov     eax, [esi+21Ch]
xor     ebx, ebx
mov     eax, [eax+78h]
test    eax, eax
mov     [esp+140h+var_120], eax
jle     loc_4452C5

loc_4444CA:                             ; CODE XREF: BuildingClass__UpdateConstruction+8AB↓j
mov     ecx, [esi+21Ch]
mov     edx, [ecx+6Ch]
mov     ebp, [edx+ebx*4]
mov     edx, [esi+520h]
mov     ecx, [ebp+520h]
cmp     ecx, edx
jnz     short loc_444508
cmp     ebp, esi
jz      short loc_444508
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+184h]
cmp     eax, 5
jnz     short loc_444504
mov     eax, [ebp+524h]
test    eax, eax
jz      short loc_44451F

loc_444504:                             ; CODE XREF: BuildingClass__UpdateConstruction+898↑j
mov     eax, [esp+140h+var_120]

loc_444508:                             ; CODE XREF: BuildingClass__UpdateConstruction+884↑j
; BuildingClass__UpdateConstruction+888↑j
inc     ebx
cmp     ebx, eax
jl      short loc_4444CA
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 130h
retn    8
; ---------------------------------------------------------------------------

loc_44451F:                             ; CODE XREF: BuildingClass__UpdateConstruction+8A2↑j
mov     ebx, [esi+524h]
mov     [ebp+524h], ebx
mov     dword ptr [esi+524h], 0
mov     ecx, ds:89C818h
mov     eax, [ebp+0]
push    ecx
push    edi
mov     ecx, ebp
call    dword ptr [eax+100h]
mov     dword ptr [ebp+524h], 0

loc_444552:                             ; DATA XREF: .data:off_82BA60↓o
mov     [esi+524h], ebx
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 130h
retn    8
; ---------------------------------------------------------------------------

loc_444565:                             ; CODE XREF: BuildingClass__UpdateConstruction+84D↑j
mov     edx, ds:0A8E7ACh
push    40h ; '@'
inc     edx
lea     eax, [esp+144h+var_6C]
mov     ds:0A8E7ACh, edx
mov     edx, [esi]
mov     ebp, [edi]
push    ebx
push    eax
mov     ecx, esi
call    dword ptr [edx+0B4h]
push    eax
mov     ecx, edi
call    dword ptr [ebp+0D8h]
test    al, al
jz      loc_444EDE
mov     edx, [edi]
push    ebx
mov     ecx, edi
call    dword ptr [edx+124h]
mov     eax, [esi]
mov     ebp, [edi]
lea     ecx, [esp+154h+var_68]
push    ebx
push    ecx
mov     ecx, esi
call    dword ptr [eax+0B4h]
push    eax
mov     ecx, edi
call    dword ptr [ebp+1B4h]
mov     edx, [edi]
push    1
mov     ecx, edi
call    dword ptr [edx+124h]
mov     eax, [esi]
push    edi
push    2
mov     ecx, esi
call    dword ptr [eax+278h]
mov     edx, [esi]
push    edi
push    18h
mov     ecx, esi
call    dword ptr [edx+278h]
mov     eax, [esi]
push    ebx
push    10h
mov     ecx, esi
call    dword ptr [eax+1E8h]
jmp     loc_444971
; ---------------------------------------------------------------------------

loc_4445FB:                             ; CODE XREF: BuildingClass__UpdateConstruction+501↑j
mov     ecx, [eax+0EB8h]
mov     ebx, 10h
cmp     ecx, ebx
jz      loc_44498E
mov     cl, [eax+16C1h]
test    cl, cl
jnz     loc_44498E
mov     cl, [eax+16C2h]
test    cl, cl
jnz     loc_44498E
mov     cl, [eax+16ACh]
test    cl, cl
jnz     loc_44498E
mov     eax, [esp+140h+arg_4]
mov     edx, [esi]
push    eax
lea     ecx, [esp+144h+var_A8]
push    edi
push    ecx
mov     ecx, esi
call    dword ptr [edx+4D4h]
mov     edx, [eax]
mov     ax, dx
mov     [esp+14Ch+var_13C], edx
cmp     ax, ds:89C818h
mov     cx, word ptr [esp+14Ch+var_13C+2]
jnz     short loc_444677
cmp     cx, ds:89C81Ah
jz      loc_445696      ; jumptable 00443CAD case 3

loc_444677:                             ; CODE XREF: BuildingClass__UpdateConstruction+A08↑j
movsx   eax, ax
movsx   ecx, cx
mov     edx, [esi]
shl     eax, 8
add     eax, 80h
shl     ecx, 8
mov     [esp+14Ch+var_108], eax
add     ecx, 80h
lea     eax, [esp+14Ch+var_48]
mov     [esp+14Ch+var_104], ecx
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
fild    [esp+150h+var_10C]
mov     ecx, [eax]
sub     esp, 8
mov     [esp+158h+var_130], ecx
sub     esp, 8
fisub   [esp+160h+var_130]
fstp    [esp+160h+var_15C+4] ; double
fild    dword ptr [eax+4]
fisub   [esp+160h+var_108]
fstp    [esp+160h+var_164+4] ; double
call    Math__CalcAngle
fsub    ds:dbl_7E2820
add     esp, 10h
fmul    ds:dbl_7E2818
call    Math__RoundToInt
mov     word ptr [esp+150h+var_130], ax
mov     eax, [esp+150h+var_130]
shr     eax, 7
mov     edx, [esp+150h+var_140]
inc     eax
shr     eax, 1
and     eax, 0FFh
lea     ecx, [esp+150h+var_B4]
mov     [esp+150h+var_10C], eax
mov     eax, [esi]
push    ecx
mov     ecx, esi
mov     [esp+154h+var_124], edx
call    dword ptr [eax+1B8h]
mov     ebx, [eax]
mov     ecx, [esi+520h]
movsx   ebp, bx
mov     [esp+154h+var_134], ebx
mov     [esp+154h+var_140], ebp
call    BuildingTypeClass__GetFoundationWidth
add     eax, ebp
mov     bp, word ptr [esp+154h+var_128]
movsx   edx, bp
cmp     edx, eax
jl      short loc_44473C
dec     bp
jmp     short loc_444743
; ---------------------------------------------------------------------------

loc_44473C:                             ; CODE XREF: BuildingClass__UpdateConstruction+AD6↑j
cmp     bp, bx
jge     short loc_444743
inc     bp

loc_444743:                             ; CODE XREF: BuildingClass__UpdateConstruction+ADA↑j
; BuildingClass__UpdateConstruction+ADF↑j
movsx   ebx, word ptr [esp+154h+var_134+2]
mov     ecx, [esi+520h]
push    0
mov     [esp+158h+var_138], ebx
call    BuildingTypeClass__GetFoundationHeight
mov     ecx, eax
mov     ax, word ptr [esp+154h+var_128+2]
movsx   edx, ax
add     ecx, ebx
cmp     edx, ecx
jl      short loc_44476D
dec     ax
jmp     short loc_444776
; ---------------------------------------------------------------------------

loc_44476D:                             ; CODE XREF: BuildingClass__UpdateConstruction+B07↑j
cmp     ax, word ptr [esp+154h+var_134+2]
jge     short loc_444776
inc     ax

loc_444776:                             ; CODE XREF: BuildingClass__UpdateConstruction+B0B↑j
; BuildingClass__UpdateConstruction+B12↑j
movsx   ecx, bp
movsx   edx, ax
shl     ecx, 8
shl     edx, 8
xor     eax, eax
add     ecx, 80h
add     edx, 80h
mov     [esp+154h+var_114], eax
mov     eax, [esi+520h]
mov     ebp, ecx
mov     ebx, edx
mov     [esp+154h+var_11C], ebp
mov     [esp+154h+var_118], ebx
cmp     byte ptr [eax+16E4h], 0
jz      short loc_4447F9
mov     ebx, [esp+154h+var_140]
movsx   ebp, word ptr [esp+154h+var_144]
inc     ebx
cmp     ebp, ebx
jnz     short loc_4447F1
mov     ebx, [esp+154h+var_138]
movsx   ebp, word ptr [esp+154h+var_144+2]
add     ebx, 2
cmp     ebp, ebx
jnz     short loc_4447F1
mov     ebp, [eax+0EC8h]
mov     ebx, [eax+0ECCh]
add     ebp, ecx
mov     ecx, [eax+0ED0h]
add     ebx, edx
mov     [esp+154h+var_11C], ebp
mov     [esp+154h+var_118], ebx
mov     [esp+154h+var_114], ecx
jmp     short loc_4447F9
; ---------------------------------------------------------------------------

loc_4447F1:                             ; CODE XREF: BuildingClass__UpdateConstruction+B5B↑j
; BuildingClass__UpdateConstruction+B6B↑j
mov     ebx, [esp+154h+var_118]
mov     ebp, [esp+154h+var_11C]

loc_4447F9:                             ; CODE XREF: BuildingClass__UpdateConstruction+B4D↑j
; BuildingClass__UpdateConstruction+B8F↑j
mov     cl, [eax+16E5h]
test    cl, cl
jz      short loc_444857
mov     ecx, [esp+154h+var_140]
movsx   edx, word ptr [esp+154h+var_144]
add     ecx, 2
cmp     edx, ecx
jnz     short loc_444857
mov     ecx, [esp+154h+var_138]
movsx   edx, word ptr [esp+154h+var_144+2]
add     ecx, 2
cmp     edx, ecx
jnz     short loc_444857
mov     ecx, [eax+0EC8h]
mov     edx, [eax+0ECCh]
add     ecx, ebp
mov     ebp, [esp+154h+var_114]
add     edx, ebx
mov     ebx, [eax+0ED0h]
add     ebx, ebp
mov     ebp, ecx
mov     [esp+154h+var_12C], ebx
mov     ecx, [esp+154h+var_12C]
mov     ebx, edx
mov     [esp+154h+var_11C], ebp
mov     [esp+154h+var_118], ebx
mov     [esp+154h+var_114], ecx

loc_444857:                             ; CODE XREF: BuildingClass__UpdateConstruction+BA1↑j
; BuildingClass__UpdateConstruction+BB1↑j ...
mov     cl, [eax+16E6h]
test    cl, cl
jz      short loc_4448A7
mov     edx, [esp+154h+var_140]
movsx   ecx, word ptr [esp+154h+var_144]
add     edx, 2
cmp     ecx, edx
jnz     short loc_4448A7
mov     edx, [esp+154h+var_138]
movsx   ecx, word ptr [esp+154h+var_144+2]
inc     edx
cmp     ecx, edx
jnz     short loc_4448A7
mov     ecx, [eax+0EC8h]
mov     edx, [esp+154h+var_114]
add     ebp, ecx
mov     ecx, [eax+0ECCh]
mov     eax, [eax+0ED0h]
add     ecx, ebx
add     eax, edx
mov     [esp+154h+var_11C], ebp
mov     [esp+154h+var_118], ecx
mov     [esp+154h+var_114], eax

loc_4448A7:                             ; CODE XREF: BuildingClass__UpdateConstruction+BFF↑j
; BuildingClass__UpdateConstruction+C0F↑j ...
mov     eax, ds:0A8E7ACh
lea     ecx, [esp+154h+var_11C]
inc     eax
mov     ds:0A8E7ACh, eax
mov     eax, [esp+154h+var_110]
mov     edx, [edi]
push    eax
push    ecx
mov     ecx, edi
call    dword ptr [edx+0D8h]
test    al, al
jz      loc_444EDE
mov     edx, [edi]
push    0
push    2
mov     ecx, edi
call    dword ptr [edx+1E8h]
mov     ebx, [edi]
lea     eax, [esp+164h+var_154]
push    1
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, edi
call    dword ptr [ebx+480h]
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_444971
mov     edx, [edi]
push    0
push    0Bh
mov     ecx, edi
call    dword ptr [edx+1E8h]
mov     ecx, [esi+21Ch]
lea     eax, [esp+174h+var_B8]
push    edi
push    eax
call    BuildingPlacement__FindPosition
mov     eax, [eax]
cmp     ax, ds:89C818h
mov     [esp+174h+var_154], eax
jnz     short loc_444946
mov     cx, word ptr [esp+174h+var_154+2]
cmp     cx, ds:89C81Ah
jz      short loc_444968

loc_444946:                             ; CODE XREF: BuildingClass__UpdateConstruction+CD6↑j
mov     edx, [esi+520h]
mov     eax, [edx+0EB8h]
test    eax, eax
jz      short loc_444968
lea     eax, [esp+174h+var_154]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
push    eax
jmp     short loc_44496A
; ---------------------------------------------------------------------------

loc_444968:                             ; CODE XREF: BuildingClass__UpdateConstruction+CE4↑j
; BuildingClass__UpdateConstruction+CF4↑j
push    0

loc_44496A:                             ; CODE XREF: BuildingClass__UpdateConstruction+D06↑j
mov     ecx, edi
call    TechnoClass__SetFocus

loc_444971:                             ; CODE XREF: BuildingClass__UpdateConstruction+273↑j
; BuildingClass__UpdateConstruction+2CF↑j ...
mov     eax, ds:0A8E7ACh
pop     edi
dec     eax
pop     esi
mov     ds:0A8E7ACh, eax
pop     ebp
mov     eax, 2
pop     ebx
add     esp, 130h
retn    8
; ---------------------------------------------------------------------------

loc_44498E:                             ; CODE XREF: BuildingClass__UpdateConstruction+9A8↑j
; BuildingClass__UpdateConstruction+9B6↑j ...
mov     ecx, [esi+218h]
push    ecx
mov     ecx, edi
call    TechnoClass__SetFocus
mov     eax, ds:89C818h
mov     edx, [esi]
push    eax
lea     ecx, [esp+144h+var_AC]
push    edi
push    ecx
mov     ecx, esi
call    dword ptr [edx+4D4h]
mov     edx, [eax]
mov     ax, dx
mov     [esp+14Ch+var_13C], edx
cmp     ax, ds:89C818h
jnz     short loc_4449D9
mov     cx, word ptr [esp+14Ch+var_13C+2]
cmp     cx, ds:89C81Ah
jz      loc_445696      ; jumptable 00443CAD case 3

loc_4449D9:                             ; CODE XREF: BuildingClass__UpdateConstruction+D65↑j
mov     eax, [esi+520h]
cmp     [eax+0EB8h], ebx
jnz     short loc_444A53
mov     cl, [eax+16ACh]
test    cl, cl
jnz     short loc_444A53
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+84h]
mov     ecx, eax
mov     eax, [esi+21Ch]
xor     ebx, ebx
mov     [esp+14Ch+var_108], ecx
mov     edx, [eax+108h]
test    edx, edx
jle     short loc_444A53
jmp     short loc_444A19
; ---------------------------------------------------------------------------

loc_444A15:                             ; CODE XREF: BuildingClass__UpdateConstruction+DF1↓j
mov     ecx, [esp+158h+var_114]

loc_444A19:                             ; CODE XREF: BuildingClass__UpdateConstruction+DB3↑j
mov     eax, [eax+0FCh]
mov     edx, [ecx]
mov     ebp, [eax+ebx*4]
mov     eax, [ebp+21Ch]
push    eax
call    dword ptr [edx+8Ch]
mov     ecx, ds:89C818h
mov     edx, [ebp+0]
push    ecx
push    eax
mov     ecx, ebp
call    dword ptr [edx+100h]
mov     eax, [esi+21Ch]
inc     ebx
cmp     ebx, [eax+108h]
jl      short loc_444A15

loc_444A53:                             ; CODE XREF: BuildingClass__UpdateConstruction+D85↑j
; BuildingClass__UpdateConstruction+D8F↑j ...
movsx   eax, word ptr [esp+158h+var_148+2]
movsx   edx, word ptr [esp+158h+var_148]
shl     eax, 8
shl     edx, 8
add     eax, 80h
add     edx, 80h
mov     [esp+158h+var_134], eax
mov     [esp+158h+var_138], edx
mov     edx, [esi]
lea     eax, [esp+158h+var_3C]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
fild    [esp+15Ch+var_13C]
mov     ecx, [eax]
sub     esp, 8
mov     [esp+164h+var_118], ecx
sub     esp, 8
fisub   [esp+16Ch+var_118]
fstp    [esp+16Ch+var_164] ; double
fild    dword ptr [eax+4]
fisub   [esp+16Ch+var_138]
fstp    [esp+16Ch+var_16C] ; double
call    Math__CalcAngle
fsub    ds:dbl_7E2820
add     esp, 10h
fmul    ds:dbl_7E2818
call    Math__RoundToInt
mov     word ptr [esp+15Ch+var_118], ax
mov     eax, [esp+15Ch+var_118]
shr     eax, 7
mov     edx, [esp+15Ch+var_14C]
inc     eax
shr     eax, 1
and     eax, 0FFh
lea     ecx, [esp+15Ch+var_98]
mov     [esp+15Ch+var_118], eax
mov     eax, [esi]
push    ecx
mov     ecx, esi
mov     [esp+160h+var_13C], edx
call    dword ptr [eax+1B8h]
mov     ebp, [eax]
mov     ecx, [esi+520h]
movsx   ebx, bp
mov     [esp+160h+var_134], ebp
mov     [esp+160h+var_14C], ebx
call    BuildingTypeClass__GetFoundationWidth
add     eax, ebx
mov     bx, word ptr [esp+160h+var_140]
movsx   edx, bx
cmp     edx, eax
jl      short loc_444B1C
dec     bx
jmp     short loc_444B23
; ---------------------------------------------------------------------------

loc_444B1C:                             ; CODE XREF: BuildingClass__UpdateConstruction+EB6↑j
cmp     bx, bp
jge     short loc_444B23
inc     bx

loc_444B23:                             ; CODE XREF: BuildingClass__UpdateConstruction+EBA↑j
; BuildingClass__UpdateConstruction+EBF↑j
movsx   ebp, word ptr [esp+160h+var_134+2]
mov     ecx, [esi+520h]
push    0
mov     [esp+164h+var_144], ebp
call    BuildingTypeClass__GetFoundationHeight
mov     cx, word ptr [esp+160h+var_140+2]
add     eax, ebp
movsx   edx, cx
cmp     edx, eax
jl      short loc_444B4B
dec     cx
jmp     short loc_444B54
; ---------------------------------------------------------------------------

loc_444B4B:                             ; CODE XREF: BuildingClass__UpdateConstruction+EE5↑j
cmp     cx, word ptr [esp+160h+var_134+2]
jge     short loc_444B54
inc     cx

loc_444B54:                             ; CODE XREF: BuildingClass__UpdateConstruction+EE9↑j
; BuildingClass__UpdateConstruction+EF0↑j
movsx   eax, bx
movsx   edx, cx
shl     eax, 8
shl     edx, 8
xor     ecx, ecx
add     eax, 80h
add     edx, 80h
mov     [esp+160h+var_120], ecx
mov     ecx, [esi+520h]
mov     ebp, eax
mov     ebx, edx
mov     [esp+160h+var_128], ebp
mov     [esp+160h+var_124], ebx
cmp     byte ptr [ecx+16E4h], 0
jz      short loc_444BD8
mov     ebx, [esp+160h+var_14C]
movsx   ebp, word ptr [esp+160h+var_150]
inc     ebx
cmp     ebp, ebx
jnz     short loc_444BD0
mov     ebx, [esp+160h+var_144]
movsx   ebp, word ptr [esp+160h+var_150+2]
add     ebx, 2
cmp     ebp, ebx
jnz     short loc_444BD0
mov     ebx, [ecx+0EC8h]
add     eax, ebx
mov     ebx, [ecx+0ECCh]
add     ebx, edx
mov     edx, [ecx+0ED0h]
mov     ebp, eax
mov     [esp+160h+var_124], ebx
mov     [esp+160h+var_128], ebp
mov     [esp+160h+var_120], edx
jmp     short loc_444BD8
; ---------------------------------------------------------------------------

loc_444BD0:                             ; CODE XREF: BuildingClass__UpdateConstruction+F38↑j
; BuildingClass__UpdateConstruction+F48↑j
mov     ebx, [esp+160h+var_124]
mov     ebp, [esp+160h+var_128]

loc_444BD8:                             ; CODE XREF: BuildingClass__UpdateConstruction+F2A↑j
; BuildingClass__UpdateConstruction+F6E↑j
mov     al, [ecx+16E5h]
test    al, al
jz      short loc_444C2C
mov     eax, [esp+160h+var_14C]
movsx   edx, word ptr [esp+160h+var_150]
add     eax, 2
cmp     edx, eax
jnz     short loc_444C2C
mov     eax, [esp+160h+var_144]
movsx   edx, word ptr [esp+160h+var_150+2]
add     eax, 2
cmp     edx, eax
jnz     short loc_444C2C
mov     eax, [ecx+0EC8h]
mov     edx, [ecx+0ED0h]
add     ebp, eax
mov     eax, [ecx+0ECCh]
add     eax, ebx
mov     ebx, [esp+160h+var_120]
add     edx, ebx
mov     ebx, eax
mov     [esp+160h+var_128], ebp
mov     [esp+160h+var_124], ebx
mov     [esp+160h+var_120], edx

loc_444C2C:                             ; CODE XREF: BuildingClass__UpdateConstruction+F80↑j
; BuildingClass__UpdateConstruction+F90↑j ...
mov     al, [ecx+16E6h]
test    al, al
jz      short loc_444C7C
mov     eax, [esp+160h+var_14C]
movsx   edx, word ptr [esp+160h+var_150]
add     eax, 2
cmp     edx, eax
jnz     short loc_444C7C
mov     eax, [esp+160h+var_144]
movsx   edx, word ptr [esp+160h+var_150+2]
inc     eax
cmp     edx, eax
jnz     short loc_444C7C
mov     eax, [ecx+0EC8h]
mov     edx, [esp+160h+var_120]
add     ebp, eax
mov     eax, [ecx+0ECCh]
mov     ecx, [ecx+0ED0h]
add     eax, ebx
add     ecx, edx
mov     [esp+160h+var_128], ebp
mov     [esp+160h+var_124], eax
mov     [esp+160h+var_120], ecx

loc_444C7C:                             ; CODE XREF: BuildingClass__UpdateConstruction+FD4↑j
; BuildingClass__UpdateConstruction+FE4↑j ...
mov     eax, ds:0A8E7ACh
mov     ecx, [esp+160h+var_11C]
inc     eax
lea     edx, [esp+160h+var_128]
mov     ds:0A8E7ACh, eax
mov     eax, [edi]
push    ecx
push    edx
mov     ecx, edi
call    dword ptr [eax+0D8h]
test    al, al
jz      loc_444EDE
mov     eax, [edi+5A4h]
test    eax, eax
jz      short loc_444D11
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+84h]
mov     cl, [eax+0D94h]
test    cl, cl
jnz     short loc_444D11
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+84h]
mov     cl, [eax+0CD4h]
test    cl, cl
jnz     short loc_444D11
mov     eax, [edi+5A4h]
test    eax, eax
jz      short loc_444CE7
push    eax
mov     ecx, edi
call    TechnoClass__SetFocus

loc_444CE7:                             ; CODE XREF: BuildingClass__UpdateConstruction+107D↑j
mov     eax, [edi]
push    0
push    2
mov     ecx, edi
call    dword ptr [eax+1E8h]
mov     ebx, [edi]
lea     ecx, [esp+170h+var_164+4]
push    1
push    ecx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, edi
call    dword ptr [ebx+480h]

loc_444D11:                             ; CODE XREF: BuildingClass__UpdateConstruction+104B↑j
; BuildingClass__UpdateConstruction+105F↑j ...
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jz      short loc_444D34
mov     edx, [esi+520h]
mov     al, [edx+16C1h]
test    al, al
jz      loc_444DBC

loc_444D34:                             ; CODE XREF: BuildingClass__UpdateConstruction+10BE↑j
mov     eax, [edi]
push    0
push    0Bh
mov     ecx, edi
call    dword ptr [eax+1E8h]
lea     ecx, [esp+180h+var_D8]
push    edi
push    ecx
mov     ecx, [esi+21Ch]
call    BuildingPlacement__FindPosition
mov     eax, [eax]
cmp     ax, ds:89C818h
mov     dword ptr [esp+180h+var_16C], eax
jnz     short loc_444D73
mov     dx, word ptr [esp+180h+var_16C+2]
cmp     dx, ds:89C81Ah
jz      short loc_444DB3

loc_444D73:                             ; CODE XREF: BuildingClass__UpdateConstruction+1103↑j
mov     eax, [esi+520h]
mov     ecx, [eax+0EB8h]
test    ecx, ecx
jz      short loc_444DB3
lea     ecx, [esp+180h+var_16C]
push    ecx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, edi
call    TechnoClass__SetFocus
lea     edx, [esp+180h+var_16C]
mov     ecx, 87F7E8h
push    edx
call    CellCoord__To_CellObj
push    eax
mov     ecx, edi
call    BuildingClass__AddToProductionQueue
jmp     short loc_444DBC
; ---------------------------------------------------------------------------

loc_444DB3:                             ; CODE XREF: BuildingClass__UpdateConstruction+1111↑j
; BuildingClass__UpdateConstruction+1121↑j
push    0
mov     ecx, edi
call    TechnoClass__SetFocus

loc_444DBC:                             ; CODE XREF: BuildingClass__UpdateConstruction+10CE↑j
; BuildingClass__UpdateConstruction+1151↑j
mov     eax, [esi]
push    edi
push    2
mov     ecx, esi
call    dword ptr [eax+278h]
cmp     eax, 1
jnz     loc_444971
mov     edx, [esi]
push    edi
push    9
mov     ecx, esi
call    dword ptr [edx+278h]
jmp     loc_444971
; ---------------------------------------------------------------------------

loc_444DE4:                             ; CODE XREF: BuildingClass__UpdateConstruction+4E5↑j
; BuildingClass__UpdateConstruction+4F3↑j
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
cmp     eax, 1
jnz     loc_444EF8
mov     edx, [esi]
lea     eax, [esp+140h+var_C]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
mov     ecx, eax
push    0A0h
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+148h+var_124], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
mov     [esp+148h+var_C0], ebx
add     eax, edx
mov     edx, ds:89F69Ch
sar     eax, 8
mov     word ptr [esp+148h+var_124+2], ax
mov     ecx, [esp+148h+var_124]
add     ecx, edx
mov     edx, ds:0A8E7ACh
mov     word ptr [esp+148h+var_124], cx
mov     cx, ds:89F69Eh
add     cx, ax
inc     edx
mov     word ptr [esp+148h+var_124+2], cx
mov     eax, [esp+148h+var_124]
mov     ds:0A8E7ACh, edx
mov     edx, ds:89F698h
mov     [esp+148h+var_134], eax
add     edx, eax
mov     ax, ds:89F69Ah
add     ax, cx
movsx   ecx, dx
shl     ecx, 8
movsx   edx, ax
mov     eax, [edi]
add     ecx, 80h
mov     [esp+148h+var_C8], ecx
lea     ecx, [esp+148h+var_C8]
shl     edx, 8
add     edx, 80h
push    ecx
mov     ecx, edi
mov     [esp+14Ch+var_C4], edx
call    dword ptr [eax+0D8h]
test    al, al
jz      short loc_444EDE
lea     edx, [esp+14Ch+var_F8]
lea     ecx, [edi+388h]
push    edx
mov     [esp+150h+var_F8], 8000h
call    FacingClass__Set_SyncLog
mov     eax, [edi]
push    ebx
push    0Ah
mov     ecx, edi
call    dword ptr [eax+1E8h]

loc_444EDE:                             ; CODE XREF: BuildingClass__UpdateConstruction+248↑j
; BuildingClass__UpdateConstruction+37A↑j ...
mov     eax, ds:0A8E7ACh
pop     edi
dec     eax
pop     esi
mov     ds:0A8E7ACh, eax
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 130h
retn    8
; ---------------------------------------------------------------------------

loc_444EF8:                             ; CODE XREF: BuildingClass__UpdateConstruction+118E↑j
mov     edx, [edi]
push    ebx
push    1
push    89C848h
mov     ecx, edi
call    dword ptr [edx+174h]
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 130h
retn    8
; ---------------------------------------------------------------------------

loc_444F19:                             ; CODE XREF: BuildingClass__UpdateConstruction+4D↑j
; DATA XREF: .text:jpt_443CAD↓o
mov     ecx, [esi+21Ch] ; jumptable 00443CAD case 2
call    House__IsCurrentPlayer
test    al, al
jnz     loc_445696      ; jumptable 00443CAD case 3
mov     ecx, [esi+21Ch]
push    6
call    HouseClass__UpdateBuildState
mov     eax, [esi+21Ch]
mov     dword ptr [eax+564Ch], 0FFFFFFFFh
mov     ecx, [edi+520h]
mov     edx, [ecx+0DF8h]
mov     ecx, [esi+21Ch]
push    edx
add     ecx, 5700h
call    BuildingQueue__AllocSlot
mov     ecx, [edi+520h]
cmp     eax, ebx
mov     [esp+140h+var_12C], eax
mov     [esp+140h+var_114], ebx
mov     [esp+140h+var_110], ebx
mov     [esp+140h+var_10C], ebx
mov     [esp+140h+var_124], ecx
jz      loc_445099
mov     edx, eax
cmp     word ptr [edx+4], 0
lea     ebx, [edx+4]
jnz     short loc_444FA0
cmp     word ptr [ebx+2], 0
jz      loc_445099

loc_444FA0:                             ; CODE XREF: BuildingClass__UpdateConstruction+1333↑j
mov     eax, [esp+140h+var_124]
mov     cl, [eax+0E88h]
test    cl, cl
jnz     loc_445068
mov     ecx, [esi+21Ch]
push    ebx
push    eax
call    BuildingTypeClass__ProcessData
test    al, al
jnz     loc_445068
mov     eax, [esp+140h+var_124]
push    0FFFFFFFFh
push    offset globalHelper_005F80
lea     ecx, [esp+148h+var_88]
push    eax
push    ecx
mov     ecx, [esi+21Ch]
call    HouseClass__ScanBuildLocation
movsx   ecx, word ptr [eax]
movsx   ebp, word ptr [eax+2]
xor     eax, eax
shl     ecx, 8
shl     ebp, 8
mov     [esp+140h+var_10C], eax
mov     eax, ds:89C848h
add     ecx, 80h
add     ebp, 80h
cmp     ecx, eax
mov     [esp+140h+var_114], ecx
mov     [esp+140h+var_110], ebp
jnz     short loc_44502B
cmp     ebp, ds:89C84Ch
jnz     short loc_44502B
mov     eax, ds:89C850h
test    eax, eax
jz      loc_445696      ; jumptable 00443CAD case 3

loc_44502B:                             ; CODE XREF: BuildingClass__UpdateConstruction+13B4↑j
; BuildingClass__UpdateConstruction+13BC↑j
mov     eax, ecx
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+140h+var_120], ax
mov     eax, ebp
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+140h+var_120+2], ax
mov     edx, [esp+140h+var_120]
mov     [ebx], edx
mov     ebp, [esp+140h+var_110]
mov     eax, [esp+140h+var_114]
mov     ebx, [esp+140h+var_12C]
jmp     loc_4451AA
; ---------------------------------------------------------------------------

loc_445068:                             ; CODE XREF: BuildingClass__UpdateConstruction+134C↑j
; BuildingClass__UpdateConstruction+1361↑j
movsx   edx, word ptr [ebx+2]
movsx   eax, word ptr [ebx]
mov     ebx, [esp+140h+var_12C]
shl     edx, 8
shl     eax, 8
add     edx, 80h
add     eax, 80h
xor     ecx, ecx
mov     ebp, edx
mov     [esp+140h+var_114], eax
mov     [esp+140h+var_110], ebp
mov     [esp+140h+var_10C], ecx
jmp     loc_4451AA
; ---------------------------------------------------------------------------

loc_445099:                             ; CODE XREF: BuildingClass__UpdateConstruction+1323↑j
; BuildingClass__UpdateConstruction+133A↑j
mov     eax, [esp+140h+var_124]
mov     cl, [eax+0E88h]
test    cl, cl
jnz     short loc_4450EF
push    0FFFFFFFFh
push    offset globalHelper_005F80
lea     ecx, [esp+148h+var_90]
push    eax
push    ecx
mov     ecx, [esi+21Ch]
call    HouseClass__ScanBuildLocation
movsx   ecx, word ptr [eax]
movsx   edx, word ptr [eax+2]
shl     ecx, 8
shl     edx, 8
add     ecx, 80h
add     edx, 80h
xor     ebx, ebx
mov     eax, ecx
mov     ebp, edx
mov     [esp+140h+var_114], eax
mov     [esp+140h+var_110], ebp
mov     [esp+140h+var_10C], ebx
jmp     short loc_445151
; ---------------------------------------------------------------------------

loc_4450EF:                             ; CODE XREF: BuildingClass__UpdateConstruction+1445↑j
mov     ecx, [esi+21Ch]
lea     edx, [esp+140h+var_80]
push    eax
push    edx
call    HouseClass__FindBestProductionBuilding
mov     eax, [eax]
cmp     ax, ds:89C818h
mov     [esp+140h+var_FC], eax
mov     cx, word ptr [esp+140h+var_FC+2]
jnz     short loc_445120
cmp     cx, ds:89C81Ah
jz      short loc_445149

loc_445120:                             ; CODE XREF: BuildingClass__UpdateConstruction+14B5↑j
movsx   edx, cx
movsx   eax, ax
shl     edx, 8
shl     eax, 8
add     edx, 80h
add     eax, 80h
xor     ecx, ecx
mov     ebp, edx
mov     [esp+140h+var_114], eax
mov     [esp+140h+var_110], ebp
mov     [esp+140h+var_10C], ecx
jmp     short loc_445151
; ---------------------------------------------------------------------------

loc_445149:                             ; CODE XREF: BuildingClass__UpdateConstruction+14BE↑j
mov     ebp, [esp+140h+var_110]
mov     eax, [esp+140h+var_114]

loc_445151:                             ; CODE XREF: BuildingClass__UpdateConstruction+148D↑j
; BuildingClass__UpdateConstruction+14E7↑j
mov     ebx, [esp+140h+var_12C]
test    ebx, ebx
jz      short loc_4451AA
cmp     eax, ds:89C848h
jnz     short loc_445177
cmp     ebp, ds:89C84Ch
jnz     short loc_445177
mov     ecx, [esp+140h+var_10C]
mov     edx, ds:89C850h
cmp     ecx, edx
jz      short loc_4451AA

loc_445177:                             ; CODE XREF: BuildingClass__UpdateConstruction+14FF↑j
; BuildingClass__UpdateConstruction+1507↑j
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+140h+var_120], ax
mov     eax, ebp
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+140h+var_120+2], ax
mov     edx, [esp+140h+var_120]
mov     [ebx+4], edx
mov     ebp, [esp+140h+var_110]
mov     eax, [esp+140h+var_114]

loc_4451AA:                             ; CODE XREF: BuildingClass__UpdateConstruction+1403↑j
; BuildingClass__UpdateConstruction+1434↑j ...
cmp     eax, ds:89C848h
jnz     short loc_4451CC
cmp     ebp, ds:89C84Ch
jnz     short loc_4451CC
mov     ecx, ds:89C850h
mov     edx, [esp+140h+var_10C]
cmp     edx, ecx
jz      loc_445614

loc_4451CC:                             ; CODE XREF: BuildingClass__UpdateConstruction+1550↑j
; BuildingClass__UpdateConstruction+1558↑j
cdq
and     edx, 0FFh
lea     ecx, [esp+140h+var_DC]
add     eax, edx
sar     eax, 8
mov     word ptr [esp+140h+var_120], ax
mov     eax, ebp
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+140h+var_120+2], ax
mov     edx, [esp+140h+var_120]
mov     eax, [esi+21Ch]
mov     [esp+140h+var_DC], edx
mov     edx, [edi]
push    eax
push    ecx
mov     ecx, edi
call    dword ptr [edx+88h]
mov     ecx, eax
call    BuildingClass__ApplyFoundationDamage
sub     eax, 0
jz      loc_4452D7
dec     eax
jz      short loc_445237
dec     eax
jz      loc_4454E6
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 130h
retn    8
; ---------------------------------------------------------------------------

loc_445237:                             ; CODE XREF: BuildingClass__UpdateConstruction+15BF↑j
mov     ecx, [esi+21Ch]
push    ebx
add     ecx, 5700h
call    HouseClass__FailedToPlaceNode
mov     ecx, ds:0A8B238h
test    ecx, ecx
jz      short loc_4452C5
mov     ecx, ds:8871E0h
cmp     eax, [ecx+0E48h]
jle     short loc_4452C5
test    ebx, ebx
jz      short loc_4452C5
mov     eax, [esi+21Ch]
push    ebx
mov     edx, [eax+5704h]
lea     ecx, [eax+5704h]
call    dword ptr [edx+14h]
mov     esi, [esi+21Ch]
add     esi, 5704h
mov     ecx, [esi+10h]
cmp     eax, ecx
jge     short loc_4452C5
dec     ecx
mov     edx, eax
cmp     eax, ecx
mov     [esi+10h], ecx
jge     short loc_4452C5
shl     eax, 4

loc_44529B:                             ; CODE XREF: BuildingClass__UpdateConstruction+1663↓j
mov     ecx, [esi+4]
lea     edi, [ecx+eax+10h]
add     ecx, eax
inc     edx
add     eax, 10h
mov     ebx, [edi]
mov     [ecx], ebx
mov     ebx, [edi+4]
mov     [ecx+4], ebx
mov     ebx, [edi+8]
mov     [ecx+8], ebx
mov     edi, [edi+0Ch]
mov     [ecx+0Ch], edi
mov     ecx, [esi+10h]
cmp     edx, ecx
jl      short loc_44529B

loc_4452C5:                             ; CODE XREF: BuildingClass__UpdateConstruction+864↑j
; BuildingClass__UpdateConstruction+15F1↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 130h
retn    8
; ---------------------------------------------------------------------------

loc_4452D7:                             ; CODE XREF: BuildingClass__UpdateConstruction+15B8↑j
mov     eax, [edi]
lea     ecx, [esp+140h+var_114]
push    0
push    ecx
mov     ecx, edi
call    dword ptr [eax+0D8h]
test    al, al
jz      loc_4454E6
mov     ecx, [edi+2D8h]
test    ecx, ecx
jz      short loc_4452FF
call    BuildingClass__RefreshOccupierCache

loc_4452FF:                             ; CODE XREF: BuildingClass__UpdateConstruction+1698↑j
test    ebx, ebx
jz      short loc_445329
mov     edx, [edi+520h]
mov     eax, [esi+21Ch]
mov     ecx, [edx+0DF8h]
mov     edx, [eax+564Ch]
cmp     ecx, edx
jnz     short loc_445329
mov     dword ptr [eax+564Ch], 0FFFFFFFFh

loc_445329:                             ; CODE XREF: BuildingClass__UpdateConstruction+16A1↑j
; BuildingClass__UpdateConstruction+16BD↑j
cmp     dword ptr [edi+0ACh], 0FFFFFFFFh
jnz     short loc_445345
cmp     dword ptr [edi+0B4h], 12h
jnz     short loc_445345
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+1ECh]

loc_445345:                             ; CODE XREF: BuildingClass__UpdateConstruction+16D0↑j
; BuildingClass__UpdateConstruction+16D9↑j
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     loc_44540D
mov     ecx, [edi+520h]
mov     al, [ecx+16C0h]
test    al, al
jz      short loc_4453B0
mov     eax, [esp+148h+var_11C]
push    ecx
cdq
and     edx, 0FFh
lea     ecx, [esp+14Ch+var_E8]
add     eax, edx
sar     eax, 8
mov     word ptr [esp+14Ch+var_128], ax
mov     eax, [esp+14Ch+var_118]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+14Ch+var_128+2], ax
mov     eax, [esi+21Ch]
mov     edx, [esp+14Ch+var_128]
push    eax
push    ecx
mov     ecx, 87F7E8h
mov     [esp+154h+var_E8], edx
call    globalHelper_088570
jmp     short loc_44540D
; ---------------------------------------------------------------------------

loc_4453B0:                             ; CODE XREF: BuildingClass__UpdateConstruction+1703↑j
mov     eax, [ecx+0E54h]
test    eax, eax
jz      short loc_44540D
mov     dl, [eax+2A8h]
test    dl, dl
jz      short loc_44540D
mov     eax, [esp+148h+var_11C]
push    ecx
cdq
and     edx, 0FFh
lea     ecx, [esp+14Ch+var_EC]
add     eax, edx
sar     eax, 8
mov     word ptr [esp+14Ch+var_128], ax
mov     eax, [esp+14Ch+var_118]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+14Ch+var_128+2], ax
mov     eax, [esi+21Ch]
mov     edx, [esp+14Ch+var_128]
push    eax
push    ecx
mov     ecx, 87F7E8h
mov     [esp+154h+var_EC], edx
call    ScanBuildingPlacementCells

loc_44540D:                             ; CODE XREF: BuildingClass__UpdateConstruction+16EF↑j
; BuildingClass__UpdateConstruction+174E↑j ...
mov     eax, ds:8871E0h
mov     edx, [edi+520h]
cmp     edx, [eax+87Ch]
jnz     loc_4454D4
mov     eax, [esi+21Ch]
push    ebx
mov     edx, [eax+5704h]
lea     ecx, [eax+5704h]
call    dword ptr [edx+14h]
mov     esi, [esi+21Ch]
mov     ecx, eax
inc     ecx
mov     ebx, [esi+5714h]
cmp     ecx, ebx
jge     loc_4454D4
mov     esi, [esi+5708h]
mov     ebp, ds:0A83C6Ch
mov     eax, ecx
shl     eax, 4
add     eax, esi

loc_445464:                             ; CODE XREF: BuildingClass__UpdateConstruction+181D↓j
mov     edx, [eax]
test    edx, edx
jl      short loc_445477
mov     edx, [ebp+edx*4+0]
cmp     byte ptr [edx+1706h], 0
jnz     short loc_445491

loc_445477:                             ; CODE XREF: BuildingClass__UpdateConstruction+1808↑j
inc     ecx
add     eax, 10h
cmp     ecx, ebx
jl      short loc_445464
pop     edi
pop     esi
pop     ebp
mov     eax, 2
pop     ebx
add     esp, 130h
retn    8
; ---------------------------------------------------------------------------

loc_445491:                             ; CODE XREF: BuildingClass__UpdateConstruction+1815↑j
add     edi, 9Ch
mov     edx, edi
mov     eax, [edx]
mov     edi, [edx+4]
mov     edx, [edx+8]
mov     [esp+14Ch+var_10C], edx
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+14Ch+var_12C], ax
mov     eax, edi
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+14Ch+var_12C+2], ax
mov     eax, [esp+14Ch+var_12C]
shl     ecx, 4
mov     [ecx+esi+4], eax

loc_4454D4:                             ; CODE XREF: BuildingClass__UpdateConstruction+17BE↑j
; BuildingClass__UpdateConstruction+17EB↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 2
pop     ebx
add     esp, 130h
retn    8
; ---------------------------------------------------------------------------

loc_4454E6:                             ; CODE XREF: BuildingClass__UpdateConstruction+15C2↑j
; BuildingClass__UpdateConstruction+168A↑j
xor     ebp, ebp
cmp     ebx, ebp
jz      loc_445696      ; jumptable 00443CAD case 3
mov     eax, [esi+21Ch]
push    ebx
mov     edx, [eax+5704h]
lea     ecx, [eax+5704h]
call    dword ptr [edx+14h]
mov     ecx, [ebx]
mov     edx, ds:0A83C6Ch
mov     ecx, [edx+ecx*4]
mov     dl, [ecx+1571h]
test    dl, dl
jnz     loc_4455B3
mov     dl, [ecx+16B7h]
test    dl, dl
jnz     loc_4455B3
mov     eax, [esp+144h+var_118]
mov     ecx, [esi+21Ch]
cdq
and     edx, 0FFh
mov     ebx, [ecx+5714h]
add     eax, edx
mov     edi, eax
mov     eax, [esp+144h+var_114]
cdq
and     edx, 0FFh
add     eax, edx
xor     edx, edx
sar     edi, 8
sar     eax, 8
cmp     ebx, ebp
jle     loc_445696      ; jumptable 00443CAD case 3
xor     ebx, ebx
jmp     short loc_44556B
; ---------------------------------------------------------------------------

loc_445569:                             ; CODE XREF: BuildingClass__UpdateConstruction+1942↓j
xor     ebp, ebp

loc_44556B:                             ; CODE XREF: BuildingClass__UpdateConstruction+1907↑j
mov     ecx, [ecx+5708h]
cmp     [ecx+ebx+4], di
lea     ecx, [ecx+ebx+4]
jnz     short loc_445592
cmp     [ecx+2], ax
jnz     short loc_445592
mov     word ptr [esp+144h+var_124], bp
mov     word ptr [esp+144h+var_124+2], bp
mov     ebp, [esp+144h+var_124]
mov     [ecx], ebp

loc_445592:                             ; CODE XREF: BuildingClass__UpdateConstruction+191A↑j
; BuildingClass__UpdateConstruction+1920↑j
mov     ecx, [esi+21Ch]
inc     edx
add     ebx, 10h
cmp     edx, [ecx+5714h]
jl      short loc_445569
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 130h
retn    8
; ---------------------------------------------------------------------------

loc_4455B3:                             ; CODE XREF: BuildingClass__UpdateConstruction+18B9↑j
; BuildingClass__UpdateConstruction+18C7↑j
mov     esi, [esi+21Ch]
add     esi, 5704h
mov     ecx, [esi+10h]
cmp     eax, ecx
jge     loc_445696      ; jumptable 00443CAD case 3
dec     ecx
mov     edx, eax
cmp     eax, ecx
mov     [esi+10h], ecx
jge     loc_445696      ; jumptable 00443CAD case 3
shl     eax, 4

loc_4455DB:                             ; CODE XREF: BuildingClass__UpdateConstruction+19A3↓j
mov     ecx, [esi+4]
lea     edi, [ecx+eax+10h]
add     ecx, eax
inc     edx
add     eax, 10h
mov     ebx, [edi]
mov     [ecx], ebx
mov     ebx, [edi+4]
mov     [ecx+4], ebx
mov     ebx, [edi+8]
mov     [ecx+8], ebx
mov     edi, [edi+0Ch]
mov     [ecx+0Ch], edi
mov     ecx, [esi+10h]
cmp     edx, ecx
jl      short loc_4455DB
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 130h
retn    8
; ---------------------------------------------------------------------------

loc_445614:                             ; CODE XREF: BuildingClass__UpdateConstruction+1566↑j
mov     edx, [esp+140h+var_124]
mov     al, [edx+0E88h]
test    al, al
jz      short loc_445696 ; jumptable 00443CAD case 3
mov     ecx, [esi+21Ch]
push    0FFFFFFFFh
add     ecx, 5700h
call    BuildingQueue__AllocSlot
cmp     eax, ebx
jnz     short loc_445696 ; jumptable 00443CAD case 3
mov     ecx, [esi+21Ch]
push    0FFFFFFFFh
add     ecx, 5700h
call    BuildingQueue__FindFreeSlot
mov     esi, [esi+21Ch]
add     esi, 5704h
mov     ecx, [esi+10h]
cmp     eax, ecx
jge     short loc_445696 ; jumptable 00443CAD case 3
dec     ecx
mov     edx, eax
cmp     eax, ecx
mov     [esi+10h], ecx
jge     short loc_445696 ; jumptable 00443CAD case 3
shl     eax, 4

loc_44566C:                             ; CODE XREF: BuildingClass__UpdateConstruction+1A34↓j
mov     ecx, [esi+4]
lea     edi, [ecx+eax+10h]
add     ecx, eax
inc     edx
add     eax, 10h
mov     ebx, [edi]
mov     [ecx], ebx
mov     ebx, [edi+4]
mov     [ecx+4], ebx
mov     ebx, [edi+8]
mov     [ecx+8], ebx
mov     edi, [edi+0Ch]
mov     [ecx+0Ch], edi
mov     ecx, [esi+10h]
cmp     edx, ecx
jl      short loc_44566C

loc_445696:                             ; CODE XREF: BuildingClass__UpdateConstruction+17↑j
; BuildingClass__UpdateConstruction+3F↑j ...
pop     edi             ; jumptable 00443CAD case 3
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 130h
retn    8
*/
}

// IDA 0x44f2d0: selling mission
int BuildingClass::Mission_Selling()
{
    if (missionStatus == 0) { BeingProduced = false; missionStatus = 1; return 5; }
    if (missionStatus == 1) { CompleteSell(); }
    return 5;
}

int BuildingClass::Sell() { BeingProduced = false; CompleteSell(); return 5; }
void BuildingClass::CompleteSell() { Remove(); }

// IDA 0x4d9f70: process sell - create MCV/sell unit
void BuildingClass::ProcessSell()
{
    if (!Type) return;
    if (Type->UndeploysInto)
        SellUnit();
    else
        Remove();
}

// IDA 0x4494c0: can be sold check
// 0x4494c0
bool BuildingClass::CanBeSold() {
// [IDA decompile]
int __thiscall BuildingClass::CanBeSold(#377 *this)
{
  int result; // eax

  result = ObjectClass::HasLocation(this);
  if ( (_BYTE)result )
    goto LABEL_11;
  result = *((_DWORD *)this + 328);
  if ( *(_BYTE *)(result + 5497) )
    goto LABEL_11;
  if ( *((_BYTE *)this + 1769) )
  {
    result = *((_DWORD *)this + 333);
    if ( result )
    {
      result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this);
      if ( result != 19 )
      {
        result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this);
        if ( result != 18 )
        {
          LOBYTE(result) = 1;
          return result;
        }
      }
    }
  }
  if ( !*(_BYTE *)(*((_DWORD *)this + 328) + 5824) || *(_BYTE *)(*((_DWORD *)this + 135) + 506) )
LABEL_11:
    LOBYTE(result) = 0;
  else
    LOBYTE(result) = 1;
  return result;
}

/* ASM:
push    esi
mov     esi, ecx
call    ObjectClass__HasLocation
test    al, al
jnz     short loc_449536
mov     eax, [esi+520h]
mov     cl, [eax+1579h]
test    cl, cl
jnz     short loc_449536
mov     al, [esi+6E9h]
test    al, al
jz      short loc_449512
mov     eax, [esi+534h]
test    eax, eax
jz      short loc_449512
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 13h
jz      short loc_449512
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+184h]
cmp     eax, 12h
jz      short loc_449512
mov     al, 1
pop     esi
retn
; ---------------------------------------------------------------------------

loc_449512:                             ; CODE XREF: BuildingClass__CanBeSold+24↑j
; BuildingClass__CanBeSold+2E↑j ...
mov     ecx, [esi+520h]
mov     al, [ecx+16C0h]
test    al, al
jz      short loc_449536
mov     edx, [esi+21Ch]
mov     al, [edx+1FAh]
test    al, al
jnz     short loc_449536
mov     al, 1
pop     esi
retn
; ---------------------------------------------------------------------------

loc_449536:                             ; CODE XREF: BuildingClass__CanBeSold+A↑j
; BuildingClass__CanBeSold+1A↑j ...
xor     al, al
pop     esi
retn
*/
}
bool BuildingClass::CanBeSoldCheck() { return CanBeSold(); }
void BuildingClass::ToggleSellMode() { Sell(); }

// IDA 0x5f5dd0: sell priority based on health ratio
// 0x5f5dd0
int BuildingClass::GetSellPriority()
{
// [IDA decompile]
int __thiscall BuildingClass_GetSellPriority(int *this)
{
  int result; // eax
  double v3; // st7
  double v4; // [esp+4h] [ebp-8h]
  double v5; // [esp+4h] [ebp-8h]
  double v6; // [esp+4h] [ebp-8h]

  v4 = (double)*(this + 27);
  if ( v4 / (double)*(int *)((*(int (__thiscall **)(int *))(*this + 136))(this) + 160) <= *((double *)MEMORY[0x8871E0]
                                                                                          + 737)
    && *(this + 27) > 0 )
  {
    return 0;
  }
  v5 = (double)*(this + 27);
  if ( v5 / (double)*(int *)((*(int (__thiscall **)(int *))(*this + 136))(this) + 160) <= *((double *)MEMORY[0x8871E0]
                                                                                          + 737) )
    return 2;
  v6 = (double)*(this + 27);
  v3 = v6 / (double)*(int *)((*(int (__thiscall **)(int *))(*this + 136))(this) + 160);
  result = 1;
  if ( v3 > *((double *)MEMORY[0x8871E0] + 736) )
    return 2;
  return result;
}

/* ASM:
sub     esp, 8
push    esi
mov     esi, ecx
fild    dword ptr [esi+6Ch]
mov     eax, [esi]
fstp    [esp+0Ch+var_8]
call    dword ptr [eax+88h]
fild    dword ptr [eax+0A0h]
mov     ecx, ds:8871E0h
fdivr   [esp+0Ch+var_8]
fcomp   qword ptr [ecx+1708h]
fnstsw  ax
test    ah, 41h
jz      short loc_5F5E10
mov     eax, [esi+6Ch]
test    eax, eax
jle     short loc_5F5E10
xor     eax, eax
pop     esi
add     esp, 8
retn
; ---------------------------------------------------------------------------

loc_5F5E10:                             ; CODE XREF: BuildingClass__GetSellPriority+30↑j
; BuildingClass__GetSellPriority+37↑j
fild    dword ptr [esi+6Ch]
mov     edx, [esi]
mov     ecx, esi
fstp    [esp+0Ch+var_8]
call    dword ptr [edx+88h]
fild    dword ptr [eax+0A0h]
mov     eax, ds:8871E0h
fdivr   [esp+0Ch+var_8]
fcomp   qword ptr [eax+1708h]
fnstsw  ax
test    ah, 41h
jnz     short loc_5F5E6F
fild    dword ptr [esi+6Ch]
mov     edx, [esi]
mov     ecx, esi
fstp    [esp+0Ch+var_8]
call    dword ptr [edx+88h]
fild    dword ptr [eax+0A0h]
mov     eax, ds:8871E0h
fdivr   [esp+0Ch+var_8]
fcomp   qword ptr [eax+1700h]
fnstsw  ax
test    ah, 41h
mov     eax, 1
jnz     short loc_5F5E74

loc_5F5E6F:                             ; CODE XREF: BuildingClass__GetSellPriority+6B↑j
mov     eax, 2

loc_5F5E74:                             ; CODE XREF: BuildingClass__GetSellPriority+9D↑j
pop     esi
add     esp, 8
retn
*/
}

// IDA 0x44d2c0: sell effects at location
// 0x480cb0
void BuildingClass::SellEffects()
{
// [IDA decompile]
int __thiscall BuildingClass_SellEffects(int this, int a2)
{
  int v3; // eax
  int v4; // ebp
  int v5; // esi
  int v6; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // ebp
  int v12; // ebx
  int v13; // eax
  bool v14; // cc
  int v15; // esi
  int v16; // esi
  int v17; // ecx
  int v18; // ebx
  unsigned __int8 v19; // al
  int v20; // ecx
  int v21; // esi
  bool v22; // cf
  _DWORD *v23; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // eax
  void **v27; // eax
  void **v28; // eax
  void **v29; // eax
  void **v30; // eax
  int v31; // ebx
  bool v32; // cf
  _BYTE *v33; // eax
  int v34; // edx
  __int16 v35; // ax
  int v37; // [esp+10h] [ebp-40h]
  int v38; // [esp+14h] [ebp-3Ch] BYREF
  int v39; // [esp+18h] [ebp-38h] BYREF
  __int16 v40[6]; // [esp+1Ch] [ebp-34h] BYREF
  int v41; // [esp+28h] [ebp-28h]
  int v42[4]; // [esp+30h] [ebp-20h] BYREF
  _DWORD v43[4]; // [esp+40h] [ebp-10h] BYREF

  v3 = *(_DWORD *)(this + 68);
  if ( v3 == -1 )
    return 0;
  v4 = *((_DWORD *)MEMORY[0xA83D84] + v3);
  *(_DWORD *)v40 = v4;
  if ( !*(_BYTE *)(v4 + 680) )
    return 0;
  v5 = a2;
  if ( a2 != -1 )
  {
    v6 = *(_DWORD *)(v4 + 676);
    if ( a2 < v6 && !MEMORY[0xA8E7AC] && Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, v6) >= v5 )
      return 0;
  }
  PlacementRect = BuildingClass::GetPlacementRect(this, v42);
  StartCoords = House::GetStartCoords(this, v43);
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 )
  {
    v9 = *PlacementRect;
    v17 = PlacementRect[1];
    v18 = PlacementRect[2];
    v13 = PlacementRect[3];
  }
  else
  {
    v37 = PlacementRect[2];
    if ( v37 <= 0 || (v39 = PlacementRect[3], v39 <= 0) )
    {
      v9 = *StartCoords;
      v17 = StartCoords[1];
      v18 = StartCoords[2];
      v13 = StartCoords[3];
    }
    else
    {
      v9 = *StartCoords;
      v10 = *PlacementRect;
      v11 = StartCoords[2];
      v12 = StartCoords[1];
      v13 = StartCoords[3];
      v14 = v9 <= *PlacementRect;
      v41 = v11;
      if ( !v14 )
      {
        v11 += v9 - v10;
        v9 = v10;
        v41 = v11;
      }
      v15 = PlacementRect[1];
      v38 = v15;
      if ( v12 > v15 )
      {
        v13 += v12 - v15;
        v12 = v15;
      }
      if ( v9 + v11 >= v10 + v37 )
        v16 = v41;
      else
        v16 = v10 - v9 + v37 + 1;
      if ( v13 + v12 < v39 + v38 )
        v13 = v39 + v38 - v12 + 1;
      v4 = *(_DWORD *)v40;
      v17 = v12;
      v18 = v16;
    }
  }
  v43[1] = v17;
  Cell::CreateCrater(v9, v17 - MEMORY[0x886FA4], v18, v13, 0);
  v19 = *(_BYTE *)(this + 286) + 16;
  *(_BYTE *)(this + 286) = v19;
  v20 = *(_DWORD *)(v4 + 672);
  if ( v19 >> 4 == v20 - 1 && v20 > 2 )
  {
    v21 = 0;
    v22 = 1;
    do
    {
      if ( v22 )
      {
        *(_DWORD *)v40 = *(_DWORD *)(this + 36);
        v39 = *CellStruct::Add(v40, &v38, (_WORD *)(4 * (v21 & 7) + 9041544));
        v23 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v39);
      }
      else
      {
        v23 = (_DWORD *)this;
      }
      v24 = v23[17];
      if ( v24 != -1
        && *(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84] + v24) + 680)
        && v24 == *(_DWORD *)(this + 68)
        && *((_BYTE *)v23 + 286) < 0x10u )
      {
        BuildingClass::SellEffects(200);
      }
      v21 += 2;
      v22 = (unsigned int)v21 < 8;
    }
    while ( v21 < 8 );
  }
  if ( a2 != -1 )
  {
    v25 = *(_DWORD *)(v4 + 672);
    v26 = *(unsigned __int8 *)(this + 286) >> 4;
    if ( v26 < v25 && (v26 != v25 - 1 || (*(_BYTE *)(this + 286) & 0xF) != 0) )
      return 0;
  }
  *(_DWORD *)(this + 80) = -1;
  *(_DWORD *)(this + 68) = -1;
  *(_BYTE *)(this + 286) = 0;
  House::AnnounceUpgrade(this, -1);
  Cell::SetRadar((int *)&MEMORY[0x87F7E8], (__int16 *)(this + 36));
  Radar::Update(&MEMORY[0x87F7E8], (__int16 *)(this + 36));
  BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], this + 36);
  a2 = *(_DWORD *)(this + 36);
  *(_DWORD *)v40 = *CellStruct::Add(&a2, &v39, MEMORY[0x89F688]);
  v27 = (void **)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v40);
  BuildingClass::ValidatePlacement(v27, 0);
  a2 = *(_DWORD *)(this + 36);
  *(_DWORD *)v40 = *CellStruct::Add(&a2, &v39, &MEMORY[0x89F6A0]);
  v28 = (void **)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v40);
  BuildingClass::ValidatePlacement(v28, 0);
  a2 = *(_DWORD *)(this + 36);
  *(_DWORD *)v40 = *CellStruct::Add(&a2, &v39, &MEMORY[0x89F698]);
  v29 = (void **)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v40);
  BuildingClass::ValidatePlacement(v29, 0);
  *(_DWORD *)v40 = *(_DWORD *)(this + 36);
  LOWORD(a2) = MEMORY[0x89F690] + v40[0];
  HIWORD(a2) = HIWORD(MEMORY[0x89F690]) + v40[1];
  v30 = (void **)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2);
  BuildingClass::ValidatePlacement(v30, 0);
  AbstractClass::AnnounceExpiredPointer((void **)this);
  v31 = 0;
  v32 = 1;
  do
  {
    if ( v32 )
    {
      v34 = v31 & 7;
      *(_DWORD *)v40 = *(_DWORD *)(this + 36);
      v35 = v40[1] + HIWORD(MEMORY[0x89F688][v34]);
      LOWORD(a2) = v40[0] + LOWORD(MEMORY[0x89F688][v34]);
      HIWORD(a2) = v35;
      *(_DWORD *)v40 = a2;
      v33 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v40);
    }
    else
    {
      v33 = (_BYTE *)this;
    }
    v32 = (unsigned int)++v31 < 8;
    --v33[290];
  }
  while ( v31 < 8 );
  return 1;
}

/* ASM:
sub     esp, 40h
push    ebx
push    ebp
push    esi
push    edi
mov     edi, ecx
mov     eax, [edi+44h]
cmp     eax, 0FFFFFFFFh
jz      loc_481093
mov     ecx, ds:0A83D84h
mov     ebp, [ecx+eax*4]
mov     dword ptr [esp+50h+var_34], ebp
mov     al, [ebp+2A8h]
test    al, al
jz      loc_481093
mov     esi, [esp+50h+arg_0]
cmp     esi, 0FFFFFFFFh
jz      short loc_480D1E
mov     eax, [ebp+2A4h]
cmp     esi, eax
jge     short loc_480D1E
mov     ecx, ds:0A8E7ACh
test    ecx, ecx
jnz     short loc_480D1E
mov     edx, ds:0A8B230h
push    eax
push    0
lea     ecx, [edx+218h]
call    Random__Range
cmp     eax, esi
setl    al
test    al, al
jz      loc_481093

loc_480D1E:                             ; CODE XREF: BuildingClass__SellEffects+37↑j
; BuildingClass__SellEffects+41↑j ...
lea     eax, [esp+50h+var_20]
mov     ecx, edi
push    eax
call    BuildingClass__GetPlacementRect
lea     ecx, [esp+50h+var_10]
mov     esi, eax
push    ecx
mov     ecx, edi
call    House__GetStartCoords
mov     ecx, [eax+8]
test    ecx, ecx
jle     loc_480DDD
mov     ecx, [eax+0Ch]
test    ecx, ecx
jle     loc_480DDD
mov     ecx, [esi+8]
test    ecx, ecx
mov     [esp+50h+var_40], ecx
jle     short loc_480DD0
mov     ecx, [esi+0Ch]
test    ecx, ecx
mov     [esp+50h+var_38], ecx
jle     short loc_480DD0
mov     edx, [eax]
mov     ecx, [esi]
mov     ebp, [eax+8]
mov     ebx, [eax+4]
mov     eax, [eax+0Ch]
cmp     edx, ecx
mov     [esp+50h+var_28], ebp
jle     short loc_480D83
sub     edx, ecx
add     ebp, edx
mov     edx, ecx
mov     [esp+50h+var_28], ebp

loc_480D83:                             ; CODE XREF: BuildingClass__SellEffects+C7↑j
mov     esi, [esi+4]
cmp     ebx, esi
mov     [esp+50h+var_3C], esi
jle     short loc_480D94
sub     ebx, esi
add     eax, ebx
mov     ebx, esi

loc_480D94:                             ; CODE XREF: BuildingClass__SellEffects+DC↑j
mov     esi, [esp+50h+var_40]
add     ebp, edx
add     esi, ecx
cmp     ebp, esi
jge     short loc_480DAC
mov     esi, [esp+50h+var_40]
sub     ecx, edx
lea     esi, [ecx+esi+1]
jmp     short loc_480DB0
; ---------------------------------------------------------------------------

loc_480DAC:                             ; CODE XREF: BuildingClass__SellEffects+EE↑j
mov     esi, [esp+50h+var_28]

loc_480DB0:                             ; CODE XREF: BuildingClass__SellEffects+FA↑j
mov     ecx, [esp+50h+var_3C]
mov     ebp, [esp+50h+var_38]
add     ecx, ebp
lea     ebp, [eax+ebx]
cmp     ebp, ecx
jge     short loc_480DC6
sub     ecx, ebx
inc     ecx
mov     eax, ecx

loc_480DC6:                             ; CODE XREF: BuildingClass__SellEffects+10F↑j
mov     ebp, dword ptr [esp+50h+var_34]
mov     ecx, ebx
mov     ebx, esi
jmp     short loc_480DE8
; ---------------------------------------------------------------------------

loc_480DD0:                             ; CODE XREF: BuildingClass__SellEffects+A7↑j
; BuildingClass__SellEffects+B2↑j
mov     edx, [eax]
mov     ecx, [eax+4]
mov     ebx, [eax+8]
mov     eax, [eax+0Ch]
jmp     short loc_480DE8
; ---------------------------------------------------------------------------

loc_480DDD:                             ; CODE XREF: BuildingClass__SellEffects+8D↑j
; BuildingClass__SellEffects+98↑j
mov     edx, [esi]
mov     ecx, [esi+4]
mov     ebx, [esi+8]
mov     eax, [esi+0Ch]

loc_480DE8:                             ; CODE XREF: BuildingClass__SellEffects+11E↑j
; BuildingClass__SellEffects+12B↑j
mov     esi, ds:886FA4h
push    0
mov     [esp+54h+var_C], ecx
sub     esp, 10h
sub     ecx, esi
mov     esi, esp
mov     [esi], edx
mov     [esi+4], ecx
mov     ecx, ds:887324h
mov     [esi+8], ebx
mov     [esi+0Ch], eax
call    Cell__CreateCrater
mov     al, [edi+11Eh]
mov     bl, 10h
add     al, bl
mov     [edi+11Eh], al
mov     ecx, [ebp+2A0h]
and     eax, 0FFh
shr     eax, 4
lea     edx, [ecx-1]
cmp     eax, edx
jnz     loc_480EBC
cmp     ecx, 2
jle     short loc_480EBC
xor     esi, esi
cmp     esi, 8

loc_480E44:                             ; CODE XREF: BuildingClass__SellEffects+20A↓j
jb      short loc_480E4A
mov     eax, edi
jmp     short loc_480E81
; ---------------------------------------------------------------------------

loc_480E4A:                             ; CODE XREF: BuildingClass__SellEffects:loc_480E44↑j
mov     eax, [edi+24h]
mov     ecx, esi
and     ecx, 7
mov     dword ptr [esp+50h+var_34], eax
lea     eax, [esp+50h+var_3C]
lea     edx, ds:89F688h[ecx*4]
lea     ecx, [esp+50h+var_34]
push    edx
push    eax
call    CellStruct__Add
mov     eax, [eax]
lea     ecx, [esp+50h+var_38]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+54h+var_38], eax
call    CellCoord__To_CellObj

loc_480E81:                             ; CODE XREF: BuildingClass__SellEffects+198↑j
mov     ecx, [eax+44h]
cmp     ecx, 0FFFFFFFFh
jz      short loc_480EB4
mov     edx, ds:0A83D84h
mov     edx, [edx+ecx*4]
cmp     byte ptr [edx+2A8h], 0
jz      short loc_480EB4
cmp     ecx, [edi+44h]
jnz     short loc_480EB4
cmp     [eax+11Eh], bl
jnb     short loc_480EB4
push    0C8h
mov     ecx, eax
call    BuildingClass__SellEffects

loc_480EB4:                             ; CODE XREF: BuildingClass__SellEffects+1D7↑j
; BuildingClass__SellEffects+1E9↑j ...
add     esi, 2
cmp     esi, 8
jl      short loc_480E44

loc_480EBC:                             ; CODE XREF: BuildingClass__SellEffects+184↑j
; BuildingClass__SellEffects+18D↑j
mov     eax, [esp+50h+arg_0]
or      esi, 0FFFFFFFFh
cmp     eax, esi
jz      short loc_480EF3
mov     dl, [edi+11Eh]
mov     ecx, [ebp+2A0h]
mov     eax, edx
and     eax, 0FFh
shr     eax, 4
cmp     eax, ecx
jge     short loc_480EF3
dec     ecx
cmp     eax, ecx
jnz     loc_481093
test    dl, 0Fh
jnz     loc_481093

loc_480EF3:                             ; CODE XREF: BuildingClass__SellEffects+215↑j
; BuildingClass__SellEffects+22F↑j
push    esi
mov     ecx, edi
mov     [edi+50h], esi
mov     [edi+44h], esi
mov     byte ptr [edi+11Eh], 0
call    House__AnnounceUpgrade
lea     esi, [edi+24h]
mov     ecx, 87F7E8h
push    esi
call    Cell__SetRadar
push    esi
mov     ecx, 87F7E8h
call    Radar__Update
push    esi
mov     ecx, 87F7E8h
call    BuildingClass__AddUpgrade
mov     eax, [esi]
lea     ecx, [esp+50h+var_38]
push    89F688h
push    ecx
lea     ecx, [esp+58h+arg_0]
mov     [esp+58h+arg_0], eax
call    CellStruct__Add
mov     eax, [eax]
lea     edx, [esp+50h+var_34]
push    edx
mov     ecx, 87F7E8h
mov     dword ptr [esp+54h+var_34], eax
call    CellCoord__To_CellObj
push    0               ; char
mov     ecx, eax        ; void **
call    BuildingClass__ValidatePlacement
mov     eax, [esi]
lea     ecx, [esp+50h+var_38]
push    89F6A0h
push    ecx
lea     ecx, [esp+58h+arg_0]
mov     [esp+58h+arg_0], eax
call    CellStruct__Add
mov     eax, [eax]
lea     edx, [esp+50h+var_34]
push    edx
mov     ecx, 87F7E8h
mov     dword ptr [esp+54h+var_34], eax
call    CellCoord__To_CellObj
push    0               ; char
mov     ecx, eax        ; void **
call    BuildingClass__ValidatePlacement
mov     eax, [esi]
lea     ecx, [esp+50h+var_38]
push    89F698h
push    ecx
lea     ecx, [esp+58h+arg_0]
mov     [esp+58h+arg_0], eax
call    CellStruct__Add
mov     eax, [eax]
lea     edx, [esp+50h+var_34]
push    edx
mov     ecx, 87F7E8h
mov     dword ptr [esp+54h+var_34], eax
call    CellCoord__To_CellObj
push    0               ; char
mov     ecx, eax        ; void **
call    BuildingClass__ValidatePlacement
mov     eax, [esi]
mov     ecx, ds:89F690h
mov     dword ptr [esp+50h+var_34], eax
mov     dx, [esp+50h+var_34+2]
add     dx, ds:89F692h
add     eax, ecx
lea     ecx, [esp+50h+arg_0]
mov     word ptr [esp+50h+arg_0], ax
mov     word ptr [esp+50h+arg_0+2], dx
mov     eax, [esp+50h+arg_0]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+54h+arg_0], eax
call    CellCoord__To_CellObj
push    0               ; char
mov     ecx, eax        ; void **
call    BuildingClass__ValidatePlacement
mov     dl, 1
mov     ecx, edi        ; void **
call    AbstractClass__AnnounceExpiredPointer
xor     ebx, ebx
cmp     ebx, 8

loc_481023:                             ; CODE XREF: BuildingClass__SellEffects+3D2↓j
jb      short loc_481029
mov     eax, edi
jmp     short loc_481070
; ---------------------------------------------------------------------------

loc_481029:                             ; CODE XREF: BuildingClass__SellEffects:loc_481023↑j
mov     ecx, [esi]
mov     edx, ebx
and     edx, 7
mov     dword ptr [esp+50h+var_34], ecx
lea     eax, ds:89F688h[edx*4]
mov     dx, ds:89F688h[edx*4]
mov     ax, [eax+2]
add     ax, [esp+50h+var_34+2]
add     dx, cx
mov     word ptr [esp+50h+arg_0], dx
lea     edx, [esp+50h+var_34]
mov     word ptr [esp+50h+arg_0+2], ax
mov     ecx, [esp+50h+arg_0]
mov     dword ptr [esp+50h+var_34], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj

loc_481070:                             ; CODE XREF: BuildingClass__SellEffects+377↑j
mov     dl, [eax+122h]
dec     dl
inc     ebx
cmp     ebx, 8
mov     [eax+122h], dl
jl      short loc_481023
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 40h
retn    4
; ---------------------------------------------------------------------------

loc_481093:                             ; CODE XREF: BuildingClass__SellEffects+F↑j
; BuildingClass__SellEffects+2A↑j ...
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 40h
retn    4
*/
}

// IDA 0x4d9f70: sell unit - create MCV from undeployable building
// 0x4d9f70
void BuildingClass::SellUnit()
{
// [IDA decompile]
int __thiscall BuildingClass_SellUnit(#375 **this, int a2)
{
  int result; // eax
  int v4; // eax

  result = a2;
  if ( a2 )
  {
    if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) )
    {
      VoxClass::FindAndPlay(aEvaUnitsold, -1);
      PlayVocClass(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 1700), 0x2000, 1.0, 0);
    }
    v4 = (*((int (__thiscall **)(#375 **))*this + 175))(this);
    HouseClass::AddPower(*(this + 135), v4);
    (*((void (__thiscall **)(#375 **))*this + 232))(this);
    (*((void (__thiscall **)(#375 **))*this + 53))(this);
    return (*((int (__thiscall **)(#375 **))*this + 62))(this);
  }
  return result;
}

/* ASM:
mov     eax, [esp+arg_0]
push    esi
test    eax, eax
mov     esi, ecx
jz      short loc_4D9FE9
mov     ecx, [esi+21Ch] ; this
call    House__IsHumanPlayer
test    al, al
jz      short loc_4D9FB5
push    0FFFFFFFFh      ; int
or      edx, 0FFFFFFFFh
mov     ecx, offset aEvaUnitsold ; "EVA_UnitSold"
call    VoxClass__FindAndPlay
mov     eax, ds:8871E0h
push    0               ; int
mov     edx, 2000h
push    3F800000h       ; float
mov     ecx, [eax+6A4h]
call    PlayVocClass

loc_4D9FB5:                             ; CODE XREF: BuildingClass__SellUnit+18↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2BCh]
mov     ecx, [esi+21Ch]
push    eax
call    HouseClass__AddPower
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+3A0h]
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+0D4h]
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+0F8h]

loc_4D9FE9:                             ; CODE XREF: BuildingClass__SellUnit+9↑j
pop     esi
retn    4
*/
}

// IDA 0x701410: handle sell or repair from sidebar
// 0x701410
void BuildingClass::HandleSellOrRepair()
{
// [IDA decompile]
int __thiscall BuildingClass::HandleSellOrRepair(#377 *this)
{
  int v2; // eax
  int result; // eax
  BOOL v4; // eax
  int v5; // edx
  int v6; // eax
  _BYTE v7[12]; // [esp+8h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(#377 *, int))(*(_DWORD *)this + 292))(this, 2);
  v2 = *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 160);
  *((_DWORD *)this + 27) = v2;
  *((_DWORD *)this + 28) = v2;
  result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 44))(this);
  if ( result == 6 )
  {
    (*(void (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)this + 412))(this, 0);
    v4 = BuildingClass::GetHealthRatio((int *)this) <= *(double *)(MEMORY[0x87F7E8][7806] + 5888);
    globalHelper_051EE0((int)this, v5, v4);
    v6 = (*(int (__thiscall **)(#377 *, _BYTE *))(*(_DWORD *)this + 72))(this, v7);
    return StartAudioControllerAt(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 452), v6, 0);
  }
  return result;
}

/* ASM:
sub     esp, 0Ch
push    esi
mov     esi, ecx
push    2
mov     eax, [esi]
call    dword ptr [eax+124h]
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     eax, [eax+0A0h]
mov     ecx, esi
mov     [esi+6Ch], eax
mov     [esi+70h], eax
mov     eax, [esi]
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     short loc_701499
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+19Ch]
mov     ecx, esi
call    BuildingClass__GetHealthRatio
mov     eax, ds:8871E0h
fcomp   qword ptr [eax+1700h]
fnstsw  ax
test    ah, 41h
jz      short loc_70146E
mov     eax, 1
jmp     short loc_701470
; ---------------------------------------------------------------------------

loc_70146E:                             ; CODE XREF: BuildingClass__HandleSellOrRepair+55↑j
xor     eax, eax

loc_701470:                             ; CODE XREF: BuildingClass__HandleSellOrRepair+5C↑j
push    eax
mov     ecx, esi
call    globalHelper_051EE0
mov     edx, [esi]
lea     eax, [esp+10h+var_C]
push    0
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
mov     ecx, ds:8871E0h
mov     edx, eax
mov     ecx, [ecx+1C4h]
call    StartAudioControllerAt

loc_701499:                             ; CODE XREF: BuildingClass__HandleSellOrRepair+30↑j
pop     esi
add     esp, 0Ch
retn
*/
}

// IDA 0x44f450: repair mission
int BuildingClass::Mission_Repair()
{
    if (IsBeingRepaired) {
        IsBeingRepaired = false; NeedsRepairs = false;
        queueMission((ra2::game::Mission)((int)(Mission::Guard)), true);
    }
    return 20;
}

void BuildingClass::ProcessRepair() {}

// IDA 0x44f480: can repair - health below max
// 0x457ce0
bool BuildingClass::CanRepair() {
// [IDA decompile]
bool __thiscall BuildingClass_CanRepair(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _BYTE v8[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( !a2 )
    return 0;
  if ( !*(_BYTE *)(*(this + 328) + 5499) )
    return 0;
  v3 = *(this + 43);
  if ( v3 == 18 )
    return 0;
  if ( v3 == 19 )
    return 0;
  v4 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 72))(this, v8);
  if ( !(unsigned __int8)IsCoordVisibleMap(v4) || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 468))(this) )
    return 0;
  v5 = *(_DWORD *)(a2 + 1728);
  if ( !*(_BYTE *)(v5 + 3764) )
    return *(_BYTE *)(v5 + 3765)
        && !Object::IsAlliedWithObjectHouse((_DWORD *)*(this + 135), a2)
        && (*(int (__thiscall **)(_DWORD *))(*this + 1032))(this);
  v6 = *(this + 135);
  return (v6 == *(_DWORD *)(a2 + 540) || *(_BYTE *)(*(_DWORD *)(v6 + 52) + 422))
      && (*(int (__thiscall **)(_DWORD *))(*this + 1032))(this) != *(_DWORD *)(*(this + 328) + 5504)
      && !(unsigned __int8)BuildingClass::IsHealthLow(this)
      && !(unsigned __int8)BuildingClass::IsBeingRepairedOrCaptured(a2);
}

/* ASM:
sub     esp, 0Ch
push    esi
push    edi
mov     edi, [esp+14h+arg_0]
mov     esi, ecx
test    edi, edi
jz      loc_457DA3
mov     eax, [esi+520h]
mov     cl, [eax+157Bh]
test    cl, cl
jz      loc_457DA3
mov     eax, [esi+0ACh]
cmp     eax, 12h
jz      loc_457DA3
cmp     eax, 13h
jz      loc_457DA3
mov     edx, [esi]
lea     eax, [esp+14h+var_C]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
push    eax
mov     ecx, 87F7E8h
call    IsCoordVisibleMap
test    al, al
jz      short loc_457DA3
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1D4h]
test    al, al
jnz     short loc_457DA3
mov     eax, [edi+6C0h]
mov     cl, [eax+0EB4h]
test    cl, cl
jz      short loc_457DAD
mov     eax, [esi+21Ch]
mov     ecx, [edi+21Ch]
cmp     eax, ecx
jz      short loc_457D75
mov     eax, [eax+34h]
mov     cl, [eax+1A6h]
test    cl, cl
jz      short loc_457DA3

loc_457D75:                             ; CODE XREF: BuildingClass__CanRepair+86↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+408h]
mov     ecx, [esi+520h]
cmp     eax, [ecx+1580h]
jz      short loc_457DA3
mov     ecx, esi
call    BuildingClass__IsHealthLow
test    al, al
jnz     short loc_457DA3
mov     ecx, edi
call    BuildingClass__IsBeingRepairedOrCaptured
test    al, al
jz      short loc_457DD5

loc_457DA3:                             ; CODE XREF: BuildingClass__CanRepair+D↑j
; BuildingClass__CanRepair+21↑j ...
pop     edi
xor     al, al
pop     esi
add     esp, 0Ch
retn    4
; ---------------------------------------------------------------------------

loc_457DAD:                             ; CODE XREF: BuildingClass__CanRepair+76↑j
mov     cl, [eax+0EB5h]
test    cl, cl
jz      short loc_457DA3
mov     ecx, [esi+21Ch]
push    edi
call    Object__IsAlliedWithObjectHouse
test    al, al
jnz     short loc_457DA3
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+408h]
test    eax, eax
jz      short loc_457DA3

loc_457DD5:                             ; CODE XREF: BuildingClass__CanRepair+C1↑j
pop     edi
mov     al, 1
pop     esi
add     esp, 0Ch
retn    4
*/
}
void BuildingClass::ToggleRepairMode() { IsBeingRepaired = !IsBeingRepaired; }

// IDA 0x452630: check health below threshold for repair
// 0x452630
bool BuildingClass::CheckHealthForRepair() {
// [IDA decompile]
int __thiscall BuildingClass::CheckHealthForRepair(#377 *this)
{
  int result; // eax

  result = *((_DWORD *)this + 27);
  if ( result )
  {
    result = *((_DWORD *)this + 328);
    if ( *(_BYTE *)(result + 5498) )
    {
      result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 128))(this);
      if ( (_BYTE)result )
        LOBYTE(result) = 0;
      else
        LOBYTE(result) = InfantryClass::CheckHealthDiff(this);
    }
    else
    {
      LOBYTE(result) = 0;
    }
  }
  else
  {
    LOBYTE(result) = 0;
  }
  return result;
}

/* ASM:
push    esi
mov     esi, ecx
mov     eax, [esi+6Ch]
test    eax, eax
jnz     short loc_45263E
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_45263E:                             ; CODE XREF: BuildingClass__CheckHealthForRepair+8↑j
mov     eax, [esi+520h]
mov     cl, [eax+157Ah]
test    cl, cl
jnz     short loc_452652
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_452652:                             ; CODE XREF: BuildingClass__CheckHealthForRepair+1C↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+80h]
test    al, al
jz      short loc_452664
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_452664:                             ; CODE XREF: BuildingClass__CheckHealthForRepair+2E↑j
mov     ecx, esi
call    InfantryClass__CheckHealthDiff
pop     esi
retn
*/
}

// IDA 0x7105e0: check if being repaired or captured
// 0x7105e0
bool BuildingClass::IsBeingRepairedOrCaptured() { return IsBeingRepaired || HasBeenCaptured; }

// IDA 0x459ed0: missile building mission
int BuildingClass::Mission_Missile()
{
    queueMission((ra2::game::Mission)((int)(Mission::Guard)), true);
    return 10;
}

void BuildingClass::ProcessSuperWeaponEffects() {}

// IDA 0x457630/0x457690: check SuperWeaponType availability from Type
// 0x457630
bool BuildingClass::SWAvailable() {
    int sw_index = this->Type->SuperWeapon;
    if (sw_index == -1)
        return false;

    SuperWeaponTypeClass* sw_type = g_SuperWeaponTypeItems[sw_index];
    BuildingTypeClass* bld_type = sw_type->Type;
    BuildingTypeClass* actual_bld = bld_type->SecretBuilding;

    if (!actual_bld
        || DynamicVector::GetOrGrow(&this->Owner->SuperWeaponsAvailable, actual_bld->ArrayIndex))
        return true;

    return false;
}
bool BuildingClass::SW2Available() {
    if (!Type) return false;
    return Type->SuperWeapon2 != -1;
}

// IDA 0x505310: find building by SuperWeapon type
// 0x505310
BuildingClass* BuildingClass::FindBySWType(int sw_type)
{
    // Iterate all buildings to find one with matching SuperWeapon
    for (int i = 0; i < 0x1000; ++i) {
        BuildingClass* bld = (BuildingClass*)(0x812000 + i * sizeof(BuildingClass));
        if (bld && bld->Type && (bld->Type->SuperWeapon == sw_type || bld->Type->SuperWeapon2 == sw_type))
            return bld;
    }
    return nullptr;
}

// GOLDEN: 0x451690
// BuildingClass::ClearSuperWeaponAnim — pop the most-recently-added upgrade
// (which may grant a super weapon), clear its anim slot, and (if it granted a
// super weapon) refresh the owning house's super-weapon collection.
// Faithful 1:1 with IDA: count read, if/else on the upgrade's flags, dense
// ordered member WRITES, two direct calls, multiple returns, no loop.
char BuildingClass::ClearSuperWeaponAnim()
{
    char result = (char)this->UpgradeLevel;            // result = *(_BYTE*)(this+1794)
    if (!result)
        return result;                                 // 0 upgrades -> return 0

    int count = result;                                // v3 = result
    bool didGrantSW = false;                           // v4 = 0
    BuildingTypeClass** upg_base = Upgrades;
    upg_base += (count - 1);
    BuildingTypeClass* upgrade = *upg_base;             // v5 = *(this + 4*result + 1512) = Upgrades[result-1]
    if (upgrade && (didGrantSW = (upgrade->SuperWeapon != -1), upgrade->Powered)) {
        this->ClearAnims();                            // ClearAnims(this, 9)
        BuildingTypeClass** upg2 = Upgrades;
        upg2 += (this->UpgradeLevel - 1);
        *upg2 = nullptr;    // *(this + 4*UpgradeLevel + 1512) = 0 -> Upgrades[UpgradeLevel-1]
        this->UpgradeLevel = 0;                        // *(_BYTE*)(this+1794) = 0
        this->SuperWeaponToken = (uint32_t)-1;  // *(this+1532) = -1
        if (didGrantSW) {
            SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(this->Owner);  // arg = *(this+540)
            return 1;
        }
    } else {
        this->ClearAnims();                            // ClearAnims(this, v3 - 1)
        int dec = this->UpgradeLevel - 1;              // v6 = *(_BYTE*)(this+1794) - 1
        this->UpgradeLevel = (uint8_t)dec;             // *(_BYTE*)(this+1794) = v6
        BuildingTypeClass** upg3 = Upgrades;
        upg3 += dec;
        *upg3 = nullptr;                       // *(this + 4*v6 + 1516) = 0 -> Upgrades[v6]
        if (didGrantSW)
            SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(this->Owner);
    }
    return 1;
}

void BuildingClass::UpdatePrism() {}
void BuildingClass::Disappear_PrismForward() {}

// IDA 0x43c2d0: main mission controller (handles production, sell, repair, etc.)
// 0x43c2d0
int BuildingClass::MissionController()
{
// [IDA decompile]
int __thiscall BuildingClass::MissionController(#377 *this)
{
  int v1; // ebp
  int result; // eax
  int v4; // eax
  int v5; // ebx
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  _BYTE *v9; // eax
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // ebx
  _BYTE *v13; // edi
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ebp
  _DWORD *v17; // eax
  void *v18; // eax
  void *v19; // ebp
  int v20; // eax
  int Member; // eax
  _DWORD *v22; // ebp
  _DWORD *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  double v28; // st7
  _BYTE *v29; // eax
  _WORD *v30; // eax
  int i; // ebp
  int v32; // ebx
  _BYTE *v33; // esi
  int v34; // ecx
  _BYTE *v35; // eax
  int v36; // eax
  _DWORD *v37; // edi
  _DWORD *v38; // eax
  int v39; // ecx
  int v40; // edx
  int v41; // eax
  int v42; // ecx
  double v43; // st7
  _BYTE *v44; // esi
  int v45; // [esp+30h] [ebp-40h] BYREF
  int v46; // [esp+34h] [ebp-3Ch]
  int v47; // [esp+38h] [ebp-38h]
  int v48; // [esp+3Ch] [ebp-34h]
  _DWORD v49[3]; // [esp+40h] [ebp-30h] BYREF
  char v50[12]; // [esp+4Ch] [ebp-24h] BYREF
  _BYTE v51[12]; // [esp+58h] [ebp-18h] BYREF
  _BYTE v52[12]; // [esp+64h] [ebp-Ch] BYREF
  int v53; // [esp+74h] [ebp+4h]
  char v54; // [esp+74h] [ebp+4h]
  int v55; // [esp+74h] [ebp+4h]
  int v56; // [esp+78h] [ebp+8h] BYREF
  _DWORD *v57; // [esp+7Ch] [ebp+Ch]

  v1 = v56;
  switch ( v56 )
  {
    case 3:
      BuildingClass::StartProduction((int *)this, 1);
      TechnoClass::Mission_RepairDispatch((int *)this, v1, v53, v1, v57);
      return 1;
    case 8:
      v36 = *((_DWORD *)this + 328);
      if ( !*(_BYTE *)(v36 + 5801) && !*(_BYTE *)(v36 + 5803) )
        goto LABEL_151;
      v37 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v53 + 72))(v53, v52);
      v38 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(*(_DWORD *)this + 72))(this, v51);
      v39 = *v38 - *v37;
      v40 = v38[1];
      v41 = v38[2];
      v46 = v39;
      v42 = v37[2];
      v47 = v40 - v37[1];
      v48 = v41 - v42;
      v43 = Math::Sqrt((double)v46 * (double)v46 + (double)(v41 - v42) * (double)(v41 - v42) + (double)v47 * (double)v47);
      if ( (int)Math::RoundToInt(v43) < 384 )
        return 1;
LABEL_151:
      TechnoClass::Mission_RepairDispatch((int *)this, v1, v53, v1, v57);
      v44 = (_BYTE *)*((_DWORD *)this + 328);
      if ( v44[5821] || v44[5801] || v44[5803] )
        return 23;
      else
        return 1;
    case 11:
      (*(void (__thiscall **)(#377 *, int, _DWORD))(*(_DWORD *)this + 488))(this, 20, 0);
      goto LABEL_144;
    case 12:
      if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) != 19 )
      {
        (*(void (__thiscall **)(#377 *, int, _DWORD))(*(_DWORD *)this + 488))(this, 5, 0);
        if ( *(_BYTE *)(*((_DWORD *)this + 328) + 5817) )
        {
          BuildingClass::ClearAnims((int *)this, 7);
          BuildingClass::ClearAnims((int *)this, 18);
          if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(MEMORY[0x87F7E8][7806] + 5888) )
          {
            v34 = 0;
            v35 = (_BYTE *)(*((_DWORD *)this + 328) + 4460);
          }
          else
          {
            v34 = 1;
            v35 = (_BYTE *)(*((_DWORD *)this + 328) + 4476);
          }
          if ( v35 && *v35 )
            BuildingClass::PlayAnim(this, MEMORY[0x87F7E8][7806], v35, 8, v34, 0, 0);
        }
      }
LABEL_144:
      TechnoClass::Mission_RepairDispatch((int *)this, v1, v53, v1, v57);
      return 1;
    case 13:
      if ( !*(_BYTE *)(*((_DWORD *)this + 328) + 5821) )
        return TechnoClass::Mission_RepairDispatch((int *)this, v1, v53, v1, v57);
      return 1;
    case 14:
      v12 = v57;
      v13 = (_BYTE *)v53;
      TechnoClass::Mission_RepairDispatch((int *)this, v56, v53, v56, v57);
      if ( !*((_BYTE *)this + 1632) )
        return 10;
      if ( *(_BYTE *)(*((_DWORD *)this + 328) + 5801) )
      {
        if ( Array::Contains((int *)this, v53) )
        {
          result = (*(int (__thiscall **)(#377 *, int, int))(*(_DWORD *)this + 632))(this, 34, v53);
          if ( result == 10 )
            return result;
        }
      }
      if ( *(_BYTE *)(*((_DWORD *)this + 328) + 5803)
        && Array::Contains((int *)this, v53)
        && !TechnoClass::CanSelfRepair((_BYTE *)v53) )
      {
        return 10;
      }
      v14 = *((_DWORD *)this + 328);
      if ( !*(_BYTE *)(v14 + 5825) && !*(_BYTE *)(v14 + 5826) )
      {
        if ( !Array::Contains((int *)this, v53) && Array::ContainsValue((int *)this, v53) )
        {
          (*(void (__thiscall **)(#377 *, int, int))(*(_DWORD *)this + 632))(this, 2, v53);
          Array::Contains((int *)this, v53);
        }
        v54 = 0;
        if ( Array::Contains((int *)this, (int)v13) )
        {
          v15 = *((_DWORD *)this + 328);
          if ( *(_BYTE *)(v15 + 5811) || *(_BYTE *)(v15 + 5820) )
          {
            v16 = v13 ? ((v13[20] & 4) != 0 ? (unsigned int)v13 : 0) : 0;
            v17 = (_DWORD *)(*(int (__thiscall **)(#377 *, char *, unsigned int))(*(_DWORD *)this + 168))(
                              this,
                              v50,
                              v16);
            v18 = Coord::To_Cell(MEMORY[0x87F7E8], v17);
            v19 = *(void **)(v16 + 1444);
            if ( v19 )
            {
              if ( v18 != v19 )
                v54 = 1;
            }
          }
        }
        if ( Team::GetMember(this, 0) )
        {
          v20 = *((_DWORD *)this + 328);
          if ( *(_BYTE *)(v20 + 5801) || *(_BYTE *)(v20 + 5803) )
          {
            Member = Team::GetMember(this, 0);
            v22 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)Member + 72))(Member, v51);
            v23 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(*(_DWORD *)this + 72))(this, v52);
            v24 = *v23 - *v22;
            v25 = v23[1];
            v26 = v23[2];
            v46 = v24;
            v27 = v22[2];
            v47 = v25 - v22[1];
            v48 = v26 - v27;
            v28 = Math::Sqrt((double)v46 * (double)v46 + (double)(v26 - v27) * (double)(v26 - v27) + (double)v47 * (double)v47);
            if ( (int)Math::RoundToInt(v28) > 128 )
              v54 = 1;
          }
        }
        if ( (*(int (__thiscall **)(#377 *, int, _BYTE *))(*(_DWORD *)this + 632))(this, 19, v13) == 1 || v54 )
        {
          *v12 = this;
          v29 = (_BYTE *)*((_DWORD *)this + 328);
          if ( v29[5811] || v29[5820] )
          {
            v30 = (_WORD *)(*(int (__thiscall **)(#377 *, int *))(*(_DWORD *)this + 440))(this, &v45);
            LOWORD(v55) = *v30 + 3;
            HIWORD(v55) = v30[1] + 1;
            v56 = v55;
            *v12 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v56);
            if ( (*(int (__thiscall **)(#377 *, int, _DWORD *, _BYTE *))(*(_DWORD *)this + 636))(this, 18, v12, v13) == 20 )
            {
              (*(void (__thiscall **)(#377 *, int, _BYTE *))(*(_DWORD *)this + 632))(this, 24, v13);
              if ( (*(int (__thiscall **)(#377 *, int, _BYTE *))(*(_DWORD *)this + 632))(this, 22, v13) != 1 )
              {
                (*(void (__thiscall **)(_BYTE *, _DWORD *, int, int))(*(_DWORD *)v13 + 372))(
                  v13,
                  &MEMORY[0x87F7E8][29720],
                  1,
                  1);
                return 1;
              }
            }
          }
          else if ( v29[5835] )
          {
            *v12 = this;
            if ( (*(int (__thiscall **)(#377 *, int, _DWORD *, _BYTE *))(*(_DWORD *)this + 636))(this, 18, v12, v13) == 20 )
            {
              (*(void (__thiscall **)(#377 *, int))(*(_DWORD *)this + 628))(this, 24);
              return 1;
            }
          }
        }
        return 1;
      }
      if ( Array::ContainsValue((int *)this, v53) )
      {
        v49[0] = *((_DWORD *)this + 39);
        v49[1] = *((_DWORD *)this + 40);
        v49[2] = *((_DWORD *)this + 41);
        *v12 = Coord::To_Cell(MEMORY[0x87F7E8], v49);
        (*(void (__thiscall **)(#377 *, int, _DWORD *, int))(*(_DWORD *)this + 636))(this, 18, v12, v53);
        return 1;
      }
      for ( i = 0; i < *((_DWORD *)this + 58); ++i )
      {
        v32 = Team::GetMember(this, i);
        if ( (*(int (__thiscall **)(#377 *, int, int))(*(_DWORD *)this + 632))(this, 34, v32) == 10 )
          (*(void (__thiscall **)(#377 *, int, int))(*(_DWORD *)this + 632))(this, 23, v32);
      }
      if ( !Array::ContainsValue((int *)this, v53) )
        return 10;
      return 1;
    case 15:
      TechnoClass::Mission_RepairDispatch((int *)this, v56, v53, v56, v57);
      if ( !Object::IsAlliedWithObjectHouse(*((_DWORD **)this + 135), v53) )
        return 0;
      if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) == 18 )
        return 10;
      if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) == 19 )
        return 10;
      if ( !*((_DWORD *)this + 333) )
        return 10;
      if ( !MEMORY[0x87F7E8][539633] && !Array::ContainsValue((int *)this, v53) )
      {
        v4 = *((_DWORD *)this + 328);
        if ( !*(_BYTE *)(v4 + 5806) && !*(_BYTE *)(v4 + 5807) )
          return 10;
      }
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 132))(v53) + 1460) != 5
        && (*(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3278)
         && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 132))(v53) + 3278)
         || !*(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3278)
         && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 132))(v53) + 3278)) )
      {
        return 10;
      }
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 132))(v53) + 3434) )
        return 10;
      if ( !*((_BYTE *)this + 1632) )
        return 10;
      v5 = *((_DWORD *)this + 328);
      if ( !*(_BYTE *)(v5 + 5806) && !*(_BYTE *)(v5 + 5807) )
        goto LABEL_33;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) == 1 && !*(_BYTE *)(*((_DWORD *)this + 328) + 5806)
        || (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) == 15 && !*(_BYTE *)(*((_DWORD *)this + 328) + 5807) )
      {
        return 10;
      }
      if ( *(_DWORD *)(v53 + 700) && (unsigned __int8)CellClass::HasContent() )
        return 10;
      v5 = *((_DWORD *)this + 328);
      if ( *((_DWORD *)this + 69) + 1 <= *(_DWORD *)(v5 + 1504)
        && *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 132))(v53) + 896) <= *(double *)(v5 + 904) )
      {
        return 1;
      }
LABEL_33:
      if ( *(_BYTE *)(v5 + 5805) )
        return 1;
      if ( *(_BYTE *)(v5 + 5803) )
      {
        if ( TechnoClass::CanSelfRepair((_BYTE *)v53)
          && (*(int (__thiscall **)(#377 *, int, int))(*(_DWORD *)this + 632))(this, 35, v53) != 1 )
        {
          return 1;
        }
        return 10;
      }
      if ( *(_BYTE *)(v5 + 5801) )
      {
        if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) == 1
           || (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) == 2)
          && (*(int (__thiscall **)(#377 *, int, int))(*(_DWORD *)this + 632))(this, 35, v53) != 1 )
        {
          return 1;
        }
        return 10;
      }
      if ( !*(_BYTE *)(v5 + 5826) && !*(_BYTE *)(v5 + 5825)
        || (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) != 15 )
      {
        v8 = *((_DWORD *)this + 328);
        if ( *(_BYTE *)(v8 + 5835) )
          return (*(int (__stdcall **)(int))(*(_DWORD *)(v53 + 4) + 12))(v53 + 4) != 2 ? 10 : 1;
        if ( !*(_BYTE *)(v8 + 5811)
          || (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) != 1
          || !*(_BYTE *)(*(_DWORD *)(v53 + 1732) + 3598)
          || !MEMORY[0x87F7E8][539633] && *((_DWORD *)this + 70) )
        {
          if ( !*(_BYTE *)(*((_DWORD *)this + 328) + 5820)
            || (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) != 1
            || !*(_BYTE *)(*(_DWORD *)(v53 + 1732) + 3599) )
          {
            return 0;
          }
          if ( !MEMORY[0x87F7E8][539633] )
            return !*((_DWORD *)this + 70);
        }
        return 1;
      }
      if ( v53 )
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) == 15 ? v53 : 0;
      else
        v6 = 0;
      if ( *(_DWORD *)(v6 + 700) && (unsigned __int8)CellClass::HasContent() )
        return 10;
      if ( (unsigned __int8)BuildingClass::IsBeingRepairedOrCaptured(v6) )
        return 10;
      v7 = -(*((_DWORD *)this + 191) != 0);
      LOBYTE(v7) = v7 & 0xF7;
      return v7 + 10;
    case 16:
      if ( *((_DWORD *)this + 70)
        || !Array::ContainsValue((int *)this, v53)
        || *((_BYTE *)this + 129)
        || *((_DWORD *)this + 135) != (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 60))(v53) )
      {
        return 10;
      }
      v33 = (_BYTE *)*((_DWORD *)this + 328);
      if ( v33[5819] || v33[5801] )
        return 1;
      if ( !v33[5820] )
        return 10;
      return 1;
    case 21:
      if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) == 19 )
        return 10;
      v9 = (_BYTE *)*((_DWORD *)this + 328);
      if ( v9[5806] || v9[5807] )
        return 1;
      if ( v9[5801] || v9[5802] || v9[5825] || v9[5826] )
      {
        v11 = *(_DWORD *)this;
        *((_BYTE *)this + 1757) = 1;
        (*(void (__thiscall **)(#377 *, int, _DWORD))(v11 + 488))(this, 20, 0);
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v53 + 488))(v53, 0, 0);
        return 1;
      }
      else if ( v9[5803] )
      {
        v10 = *(_DWORD *)this;
        *((_BYTE *)this + 1757) = 1;
        (*(void (__thiscall **)(#377 *, int, _DWORD))(v10 + 488))(this, 20, 0);
        return 1;
      }
      else if ( v9[5811] )
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v53 + 488))(v53, 16, 0);
        return 1;
      }
      else
      {
        return TechnoClass::Mission_RepairDispatch((int *)this, v1, v53, v1, v57);
      }
    default:
      return TechnoClass::Mission_RepairDispatch((int *)this, v1, v53, v1, v57);
  }
}

/* ASM:
sub     esp, 40h
push    ebx
push    ebp
mov     ebp, [esp+48h+arg_4]
push    esi
push    edi
mov     esi, ecx
lea     eax, [ebp-3]    ; switch 19 cases
cmp     eax, 12h
ja      def_43C2F1      ; jumptable 0043C2F1 default case, cases 4-7,9,10,17-20
xor     ecx, ecx
mov     cl, ds:byte_43CE88[eax]
jmp     ds:jpt_43C2F1[ecx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_43C2F8:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
mov     edx, [esp+50h+arg_8] ; jumptable 0043C2F1 case 15
mov     edi, [esp+50h+arg_0]
push    edx
push    ebp
push    edi
mov     ecx, esi
call    TechnoClass__Mission_RepairDispatch
mov     ecx, [esi+21Ch]
push    edi
call    Object__IsAlliedWithObjectHouse
test    al, al
jnz     short loc_43C326

loc_43C31A:                             ; CODE XREF: BuildingClass__MissionController+3CE↓j
; BuildingClass__MissionController+3DE↓j ...
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C326:                             ; CODE XREF: BuildingClass__MissionController+48↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+184h]
cmp     eax, 12h
jz      loc_43CB68
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 13h
jz      loc_43CB68
mov     eax, [esi+534h]
test    eax, eax
jz      loc_43CB68
mov     eax, ds:0A8E7ACh
test    eax, eax
jnz     short loc_43C38D
push    edi
mov     ecx, esi
call    Array__ContainsValue
test    al, al
jnz     short loc_43C38D
mov     eax, [esi+520h]
mov     cl, [eax+16AEh]
test    cl, cl
jnz     short loc_43C38D
mov     cl, [eax+16AFh]
test    cl, cl
jz      loc_43CB68

loc_43C38D:                             ; CODE XREF: BuildingClass__MissionController+91↑j
; BuildingClass__MissionController+9D↑j ...
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+84h]
cmp     dword ptr [eax+5B4h], 5
jz      short loc_43C3FF
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     cl, [eax+0CCEh]
test    cl, cl
jz      short loc_43C3C8
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+84h]
mov     cl, [eax+0CCEh]
test    cl, cl
jz      short loc_43C3F0

loc_43C3C8:                             ; CODE XREF: BuildingClass__MissionController+E2↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     cl, [eax+0CCEh]
test    cl, cl
jnz     short loc_43C3FF
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+84h]
mov     cl, [eax+0CCEh]
test    cl, cl
jz      short loc_43C3FF

loc_43C3F0:                             ; CODE XREF: BuildingClass__MissionController+F6↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C3FF:                             ; CODE XREF: BuildingClass__MissionController+CE↑j
; BuildingClass__MissionController+10A↑j ...
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+84h]
mov     cl, [eax+0D6Ah]
test    cl, cl
jz      short loc_43C422
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C422:                             ; CODE XREF: BuildingClass__MissionController+141↑j
mov     al, [esi+660h]
test    al, al
jnz     short loc_43C43B
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C43B:                             ; CODE XREF: BuildingClass__MissionController+15A↑j
mov     ebx, [esi+520h]
mov     al, [ebx+16AEh]
test    al, al
jnz     short loc_43C459
mov     al, [ebx+16AFh]
test    al, al
jz      loc_43C4F8

loc_43C459:                             ; CODE XREF: BuildingClass__MissionController+179↑j
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
cmp     eax, 1
jnz     short loc_43C475
mov     ecx, [esi+520h]
mov     al, [ecx+16AEh]
test    al, al
jz      short loc_43C491

loc_43C475:                             ; CODE XREF: BuildingClass__MissionController+193↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 0Fh
jnz     short loc_43C4A0
mov     eax, [esi+520h]
mov     cl, [eax+16AFh]
test    cl, cl
jnz     short loc_43C4A0

loc_43C491:                             ; CODE XREF: BuildingClass__MissionController+1A3↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C4A0:                             ; CODE XREF: BuildingClass__MissionController+1AF↑j
; BuildingClass__MissionController+1BF↑j
mov     ecx, [edi+2BCh]
test    ecx, ecx
jz      short loc_43C4C2
call    CellClass__HasContent
test    al, al
jz      short loc_43C4C2
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C4C2:                             ; CODE XREF: BuildingClass__MissionController+1D8↑j
; BuildingClass__MissionController+1E1↑j
mov     ebx, [esi+520h]
mov     ecx, [esi+114h]
inc     ecx
cmp     ecx, [ebx+5E0h]
jg      short loc_43C4F8
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+84h]
fld     qword ptr [eax+380h]
fcomp   qword ptr [ebx+388h]
fnstsw  ax
test    ah, 41h
jnz     loc_43CCF2

loc_43C4F8:                             ; CODE XREF: BuildingClass__MissionController+183↑j
; BuildingClass__MissionController+205↑j
mov     al, [ebx+16ADh]
test    al, al
jnz     loc_43CCF2
mov     al, [ebx+16ABh]
test    al, al
jz      short loc_43C544
mov     ecx, edi
call    TechnoClass__CanSelfRepair
test    al, al
jz      loc_43CB68
mov     eax, [esi]
push    edi
push    23h ; '#'
mov     ecx, esi
call    dword ptr [eax+278h]
cmp     eax, 1
jz      loc_43CB68
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C544:                             ; CODE XREF: BuildingClass__MissionController+23E↑j
mov     al, [ebx+16A9h]
test    al, al
jz      short loc_43C58F
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 1
jz      short loc_43C56A
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
cmp     eax, 2
jnz     loc_43CB68

loc_43C56A:                             ; CODE XREF: BuildingClass__MissionController+288↑j
mov     edx, [esi]
push    edi
push    23h ; '#'
mov     ecx, esi
call    dword ptr [edx+278h]
cmp     eax, 1
jz      loc_43CB68
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C58F:                             ; CODE XREF: BuildingClass__MissionController+27C↑j
mov     al, [ebx+16C2h]
test    al, al
jnz     short loc_43C5A3
mov     al, [ebx+16C1h]
test    al, al
jz      short loc_43C620

loc_43C5A3:                             ; CODE XREF: BuildingClass__MissionController+2C7↑j
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
cmp     eax, 0Fh
jnz     short loc_43C620
test    edi, edi
jnz     short loc_43C5B7
xor     ebx, ebx
jmp     short loc_43C5CB
; ---------------------------------------------------------------------------

loc_43C5B7:                             ; CODE XREF: BuildingClass__MissionController+2E1↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
mov     ebx, eax
sub     ebx, 0Fh
neg     ebx
sbb     ebx, ebx
not     ebx
and     ebx, edi

loc_43C5CB:                             ; CODE XREF: BuildingClass__MissionController+2E5↑j
mov     ecx, [ebx+2BCh]
test    ecx, ecx
jz      short loc_43C5ED
call    CellClass__HasContent
test    al, al
jz      short loc_43C5ED
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C5ED:                             ; CODE XREF: BuildingClass__MissionController+303↑j
; BuildingClass__MissionController+30C↑j
mov     ecx, ebx
call    BuildingClass__IsBeingRepairedOrCaptured
test    al, al
jz      short loc_43C607
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C607:                             ; CODE XREF: BuildingClass__MissionController+326↑j
mov     eax, [esi+2FCh]
pop     edi
neg     eax
sbb     eax, eax
pop     esi
and     al, 0F7h
pop     ebp
add     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C620:                             ; CODE XREF: BuildingClass__MissionController+2D1↑j
; BuildingClass__MissionController+2DD↑j
mov     eax, [esi+520h]
mov     cl, [eax+16CBh]
test    cl, cl
jz      short loc_43C64F
mov     ecx, [edi+4]
lea     eax, [edi+4]
push    eax
call    dword ptr [ecx+0Ch]
sub     eax, 2
pop     edi
neg     eax
sbb     eax, eax
pop     esi
and     eax, 9
pop     ebp
inc     eax
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C64F:                             ; CODE XREF: BuildingClass__MissionController+35E↑j
mov     cl, [eax+16B3h]
test    cl, cl
jz      short loc_43C690
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 1
jnz     short loc_43C690
mov     eax, [edi+6C4h]
mov     cl, [eax+0E0Eh]
test    cl, cl
jz      short loc_43C690
mov     eax, ds:0A8E7ACh
test    eax, eax
jnz     loc_43CCF2
mov     eax, [esi+118h]
test    eax, eax
jz      loc_43CCF2

loc_43C690:                             ; CODE XREF: BuildingClass__MissionController+387↑j
; BuildingClass__MissionController+393↑j ...
mov     ecx, [esi+520h]
mov     al, [ecx+16BCh]
test    al, al
jz      loc_43C31A
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 1
jnz     loc_43C31A
mov     eax, [edi+6C4h]
mov     cl, [eax+0E0Fh]
test    cl, cl
jz      loc_43C31A
mov     eax, ds:0A8E7ACh
test    eax, eax
jnz     loc_43CCF2
mov     eax, [esi+118h]
test    eax, eax
jnz     loc_43C31A
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C6F2:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
mov     edx, [esi]      ; jumptable 0043C2F1 case 21
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 13h
jnz     short loc_43C710
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C710:                             ; CODE XREF: BuildingClass__MissionController+42F↑j
mov     eax, [esi+520h]
mov     cl, [eax+16AEh]
test    cl, cl
jnz     loc_43CCF2
mov     cl, [eax+16AFh]
test    cl, cl
jnz     loc_43CCF2
mov     cl, [eax+16A9h]
test    cl, cl
jnz     short loc_43C7B5
mov     cl, [eax+16AAh]
test    cl, cl
jnz     short loc_43C7B5
mov     cl, [eax+16C1h]
test    cl, cl
jnz     short loc_43C7B5
mov     cl, [eax+16C2h]
test    cl, cl
jnz     short loc_43C7B5
mov     cl, [eax+16ABh]
test    cl, cl
jz      short loc_43C788
mov     eax, [esi]
push    0
push    14h
mov     ecx, esi
mov     byte ptr [esi+6DDh], 1
call    dword ptr [eax+1E8h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C788:                             ; CODE XREF: BuildingClass__MissionController+492↑j
mov     cl, [eax+16B3h]
test    cl, cl
jz      def_43C2F1      ; jumptable 0043C2F1 default case, cases 4-7,9,10,17-20
mov     ecx, [esp+50h+arg_0]
push    0
push    10h
mov     edx, [ecx]
call    dword ptr [edx+1E8h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C7B5:                             ; CODE XREF: BuildingClass__MissionController+46A↑j
; BuildingClass__MissionController+474↑j ...
mov     eax, [esi]
push    0
push    14h
mov     ecx, esi
mov     byte ptr [esi+6DDh], 1
call    dword ptr [eax+1E8h]
mov     ecx, [esp+50h+arg_0]
push    0
push    0
mov     edx, [ecx]
call    dword ptr [edx+1E8h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C7E9:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
mov     ebx, [esp+50h+arg_8] ; jumptable 0043C2F1 case 14
mov     edi, [esp+50h+arg_0]
push    ebx
push    ebp
push    edi
mov     ecx, esi
call    TechnoClass__Mission_RepairDispatch
mov     al, [esi+660h]
test    al, al
jnz     short loc_43C814
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C814:                             ; CODE XREF: BuildingClass__MissionController+533↑j
mov     eax, [esi+520h]
mov     cl, [eax+16A9h]
test    cl, cl
jz      short loc_43C84C
push    edi
mov     ecx, esi
call    Array__Contains
test    al, al
jz      short loc_43C84C
mov     edx, [esi]
push    edi
push    22h ; '"'
mov     ecx, esi
call    dword ptr [edx+278h]
cmp     eax, 0Ah
jnz     short loc_43C84C
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C84C:                             ; CODE XREF: BuildingClass__MissionController+552↑j
; BuildingClass__MissionController+55E↑j ...
mov     eax, [esi+520h]
mov     cl, [eax+16ABh]
test    cl, cl
jz      short loc_43C882
push    edi
mov     ecx, esi
call    Array__Contains
test    al, al
jz      short loc_43C882
mov     ecx, edi
call    TechnoClass__CanSelfRepair
test    al, al
jnz     short loc_43C882
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C882:                             ; CODE XREF: BuildingClass__MissionController+58A↑j
; BuildingClass__MissionController+596↑j ...
mov     eax, [esi+520h]
mov     cl, [eax+16C1h]
test    cl, cl
jnz     loc_43CB0C
mov     cl, [eax+16C2h]
test    cl, cl
jnz     loc_43CB0C
push    edi
mov     ecx, esi
call    Array__Contains
test    al, al
jnz     short loc_43C8D1
push    edi
mov     ecx, esi
call    Array__ContainsValue
test    al, al
jz      short loc_43C8D1
mov     edx, [esi]
push    edi
push    2
mov     ecx, esi
call    dword ptr [edx+278h]
push    edi
mov     ecx, esi
call    Array__Contains

loc_43C8D1:                             ; CODE XREF: BuildingClass__MissionController+5DE↑j
; BuildingClass__MissionController+5EA↑j
push    edi
mov     ecx, esi
mov     byte ptr [esp+54h+arg_0], 0
call    Array__Contains
test    al, al
jz      short loc_43C93F
mov     eax, [esi+520h]
mov     cl, [eax+16B3h]
test    cl, cl
jnz     short loc_43C8FC
mov     cl, [eax+16BCh]
test    cl, cl
jz      short loc_43C93F

loc_43C8FC:                             ; CODE XREF: BuildingClass__MissionController+620↑j
test    edi, edi
jnz     short loc_43C904
xor     ebp, ebp
jmp     short loc_43C911
; ---------------------------------------------------------------------------

loc_43C904:                             ; CODE XREF: BuildingClass__MissionController+62E↑j
mov     al, [edi+14h]
and     al, 4
neg     al
sbb     eax, eax
and     eax, edi
mov     ebp, eax

loc_43C911:                             ; CODE XREF: BuildingClass__MissionController+632↑j
mov     edx, [esi]
lea     eax, [esp+50h+var_24]
push    ebp
push    eax
mov     ecx, esi
call    dword ptr [edx+0A8h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ebp, [ebp+5A4h]
test    ebp, ebp
jz      short loc_43C93F
cmp     eax, ebp
jz      short loc_43C93F
mov     byte ptr [esp+50h+arg_0], 1

loc_43C93F:                             ; CODE XREF: BuildingClass__MissionController+610↑j
; BuildingClass__MissionController+62A↑j ...
push    0
mov     ecx, esi
call    Team__GetMember
test    eax, eax
jz      loc_43C9F5
mov     eax, [esi+520h]
mov     cl, [eax+16A9h]
test    cl, cl
jnz     short loc_43C96E
mov     cl, [eax+16ABh]
test    cl, cl
jz      loc_43C9F5

loc_43C96E:                             ; CODE XREF: BuildingClass__MissionController+68E↑j
push    0
mov     ecx, esi
call    Team__GetMember
mov     edx, [eax]
lea     ecx, [esp+50h+var_18]
push    ecx
mov     ecx, eax
call    dword ptr [edx+48h]
mov     edx, [esi]
mov     ebp, eax
lea     eax, [esp+50h+var_C]
mov     ecx, esi
push    eax
call    dword ptr [edx+48h]
mov     ecx, [eax]
mov     edx, [ebp+0]
sub     ecx, edx
mov     edx, [eax+4]
mov     eax, [eax+8]
mov     [esp+50h+var_3C], ecx
mov     ecx, [ebp+4]
sub     esp, 8
sub     edx, ecx
mov     ecx, [ebp+8]
mov     [esp+58h+var_38], edx
sub     eax, ecx
fild    [esp+58h+var_38]
mov     [esp+58h+var_34], eax
fild    [esp+58h+var_34]
fild    [esp+58h+var_3C]
fld     st
fmul    st, st(1)
fld     st(2)
fmul    st, st(3)
faddp   st(1), st
fld     st(3)
fmul    st, st(4)
faddp   st(1), st
fstp    [esp+58h+var_58] ; double
fstp    st
fstp    st
fstp    st
call    Math__Sqrt
add     esp, 8
call    Math__RoundToInt
cmp     eax, 80h
jle     short loc_43C9F5
mov     byte ptr [esp+50h+arg_0], 1

loc_43C9F5:                             ; CODE XREF: BuildingClass__MissionController+67A↑j
; BuildingClass__MissionController+698↑j ...
mov     edx, [esi]
push    edi
push    13h
mov     ecx, esi
call    dword ptr [edx+278h]
cmp     eax, 1
jz      short loc_43CA13
mov     al, byte ptr [esp+50h+arg_0]
test    al, al
jz      loc_43CCF2

loc_43CA13:                             ; CODE XREF: BuildingClass__MissionController+735↑j
mov     [ebx], esi
mov     eax, [esi+520h]
mov     cl, [eax+16B3h]
test    cl, cl
jnz     short loc_43CA71
mov     cl, [eax+16BCh]
test    cl, cl
jnz     short loc_43CA71
mov     cl, [eax+16CBh]
test    cl, cl
jz      loc_43CCF2
mov     [ebx], esi
mov     eax, [esi]
push    edi
push    ebx
push    12h
mov     ecx, esi
call    dword ptr [eax+27Ch]
cmp     eax, 14h
jnz     loc_43CCF2
mov     edx, [esi]
push    18h
mov     ecx, esi
call    dword ptr [edx+274h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CA71:                             ; CODE XREF: BuildingClass__MissionController+753↑j
; BuildingClass__MissionController+75D↑j
mov     eax, [esi]
lea     ecx, [esp+50h+var_40]
push    ecx
mov     ecx, esi
call    dword ptr [eax+1B8h]
mov     dx, [eax]
mov     ax, [eax+2]
add     dx, 3
inc     ax
mov     word ptr [esp+50h+arg_0], dx
mov     word ptr [esp+50h+arg_0+2], ax
mov     ecx, [esp+50h+arg_0]
lea     edx, [esp+50h+arg_4]
mov     [esp+50h+arg_4], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     [ebx], eax
mov     eax, [esi]
push    edi
push    ebx
push    12h
mov     ecx, esi
call    dword ptr [eax+27Ch]
cmp     eax, 14h
jnz     loc_43CCF2
mov     edx, [esi]
push    edi
push    18h
mov     ecx, esi
call    dword ptr [edx+278h]
mov     eax, [esi]
push    edi
push    16h
mov     ecx, esi
call    dword ptr [eax+278h]
cmp     eax, 1
jz      loc_43CCF2
mov     edx, [edi]
push    1
push    1
push    89C848h
mov     ecx, edi
call    dword ptr [edx+174h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CB0C:                             ; CODE XREF: BuildingClass__MissionController+5C0↑j
; BuildingClass__MissionController+5CE↑j
push    edi
mov     ecx, esi
call    Array__ContainsValue
test    al, al
jnz     short loc_43CB77
mov     eax, [esi+0E8h]
xor     ebp, ebp
test    eax, eax
jle     short loc_43CB58

loc_43CB24:                             ; CODE XREF: BuildingClass__MissionController+886↓j
push    ebp
mov     ecx, esi
call    Team__GetMember
mov     ebx, eax
mov     eax, [esi]
push    ebx
push    22h ; '"'
mov     ecx, esi
call    dword ptr [eax+278h]
cmp     eax, 0Ah
jnz     short loc_43CB4D
mov     edx, [esi]
push    ebx
push    17h
mov     ecx, esi
call    dword ptr [edx+278h]

loc_43CB4D:                             ; CODE XREF: BuildingClass__MissionController+86E↑j
mov     eax, [esi+0E8h]
inc     ebp
cmp     ebp, eax
jl      short loc_43CB24

loc_43CB58:                             ; CODE XREF: BuildingClass__MissionController+852↑j
push    edi
mov     ecx, esi
call    Array__ContainsValue
test    al, al
jnz     loc_43CCF2

loc_43CB68:                             ; CODE XREF: BuildingClass__MissionController+63↑j
; BuildingClass__MissionController+76↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CB77:                             ; CODE XREF: BuildingClass__MissionController+846↑j
lea     eax, [esi+9Ch]
mov     ecx, [esi+9Ch]
mov     [esp+50h+var_30], ecx
lea     ecx, [esp+50h+var_30]
mov     edx, [eax+4]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+54h+var_2C], edx
mov     eax, [eax+8]
mov     [esp+54h+var_28], eax
call    Coord__To_Cell
mov     [ebx], eax
mov     edx, [esi]
push    edi
push    ebx
push    12h
mov     ecx, esi
call    dword ptr [edx+27Ch]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CBC3:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
mov     eax, [esi+118h] ; jumptable 0043C2F1 case 16
test    eax, eax
jnz     short loc_43CB68
mov     edi, [esp+50h+arg_0]
mov     ecx, esi
push    edi
call    Array__ContainsValue
test    al, al
jz      short loc_43CB68
mov     al, [esi+81h]
test    al, al
jnz     short loc_43CB68
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+3Ch]
cmp     [esi+21Ch], eax
jnz     loc_43CB68
mov     esi, [esi+520h]
mov     al, [esi+16BBh]
test    al, al
jnz     loc_43CCF2
mov     al, [esi+16A9h]
test    al, al
jnz     loc_43CCF2
mov     al, [esi+16BCh]
test    al, al
jz      loc_43CB68
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CC39:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
mov     edx, [esi]      ; jumptable 0043C2F1 case 11
push    0
push    14h
mov     ecx, esi
call    dword ptr [edx+1E8h]
jmp     loc_43CCE0
; ---------------------------------------------------------------------------

loc_43CC4C:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
mov     edx, [esi]      ; jumptable 0043C2F1 case 12
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 13h
jz      loc_43CCE0
mov     eax, [esi]
push    0
push    5
mov     ecx, esi
call    dword ptr [eax+1E8h]
mov     ecx, [esi+520h]
mov     al, [ecx+16B9h]
test    al, al
jz      short loc_43CCE0
push    7
mov     ecx, esi
call    BuildingClass__ClearAnims
push    12h
mov     ecx, esi
call    BuildingClass__ClearAnims
mov     ecx, esi
call    BuildingClass__GetHealthRatio
mov     edx, ds:8871E0h
fcomp   qword ptr [edx+1700h]
fnstsw  ax
test    ah, 41h
jz      short loc_43CCBB
mov     eax, [esi+520h]
mov     ecx, 1
add     eax, 117Ch
jmp     short loc_43CCC8
; ---------------------------------------------------------------------------

loc_43CCBB:                             ; CODE XREF: BuildingClass__MissionController+9D7↑j
mov     eax, [esi+520h]
xor     ecx, ecx
add     eax, 116Ch

loc_43CCC8:                             ; CODE XREF: BuildingClass__MissionController+9E9↑j
test    eax, eax
jz      short loc_43CCE0
cmp     byte ptr [eax], 0
jz      short loc_43CCE0
push    0               ; int
push    0               ; int
push    ecx             ; int
push    8               ; int
push    eax             ; void *
mov     ecx, esi
call    BuildingClass__PlayAnim

loc_43CCE0:                             ; CODE XREF: BuildingClass__MissionController+977↑j
; BuildingClass__MissionController+989↑j ...
mov     eax, [esp+50h+arg_8]
mov     ecx, [esp+50h+arg_0]
push    eax
push    ebp
push    ecx
mov     ecx, esi
call    TechnoClass__Mission_RepairDispatch

loc_43CCF2:                             ; CODE XREF: BuildingClass__MissionController+222↑j
; BuildingClass__MissionController+230↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CD01:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
push    1               ; jumptable 0043C2F1 case 3
mov     ecx, esi
call    BuildingClass__StartProduction
mov     edx, [esp+50h+arg_8]
mov     eax, [esp+50h+arg_0]
push    edx
push    ebp
push    eax
mov     ecx, esi
call    TechnoClass__Mission_RepairDispatch
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CD2B:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
mov     eax, [esi+520h] ; jumptable 0043C2F1 case 8
mov     ebx, [esp+50h+arg_0]
mov     cl, [eax+16A9h]
test    cl, cl
jnz     short loc_43CD4D
mov     cl, [eax+16ABh]
test    cl, cl
jz      loc_43CDD4

loc_43CD4D:                             ; CODE XREF: BuildingClass__MissionController+A6D↑j
mov     edx, [ebx]
lea     eax, [esp+50h+var_C]
push    eax
mov     ecx, ebx
call    dword ptr [edx+48h]
mov     edx, [esi]
mov     edi, eax
lea     eax, [esp+50h+var_18]
mov     ecx, esi
push    eax
call    dword ptr [edx+48h]
mov     ecx, [eax]
mov     edx, [edi]
sub     ecx, edx
mov     edx, [eax+4]
mov     eax, [eax+8]
mov     [esp+50h+var_3C], ecx
mov     ecx, [edi+4]
sub     esp, 8
sub     edx, ecx
mov     ecx, [edi+8]
mov     [esp+58h+var_38], edx
sub     eax, ecx
fild    [esp+58h+var_38]
mov     [esp+58h+var_34], eax
fild    [esp+58h+var_34]
fild    [esp+58h+var_3C]
fld     st
fmul    st, st(1)
fld     st(2)
fmul    st, st(3)
faddp   st(1), st
fld     st(3)
fmul    st, st(4)
faddp   st(1), st
fstp    [esp+58h+var_58] ; double
fstp    st
fstp    st
fstp    st
call    Math__Sqrt
add     esp, 8
call    Math__RoundToInt
cmp     eax, 180h
jge     short loc_43CDD4
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CDD4:                             ; CODE XREF: BuildingClass__MissionController+A77↑j
; BuildingClass__MissionController+AF3↑j
mov     ecx, [esp+50h+arg_8]
push    ecx
push    ebp
push    ebx
mov     ecx, esi
call    TechnoClass__Mission_RepairDispatch
mov     esi, [esi+520h]
mov     al, [esi+16BDh]
test    al, al
jnz     short loc_43CE15
mov     al, [esi+16A9h]
test    al, al
jnz     short loc_43CE15
mov     al, [esi+16ABh]
test    al, al
jnz     short loc_43CE15
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CE15:                             ; CODE XREF: BuildingClass__MissionController+B20↑j
; BuildingClass__MissionController+B2A↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 17h
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CE24:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
mov     edx, [esi+520h] ; jumptable 0043C2F1 case 13
mov     al, [edx+16BDh]
test    al, al
jz      short def_43C2F1 ; jumptable 0043C2F1 default case, cases 4-7,9,10,17-20
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

def_43C2F1:                             ; CODE XREF: BuildingClass__MissionController+13↑j
; BuildingClass__MissionController+21↑j ...
mov     eax, [esp+50h+arg_8] ; jumptable 0043C2F1 default case, cases 4-7,9,10,17-20
mov     ecx, [esp+50h+arg_0]
push    eax
push    ebp
push    ecx
mov     ecx, esi
call    TechnoClass__Mission_RepairDispatch
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 40h
retn    0Ch
*/
}

int BuildingClass::ProcessMission() { return MissionController(); }

// IDA 0x459e70: guard mission - constant wait timer
int BuildingClass::Mission_Guard() { return 1824; }
int BuildingClass::Mission_Attack() { return 0; }
int BuildingClass::Mission_Move() { return 0; }
int BuildingClass::Mission_Enter() { return 0; }
int BuildingClass::Mission_Capture() { return 0; }
int BuildingClass::Mission_Harvest() { return 0; }
int BuildingClass::Mission_Deploy() { return 0; }

// IDA 0x450010: check if mission is guard
// 0x458dd0
bool BuildingClass::CheckMissionGuard() {
// [IDA decompile]
int __thiscall BuildingClass::_vt256(#377 *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 328);
  return *(_BYTE *)(v1 + 5499)
      && *(_BYTE *)(v1 + 5500)
      && (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 1032))(this) > 0;
}

/* ASM:
mov     eax, [ecx+520h]
mov     dl, [eax+157Bh]
test    dl, dl
jz      short loc_458DFC
mov     dl, [eax+157Ch]
test    dl, dl
jz      short loc_458DFC
mov     eax, [ecx]
call    dword ptr [eax+408h]
test    eax, eax
jle     short loc_458DFC
mov     eax, 1
retn
; ---------------------------------------------------------------------------

loc_458DFC:                             ; CODE XREF: BuildingClass__CheckMissionGuard+E↑j
; BuildingClass__CheckMissionGuard+18↑j ...
xor     eax, eax
retn
*/
}
bool BuildingClass::CheckMissionAttack() { return missionStatus == 1; }

// ============================================================
// Section 5: Power
// ============================================================

// IDA 0x454260: per-frame power drain accounting (vt13, shares the slot with
// RadioClass::PowerDrainUpdate). a2 is the COM-stub context, unused by the
// building-specific drain accounting.
// 0x454260
int BuildingClass::PowerDrainUpdate(int a2)
{
// [IDA decompile]
int __thiscall BuildingClass::PowerDrainUpdate(#377 *this)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // edx
  int *v31; // [esp+Ch] [ebp+4h]

  House::PowerBeginUpdate((int)this, (int)v31);
  v2 = *((_DWORD *)this + 330);
  v3 = *((_DWORD *)this + 332);
  if ( v2 != -1 )
  {
    if ( (int)MEMORY[0xA8ED84] - v2 >= v3 )
      v3 = 0;
    else
      v3 -= (int)MEMORY[0xA8ED84] - v2;
  }
  Power::TimerProcess(v3);
  v4 = *((_DWORD *)this + 436);
  v5 = *((_DWORD *)this + 438);
  if ( v4 != -1 )
  {
    if ( (int)MEMORY[0xA8ED84] - v4 >= v5 )
      v5 = 0;
    else
      v5 -= (int)MEMORY[0xA8ED84] - v4;
  }
  Power::TimerProcess(v5);
  Power::TimerProcess(*((_DWORD *)this + 333));
  Power::TimerProcess(*((_DWORD *)this + 334));
  Power::TimerProcess(*((_DWORD *)this + 335));
  v6 = *((_DWORD *)this + 336);
  if ( v6 )
  {
    v7 = (*(int (__stdcall **)(int))(*(_DWORD *)(v6 + 4) + 16))(v6 + 4);
    Power::TimerProcess(v7);
  }
  Power::TimerProcess(*((_DWORD *)this + 337));
  v8 = *((_DWORD *)this + 338);
  if ( v8 )
  {
    v9 = (*(int (__stdcall **)(int))(*(_DWORD *)(v8 + 4) + 16))(v8 + 4);
    Power::TimerProcess(v9);
  }
  v10 = *((_DWORD *)this + 340);
  v11 = *((_DWORD *)this + 342);
  if ( v10 != -1 )
  {
    if ( (int)MEMORY[0xA8ED84] - v10 >= v11 )
      v11 = 0;
    else
      v11 -= (int)MEMORY[0xA8ED84] - v10;
  }
  Power::TimerProcess(v11);
  Power::TimerProcess(*((_DWORD *)this + 383));
  Power::TimerProcess(*((_DWORD *)this + 390));
  Power::TimerProcess(*((_DWORD *)this + 391));
  LOBYTE(v12) = *((_BYTE *)this + 1632);
  v13 = Power::FlagProcess(v31, v12);
  LOBYTE(v13) = *((_BYTE *)this + 1770);
  Power::FlagProcess(v31, v13);
  LOBYTE(v14) = *((_BYTE *)this + 1738);
  Power::FlagProcess(v31, v14);
  LOBYTE(v15) = *((_BYTE *)this + 1739);
  v16 = Power::FlagProcess(v31, v15);
  LOBYTE(v16) = *((_BYTE *)this + 1756);
  Power::FlagProcess(v31, v16);
  LOBYTE(v17) = *((_BYTE *)this + 1757);
  Power::FlagProcess(v31, v17);
  LOBYTE(v18) = *((_BYTE *)this + 1768);
  v19 = Power::FlagProcess(v31, v18);
  LOBYTE(v19) = *((_BYTE *)this + 1758);
  Power::FlagProcess(v31, v19);
  LOBYTE(v20) = *((_BYTE *)this + 1759);
  Power::FlagProcess(v31, v20);
  LOBYTE(v21) = *((_BYTE *)this + 1760);
  v22 = Power::FlagProcess(v31, v21);
  LOBYTE(v22) = *((_BYTE *)this + 1761);
  Power::FlagProcess(v31, v22);
  LOBYTE(v23) = *((_BYTE *)this + 1762);
  Power::FlagProcess(v31, v23);
  LOBYTE(v24) = *((_BYTE *)this + 1763);
  v25 = Power::FlagProcess(v31, v24);
  LOBYTE(v25) = *((_BYTE *)this + 1764);
  Power::FlagProcess(v31, v25);
  LOBYTE(v26) = *((_BYTE *)this + 1740);
  Power::FlagProcess(v31, v26);
  LOBYTE(v27) = *((_BYTE *)this + 1765);
  v28 = Power::FlagProcess(v31, v27);
  LOBYTE(v28) = *((_BYTE *)this + 1766);
  Power::FlagProcess(v31, v28);
  Power::TimerProcess(*((unsigned __int16 *)this + 896));
  LOBYTE(v29) = *((_BYTE *)this + 1794);
  return Power::FinalizeDrain(v31, v29);
}

/* ASM:
push    esi
push    edi
mov     edi, [esp+8+arg_0]
mov     esi, ecx
push    edi
call    House__PowerBeginUpdate
mov     edx, [esi+528h]
mov     eax, [esi+530h]
cmp     edx, 0FFFFFFFFh
jz      short loc_454291
mov     ecx, dword_A8ED54+30h
sub     ecx, edx
cmp     ecx, eax
jge     short loc_45428F
sub     eax, ecx
jmp     short loc_454291
; ---------------------------------------------------------------------------

loc_45428F:                             ; CODE XREF: BuildingClass__PowerDrainUpdate+29↑j
xor     eax, eax

loc_454291:                             ; CODE XREF: BuildingClass__PowerDrainUpdate+1D↑j
; BuildingClass__PowerDrainUpdate+2D↑j
push    eax
mov     ecx, edi
call    Power__TimerProcess
mov     edx, [esi+6D0h]
mov     eax, [esi+6D8h]
cmp     edx, 0FFFFFFFFh
jz      short loc_4542BC
mov     ecx, dword_A8ED54+30h
sub     ecx, edx
cmp     ecx, eax
jge     short loc_4542BA
sub     eax, ecx
jmp     short loc_4542BC
; ---------------------------------------------------------------------------

loc_4542BA:                             ; CODE XREF: BuildingClass__PowerDrainUpdate+54↑j
xor     eax, eax

loc_4542BC:                             ; CODE XREF: BuildingClass__PowerDrainUpdate+48↑j
; BuildingClass__PowerDrainUpdate+58↑j
push    eax
mov     ecx, edi
call    Power__TimerProcess
mov     eax, [esi+534h]
mov     ecx, edi
push    eax
call    Power__TimerProcess
mov     ecx, [esi+538h]
push    ecx
mov     ecx, edi
call    Power__TimerProcess
mov     edx, [esi+53Ch]
mov     ecx, edi
push    edx
call    Power__TimerProcess
mov     eax, [esi+540h]
test    eax, eax
jz      short loc_45430A
mov     ecx, [eax+4]
add     eax, 4
push    eax
call    dword ptr [ecx+10h]
push    eax
mov     ecx, edi
call    Power__TimerProcess

loc_45430A:                             ; CODE XREF: BuildingClass__PowerDrainUpdate+96↑j
mov     edx, [esi+544h]
mov     ecx, edi
push    edx
call    Power__TimerProcess
mov     eax, [esi+548h]
test    eax, eax
jz      short loc_454334
mov     ecx, [eax+4]
add     eax, 4
push    eax
call    dword ptr [ecx+10h]
push    eax
mov     ecx, edi
call    Power__TimerProcess

loc_454334:                             ; CODE XREF: BuildingClass__PowerDrainUpdate+C0↑j
mov     edx, [esi+550h]
mov     eax, [esi+558h]
cmp     edx, 0FFFFFFFFh
jz      short loc_454357
mov     ecx, dword_A8ED54+30h
sub     ecx, edx
cmp     ecx, eax
jge     short loc_454355
sub     eax, ecx
jmp     short loc_454357
; ---------------------------------------------------------------------------

loc_454355:                             ; CODE XREF: BuildingClass__PowerDrainUpdate+EF↑j
xor     eax, eax

loc_454357:                             ; CODE XREF: BuildingClass__PowerDrainUpdate+E3↑j
; BuildingClass__PowerDrainUpdate+F3↑j
push    eax
mov     ecx, edi
call    Power__TimerProcess
mov     edx, [esi+5FCh]
mov     ecx, edi
push    edx
call    Power__TimerProcess
mov     eax, [esi+618h]
mov     ecx, edi
push    eax
call    Power__TimerProcess
mov     ecx, [esi+61Ch]
push    ecx
mov     ecx, edi
call    Power__TimerProcess
mov     dl, [esi+660h]
mov     ecx, edi
push    edx
call    Power__FlagProcess
mov     al, [esi+6EAh]
mov     ecx, edi
push    eax
call    Power__FlagProcess
mov     cl, [esi+6CAh]
push    ecx
mov     ecx, edi
call    Power__FlagProcess
mov     dl, [esi+6CBh]
mov     ecx, edi
push    edx
call    Power__FlagProcess
mov     al, [esi+6DCh]
mov     ecx, edi
push    eax
call    Power__FlagProcess
mov     cl, [esi+6DDh]
push    ecx
mov     ecx, edi
call    Power__FlagProcess
mov     dl, [esi+6E8h]
mov     ecx, edi
push    edx
call    Power__FlagProcess
mov     al, [esi+6DEh]
mov     ecx, edi
push    eax
call    Power__FlagProcess
mov     cl, [esi+6DFh]
push    ecx
mov     ecx, edi
call    Power__FlagProcess
mov     dl, [esi+6E0h]
mov     ecx, edi
push    edx
call    Power__FlagProcess
mov     al, [esi+6E1h]
mov     ecx, edi
push    eax
call    Power__FlagProcess
mov     cl, [esi+6E2h]
push    ecx
mov     ecx, edi
call    Power__FlagProcess
mov     dl, [esi+6E3h]
mov     ecx, edi
push    edx
call    Power__FlagProcess
mov     al, [esi+6E4h]
mov     ecx, edi
push    eax
call    Power__FlagProcess
mov     cl, [esi+6CCh]
push    ecx
mov     ecx, edi
call    Power__FlagProcess
mov     dl, [esi+6E5h]
mov     ecx, edi
push    edx
call    Power__FlagProcess
mov     al, [esi+6E6h]
push    eax
mov     ecx, edi
call    Power__FlagProcess
xor     ecx, ecx
mov     cx, [esi+700h]
push    ecx
mov     ecx, edi
call    Power__TimerProcess
mov     dl, [esi+702h]
mov     ecx, edi
push    edx
call    Power__FinalizeDrain
pop     edi
pop     esi
retn    4
*/
}

// GOLDEN: 0x44E7B0 — BuildingClass::GetPowerOutput.  Faithful 1:1 with IDA.
// Base output (+bonus, +overpower scaling, +summed upgrade outputs), gated by a
// virtual vtable[+468] dispatch and HasPower, then scaled by the health ratio.
// Structure: Type read, vtable call + early return, flag branches, 3-slot
// do-while over Upgrades, two direct calls, multiple returns.  vtable +468 =
// slot 117 = Mission_Harvest (project header vtable; binary impl IDA-labels GetShroudByte).
// 0x44e7b0
int BuildingClass::GetPowerOutput()
{
    int power = this->Type->PowerOutput;               // v2 = *(this->Type + 3808)
    if (this->MissionDispatch())                       // (*(*this + 468))(this) -> bool
        return 0;
    if (this->HasExtraPowerBonus)                      // *(_BYTE*)(this + 1640)
        power += this->Type->PowerBonus;               // v2 += *(this->Type + 3816)
    BuildingTypeClass* type = this->Type;              // v3 = *(this + 328)
    if (type->Overpowerable || type->PoweredSpecial)   // *(v3+5806) || *(v3+5807)
    {
        int bonus = type->PowerBonus;                  // v4 = *(v3 + 3816)
        if (bonus > 0)
        {
            int overpowerers = this->secondaryTurretIndex;  // v5 = *(this + 276)
            if (overpowerers > 0)
                power += overpowerers * bonus;         // v2 += v5 * v4
        }
    }
    if (this->UpgradeLevel)                            // *(_BYTE*)(this + 1794)
    {
        int slot = 0;                                  // v6 = this + 1516 (Upgrades), v7 = 3
        do
        {
            if (Upgrades[slot])                        // *v6   (local pointer walk, no this-read)
                power += Upgrades[slot]->PowerOutput;  // v2 += *(*v6 + 3808)
            ++slot;
        }
        while (slot < 3);
    }
    if (power <= 0 || !this->HasPower)                 // v2 <= 0 || !*(_BYTE*)(this + 1632)
        return 0;
    double healthRatio = this->GetHealthRatio();       // 0x5F5C60
    return Math::RoundToInt(healthRatio * (double)power);  // 0x7C5F00
}

// IDA 0x44e880: base drain + overpower drain
// 0x44e880
int BuildingClass::GetPowerDrain()
{
// [IDA decompile]
double __thiscall BuildingClass_GetHealthRatio(int *this)
{
  double v2; // [esp+0h] [ebp-8h]

  v2 = (double)*(this + 27);
  return v2 / (double)*(int *)((*(int (__thiscall **)(int *))(*this + 136))(this) + 160);
}

/* ASM:
sub     esp, 8
fild    dword ptr [ecx+6Ch]
mov     eax, [ecx]
fstp    [esp+8+var_8]
call    dword ptr [eax+88h]
fild    dword ptr [eax+0A0h]
fdivr   [esp+8+var_8]
add     esp, 8
retn
*/
}

void BuildingClass::PowerUpdate() {}
int BuildingClass::UpdatePowerDrain() { PowerDrainUpdate(0); return 0; }

// 0x4525f0
bool BuildingClass::IsPoweredOn()
{
    if (!Type->Recoilless)
        return true;

    return this->GetCurrentMission() == Mission::Open
        && CheckPowerFlags();
}

// GOLDEN: 0x4555D0 — BuildingClass::IsPoweredActive.  Faithful 1:1 with IDA.
// Determines whether a building is "powered and active" — operational in the
// game world.  Returns false for: unpowered buildings without enough overpowerers,
// deactivated buildings, dead buildings, buildings whose type requires special
// power during low-power conditions, buildings in a power-outage grace period,
// buildings under construction or being sold (unless they have an engineer).
// 0x4555d0
bool BuildingClass::IsPoweredActive()
{
    if (!this->HasPower)
        if (this->Overpowerers.Count < 2)
            return false;

    if (this->isDeactivated)
        return false;

    if (this->health == 0)
        return false;

    if (this->Type->PoweredSpecial)
        if (this->Type->PowerBonus > 0)
            if (HouseClass::GetPowerRatio(this->Owner) < 1.0)
                if (this->Overpowerers.Count < 2)
                    return false;

    if (this->Type->Overpowerable)
    {
        int st = this->Owner->powerBlackoutTimer.StartTime;
        int tl = this->Owner->powerBlackoutTimer.TimeLeft;
        if (st != -1)
        {
            int el = (int)(intptr_t)CurrentFrame - st;
            if (el >= tl) tl = 0;
            else          tl -= el;
        }
        if (tl)
            return false;
        if (this->Owner->recheckPower)
            return false;
    }

    if (!this->Type->NeedsEngineer || this->HasEngineer)
    {
        if (this->GetCurrentMission() != Mission::Construction)
            if (this->GetCurrentMission() != Mission::Selling)
                return true;
    }

    return false;
}

// IDA 0x4a51b0: check power flags
// 0x4a51b0
bool BuildingClass::CheckPowerFlags()
{
    if (!HasPower) return false;
    if (IsOverpowered) return false;
    return true;
}

// IDA 0x4a5130: check flag 24
// 0x4a5130
bool BuildingClass::CheckFlag24()
{
    return HasPower && !IsOverpowered;
}

void BuildingClass::PowerOff() { HasPower = false; }
void BuildingClass::TogglePower() { HasPower = !HasPower; }
void BuildingClass::TogglePower2() { TogglePower(); }
void BuildingClass::EnableTogglePower() { StuffEnabled = true; }
void BuildingClass::EnableStuff() { StuffEnabled = true; }
void BuildingClass::ProcessPowerPlantEffect() {}
void BuildingClass::ProcessActiveUpdate() {}
void BuildingClass::UpdatePowerAnimation() {}
void BuildingClass::UpdatePowerAnim() { UpdatePowerAnimation(); }

// IsNonNullPtr (global helper @ 0x70E240, __stdcall, BOOL(void*)).  core/_funcs.hpp
// declares it argument-less (its generated `/* param_bytes: 4 */` was never lowered
// to a real parameter), so forward-declare the true 1-arg form here for the faithful
// call in GetPowerFrame — avoids pulling the whole _funcs.hpp into this TU.
int IsNonNullPtr(int handle) noexcept;

// GOLDEN: 0x4566B0 — BuildingClass::GetPowerFrame.  Faithful 1:1 with IDA.
// Returns the radial-indicator radius (in cells) for this building's effect:
// PsychicDetectionRadius override > GapGenerator radius > Cloak/Sensor radius >
// radius derived from the powered object.  (IDA labels it GetPowerFrame; the
// binary computes the radial-effect radius.)  Structure: Type read, result<=0
// gate, gap/cloak/sensor branches, two direct calls in the fall-through,
// multiple returns.  Type-relative (type->) reads emit no verifier events; their
// binary // *(v2+OFF) offsets were validated against BuildingTypeClass::Construct-
// Full (0x45DD90) defaults + the INI reader at 0x460BEA:
//   5831 = CloakGenerator (INI "CloakGenerator"),  5832 = SensorArray,
//   5895 = CloakRadiusInCells,                     5900 = PsychicDetectionRadius;
//   3281/3282/3283 = GapGenerator/GapRadiusInCells/SuperGapRadiusInCells
//   (inherited TechnoTypeClass members).
// 0x4566b0
int BuildingClass::GetPowerFrame()
{
    BuildingTypeClass* type = this->Type;                 // v2 = *(this + 1312)  [Type]
    int result = type->PsychicDetectionRadius;            // result = *(v2 + 5900)
    if (result <= 0)
    {
        if (type->GapGenerator)                           // *(v2 + 3281)
        {
            if (this->gapSuperCharged)                    // *(this + 616)
                return type->SuperGapRadiusInCells;       // *(v2 + 3283)
            else
                return type->GapRadiusInCells;            // *(v2 + 3282)
        }
        else if (type->SensorArray || type->CloakGenerator)   // *(v2 + 5832) || *(v2 + 5831)
        {
            return type->CloakRadiusInCells;              // *(v2 + 5895)
        }
        else
        {
            int updated = UpdatePowered();                // TechnoClass::UpdatePowered(this) -- 0x70E1A0
            if (IsNonNullPtr(updated))                    // 0x70E240
            {
                // *(*(_DWORD*)updated + 180) — radius (leptons) of the powered
                // object, read through the opaque handle UpdatePowered returns.
                int radius = *(int *)(*(int *)updated + 180);
                if (radius > 0)
                    return radius / 256;                  // leptons -> cells
            }
            return 0;
        }
    }
    return result;
}

// ============================================================
// Section 6: Production
// ============================================================

// IDA 0x447780: start production of type_index
// 0x447780
int BuildingClass::StartProduction(int type_index)
{
// [IDA decompile]
int __thiscall BuildingClass::StartProduction(int *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // ecx
  int *v7; // ebp
  BOOL v8; // ebx
  bool v9; // al
  int v10; // edx
  _BYTE *v11; // eax
  bool v12; // zf
  int v13; // eax
  BOOL v14; // ebx
  bool v15; // al
  int v16; // edx
  _BYTE *v17; // eax
  int v18; // eax
  BOOL v19; // ebx
  bool v20; // al
  int v21; // edx
  _BYTE *v22; // eax
  int v23; // eax
  BOOL v24; // ebx
  bool v25; // al
  int v26; // edx
  _BYTE *v27; // eax
  int v28; // eax
  BOOL v29; // ebx
  bool v30; // al
  int v31; // edx
  _BYTE *v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // [esp+Ch] [ebp-8h]

  result = -1;
  v4 = a2;
  v5 = *(this + 333);
  *(this + 334) = a2;
  if ( v5 == -1 || !a2 || MEMORY[0x87F7E8][539633] )
  {
    v6 = *(this + 328);
    *(this + 334) = -1;
    *(this + 333) = a2;
    v7 = (int *)(v6 + 12 * a2 + 3844);
    if ( MEMORY[0x87F7E8][539633] )
    {
      v8 = BuildingClass::GetHealthRatio(this) <= *(double *)(MEMORY[0x87F7E8][7806] + 5888);
      v9 = (*(int (__thiscall **)(int *))(*this + 1032))(this) > 0;
      LOBYTE(a2) = v9;
      if ( v8 )
      {
        v11 = (_BYTE *)(*(this + 328) + 5156);
      }
      else
      {
        v12 = !v9;
        v13 = *(this + 328);
        if ( v12 )
          v11 = (_BYTE *)(v13 + 5140);
        else
          v11 = (_BYTE *)(v13 + 5172);
      }
      if ( v11 && *v11 )
        BuildingClass::PlayAnim(this, v10, v11, 18, v8, a2, 0);
      if ( MEMORY[0x87F7E8][539633] )
      {
        v14 = BuildingClass::GetHealthRatio(this) <= *(double *)(MEMORY[0x87F7E8][7806] + 5888);
        v15 = (*(int (__thiscall **)(int *))(*this + 1032))(this) > 0;
        LOBYTE(a2) = v15;
        if ( v14 )
        {
          v17 = (_BYTE *)(*(this + 328) + 4136);
        }
        else
        {
          v12 = !v15;
          v18 = *(this + 328);
          if ( v12 )
            v17 = (_BYTE *)(v18 + 4120);
          else
            v17 = (_BYTE *)(v18 + 4152);
        }
        if ( v17 && *v17 )
          BuildingClass::PlayAnim(this, v16, v17, 3, v14, a2, 0);
        if ( MEMORY[0x87F7E8][539633] )
        {
          v19 = BuildingClass::GetHealthRatio(this) <= *(double *)(MEMORY[0x87F7E8][7806] + 5888);
          v20 = (*(int (__thiscall **)(int *))(*this + 1032))(this) > 0;
          LOBYTE(a2) = v20;
          if ( v19 )
          {
            v22 = (_BYTE *)(*(this + 328) + 4204);
          }
          else
          {
            v12 = !v20;
            v23 = *(this + 328);
            if ( v12 )
              v22 = (_BYTE *)(v23 + 4188);
            else
              v22 = (_BYTE *)(v23 + 4220);
          }
          if ( v22 && *v22 )
            BuildingClass::PlayAnim(this, v21, v22, 4, v19, a2, 0);
          if ( MEMORY[0x87F7E8][539633] )
          {
            v24 = BuildingClass::GetHealthRatio(this) <= *(double *)(MEMORY[0x87F7E8][7806] + 5888);
            v25 = (*(int (__thiscall **)(int *))(*this + 1032))(this) > 0;
            LOBYTE(a2) = v25;
            if ( v24 )
            {
              v27 = (_BYTE *)(*(this + 328) + 4272);
            }
            else
            {
              v12 = !v25;
              v28 = *(this + 328);
              if ( v12 )
                v27 = (_BYTE *)(v28 + 4256);
              else
                v27 = (_BYTE *)(v28 + 4288);
            }
            if ( v27 && *v27 )
              BuildingClass::PlayAnim(this, v26, v27, 5, v24, a2, 0);
            if ( MEMORY[0x87F7E8][539633] )
            {
              v29 = BuildingClass::GetHealthRatio(this) <= *(double *)(MEMORY[0x87F7E8][7806] + 5888);
              v30 = (*(int (__thiscall **)(int *))(*this + 1032))(this) > 0;
              LOBYTE(a2) = v30;
              if ( v29 )
              {
                v32 = (_BYTE *)(*(this + 328) + 4340);
              }
              else
              {
                v12 = !v30;
                v33 = *(this + 328);
                v32 = (_BYTE *)(v12 ? v33 + 4324 : v33 + 4356);
              }
              if ( v32 && *v32 )
                BuildingClass::PlayAnim(this, v31, v32, 6, v29, a2, 0);
            }
          }
        }
      }
    }
    result = v7[2];
    if ( *(_BYTE *)(*(this + 328) + 3363) )
    {
      if ( v4 )
        result = (int)Rules::GetProductionTimeMult(&MEMORY[0x87F7E8][539870], v7[2]);
    }
    v34 = dword_A8ED54[12];
    *(this + 67) = result;
    *(this + 64) = v34;
    *(this + 65) = v35;
    *(this + 66) = result;
    *(this + 62) = *v7;
  }
  return result;
}

/* ASM:
sub     esp, 0Ch
or      eax, 0FFFFFFFFh
push    esi
mov     esi, ecx
push    edi
mov     edi, [esp+14h+arg_0]
mov     ecx, [esi+534h]
mov     [esi+538h], edi
cmp     ecx, eax
jz      short loc_4477B0
test    edi, edi
jz      short loc_4477B0
mov     ecx, ds:0A8E7ACh
test    ecx, ecx
jz      loc_447AAE

loc_4477B0:                             ; CODE XREF: BuildingClass__StartProduction+1C↑j
; BuildingClass__StartProduction+20↑j
mov     ecx, [esi+520h]
mov     [esi+538h], eax
lea     eax, [edi+edi*2]
push    ebx
push    ebp
mov     [esi+534h], edi
lea     ebp, [ecx+eax*4+0F04h]
mov     eax, ds:0A8E7ACh
test    eax, eax
jz      loc_447A63
mov     ecx, esi
call    BuildingClass__GetHealthRatio
mov     edx, ds:8871E0h
fcomp   qword ptr [edx+1700h]
fnstsw  ax
test    ah, 41h
jz      short loc_4477FC
mov     ebx, 1
jmp     short loc_4477FE
; ---------------------------------------------------------------------------

loc_4477FC:                             ; CODE XREF: BuildingClass__StartProduction+73↑j
xor     ebx, ebx

loc_4477FE:                             ; CODE XREF: BuildingClass__StartProduction+7A↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+408h]
test    eax, eax
setnle  al
test    bl, bl
mov     byte ptr [esp+1Ch+arg_0], al
jz      short loc_447822
mov     eax, [esi+520h]
add     eax, 1424h
jmp     short loc_447838
; ---------------------------------------------------------------------------

loc_447822:                             ; CODE XREF: BuildingClass__StartProduction+93↑j
test    al, al
mov     eax, [esi+520h]
jz      short loc_447833
add     eax, 1434h
jmp     short loc_447838
; ---------------------------------------------------------------------------

loc_447833:                             ; CODE XREF: BuildingClass__StartProduction+AA↑j
add     eax, 1414h

loc_447838:                             ; CODE XREF: BuildingClass__StartProduction+A0↑j
; BuildingClass__StartProduction+B1↑j
test    eax, eax
jz      short loc_447853
cmp     byte ptr [eax], 0
jz      short loc_447853
mov     ecx, [esp+1Ch+arg_0]
push    0               ; int
push    ecx             ; int
push    ebx             ; int
push    12h             ; int
push    eax             ; void *
mov     ecx, esi
call    BuildingClass__PlayAnim

loc_447853:                             ; CODE XREF: BuildingClass__StartProduction+BA↑j
; BuildingClass__StartProduction+BF↑j
mov     eax, ds:0A8E7ACh
test    eax, eax
jz      loc_447A63
mov     ecx, esi
call    BuildingClass__GetHealthRatio
mov     edx, ds:8871E0h
fcomp   qword ptr [edx+1700h]
fnstsw  ax
test    ah, 41h
jz      short loc_447881
mov     ebx, 1
jmp     short loc_447883
; ---------------------------------------------------------------------------

loc_447881:                             ; CODE XREF: BuildingClass__StartProduction+F8↑j
xor     ebx, ebx

loc_447883:                             ; CODE XREF: BuildingClass__StartProduction+FF↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+408h]
test    eax, eax
setnle  al
test    bl, bl
mov     byte ptr [esp+1Ch+arg_0], al
jz      short loc_4478A7
mov     eax, [esi+520h]
add     eax, 1028h
jmp     short loc_4478BD
; ---------------------------------------------------------------------------

loc_4478A7:                             ; CODE XREF: BuildingClass__StartProduction+118↑j
test    al, al
mov     eax, [esi+520h]
jz      short loc_4478B8
add     eax, 1038h
jmp     short loc_4478BD
; ---------------------------------------------------------------------------

loc_4478B8:                             ; CODE XREF: BuildingClass__StartProduction+12F↑j
add     eax, 1018h

loc_4478BD:                             ; CODE XREF: BuildingClass__StartProduction+125↑j
; BuildingClass__StartProduction+136↑j
test    eax, eax
jz      short loc_4478D8
cmp     byte ptr [eax], 0
jz      short loc_4478D8
mov     ecx, [esp+1Ch+arg_0]
push    0               ; int
push    ecx             ; int
push    ebx             ; int
push    3               ; int
push    eax             ; void *
mov     ecx, esi
call    BuildingClass__PlayAnim

loc_4478D8:                             ; CODE XREF: BuildingClass__StartProduction+13F↑j
; BuildingClass__StartProduction+144↑j
mov     eax, ds:0A8E7ACh
test    eax, eax
jz      loc_447A63
mov     ecx, esi
call    BuildingClass__GetHealthRatio
mov     edx, ds:8871E0h
fcomp   qword ptr [edx+1700h]
fnstsw  ax
test    ah, 41h
jz      short loc_447906
mov     ebx, 1
jmp     short loc_447908
; ---------------------------------------------------------------------------

loc_447906:                             ; CODE XREF: BuildingClass__StartProduction+17D↑j
xor     ebx, ebx

loc_447908:                             ; CODE XREF: BuildingClass__StartProduction+184↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+408h]
test    eax, eax
setnle  al
test    bl, bl
mov     byte ptr [esp+1Ch+arg_0], al
jz      short loc_44792C
mov     eax, [esi+520h]
add     eax, 106Ch
jmp     short loc_447942
; ---------------------------------------------------------------------------

loc_44792C:                             ; CODE XREF: BuildingClass__StartProduction+19D↑j
test    al, al
mov     eax, [esi+520h]
jz      short loc_44793D
add     eax, 107Ch
jmp     short loc_447942
; ---------------------------------------------------------------------------

loc_44793D:                             ; CODE XREF: BuildingClass__StartProduction+1B4↑j
add     eax, 105Ch

loc_447942:                             ; CODE XREF: BuildingClass__StartProduction+1AA↑j
; BuildingClass__StartProduction+1BB↑j
test    eax, eax
jz      short loc_44795D
cmp     byte ptr [eax], 0
jz      short loc_44795D
mov     ecx, [esp+1Ch+arg_0]
push    0               ; int
push    ecx             ; int
push    ebx             ; int
push    4               ; int
push    eax             ; void *
mov     ecx, esi
call    BuildingClass__PlayAnim

loc_44795D:                             ; CODE XREF: BuildingClass__StartProduction+1C4↑j
; BuildingClass__StartProduction+1C9↑j
mov     eax, ds:0A8E7ACh
test    eax, eax
jz      loc_447A63
mov     ecx, esi
call    BuildingClass__GetHealthRatio
mov     edx, ds:8871E0h
fcomp   qword ptr [edx+1700h]
fnstsw  ax
test    ah, 41h
jz      short loc_44798B
mov     ebx, 1
jmp     short loc_44798D
; ---------------------------------------------------------------------------

loc_44798B:                             ; CODE XREF: BuildingClass__StartProduction+202↑j
xor     ebx, ebx

loc_44798D:                             ; CODE XREF: BuildingClass__StartProduction+209↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+408h]
test    eax, eax
setnle  al
test    bl, bl
mov     byte ptr [esp+1Ch+arg_0], al
jz      short loc_4479B1
mov     eax, [esi+520h]
add     eax, 10B0h
jmp     short loc_4479C7
; ---------------------------------------------------------------------------

loc_4479B1:                             ; CODE XREF: BuildingClass__StartProduction+222↑j
test    al, al
mov     eax, [esi+520h]
jz      short loc_4479C2
add     eax, 10C0h
jmp     short loc_4479C7
; ---------------------------------------------------------------------------

loc_4479C2:                             ; CODE XREF: BuildingClass__StartProduction+239↑j
add     eax, 10A0h

loc_4479C7:                             ; CODE XREF: BuildingClass__StartProduction+22F↑j
; BuildingClass__StartProduction+240↑j
test    eax, eax
jz      short loc_4479E2
cmp     byte ptr [eax], 0
jz      short loc_4479E2
mov     ecx, [esp+1Ch+arg_0]
push    0               ; int
push    ecx             ; int
push    ebx             ; int
push    5               ; int
push    eax             ; void *
mov     ecx, esi
call    BuildingClass__PlayAnim

loc_4479E2:                             ; CODE XREF: BuildingClass__StartProduction+249↑j
; BuildingClass__StartProduction+24E↑j
mov     eax, ds:0A8E7ACh
test    eax, eax
jz      short loc_447A63
mov     ecx, esi
call    BuildingClass__GetHealthRatio
mov     edx, ds:8871E0h
fcomp   qword ptr [edx+1700h]
fnstsw  ax
test    ah, 41h
jz      short loc_447A0C
mov     ebx, 1
jmp     short loc_447A0E
; ---------------------------------------------------------------------------

loc_447A0C:                             ; CODE XREF: BuildingClass__StartProduction+283↑j
xor     ebx, ebx

loc_447A0E:                             ; CODE XREF: BuildingClass__StartProduction+28A↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+408h]
test    eax, eax
setnle  al
test    bl, bl
mov     byte ptr [esp+1Ch+arg_0], al
jz      short loc_447A32
mov     eax, [esi+520h]
add     eax, 10F4h
jmp     short loc_447A48
; ---------------------------------------------------------------------------

loc_447A32:                             ; CODE XREF: BuildingClass__StartProduction+2A3↑j
test    al, al
mov     eax, [esi+520h]
jz      short loc_447A43
add     eax, 1104h
jmp     short loc_447A48
; ---------------------------------------------------------------------------

loc_447A43:                             ; CODE XREF: BuildingClass__StartProduction+2BA↑j
add     eax, 10E4h

loc_447A48:                             ; CODE XREF: BuildingClass__StartProduction+2B0↑j
; BuildingClass__StartProduction+2C1↑j
test    eax, eax
jz      short loc_447A63
cmp     byte ptr [eax], 0
jz      short loc_447A63
mov     ecx, [esp+1Ch+arg_0]
push    0               ; int
push    ecx             ; int
push    ebx             ; int
push    6               ; int
push    eax             ; void *
mov     ecx, esi
call    BuildingClass__PlayAnim

loc_447A63:                             ; CODE XREF: BuildingClass__StartProduction+55↑j
; BuildingClass__StartProduction+DA↑j ...
mov     edx, [esi+520h]
mov     eax, [ebp+8]
mov     cl, [edx+0D23h]
test    cl, cl
jz      short loc_447A85
test    edi, edi
jz      short loc_447A85
push    eax
mov     ecx, 0A8EB60h
call    Rules__GetProductionTimeMult

loc_447A85:                             ; CODE XREF: BuildingClass__StartProduction+2F4↑j
; BuildingClass__StartProduction+2F8↑j
mov     ecx, dword_A8ED54+30h
lea     edx, [esi+100h]
mov     [esi+10Ch], eax
mov     [edx], ecx
mov     ecx, [esp+1Ch+var_8]
mov     [edx+4], ecx
mov     [edx+8], eax
mov     edx, [ebp+0]
pop     ebp
mov     [esi+0F8h], edx
pop     ebx

loc_447AAE:                             ; CODE XREF: BuildingClass__StartProduction+2A↑j
pop     edi
pop     esi
add     esp, 0Ch
retn    4
*/
}

// IDA 0x447ab0: update production timer
// 0x4496b0
void BuildingClass::UpdateProduction()
{
// [IDA decompile]
int __thiscall BuildingClass::UpdateProduction(#377 *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  char *MissionControl; // eax
  int v7; // esi
  _BYTE *v8; // ecx
  int v9; // eax
  int v10; // ebp
  _BYTE *Member; // eax
  _BYTE *v12; // edi
  _DWORD *v13; // ebx
  _DWORD *v14; // eax
  int *v15; // eax
  double v16; // st7
  char *v17; // eax
  int v18; // esi
  char *v19; // eax
  int v20; // esi
  _BYTE v21[12]; // [esp+34h] [ebp-24h] BYREF
  _BYTE v22[12]; // [esp+40h] [ebp-18h] BYREF
  _DWORD v23[3]; // [esp+4Ch] [ebp-Ch] BYREF

  if ( *(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3285) )
  {
    TechnoClass::DrainAmmo((char *)this, *((_DWORD *)this + 49));
    *((_DWORD *)this + 49) = 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 684))(this) )
  {
    v2 = *((_DWORD *)this + 328);
    *((_BYTE *)this + 1757) = 1;
    if ( *(_BYTE *)(v2 + 5827)
      || ((v3 = *(_DWORD *)(v2 + 5872), v3 == -1)
       || (v4 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)MEMORY[0xA83CBC] + v3) + 40) + 200)) == 0
       || DynamicVector::GetOrGrow((_DWORD *)(*((_DWORD *)this + 135) + 21840), *(_DWORD *)(v4 + 3576)))
      && *(_DWORD *)(*((_DWORD *)this + 328) + 5872) != -1
      || *(_BYTE *)(*((_DWORD *)this + 328) + 5499)
      && (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 1032))(this) <= 0
      || !*((_DWORD *)this + 173) )
    {
      MissionControl = MissionClass::GetMissionControl(this);
      v7 = Math::RoundToInt(*((double *)MissionControl + 3) * 900.0);
      return v7 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2);
    }
    else
    {
      (*(void (__thiscall **)(#377 *, int, _DWORD))(*(_DWORD *)this + 488))(this, 1, 0);
      (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 492))(this);
      return 1;
    }
  }
  v8 = (_BYTE *)*((_DWORD *)this + 328);
  if ( v8[5813] )
    return 100;
  v9 = *((_DWORD *)this + 47);
  if ( !v9 )
  {
    BuildingClass::StartProduction((int *)this, 1);
    *((_DWORD *)this + 47) = 1;
LABEL_32:
    if ( *(_BYTE *)(*((_DWORD *)this + 328) + 5802)
      && Team::AllMembersValid((int *)this)
      && (*(int (__thiscall **)(#377 *, int))(*(_DWORD *)this + 628))(this, 29) != 1
      && (*(int (__thiscall **)(#377 *, int))(*(_DWORD *)this + 628))(this, 19) == 1 )
    {
      (*(void (__thiscall **)(#377 *, int, _DWORD))(*(_DWORD *)this + 488))(this, 20, 0);
    }
    if ( *(_BYTE *)(*((_DWORD *)this + 328) + 5801) )
    {
      v17 = MissionClass::GetMissionControl(this);
      v18 = Math::RoundToInt(*((double *)v17 + 2) * 900.0);
      return v18 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2);
    }
    else
    {
      v19 = MissionClass::GetMissionControl(this);
      v20 = Math::RoundToInt(*((double *)v19 + 2) * 900.0);
      return 3 * v20 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2);
    }
  }
  if ( v9 != 1 )
    goto LABEL_32;
  if ( !v8[5801] && !v8[5802] && !v8[5803] || (v10 = 0, *((int *)this + 58) <= 0) )
  {
LABEL_28:
    if ( *(_BYTE *)(*((_DWORD *)this + 328) + 5821) )
      AnimClass::resetAnimation(this);
    goto LABEL_32;
  }
  while ( 1 )
  {
    Member = (_BYTE *)Team::GetMember(this, v10);
    v12 = Member;
    if ( Member )
    {
      if ( (Member[20] & 1) != 0 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)Member + 388))(Member) == 7 )
      {
        v13 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v12 + 72))(v12, v21);
        v14 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(*(_DWORD *)this + 72))(this, v22);
        v15 = Coord::Subtract(v23, *v14 - *v13, v14[1] - v13[1], v14[2] - v13[2]);
        v16 = Math::Sqrt((double)*v15 * (double)*v15 + (double)v15[2] * (double)v15[2] + (double)v15[1] * (double)v15[1]);
        if ( (int)Math::RoundToInt(v16) < 64
          && (*(int (__thiscall **)(#377 *, int, _BYTE *))(*(_DWORD *)this + 632))(this, 19, v12) == 1 )
        {
          break;
        }
      }
    }
    if ( ++v10 >= *((_DWORD *)this + 58) )
      goto LABEL_28;
  }
  (*(void (__thiscall **)(#377 *, int, _DWORD))(*(_DWORD *)this + 488))(this, 20, 0);
  return 1;
}

/* ASM:
push    ebp
mov     ebp, esp
and     esp, 0FFFFFFF8h
sub     esp, 38h
push    ebx
push    ebp
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi]
call    dword ptr [eax+84h]
mov     cl, [eax+0CD5h]
test    cl, cl
jz      short loc_4496E9
mov     ecx, [esi+0C4h]
push    ecx
mov     ecx, esi
call    TechnoClass__DrainAmmo
mov     dword ptr [esi+0C4h], 0

loc_4496E9:                             ; CODE XREF: BuildingClass__UpdateProduction+1F↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2ACh]
test    al, al
jz      loc_4497E4
mov     eax, [esi+520h]
mov     byte ptr [esi+6DDh], 1
mov     cl, [eax+16C3h]
test    cl, cl
jnz     loc_4497AF
mov     eax, [eax+16F0h]
cmp     eax, 0FFFFFFFFh
jz      short loc_449753
mov     ecx, ds:0A83CBCh
mov     edx, [ecx+eax*4]
mov     eax, [edx+28h]
mov     eax, [eax+0C8h]
test    eax, eax
jz      short loc_449753
mov     ecx, [eax+0DF8h]
push    ecx
mov     ecx, [esi+21Ch]
add     ecx, 5550h
call    DynamicVector__GetOrGrow
test    eax, eax
jz      short loc_449762

loc_449753:                             ; CODE XREF: BuildingClass__UpdateProduction+6F↑j
; BuildingClass__UpdateProduction+85↑j
mov     edx, [esi+520h]
cmp     dword ptr [edx+16F0h], 0FFFFFFFFh
jnz     short loc_4497AF

loc_449762:                             ; CODE XREF: BuildingClass__UpdateProduction+A1↑j
mov     eax, [esi+520h]
mov     cl, [eax+157Bh]
test    cl, cl
jz      short loc_449780
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+408h]
test    eax, eax
jle     short loc_4497AF

loc_449780:                             ; CODE XREF: BuildingClass__UpdateProduction+C0↑j
mov     eax, [esi+2B4h]
test    eax, eax
jz      short loc_4497AF
mov     eax, [esi]
push    0
push    1
mov     ecx, esi
call    dword ptr [eax+1E8h]
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1ECh]
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_4497AF:                             ; CODE XREF: BuildingClass__UpdateProduction+60↑j
; BuildingClass__UpdateProduction+B0↑j ...
mov     ecx, esi
call    MissionClass__GetMissionControl
fld     qword ptr [eax+18h]
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
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_4497E4:                             ; CODE XREF: BuildingClass__UpdateProduction+45↑j
mov     ecx, [esi+520h]
mov     al, [ecx+16B5h]
test    al, al
jz      short loc_449801
mov     eax, 64h ; 'd'
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_449801:                             ; CODE XREF: BuildingClass__UpdateProduction+142↑j
mov     eax, [esi+0BCh]
sub     eax, 0
jz      loc_44995D
dec     eax
jnz     loc_449970
mov     al, [ecx+16A9h]
test    al, al
jnz     short loc_449839
mov     al, [ecx+16AAh]
test    al, al
jnz     short loc_449839
mov     al, [ecx+16ABh]
test    al, al
jz      loc_449929

loc_449839:                             ; CODE XREF: BuildingClass__UpdateProduction+16F↑j
; BuildingClass__UpdateProduction+179↑j
mov     eax, [esi+0E8h]
xor     ebp, ebp
test    eax, eax
jle     loc_449929

loc_449849:                             ; CODE XREF: BuildingClass__UpdateProduction+273↓j
push    ebp
mov     ecx, esi
call    Team__GetMember
mov     edi, eax
test    edi, edi
jz      loc_44991A
mov     cl, [edi+14h]
and     cl, 1
mov     [esp+48h+var_31], cl
jz      loc_44991A
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+184h]
cmp     eax, 7
jnz     loc_44991A
mov     eax, [edi]
lea     ecx, [esp+48h+var_24]
push    ecx
mov     ecx, edi
call    dword ptr [eax+48h]
mov     edx, [esi]
mov     ebx, eax
lea     eax, [esp+48h+var_18]
mov     ecx, esi
push    eax
call    dword ptr [edx+48h]
mov     ecx, [eax+8]
mov     edx, [ebx+8]
sub     ecx, edx
mov     edx, [eax+4]
mov     eax, [eax]
push    ecx
mov     ecx, [ebx+4]
sub     edx, ecx
lea     ecx, [esp+4Ch+var_C]
push    edx
mov     edx, [ebx]
sub     eax, edx
push    eax
call    Coord__Subtract
mov     ecx, [eax]
sub     esp, 8
mov     [esp+50h+var_30], ecx
mov     edx, [eax+4]
mov     [esp+50h+var_2C], edx
mov     eax, [eax+8]
fild    [esp+50h+var_2C]
mov     [esp+50h+var_28], eax
fild    [esp+50h+var_28]
fild    [esp+50h+var_30]
fld     st
fmul    st, st(1)
fld     st(2)
fmul    st, st(3)
faddp   st(1), st
fld     st(3)
fmul    st, st(4)
faddp   st(1), st
fstp    [esp+50h+var_50] ; double
fstp    st
fstp    st
fstp    st
call    Math__Sqrt
add     esp, 8
call    Math__RoundToInt
cmp     eax, 40h ; '@'
jge     short loc_44991A
mov     edx, [esi]
push    edi
push    13h
mov     ecx, esi
call    dword ptr [edx+278h]
cmp     eax, 1
jz      short loc_449942

loc_44991A:                             ; CODE XREF: BuildingClass__UpdateProduction+1A5↑j
; BuildingClass__UpdateProduction+1B5↑j ...
mov     eax, [esi+0E8h]
inc     ebp
cmp     ebp, eax
jl      loc_449849

loc_449929:                             ; CODE XREF: BuildingClass__UpdateProduction+183↑j
; BuildingClass__UpdateProduction+193↑j
mov     ecx, [esi+520h]
mov     al, [ecx+16BDh]
test    al, al
jz      short loc_449970
mov     ecx, esi
call    AnimClass__resetAnimation
jmp     short loc_449970
; ---------------------------------------------------------------------------

loc_449942:                             ; CODE XREF: BuildingClass__UpdateProduction+268↑j
mov     eax, [esi]
push    0
push    14h
mov     ecx, esi
call    dword ptr [eax+1E8h]
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_44995D:                             ; CODE XREF: BuildingClass__UpdateProduction+15A↑j
push    1
mov     ecx, esi
call    BuildingClass__StartProduction
mov     dword ptr [esi+0BCh], 1

loc_449970:                             ; CODE XREF: BuildingClass__UpdateProduction+161↑j
; BuildingClass__UpdateProduction+287↑j ...
mov     edx, [esi+520h]
mov     al, [edx+16AAh]
test    al, al
jz      short loc_4499BB
mov     ecx, esi
call    Team__AllMembersValid
test    al, al
jz      short loc_4499BB
mov     eax, [esi]
push    1Dh
mov     ecx, esi
call    dword ptr [eax+274h]
cmp     eax, 1
jz      short loc_4499BB
mov     edx, [esi]
push    13h
mov     ecx, esi
call    dword ptr [edx+274h]
cmp     eax, 1
jnz     short loc_4499BB
mov     eax, [esi]
push    0
push    14h
mov     ecx, esi
call    dword ptr [eax+1E8h]

loc_4499BB:                             ; CODE XREF: BuildingClass__UpdateProduction+2CE↑j
; BuildingClass__UpdateProduction+2D9↑j ...
mov     ecx, [esi+520h]
mov     al, [ecx+16A9h]
mov     ecx, esi
test    al, al
jz      short loc_449A01
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
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_449A01:                             ; CODE XREF: BuildingClass__UpdateProduction+31B↑j
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
lea     ecx, [esi+esi*2]
pop     edi
add     eax, ecx
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
*/
}

// IDA 0x639740: complete production
// 0x639740
void BuildingClass::CompleteProduction()
{
// [IDA decompile]
int __fastcall sub_639740(int a1, int a2)
{
  int v2; // ebx
  int Type; // eax
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  int i; // esi
  _DWORD *v12; // eax
  int v14; // [esp+10h] [ebp-8h] BYREF
  int v15; // [esp+14h] [ebp-4h]

  v2 = a2;
  v15 = a2;
  Type = BuildingClass::GetType((_DWORD *)a1);
  v14 = v2;
  v5 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)(Type + 4) + 16))(Type + 4, &v14);
  v6 = BuildingClass::GetType((_DWORD *)a1);
  v7 = *(_DWORD *)(v6 + 20);
  *(_DWORD *)(v6 + 148) = v5;
  *(_BYTE *)(v6 + 152) = 1;
  *(_DWORD *)(v6 + 144) = v7 - v5;
  if ( !MEMORY[0xAC4CC8] )
  {
    if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(a1 + 540)) )
    {
      MEMORY[0xAC4CC8] = 1;
      v8 = *(_DWORD *)(v6 + 20) - 1;
      if ( v8 >= 0 )
        v9 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 4 * v8);
      else
        v9 = 0;
      v10 = *(_DWORD *)(v9 + 16);
      for ( i = 0; i < v10; ++i )
      {
        v12 = *(_DWORD **)(*(_DWORD *)(v9 + 4) + 4 * i);
        if ( *(_BYTE *)(*v12 + 131) )
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v12 + 336))(*v12);
      }
      v2 = v15;
    }
    BuildingClass::CheckExitPath((_DWORD *)a1);
  }
  return ScriptAction::FindSquadMember(v2);
}

/* ASM:
sub     esp, 8
push    ebx
push    ebp
push    esi
mov     ebx, edx
push    edi
mov     ebp, ecx
mov     [esp+18h+var_4], ebx
call    BuildingClass__GetType
lea     ecx, [eax+4]
lea     edx, [esp+18h+var_8]
push    edx
mov     [esp+1Ch+var_8], ebx
mov     eax, [ecx]
call    dword ptr [eax+10h]
mov     ecx, ebp
mov     edi, eax
call    BuildingClass__GetType
mov     esi, eax
mov     eax, [esi+14h]
mov     [esi+94h], edi
sub     eax, edi
mov     byte ptr [esi+98h], 1
mov     [esi+90h], eax
mov     al, byte ptr dword_A8ED54+35F74h
test    al, al
jnz     short loc_6397EA
mov     ecx, [ebp+21Ch] ; this
call    House__IsHumanPlayer
test    al, al
jz      short loc_6397E3
mov     byte ptr dword_A8ED54+35F74h, 1
mov     eax, [esi+14h]
dec     eax
jns     short loc_6397B1
xor     edi, edi
jmp     short loc_6397B7
; ---------------------------------------------------------------------------

loc_6397B1:                             ; CODE XREF: BuildingClass__CompleteProduction+6B↑j
mov     ecx, [esi+8]
mov     edi, [ecx+eax*4]

loc_6397B7:                             ; CODE XREF: BuildingClass__CompleteProduction+6F↑j
mov     ebx, [edi+10h]
xor     esi, esi
test    ebx, ebx
jle     short loc_6397DF

loc_6397C0:                             ; CODE XREF: BuildingClass__CompleteProduction+9D↓j
mov     edx, [edi+4]
mov     eax, [edx+esi*4]
mov     ecx, [eax]
mov     al, [ecx+83h]
test    al, al
jz      short loc_6397DA
mov     edx, [ecx]
call    dword ptr [edx+150h]

loc_6397DA:                             ; CODE XREF: BuildingClass__CompleteProduction+90↑j
inc     esi
cmp     esi, ebx
jl      short loc_6397C0

loc_6397DF:                             ; CODE XREF: BuildingClass__CompleteProduction+7E↑j
mov     ebx, [esp+18h+var_4]

loc_6397E3:                             ; CODE XREF: BuildingClass__CompleteProduction+5E↑j
mov     ecx, ebp
call    BuildingClass__CheckExitPath

loc_6397EA:                             ; CODE XREF: BuildingClass__CompleteProduction+4F↑j
mov     ecx, ebx
call    ScriptAction__FindSquadMember
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn
*/
}

void BuildingClass::ProductionDisplayUpdate() {}
void BuildingClass::DisplayProductionFrame() {}

// IDA 0x4513d0: check if production is active
// 0x4513d0
bool BuildingClass::ProductionCheck()
{
// [IDA decompile]
int __thiscall BuildingClass::ProductionCheck(#377 *this)
{
  if ( *((_DWORD *)this + 333) && *((_BYTE *)this + 1764) )
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 328) + 156))(*((_DWORD *)this + 328));
  else
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 328) + 192))(*((_DWORD *)this + 328));
}

/* ASM:
mov     eax, [ecx+534h]
test    eax, eax
jz      short loc_4513F2
mov     al, [ecx+6E4h]
test    al, al
jz      short loc_4513F2
mov     ecx, [ecx+520h]
mov     eax, [ecx]
jmp     dword ptr [eax+9Ch]
; ---------------------------------------------------------------------------

loc_4513F2:                             ; CODE XREF: BuildingClass__ProductionCheck+8↑j
; BuildingClass__ProductionCheck+12↑j
mov     ecx, [ecx+520h]
mov     edx, [ecx]
jmp     dword ptr [edx+0C0h]
*/
}

// IDA 0x4478b0: abandon current production
// 0x4c9ff0
void BuildingClass::AbandonProduction() {
// [IDA decompile]
char __thiscall BuildingClass_AbandonProduction(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  #72 *v7; // eax
  #375 *v8; // ecx
  int v9; // ecx
  int v11; // [esp+Ch] [ebp-8h]

  v2 = *(_DWORD *)(this + 88);
  if ( !v2 )
    return 0;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 136))(v2);
  Debug::Log("Abandoning production of %s\n", (const char *)(v3 + 100));
  v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 136))(*(_DWORD *)(this + 88));
  v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 132))(v4, *(_DWORD *)(*(_DWORD *)(this + 88) + 540));
  HouseClass::AddPower(*(_DWORD **)(this + 108), v5 - *(_DWORD *)(this + 96));
  v6 = *(_DWORD *)(this + 104);
  *(_DWORD *)(this + 96) = 0;
  if ( v6 )
    *(_DWORD *)(this + 104) = -1;
  v7 = MEMORY[0xA8ED84];
  *(_DWORD *)(this + 56) = 0;
  *(_DWORD *)(this + 44) = v7;
  *(_DWORD *)(this + 48) = v11;
  *(_DWORD *)(this + 52) = 0;
  v8 = *(#375 **)(this + 108);
  *(_DWORD *)(this + 36) = 0;
  *(_BYTE *)(this + 112) = 1;
  *(_BYTE *)(this + 93) = 1;
  if ( !(unsigned __int8)House::IsCurrentPlayer(v8) )
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 44))(*(_DWORD *)(this + 88)) == 15 )
      *(_DWORD *)(*(_DWORD *)(this + 108) + 22100) = -1;
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 44))(*(_DWORD *)(this + 88)) == 1 )
      *(_DWORD *)(*(_DWORD *)(this + 108) + 22096) = -1;
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 44))(*(_DWORD *)(this + 88)) == 2 )
      *(_DWORD *)(*(_DWORD *)(this + 108) + 22104) = -1;
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 44))(*(_DWORD *)(this + 88)) == 6 )
      *(_DWORD *)(*(_DWORD *)(this + 108) + 22092) = -1;
  }
  ++MEMORY[0xA8E7AC];
  v9 = *(_DWORD *)(this + 88);
  if ( v9 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 32))(v9, 1);
  *(_DWORD *)(this + 88) = 0;
  --MEMORY[0xA8E7AC];
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

// IDA 0x452670: check if can accept production type
// 0x452670
bool BuildingClass::CanAcceptType(int type_idx)
{
// [IDA decompile]
bool __thiscall BuildingClass_CanAcceptType(int this, int a2, int a3)
{
  int v4; // eax

  if ( a3 != *(_DWORD *)(this + 540)
    || _strcmpi((const void *)(a2 + 3720), (const void *)(*(_DWORD *)(this + 1312) + 36)) )
  {
    return 0;
  }
  v4 = *(_DWORD *)(a2 + 5884);
  if ( v4 == -1 )
  {
    if ( *(char *)(this + 1794) < *(_DWORD *)(*(_DWORD *)(this + 1312) + 5344) )
      return 1;
  }
  else if ( v4 <= 0 || v4 > 3 )
  {
    return 0;
  }
  return !*(_BYTE *)(this + 1794);
}

/* ASM:
mov     eax, [esp+arg_4]
push    esi
push    edi
mov     edi, ecx
cmp     eax, [edi+21Ch]
jnz     short loc_4526B5
mov     ecx, [edi+520h]
mov     esi, [esp+8+arg_0]
add     ecx, 24h ; '$'
lea     edx, [esi+0E88h]
push    ecx             ; void *
push    edx             ; void *
call    __strcmpi
add     esp, 8
test    eax, eax
jnz     short loc_4526B5
mov     eax, [esi+16FCh]
cmp     eax, 0FFFFFFFFh
jz      short loc_4526BC
test    eax, eax
jle     short loc_4526B5
cmp     eax, 3
jle     short loc_4526D8

loc_4526B5:                             ; CODE XREF: BuildingClass__CanAcceptType+E↑j
; BuildingClass__CanAcceptType+2F↑j ...
pop     edi
xor     al, al
pop     esi
retn    8
; ---------------------------------------------------------------------------

loc_4526BC:                             ; CODE XREF: BuildingClass__CanAcceptType+3A↑j
mov     ecx, [edi+520h]
movsx   eax, byte ptr [edi+702h]
cmp     eax, [ecx+14E0h]
jge     short loc_4526D8
pop     edi
mov     al, 1
pop     esi
retn    8
; ---------------------------------------------------------------------------

loc_4526D8:                             ; CODE XREF: BuildingClass__CanAcceptType+43↑j
; BuildingClass__CanAcceptType+5F↑j
mov     al, [edi+702h]
test    al, al
jnz     short loc_4526B5
pop     edi
mov     al, 1
pop     esi
retn    8
*/
}

void BuildingClass::AddToProductionQueue(int) {}

// IDA 0x6395b0: set production with full initialization
// 0x6395b0
void BuildingClass::SetProduction(int type_index)
{
// [IDA decompile]
char __fastcall BuildingClass::SetProduction(int a1, int a2)
{
  int v2; // ebx
  int Type; // eax
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // edi
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  int v15; // edi
  int v16; // ebx
  int i; // esi
  _BYTE *v18; // ecx
  int v20; // [esp+10h] [ebp-Ch] BYREF
  int v21; // [esp+14h] [ebp-8h] BYREF
  int v22; // [esp+18h] [ebp-4h]

  v2 = a2;
  v22 = a2;
  Type = BuildingClass::GetType((_DWORD *)a1);
  if ( !Type )
  {
    v5 = __2_YAPAXI_Z(156);
    v6 = v5;
    if ( v5 )
    {
      v7 = (_DWORD *)(v5 + 4);
      Object_Set((_DWORD *)(v5 + 4), 0, 0);
      *v7 = &DynamicVectorClass<PlanningNodeClass *>::`vftable';
      *(_DWORD *)(v6 + 24) = 10;
      *(_DWORD *)(v6 + 20) = 0;
      *(_BYTE *)(v6 + 28) = 0;
      *(_BYTE *)(v6 + 29) = 0;
      *(_DWORD *)(v6 + 140) = -1;
      *(_DWORD *)(v6 + 144) = -1;
      *(_DWORD *)(v6 + 148) = -1;
      *(_BYTE *)(v6 + 152) = 0;
      *(_BYTE *)(v6 + 153) = 0;
      *(_DWORD *)v6 = a1;
      v20 = v6;
    }
    else
    {
      v20 = 0;
    }
    ScriptActionVector::PushBack(&dword_A8ED54[55241], &v20);
    BuildingClass::SetType((_DWORD *)a1, v20);
    Type = v20;
  }
  v8 = *(_DWORD *)(Type + 4);
  v21 = v2;
  if ( (*(int (__thiscall **)(int, int *))(v8 + 16))(Type + 4, &v21) == -1 )
    return CompleteBuildingProduction((_DWORD *)a1, v2);
  v9 = BuildingClass::GetType((_DWORD *)a1);
  v10 = *(_DWORD *)(v9 + 4);
  v21 = v2;
  v11 = (*(int (__thiscall **)(int, int *))(v10 + 16))(v9 + 4, &v21);
  v12 = BuildingClass::GetType((_DWORD *)a1);
  v13 = *(_DWORD *)(v12 + 20);
  *(_DWORD *)(v12 + 148) = v11;
  *(_BYTE *)(v12 + 152) = 1;
  *(_DWORD *)(v12 + 144) = v13 - v11;
  if ( !LOBYTE(dword_A8ED54[55261]) )
  {
    if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(a1 + 540)) )
    {
      LOBYTE(dword_A8ED54[55261]) = 1;
      v14 = *(_DWORD *)(v12 + 20) - 1;
      if ( v14 >= 0 )
        v15 = *(_DWORD *)(*(_DWORD *)(v12 + 8) + 4 * v14);
      else
        v15 = 0;
      v16 = *(_DWORD *)(v15 + 16);
      for ( i = 0; i < v16; ++i )
      {
        v18 = **(_BYTE ***)(*(_DWORD *)(v15 + 4) + 4 * i);
        if ( v18[131] )
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 336))(v18);
      }
      v2 = v22;
    }
    BuildingClass::CheckExitPath((_DWORD *)a1);
  }
  return ScriptAction::FindSquadMember(v2);
}

/* ASM:
sub     esp, 0Ch
push    ebx
push    ebp
push    esi
mov     ebx, edx
push    edi
mov     ebp, ecx
mov     [esp+1Ch+var_4], ebx
call    BuildingClass__GetType
test    eax, eax
jnz     loc_63965B
push    9Ch             ; Size
call    ??2_YAPAXI_Z
mov     esi, eax
add     esp, 4
test    esi, esi
jz      short loc_639634
lea     edi, [esi+4]
push    0
push    0
mov     ecx, edi
call    Object_Set
mov     dword ptr [edi], offset ??_7?$DynamicVectorClass@PAVPlanningNodeClass@@@@6B@ ; const DynamicVectorClass<PlanningNodeClass *>::`vftable'
mov     dword ptr [edi+14h], 0Ah
mov     dword ptr [edi+10h], 0
mov     byte ptr [esi+1Ch], 0
or      eax, 0FFFFFFFFh
mov     byte ptr [esi+1Dh], 0
mov     [esi+8Ch], eax
mov     [esi+90h], eax
mov     [esi+94h], eax
mov     byte ptr [esi+98h], 0
mov     byte ptr [esi+99h], 0
mov     [esi], ebp
mov     [esp+1Ch+var_C], esi
jmp     short loc_63963C
; ---------------------------------------------------------------------------

loc_639634:                             ; CODE XREF: BuildingClass__SetProduction+2D↑j
mov     [esp+1Ch+var_C], 0

loc_63963C:                             ; CODE XREF: BuildingClass__SetProduction+82↑j
lea     eax, [esp+1Ch+var_C]
mov     ecx, (offset dword_A8ED54+35F24h)
push    eax
call    ScriptActionVector__PushBack
mov     ecx, [esp+1Ch+var_C]
push    ecx
mov     ecx, ebp
call    BuildingClass__SetType
mov     eax, [esp+1Ch+var_C]

loc_63965B:                             ; CODE XREF: BuildingClass__SetProduction+16↑j
mov     edx, [eax+4]
lea     ecx, [eax+4]
lea     eax, [esp+1Ch+var_8]
mov     [esp+1Ch+var_8], ebx
push    eax
call    dword ptr [edx+10h]
cmp     eax, 0FFFFFFFFh
jz      loc_639723
mov     ecx, ebp
call    BuildingClass__GetType
mov     edx, [eax+4]
lea     ecx, [eax+4]
lea     eax, [esp+1Ch+var_8]
mov     [esp+1Ch+var_8], ebx
push    eax
call    dword ptr [edx+10h]
mov     ecx, ebp
mov     edi, eax
call    BuildingClass__GetType
mov     esi, eax
mov     ecx, [esi+14h]
mov     [esi+94h], edi
sub     ecx, edi
mov     byte ptr [esi+98h], 1
mov     [esi+90h], ecx
mov     al, byte ptr dword_A8ED54+35F74h
test    al, al
jnz     short loc_639714
mov     ecx, [ebp+21Ch] ; this
call    House__IsHumanPlayer
test    al, al
jz      short loc_63970D
mov     byte ptr dword_A8ED54+35F74h, 1
mov     eax, [esi+14h]
dec     eax
jns     short loc_6396DB
xor     edi, edi
jmp     short loc_6396E1
; ---------------------------------------------------------------------------

loc_6396DB:                             ; CODE XREF: BuildingClass__SetProduction+125↑j
mov     edx, [esi+8]
mov     edi, [edx+eax*4]

loc_6396E1:                             ; CODE XREF: BuildingClass__SetProduction+129↑j
mov     ebx, [edi+10h]
xor     esi, esi
test    ebx, ebx
jle     short loc_639709

loc_6396EA:                             ; CODE XREF: BuildingClass__SetProduction+157↓j
mov     eax, [edi+4]
mov     ecx, [eax+esi*4]
mov     ecx, [ecx]
mov     al, [ecx+83h]
test    al, al
jz      short loc_639704
mov     edx, [ecx]
call    dword ptr [edx+150h]

loc_639704:                             ; CODE XREF: BuildingClass__SetProduction+14A↑j
inc     esi
cmp     esi, ebx
jl      short loc_6396EA

loc_639709:                             ; CODE XREF: BuildingClass__SetProduction+138↑j
mov     ebx, [esp+1Ch+var_4]

loc_63970D:                             ; CODE XREF: BuildingClass__SetProduction+118↑j
mov     ecx, ebp
call    BuildingClass__CheckExitPath

loc_639714:                             ; CODE XREF: BuildingClass__SetProduction+109↑j
mov     ecx, ebx
call    ScriptAction__FindSquadMember
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0Ch
retn
; ---------------------------------------------------------------------------

loc_639723:                             ; CODE XREF: BuildingClass__SetProduction+C0↑j
mov     edx, ebx
mov     ecx, ebp
call    CompleteBuildingProduction
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0Ch
retn
*/
}

int BuildingClass::GetProductionFrame() const { return ProductionFrame; }
void BuildingClass::DrawFactoryProduction(Point2D*, RectangleStruct*, int) const {}

// ============================================================
// Section 7: Capture / Occupancy
// ============================================================

// IDA 0x43d200: process capture attempt
int BuildingClass::ProcessCapture() { return 0; }

// IDA 0x44c960: capture this building
// 0x44d5d0
void BuildingClass::CaptureBuilding() {
// [IDA decompile]
int __thiscall BuildingClass::CaptureBuilding(#377 *this)
{
  int result; // eax
  #375 *v3; // [esp+Ch] [ebp+4h]

  if ( TechnoClass::SetHouseFlag(this, v3) )
  {
    if ( !MEMORY[0xA8E7AC] )
    {
      *(_DWORD *)(*((_DWORD *)this + 135) + 620) = *(_DWORD *)(*((_DWORD *)this + 328) + 3576);
      *(_BYTE *)(*((_DWORD *)this + 135) + 582) = 1;
    }
    *(_BYTE *)(*((_DWORD *)this + 135) + 508) = 1;
    if ( !Team::AllMembersValid((int *)this)
      && (unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135))
      && (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) != 18
      && *((_DWORD *)this + 45) != 18
      || !Team::AllMembersValid((int *)this)
      && (result = House::IsCurrentPlayer(*((#375 **)this + 135)), !(_BYTE)result)
      && v3 == *((#375 **)this + 135)
      && (result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this), result != 18) )
    {
      result = (*(int (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)this + 1244))(this, 0);
    }
    LOBYTE(result) = 1;
  }
  else
  {
    LOBYTE(result) = 0;
  }
  return result;
}

/* ASM:
push    esi
push    edi
mov     edi, [esp+8+arg_0]
mov     esi, ecx
push    edi             ; int
call    TechnoClass__SetHouseFlag
test    al, al
jz      loc_44D697
mov     eax, ds:0A8E7ACh
test    eax, eax
jnz     short loc_44D614
mov     eax, [esi+520h]
mov     ecx, [esi+21Ch]
mov     edx, [eax+0DF8h]
mov     [ecx+26Ch], edx
mov     eax, [esi+21Ch]
mov     byte ptr [eax+246h], 1

loc_44D614:                             ; CODE XREF: BuildingClass__CaptureBuilding+1D↑j
mov     ecx, [esi+21Ch]
mov     byte ptr [ecx+1FCh], 1
mov     ecx, esi
call    Team__AllMembersValid
test    al, al
jnz     short loc_44D653
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jz      short loc_44D653
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 12h
jz      short loc_44D653
cmp     dword ptr [esi+0B4h], 12h
jnz     short loc_44D684

loc_44D653:                             ; CODE XREF: BuildingClass__CaptureBuilding+5A↑j
; BuildingClass__CaptureBuilding+69↑j ...
mov     ecx, esi
call    Team__AllMembersValid
test    al, al
jnz     short loc_44D690
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_44D690
cmp     edi, [esi+21Ch]
jnz     short loc_44D690
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 12h
jz      short loc_44D690

loc_44D684:                             ; CODE XREF: BuildingClass__CaptureBuilding+81↑j
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+4DCh]

loc_44D690:                             ; CODE XREF: BuildingClass__CaptureBuilding+8C↑j
; BuildingClass__CaptureBuilding+9B↑j ...
pop     edi
mov     al, 1
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_44D697:                             ; CODE XREF: BuildingClass__CaptureBuilding+10↑j
pop     edi
xor     al, al
pop     esi
retn    4
*/
}
void BuildingClass::Capture() { CaptureBuilding(); }

// IDA 0x4521c0: disable temporal effect
// 0x4521c0
void BuildingClass::DisableTemporal()
{
// [IDA decompile]
int __thiscall BuildingClass::DisableTemporal(int *this)
{
  int *v1; // ecx
  int v2; // edx
  int result; // eax
  int v4; // esi

  *((_BYTE *)this + 1632) = 0;
  v1 = this + 343;
  v2 = 21;
  do
  {
    result = *v1;
    if ( *v1 )
    {
      v4 = *(_DWORD *)(result + 172);
      *(_BYTE *)(result + 282) = 1;
      *(_BYTE *)(result + 283) = 0;
      *(_DWORD *)(result + 284) = v4;
      *(_BYTE *)(result + 281) = 1;
    }
    ++v1;
    --v2;
  }
  while ( v2 );
  return result;
}

/* ASM:
mov     byte ptr [ecx+660h], 0
push    esi
add     ecx, 55Ch
mov     edx, 15h

loc_4521D3:                             ; CODE XREF: BuildingClass__DisableTemporal+3E↓j
mov     eax, [ecx]
test    eax, eax
jz      short loc_4521FA
mov     esi, [eax+0ACh]
mov     byte ptr [eax+11Ah], 1
mov     byte ptr [eax+11Bh], 0
mov     [eax+11Ch], esi
mov     byte ptr [eax+119h], 1

loc_4521FA:                             ; CODE XREF: BuildingClass__DisableTemporal+17↑j
add     ecx, 4
dec     edx
jnz     short loc_4521D3
pop     esi
retn
*/
}

// IDA 0x43d230: infiltrate building
// 0x4571e0
void BuildingClass::Infiltrate()
{
// [IDA decompile]
void __thiscall BuildingClass::Infiltrate(#375 **this, #375 *a2)
{
  #375 *v3; // edi
  #375 *v4; // ecx
  int *v5; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // eax
  _DWORD *v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // esi
  int v13; // ecx
  char v14; // [esp+Bh] [ebp-1h]

  v3 = a2;
  v4 = *(this + 135);
  v14 = 0;
  if ( v4 != a2 )
  {
    if ( (unsigned __int8)House::IsHumanPlayer(v4) || (unsigned __int8)House::IsHumanPlayer(v3) )
    {
      v5 = (int *)(*((int (__thiscall **)(#375 **, #375 **))*this + 110))(this, &a2);
      if ( CreateTriggerClassIfFarEnough(9, *v5, *v5) )
        v14 = 1;
    }
    v6 = (int)*(this + 328);
    if ( *(_BYTE *)(v6 + 5796) )
    {
      HouseClass::ReshroudMap(*(this + 135));
      if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) && !*((_BYTE *)*(this + 135) + 22394) && v14 )
        VoxClass::FindAndPlay(aEvaRadarsabota, -1);
      if ( (unsigned __int8)House::IsHumanPlayer(v3) && !*((_BYTE *)*(this + 135) + 22394) )
      {
        if ( v14 )
          VoxClass::FindAndPlay(aEvaBuildinginf, -1);
      }
      goto LABEL_64;
    }
    if ( *(int *)(v6 + 3808) > 0 )
    {
      HouseClass::CreatePowerOutage((int)*(this + 135), *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3428));
      if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) && v14 )
      {
        VoxClass::FindAndPlay(aEvaPowersabota, -1);
      }
      else if ( (unsigned __int8)House::IsHumanPlayer(v3) && v14 )
      {
        VoxClass::FindAndPlay(g_Str_EVA_BuildingInfiltrated, -1);
        VoxClass::FindAndPlay(aEvaEnemybasepo, -1);
      }
      goto LABEL_64;
    }
    v7 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 2348);
    v8 = 0;
    if ( v7 <= 0 )
    {
LABEL_26:
      v10 = *(_DWORD *)(v6 + 5872);
      if ( v10 != -1 )
      {
        SuperClass::Reset(*(_DWORD *)(*((_DWORD *)*(this + 135) + 150) + 4 * v10));
        if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) || (unsigned __int8)House::IsHumanPlayer(v3) && v14 )
          VoxClass::FindAndPlay(g_Str_EVA_BuildingInfiltrated, -1);
        goto LABEL_64;
      }
      if ( *(int *)(v6 + 2048) > 0 )
      {
        a2 = (#375 *)(*(int (__stdcall **)(char *))(*((_DWORD *)*(this + 135) + 9) + 24))((char *)*(this + 135) + 36);
        v12 = Math::RoundToInt((double)(int)a2 * *(float *)(MEMORY[0x87F7E8][7806] + 3432));
        HouseClass::ProcessPowerDrain((int)*(this + 135), v12);
        HouseClass::AddPower(v3, v12);
        if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) && v14 )
          VoxClass::FindAndPlay(aEvaCashstolen, -1);
        if ( (unsigned __int8)House::IsHumanPlayer(v3) && v14 )
          VoxClass::FindAndPlay(aEvaBuildinginf_1, -1);
        goto LABEL_64;
      }
      v13 = *(_DWORD *)(v6 + 3768);
      if ( v13 != 40 )
      {
        if ( v13 != 16 )
          goto LABEL_64;
        *((_BYTE *)v3 + 703) = 1;
        *((_BYTE *)v3 + 508) = 1;
        if ( (unsigned __int8)House::IsHumanPlayer(v3) )
          BYTE2(MEMORY[0x87F7E8][5353]) = 1;
        if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) && v14 )
          VoxClass::FindAndPlay(aEvaTechnologys, -1);
        if ( !(unsigned __int8)House::IsHumanPlayer(v3) || !v14 )
          goto LABEL_64;
LABEL_63:
        VoxClass::FindAndPlay(g_Str_EVA_BuildingInfiltrated, -1);
        VoxClass::FindAndPlay(aEvaNewtechnolo, -1);
LABEL_64:
        (*((void (__thiscall **)(#375 **, int))*this + 73))(this, 2);
        return;
      }
      *((_BYTE *)v3 + 704) = 1;
      *((_BYTE *)v3 + 508) = 1;
      if ( (unsigned __int8)House::IsHumanPlayer(v3) )
        BYTE2(MEMORY[0x87F7E8][5353]) = 1;
      if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) && v14 )
        goto LABEL_51;
    }
    else
    {
      v9 = *(_DWORD **)(MEMORY[0x87F7E8][7806] + 2336);
      while ( *v9 != v6 )
      {
        ++v8;
        ++v9;
        if ( v8 >= v7 )
          goto LABEL_26;
      }
      v11 = *(_DWORD *)(v6 + 1744);
      if ( v11 )
      {
        if ( v11 == 1 )
          *((_BYTE *)v3 + 701) = 1;
        else
          *((_BYTE *)v3 + 700) = 1;
      }
      else
      {
        *((_BYTE *)v3 + 702) = 1;
      }
      *((_BYTE *)v3 + 508) = 1;
      if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) && v14 )
LABEL_51:
        VoxClass::FindAndPlay(aEvaTechnologys, -1);
    }
    if ( !(unsigned __int8)House::IsHumanPlayer(v3) || !v14 )
      goto LABEL_64;
    goto LABEL_63;
  }
}

/* ASM:
push    ecx
push    ebp
mov     ebp, ecx
push    edi
mov     edi, [esp+0Ch+arg_0]
mov     ecx, [ebp+21Ch] ; this
mov     [esp+0Ch+var_1], 0
cmp     ecx, edi
jz      loc_45759F
push    ebx
push    esi
call    House__IsHumanPlayer
test    al, al
mov     ebx, 1
jnz     short loc_457217
mov     ecx, edi        ; this
call    House__IsHumanPlayer
test    al, al
jz      short loc_45723C

loc_457217:                             ; CODE XREF: BuildingClass__Infiltrate+2A↑j
mov     eax, [ebp+0]
lea     ecx, [esp+14h+arg_0]
push    ecx
mov     ecx, ebp
call    dword ptr [eax+1B8h]
mov     edx, [eax]
mov     ecx, 9
push    edx
call    CreateTriggerClassIfFarEnough
test    al, al
jz      short loc_45723C
mov     [esp+14h+var_1], bl

loc_45723C:                             ; CODE XREF: BuildingClass__Infiltrate+35↑j
; BuildingClass__Infiltrate+56↑j
mov     ecx, [ebp+520h]
mov     al, [ecx+16A4h]
test    al, al
jz      short loc_4572CB
mov     ecx, [ebp+21Ch]
call    HouseClass__ReshroudMap
mov     ecx, [ebp+21Ch] ; this
call    House__IsHumanPlayer
test    al, al
jz      short loc_45728D
mov     eax, [ebp+21Ch]
mov     cl, [eax+577Ah]
test    cl, cl
jnz     short loc_45728D
mov     al, [esp+14h+var_1]
test    al, al
jz      short loc_45728D
push    0FFFFFFFFh      ; int
or      edx, 0FFFFFFFFh
mov     ecx, offset aEvaRadarsabota ; "EVA_RadarSabotaged"
call    VoxClass__FindAndPlay

loc_45728D:                             ; CODE XREF: BuildingClass__Infiltrate+84↑j
; BuildingClass__Infiltrate+94↑j ...
mov     ecx, edi        ; this
call    House__IsHumanPlayer
test    al, al
jz      loc_457590
mov     ecx, [ebp+21Ch]
mov     al, [ecx+577Ah]
test    al, al
jnz     loc_457590
mov     al, [esp+14h+var_1]
test    al, al
jz      loc_457590
push    0FFFFFFFFh
or      edx, 0FFFFFFFFh
mov     ecx, offset aEvaBuildinginf ; "EVA_BuildingInfRadarSabotaged"
jmp     loc_45758B
; ---------------------------------------------------------------------------

loc_4572CB:                             ; CODE XREF: BuildingClass__Infiltrate+6A↑j
mov     eax, [ecx+0EE0h]
mov     edx, ds:8871E0h
test    eax, eax
jle     short loc_45734C
mov     eax, [edx+0D64h]
mov     ecx, [ebp+21Ch]
push    eax
call    HouseClass__CreatePowerOutage
mov     ecx, [ebp+21Ch] ; this
call    House__IsHumanPlayer
test    al, al
jz      short loc_457313
mov     al, [esp+14h+var_1]
test    al, al
jz      short loc_457313
push    0FFFFFFFFh
or      edx, 0FFFFFFFFh
mov     ecx, offset aEvaPowersabota ; "EVA_PowerSabotaged"
jmp     loc_45758B
; ---------------------------------------------------------------------------

loc_457313:                             ; CODE XREF: BuildingClass__Infiltrate+11A↑j
; BuildingClass__Infiltrate+122↑j
mov     ecx, edi        ; this
call    House__IsHumanPlayer
test    al, al
jz      loc_457590
mov     al, [esp+14h+var_1]
test    al, al
jz      loc_457590
push    0FFFFFFFFh      ; int
or      edx, 0FFFFFFFFh
mov     ecx, offset g_Str_EVA_BuildingInfiltrated ; "EVA_BuildingInfiltrated"
call    VoxClass__FindAndPlay
push    0FFFFFFFFh
or      edx, 0FFFFFFFFh
mov     ecx, offset aEvaEnemybasepo ; "EVA_EnemyBasePoweredDown"
jmp     loc_45758B
; ---------------------------------------------------------------------------

loc_45734C:                             ; CODE XREF: BuildingClass__Infiltrate+F9↑j
mov     esi, [edx+92Ch]
xor     eax, eax
test    esi, esi
jle     short loc_45736A
mov     edx, [edx+920h]

loc_45735E:                             ; CODE XREF: BuildingClass__Infiltrate+188↓j
cmp     [edx], ecx
jz      short loc_4573C6
inc     eax
add     edx, 4
cmp     eax, esi
jl      short loc_45735E

loc_45736A:                             ; CODE XREF: BuildingClass__Infiltrate+176↑j
mov     eax, [ecx+16F0h]
cmp     eax, 0FFFFFFFFh
jz      loc_457414
mov     ecx, [ebp+21Ch]
mov     edx, [ecx+258h]
mov     ecx, [edx+eax*4]
call    SuperClass__Reset
mov     ecx, [ebp+21Ch] ; this
call    House__IsHumanPlayer
test    al, al
jnz     short loc_4573B7
mov     ecx, edi        ; this
call    House__IsHumanPlayer
test    al, al
jz      loc_457590
mov     al, [esp+14h+var_1]
test    al, al
jz      loc_457590

loc_4573B7:                             ; CODE XREF: BuildingClass__Infiltrate+1BA↑j
push    0FFFFFFFFh
or      edx, 0FFFFFFFFh
mov     ecx, offset g_Str_EVA_BuildingInfiltrated ; "EVA_BuildingInfiltrated"
jmp     loc_45758B
; ---------------------------------------------------------------------------

loc_4573C6:                             ; CODE XREF: BuildingClass__Infiltrate+180↑j
mov     ecx, [ecx+6D0h]
test    ecx, ecx
jnz     short loc_4573D8
mov     [edi+2BEh], bl
jmp     short loc_4573EA
; ---------------------------------------------------------------------------

loc_4573D8:                             ; CODE XREF: BuildingClass__Infiltrate+1EE↑j
cmp     ecx, ebx
jnz     short loc_4573E4
mov     [edi+2BDh], bl
jmp     short loc_4573EA
; ---------------------------------------------------------------------------

loc_4573E4:                             ; CODE XREF: BuildingClass__Infiltrate+1FA↑j
mov     [edi+2BCh], bl

loc_4573EA:                             ; CODE XREF: BuildingClass__Infiltrate+1F6↑j
; BuildingClass__Infiltrate+202↑j
mov     [edi+1FCh], bl
mov     ecx, [ebp+21Ch] ; this
call    House__IsHumanPlayer
test    al, al
jz      loc_4574FE
mov     al, [esp+14h+var_1]
test    al, al
jz      loc_4574FE
jmp     loc_4574EF
; ---------------------------------------------------------------------------

loc_457414:                             ; CODE XREF: BuildingClass__Infiltrate+193↑j
mov     eax, [ecx+800h]
test    eax, eax
jle     loc_4574B0
mov     eax, [ebp+21Ch]
add     eax, 24h ; '$'
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+18h]
mov     edx, ds:8871E0h
mov     [esp+14h+arg_0], eax
fild    [esp+14h+arg_0]
fmul    dword ptr [edx+0D68h]
call    Math__RoundToInt
mov     ecx, [ebp+21Ch]
mov     esi, eax
push    esi
call    HouseClass__ProcessPowerDrain
push    esi
mov     ecx, edi
call    HouseClass__AddPower
mov     ecx, [ebp+21Ch] ; this
call    House__IsHumanPlayer
test    al, al
jz      short loc_457486
mov     al, [esp+14h+var_1]
test    al, al
jz      short loc_457486
push    0FFFFFFFFh      ; int
or      edx, 0FFFFFFFFh
mov     ecx, offset aEvaCashstolen ; "EVA_CashStolen"
call    VoxClass__FindAndPlay

loc_457486:                             ; CODE XREF: BuildingClass__Infiltrate+28D↑j
; BuildingClass__Infiltrate+295↑j
mov     ecx, edi        ; this
call    House__IsHumanPlayer
test    al, al
jz      loc_457590
mov     al, [esp+14h+var_1]
test    al, al
jz      loc_457590
push    0FFFFFFFFh
or      edx, 0FFFFFFFFh
mov     ecx, offset aEvaBuildinginf_1 ; "EVA_BuildingInfCashStolen"
jmp     loc_45758B
; ---------------------------------------------------------------------------

loc_4574B0:                             ; CODE XREF: BuildingClass__Infiltrate+23C↑j
mov     ecx, [ecx+0EB8h]
cmp     ecx, 28h ; '('
jnz     short loc_457517
mov     ecx, edi        ; this
mov     [edi+2C0h], bl
mov     [edi+1FCh], bl
call    House__IsHumanPlayer
test    al, al
jz      short loc_4574D8
mov     ds:884B8Eh, bl

loc_4574D8:                             ; CODE XREF: BuildingClass__Infiltrate+2F0↑j
mov     ecx, [ebp+21Ch] ; this
call    House__IsHumanPlayer
test    al, al
jz      short loc_4574FE
mov     al, [esp+14h+var_1]
test    al, al
jz      short loc_4574FE

loc_4574EF:                             ; CODE XREF: BuildingClass__Infiltrate+22F↑j
push    0FFFFFFFFh      ; int
or      edx, 0FFFFFFFFh
mov     ecx, offset aEvaTechnologys ; "EVA_TechnologyStolen"
call    VoxClass__FindAndPlay

loc_4574FE:                             ; CODE XREF: BuildingClass__Infiltrate+21D↑j
; BuildingClass__Infiltrate+229↑j ...
mov     ecx, edi        ; this
call    House__IsHumanPlayer
test    al, al
jz      loc_457590
mov     al, [esp+14h+var_1]
test    al, al
jz      short loc_457590
jmp     short loc_457572
; ---------------------------------------------------------------------------

loc_457517:                             ; CODE XREF: BuildingClass__Infiltrate+2D9↑j
cmp     ecx, 10h
jnz     short loc_457590
mov     ecx, edi        ; this
mov     [edi+2BFh], bl
mov     [edi+1FCh], bl
call    House__IsHumanPlayer
test    al, al
jz      short loc_457539
mov     ds:884B8Eh, bl

loc_457539:                             ; CODE XREF: BuildingClass__Infiltrate+351↑j
mov     ecx, [ebp+21Ch] ; this
call    House__IsHumanPlayer
test    al, al
jz      short loc_45755F
mov     al, [esp+14h+var_1]
test    al, al
jz      short loc_45755F
push    0FFFFFFFFh      ; int
or      edx, 0FFFFFFFFh
mov     ecx, offset aEvaTechnologys ; "EVA_TechnologyStolen"
call    VoxClass__FindAndPlay

loc_45755F:                             ; CODE XREF: BuildingClass__Infiltrate+366↑j
; BuildingClass__Infiltrate+36E↑j
mov     ecx, edi        ; this
call    House__IsHumanPlayer
test    al, al
jz      short loc_457590
mov     al, [esp+14h+var_1]
test    al, al
jz      short loc_457590

loc_457572:                             ; CODE XREF: BuildingClass__Infiltrate+335↑j
push    0FFFFFFFFh      ; int
or      edx, 0FFFFFFFFh
mov     ecx, offset g_Str_EVA_BuildingInfiltrated ; "EVA_BuildingInfiltrated"
call    VoxClass__FindAndPlay
push    0FFFFFFFFh      ; int
or      edx, 0FFFFFFFFh
mov     ecx, offset aEvaNewtechnolo ; "EVA_NewTechnologyAcquired"

loc_45758B:                             ; CODE XREF: BuildingClass__Infiltrate+E6↑j
; BuildingClass__Infiltrate+12E↑j ...
call    VoxClass__FindAndPlay

loc_457590:                             ; CODE XREF: BuildingClass__Infiltrate+B6↑j
; BuildingClass__Infiltrate+CA↑j ...
mov     eax, [ebp+0]
push    2
mov     ecx, ebp
call    dword ptr [eax+124h]
pop     esi
pop     ebx

loc_45759F:                             ; CODE XREF: BuildingClass__Infiltrate+16↑j
pop     edi
pop     ebp
pop     ecx
retn    4
*/
}

void BuildingClass::ProcessStructureAbandoned() {}
void BuildingClass::ProcessEnterUnit() {}
void BuildingClass::ProcessOccupancy() {}

// IDA 0x63be10: check if idle with no captives
// 0x63be10
bool BuildingClass::IsIdleWithNoCaptives()
{
    return !IsBeingRepaired && !HasBeenCaptured && !C4Applied;
}

// IDA 0x44eb10: get crew count from type
// 0x44eb10
int BuildingClass::GetCrew()
{
// [IDA decompile]
int __thiscall BuildingClass::GetCrew(#377 *this)
{
  if ( *((_BYTE *)this + 1763)
    || Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 99) >= 25
    || *(_DWORD *)(*((_DWORD *)this + 328) + 3768) != 7 )
  {
    return TechnoClass::GetCrew(this);
  }
  else
  {
    return *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3952);
  }
}

/* ASM:
push    esi
mov     esi, ecx
mov     al, [esi+6E3h]
test    al, al
jnz     short loc_44EB53
mov     eax, ds:0A8B230h
push    63h ; 'c'
push    0
lea     ecx, [eax+218h]
call    Random__Range
cmp     eax, 19h
jge     short loc_44EB53
mov     ecx, [esi+520h]
cmp     dword ptr [ecx+0EB8h], 7
jnz     short loc_44EB53
mov     edx, ds:8871E0h
pop     esi
mov     eax, [edx+0F70h]
retn
; ---------------------------------------------------------------------------

loc_44EB53:                             ; CODE XREF: BuildingClass__GetCrew+B↑j
; BuildingClass__GetCrew+24↑j ...
mov     ecx, esi
call    TechnoClass__GetCrew
pop     esi
retn
*/
}

// IDA 0x451330: get crew count
// 0x451330
int BuildingClass::GetCrewCount()
{
// [IDA decompile]
int __thiscall BuildingClass::GetCrewCount(#377 *this)
{
  _BYTE *v2; // ecx
  int v3; // edx
  int v4; // eax
  int v5; // esi
  int result; // eax

  if ( *((_BYTE *)this + 1760) )
    return 0;
  v2 = (_BYTE *)*((_DWORD *)this + 328);
  if ( !v2[3277] )
    return 0;
  v3 = *((_DWORD *)this + 135);
  v4 = *(_DWORD *)(v3 + 488);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v5 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5372);
    }
    else
    {
      if ( v4 != 2 )
        return 0;
      v5 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5376);
    }
  }
  else
  {
    v5 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5368);
  }
  if ( !v5 )
    return 0;
  if ( *((_BYTE *)this + 1763) )
    v5 *= 2;
  result = (*(int (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)v2 + 184))(v2, v3, 0) / v5;
  if ( result < 1 )
    return 1;
  if ( result > 5 )
    return 5;
  return result;
}

/* ASM:
push    esi
push    edi
mov     edi, ecx
mov     al, [edi+6E0h]
test    al, al
jnz     loc_4513C9
mov     ecx, [edi+520h]
mov     al, [ecx+0CCDh]
test    al, al
jz      short loc_4513C9
mov     edx, [edi+21Ch]
mov     eax, [edx+1E8h]
test    eax, eax
jnz     short loc_45136F
mov     eax, ds:8871E0h
mov     esi, [eax+14F8h]
jmp     short loc_451391
; ---------------------------------------------------------------------------

loc_45136F:                             ; CODE XREF: BuildingClass__GetCrewCount+30↑j
cmp     eax, 1
jnz     short loc_451381
mov     eax, ds:8871E0h
mov     esi, [eax+14FCh]
jmp     short loc_451391
; ---------------------------------------------------------------------------

loc_451381:                             ; CODE XREF: BuildingClass__GetCrewCount+42↑j
cmp     eax, 2
jnz     short loc_4513C9
mov     eax, ds:8871E0h
mov     esi, [eax+1500h]

loc_451391:                             ; CODE XREF: BuildingClass__GetCrewCount+3D↑j
; BuildingClass__GetCrewCount+4F↑j
test    esi, esi
jz      short loc_4513C9
mov     al, [edi+6E3h]
test    al, al
jz      short loc_4513A1
add     esi, esi

loc_4513A1:                             ; CODE XREF: BuildingClass__GetCrewCount+6D↑j
mov     eax, [ecx]
push    0
push    edx
call    dword ptr [eax+0B8h]
cdq
idiv    esi
cmp     eax, 1
jge     short loc_4513BC
pop     edi
mov     eax, 1
pop     esi
retn
; ---------------------------------------------------------------------------

loc_4513BC:                             ; CODE XREF: BuildingClass__GetCrewCount+82↑j
cmp     eax, 5
jle     short loc_4513CB
pop     edi
mov     eax, 5
pop     esi
retn
; ---------------------------------------------------------------------------

loc_4513C9:                             ; CODE XREF: BuildingClass__GetCrewCount+C↑j
; BuildingClass__GetCrewCount+20↑j ...
xor     eax, eax

loc_4513CB:                             ; CODE XREF: BuildingClass__GetCrewCount+8F↑j
pop     edi
pop     esi
retn
*/
}

// IDA 0x44eb50: eject crew units
// 0x442d90
void BuildingClass::EjectCrew()
{
// [IDA decompile]
char __thiscall BuildingClass::EjectCrew(int *this, _BYTE *a2)
{
  int v3; // edx
  int v4; // eax
  _WORD *v5; // ebp
  int v6; // eax
  int v7; // eax
  int i; // esi
  _WORD *v9; // ecx
  __int16 v10; // ax
  void *v11; // eax
  int *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edx
  char v17; // al
  _DWORD *Value; // eax
  int v19; // edx
  _BYTE *v20; // eax
  _WORD *v21; // eax
  __int16 v22; // cx
  __int16 v23; // dx
  void *v24; // eax
  int v25; // edx
  int v26; // esi
  int v27; // ebp
  int v28; // eax
  _DWORD *v29; // eax
  int *v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // eax
  int v35; // edx
  int *v36; // eax
  int v37; // kr08_4
  int v38; // eax
  int *v39; // eax
  int v40; // kr0C_4
  int v41; // eax
  int v43; // [esp+14h] [ebp-7Ch] BYREF
  int v44; // [esp+18h] [ebp-78h]
  int v45; // [esp+1Ch] [ebp-74h]
  int v46; // [esp+20h] [ebp-70h]
  int v47; // [esp+24h] [ebp-6Ch]
  _WORD *v48; // [esp+28h] [ebp-68h]
  int v49; // [esp+2Ch] [ebp-64h] BYREF
  int v50; // [esp+30h] [ebp-60h] BYREF
  int v51; // [esp+34h] [ebp-5Ch]
  int v52; // [esp+38h] [ebp-58h]
  int v53; // [esp+3Ch] [ebp-54h] BYREF
  int v54; // [esp+40h] [ebp-50h]
  int v55; // [esp+44h] [ebp-4Ch]
  int v56[3]; // [esp+48h] [ebp-48h] BYREF
  int v57[3]; // [esp+54h] [ebp-3Ch] BYREF
  int v58[3]; // [esp+60h] [ebp-30h] BYREF
  int v59[3]; // [esp+6Ch] [ebp-24h] BYREF
  int v60[3]; // [esp+78h] [ebp-18h] BYREF
  int v61[3]; // [esp+84h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(*this + 440))(this, &v49);
  v4 = *this;
  v44 = v3;
  v5 = (_WORD *)(*(int (__thiscall **)(int *, _DWORD))(v4 + 264))(this, 0);
  v6 = *(this + 336);
  v45 = 2;
  if ( v6 )
    v45 = 1;
  if ( *((_BYTE *)this + 1763) )
    v45 += 6;
  v46 = (*(int (__thiscall **)(int *))(*this + 720))(this);
  v7 = *(this + 328);
  if ( *(_BYTE *)(v7 + 5806) || *(_BYTE *)(v7 + 5807) )
  {
    v7 = *(this + 69);
    if ( v7 > 0 )
    {
      v7 = LinkedList::Pop(this + 69);
      for ( i = v7; v7; i = v7 )
      {
        v9 = v5;
        v5 += 2;
        v10 = *v9 + v44;
        LOWORD(v9) = HIWORD(v44) + v9[1];
        v52 = 0;
        v50 = (v10 << 8) + 128;
        v51 = ((__int16)v9 << 8) + 164;
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)i + 44))(i) == 1 )
        {
          v11 = Coord::To_Cell(MEMORY[0x87F7E8], &v50);
          v12 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v11 + 72))(v11, v58);
        }
        else
        {
          v13 = Coord::To_Cell(MEMORY[0x87F7E8], &v50);
          v12 = ObjectPlacement::CalcPosition(v13, v57, &v50, 0, 0, 0);
        }
        v50 = *v12;
        v51 = v12[1];
        v52 = v12[2];
        ++MEMORY[0x87F7E8][539633];
        *(_BYTE *)(i + 140) = *((_BYTE *)this + 140);
        v53 = *(this + 39);
        v14 = *this;
        v54 = *(this + 40);
        v55 = *(this + 41);
        v15 = (*(int (__thiscall **)(int *))(v14 + 444))(this);
        v16 = *(_DWORD *)((*(int (__thiscall **)(int, int *))(*(_DWORD *)v15 + 72))(v15, v56) + 8);
        v17 = *((_BYTE *)this + 1760);
        v55 = v16;
        if ( v17
          || (Value = ProgressTimer::GetValue((_WORD *)this + 452, &v49),
              !(*(unsigned __int8 (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)i + 216))(
                 i,
                 &v53,
                 (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          if ( a2 )
            v20 = (a2[20] & 1) != 0 ? a2 : 0;
          else
            v20 = 0;
          (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)i + 224))(i, v20);
          (*(void (__thiscall **)(int))(*(_DWORD *)i + 248))(i);
        }
        else
        {
          if ( !*(_BYTE *)(i + 1080) )
          {
            ++*(_DWORD *)(*(_DWORD *)(i + 540) + 756);
            *(_BYTE *)(i + 1080) = 1;
          }
          v19 = *(_DWORD *)i;
          *(_BYTE *)(i + 1081) = 0;
          (*(void (__thiscall **)(int, _DWORD *, int, _DWORD))(v19 + 372))(i, &MEMORY[0x87F7E8][29720], 1, 0);
          if ( !(unsigned __int8)House::IsCurrentPlayer((#375 *)*(this + 135)) )
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)i + 488))(i, 15, 0);
        }
        --MEMORY[0x87F7E8][539633];
        v7 = LinkedList::Pop(this + 69);
      }
    }
  }
  if ( v46 )
  {
    while ( *v5 != 0x7FFF || v5[1] != 0x7FFF )
    {
      v21 = v5;
      v5 += 2;
      v22 = *v21 + v44;
      v23 = HIWORD(v44) + v21[1];
      v48 = v5;
      LOWORD(v47) = v22;
      HIWORD(v47) = v23;
      v43 = v47;
      v24 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v43);
      v25 = *(this + 135);
      v49 = (int)v24;
      if ( !*(_BYTE *)(v25 + 502) && v46 > 0 && Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, v45) == 1 )
      {
        v26 = 0;
        v27 = (*(int (__thiscall **)(int *))(*this + 780))(this);
        if ( v27 )
        {
          v28 = __2_YAPAXI_Z(1776);
          if ( v28 )
            v26 = InfantryClass::Construct(v28, v27, (#37 *)*(this + 135));
          else
            v26 = 0;
        }
        Debug::Log();
        if ( v26 )
        {
          if ( *((_BYTE *)this + 1769) && *(_BYTE *)(*(_DWORD *)(v26 + 1728) + 3230) )
            *(_BYTE *)(v26 + 1753) = 1;
          ++MEMORY[0x87F7E8][539633];
          v52 = 0;
          v50 = ((__int16)v43 << 8) + 128;
          v51 = (SHIWORD(v43) << 8) + 164;
          v29 = Coord::To_Cell(MEMORY[0x87F7E8], &v50);
          v30 = ObjectPlacement::CalcPosition(v29, v59, &v50, 0, 0, 0);
          v50 = *v30;
          v31 = v30[1];
          v51 = v31;
          v32 = v30[2];
          v52 = v32;
          if ( v50 == MEMORY[0x87F7E8][29720] && v31 == MEMORY[0x87F7E8][29721] && v32 == MEMORY[0x87F7E8][29722]
            || !(*(unsigned __int8 (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v26 + 216))(v26, &v50, 0) )
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v26 + 32))(v26, 1);
          }
          else
          {
            Debug::Log();
            v33 = *(_DWORD *)(*(_DWORD *)(v26 + 1728) + 160);
            --v46;
            v34 = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 5, v33);
            v35 = *(_DWORD *)v26;
            *(_DWORD *)(v26 + 108) = v34;
            (*(void (__thiscall **)(int, _DWORD *, int, _DWORD))(v35 + 372))(v26, &MEMORY[0x87F7E8][29720], 1, 0);
            if ( !a2 || Object::IsAlliedWithObjectSimpleHouse((_DWORD *)*(this + 135), a2) )
            {
              if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)*(this + 135)) )
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v26 + 488))(v26, 2, 0);
              else
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v26 + 488))(v26, 15, 0);
            }
            else
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v26 + 488))(v26, 1, 0);
              (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v26 + 968))(v26, a2);
            }
          }
          --MEMORY[0x87F7E8][539633];
        }
        v5 = v48;
      }
      LOBYTE(v7) = Cell::IsBuildable(v49, 1, 1, 1, -1, 0, -1, 1);
      if ( (_BYTE)v7 )
      {
        if ( Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 99) >= 50 )
        {
          v57[1] = (SHIWORD(v43) << 8) + 128;
          v57[0] = ((__int16)v43 << 8) + 128;
          v57[2] = 0;
          v39 = RandomCoordScatter(v61, v57, 128, 0);
          v40 = *v39;
          v41 = v39[1];
          v58[2] = 0;
          v58[0] = ((__int16)(v40 / 256) << 8) + 128;
          v58[1] = ((__int16)(v41 / 256) << 8) + 128;
          LOBYTE(v7) = TimedCreateUnitAtCoords(v58, 100, 100, 0);
        }
        else
        {
          v53 = ((__int16)v43 << 8) + 128;
          v54 = (SHIWORD(v43) << 8) + 128;
          v55 = 0;
          v36 = RandomCoordScatter(v60, &v53, 128, 0);
          v37 = *v36;
          v38 = v36[1];
          v56[2] = 0;
          v56[0] = ((__int16)(v37 / 256) << 8) + 128;
          v56[1] = ((__int16)(v38 / 256) << 8) + 128;
          LOBYTE(v7) = StandardCreateUnitAtCoords(v56, 100, 100, 0);
        }
      }
    }
  }
  return v7;
}

/* ASM:
sub     esp, 7Ch
push    ebx
push    ebp
push    esi
push    edi
mov     edi, ecx
lea     ecx, [esp+8Ch+var_64]
mov     eax, [edi]
push    ecx
mov     ecx, edi
call    dword ptr [eax+1B8h]
mov     edx, [eax]
mov     eax, [edi]
xor     ebx, ebx
mov     ecx, edi
push    ebx
mov     [esp+90h+var_78], edx
call    dword ptr [eax+108h]
mov     ebp, eax
mov     eax, [edi+540h]
cmp     eax, ebx
mov     [esp+8Ch+var_74], 2
jz      short loc_442DD7
mov     [esp+8Ch+var_74], 1

loc_442DD7:                             ; CODE XREF: BuildingClass__EjectCrew+3D↑j
cmp     [edi+6E3h], bl
jz      short loc_442DE4
add     [esp+8Ch+var_74], 6

loc_442DE4:                             ; CODE XREF: BuildingClass__EjectCrew+4D↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2D0h]
mov     [esp+8Ch+var_70], eax
mov     eax, [edi+520h]
cmp     [eax+16AEh], bl
jnz     short loc_442E0C
cmp     [eax+16AFh], bl
jz      loc_443017

loc_442E0C:                             ; CODE XREF: BuildingClass__EjectCrew+6E↑j
mov     eax, [edi+114h]
lea     ecx, [edi+114h]
cmp     eax, ebx
jle     loc_443017
call    LinkedList__Pop
mov     esi, eax
cmp     esi, ebx
jz      loc_443017

loc_442E2F:                             ; CODE XREF: BuildingClass__EjectCrew+281↓j
mov     ax, word ptr [esp+8Ch+var_78]
mov     ecx, ebp
xor     edx, edx
add     ebp, 4
add     ax, [ecx]
mov     cx, [ecx+2]
add     cx, word ptr [esp+8Ch+var_78+2]
mov     [esp+8Ch+var_58], edx
movsx   eax, ax
movsx   ecx, cx
shl     eax, 8
shl     ecx, 8
add     eax, 80h
add     ecx, 0A4h
mov     [esp+8Ch+var_60], eax
mov     [esp+8Ch+var_5C], ecx
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
cmp     eax, 1
jnz     short loc_442EA7
lea     ecx, [esp+8Ch+var_60]
push    ecx
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     edx, [eax]
lea     ecx, [esp+8Ch+var_30]
push    ecx
mov     ecx, eax
call    dword ptr [edx+48h]
mov     edx, [eax]
mov     [esp+8Ch+var_60], edx
mov     ecx, [eax+4]
mov     [esp+8Ch+var_5C], ecx
mov     edx, [eax+8]
mov     [esp+8Ch+var_58], edx
jmp     short loc_442EDE
; ---------------------------------------------------------------------------

loc_442EA7:                             ; CODE XREF: BuildingClass__EjectCrew+E4↑j
push    ebx
push    ebx
lea     eax, [esp+94h+var_60]
push    ebx
lea     ecx, [esp+98h+var_3C]
push    eax
lea     edx, [esp+9Ch+var_60]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    ObjectPlacement__CalcPosition
mov     ecx, [eax]
mov     [esp+8Ch+var_60], ecx
mov     edx, [eax+4]
mov     [esp+8Ch+var_5C], edx
mov     eax, [eax+8]
mov     [esp+8Ch+var_58], eax

loc_442EDE:                             ; CODE XREF: BuildingClass__EjectCrew+115↑j
mov     ecx, ds:0A8E7ACh
lea     edx, [edi+9Ch]
inc     ecx
mov     ds:0A8E7ACh, ecx
mov     cl, [edi+8Ch]
mov     [esi+8Ch], cl
mov     eax, [edx]
mov     [esp+8Ch+var_54], eax
mov     eax, [edi]
mov     ecx, [edx+4]
mov     [esp+8Ch+var_50], ecx
mov     ecx, edi
mov     edx, [edx+8]
mov     [esp+8Ch+var_4C], edx
call    dword ptr [eax+1BCh]
mov     edx, [eax]
lea     ecx, [esp+8Ch+var_48]
push    ecx
mov     ecx, eax
call    dword ptr [edx+48h]
mov     edx, [eax+8]
mov     al, [edi+6E0h]
cmp     al, bl
mov     [esp+8Ch+var_4C], edx
jnz     loc_442FC5
lea     eax, [esp+8Ch+var_64]
lea     ecx, [edi+388h]
push    eax
call    ProgressTimer__GetValue
mov     eax, [eax]
mov     edx, [esi]
shr     eax, 7
inc     eax
mov     ecx, esi
shr     eax, 1
and     eax, 0FFh
push    eax
lea     eax, [esp+90h+var_54]
push    eax
call    dword ptr [edx+0D8h]
test    al, al
jz      short loc_442FC5
cmp     [esi+438h], bl
jnz     short loc_442F8F
mov     eax, [esi+21Ch]
mov     ecx, [eax+2F4h]
inc     ecx
mov     [eax+2F4h], ecx
mov     byte ptr [esi+438h], 1

loc_442F8F:                             ; CODE XREF: BuildingClass__EjectCrew+1E3↑j
mov     edx, [esi]
push    ebx
push    1
push    89C848h
mov     ecx, esi
mov     [esi+439h], bl
call    dword ptr [edx+174h]
mov     ecx, [edi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_442FF5
mov     eax, [esi]
push    ebx
push    0Fh
mov     ecx, esi
call    dword ptr [eax+1E8h]
jmp     short loc_442FF5
; ---------------------------------------------------------------------------

loc_442FC5:                             ; CODE XREF: BuildingClass__EjectCrew+1A6↑j
; BuildingClass__EjectCrew+1DB↑j
mov     eax, [esp+8Ch+arg_0]
cmp     eax, ebx
jnz     short loc_442FD4
xor     eax, eax
jmp     short loc_442FE0
; ---------------------------------------------------------------------------

loc_442FD4:                             ; CODE XREF: BuildingClass__EjectCrew+23E↑j
mov     cl, [eax+14h]
and     cl, 1
neg     cl
sbb     ecx, ecx
and     eax, ecx

loc_442FE0:                             ; CODE XREF: BuildingClass__EjectCrew+242↑j
mov     edx, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edx+0E0h]
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+0F8h]

loc_442FF5:                             ; CODE XREF: BuildingClass__EjectCrew+224↑j
; BuildingClass__EjectCrew+233↑j
mov     ecx, ds:0A8E7ACh
dec     ecx
mov     ds:0A8E7ACh, ecx
lea     ecx, [edi+114h]
call    LinkedList__Pop
mov     esi, eax
cmp     esi, ebx
jnz     loc_442E2F

loc_443017:                             ; CODE XREF: BuildingClass__EjectCrew+76↑j
; BuildingClass__EjectCrew+8A↑j ...
cmp     [esp+8Ch+var_70], ebx
jz      loc_4433F9

loc_443021:                             ; CODE XREF: BuildingClass__EjectCrew+51A↓j
; BuildingClass__EjectCrew+5CD↓j ...
cmp     word ptr [ebp+0], 7FFFh
jnz     short loc_443035
cmp     word ptr [ebp+2], 7FFFh
jz      loc_4433F9

loc_443035:                             ; CODE XREF: BuildingClass__EjectCrew+297↑j
mov     cx, word ptr [esp+8Ch+var_78]
mov     eax, ebp
add     ebp, 4
add     cx, [eax]
mov     dx, [eax+2]
add     dx, word ptr [esp+8Ch+var_78+2]
mov     [esp+8Ch+var_68], ebp
mov     word ptr [esp+8Ch+var_6C], cx
lea     ecx, [esp+8Ch+var_7C]
mov     word ptr [esp+8Ch+var_6C+2], dx
mov     eax, [esp+8Ch+var_6C]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+90h+var_7C], eax
call    CellCoord__To_CellObj
mov     edx, [edi+21Ch]
mov     [esp+8Ch+var_64], eax
cmp     [edx+1F6h], bl
jnz     loc_443292
cmp     [esp+8Ch+var_70], ebx
jle     loc_443292
mov     eax, [esp+8Ch+var_74]
mov     ecx, ds:0A8B230h
push    eax
push    ebx
add     ecx, 218h
call    Random__Range
cmp     eax, 1
jnz     loc_443292
mov     edx, [edi]
mov     ecx, edi
xor     esi, esi
call    dword ptr [edx+30Ch]
mov     ebp, eax
cmp     ebp, ebx
jz      short loc_4430E8
push    6F0h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
cmp     eax, ebx
jz      short loc_4430E6
mov     ecx, [edi+21Ch]
push    ecx             ; ppv
push    ebp             ; int
mov     ecx, eax
call    InfantryClass__Construct
mov     esi, eax
jmp     short loc_4430E8
; ---------------------------------------------------------------------------

loc_4430E6:                             ; CODE XREF: BuildingClass__EjectCrew+341↑j
xor     esi, esi

loc_4430E8:                             ; CODE XREF: BuildingClass__EjectCrew+330↑j
; BuildingClass__EjectCrew+354↑j
mov     edx, [edi+520h]
mov     eax, [esi+6C0h]
add     edx, 64h ; 'd'
add     eax, 64h ; 'd'
push    edx
push    eax
push    offset aCreatingSurviv ; "Creating survivor type '%s' from buildi"...
call    Debug__Log
add     esp, 0Ch
cmp     esi, ebx
jz      loc_44328E
cmp     [edi+6E9h], bl
jz      short loc_44312E
mov     ecx, [esi+6C0h]
cmp     [ecx+0C9Eh], bl
jz      short loc_44312E
mov     byte ptr [esi+6D9h], 1

loc_44312E:                             ; CODE XREF: BuildingClass__EjectCrew+387↑j
; BuildingClass__EjectCrew+395↑j
mov     edx, ds:0A8E7ACh
push    ebx
movsx   eax, word ptr [esp+90h+var_7C]
movsx   ecx, word ptr [esp+90h+var_7C+2]
inc     edx
push    ebx
mov     ds:0A8E7ACh, edx
xor     edx, edx
shl     eax, 8
shl     ecx, 8
add     eax, 80h
add     ecx, 0A4h
mov     [esp+94h+var_58], edx
mov     [esp+94h+var_60], eax
lea     edx, [esp+94h+var_60]
mov     [esp+94h+var_5C], ecx
push    ebx
lea     eax, [esp+98h+var_24]
push    edx
lea     ecx, [esp+9Ch+var_60]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    ObjectPlacement__CalcPosition
mov     edx, eax
mov     ebp, ds:89C848h
mov     eax, [edx]
mov     [esp+8Ch+var_60], eax
cmp     eax, ebp
mov     ecx, [edx+4]
mov     [esp+8Ch+var_5C], ecx
mov     edx, [edx+8]
mov     [esp+8Ch+var_58], edx
jnz     short loc_4431BB
cmp     ecx, ds:89C84Ch
jnz     short loc_4431BB
cmp     edx, ds:89C850h
jz      loc_44327F

loc_4431BB:                             ; CODE XREF: BuildingClass__EjectCrew+415↑j
; BuildingClass__EjectCrew+41D↑j
mov     eax, [esi]
lea     ecx, [esp+8Ch+var_60]
push    ebx
push    ecx
mov     ecx, esi
call    dword ptr [eax+0D8h]
test    al, al
jz      loc_44327F
push    offset aSurvivorUnlimb ; "Survivor unlimbo OK\n"
call    Debug__Log
mov     edx, [esi+6C0h]
mov     ebp, [esp+90h+var_70]
add     esp, 4
dec     ebp
mov     eax, [edx+0A0h]
mov     [esp+8Ch+var_70], ebp
push    eax
mov     eax, ds:0A8B230h
push    5
lea     ecx, [eax+218h]
call    Random__Range
mov     edx, [esi]
push    ebx
push    1
push    89C848h
mov     ecx, esi
mov     [esi+6Ch], eax
call    dword ptr [edx+174h]
mov     ebp, [esp+8Ch+arg_0]
cmp     ebp, ebx
jz      short loc_443252
mov     ecx, [edi+21Ch]
push    ebp
call    Object__IsAlliedWithObjectSimpleHouse
test    al, al
jnz     short loc_443252
mov     eax, [esi]
push    ebx
push    1
mov     ecx, esi
call    dword ptr [eax+1E8h]
mov     edx, [esi]
push    ebp
mov     ecx, esi
call    dword ptr [edx+3C8h]
jmp     short loc_443288
; ---------------------------------------------------------------------------

loc_443252:                             ; CODE XREF: BuildingClass__EjectCrew+496↑j
; BuildingClass__EjectCrew+4A6↑j
mov     ecx, [edi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jz      short loc_443270
mov     eax, [esi]
push    ebx
push    2
mov     ecx, esi
call    dword ptr [eax+1E8h]
jmp     short loc_443288
; ---------------------------------------------------------------------------

loc_443270:                             ; CODE XREF: BuildingClass__EjectCrew+4CF↑j
mov     edx, [esi]
push    ebx
push    0Fh
mov     ecx, esi
call    dword ptr [edx+1E8h]
jmp     short loc_443288
; ---------------------------------------------------------------------------

loc_44327F:                             ; CODE XREF: BuildingClass__EjectCrew+425↑j
; BuildingClass__EjectCrew+43D↑j
mov     eax, [esi]
push    1
mov     ecx, esi
call    dword ptr [eax+20h]

loc_443288:                             ; CODE XREF: BuildingClass__EjectCrew+4C0↑j
; BuildingClass__EjectCrew+4DE↑j ...
dec     dword ptr ds:0A8E7ACh

loc_44328E:                             ; CODE XREF: BuildingClass__EjectCrew+37B↑j
mov     ebp, [esp+8Ch+var_68]

loc_443292:                             ; CODE XREF: BuildingClass__EjectCrew+2F0↑j
; BuildingClass__EjectCrew+2FA↑j ...
mov     ecx, [esp+8Ch+var_64]
push    1
push    0FFFFFFFFh
push    ebx
push    0FFFFFFFFh
push    1
push    1
push    1
call    Cell__IsBuildable
test    al, al
jz      loc_443021
mov     ecx, ds:0A8B230h
push    63h ; 'c'
push    ebx
add     ecx, 218h
call    Random__Range
cmp     eax, 32h ; '2'
jge     loc_443362
movsx   edx, word ptr [esp+8Ch+var_7C]
movsx   eax, word ptr [esp+8Ch+var_7C+2]
shl     edx, 8
add     edx, 80h
push    ebx
shl     eax, 8
mov     [esp+90h+var_54], edx
add     eax, 80h
push    80h
lea     edx, [esp+94h+var_54]
lea     ecx, [esp+94h+var_18]
mov     [esp+94h+var_50], eax
mov     [esp+94h+var_4C], ebx
call    RandomCoordScatter
mov     esi, eax
push    ebx             ; int
push    64h ; 'd'       ; int
mov     eax, [esi]
cdq
and     edx, 0FFh
add     eax, edx
mov     ecx, eax
mov     eax, [esi+4]
cdq
and     edx, 0FFh
mov     [esp+94h+var_40], ebx
add     eax, edx
sar     ecx, 8
sar     eax, 8
movsx   ecx, cx
movsx   edx, ax
shl     ecx, 8
shl     edx, 8
add     ecx, 80h
add     edx, 80h
mov     [esp+94h+var_48], ecx
mov     [esp+94h+var_44], edx
mov     edx, 64h ; 'd'
lea     ecx, [esp+94h+var_48] ; int
call    StandardCreateUnitAtCoords
jmp     loc_443021
; ---------------------------------------------------------------------------

loc_443362:                             ; CODE XREF: BuildingClass__EjectCrew+537↑j
movsx   ecx, word ptr [esp+8Ch+var_7C+2]
movsx   eax, word ptr [esp+8Ch+var_7C]
shl     ecx, 8
shl     eax, 8
add     ecx, 80h
add     eax, 80h
mov     dword ptr [esp+8Ch+var_38], ecx
push    ebx
push    80h
lea     edx, [esp+94h+var_3C]
lea     ecx, [esp+94h+var_C]
mov     [esp+94h+var_3C], eax
mov     dword ptr [esp+94h+var_34], ebx
call    RandomCoordScatter
mov     esi, eax
push    ebx             ; int
push    64h ; 'd'       ; int
mov     eax, [esi]
cdq
and     edx, 0FFh
add     eax, edx
mov     ecx, eax
mov     eax, [esi+4]
cdq
and     edx, 0FFh
mov     [esp+94h+var_28], ebx
sar     ecx, 8
add     eax, edx
sar     eax, 8
movsx   edx, cx
movsx   eax, ax
shl     edx, 8
add     edx, 80h
lea     ecx, [esp+94h+var_30] ; int
shl     eax, 8
mov     [esp+94h+var_30], edx
add     eax, 80h
mov     edx, 64h ; 'd'
mov     dword ptr [esp+94h+var_2C], eax
call    TimedCreateUnitAtCoords
jmp     loc_443021
; ---------------------------------------------------------------------------

loc_4433F9:                             ; CODE XREF: BuildingClass__EjectCrew+28B↑j
; BuildingClass__EjectCrew+29F↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 7Ch
retn    4
*/
}

void BuildingClass::CleanupOccupation() {}
void BuildingClass::AddOccupancy() {}
void BuildingClass::ClearOccupancyData() {}
void BuildingClass::RebuildOccupancyTracking() {}
void BuildingClass::RebuildOccupancyTracking2() { RebuildOccupancyTracking(); }
void BuildingClass::RebuildOccupancy2() { RebuildOccupancyTracking(); }
void BuildingClass::InitBuildLimit() {}

// IDA 0x6b0d60: refresh occupier cache
// 0x6b0d60
void BuildingClass::RefreshOccupierCache()
{
// [IDA decompile]
int *__thiscall sub_6B0D60(int **this)
{
  int *result; // eax
  int i; // edi
  int v4; // ecx

  result = *(this + 23);
  if ( !result )
  {
    *(this + 23) = (int *)4;
    *(this + 24) = (int *)0x7FFFFFFF;
    for ( i = (int)*(this + 18) - 1; i >= 0; --i )
    {
      result = (int *)(*(this + 15))[i];
      v4 = *result;
      if ( result[1] != 6 )
      {
        if ( v4 )
          result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 976))(v4);
      }
    }
  }
  return result;
}

/* ASM:
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi+5Ch]
test    eax, eax
jnz     short loc_6B0D9E
mov     dword ptr [esi+5Ch], 4
mov     dword ptr [esi+60h], 7FFFFFFFh
mov     edi, [esi+48h]
dec     edi
js      short loc_6B0D9E

loc_6B0D7F:                             ; CODE XREF: BuildingClass__RefreshOccupierCache+3C↓j
mov     eax, [esi+3Ch]
mov     eax, [eax+edi*4]
mov     edx, [eax+4]
mov     ecx, [eax]
cmp     edx, 6
jz      short loc_6B0D9B
test    ecx, ecx
jz      short loc_6B0D9B
mov     edx, [ecx]
call    dword ptr [edx+3D0h]

loc_6B0D9B:                             ; CODE XREF: BuildingClass__RefreshOccupierCache+2D↑j
; BuildingClass__RefreshOccupierCache+31↑j
dec     edi
jns     short loc_6B0D7F

loc_6B0D9E:                             ; CODE XREF: BuildingClass__RefreshOccupierCache+9↑j
; BuildingClass__RefreshOccupierCache+1D↑j
pop     edi
pop     esi
retn
*/
}

void BuildingClass::ClearFactoryData() {}

// IDA 0x722390: free upgrade queue
// 0x722390
void BuildingClass::FreeUpgradeQueue()
{
// [IDA decompile]
int BuildingClass_FreeUpgradeQueue()
{
  int result; // eax
  int i; // ebp
  int v2; // esi
  _DWORD *v3; // eax
  int j; // ecx
  void **v5; // edi

  result = MEMORY[0xB0F4F8];
  for ( i = 0; i < MEMORY[0xB0F4F8]; ++i )
  {
    v2 = *((_DWORD *)MEMORY[0xB0F4EC] + i);
    v3 = *(_DWORD **)(v2 + 244);
    if ( v3 )
    {
      for ( j = 0; j <= *v3; *(_DWORD *)(v3[2] + 4 * j - 4) = 0 )
        ++j;
      *v3 = 0;
      v5 = *(void ***)(v2 + 244);
      if ( v5 )
      {
        __3_YAXPAX_Z(v5[2]);
        __3_YAXPAX_Z(v5);
      }
      *(_DWORD *)(v2 + 244) = 0;
    }
    if ( *(_DWORD *)(v2 + 252) )
    {
      __3_YAXPAX_Z(*(void **)(v2 + 252));
      *(_DWORD *)(v2 + 252) = 0;
    }
    if ( *(_DWORD *)(v2 + 248) )
    {
      __3_YAXPAX_Z(*(void **)(v2 + 248));
      *(_DWORD *)(v2 + 248) = 0;
    }
    *(_DWORD *)(v2 + 240) = 0;
    result = MEMORY[0xB0F4F8];
  }
  return result;
}

/* ASM:
mov     eax, dword_A8ED54+807A4h
push    ebx
push    ebp
xor     ebx, ebx
xor     ebp, ebp
cmp     eax, ebx
jle     loc_722439
push    esi
push    edi

loc_7223A5:                             ; CODE XREF: BuildingClass__FreeUpgradeQueue+A1↓j
mov     eax, dword_A8ED54+80798h
mov     esi, [eax+ebp*4]
mov     eax, [esi+0F4h]
cmp     eax, ebx
jz      short loc_7223F1
mov     edx, [eax]
xor     ecx, ecx
cmp     edx, ebx
jl      short loc_7223CD

loc_7223BF:                             ; CODE XREF: BuildingClass__FreeUpgradeQueue+3B↓j
mov     edx, [eax+8]
inc     ecx
mov     [edx+ecx*4-4], ebx
mov     edx, [eax]
cmp     ecx, edx
jle     short loc_7223BF

loc_7223CD:                             ; CODE XREF: BuildingClass__FreeUpgradeQueue+2D↑j
mov     [eax], ebx
mov     edi, [esi+0F4h]
cmp     edi, ebx
jz      short loc_7223EB
mov     eax, [edi+8]
push    eax             ; Block
call    ??3_YAXPAX_Z
push    edi             ; Block
call    ??3_YAXPAX_Z
add     esp, 8

loc_7223EB:                             ; CODE XREF: BuildingClass__FreeUpgradeQueue+47↑j
mov     [esi+0F4h], ebx

loc_7223F1:                             ; CODE XREF: BuildingClass__FreeUpgradeQueue+25↑j
mov     eax, [esi+0FCh]
cmp     eax, ebx
jz      short loc_72240A
push    eax             ; Block
call    ??3_YAXPAX_Z
add     esp, 4
mov     [esi+0FCh], ebx

loc_72240A:                             ; CODE XREF: BuildingClass__FreeUpgradeQueue+69↑j
mov     eax, [esi+0F8h]
cmp     eax, ebx
jz      short loc_722423
push    eax             ; Block
call    ??3_YAXPAX_Z
add     esp, 4
mov     [esi+0F8h], ebx

loc_722423:                             ; CODE XREF: BuildingClass__FreeUpgradeQueue+82↑j
mov     [esi+0F0h], ebx
mov     eax, dword_A8ED54+807A4h
inc     ebp
cmp     ebp, eax
jl      loc_7223A5
pop     edi
pop     esi

loc_722439:                             ; CODE XREF: BuildingClass__FreeUpgradeQueue+D↑j
pop     ebp
pop     ebx
retn
*/
}
void BuildingClass::FreeUpgradeQueue2() { FreeUpgradeQueue(); }

// IDA 0x7013e0: check if building has occupants
// 0x7013e0
bool BuildingClass::CheckOccupantState()
{
// [IDA decompile]
int __thiscall BuildingClass::_vt126(#377 *this)
{
  int result; // eax

  if ( AbstractClass::COMStub_126((int)this) )
  {
    result = (*(int (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)this + 968))(this, *((_DWORD *)this + 174));
    LOBYTE(result) = 1;
  }
  else
  {
    LOBYTE(result) = 0;
  }
  return result;
}

/* ASM:
push    esi
mov     esi, ecx
call    AbstractClass__COMStub_126
test    al, al
jz      short loc_701401
mov     ecx, [esi+2B8h]
mov     eax, [esi]
push    ecx
mov     ecx, esi
call    dword ptr [eax+3C8h]
mov     al, 1
pop     esi
retn
; ---------------------------------------------------------------------------

loc_701401:                             ; CODE XREF: BuildingClass__CheckOccupantState+A↑j
xor     al, al
pop     esi
retn
*/
}

// ============================================================
// Section 8: Combat / Targeting
// ============================================================

void BuildingClass::ProcessAttack() {}
void BuildingClass::AimTurret() {}
void BuildingClass::CalculateTurretAngle() {}

// IDA 0x445e50: get facing direction to target
// 0x445e50
int BuildingClass::GetFacingToTarget()
{
// [IDA decompile]
int __thiscall BuildingClass::GetFacingToTarget(#377 *this)
{
  int v2; // ecx
  int *v3; // edi
  int *v4; // eax
  double v5; // st7
  int v7; // ecx
  int v8; // [esp+20h] [ebp-20h]
  int v9; // [esp+24h] [ebp-1Ch] BYREF
  char v10[12]; // [esp+28h] [ebp-18h] BYREF
  char v11[12]; // [esp+34h] [ebp-Ch] BYREF
  int *v12; // [esp+44h] [ebp+4h]

  if ( (*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 1020))(this) || (v2 = *((_DWORD *)this + 173)) == 0 )
  {
    v7 = *ProgressTimer::GetValue((_WORD *)this + 452, &v9);
    *v12 = v7;
    return (int)v12;
  }
  else
  {
    v3 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v2 + 72))(v2, v10);
    v4 = (int *)(*(int (__thiscall **)(#377 *, char *))(*(_DWORD *)this + 72))(this, v11);
    v8 = *v3;
    v9 = *v4;
    v5 = Math::CalcAngle((double)v4[1] - (double)v3[1], (double)v8 - (double)v9);
    LOWORD(v9) = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427);
    *v12 = v9;
    return (int)v12;
  }
}

/* ASM:
sub     esp, 20h
push    esi
mov     esi, ecx
mov     eax, [esi]
call    dword ptr [eax+3FCh]
test    al, al
jnz     short loc_445EDC
mov     ecx, [esi+2B4h]
test    ecx, ecx
jz      short loc_445EDC
mov     edx, [ecx]
lea     eax, [esp+24h+var_18]
push    edi
push    eax
call    dword ptr [edx+48h]
mov     edx, [esi]
mov     edi, eax
lea     eax, [esp+28h+var_C]
mov     ecx, esi
push    eax
call    dword ptr [edx+48h]
mov     edx, [edi]
mov     ecx, [eax]
mov     [esp+28h+var_20], edx
mov     [esp+28h+var_1C], ecx
fild    [esp+28h+var_20]
sub     esp, 8
sub     esp, 8
fisub   [esp+38h+var_1C]
fstp    [esp+38h+var_30] ; double
fild    dword ptr [eax+4]
fisub   dword ptr [edi+4]
fstp    [esp+38h+var_38] ; double
call    Math__CalcAngle
fsub    ds:dbl_7E2820
add     esp, 10h
fmul    ds:dbl_7E2818
call    Math__RoundToInt
mov     word ptr [esp+28h+var_1C], ax
mov     eax, [esp+28h+arg_0]
mov     ecx, [esp+28h+var_1C]
pop     edi
mov     [eax], ecx
pop     esi
add     esp, 20h
retn    4
; ---------------------------------------------------------------------------

loc_445EDC:                             ; CODE XREF: BuildingClass__GetFacingToTarget+10↑j
; BuildingClass__GetFacingToTarget+1A↑j
lea     edx, [esp+24h+var_1C]
lea     ecx, [esi+388h]
push    edx
call    ProgressTimer__GetValue
mov     ecx, [eax]
mov     eax, [esp+24h+arg_0]
pop     esi
mov     [eax], ecx
add     esp, 20h
retn    4
*/
}

// IDA 0x44d7d0: get target facing (delegates to GetFacingToTarget)
// 0x44d7d0
int BuildingClass::GetTargetFacing() {
// [IDA decompile]
int __thiscall BuildingClass::GetTargetFacing(#377 *this)
{
  unsigned int v2; // ecx
  __int16 v4; // dx
  unsigned int v5; // ecx
  int v6; // edx
  int v7; // [esp+4h] [ebp-4h] BYREF
  _DWORD *v8; // [esp+Ch] [ebp+4h]

  if ( *((_DWORD *)this + 173) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 1020))(this)
      || *(_BYTE *)(*((_DWORD *)this + 328) + 5829) )
    {
      v6 = *(_DWORD *)(*(int (__thiscall **)(#377 *, int *, _DWORD))(*(_DWORD *)this + 1256))(
                        this,
                        &v7,
                        *((_DWORD *)this + 173));
      *v8 = v6;
      return (int)v8;
    }
    else
    {
      v5 = *ProgressTimer::GetValue((_WORD *)this + 452, &v7);
      *(_WORD *)v8 = ((((v5 >> 10) + 1) >> 1) & 0x1F) << 11;
      return (int)v8;
    }
  }
  else
  {
    v2 = *ProgressTimer::GetValue((_WORD *)this + 452, &v7);
    LOBYTE(v4) = 0;
    HIBYTE(v4) = ((v2 >> 7) + 1) >> 1;
    *(_WORD *)v8 = v4;
    return (int)v8;
  }
}

/* ASM:
push    ecx
push    esi
mov     esi, ecx
mov     eax, [esi+2B4h]
test    eax, eax
jnz     short loc_44D806
lea     eax, [esp+8+var_4]
lea     ecx, [esi+388h]
push    eax
call    ProgressTimer__GetValue
mov     ecx, [eax]
mov     eax, [esp+8+arg_0]
shr     ecx, 7
inc     ecx
pop     esi
shr     ecx, 1
xor     edx, edx
mov     dh, cl
mov     [eax], dx
pop     ecx
retn    4
; ---------------------------------------------------------------------------

loc_44D806:                             ; CODE XREF: BuildingClass__GetTargetFacing+C↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+3FCh]
test    al, al
jz      short loc_44D84E
mov     ecx, [esi+520h]
mov     al, [ecx+16C5h]
test    al, al
jnz     short loc_44D84E
lea     edx, [esp+8+var_4]
lea     ecx, [esi+388h]
push    edx
call    ProgressTimer__GetValue
mov     ecx, [eax]
mov     eax, [esp+8+arg_0]
shr     ecx, 0Ah
inc     ecx
pop     esi
shr     ecx, 1
and     ecx, 1Fh
shl     ecx, 0Bh
mov     [eax], cx
pop     ecx
retn    4
; ---------------------------------------------------------------------------

loc_44D84E:                             ; CODE XREF: BuildingClass__GetTargetFacing+42↑j
; BuildingClass__GetTargetFacing+52↑j
mov     eax, [esi+2B4h]
mov     edx, [esi]
lea     ecx, [esp+8+var_4]
push    eax
push    ecx
mov     ecx, esi
call    dword ptr [edx+4E8h]
mov     edx, [eax]
mov     eax, [esp+8+arg_0]
pop     esi
mov     [eax], edx
pop     ecx
retn    4
*/
}
void BuildingClass::FireLaser() {}

// IDA 0x44d700: get ammo count scaled
// 0x44d700
int BuildingClass::GetAmmoCountScaled()
{
// [IDA decompile]
int __thiscall BuildingClass::GetAmmoCountScaled(#377 *this)
{
  int v1; // esi
  int v3; // [esp+4h] [ebp-Ch]
  double v4; // [esp+8h] [ebp-8h]

  v1 = *((_DWORD *)this + 328);
  if ( *(_DWORD *)(v1 + 980) != 2 )
    return TechnoClass::GetAmmoCount(this);
  if ( !*(_BYTE *)(v1 + 5820) )
    return 0;
  v4 = BuildingClass::checkRepairEligibility(*((_DWORD *)this + 135));
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 116))(v1);
  return Math::RoundToInt((double)v3 * v4);
}

/* ASM:
sub     esp, 0Ch
push    esi
mov     esi, [ecx+520h]
mov     eax, [esi+3D4h]
sub     eax, 2
jz      short loc_44D71F
call    TechnoClass__GetAmmoCount
pop     esi
add     esp, 0Ch
retn
; ---------------------------------------------------------------------------

loc_44D71F:                             ; CODE XREF: BuildingClass__GetAmmoCountScaled+13↑j
mov     al, [esi+16BCh]
test    al, al
jz      short loc_44D755
mov     ecx, [ecx+21Ch]
call    BuildingClass__checkRepairEligibility
mov     eax, [esi]
mov     ecx, esi
fstp    [esp+10h+var_8]
call    dword ptr [eax+74h]
mov     [esp+10h+var_C], eax
fild    [esp+10h+var_C]
fmul    [esp+10h+var_8]
call    Math__RoundToInt
pop     esi
add     esp, 0Ch
retn
; ---------------------------------------------------------------------------

loc_44D755:                             ; CODE XREF: BuildingClass__GetAmmoCountScaled+27↑j
xor     eax, eax
pop     esi
add     esp, 0Ch
retn
*/
}

// IDA 0x44d780: get fire error
// 0x447f10
int BuildingClass::GetFireError() {
// [IDA decompile]
int __thiscall BuildingClass::GetFireError(#377 *this)
{
  int v2; // eax
  int v4; // edx
  int INI; // ebp
  int v6; // edi
  int v7; // ebx
  _DWORD *Value; // eax
  __int16 v9; // dx
  _BYTE *v10; // [esp+10h] [ebp+4h]
  int v11; // [esp+14h] [ebp+8h]
  int v12; // [esp+18h] [ebp+Ch] BYREF

  v2 = *((_DWORD *)this + 328);
  if ( *(_BYTE *)(v2 + 5499)
    && (!*(_BYTE *)(v2 + 5500) || !(*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 1032))(this))
    || (unsigned __int8)ObjectClass::HasLocation(this) )
  {
    return 5;
  }
  if ( *(_BYTE *)(*((_DWORD *)this + 328) + 5827) )
    return 6;
  if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) == 19
    || (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) == 18 )
  {
    return 5;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 848))(this) )
    return 6;
  if ( *((_DWORD *)this + 453) )
    return 3;
  INI = TriggerTypeClass::ReadINI(this, v4, v10, v11, v12);
  if ( INI )
    return INI;
  if ( !(*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 1020))(this) )
    return INI;
  v6 = *(_DWORD *)(*(int (__thiscall **)(#377 *, int *, _BYTE *))(*(_DWORD *)this + 1256))(this, &v12, v10);
  v7 = *(_BYTE *)(*((_DWORD *)this + 328) + 5829) != 0 ? 0 : 8;
  Value = ProgressTimer::GetValue((_WORD *)this + 452, &v12);
  LOBYTE(v9) = 0;
  HIBYTE(v9) = v7;
  if ( abs16(v9) >= (int)abs16(*(_WORD *)Value - v6) )
    return INI;
  else
    return 2;
}

/* ASM:
push    ebp
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi+520h]
mov     cl, [eax+157Bh]
test    cl, cl
jz      short loc_447F45
mov     cl, [eax+157Ch]
test    cl, cl
jz      loc_44805A
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+408h]
test    eax, eax
jz      loc_44805A

loc_447F45:                             ; CODE XREF: BuildingClass__GetFireError+13↑j
mov     ecx, esi
call    ObjectClass__HasLocation
test    al, al
jnz     loc_44805A
mov     ecx, [esi+520h]
mov     al, [ecx+16C3h]
test    al, al
jz      short loc_447F6F
pop     edi
pop     esi
mov     eax, 6
pop     ebp
retn    0Ch
; ---------------------------------------------------------------------------

loc_447F6F:                             ; CODE XREF: BuildingClass__GetFireError+52↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 13h
jz      loc_44805A
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+184h]
cmp     eax, 12h
jz      loc_44805A
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+350h]
test    al, al
jnz     short loc_447FAE
pop     edi
pop     esi
mov     eax, 6
pop     ebp
retn    0Ch
; ---------------------------------------------------------------------------

loc_447FAE:                             ; CODE XREF: BuildingClass__GetFireError+91↑j
mov     eax, [esi+714h]
test    eax, eax
jz      short loc_447FC3
pop     edi
pop     esi
mov     eax, 3
pop     ebp
retn    0Ch
; ---------------------------------------------------------------------------

loc_447FC3:                             ; CODE XREF: BuildingClass__GetFireError+A6↑j
mov     eax, [esp+0Ch+arg_8]
mov     ecx, [esp+0Ch+arg_4]
mov     edi, [esp+0Ch+arg_0]
push    eax
push    ecx
push    edi
mov     ecx, esi
call    TriggerTypeClass__ReadINI
mov     ebp, eax
test    ebp, ebp
jnz     short loc_448052
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+3FCh]
test    al, al
jz      short loc_448052
mov     eax, [esi]
push    ebx
lea     ecx, [esp+10h+arg_8]
push    edi
push    ecx
mov     ecx, esi
call    dword ptr [eax+4E8h]
mov     edx, [esi+520h]
mov     edi, [eax]
lea     eax, [esp+10h+arg_8]
lea     ecx, [esi+388h]
mov     bl, [edx+16C5h]
push    eax
neg     bl
sbb     ebx, ebx
and     ebx, 0FFFFFFF8h
add     ebx, 8
call    ProgressTimer__GetValue
mov     cx, [eax]
xor     edx, edx
mov     dh, bl
sub     cx, di
movsx   eax, dx
cdq
mov     esi, eax
pop     ebx
movsx   eax, cx
xor     esi, edx
sub     esi, edx
cdq
xor     eax, edx
sub     eax, edx
cmp     esi, eax
jge     short loc_448052
pop     edi
pop     esi
mov     eax, 2
pop     ebp
retn    0Ch
; ---------------------------------------------------------------------------

loc_448052:                             ; CODE XREF: BuildingClass__GetFireError+CD↑j
; BuildingClass__GetFireError+DB↑j ...
pop     edi
mov     eax, ebp
pop     esi
pop     ebp
retn    0Ch
; ---------------------------------------------------------------------------

loc_44805A:                             ; CODE XREF: BuildingClass__GetFireError+1D↑j
; BuildingClass__GetFireError+2F↑j ...
pop     edi
pop     esi
mov     eax, 5
pop     ebp
retn    0Ch
*/
}
void BuildingClass::AcquireTarget() {}

// IDA 0x445f00: select target type flags
// 0x445f00
int BuildingClass::SelectTargetTypeFlags()
{
// [IDA decompile]
int __thiscall BuildingClass::SelectTargetTypeFlags(#377 *this)
{
  _DWORD **v2; // eax
  int v3; // eax
  int v4; // edi
  _DWORD **v5; // eax
  int v6; // eax
  int v8; // [esp+Ch] [ebp+4h]
  int v9; // [esp+10h] [ebp+8h]
  char v10; // [esp+14h] [ebp+Ch]

  if ( *(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)this + 1016))(this, 0) )
  {
    v2 = (_DWORD **)(*(int (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)this + 1016))(this, 0);
    LOBYTE(v3) = Building::GetRenderType(*v2);
    v4 = v3 | v8;
  }
  else
  {
    v4 = v8;
  }
  if ( *(_DWORD *)(*(int (__thiscall **)(#377 *, int))(*(_DWORD *)this + 1016))(this, 1) )
  {
    v5 = (_DWORD **)(*(int (__thiscall **)(#377 *, int))(*(_DWORD *)this + 1016))(this, 1);
    LOBYTE(v6) = Building::GetRenderType(*v5);
    v4 |= v6;
  }
  return TechnoClass::SelectAutoTarget_Start_AU(v4 | 1, v9, v10);
}

/* ASM:
push    esi
mov     esi, ecx
push    edi
push    0
mov     eax, [esi]
call    dword ptr [eax+3F8h]
cmp     dword ptr [eax], 0
jz      short loc_445F2E
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+3F8h]
mov     ecx, [eax]
call    Building__GetRenderType
mov     edi, [esp+8+arg_0]
or      edi, eax
jmp     short loc_445F32
; ---------------------------------------------------------------------------

loc_445F2E:                             ; CODE XREF: BuildingClass__SelectTargetTypeFlags+11↑j
mov     edi, [esp+8+arg_0]

loc_445F32:                             ; CODE XREF: BuildingClass__SelectTargetTypeFlags+2C↑j
mov     eax, [esi]
push    1
mov     ecx, esi
call    dword ptr [eax+3F8h]
cmp     dword ptr [eax], 0
jz      short loc_445F58
mov     edx, [esi]
push    1
mov     ecx, esi
call    dword ptr [edx+3F8h]
mov     ecx, [eax]
call    Building__GetRenderType
or      edi, eax

loc_445F58:                             ; CODE XREF: BuildingClass__SelectTargetTypeFlags+41↑j
mov     eax, [esp+8+arg_8]
mov     ecx, [esp+8+arg_4]
push    eax
or      edi, 1
push    ecx
push    edi
mov     ecx, esi
call    TechnoClass__SelectAutoTarget_Start_AU
pop     edi
pop     esi
retn    0Ch
*/
}

int BuildingClass::DistanceToTarget() { return 0; }
void BuildingClass::CalcBarrelFlashPosition() {}
void BuildingClass::BuildTurretTransform() {}

// ============================================================
// Section 9: Bridge
// ============================================================

bool BuildingClass::DemolishBridgeCheck() { return false; }
void BuildingClass::FindBridgeSegment() {}
void BuildingClass::DemolishBridge() {}
void BuildingClass::DemolishBridgeAnim() {}
void BuildingClass::TraverseBridgeSegments() {}
void BuildingClass::FindBridgeCell() {}
bool BuildingClass::CheckBridge() { return false; }

// IDA 0x4576f0: destroy building on bridge collapse
// 0x4576f0
void BuildingClass::DestroyOnBridgeCollapse()
{
// [IDA decompile]
int __thiscall BuildingClass::_vt184(#377 *this)
{
  int result; // eax
  int i; // edi
  int v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  #377 *v7; // eax
  #377 *v8; // ecx
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF

  result = MEMORY[0xA83DF8];
  for ( i = 0; i < MEMORY[0xA83DF8]; ++i )
  {
    v4 = *((_DWORD *)MEMORY[0xA83DEC] + i);
    v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v4 + 76))(v4, v9, 0);
    v6 = Coord::To_Cell(&MEMORY[0x87F7E8], v5);
    v7 = (#377 *)Cell::IsBridge(v6);
    if ( *(_BYTE *)(v4 + 144) )
    {
      if ( v7 )
      {
        if ( v7 == this )
        {
          v8 = *(#377 **)(v4 + 1444);
          if ( !v8 || v8 == v7 )
            (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)v4 + 372))(v4, &MEMORY[0x89C848], 1, 1);
        }
      }
    }
    result = MEMORY[0xA83DF8];
  }
  return result;
}

/* ASM:
mov     eax, ds:0A83DF8h
sub     esp, 0Ch
push    ebx
push    edi
xor     edi, edi
mov     ebx, ecx
test    eax, eax
jle     short loc_457769
push    esi

loc_457703:                             ; CODE XREF: BuildingClass__DestroyOnBridgeCollapse+76↓j
mov     eax, ds:0A83DECh
push    0
mov     esi, [eax+edi*4]
lea     eax, [esp+1Ch+var_C]
push    eax
mov     ecx, esi
mov     edx, [esi]
call    dword ptr [edx+4Ch]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    Cell__IsBridge
mov     cl, [esi+90h]
test    cl, cl
jz      short loc_45775E
test    eax, eax
jz      short loc_45775E
cmp     eax, ebx
jnz     short loc_45775E
mov     ecx, [esi+5A4h]
test    ecx, ecx
jz      short loc_45774B
cmp     ecx, eax
jnz     short loc_45775E

loc_45774B:                             ; CODE XREF: BuildingClass__DestroyOnBridgeCollapse+55↑j
mov     edx, [esi]
push    1
push    1
push    89C848h
mov     ecx, esi
call    dword ptr [edx+174h]

loc_45775E:                             ; CODE XREF: BuildingClass__DestroyOnBridgeCollapse+43↑j
; BuildingClass__DestroyOnBridgeCollapse+47↑j ...
mov     eax, ds:0A83DF8h
inc     edi
cmp     edi, eax
jl      short loc_457703
pop     esi

loc_457769:                             ; CODE XREF: BuildingClass__DestroyOnBridgeCollapse+10↑j
pop     edi
pop     ebx
add     esp, 0Ch
retn
*/
}

CoordStruct* BuildingClass::GetBridgeAwareCoords(CoordStruct* out) const
{
    if (out) *out = location;
    return out;
}

// ============================================================
// Section 10: Deploy
// ============================================================

// IDA 0x44ced0: deploy building
// 0x62a4a0
int BuildingClass::Deploy()
{
// [IDA decompile]
int __usercall BuildingClass_Deploy@<eax>(unsigned int a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  char v4; // bl
  _WORD *v5; // eax
  unsigned int v6; // ecx
  __int16 v7; // dx
  int v8; // edx
  int v9; // eax
  void *v10; // ebp
  int *v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  void *v18; // eax
  int *v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  _DWORD *v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  _DWORD *v28; // edx
  int result; // eax
  _DWORD *v30; // edx
  int TileIndex; // [esp+14h] [ebp-4Ch]
  int v32; // [esp+18h] [ebp-48h]
  unsigned int v35; // [esp+34h] [ebp-2Ch] BYREF
  unsigned int v36; // [esp+38h] [ebp-28h]
  unsigned int v37; // [esp+3Ch] [ebp-24h] BYREF
  int v38; // [esp+40h] [ebp-20h] BYREF
  int *v39; // [esp+44h] [ebp-1Ch] BYREF
  int v40; // [esp+48h] [ebp-18h] BYREF
  int v41; // [esp+4Ch] [ebp-14h]
  int v42; // [esp+50h] [ebp-10h]
  _BYTE v43[4]; // [esp+54h] [ebp-Ch] BYREF
  int v44; // [esp+58h] [ebp-8h]

  v4 = *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 36) + 132))(*(_DWORD *)(a1 + 36)) + 3278);
  if ( (((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 40) + 904), &v37) >> 12) + 1) >> 1) & 7) > 2 )
    LOWORD(v37) = *(_WORD *)ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 40) + 904), &v38) - 0x3FFF;
  else
    LOWORD(v37) = *(_WORD *)ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 40) + 904), &v38) + 0x3FFF;
  v36 = v37;
  if ( !v4 )
  {
    v8 = *(_DWORD *)(a1 + 44);
    v9 = *(_DWORD *)(a1 + 52);
    if ( v8 != -1 )
    {
      if ( (int)MEMORY[0xA8ED84] - v8 >= v9 )
      {
LABEL_10:
        v35 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int **))(**(_DWORD **)(a1 + 40) + 440))(
                           *(_DWORD *)(a1 + 40),
                           &v39);
        goto LABEL_11;
      }
      v9 -= (int)MEMORY[0xA8ED84] - v8;
    }
    if ( v9 )
    {
      *(_DWORD *)(*(_DWORD *)(a1 + 36) + 108) = 0;
      v30 = (_DWORD *)(*(_DWORD *)(a1 + 40) + 1696);
      *v30 = MEMORY[0xA8ED84];
      v30[1] = v44;
      v30[2] = 0;
      *(_DWORD *)(*(_DWORD *)(a1 + 40) + 1684) = 0;
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 36) + 248))(*(_DWORD *)(a1 + 36));
      *(_DWORD *)(a1 + 40) = 0;
      return result;
    }
    goto LABEL_10;
  }
  v5 = (_WORD *)(*(int (__thiscall **)(_DWORD, int **))(**(_DWORD **)(a1 + 40) + 440))(*(_DWORD *)(a1 + 40), &v39);
  v6 = (((v36 >> 12) + 1) >> 1) & 7;
  v7 = LOWORD(MEMORY[0x89F688][v6]) + *v5;
  LOWORD(v6) = HIWORD(MEMORY[0x89F688][v6]);
  LOWORD(v37) = v7;
  HIWORD(v37) = v5[1] + v6;
  v35 = v37;
LABEL_11:
  v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v35);
  v11 = *(int **)(a1 + 36);
  v12 = *v11;
  v39 = v11;
  v32 = *(_DWORD *)((*(int (__thiscall **)(int *))(v12 + 132))(v11) + 1460);
  v13 = (*(int (__thiscall **)(int *))(*v11 + 132))(v11);
  TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v35, *(_DWORD *)(v13 + 1460), 0);
  v14 = (*(int (__thiscall **)(int *))(*v11 + 132))(v11);
  if ( !Cell::IsBuildable((int)v10, *(_DWORD *)(v14 + 1660), 0, 0, TileIndex, v32, -1, 1) )
    v35 = *(_DWORD *)MapClass::FindPlacementCellsAlt(&v39, 0);
  v15 = MEMORY[0xAC4948];
  v16 = MEMORY[0xAC494C];
  v17 = MEMORY[0xAC4950];
  v40 = MEMORY[0xAC4948];
  v41 = MEMORY[0xAC494C];
  v42 = MEMORY[0xAC4950];
  if ( v35 != MEMORY[0xAC4928] )
  {
    v18 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v35);
    v19 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v18 + 72))(v18, v43);
    v15 = *v19;
    v40 = *v19;
    v16 = v19[1];
    v41 = v16;
    v17 = v19[2];
    v42 = v17;
  }
  if ( v35 == MEMORY[0xAC4928]
    || v15 == MEMORY[0xAC4948] && v16 == MEMORY[0xAC494C] && v17 == MEMORY[0xAC4950]
    || !(unsigned __int8)ParasiteClass::CanExistOnVictimCell(a1)
    || !(*(unsigned __int8 (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(a1 + 36) + 216))(
          *(_DWORD *)(a1 + 36),
          &v40,
          (unsigned __int8)(((v36 >> 7) + 1) >> 1)) )
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 36) + 108) = 0;
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 36) + 248))(*(_DWORD *)(a1 + 36));
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 36);
    if ( *(_BYTE *)(v20 + 1074) && (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v20 + 540)) )
    {
      *(_BYTE *)(*(_DWORD *)(a1 + 36) + 1074) = 0;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 36) + 332))(*(_DWORD *)(a1 + 36));
    }
    v21 = *(_DWORD *)(a1 + 36);
    v22 = *(_DWORD *)(v21 + 1076);
    if ( v22 )
      TeamClass::AddMember(v22, v21, 0);
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 36) + 1196))(
            *(_DWORD *)(a1 + 36),
            a3,
            a2) )
    {
      TechnoClass::SetFocus(*(_DWORD **)(a1 + 36), 0);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 36) + 968))(*(_DWORD *)(a1 + 36), 0);
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 36) + 1152))(*(_DWORD *)(a1 + 36), 0, 1);
    }
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 36) + 1156))(*(_DWORD *)(a1 + 36), 0, 1);
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 36) + 1160))(
      *(_DWORD *)(a1 + 36),
      0,
      0,
      0,
      0,
      0);
    v23 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 36) + 1016))(*(_DWORD *)(a1 + 36), 0);
    v24 = (_DWORD *)(*(_DWORD *)(a1 + 36) + 1696);
    v25 = *(_DWORD *)(*(_DWORD *)v23 + 176);
    *v24 = MEMORY[0xA8ED84];
    v24[1] = v44;
    v24[2] = 3 * v25;
    v26 = *(_DWORD *)(a1 + 68);
    *(_DWORD *)(a1 + 76) = 0;
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 72) = 0;
    if ( v26 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v26 + 248))(v26);
      *(_DWORD *)(a1 + 68) = 0;
    }
    if ( *(_BYTE *)(a1 + 84) )
    {
      v37 = a1;
      v27 = (*(int (__thiscall **)(int *, unsigned int *))(MEMORY[0xB0F5B8] + 16))(&MEMORY[0xB0F5B8], &v37);
      if ( v27 != -1 && v27 < MEMORY[0xB0F5C8] && v27 < --MEMORY[0xB0F5C8] )
      {
        do
        {
          ++v27;
          *((_DWORD *)MEMORY[0xB0F5BC] + v27 - 1) = *((_DWORD *)MEMORY[0xB0F5BC] + v27);
        }
        while ( v27 < MEMORY[0xB0F5C8] );
      }
      *(_BYTE *)(a1 + 84) = 0;
    }
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 40) + 808) = 0;
  v28 = (_DWORD *)(*(_DWORD *)(a1 + 40) + 1696);
  *v28 = MEMORY[0xA8ED84];
  result = v44;
  v28[1] = v44;
  v28[2] = 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 40) + 1684) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}

/* ASM:
sub     esp, 2Ch
push    ebx
push    esi
mov     esi, ecx
mov     ecx, [esi+24h]
mov     eax, [ecx]
call    dword ptr [eax+84h]
mov     bl, [eax+0CCEh]
lea     ecx, [esp+34h+var_24]
push    ecx
mov     ecx, [esi+28h]
add     ecx, 388h
call    ProgressTimer__GetValue
mov     eax, [eax]
shr     eax, 0Ch
inc     eax
shr     eax, 1
and     eax, 7
jl      short loc_62A502
cmp     eax, 2
jg      short loc_62A502
mov     ecx, [esi+28h]
lea     edx, [esp+34h+var_20]
push    edx
add     ecx, 388h
call    ProgressTimer__GetValue
mov     ax, [eax]
add     ax, 3FFFh
mov     word ptr [esp+34h+var_24], ax
mov     ecx, [esp+34h+var_24]
jmp     short loc_62A525
; ---------------------------------------------------------------------------

loc_62A502:                             ; CODE XREF: BuildingClass__Deploy+36↑j
; BuildingClass__Deploy+3B↑j
mov     ecx, [esi+28h]
lea     edx, [esp+34h+var_20]
push    edx
add     ecx, 388h
call    ProgressTimer__GetValue
mov     ax, [eax]
sub     ax, 3FFFh
mov     word ptr [esp+34h+var_24], ax
mov     ecx, [esp+34h+var_24]

loc_62A525:                             ; CODE XREF: BuildingClass__Deploy+60↑j
test    bl, bl
mov     [esp+34h+var_28], ecx
jz      short loc_62A57A
mov     ecx, [esi+28h]
lea     eax, [esp+34h+var_1C]
push    eax
mov     edx, [ecx]
call    dword ptr [edx+1B8h]
mov     ecx, [esp+34h+var_28]
mov     dx, [eax]
shr     ecx, 0Ch
inc     ecx
shr     ecx, 1
and     ecx, 7
add     dx, ds:89F688h[ecx*4]
lea     ecx, ds:89F688h[ecx*4]
mov     cx, [ecx+2]
mov     word ptr [esp+34h+var_24], dx
add     cx, [eax+2]
xor     ebx, ebx
mov     word ptr [esp+34h+var_24+2], cx
mov     edx, [esp+34h+var_24]
mov     [esp+34h+var_2C], edx
jmp     short loc_62A5B7
; ---------------------------------------------------------------------------

loc_62A57A:                             ; CODE XREF: BuildingClass__Deploy+8B↑j
mov     edx, [esi+2Ch]
mov     eax, [esi+34h]
cmp     edx, 0FFFFFFFFh
jz      short loc_62A593
mov     ecx, dword_A8ED54+30h
sub     ecx, edx
cmp     ecx, eax
jge     short loc_62A59F
sub     eax, ecx

loc_62A593:                             ; CODE XREF: BuildingClass__Deploy+E3↑j
xor     ebx, ebx
cmp     eax, ebx
jnz     loc_62A89B
jmp     short loc_62A5A1
; ---------------------------------------------------------------------------

loc_62A59F:                             ; CODE XREF: BuildingClass__Deploy+EF↑j
xor     ebx, ebx

loc_62A5A1:                             ; CODE XREF: BuildingClass__Deploy+FD↑j
mov     ecx, [esi+28h]
lea     edx, [esp+34h+var_1C]
push    edx
mov     eax, [ecx]
call    dword ptr [eax+1B8h]
mov     eax, [eax]
mov     [esp+34h+var_2C], eax

loc_62A5B7:                             ; CODE XREF: BuildingClass__Deploy+D8↑j
push    ebp
lea     ecx, [esp+38h+var_2C]
push    edi
push    ecx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     edx, [esi+24h]
mov     ebp, eax
mov     edi, edx
push    1
push    0FFFFFFFFh
mov     ecx, edi
mov     eax, [edi]
mov     [esp+44h+var_1C], edx
call    dword ptr [eax+84h]
mov     ecx, [eax+5B4h]
mov     edx, [edi]
push    ecx
push    ebx
mov     ecx, edi
call    dword ptr [edx+84h]
mov     eax, [eax+5B4h]
lea     ecx, [esp+4Ch+var_2C]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    MapClass__GetTileIndex
mov     edx, [edi]
push    eax
push    ebx
push    ebx
mov     ecx, edi
call    dword ptr [edx+84h]
mov     eax, [eax+67Ch]
mov     ecx, ebp
push    eax
call    Cell__IsBuildable
test    al, al
jnz     short loc_62A63C
lea     ecx, [esp+3Ch+var_1C]
push    ebx
push    ecx
mov     ecx, [esi+28h]
call    MapClass__FindPlacementCellsAlt
mov     edx, [eax]
mov     [esp+3Ch+var_2C], edx

loc_62A63C:                             ; CODE XREF: BuildingClass__Deploy+186↑j
mov     di, word ptr [esp+3Ch+var_2C]
mov     eax, dword_A8ED54+35BF4h
mov     ecx, dword_A8ED54+35BF8h
mov     edx, dword_A8ED54+35BFCh
cmp     di, word ptr dword_A8ED54+35BD4h
mov     [esp+3Ch+var_18], eax
mov     [esp+3Ch+var_14], ecx
mov     [esp+3Ch+var_10], edx
jnz     short loc_62A675
mov     di, word ptr [esp+3Ch+var_2C+2]
cmp     di, word ptr dword_A8ED54+35BD6h
jz      short loc_62A6A6

loc_62A675:                             ; CODE XREF: BuildingClass__Deploy+1C5↑j
lea     eax, [esp+3Ch+var_2C]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     edx, [eax]
lea     ecx, [esp+3Ch+var_C]
push    ecx
mov     ecx, eax
call    dword ptr [edx+48h]
mov     edx, eax
mov     eax, [edx]
mov     [esp+3Ch+var_18], eax
mov     ecx, [edx+4]
mov     [esp+3Ch+var_14], ecx
mov     edx, [edx+8]
mov     [esp+3Ch+var_10], edx

loc_62A6A6:                             ; CODE XREF: BuildingClass__Deploy+1D3↑j
mov     di, word ptr [esp+3Ch+var_2C]
cmp     di, word ptr dword_A8ED54+35BD4h
jnz     short loc_62A6C6
mov     di, word ptr dword_A8ED54+35BD6h
cmp     word ptr [esp+3Ch+var_2C+2], di
jz      loc_62A851

loc_62A6C6:                             ; CODE XREF: BuildingClass__Deploy+212↑j
cmp     eax, dword_A8ED54+35BF4h
jnz     short loc_62A6E2
cmp     ecx, dword_A8ED54+35BF8h
jnz     short loc_62A6E2
cmp     edx, dword_A8ED54+35BFCh
jz      loc_62A851

loc_62A6E2:                             ; CODE XREF: BuildingClass__Deploy+22C↑j
; BuildingClass__Deploy+234↑j
mov     ecx, esi
call    ParasiteClass__CanExistOnVictimCell
test    al, al
jz      loc_62A851
mov     eax, [esp+3Ch+var_28]
mov     ecx, [esi+24h]
shr     eax, 7
mov     edx, [ecx]
inc     eax
shr     eax, 1
and     eax, 0FFh
push    eax
lea     eax, [esp+40h+var_18]
push    eax
call    dword ptr [edx+0D8h]
test    al, al
jz      loc_62A851
mov     eax, [esi+24h]
mov     cl, [eax+432h]
test    cl, cl
jz      short loc_62A74A
mov     ecx, [eax+21Ch] ; this
call    House__IsHumanPlayer
test    al, al
jz      short loc_62A74A
mov     ecx, [esi+24h]
mov     byte ptr [ecx+432h], 0
mov     ecx, [esi+24h]
mov     edx, [ecx]
call    dword ptr [edx+14Ch]

loc_62A74A:                             ; CODE XREF: BuildingClass__Deploy+284↑j
; BuildingClass__Deploy+293↑j
mov     eax, [esi+24h]
mov     ecx, [eax+434h]
cmp     ecx, ebx
jz      short loc_62A75E
push    ebx
push    eax
call    TeamClass__AddMember

loc_62A75E:                             ; CODE XREF: BuildingClass__Deploy+2B5↑j
mov     ecx, [esi+24h]
mov     eax, [ecx]
call    dword ptr [eax+4ACh]
test    al, al
jnz     short loc_62A790
mov     ecx, [esi+24h]
push    ebx
call    TechnoClass__SetFocus
mov     ecx, [esi+24h]
push    ebx
mov     edx, [ecx]
call    dword ptr [edx+3C8h]
mov     ecx, [esi+24h]
push    1
push    ebx
mov     eax, [ecx]
call    dword ptr [eax+480h]

loc_62A790:                             ; CODE XREF: BuildingClass__Deploy+2CB↑j
mov     ecx, [esi+24h]
push    1
push    ebx
mov     edx, [ecx]
call    dword ptr [edx+484h]
mov     ecx, [esi+24h]
push    ebx
push    ebx
push    ebx
mov     eax, [ecx]
push    ebx
push    ebx
call    dword ptr [eax+488h]
mov     ecx, [esi+24h]
push    ebx
mov     edx, [ecx]
call    dword ptr [edx+3F8h]
mov     edx, [esi+24h]
mov     eax, [eax]
mov     ecx, dword_A8ED54+30h
add     edx, 6A0h
mov     eax, [eax+0B0h]
mov     [edx], ecx
mov     ecx, [esp+3Ch+var_8]
lea     eax, [eax+eax*2]
mov     [edx+4], ecx
mov     [edx+8], eax
mov     ecx, [esi+44h]
cmp     ecx, ebx
mov     [esi+4Ch], ebx
mov     [esi+50h], ebx
mov     [esi+48h], ebx
jz      short loc_62A7FB
mov     edx, [ecx]
call    dword ptr [edx+0F8h]
mov     [esi+44h], ebx

loc_62A7FB:                             ; CODE XREF: BuildingClass__Deploy+34E↑j
mov     al, [esi+54h]
test    al, al
jz      short loc_62A862
mov     edx, dword_A8ED54+80864h
lea     eax, [esp+3Ch+var_24]
push    eax
mov     ecx, (offset dword_A8ED54+80864h)
mov     [esp+40h+var_24], esi
call    dword ptr [edx+10h]
cmp     eax, 0FFFFFFFFh
jz      short loc_62A84B
mov     ecx, dword_A8ED54+80874h
cmp     eax, ecx
jge     short loc_62A84B
dec     ecx
cmp     eax, ecx
mov     dword_A8ED54+80874h, ecx
jge     short loc_62A84B

loc_62A833:                             ; CODE XREF: BuildingClass__Deploy+3A9↓j
mov     ecx, dword_A8ED54+80868h
inc     eax
mov     edx, [ecx+eax*4]
mov     [ecx+eax*4-4], edx
mov     ecx, dword_A8ED54+80874h
cmp     eax, ecx
jl      short loc_62A833

loc_62A84B:                             ; CODE XREF: BuildingClass__Deploy+37C↑j
; BuildingClass__Deploy+386↑j ...
mov     byte ptr [esi+54h], 0
jmp     short loc_62A862
; ---------------------------------------------------------------------------

loc_62A851:                             ; CODE XREF: BuildingClass__Deploy+220↑j
; BuildingClass__Deploy+23C↑j ...
mov     eax, [esi+24h]
mov     [eax+6Ch], ebx
mov     ecx, [esi+24h]
mov     edx, [ecx]
call    dword ptr [edx+0F8h]

loc_62A862:                             ; CODE XREF: BuildingClass__Deploy+360↑j
; BuildingClass__Deploy+3AF↑j
mov     eax, [esi+28h]
xor     ecx, ecx
pop     edi
pop     ebp
mov     [eax+328h], ebx
mov     edx, [esi+28h]
mov     eax, dword_A8ED54+30h
add     edx, 6A0h
mov     [edx], eax
mov     eax, [esp+34h+var_8]
mov     [edx+4], eax
mov     [edx+8], ecx
mov     ecx, [esi+28h]
mov     [ecx+694h], ebx
mov     [esi+28h], ebx
pop     esi
pop     ebx
add     esp, 2Ch
retn
; ---------------------------------------------------------------------------

loc_62A89B:                             ; CODE XREF: BuildingClass__Deploy+F7↑j
mov     edx, [esi+24h]
xor     ecx, ecx
mov     [edx+6Ch], ebx
mov     edx, [esi+28h]
mov     eax, dword_A8ED54+30h
add     edx, 6A0h
mov     [edx], eax
mov     eax, [esp+34h+var_8]
mov     [edx+4], eax
mov     [edx+8], ecx
mov     ecx, [esi+28h]
mov     [ecx+694h], ebx
mov     ecx, [esi+24h]
mov     edx, [ecx]
call    dword ptr [edx+0F8h]
mov     [esi+28h], ebx
pop     esi
pop     ebx
add     esp, 2Ch
retn
*/
}

// IDA 0x465d40: check if 1x1 and undeployable
// 0x465d40
bool BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable()
{
// [IDA decompile]
BOOL __thiscall BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable(_DWORD *this)
{
  int v1; // eax
  BOOL result; // eax

  result = 0;
  if ( *(this + 258) )
  {
    v1 = *(this + 956);
    if ( dword_8192B8[v1] == 1 && dword_819310[v1] == 1 )
      return 1;
  }
  return result;
}

/* ASM:
mov     eax, [ecx+408h]
test    eax, eax
jz      short loc_465D6B
mov     eax, [ecx+0EF0h]
mov     ecx, 1
shl     eax, 2
cmp     dword_8192B8[eax], ecx
jnz     short loc_465D6B
cmp     dword_819310[eax], ecx
jnz     short loc_465D6B
mov     eax, ecx
retn
; ---------------------------------------------------------------------------

loc_465D6B:                             ; CODE XREF: BuildingClass__Is1x1AndUndeployable_BuildingMassSelectable+8↑j
; BuildingClass__Is1x1AndUndeployable_BuildingMassSelectable+1E↑j ...
xor     eax, eax
retn
*/
}

void BuildingClass::UpdateMovingPosition() {}
void BuildingClass::UpdateFloatPosition() {}
void BuildingClass::AdjustHeight() {}

// ============================================================
// Section 11: Animation
// ============================================================

void BuildingClass::PlayAnim(int anim_index, int anim_type, int frame_count)
{
    if (anim_index < 0 || anim_index >= 0x15 || !Type) return;
    // Spawn animation at building location
    CoordStruct animPos = location;
    animPos.Z += 128;
    // Anims[anim_index] = new AnimClass(Type->GetAnimType(anim_type), animPos, ...);
}

void BuildingClass::StopAnim(int anim_index)
{
    if (anim_index >= 0 && anim_index < 0x15)
        Anims[anim_index] = nullptr;
}

void BuildingClass::ClearAnims()
{
    for (int i = 0; i < 0x15; ++i) StopAnim(i);
}

void BuildingClass::ProcessActiveAnimation() {}
void BuildingClass::UpdateAnimFrames() {}
void BuildingClass::ProcessAnimationStates() {}
void BuildingClass::UpdateIdleAnims() {}
void BuildingClass::UpdateAnimationSlots() {}
void BuildingClass::ProcessDamageAnim() {}
void BuildingClass::UpdateDamageAnim() { ProcessDamageAnim(); }
void BuildingClass::CreateIdleAnim() {}

// IDA 0x451750: play upgrade animation
// 0x451750
void BuildingClass::PlayUpgradeAnim()
{
// [IDA decompile]
int __thiscall BuildingClass_PlayUpgradeAnim(_DWORD *this, int a2, int a3, int a4, void *a5)
{
  int result; // eax
  _BYTE *v6; // edx

  if ( (_BYTE)a3 )
  {
    result = a2;
    v6 = (_BYTE *)(*(this + 328) + 68 * a2 + 3932);
  }
  else
  {
    result = a2;
    if ( (_BYTE)a4 )
      v6 = (_BYTE *)(*(this + 328) + 68 * a2 + 3948);
    else
      v6 = (_BYTE *)(*(this + 328) + 68 * a2 + 3916);
  }
  if ( v6 )
  {
    if ( *v6 )
      return BuildingClass::PlayAnim(this, (int)v6, v6, result, a3, a4, a5);
  }
  return result;
}

/* ASM:
push    ebx
mov     ebx, [esp+4+arg_8]
push    esi
mov     esi, ecx
mov     ecx, [esp+8+arg_4]
push    edi
test    cl, cl
jz      short loc_45177B
mov     eax, [esp+0Ch+arg_0]
mov     edi, [esi+520h]
mov     edx, eax
shl     edx, 4
add     edx, eax
lea     edx, [edi+edx*4+0F5Ch]
jmp     short loc_4517AB
; ---------------------------------------------------------------------------

loc_45177B:                             ; CODE XREF: BuildingClass__PlayUpgradeAnim+F↑j
mov     eax, [esp+0Ch+arg_0]
test    bl, bl
mov     edx, eax
jz      short loc_451799
mov     edi, [esi+520h]
shl     edx, 4
add     edx, eax
lea     edx, [edi+edx*4+0F6Ch]
jmp     short loc_4517AB
; ---------------------------------------------------------------------------

loc_451799:                             ; CODE XREF: BuildingClass__PlayUpgradeAnim+33↑j
mov     edi, [esi+520h]
shl     edx, 4
add     edx, eax
lea     edx, [edi+edx*4+0F4Ch]

loc_4517AB:                             ; CODE XREF: BuildingClass__PlayUpgradeAnim+29↑j
; BuildingClass__PlayUpgradeAnim+47↑j
test    edx, edx
jz      short loc_4517C4
cmp     byte ptr [edx], 0
jz      short loc_4517C4
mov     edi, [esp+0Ch+arg_C]
push    edi             ; int
push    ebx             ; int
push    ecx             ; int
push    eax             ; int
push    edx             ; void *
mov     ecx, esi
call    BuildingClass__PlayAnim

loc_4517C4:                             ; CODE XREF: BuildingClass__PlayUpgradeAnim+5D↑j
; BuildingClass__PlayUpgradeAnim+62↑j
pop     edi
pop     esi
pop     ebx
retn    10h
*/
}

// IDA 0x451f60: sync crate visual state
// 0x451f60
void BuildingClass::SyncCrateVisuals()
{
// [IDA decompile]
int __thiscall sub_451F60(char *this, int a2, int a3)
{
  _DWORD *v4; // ebp
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ebx
  char *v8; // ecx
  int v9; // esi
  int result; // eax
  int v11; // [esp+10h] [ebp-4h]

  v11 = 21;
  v4 = this + 1372;
  do
  {
    v5 = (_DWORD *)*v4;
    if ( *v4 )
    {
      v6 = v5[50];
      if ( v6 && *(_BYTE *)(v6 + 860) )
      {
        v5[53] = a2;
        v5[63] = a3;
      }
      v7 = *(this + 1773);
      if ( v7 == 15 && (*(int (__thiscall **)(char *, _DWORD, _DWORD))(*(_DWORD *)this + 104))(this, 0, 0) == 5 )
        LOBYTE(v7) = 16;
      v8 = this + 1372;
      v9 = 21;
      do
      {
        if ( *(_DWORD *)v8 )
          *(_BYTE *)(*(_DWORD *)v8 + 376) = v7;
        v8 += 4;
        --v9;
      }
      while ( v9 );
    }
    ++v4;
    result = --v11;
  }
  while ( v11 );
  return result;
}

/* ASM:
push    ecx
push    ebx
push    ebp
push    esi
push    edi
mov     edi, ecx
mov     [esp+14h+var_4], 15h
lea     ebp, [edi+55Ch]

loc_451F75:                             ; CODE XREF: BuildingClass__SyncCrateVisuals+8E↓j
mov     eax, [ebp+0]
test    eax, eax
jz      short loc_451FE2
mov     ecx, [eax+0C8h]
test    ecx, ecx
jz      short loc_451FA4
mov     dl, [ecx+35Ch]
test    dl, dl
jz      short loc_451FA4
mov     ecx, [esp+14h+arg_0]
mov     edx, [esp+14h+arg_4]
mov     [eax+0D4h], ecx
mov     [eax+0FCh], edx

loc_451FA4:                             ; CODE XREF: BuildingClass__SyncCrateVisuals+24↑j
; BuildingClass__SyncCrateVisuals+2E↑j
movsx   ebx, byte ptr [edi+6EDh]
cmp     ebx, 0Fh
jnz     short loc_451FC5
mov     eax, [edi]
push    0
push    0
mov     ecx, edi
call    dword ptr [eax+68h]
cmp     eax, 5
jnz     short loc_451FC5
mov     ebx, 10h

loc_451FC5:                             ; CODE XREF: BuildingClass__SyncCrateVisuals+4E↑j
; BuildingClass__SyncCrateVisuals+5E↑j
lea     ecx, [edi+55Ch]
mov     esi, 15h

loc_451FD0:                             ; CODE XREF: BuildingClass__SyncCrateVisuals+80↓j
mov     eax, [ecx]
test    eax, eax
jz      short loc_451FDC
mov     [eax+178h], bl

loc_451FDC:                             ; CODE XREF: BuildingClass__SyncCrateVisuals+74↑j
add     ecx, 4
dec     esi
jnz     short loc_451FD0

loc_451FE2:                             ; CODE XREF: BuildingClass__SyncCrateVisuals+1A↑j
mov     eax, [esp+14h+var_4]
add     ebp, 4
dec     eax
mov     [esp+14h+var_4], eax
jnz     short loc_451F75
pop     edi
pop     esi
pop     ebp
pop     ebx
pop     ecx
retn    8
*/
}

void BuildingClass::MarkUpgradeComponentUsed() {}

// IDA 0x629720: animation controller
void BuildingClass::AnimController()
{
    // Update building animations based on state
}

// ============================================================
// Section 12: Cloak / Visibility
// ============================================================

void BuildingClass::UpdateCloak() {}

// IDA 0x457c90: iron curtain effect
// 0x457c90
int BuildingClass::IronCurtain()
{
// [IDA decompile]
int __thiscall BuildingClass::ApplyIronCurtain(#377 *this)
{
  #72 *v1; // eax
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+10h] [ebp+4h]
  int v5; // [esp+14h] [ebp+8h]
  char v6; // [esp+18h] [ebp+Ch]

  if ( *((_BYTE *)this + 1759) )
  {
    *((_BYTE *)this + 1759) = 0;
    v1 = MEMORY[0xA8ED84];
    *((_DWORD *)this + 336) = 0;
    *((_DWORD *)this + 330) = v1;
    *((_DWORD *)this + 331) = v3;
    *((_DWORD *)this + 332) = 0;
  }
  return TechnoClass::IronCurtain(v4, v5, v6);
}

/* ASM:
mov     al, [ecx+6DFh]
xor     edx, edx
sub     esp, 0Ch
cmp     al, dl
jz      short loc_457CC4
push    esi
mov     [ecx+6DFh], dl
mov     eax, dword_A8ED54+30h
lea     esi, [ecx+528h]
mov     [ecx+540h], edx
mov     [esi], eax
mov     eax, [esp+10h+var_8]
mov     [esi+4], eax
mov     [esi+8], edx
pop     esi

loc_457CC4:                             ; CODE XREF: BuildingClass__IronCurtain+D↑j
mov     edx, [esp+0Ch+arg_8]
mov     eax, [esp+0Ch+arg_4]
push    edx
mov     edx, [esp+10h+arg_0]
push    eax
push    edx
call    TechnoClass__IronCurtain
add     esp, 0Ch
retn    0Ch
*/
}

// IDA 0x6f9e10: check if invisible
// 0x6f9e10
bool BuildingClass::IsInvisible() {
// [IDA decompile]
int __thiscall BuildingClass::IsInvisible(#377 *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this);
  if ( *(_DWORD *)(result + 176) )
  {
    result = *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 176);
    LOBYTE(result) = *(_BYTE *)result == 0;
  }
  else
  {
    LOBYTE(result) = 0;
  }
  return result;
}

/* ASM:
push    esi
mov     esi, ecx
mov     eax, [esi]
call    dword ptr [eax+84h]
mov     ecx, [eax+0B0h]
test    ecx, ecx
jnz     short loc_6F9E29
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_6F9E29:                             ; CODE XREF: BuildingClass__IsInvisible+13↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     eax, [eax+0B0h]
pop     esi
cmp     byte ptr [eax], 0
setz    al
retn
*/
}

void BuildingClass::AnnounceReady() {}

// IDA 0x456580: update reveal field around building
// 0x456580
void BuildingClass::UpdateRevealField()
{
// [IDA decompile]
int __thiscall BuildingClass::_vt293(#377 *this)
{
  char *Field; // ebx
  int v3; // edi
  int result; // eax

  Field = Diplomacy::GetField((char *)&MEMORY[0x87F7E8], *((_DWORD *)this + 328));
  v3 = 0;
  result = *((_DWORD *)Field + 4);
  if ( result > 0 )
  {
    do
    {
      BuildingClass::ProcessFogCellOccupancy(
        (int)&MEMORY[0x87F7E8],
        (int)this,
        *(_DWORD *)(*((_DWORD *)Field + 1) + 8 * v3) + *((_DWORD *)this + 130),
        *((_DWORD *)this + 131) + *(_DWORD *)(*((_DWORD *)Field + 1) + 8 * v3 + 4));
      result = *((_DWORD *)Field + 4);
      ++v3;
    }
    while ( v3 < result );
  }
  *((_BYTE *)this + 1059) = 1;
  return result;
}

/* ASM:
push    ebx
push    esi
mov     esi, ecx
push    edi
mov     ecx, 87F7E8h
mov     eax, [esi+520h]
push    eax
call    Diplomacy__GetField
mov     ebx, eax
xor     edi, edi
mov     eax, [ebx+10h]
test    eax, eax
jle     short loc_4565D2

loc_4565A1:                             ; CODE XREF: BuildingClass__UpdateRevealField+50↓j
mov     ecx, [ebx+4]
mov     eax, [esi+208h]
mov     edx, [ecx+edi*8]
lea     ecx, [ecx+edi*8]
add     eax, edx
mov     edx, [esi+20Ch]
mov     ecx, [ecx+4]
add     ecx, edx
push    ecx
push    eax
push    esi
mov     ecx, 87F7E8h
call    BuildingClass__ProcessFogCellOccupancy
mov     eax, [ebx+10h]
inc     edi
cmp     edi, eax
jl      short loc_4565A1

loc_4565D2:                             ; CODE XREF: BuildingClass__UpdateRevealField+1F↑j
mov     byte ptr [esi+423h], 1
pop     edi
pop     esi
pop     ebx
retn
*/
}

// IDA 0x4565e0: update gap generator field
// 0x4565e0
void BuildingClass::UpdateGapGeneratorField()
{
// [IDA decompile]
int __thiscall BuildingClass::_vt294(#377 *this)
{
  char *Field; // ebp
  int v3; // edi
  int result; // eax

  Field = Diplomacy::GetField((char *)&MEMORY[0x87F7E8], *((_DWORD *)this + 328));
  v3 = 0;
  result = *((_DWORD *)Field + 4);
  if ( result > 0 )
  {
    do
    {
      BuildingClass::RemoveGapCellCoverage(
        (int)&MEMORY[0x87F7E8],
        (int)this,
        *(_DWORD *)(*((_DWORD *)Field + 1) + 8 * v3) + *((_DWORD *)this + 130),
        *((_DWORD *)this + 131) + *(_DWORD *)(*((_DWORD *)Field + 1) + 8 * v3 + 4));
      result = *((_DWORD *)Field + 4);
      ++v3;
    }
    while ( v3 < result );
  }
  *((_BYTE *)this + 1059) = 0;
  return result;
}

/* ASM:
push    ebp
push    esi
mov     esi, ecx
push    edi
mov     ecx, 87F7E8h
mov     eax, [esi+520h]
push    eax
call    Diplomacy__GetField
mov     ebp, eax
xor     edi, edi
mov     eax, [ebp+10h]
test    eax, eax
jle     short loc_456632

loc_456601:                             ; CODE XREF: BuildingClass__UpdateGapGeneratorField+50↓j
mov     ecx, [ebp+4]
mov     eax, [esi+208h]
mov     edx, [ecx+edi*8]
lea     ecx, [ecx+edi*8]
add     eax, edx
mov     edx, [esi+20Ch]
mov     ecx, [ecx+4]
add     ecx, edx
push    ecx
push    eax
push    esi
mov     ecx, 87F7E8h
call    BuildingClass__RemoveGapCellCoverage
mov     eax, [ebp+10h]
inc     edi
cmp     edi, eax
jl      short loc_456601

loc_456632:                             ; CODE XREF: BuildingClass__UpdateGapGeneratorField+1F↑j
mov     byte ptr [esi+423h], 0
pop     edi
pop     esi
pop     ebp
retn
*/
}

// IDA 0x456640: update detection field
// 0x456640
void BuildingClass::UpdateDetectionField()
{
// [IDA decompile]
int __thiscall BuildingClass::_vt295(#377 *this)
{
  char *Field; // ebx
  int v3; // esi
  int result; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  _DWORD v9[2]; // [esp+Ch] [ebp-8h] BYREF

  Field = Diplomacy::GetField((char *)&MEMORY[0x87F7E8], *((_DWORD *)this + 328));
  v3 = 0;
  result = *((_DWORD *)Field + 4);
  if ( result > 0 )
  {
    do
    {
      v5 = *((_DWORD *)Field + 1);
      v6 = *(_DWORD *)(v5 + 8 * v3) + *((_DWORD *)this + 130);
      v7 = *((_DWORD *)this + 131);
      v8 = *(_DWORD *)(v5 + 8 * v3 + 4);
      v9[0] = v6;
      v9[1] = v7 + v8;
      FogOfWar::RevealCell((int)&MEMORY[0x87F7E8], v9);
      result = *((_DWORD *)Field + 4);
      ++v3;
    }
    while ( v3 < result );
  }
  return result;
}

/* ASM:
sub     esp, 8
push    ebx
push    esi
push    edi
mov     edi, ecx
mov     ecx, 87F7E8h
mov     eax, [edi+520h]
push    eax
call    Diplomacy__GetField
mov     ebx, eax
xor     esi, esi
mov     eax, [ebx+10h]
test    eax, eax
jle     short loc_45669F

loc_456664:                             ; CODE XREF: BuildingClass__UpdateDetectionField+5D↓j
mov     ecx, [ebx+4]
mov     eax, [edi+208h]
mov     edx, [ecx+esi*8]
lea     ecx, [ecx+esi*8]
add     eax, edx
mov     edx, [edi+20Ch]
mov     ecx, [ecx+4]
mov     [esp+14h+var_8], eax
add     ecx, edx
lea     edx, [esp+14h+var_8]
mov     [esp+14h+var_4], ecx
push    edx
mov     ecx, 87F7E8h
call    FogOfWar__RevealCell
mov     eax, [ebx+10h]
inc     esi
cmp     esi, eax
jl      short loc_456664

loc_45669F:                             ; CODE XREF: BuildingClass__UpdateDetectionField+22↑j
pop     edi
pop     esi
pop     ebx
add     esp, 8
retn
*/
}

bool BuildingClass::IsCellVisibleToPlayer(int cell_x, int cell_y)
{
    (void)cell_x; (void)cell_y;
    return true;
}

void BuildingClass::CreateFoggedObjects() {}
void BuildingClass::RevealShroud(int radius) { (void)radius; }
void BuildingClass::RemoveShroud() {}
void BuildingClass::ProcessFogCellOccupancy() {}

// IDA 0x655740: remove gap cell coverage
// 0x655740
void BuildingClass::RemoveGapCellCoverage()
{
// [IDA decompile]
void __thiscall sub_655740(int this, int a2, int a3, int a4)
{
  int v5; // esi
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // ebx
  _DWORD *v14; // ecx
  _DWORD v15[4]; // [esp+8h] [ebp-10h] BYREF

  v5 = **(_DWORD **)(this + 4696);
  v15[1] = a3;
  v15[2] = a4;
  v6 = (_DWORD *)(v5 + 24 * (unsigned __int8)(a3 - 5 * a4));
  v15[0] = a2;
  v15[3] = a2;
  v7 = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*v6 + 16))(v6, v15);
  if ( v7 != -1 )
  {
    v8 = v6[4];
    if ( v7 < v8 )
    {
      v9 = v8 - 1;
      v10 = v7;
      v6[4] = v9;
      if ( v7 < v9 )
      {
        v11 = 16 * v7;
        do
        {
          v12 = v6[1];
          v13 = (_DWORD *)(v11 + v12 + 16);
          v14 = (_DWORD *)(v11 + v12);
          ++v10;
          v11 += 16;
          *v14 = *v13;
          v14[1] = v13[1];
          v14[2] = v13[2];
          v14[3] = v13[3];
        }
        while ( v10 < v6[4] );
      }
      FogOfWar::RevealCell(this, &a3);
      *(_BYTE *)(this + 5337) = 1;
    }
  }
}

/* ASM:
sub     esp, 10h
push    esi
mov     edx, [esp+14h+arg_4]
push    edi
mov     edi, ecx
mov     ecx, [esp+18h+arg_8]
lea     eax, [ecx+ecx*4]
mov     esi, eax
mov     eax, edx
sub     eax, esi
mov     esi, [edi+1258h]
and     eax, 0FFh
mov     esi, [esi]
mov     [esp+18h+var_C], edx
lea     eax, [eax+eax*2]
mov     [esp+18h+var_8], ecx
lea     esi, [esi+eax*8]
mov     eax, [esp+18h+arg_0]
mov     [esp+18h+var_10], eax
mov     [esp+18h+var_4], eax
mov     edx, [esi]
lea     eax, [esp+18h+var_10]
push    eax
mov     ecx, esi
call    dword ptr [edx+10h]
cmp     eax, 0FFFFFFFFh
jz      short loc_6557E5
mov     ecx, [esi+10h]
cmp     eax, ecx
jge     short loc_6557E5
dec     ecx
mov     edx, eax
cmp     eax, ecx
mov     [esi+10h], ecx
jge     short loc_6557D2
push    ebx
push    ebp
shl     eax, 4

loc_6557A6:                             ; CODE XREF: BuildingClass__RemoveGapCellCoverage+8E↓j
mov     ecx, [esi+4]
lea     ebx, [eax+ecx+10h]
add     ecx, eax
inc     edx
add     eax, 10h
mov     ebp, [ebx]
mov     [ecx], ebp
mov     ebp, [ebx+4]
mov     [ecx+4], ebp
mov     ebp, [ebx+8]
mov     [ecx+8], ebp
mov     ebx, [ebx+0Ch]
mov     [ecx+0Ch], ebx
mov     ecx, [esi+10h]
cmp     edx, ecx
jl      short loc_6557A6
pop     ebp
pop     ebx

loc_6557D2:                             ; CODE XREF: BuildingClass__RemoveGapCellCoverage+5F↑j
lea     edx, [esp+18h+arg_4]
mov     ecx, edi
push    edx
call    FogOfWar__RevealCell
mov     byte ptr [edi+14D9h], 1

loc_6557E5:                             ; CODE XREF: BuildingClass__RemoveGapCellCoverage+4E↑j
; BuildingClass__RemoveGapCellCoverage+55↑j
pop     edi
pop     esi
add     esp, 10h
retn    0Ch
*/
}

// ============================================================
// Section 13: Update
// ============================================================

void BuildingClass::Update()
{
    UpdatePowerAnimation();
    ProcessActiveUpdate();
}

// IDA 0x44e8f0: object expired notification
// 0x44e8f0
void BuildingClass::OnObjectExpired(ObjectClass* obj)
{
// [IDA decompile]
int __thiscall BuildingClass::OnObjectExpired(#377 *this)
{
  int v2; // edx
  int v3; // ecx
  _BYTE *v4; // eax
  int v5; // edx
  int v6; // ecx
  _BYTE *v7; // eax
  int result; // eax
  _DWORD *v9; // ecx
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  char *v17; // esi
  int v18; // ecx
  int v19; // ecx
  int v20; // [esp+10h] [ebp+4h]
  _BYTE *v21; // [esp+14h] [ebp+8h] BYREF

  ObjectClass::NotifyExpired((int *)this, (_BYTE *)v20, v21);
  if ( *((_DWORD *)this + 336) == v20 )
    *((_DWORD *)this + 336) = 0;
  if ( *((_DWORD *)this + 338) == v20 )
    *((_DWORD *)this + 338) = 0;
  if ( *((_DWORD *)this + 329) == v20 )
    *((_DWORD *)this + 329) = 0;
  if ( *((_DWORD *)this + 384) == v20 )
    *((_DWORD *)this + 384) = 0;
  if ( *((_DWORD *)this + 389) == v20 )
    *((_DWORD *)this + 389) = 0;
  if ( *((_DWORD *)this + 351) == v20 )
  {
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(MEMORY[0x87F7E8][7806] + 5888) )
    {
      v3 = 0;
      v4 = (_BYTE *)(*((_DWORD *)this + 328) + 5140);
    }
    else
    {
      v3 = 1;
      v4 = (_BYTE *)(*((_DWORD *)this + 328) + 5156);
    }
    if ( v4 && *v4 )
      BuildingClass::PlayAnim(this, v2, v4, 18, v3, 0, 0);
  }
  if ( *(_BYTE *)(*((_DWORD *)this + 328) + 5805) && *((_DWORD *)this + 353) == v20 )
  {
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(MEMORY[0x87F7E8][7806] + 5888) )
    {
      v6 = 0;
      v7 = (_BYTE *)(*((_DWORD *)this + 328) + 4120);
    }
    else
    {
      v6 = 1;
      v7 = (_BYTE *)(*((_DWORD *)this + 328) + 4136);
    }
    if ( v7 && *v7 )
      BuildingClass::PlayAnim(this, v5, v7, 3, v6, 0, 0);
  }
  if ( v20 && (*(int (__stdcall **)(int))(*(_DWORD *)(v20 + 4) + 12))(v20 + 4) == 4 )
  {
    result = 0;
    v9 = (_DWORD *)((char *)this + 1480);
    do
    {
      if ( *v9 == v20 )
      {
        *((_DWORD *)this + result + 370) = 0;
        return result;
      }
      ++result;
      ++v9;
    }
    while ( result < 8 );
    if ( !*(_BYTE *)(v20 + 280) )
      goto LABEL_34;
    LOBYTE(result) = BuildingClass::StopAnim((int)this, v20);
  }
  else
  {
LABEL_34:
    if ( *((_DWORD *)this + 328) == v20 )
      *((_DWORD *)this + 328) = 0;
    v10 = (_DWORD *)((char *)this + 1516);
    v11 = 3;
    do
    {
      if ( *v10 == v20 )
        *v10 = 0;
      ++v10;
      --v11;
    }
    while ( v11 );
    v12 = *((_DWORD *)this + 411);
    v21 = (_BYTE *)v20;
    v13 = (*(int (__thiscall **)(char *, _BYTE **))(v12 + 16))((char *)this + 1644, &v21);
    if ( v13 != -1 )
    {
      v14 = *((_DWORD *)this + 415);
      if ( v13 < v14 )
      {
        v15 = v14 - 1;
        for ( *((_DWORD *)this + 415) = v15;
              v13 < *((_DWORD *)this + 415);
              *(_DWORD *)(*((_DWORD *)this + 412) + 4 * v13 - 4) = *(_DWORD *)(*((_DWORD *)this + 412) + 4 * v13) )
        {
          ++v13;
        }
      }
    }
    result = MEMORY[0x87F7E8][539633];
    if ( MEMORY[0x87F7E8][539633] )
    {
      v16 = *((_DWORD *)this + 417);
      v17 = (char *)this + 1668;
      v21 = (_BYTE *)v20;
      result = (*(int (__thiscall **)(char *, _BYTE **))(v16 + 16))(v17, &v21);
      if ( result != -1 )
      {
        v18 = *((_DWORD *)v17 + 4);
        if ( result < v18 )
        {
          v19 = v18 - 1;
          for ( *((_DWORD *)v17 + 4) = v19;
                result < *((_DWORD *)v17 + 4);
                *(_DWORD *)(*((_DWORD *)v17 + 1) + 4 * result - 4) = *(_DWORD *)(*((_DWORD *)v17 + 1) + 4 * result) )
          {
            ++result;
          }
        }
      }
    }
  }
  return result;
}

/* ASM:
mov     eax, [esp+arg_4]
push    ebx
push    ebp
mov     ebp, [esp+8+arg_0]
push    esi
push    eax
mov     esi, ecx
push    ebp
call    ObjectClass__NotifyExpired
mov     eax, [esi+540h]
xor     ebx, ebx
cmp     eax, ebp
jnz     short loc_44E916
mov     [esi+540h], ebx

loc_44E916:                             ; CODE XREF: BuildingClass__OnObjectExpired+1E↑j
cmp     [esi+548h], ebp
jnz     short loc_44E924
mov     [esi+548h], ebx

loc_44E924:                             ; CODE XREF: BuildingClass__OnObjectExpired+2C↑j
cmp     [esi+524h], ebp
jnz     short loc_44E932
mov     [esi+524h], ebx

loc_44E932:                             ; CODE XREF: BuildingClass__OnObjectExpired+3A↑j
cmp     [esi+600h], ebp
jnz     short loc_44E940
mov     [esi+600h], ebx

loc_44E940:                             ; CODE XREF: BuildingClass__OnObjectExpired+48↑j
cmp     [esi+614h], ebp
jnz     short loc_44E94E
mov     [esi+614h], ebx

loc_44E94E:                             ; CODE XREF: BuildingClass__OnObjectExpired+56↑j
cmp     [esi+57Ch], ebp
jnz     short loc_44E9A4
mov     ecx, esi
call    BuildingClass__GetHealthRatio
mov     ecx, ds:8871E0h
fcomp   qword ptr [ecx+1700h]
fnstsw  ax
test    ah, 41h
jz      short loc_44E982
mov     eax, [esi+520h]
mov     ecx, 1
add     eax, 1424h
jmp     short loc_44E98F
; ---------------------------------------------------------------------------

loc_44E982:                             ; CODE XREF: BuildingClass__OnObjectExpired+7E↑j
mov     eax, [esi+520h]
xor     ecx, ecx
add     eax, 1414h

loc_44E98F:                             ; CODE XREF: BuildingClass__OnObjectExpired+90↑j
cmp     eax, ebx
jz      short loc_44E9A4
cmp     [eax], bl
jz      short loc_44E9A4
push    ebx             ; int
push    ebx             ; int
push    ecx             ; int
push    12h             ; int
push    eax             ; void *
mov     ecx, esi
call    BuildingClass__PlayAnim

loc_44E9A4:                             ; CODE XREF: BuildingClass__OnObjectExpired+64↑j
; BuildingClass__OnObjectExpired+A1↑j ...
mov     edx, [esi+520h]
cmp     [edx+16ADh], bl
jz      short loc_44EA07
cmp     [esi+584h], ebp
jnz     short loc_44EA07
mov     ecx, esi
call    BuildingClass__GetHealthRatio
mov     eax, ds:8871E0h
fcomp   qword ptr [eax+1700h]
fnstsw  ax
test    ah, 41h
jz      short loc_44E9E5
mov     eax, [esi+520h]
mov     ecx, 1
add     eax, 1028h
jmp     short loc_44E9F2
; ---------------------------------------------------------------------------

loc_44E9E5:                             ; CODE XREF: BuildingClass__OnObjectExpired+E1↑j
mov     eax, [esi+520h]
xor     ecx, ecx
add     eax, 1018h

loc_44E9F2:                             ; CODE XREF: BuildingClass__OnObjectExpired+F3↑j
cmp     eax, ebx
jz      short loc_44EA07
cmp     [eax], bl
jz      short loc_44EA07
push    ebx             ; int
push    ebx             ; int
push    ecx             ; int
push    3               ; int
push    eax             ; void *
mov     ecx, esi
call    BuildingClass__PlayAnim

loc_44EA07:                             ; CODE XREF: BuildingClass__OnObjectExpired+C0↑j
; BuildingClass__OnObjectExpired+C8↑j ...
cmp     ebp, ebx
jz      short loc_44EA52
mov     ecx, [ebp+4]
lea     eax, [ebp+4]
push    eax
call    dword ptr [ecx+0Ch]
cmp     eax, 4
jnz     short loc_44EA52
xor     eax, eax
lea     ecx, [esi+5C8h]

loc_44EA22:                             ; CODE XREF: BuildingClass__OnObjectExpired+13D↓j
cmp     [ecx], ebp
jz      short loc_44EA45
inc     eax
add     ecx, 4
cmp     eax, 8
jl      short loc_44EA22
cmp     [ebp+118h], bl
jz      short loc_44EA52
push    ebp
mov     ecx, esi
call    BuildingClass__StopAnim
pop     esi
pop     ebp
pop     ebx
retn    8
; ---------------------------------------------------------------------------

loc_44EA45:                             ; CODE XREF: BuildingClass__OnObjectExpired+134↑j
mov     [esi+eax*4+5C8h], ebx
pop     esi
pop     ebp
pop     ebx
retn    8
; ---------------------------------------------------------------------------

loc_44EA52:                             ; CODE XREF: BuildingClass__OnObjectExpired+119↑j
; BuildingClass__OnObjectExpired+128↑j ...
cmp     [esi+520h], ebp
jnz     short loc_44EA60
mov     [esi+520h], ebx

loc_44EA60:                             ; CODE XREF: BuildingClass__OnObjectExpired+168↑j
lea     eax, [esi+5ECh]
mov     ecx, 3

loc_44EA6B:                             ; CODE XREF: BuildingClass__OnObjectExpired+185↓j
cmp     [eax], ebp
jnz     short loc_44EA71
mov     [eax], ebx

loc_44EA71:                             ; CODE XREF: BuildingClass__OnObjectExpired+17D↑j
add     eax, 4
dec     ecx
jnz     short loc_44EA6B
mov     edx, [esi+66Ch]
push    edi
lea     edi, [esi+66Ch]
lea     eax, [esp+10h+arg_4]
push    eax
mov     ecx, edi
mov     [esp+14h+arg_4], ebp
call    dword ptr [edx+10h]
cmp     eax, 0FFFFFFFFh
jz      short loc_44EAB8
mov     ecx, [edi+10h]
cmp     eax, ecx
jge     short loc_44EAB8
dec     ecx
cmp     eax, ecx
mov     [edi+10h], ecx
jge     short loc_44EAB8

loc_44EAA6:                             ; CODE XREF: BuildingClass__OnObjectExpired+1C6↓j
mov     ecx, [edi+4]
inc     eax
mov     edx, [ecx+eax*4]
mov     [ecx+eax*4-4], edx
mov     ecx, [edi+10h]
cmp     eax, ecx
jl      short loc_44EAA6

loc_44EAB8:                             ; CODE XREF: BuildingClass__OnObjectExpired+1A5↑j
; BuildingClass__OnObjectExpired+1AC↑j ...
mov     eax, ds:0A8E7ACh
pop     edi
cmp     eax, ebx
jz      short loc_44EB02
mov     eax, [esi+684h]
add     esi, 684h
lea     ecx, [esp+0Ch+arg_4]
mov     [esp+0Ch+arg_4], ebp
push    ecx
mov     ecx, esi
call    dword ptr [eax+10h]
cmp     eax, 0FFFFFFFFh
jz      short loc_44EB02
mov     ecx, [esi+10h]
cmp     eax, ecx
jge     short loc_44EB02
dec     ecx
cmp     eax, ecx
mov     [esi+10h], ecx
jge     short loc_44EB02

loc_44EAF0:                             ; CODE XREF: BuildingClass__OnObjectExpired+210↓j
mov     ecx, [esi+4]
inc     eax
mov     edx, [ecx+eax*4]
mov     [ecx+eax*4-4], edx
mov     ecx, [esi+10h]
cmp     eax, ecx
jl      short loc_44EAF0

loc_44EB02:                             ; CODE XREF: BuildingClass__OnObjectExpired+1D0↑j
; BuildingClass__OnObjectExpired+1EF↑j ...
pop     esi
pop     ebp
pop     ebx
retn    8
*/
}

// IDA 0x4a5290: update timer with elapsed seconds
// 0x4a5290
void BuildingClass::UpdateTimerWithElapsed()
{
// [IDA decompile]
char __thiscall sub_4A5290(int this)
{
  char result; // al
  int v2; // eax
  int v3; // esi

  result = *(_BYTE *)(this + 24);
  if ( result )
  {
    v2 = *(_DWORD *)(this + 16);
    v3 = *(_DWORD *)(this + 8);
    if ( v3 != -1 )
    {
      if ( (int)MEMORY[0xA8ED84] - v3 >= v2 )
        v2 = 0;
      else
        v2 -= (int)MEMORY[0xA8ED84] - v3;
    }
    *(_DWORD *)(this + 16) = *(_DWORD *)(this + 20) - v2;
    result = *(_BYTE *)(this + 25) == 0;
    *(_BYTE *)(this + 25) = result;
  }
  return result;
}

/* ASM:
mov     al, [ecx+18h]
test    al, al
jz      short locret_4A52C9
mov     eax, [ecx+10h]
push    esi
mov     esi, [ecx+8]
cmp     esi, 0FFFFFFFFh
jz      short loc_4A52B5
mov     edx, dword_A8ED54+30h
sub     edx, esi
cmp     edx, eax
jge     short loc_4A52B3
sub     eax, edx
jmp     short loc_4A52B5
; ---------------------------------------------------------------------------

loc_4A52B3:                             ; CODE XREF: BuildingClass__UpdateTimerWithElapsed+1D↑j
xor     eax, eax

loc_4A52B5:                             ; CODE XREF: BuildingClass__UpdateTimerWithElapsed+11↑j
; BuildingClass__UpdateTimerWithElapsed+21↑j
mov     edx, [ecx+14h]
pop     esi
sub     edx, eax
mov     [ecx+10h], edx
mov     al, [ecx+19h]
test    al, al
setz    al
mov     [ecx+19h], al

locret_4A52C9:                          ; CODE XREF: BuildingClass__UpdateTimerWithElapsed+5↑j
retn
*/
}

// IDA 0x458db0: check if has active parameter
// 0x458db0
bool BuildingClass::HasActiveParam()
{
    if (BuildingClass_field_bool_6E9)
        return true;
    return TechnoClass::HasActiveParam();
}

// IDA 0x455da0: check special update flags
// 0x455da0
void BuildingClass::CheckSpecialUpdateFlags()
{
// [IDA decompile]
int __thiscall BuildingClass::_vt161(#377 *this)
{
  int result; // eax
  int v2; // ecx

  result = *((_DWORD *)this + 328);
  v2 = *(_DWORD *)(result + 3768);
  LOBYTE(result) = v2 == 40 || v2 == 16 || *(_BYTE *)(result + 5804) || *(_BYTE *)(result + 5801);
  return result;
}

/* ASM:
mov     eax, [ecx+520h]
mov     ecx, [eax+0EB8h]
cmp     ecx, 28h ; '('
jz      short loc_455DCD
cmp     ecx, 10h
jz      short loc_455DCD
mov     cl, [eax+16ACh]
test    cl, cl
jnz     short loc_455DCD
mov     cl, [eax+16A9h]
test    cl, cl
jnz     short loc_455DCD
xor     al, al
retn
; ---------------------------------------------------------------------------

loc_455DCD:                             ; CODE XREF: BuildingClass__CheckSpecialUpdateFlags+F↑j
; BuildingClass__CheckSpecialUpdateFlags+14↑j ...
mov     al, 1
retn
*/
}

// ============================================================
// Section 14: Rendering
// ============================================================

// IDA 0x480110: calculate draw position
// 0x480110
Point2D* BuildingClass::CalcDrawPos(Point2D* out) const
{
    if (!out) return out;
    if (!Type) {
        out->X = 30; out->Y = 15;
        return out;
    }
    // Calculate from location using isometric projection
    out->X = (location.X - location.Y) >> 8;
    out->Y = ((location.X + location.Y) >> 9) - (location.Z >> 8);
    return out;
}

void BuildingClass::Draw(Point2D* a, RectangleStruct* b) const { (void)a; (void)b; }
void BuildingClass::DrawVisible(Point2D* a, RectangleStruct* b) const { Draw(a, b); }
void BuildingClass::Draw_0(Point2D* a, RectangleStruct* b) const { Draw(a, b); }
void BuildingClass::DrawSelectionBox(Point2D*, RectangleStruct*) const {}
void BuildingClass::DrawSelectionBlip(Point2D*) const {}
void BuildingClass::DrawActionLines(Point2D*, RectangleStruct*) const {}
void BuildingClass::DrawDeployCircle(Point2D*) const {}
void BuildingClass::DrawFoundationChar(int, int, wchar_t) const {}
void BuildingClass::DrawFoundationChar2(int x, int y, wchar_t c) const { DrawFoundationChar(x, y, c); }
void BuildingClass::DrawHealthBar(Point2D*, RectangleStruct*) const {}
int BuildingClass::GetDrawColor() const { return 0; }
int BuildingClass::GetSHPFrame() const { return 0; }
int BuildingClass::DetermineVisualState() const { return 0; }
void BuildingClass::AddRectToDrawList(RectangleStruct*) const {}

// IDA 0x43e900: get Z draw offset
// 0x43e900
int BuildingClass::GetZDrawOffset() const
{
// [IDA decompile]
int __thiscall BuildingClass::GetZDrawOffset(#377 *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi

  v2 = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 464))(this);
  v3 = ZCoordToScreenY(v2);
  v4 = *((_DWORD *)this + 328);
  if ( *(_BYTE *)(v4 + 5829) )
    return *(_DWORD *)(v4 + 4584) - v3;
  else
    return -v3;
}

/* ASM:
push    esi
mov     esi, ecx
mov     eax, [esi]
call    dword ptr [eax+1D0h]
mov     ecx, eax
call    ZCoordToScreenY
mov     esi, [esi+520h]
mov     ecx, eax
neg     ecx
mov     al, [esi+16C5h]
test    al, al
jz      short loc_43E930
mov     eax, [esi+11E8h]
pop     esi
add     eax, ecx
retn
; ---------------------------------------------------------------------------

loc_43E930:                             ; CODE XREF: BuildingClass__GetZDrawOffset+24↑j
mov     eax, ecx
pop     esi
retn
*/
}

// IDA 0x449410: get bounding size extension
// 0x449410
int BuildingClass::GetBoundingSizeExt() const
{
// [IDA decompile]
int __thiscall BuildingClass::GetBoundingSizeExt(#377 *this)
{
  return (*(_BYTE *)(*((_DWORD *)this + 328) + 5829) != 0 ? 0x20 : 0)
       - (*(_BYTE *)(*((_DWORD *)this + 328) + 5815) != 0 ? 0x10 : 0)
       + ObjectClass::GetBoundingSize(this);
}

/* ASM:
push    esi
mov     esi, ecx
call    ObjectClass__GetBoundingSize
mov     esi, [esi+520h]
mov     cl, [esi+16C5h]
mov     dl, [esi+16B7h]
neg     cl
sbb     ecx, ecx
pop     esi
and     ecx, 20h
neg     dl
sbb     edx, edx
and     edx, 10h
sub     ecx, edx
add     eax, ecx
retn
*/
}

// ============================================================
// Section 15: Health / Stats
// ============================================================

double BuildingClass::GetHealthRatio() const
{
    if (!Type || Type->Strength <= 0) return 0.0;
    return (double)(health) / (double)(Type->Strength);
}

// IDA 0x5f5cd0: check health below 50%
// 0X005f5cd0
bool BuildingClass::IsHealthLow() { return GetHealthRatio() < 0.5; }

// ============================================================
// Section 16: Misc Getters/Setters
// ============================================================

// IDA 0x5f6500: squared distance to target
// 0x5f6500
int BuildingClass::SquaredDistanceTo(CoordStruct* target) const
{
    if (!target) return 0;
    int dx = target->X - location.X;
    int dy = target->Y - location.Y;
    return dx * dx + dy * dy;
}

// IDA 0x5f5e80: save/load registration
void BuildingClass::SaveLoad_Register()
{
    // Register building save/load callbacks
}

// IDA 0x634310: copy type data for rendering
// 0x634310
void BuildingClass::CopyTypeDataForRender()
{
// [IDA decompile]
int __thiscall sub_634310(int *this, int a2, int a3)
{
  int v3; // edx
  int v4; // eax
  _DWORD **v5; // esi
  _DWORD **v6; // ecx
  _DWORD *v7; // eax
  _BYTE *v8; // esi

  v3 = *(this + 4);
  v4 = 0;
  if ( v3 <= 0 )
    goto LABEL_7;
  v5 = (_DWORD **)*(this + 1);
  v6 = v5;
  while ( **v6 != a3 )
  {
    ++v4;
    ++v6;
    if ( v4 >= v3 )
    {
      v7 = 0;
      goto LABEL_9;
    }
  }
  if ( v4 == -1 )
LABEL_7:
    v7 = 0;
  else
    v7 = v5[v4];
LABEL_9:
  v8 = (_BYTE *)v7[1];
  qmemcpy((void *)a2, v8, 0x6Cu);
  v8 += 108;
  *(_WORD *)(a2 + 108) = *(_WORD *)v8;
  *(_BYTE *)(a2 + 110) = v8[2];
  return a2;
}

/* ASM:
mov     edx, [ecx+10h]
push    ebx
xor     eax, eax
push    esi
push    edi
test    edx, edx
jle     short loc_63433C
mov     esi, [ecx+4]
mov     edi, [esp+0Ch+arg_4]
mov     ecx, esi

loc_634325:                             ; CODE XREF: BuildingClass__CopyTypeDataForRender+21↓j
mov     ebx, [ecx]
cmp     [ebx], edi
jz      short loc_634337
inc     eax
add     ecx, 4
cmp     eax, edx
jl      short loc_634325
xor     eax, eax
jmp     short loc_634343
; ---------------------------------------------------------------------------

loc_634337:                             ; CODE XREF: BuildingClass__CopyTypeDataForRender+19↑j
cmp     eax, 0FFFFFFFFh
jnz     short loc_634340

loc_63433C:                             ; CODE XREF: BuildingClass__CopyTypeDataForRender+A↑j
xor     eax, eax
jmp     short loc_634343
; ---------------------------------------------------------------------------

loc_634340:                             ; CODE XREF: BuildingClass__CopyTypeDataForRender+2A↑j
mov     eax, [esi+eax*4]

loc_634343:                             ; CODE XREF: BuildingClass__CopyTypeDataForRender+25↑j
; BuildingClass__CopyTypeDataForRender+2E↑j
mov     esi, [eax+4]
mov     eax, [esp+0Ch+arg_0]
mov     ecx, 1Bh
mov     edi, eax
rep movsd
movsw
movsb
pop     edi
pop     esi
pop     ebx
retn    8
*/
}

// IDA 0x705d20: get type pointer (duplicate of GetTypePtr at different address)
// 0x705d20
BuildingTypeClass* BuildingClass::GetType() {
// [IDA decompile]
int __thiscall BuildingClass_GetType(_DWORD *this)
{
  return *(this + 325);
}

/* ASM:
mov     eax, [ecx+514h]
retn
*/
}

// IDA 0x705d10: set type
// 0x705d10
void BuildingClass::SetType(BuildingTypeClass* t) {
// [IDA decompile]
int __thiscall BuildingClass_SetType(_DWORD *this, int a2)
{
  *(this + 325) = a2;
  return a2;
}

/* ASM:
mov     eax, [esp+arg_0]
mov     [ecx+514h], eax
retn    4
*/
}

// IDA 0x459ee0: get type pointer
// 0x459ee0
BuildingTypeClass* BuildingClass::GetTypePtr() { return Type; }

BuildingTypeClass* BuildingClass::GetType_Thunk() { return Type; }

// IDA 0x449a40: get owner house via vtable
// 0x449a40
HouseClass* BuildingClass::GetOwnerHouse()
{
// [IDA decompile]
int __thiscall BuildingClass::GetOwnerHouse(#377 *this)
{
  return (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 540))(this);
}

/* ASM:
mov     eax, [ecx]
jmp     dword ptr [eax+21Ch]
*/
}

// IDA 0x6347b0: get type entry index
// 0x6347b0
int BuildingClass::GetTypeEntry()
{
// [IDA decompile]
int __thiscall sub_6347B0(int *this, int a2)
{
  int v2; // esi
  int v3; // eax
  _DWORD **v4; // edx
  int v5; // eax
  int v6; // edx
  int result; // eax

  v2 = *(this + 4);
  v3 = 0;
  if ( v2 <= 0 )
    goto LABEL_7;
  v4 = (_DWORD **)*(this + 1);
  while ( **v4 != a2 )
  {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    {
      v5 = 0;
      goto LABEL_9;
    }
  }
  if ( v3 == -1 )
LABEL_7:
    v5 = 0;
  else
    v5 = *(_DWORD *)(*(this + 1) + 4 * v3);
LABEL_9:
  v6 = *(_DWORD *)(v5 + 8);
  result = 0;
  if ( v6 != -1 )
    return *(_DWORD *)(*(this + 9) + 4 * v6);
  return result;
}

/* ASM:
push    ebx
push    ebp
push    esi
mov     esi, [ecx+10h]
xor     eax, eax
push    edi
test    esi, esi
jle     short loc_6347DE
mov     edi, [ecx+4]
mov     ebx, [esp+10h+arg_0]
mov     edx, edi

loc_6347C6:                             ; CODE XREF: BuildingClass__GetTypeEntry+23↓j
mov     ebp, [edx]
cmp     [ebp+0], ebx
jz      short loc_6347D9
inc     eax
add     edx, 4
cmp     eax, esi
jl      short loc_6347C6
xor     eax, eax
jmp     short loc_6347E5
; ---------------------------------------------------------------------------

loc_6347D9:                             ; CODE XREF: BuildingClass__GetTypeEntry+1B↑j
cmp     eax, 0FFFFFFFFh
jnz     short loc_6347E2

loc_6347DE:                             ; CODE XREF: BuildingClass__GetTypeEntry+B↑j
xor     eax, eax
jmp     short loc_6347E5
; ---------------------------------------------------------------------------

loc_6347E2:                             ; CODE XREF: BuildingClass__GetTypeEntry+2C↑j
mov     eax, [edi+eax*4]

loc_6347E5:                             ; CODE XREF: BuildingClass__GetTypeEntry+27↑j
; BuildingClass__GetTypeEntry+30↑j
mov     edx, [eax+8]
pop     edi
xor     eax, eax
pop     esi
pop     ebp
cmp     edx, 0FFFFFFFFh
pop     ebx
jz      short locret_6347F9
mov     eax, [ecx+24h]
mov     eax, [eax+edx*4]

locret_6347F9:                          ; CODE XREF: BuildingClass__GetTypeEntry+41↑j
retn    4
*/
}

// IDA 0x459ed0: get type field at offset 60
// 0x459ed0
int BuildingClass::GetTypeField60()
{
// [IDA decompile]
int __thiscall BuildingClass::GetTypeField60(#377 *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 328) + 96);
}

/* ASM:
mov     eax, [ecx+520h]
mov     eax, [eax+60h]
retn
*/
}

int BuildingClass::GetObjectData() { return 0; }

// IDA 0x455b90: get foundation width/height flags
// 0x455b90
int BuildingClass::GetFWFlags()
{
// [IDA decompile]
int __thiscall BuildingClass::GetFWFlags(_DWORD *this)
{
  _DWORD *v1; // ecx
  int v2; // ebx
  _DWORD *v3; // edi
  signed int i; // esi
  _DWORD *NeighbourContent; // eax
  _DWORD *v6; // eax
  _DWORD v8[3]; // [esp+Ch] [ebp-Ch] BYREF

  v1 = this + 39;
  v2 = 0;
  v8[0] = *v1;
  v8[1] = v1[1];
  v8[2] = v1[2];
  v3 = Coord::To_Cell(&MEMORY[0x87F7E8], v8);
  for ( i = 0; i < 8; i += 2 )
  {
    NeighbourContent = Cell::GetNeighbourContent(v3, i);
    v6 = Cell::IsBridge(NeighbourContent);
    if ( v6 && *(_BYTE *)(v6[328] + 5824) && !*((_BYTE *)v6 + 129) && *((_BYTE *)v6 + 144) )
      v2 |= 1 << (i >> 1);
  }
  return v2;
}

/* ASM:
sub     esp, 0Ch
add     ecx, 9Ch
push    ebx
push    esi
push    edi
mov     eax, [ecx]
xor     ebx, ebx
mov     [esp+18h+var_C], eax
mov     edx, [ecx+4]
mov     [esp+18h+var_8], edx
mov     eax, [ecx+8]
lea     ecx, [esp+18h+var_C]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+1Ch+var_4], eax
call    Coord__To_Cell
mov     edi, eax
xor     esi, esi

loc_455BC5:                             ; CODE XREF: BuildingClass__GetFWFlags+7F↓j
push    esi
mov     ecx, edi
call    Cell__GetNeighbourContent
mov     ecx, eax
call    Cell__IsBridge
test    eax, eax
jz      short loc_455C09
mov     edx, [eax+520h]
mov     cl, [edx+16C0h]
test    cl, cl
jz      short loc_455C09
mov     cl, [eax+81h]
test    cl, cl
jnz     short loc_455C09
mov     cl, [eax+90h]
test    cl, cl
jz      short loc_455C09
mov     ecx, esi
mov     eax, 1
sar     ecx, 1
shl     eax, cl
or      ebx, eax

loc_455C09:                             ; CODE XREF: BuildingClass__GetFWFlags+46↑j
; BuildingClass__GetFWFlags+56↑j ...
add     esi, 2
cmp     esi, 8
jl      short loc_455BC5
pop     edi
mov     eax, ebx
pop     esi
pop     ebx
add     esp, 0Ch
retn
*/
}

void BuildingClass::FlushScriptActions() {}
BuildingClass* BuildingClass::FindByCellHash(uint32_t) { return nullptr; }
void BuildingClass::LoadBuildingTypes() {}
void BuildingClass::ReadBuildingSettings() {}
void BuildingClass::ReadConstructionData() {}

// IDA 0x4527d0: check if has occupant audio
// 0x4527d0
bool BuildingClass::HasOccupantAudio()
{
// [IDA decompile]
int __thiscall BuildingClass::HasOccupantAudio(#377 *this)
{
  int result; // eax
  char v2; // al
  int v3; // esi
  int v4; // edx
  int *v5; // ecx

  result = *((_DWORD *)this + 328);
  if ( *(_BYTE *)(result + 3233) )
  {
LABEL_2:
    LOBYTE(result) = 1;
    return result;
  }
  v2 = *((_BYTE *)this + 1794);
  if ( v2 )
  {
    v3 = v2;
    v4 = 0;
    if ( v2 > 0 )
    {
      v5 = (int *)((char *)this + 1516);
      do
      {
        result = *v5;
        if ( *v5 )
        {
          if ( *(_BYTE *)(result + 3233) )
            goto LABEL_2;
        }
        ++v4;
        ++v5;
      }
      while ( v4 < v3 );
    }
  }
  LOBYTE(result) = 0;
  return result;
}

/* ASM:
mov     eax, [ecx+520h]
push    ebx
push    esi
mov     dl, [eax+0CA1h]
test    dl, dl
jz      short loc_4527E7

loc_4527E2:                             ; CODE XREF: BuildingClass__HasOccupantAudio+3E↓j
pop     esi
mov     al, 1
pop     ebx
retn
; ---------------------------------------------------------------------------

loc_4527E7:                             ; CODE XREF: BuildingClass__HasOccupantAudio+10↑j
mov     al, [ecx+702h]
test    al, al
jz      short loc_452818
movsx   esi, al
xor     edx, edx
test    esi, esi
jle     short loc_452818
add     ecx, 5ECh

loc_452800:                             ; CODE XREF: BuildingClass__HasOccupantAudio+46↓j
mov     eax, [ecx]
test    eax, eax
jz      short loc_452810
mov     bl, [eax+0CA1h]
test    bl, bl
jnz     short loc_4527E2

loc_452810:                             ; CODE XREF: BuildingClass__HasOccupantAudio+34↑j
inc     edx
add     ecx, 4
cmp     edx, esi
jl      short loc_452800

loc_452818:                             ; CODE XREF: BuildingClass__HasOccupantAudio+1F↑j
; BuildingClass__HasOccupantAudio+28↑j
pop     esi
xor     al, al
pop     ebx
retn
*/
}

int BuildingClass::SelectVocOrSfx() { return 0; }
void BuildingClass::UnloadUnits() {}
void BuildingClass::AnimateUnloadUnits() {}
void BuildingClass::SpawnParticles() {}
void BuildingClass::ApplyFoundationDamage() {}

// IDA 0x4ff980: decrement type counter
// 0x4ff980
void BuildingClass::DecrementTypeCounter()
{
// [IDA decompile]
_DWORD *__thiscall sub_4FF980(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v4; // eax
  bool v5; // cl

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2);
  if ( result == (_DWORD *)6 )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*a2 + 132))(a2);
    v5 = v4 && *(_BYTE *)(v4 + 3278);
    result = (_DWORD *)(*(_DWORD *)(a2[328] + 3768) - 1);
    switch ( *(_DWORD *)(a2[328] + 3768) )
    {
      case 1:
      case 0x28:
        if ( v5 )
          result = this + 5346;
        else
          result = this + 5344;
        goto LABEL_13;
      case 2:
      case 3:
        result = this + 5342;
        goto LABEL_13;
      case 6:
      case 7:
        result = this + 5345;
        goto LABEL_13;
      case 0xF:
      case 0x10:
        result = this + 5343;
LABEL_13:
        if ( result )
          --*result;
        break;
      default:
        return result;
    }
  }
  return result;
}

/* ASM:
push    esi
mov     esi, [esp+4+arg_0]
push    edi
mov     edi, ecx
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     short def_4FF9CF ; jumptable 004FF9CF default case, cases 4,5,8-14,17-39
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
test    eax, eax
jz      short loc_4FF9B3
mov     cl, [eax+0CCEh]
test    cl, cl
jz      short loc_4FF9B3
mov     ecx, 1
jmp     short loc_4FF9B5
; ---------------------------------------------------------------------------

loc_4FF9B3:                             ; CODE XREF: BuildingClass__DecrementTypeCounter+20↑j
; BuildingClass__DecrementTypeCounter+2A↑j
xor     ecx, ecx

loc_4FF9B5:                             ; CODE XREF: BuildingClass__DecrementTypeCounter+31↑j
mov     eax, [esi+520h]
mov     eax, [eax+0EB8h]
dec     eax             ; switch 40 cases
cmp     eax, 27h
ja      short def_4FF9CF ; jumptable 004FF9CF default case, cases 4,5,8-14,17-39
xor     edx, edx
mov     dl, ds:byte_4FFA20[eax]
jmp     ds:jpt_4FF9CF[edx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_4FF9D6:                             ; CODE XREF: BuildingClass__DecrementTypeCounter+4F↑j
; DATA XREF: .text:jpt_4FF9CF↓o
test    cl, cl          ; jumptable 004FF9CF cases 1,40
jz      short loc_4FF9E2
lea     eax, [edi+5388h]
jmp     short loc_4FFA00
; ---------------------------------------------------------------------------

loc_4FF9E2:                             ; CODE XREF: BuildingClass__DecrementTypeCounter+58↑j
lea     eax, [edi+5380h]
jmp     short loc_4FFA00
; ---------------------------------------------------------------------------

loc_4FF9EA:                             ; CODE XREF: BuildingClass__DecrementTypeCounter+4F↑j
; DATA XREF: .text:jpt_4FF9CF↓o
lea     eax, [edi+5378h] ; jumptable 004FF9CF cases 2,3
jmp     short loc_4FFA00
; ---------------------------------------------------------------------------

loc_4FF9F2:                             ; CODE XREF: BuildingClass__DecrementTypeCounter+4F↑j
; DATA XREF: .text:jpt_4FF9CF↓o
lea     eax, [edi+537Ch] ; jumptable 004FF9CF cases 15,16
jmp     short loc_4FFA00
; ---------------------------------------------------------------------------

loc_4FF9FA:                             ; CODE XREF: BuildingClass__DecrementTypeCounter+4F↑j
; DATA XREF: .text:jpt_4FF9CF↓o
lea     eax, [edi+5384h] ; jumptable 004FF9CF cases 6,7

loc_4FFA00:                             ; CODE XREF: BuildingClass__DecrementTypeCounter+60↑j
; BuildingClass__DecrementTypeCounter+68↑j ...
test    eax, eax
jz      short def_4FF9CF ; jumptable 004FF9CF default case, cases 4,5,8-14,17-39
dec     dword ptr [eax]

def_4FF9CF:                             ; CODE XREF: BuildingClass__DecrementTypeCounter+12↑j
; BuildingClass__DecrementTypeCounter+45↑j ...
pop     edi             ; jumptable 004FF9CF default case, cases 4,5,8-14,17-39
pop     esi
retn    4
*/
}

// IDA 0x4ffa50: increment occupant type counter
// 0x4ffa50
void BuildingClass::IncrementOccupantTypeCounter()
{
// [IDA decompile]
_DWORD *__thiscall sub_4FFA50(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v4; // eax
  bool v5; // cl

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2);
  if ( result == (_DWORD *)6 )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*a2 + 132))(a2);
    v5 = v4 && *(_BYTE *)(v4 + 3278);
    result = (_DWORD *)(*(_DWORD *)(a2[328] + 3768) - 1);
    switch ( *(_DWORD *)(a2[328] + 3768) )
    {
      case 1:
      case 0x28:
        if ( v5 )
          result = this + 5346;
        else
          result = this + 5344;
        goto LABEL_13;
      case 2:
      case 3:
        result = this + 5342;
        goto LABEL_13;
      case 6:
      case 7:
        result = this + 5345;
        goto LABEL_13;
      case 0xF:
      case 0x10:
        result = this + 5343;
LABEL_13:
        if ( result )
          ++*result;
        break;
      default:
        return result;
    }
  }
  return result;
}

/* ASM:
push    esi
mov     esi, [esp+4+arg_0]
push    edi
mov     edi, ecx
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     short def_4FFA9F ; jumptable 004FFA9F default case, cases 4,5,8-14,17-39
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
test    eax, eax
jz      short loc_4FFA83
mov     cl, [eax+0CCEh]
test    cl, cl
jz      short loc_4FFA83
mov     ecx, 1
jmp     short loc_4FFA85
; ---------------------------------------------------------------------------

loc_4FFA83:                             ; CODE XREF: BuildingClass__IncrementOccupantTypeCounter+20↑j
; BuildingClass__IncrementOccupantTypeCounter+2A↑j
xor     ecx, ecx

loc_4FFA85:                             ; CODE XREF: BuildingClass__IncrementOccupantTypeCounter+31↑j
mov     eax, [esi+520h]
mov     eax, [eax+0EB8h]
dec     eax             ; switch 40 cases
cmp     eax, 27h
ja      short def_4FFA9F ; jumptable 004FFA9F default case, cases 4,5,8-14,17-39
xor     edx, edx
mov     dl, ds:byte_4FFAF0[eax]
jmp     ds:jpt_4FFA9F[edx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_4FFAA6:                             ; CODE XREF: BuildingClass__IncrementOccupantTypeCounter+4F↑j
; DATA XREF: .text:jpt_4FFA9F↓o
test    cl, cl          ; jumptable 004FFA9F cases 1,40
jz      short loc_4FFAB2
lea     eax, [edi+5388h]
jmp     short loc_4FFAD0
; ---------------------------------------------------------------------------

loc_4FFAB2:                             ; CODE XREF: BuildingClass__IncrementOccupantTypeCounter+58↑j
lea     eax, [edi+5380h]
jmp     short loc_4FFAD0
; ---------------------------------------------------------------------------

loc_4FFABA:                             ; CODE XREF: BuildingClass__IncrementOccupantTypeCounter+4F↑j
; DATA XREF: .text:jpt_4FFA9F↓o
lea     eax, [edi+5378h] ; jumptable 004FFA9F cases 2,3
jmp     short loc_4FFAD0
; ---------------------------------------------------------------------------

loc_4FFAC2:                             ; CODE XREF: BuildingClass__IncrementOccupantTypeCounter+4F↑j
; DATA XREF: .text:jpt_4FFA9F↓o
lea     eax, [edi+537Ch] ; jumptable 004FFA9F cases 15,16
jmp     short loc_4FFAD0
; ---------------------------------------------------------------------------

loc_4FFACA:                             ; CODE XREF: BuildingClass__IncrementOccupantTypeCounter+4F↑j
; DATA XREF: .text:jpt_4FFA9F↓o
lea     eax, [edi+5384h] ; jumptable 004FFA9F cases 6,7

loc_4FFAD0:                             ; CODE XREF: BuildingClass__IncrementOccupantTypeCounter+60↑j
; BuildingClass__IncrementOccupantTypeCounter+68↑j ...
test    eax, eax
jz      short def_4FFA9F ; jumptable 004FFA9F default case, cases 4,5,8-14,17-39
inc     dword ptr [eax]

def_4FFA9F:                             ; CODE XREF: BuildingClass__IncrementOccupantTypeCounter+12↑j
; BuildingClass__IncrementOccupantTypeCounter+45↑j ...
pop     edi             ; jumptable 004FFA9F default case, cases 4,5,8-14,17-39
pop     esi
retn    4
*/
}

// IDA 0x459c00: check if mass selectable
// 0x459c00
bool BuildingClass::IsMassSelectable()
{
// [IDA decompile]
int __thiscall BuildingClass::IsMassSelectable(#377 *this)
{
  int result; // eax

  result = BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable(*((_DWORD *)this + 328));
  if ( (_BYTE)result )
    LOBYTE(result) = TechnoClass::CanMoveToCell(this);
  return result;
}

/* ASM:
push    esi
mov     esi, ecx
mov     ecx, [esi+520h]
call    BuildingClass__Is1x1AndUndeployable_BuildingMassSelectable
test    al, al
jnz     short loc_459C14
pop     esi
retn
; ---------------------------------------------------------------------------

loc_459C14:                             ; CODE XREF: BuildingClass__IsMassSelectable+10↑j
mov     ecx, esi
call    TechnoClass__CanMoveToCell
pop     esi
retn
*/
}

// IDA 0x6551c0: add upgrade to building
// 0x6551c0
void BuildingClass::AddUpgrade(BuildingTypeClass* upgrade)
{
// [IDA decompile]
char __thiscall BuildingClass_AddUpgrade(int this, int a2)
{
  int v3; // eax
  _WORD *v4; // ecx
  int v5; // ecx
  int v6; // edx

  v3 = *(_DWORD *)(this + 4660) - 1;
  if ( v3 < 0 )
  {
LABEL_6:
    v5 = *(_DWORD *)(this + 4652);
    if ( *(_DWORD *)(this + 4660) < v5
      || ((LOBYTE(v3) = *(_BYTE *)(this + 4657), (_BYTE)v3) || !v5)
      && (v3 = *(_DWORD *)(this + 4664), v3 > 0)
      && (LOBYTE(v3) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 4644) + 8))(this + 4644, v5 + v3, 0),
          (_BYTE)v3) )
    {
      v3 = *(_DWORD *)(this + 4660);
      v6 = *(_DWORD *)(this + 4648);
      *(_DWORD *)(this + 4660) = v3 + 1;
      *(_DWORD *)(v6 + 4 * v3) = *(_DWORD *)a2;
    }
    *(_BYTE *)(this + 5337) = 1;
  }
  else
  {
    v4 = (_WORD *)(*(_DWORD *)(this + 4648) + 4 * v3);
    while ( *v4 != *(_WORD *)a2 || v4[1] != *(_WORD *)(a2 + 2) )
    {
      --v3;
      v4 -= 2;
      if ( v3 < 0 )
        goto LABEL_6;
    }
  }
  return v3;
}

/* ASM:
push    ebx
push    esi
mov     ebx, [esp+8+arg_0]
push    edi
mov     edi, ecx
mov     eax, [edi+1234h]
dec     eax
js      short loc_6551F5
mov     ecx, [edi+1228h]
mov     dx, [ebx]
lea     ecx, [ecx+eax*4]

loc_6551DE:                             ; CODE XREF: BuildingClass__AddUpgrade+33↓j
cmp     [ecx], dx
jnz     short loc_6551ED
mov     si, [ecx+2]
cmp     si, [ebx+2]
jz      short loc_655245

loc_6551ED:                             ; CODE XREF: BuildingClass__AddUpgrade+21↑j
dec     eax
sub     ecx, 4
test    eax, eax
jge     short loc_6551DE

loc_6551F5:                             ; CODE XREF: BuildingClass__AddUpgrade+10↑j
mov     ecx, [edi+122Ch]
mov     eax, [edi+1234h]
lea     esi, [edi+1224h]
cmp     eax, ecx
jl      short loc_65522D
mov     al, [esi+0Dh]
test    al, al
jnz     short loc_655216
test    ecx, ecx
jnz     short loc_65523E

loc_655216:                             ; CODE XREF: BuildingClass__AddUpgrade+50↑j
mov     eax, [esi+14h]
test    eax, eax
jle     short loc_65523E
mov     edx, [esi]
add     eax, ecx
push    0
push    eax
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_65523E

loc_65522D:                             ; CODE XREF: BuildingClass__AddUpgrade+49↑j
mov     eax, [esi+10h]
mov     edx, [esi+4]
lea     ecx, [eax+1]
mov     [esi+10h], ecx
mov     ecx, [ebx]
mov     [edx+eax*4], ecx

loc_65523E:                             ; CODE XREF: BuildingClass__AddUpgrade+54↑j
; BuildingClass__AddUpgrade+5B↑j ...
mov     byte ptr [edi+14D9h], 1

loc_655245:                             ; CODE XREF: BuildingClass__AddUpgrade+2B↑j
pop     edi
pop     esi
pop     ebx
retn    4
*/
}

// IDA 0x726400: process upgrade effects
// 0x726400
void BuildingClass::ProcessUpgradeEffects()
{
// [IDA decompile]
int __thiscall BuildingClass_ProcessUpgradeEffects(int *this)
{
  char v2; // bp
  int result; // eax
  _DWORD *i; // edi
  int v5; // eax
  int v6; // eax
  int v7; // kr00_4
  int v8; // [esp+10h] [ebp-8h]

  v2 = 0;
  result = *(this + 9);
  for ( i = *(_DWORD **)(result + 172); i; ++v2 )
  {
    if ( i[11] == 13 )
    {
      v5 = 3 * i[13];
      *(this + 13) = (int)MEMORY[0xA8ED84];
      *(this + 14) = v8;
      *(this + 15) = 5 * v5;
      result = ~(1 << v2) & *(this + 16);
      *(this + 16) = result;
    }
    if ( i[11] == 51 )
    {
      v6 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, i[13]);
      v7 = i[13];
      *(this + 13) = (int)MEMORY[0xA8ED84];
      *(this + 14) = v8;
      *(this + 15) = 15 * (v6 + v7 / 2);
      result = ~(1 << v2);
      *(this + 16) &= result;
    }
    i = (_DWORD *)i[10];
  }
  return result;
}

/* ASM:
sub     esp, 0Ch
push    ebp
push    esi
mov     esi, ecx
push    edi
xor     ebp, ebp
mov     eax, [esi+24h]
mov     edi, [eax+0ACh]
test    edi, edi
jz      loc_7264B7
push    ebx

loc_72641C:                             ; CODE XREF: BuildingClass__ProcessUpgradeEffects+B0↓j
cmp     dword ptr [edi+2Ch], 0Dh
jnz     short loc_726453
mov     ecx, dword_A8ED54+30h
mov     eax, [edi+34h]
lea     edx, [esi+34h]
lea     eax, [eax+eax*2]
mov     [edx], ecx
mov     ecx, [esp+1Ch+var_8]
lea     eax, [eax+eax*4]
mov     [edx+4], ecx
mov     ecx, ebp
mov     [edx+8], eax
mov     eax, [esi+40h]
mov     edx, 1
shl     edx, cl
not     edx
and     eax, edx
mov     [esi+40h], eax

loc_726453:                             ; CODE XREF: BuildingClass__ProcessUpgradeEffects+20↑j
cmp     dword ptr [edi+2Ch], 33h ; '3'
jnz     short loc_7264AA
mov     eax, [edi+34h]
push    eax
mov     eax, ds:0A8B230h
push    0
lea     ecx, [eax+218h]
call    Random__Range
mov     ecx, eax
mov     eax, [edi+34h]
cdq
mov     ebx, dword_A8ED54+30h
sub     eax, edx
mov     edx, [esp+1Ch+var_8]
sar     eax, 1
add     eax, ecx
lea     ecx, [esi+34h]
mov     [esi+34h], ebx
lea     eax, [eax+eax*2]
mov     [ecx+4], edx
lea     eax, [eax+eax*4]
mov     [ecx+8], eax
mov     eax, 1
mov     ecx, ebp
shl     eax, cl
mov     ecx, [esi+40h]
not     eax
and     ecx, eax
mov     [esi+40h], ecx

loc_7264AA:                             ; CODE XREF: BuildingClass__ProcessUpgradeEffects+57↑j
mov     edi, [edi+28h]
inc     ebp
test    edi, edi
jnz     loc_72641C
pop     ebx

loc_7264B7:                             ; CODE XREF: BuildingClass__ProcessUpgradeEffects+15↑j
pop     edi
pop     esi
pop     ebp
add     esp, 0Ch
retn
*/
}

// IDA 0x7265c0: execute triggers
// 0x7265c0
void BuildingClass::ExecuteTriggers()
{
// [IDA decompile]
char __thiscall BuildingClass_ExecuteTriggers(int this, int a2, char a3)
{
  char v4; // bl
  int i; // esi
  int Owner; // eax

  if ( !*(_BYTE *)(this + 68) || *(_BYTE *)(this + 48) )
    return 0;
  v4 = 0;
  for ( i = *(_DWORD *)(*(_DWORD *)(this + 36) + 176); i; i = *(_DWORD *)(i + 40) )
  {
    Owner = HouseClass::FindOwner(*(void **)(*(_DWORD *)(*(_DWORD *)(this + 36) + 164) + 180));
    if ( TerrainClass::ProcessUpdate(i, this, Owner, a2, (_DWORD *)this, (int)&a3) )
      v4 = 1;
  }
  return v4;
}

/* ASM:
push    edi
mov     edi, ecx
mov     al, [edi+44h]
test    al, al
jz      short loc_726620
mov     al, [edi+30h]
test    al, al
jnz     short loc_726620
mov     eax, [edi+24h]
push    ebx
push    esi
xor     bl, bl
mov     esi, [eax+0B0h]
test    esi, esi
jz      short loc_726618
push    ebp
mov     ebp, [esp+10h+arg_0]

loc_7265E7:                             ; CODE XREF: BuildingClass__ExecuteTriggers+55↓j
mov     edx, [edi+24h]
lea     ecx, [esp+10h+arg_4]
push    ecx
push    edi
mov     eax, [edx+0A4h]
push    ebp
mov     ecx, [eax+0B4h]
call    HouseClass__FindOwner
push    eax
mov     ecx, esi
call    TerrainClass__ProcessUpdate
test    al, al
jz      short loc_726610
mov     bl, 1

loc_726610:                             ; CODE XREF: BuildingClass__ExecuteTriggers+4C↑j
mov     esi, [esi+28h]
test    esi, esi
jnz     short loc_7265E7
pop     ebp

loc_726618:                             ; CODE XREF: BuildingClass__ExecuteTriggers+20↑j
mov     al, bl
pop     esi
pop     ebx
pop     edi
retn    8
; ---------------------------------------------------------------------------

loc_726620:                             ; CODE XREF: BuildingClass__ExecuteTriggers+8↑j
; BuildingClass__ExecuteTriggers+F↑j
xor     al, al
pop     edi
retn    8
*/
}

// IDA 0x459c20: process upgrade targeting
// 0x459c20
void BuildingClass::ProcessUpgradeTargeting()
{
// [IDA decompile]
int __thiscall BuildingClass::_vt219(#377 *this)
{
  int v2; // ecx
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int result; // eax

  v2 = *((_DWORD *)this + 134);
  if ( v2 && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 11 )
  {
    v3 = *((_DWORD *)this + 134);
    v4 = v3 ? ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 44))(*((_DWORD *)this + 134)) == 11 ? v3 : 0) : 0;
    if ( *(_DWORD *)(v4 + 236) == 5 )
    {
      v5 = *((_DWORD *)this + 328);
      if ( *(_BYTE *)(v5 + 1517) )
      {
        if ( *(_BYTE *)(v5 + 1516) )
        {
          v6 = *(_DWORD *)(v5 + 1404);
          if ( v6 != -1 )
            return (*(int (__thiscall **)(#377 *, int))(*(_DWORD *)this + 852))(this, v6);
        }
      }
    }
  }
  TechnoClass::PickAlternateTarget(this);
  return result;
}

/* ASM:
push    edi
mov     edi, ecx
mov     ecx, [edi+218h]
test    ecx, ecx
jz      short loc_459C96
mov     eax, [ecx]
call    dword ptr [eax+2Ch]
cmp     eax, 0Bh
jnz     short loc_459C96
push    esi
mov     esi, [edi+218h]
test    esi, esi
jnz     short loc_459C46
xor     eax, eax
jmp     short loc_459C58
; ---------------------------------------------------------------------------

loc_459C46:                             ; CODE XREF: BuildingClass__ProcessUpgradeTargeting+20↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2Ch]
sub     eax, 0Bh
neg     eax
sbb     eax, eax
not     eax
and     eax, esi

loc_459C58:                             ; CODE XREF: BuildingClass__ProcessUpgradeTargeting+24↑j
mov     ecx, [eax+0ECh]
pop     esi
cmp     ecx, 5
jnz     short loc_459C96
mov     eax, [edi+520h]
mov     cl, [eax+5EDh]
test    cl, cl
jz      short loc_459C96
mov     cl, [eax+5ECh]
test    cl, cl
jz      short loc_459C96
mov     eax, [eax+57Ch]
cmp     eax, 0FFFFFFFFh
jz      short loc_459C96
mov     edx, [edi]
push    eax
mov     ecx, edi
call    dword ptr [edx+354h]
pop     edi
retn
; ---------------------------------------------------------------------------

loc_459C96:                             ; CODE XREF: BuildingClass__ProcessUpgradeTargeting+B↑j
; BuildingClass__ProcessUpgradeTargeting+15↑j ...
mov     ecx, edi
call    TechnoClass__PickAlternateTarget
pop     edi
retn
*/
}

void BuildingClass::ProcessSpreadEffect() {}
void BuildingClass::Unlimbo_UnitDeliveryFix() {}

// IDA 0x452170: set connected building mission
// 0x452170
void BuildingClass::SetConnectedBuildingMission()
{
// [IDA decompile]
int __thiscall BuildingClass_SetConnectedBuildingMission(int *this, int a2)
{
  char v3; // bl
  int *v4; // ecx
  int v5; // esi
  int result; // eax

  v3 = a2;
  if ( a2 == 15 && (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*this + 104))(this, 0, 0) == 5 )
    v3 = 16;
  v4 = this + 343;
  v5 = 21;
  do
  {
    result = *v4;
    if ( *v4 )
      *(_BYTE *)(result + 376) = v3;
    ++v4;
    --v5;
  }
  while ( v5 );
  return result;
}

/* ASM:
mov     eax, [esp+arg_0]
push    ebx
push    esi
cmp     eax, 0Fh
mov     esi, ecx
mov     ebx, eax
jnz     short loc_452192
mov     eax, [esi]
push    0
push    0
call    dword ptr [eax+68h]
cmp     eax, 5
jnz     short loc_452192
mov     ebx, 10h

loc_452192:                             ; CODE XREF: BuildingClass__SetConnectedBuildingMission+D↑j
; BuildingClass__SetConnectedBuildingMission+1B↑j
lea     ecx, [esi+55Ch]
mov     esi, 15h

loc_45219D:                             ; CODE XREF: BuildingClass__SetConnectedBuildingMission+3D↓j
mov     eax, [ecx]
test    eax, eax
jz      short loc_4521A9
mov     [eax+178h], bl

loc_4521A9:                             ; CODE XREF: BuildingClass__SetConnectedBuildingMission+31↑j
add     ecx, 4
dec     esi
jnz     short loc_45219D
pop     esi
pop     ebx
retn    4
*/
}

// IDA 0x4852d0: create destruction crater
// 0x4852d0
void BuildingClass::CreateDestructionCrater()
{
// [IDA decompile]
char __thiscall sub_4852D0(int this)
{
  int v2; // kr04_4
  int v3; // kr00_4
  int v5[2]; // [esp+8h] [ebp-14h] BYREF
  _DWORD v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = (*(__int16 *)(this + 36) << 8) + 128;
  v3 = (*(__int16 *)(this + 38) << 8) + 128;
  v6[2] = 0;
  v6[1] = (v3 / 256) << 8;
  v6[0] = (v2 / 256) << 8;
  Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], v6, v5);
  return Cell::CreateCrater(v5[0] - 30, MEMORY[0x87F7E8][7663] - 15 * *(char *)(this + 283) + v5[1] - 15, 60, 30, 0);
}

/* ASM:
sub     esp, 14h
push    esi
push    edi
mov     edi, ecx
movsx   eax, word ptr [edi+24h]
movsx   ecx, word ptr [edi+26h]
shl     eax, 8
add     eax, 80h
cdq
and     edx, 0FFh
shl     ecx, 8
add     eax, edx
add     ecx, 80h
mov     esi, eax
mov     eax, ecx
cdq
and     edx, 0FFh
xor     ecx, ecx
add     eax, edx
mov     [esp+1Ch+var_4], ecx
sar     eax, 8
shl     eax, 8
mov     [esp+1Ch+var_8], eax
lea     eax, [esp+1Ch+var_14]
sar     esi, 8
lea     ecx, [esp+1Ch+var_C]
push    eax
shl     esi, 8
push    ecx
mov     ecx, ds:887324h
mov     [esp+24h+var_C], esi
call    Coord__To_Screen
movsx   eax, byte ptr [edi+11Bh]
mov     ecx, ds:886FA4h
push    0
lea     eax, [eax+eax*2]
sub     esp, 10h
mov     edi, esp
mov     esi, 1Eh
lea     edx, [eax+eax*4]
mov     eax, [esp+30h+var_10]
sub     ecx, edx
mov     edx, 3Ch ; '<'
add     eax, ecx
mov     ecx, [esp+30h+var_14]
sub     ecx, 1Eh
sub     eax, 0Fh
mov     [edi], ecx
mov     [esp+30h+var_14], ecx
mov     ecx, ds:887324h
mov     [esp+30h+var_10], eax
mov     [edi+4], eax
mov     [edi+8], edx
mov     [edi+0Ch], esi
call    Cell__CreateCrater
pop     edi
pop     esi
add     esp, 14h
retn
*/
}

void BuildingClass::CreatePlacementCrater() {}
void BuildingClass::CreateCraterAtCell(int x, int y) { (void)x; (void)y; }
void BuildingClass::BeginCrumblingTimer() {}

// IDA 0x453d60: mark cell as occupied by building
// 0x453d60
void BuildingClass::MarkCellOccupied(int cell_x, int cell_y)
{
// [IDA decompile]
int __thiscall BuildingClass::MarkCellOccupied(#377 *this)
{
  _DWORD *v1; // ecx
  _DWORD *v2; // eax
  int v3; // ecx
  int result; // eax
  _DWORD *v5; // [esp+4h] [ebp+4h] BYREF

  v1 = v5;
  LOWORD(v5) = *v5 / 256;
  HIWORD(v5) = v1[1] / 256;
  v2 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v5);
  v3 = v2[73];
  result = (int)(v2 + 73);
  LOBYTE(v3) = v3 | 0x80;
  *(_DWORD *)result = v3;
  return result;
}

/* ASM:
mov     ecx, [esp+arg_0]
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+arg_0], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
lea     ecx, [esp+arg_0]
add     eax, edx
push    ecx
sar     eax, 8
mov     word ptr [esp+4+arg_0+2], ax
mov     eax, [esp+4+arg_0]
mov     ecx, 87F7E8h
mov     [esp+4+arg_0], eax
call    CellCoord__To_CellObj
mov     ecx, [eax+124h]
add     eax, 124h
or      cl, 80h
mov     [eax], ecx
retn    4
*/
}

// IDA 0x453dc0: clear cell occupation
// 0x453dc0
void BuildingClass::ClearCellOccupied(int cell_x, int cell_y)
{
// [IDA decompile]
int __thiscall BuildingClass::ClearCellOccupied(#377 *this)
{
  _DWORD *v1; // ecx
  _DWORD *v2; // eax
  int v3; // ecx
  int result; // eax
  _DWORD *v5; // [esp+4h] [ebp+4h] BYREF

  v1 = v5;
  LOWORD(v5) = *v5 / 256;
  HIWORD(v5) = v1[1] / 256;
  v2 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v5);
  v3 = v2[73];
  result = (int)(v2 + 73);
  LOBYTE(v3) = v3 & 0x7F;
  *(_DWORD *)result = v3;
  return result;
}

/* ASM:
mov     ecx, [esp+arg_0]
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+arg_0], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
lea     ecx, [esp+arg_0]
add     eax, edx
push    ecx
sar     eax, 8
mov     word ptr [esp+4+arg_0+2], ax
mov     eax, [esp+4+arg_0]
mov     ecx, 87F7E8h
mov     [esp+4+arg_0], eax
call    CellCoord__To_CellObj
mov     ecx, [eax+124h]
add     eax, 124h
and     cl, 7Fh
mov     [eax], ecx
retn    4
*/
}

void BuildingClass::ScanCircleForTiberium() {}
void BuildingClass::UpdateTerrainEffect() {}

// IDA 0x483620: check if eligible for tiberium collection
// 0x483620
bool BuildingClass::IsTiberiumCollectorEligible() {
// [IDA decompile]
bool __thiscall sub_483620(int this)
{
  int BuildingByTiberiumType; // eax
  int v4; // eax

  if ( !*(_BYTE *)(MEMORY[0x87F7E8][536210] + 13478) )
    return 0;
  BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)(this + 68));
  if ( BuildingByTiberiumType == -1 )
    return 0;
  v4 = *(_DWORD *)(dword_A8ED54[131558] + 4 * BuildingByTiberiumType);
  if ( *(_BYTE *)(this + 284) )
    return 0;
  if ( *(unsigned __int8 *)(this + 286) < *(_DWORD *)(v4 + 228) - 1 )
    return *(double *)(v4 + 176) >= 0.00001;
  return 0;
}

/* ASM:
mov     eax, ds:0A8B230h
push    esi
mov     esi, ecx
mov     cl, [eax+34A6h]
test    cl, cl
jnz     short loc_483636
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_483636:                             ; CODE XREF: BuildingClass__IsTiberiumCollectorEligible+10↑j
mov     ecx, [esi+44h]
call    FindBuildingByTiberiumType
cmp     eax, 0FFFFFFFFh
jnz     short loc_483647
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_483647:                             ; CODE XREF: BuildingClass__IsTiberiumCollectorEligible+21↑j
mov     ecx, dword_A8ED54+80798h
mov     eax, [ecx+eax*4]
mov     cl, [esi+11Ch]
test    cl, cl
jz      short loc_48365E
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_48365E:                             ; CODE XREF: BuildingClass__IsTiberiumCollectorEligible+38↑j
mov     ecx, [eax+0E4h]
xor     edx, edx
mov     dl, [esi+11Eh]
dec     ecx
cmp     edx, ecx
jl      short loc_483675
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_483675:                             ; CODE XREF: BuildingClass__IsTiberiumCollectorEligible+4F↑j
fld     qword ptr [eax+0B0h]
fcomp   ds:dbl_7E3810
fnstsw  ax
test    ah, 1
jz      short loc_48368C
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_48368C:                             ; CODE XREF: BuildingClass__IsTiberiumCollectorEligible+66↑j
mov     al, 1
pop     esi
retn
*/
}

// IDA 0x483690: check if eligible for tiberium storage
// 0x483690
bool BuildingClass::IsTiberiumSiloEligible() {
// [IDA decompile]
bool __thiscall sub_483690(int this)
{
  int BuildingByTiberiumType; // edi

  if ( *(char *)MEMORY[0x87F7E8][536210] >= 0 )
    return 0;
  BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)(this + 68));
  if ( BuildingByTiberiumType == -1 )
    return 0;
  if ( *(unsigned __int8 *)(this + 286) <= BuildingByTiberiumType / 2 )
    return 0;
  if ( *(_BYTE *)(this + 284) )
    return 0;
  if ( *(double *)(*(_DWORD *)(dword_A8ED54[131558] + 4 * BuildingByTiberiumType) + 160) >= 0.00001 )
    return *(_DWORD *)(this + 228) == 0;
  return 0;
}

/* ASM:
mov     eax, ds:0A8B230h
push    esi
mov     esi, ecx
push    edi
test    byte ptr [eax], 80h
jnz     short loc_4836A3
pop     edi
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_4836A3:                             ; CODE XREF: BuildingClass__IsTiberiumSiloEligible+C↑j
mov     ecx, [esi+44h]
call    FindBuildingByTiberiumType
mov     edi, eax
cmp     edi, 0FFFFFFFFh
jnz     short loc_4836B7
pop     edi
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_4836B7:                             ; CODE XREF: BuildingClass__IsTiberiumSiloEligible+20↑j
mov     eax, edi
xor     ecx, ecx
mov     cl, [esi+11Eh]
cdq
sub     eax, edx
sar     eax, 1
cmp     ecx, eax
jg      short loc_4836CF
pop     edi
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_4836CF:                             ; CODE XREF: BuildingClass__IsTiberiumSiloEligible+38↑j
mov     al, [esi+11Ch]
test    al, al
jz      short loc_4836DE
pop     edi
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_4836DE:                             ; CODE XREF: BuildingClass__IsTiberiumSiloEligible+47↑j
mov     edx, dword_A8ED54+80798h
mov     eax, [edx+edi*4]
fld     qword ptr [eax+0A0h]
fcomp   ds:dbl_7E3810
fnstsw  ax
test    ah, 1
jz      short loc_4836FF
pop     edi
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_4836FF:                             ; CODE XREF: BuildingClass__IsTiberiumSiloEligible+68↑j
mov     eax, [esi+0E4h]
pop     edi
test    eax, eax
setz    al
pop     esi
retn
*/
}

void BuildingClass::UpdateBunker() {}
void BuildingClass::EmptyBunker() {}

// IDA 0x452540: make traversable after destruction
// 0X00452540
void BuildingClass::MakeTraversable()
{
    if (!Type) return;
    CellStruct cell = Coord2Cell(location);
    int fw = Type->GetFoundationWidth();
    int fh = Type->GetFoundationHeight(false);
    for (int y = 0; y < fh; ++y) {
        for (int x = 0; x < fw; ++x) {
            ClearCellOccupied(cell.X + x, cell.Y + y);
        }
    }
}

void BuildingClass::RemoveLimpet() {}

// IDA 0x459db0: clear limpet check - returns terrain type table
void BuildingClass::ClearLimpetCheck()
{
    // Clear limpet attachment state
}

// IDA 0x487c10: check if C4 is active
// 0x487c10
bool BuildingClass::CheckC4Active() {
// [IDA decompile]
char __thiscall BuildingClass_CheckC4Active(int this)
{
  _DWORD *v3; // esi

  if ( *(_BYTE *)(this + 284) )
    return 0;
  if ( !MEMORY[0xA8E9A0] )
    return MEMORY[0x89EA60][36 * *(_DWORD *)(this + 236)];
  v3 = *(_DWORD **)(this + 228);
  if ( !v3 )
    return MEMORY[0x89EA60][36 * *(_DWORD *)(this + 236)];
  while ( (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3) != 6 )
  {
    v3 = (_DWORD *)v3[12];
    if ( !v3 )
      return MEMORY[0x89EA60][36 * *(_DWORD *)(this + 236)];
  }
  return 0;
}

/* ASM:
push    esi
push    edi
mov     edi, ecx
mov     al, [edi+11Ch]
test    al, al
jz      short loc_487C23
pop     edi
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_487C23:                             ; CODE XREF: BuildingClass__CheckC4Active+C↑j
mov     al, ds:0A8E9A0h
test    al, al
jz      short loc_487C49
mov     esi, [edi+0E4h]
test    esi, esi
jz      short loc_487C49

loc_487C36:                             ; CODE XREF: BuildingClass__CheckC4Active+37↓j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
cmp     eax, 6
jz      short loc_487C5C
mov     esi, [esi+30h]
test    esi, esi
jnz     short loc_487C36

loc_487C49:                             ; CODE XREF: BuildingClass__CheckC4Active+1A↑j
; BuildingClass__CheckC4Active+24↑j ...
mov     eax, [edi+0ECh]
pop     edi
pop     esi
lea     ecx, [eax+eax*8]
mov     al, ds:89EA60h[ecx*4]
retn
; ---------------------------------------------------------------------------

loc_487C5C:                             ; CODE XREF: BuildingClass__CheckC4Active+30↑j
test    esi, esi
jz      short loc_487C49
pop     edi
xor     al, al
pop     esi
retn
*/
}

// IDA 0x424c90: set field at offset 95
// 0x424c90
void BuildingClass::SetField95(int v) {
// [IDA decompile]
int __thiscall Accessor_424c90(_DWORD *this, int a2)
{
  *(this + 95) = a2;
  return a2;
}

/* ASM:
mov     eax, [esp+arg_0]
mov     [ecx+17Ch], eax
retn    4
*/
}

// IDA 0x425260: set field at offset 8 (activates flag)
// 0x425260
void BuildingClass::SetField8(int v) {
// [IDA decompile]
void __thiscall Accessor_425260(_BYTE *this)
{
  *(this + 414) = 1;
}

/* ASM:
mov     byte ptr [ecx+19Eh], 1
retn
*/
}

int BuildingClass::GetCursorAction() { return 0; }

// IDA 0x70f6e0: update threat bounds for AI
// 0x70f6e0
void BuildingClass::UpdateThreatBounds()
{
// [IDA decompile]
void __thiscall BuildingClass::UpdateThreatBounds(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // [esp-4h] [ebp-Ch]
  int v9; // [esp-4h] [ebp-Ch]

  if ( a2 )
  {
    v8 = -*(this + 322);
    v3 = (*(int (**)(void))(*this + 56))();
    CellClass::SetThreatBounds(a2, v3, v8);
    v4 = *this;
    *(this + 322) = 0;
    v5 = (*(int (__thiscall **)(_DWORD *))(v4 + 704))(this);
    v6 = *this;
    v9 = v5;
    *(this + 322) = v5;
    v7 = (*(int (__thiscall **)(_DWORD *))(v6 + 56))(this);
    CellClass::SetThreatBounds(a2, v7, v9);
  }
}

/* ASM:
push    esi
push    edi
mov     edi, [esp+8+arg_0]
mov     esi, ecx
test    edi, edi
jz      short loc_70F72C
mov     eax, [esi+508h]
mov     edx, [esi]
neg     eax
push    eax
call    dword ptr [edx+38h]
push    eax
mov     ecx, edi
call    CellClass__SetThreatBounds
mov     eax, [esi]
mov     ecx, esi
mov     dword ptr [esi+508h], 0
call    dword ptr [eax+2C0h]
mov     edx, [esi]
push    eax
mov     ecx, esi
mov     [esi+508h], eax
call    dword ptr [edx+38h]
push    eax
mov     ecx, edi
call    CellClass__SetThreatBounds

loc_70F72C:                             ; CODE XREF: BuildingClass__UpdateThreatBounds+A↑j
pop     edi
pop     esi
retn    4
*/
}

bool BuildingClass::ValidatePath() { return true; }

// IDA 0x717890: set production slot
// 0x717890
void BuildingClass::SetSlot(int slot)
{
// [IDA decompile]
int __thiscall BuildingClass_SetSlot(_DWORD *this, int a2, int a3)
{
  *(this + a3 + 517) = a2;
  return a3;
}

/* ASM:
mov     eax, [esp+arg_4]
mov     edx, [esp+arg_0]
mov     [ecx+eax*4+814h], edx
retn    8
*/
}

uint32_t BuildingClass::GetField184() const { return BuildingClass_field_544; }
void BuildingClass::HandleClickEvent() {}
void BuildingClass::HandleRepairCursor() {}

// IDA 0x466000: create building instance
// 0x466000
BuildingClass* BuildingClass::Create(BuildingTypeClass* type, CoordStruct* pos, HouseClass* owner)
{
    if (!type || !pos || !owner) return nullptr;
    BuildingClass* bld = AllocAndCtor();
    if (!bld) return nullptr;
    bld->Type = type;
    bld->location = *pos;
    bld->Construct();
    return bld;
}

// IDA 0x70bf50: allocate and construct building
BuildingClass* BuildingClass::AllocAndCtor()
{
    // TODO: BuildingClass is abstract — needs ~40 ObjectClass pure virtual stubs
    return nullptr;
}

// ============================================================
// Section 17: Trivial Stubs (vtable entries with fixed boolean return)
// ============================================================

// IDA: vtable entries that unconditionally return false (building doesn't use these)
bool BuildingClass::vt_entry_4E4()  { return false; }
bool BuildingClass::vt_entry_4D4()  { return false; }
bool BuildingClass::vt_entry_4D8()  { return false; }
bool BuildingClass::vt_entry_504()  { return false; }
bool BuildingClass::StubReturnFalse()   { return false; }
bool BuildingClass::StubReturnFalse3()  { return false; }
bool BuildingClass::StubReturnFalse4()  { return false; }
bool BuildingClass::StubReturnFalse10() { return false; }
bool BuildingClass::StubReturnFalse11() { return false; }
bool BuildingClass::StubReturnFalse12() { return false; }
bool BuildingClass::StubReturnFalse13() { return false; }
bool BuildingClass::StubReturnFalse14() { return false; }
int  BuildingClass::MissionStubReturnZero()  { return 0; }
int  BuildingClass::MissionStubReturnZero2() { return 0; }
int  BuildingClass::MissionStubReturnZero3() { return 0; }
int  BuildingClass::MissionStubReturnZero5() { return 0; }
int  BuildingClass::MissionStubReturnZero6() { return 0; }

void BuildingClass::sub_465D70()  {}
void BuildingClass::sub_570DDC0() {}
void BuildingClass::sub_459FF0()  {}
void BuildingClass::sub_45A020()  {}
void BuildingClass::sub_5487110() {}
void BuildingClass::sub_5487130() {}
void BuildingClass::sub_5487170() {}
void BuildingClass::sub_5487180() {}
void BuildingClass::sub_54AA290() {}
void BuildingClass::sub_54F9750() {}
void BuildingClass::sub_55AEAD0() {}
void BuildingClass::sub_55AEAF0() {}
void BuildingClass::sub_55AEB20() {}
void BuildingClass::sub_563D540() {}
void BuildingClass::sub_5712130() {}

// IDA 0x45a610: find in pointer array
void* BuildingClass::FindInPointerArray(void* ptr)
{
    (void)ptr;
    return nullptr;
}

bool BuildingClass::isGeneratingGap = false;
void BuildingClass::DestroyGap() { isGeneratingGap = false; }

} // namespace gamemd

#include "structure/building.hpp"

namespace gamemd {

// --- BuildingClass ---

HRESULT __stdcall BuildingClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
AbstractType __stdcall BuildingClass::whatAmI() const { return kObjectTypeId; }
int BuildingClass::objectSize() const { return sizeof(BuildingClass); }
void BuildingClass::onBuildingPlacement(uint32_t dwUnk, uint32_t dwUnk2) {}
CellStruct* BuildingClass::getFoundationCell(CellStruct* pCellStruct, uint32_t dwUnk, uint32_t dwUnk2) const { return nullptr; }
int BuildingClass::canPlaceHere(ObjectClass* pObj) const { return 0; }
void BuildingClass::UpdateConstructionOptions() {}
void BuildingClass::onProductionComplete(uint32_t dwUnk, uint32_t dwUnk2) {}
void BuildingClass::processSuperWeapon(uint32_t dwUnk, uint32_t dwUnk2, uint32_t dwUnk3, uint32_t dwUnk4) {}
void BuildingClass::SensorArrayActivate(CellStruct cell) {}
void BuildingClass::SensorArrayDeactivate(CellStruct cell) {}
void BuildingClass::DisguiseDetectorActivate(CellStruct cell) {}
void BuildingClass::DisguiseDetectorDeactivate(CellStruct cell) {}
// 0x480110
Point2D BuildingClass::CalcDrawPos() const {
// [IDA decompile]
_DWORD *__thiscall BuildingClass_CalcDrawPos(int this, _DWORD *a2)
{
  int *v3; // eax
  int v4; // edx
  int v5; // ecx
  unsigned __int8 v6; // al
  int v8; // ecx
  _BYTE v9[8]; // [esp+4h] [ebp-8h] BYREF

  v3 = (int *)globalHelper_0FDCC0(v9, *(_DWORD *)(this + 68));
  v4 = *v3;
  v5 = v3[1];
  if ( *(char *)(this + 320) >= 0 )
  {
    if ( *(_DWORD *)(this + 68) == 239 )
LABEL_6:
      v5 -= 15;
  }
  else
  {
    v6 = *(_BYTE *)(this + 286);
    v5 -= 16;
    if ( v6 >= 9u && v6 <= 0x11u )
      goto LABEL_6;
  }
  v8 = MEMORY[0x886FA4] - 15 * *(char *)(this + 283) + v5;
  *a2 = v4 + 30;
  a2[1] = v8 + 15;
  return a2;
}

/* ASM:
sub     esp, 8
push    esi
mov     esi, ecx
lea     ecx, [esp+0Ch+var_8]
mov     edx, [esi+44h]
call    globalHelper_0FDCC0
mov     edx, [eax]
mov     ecx, [eax+4]
mov     al, [esi+140h]
test    al, 80h
jz      short loc_480144
mov     al, [esi+11Eh]
sub     ecx, 10h
cmp     al, 9
jb      short loc_480150
cmp     al, 11h
ja      short loc_480150
jmp     short loc_48014D
; ---------------------------------------------------------------------------

loc_480144:                             ; CODE XREF: BuildingClass__CalcDrawPos+1F↑j
cmp     dword ptr [esi+44h], 0EFh
jnz     short loc_480150

loc_48014D:                             ; CODE XREF: BuildingClass__CalcDrawPos+32↑j
sub     ecx, 0Fh

loc_480150:                             ; CODE XREF: BuildingClass__CalcDrawPos+2C↑j
; BuildingClass__CalcDrawPos+30↑j ...
movsx   eax, byte ptr [esi+11Bh]
mov     esi, ds:886FA4h
add     edx, 1Eh
lea     eax, [eax+eax*2]
lea     eax, [eax+eax*4]
sub     esi, eax
mov     eax, [esp+0Ch+arg_0]
add     ecx, esi
pop     esi
add     ecx, 0Fh
mov     [eax], edx
mov     [eax+4], ecx
add     esp, 8
retn    4
*/
}
ra2::game::LightConvertClass* BuildingClass::GetRemapColour() const { return nullptr; }
int BuildingClass::AssignTarget_SyncLog() { return 0; }

} // namespace gamemd
