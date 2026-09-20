// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x004436F0  ObjectClass::HandleRallyPointCommand  cls=ObjectClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int ObjectClass::HandleRallyPointCommand() {
{
      int result;
      int v3;
      void *v4;
      char v5;
      _BYTE *WaypointCoords;
      AbstractClass *v7;
      int v8;
      char v9;
      char v10[8];
      char v11[112];
      int v12;
      __int16 *aP1;

      result = v12;
      if ( v12 == 5 )
      {
        v3 = *(_DWORD *)this;
        v4 = CellCoord::To_CellObj(&DataGlobal_87F7E8, aP1);
        result = (*(int (__thiscall **)(#377 *, int, void *, _DWORD, _DWORD))(v3 + 888))(this, 1, v4, 0, 0);
        LOBYTE(result) = 1;
      }
      else
      {
        if ( v12 == 6 || v12 == 1 )
        {
          v5 = 0;
          if ( !*(_BYTE *)(this->q520 + 5817)
            || (unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135))
            && g_GameMode_Current
            && (_BYTE)MCVRedeploy
            && !this->q2C0 )
          {
            if ( *(_DWORD *)(this->q520 + 1032)
              || this->vt161() )
            {
              BuildingClass::SetRallyPoint((int)this, (IUnknown *)aP1, 1);
            }
          }
          else
          {
            v5 = 1;
          }
          result = *(_DWORD *)(this->q520 + 1032);
          if ( result && !v5 )
          {
            WaypointCoords = ScriptAction::GetWaypointCoords(v10, (IUnknown *)this);
            v8 = *(_DWORD *)WaypointCoords;
            v9 = WaypointCoords[4];
            v7 = (AbstractClass *)this->vt14();
            result = (int)EventClass::Add(v11, v7, 0x16u, v8, v9);
            if ( Networking_LastEventIndex < 128 )
            {
              qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], (const void *)result, 0x6Fu);
              g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
              result = Networking_LastEventIndex + 1;
              Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F;
              ++Networking_LastEventIndex;
            }
          }
        }
        LOBYTE(result) = 1;
      }
      return result;
}
} } }

// ==== BACKFILL 0x00445F80  SuperWeapon::CreateUnits  cls=BuildingClass  sig=csp  renamed_refs=2 ====
namespace gamemd { int SuperWeapon::CreateUnits() {
{
      int v2;
      _DWORD *v3;
      _DWORD *v4;
      int v5;
      int v6;
      int v7;
      int v8;
      HRESULT result;
      _DWORD *v10;
      int v11;
      _DWORD *v12;
      int v13;
      double v14;
      double v15;
      int v16;
      LPVOID ppv;
      LPVOID v18;
      int v19;
      int v20;
      int v21;
      int v22;
      double v23;
      double v24;
      _DWORD v25[2];
      int v26;
      double v27[2];
      _QWORD v28[3];

      v2 = this->behindAnim;
      v3 = (_DWORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v2 + 72))(v2, v27);
      LOWORD(ppv) = *v3 / 256;
      HIWORD(ppv) = v3[1] / 256;
      v18 = ppv;
      LODWORD(v24) = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v18);
      ppv = 0;
      v4 = (_DWORD *)*((_DWORD *)g_WeaponTypeConfig + SuperWeaponClass::FindByName(g_INI_Key_NukePayload));
      v5 = v4[40];
      v6 = v4[43];
      v19 = v4[42];
      LODWORD(v23) = v5;
      v7 = v4[41];
      v20 = v6;
      v8 = this->suspendedMission;
      v21 = v7;
      v22 = v8;
      result = CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv);
      if ( result >= 0 )
      {
        v10 = ppv;
        result = Particle::Init((int)ppv, SLODWORD(v23), v2, v22, v21, v20, v19, 1);
        if ( v10 )
        {
          (*(void (__thiscall **)(_DWORD *))(*v10 + 212))(v10);
          v11 = LODWORD(v24);
          v10[76] = v4;
          v12 = (_DWORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v11 + 72))(v11, v27);
          v13 = this->q130;
          v25[0] = *v12;
          v25[1] = v12[1];
          v26 = v12[2];
          v26 += *(_DWORD *)(*(_DWORD *)(v13 + 160) + 700);
          v24 = Math::SinCos(1.570748388432313);
          v24 = Math::ArcTan2(1.570748388432313) * v24 * -1.0;
          v23 = Math::ArcTan2(1.570748388432313);
          v14 = Math::ArcTan2(1.570748388432313);
          v27[1] = v24;
          *(double *)&v28[1] = v24;
          v27[0] = v14 * v23 * -1.0;
          *(double *)v28 = v27[0];
          v15 = Math::SinCos(1.570748388432313);
          v16 = *v10;
          *(double *)&v28[2] = v15 * -1.0;
          return (*(int (__thiscall **)(_DWORD *, _DWORD *, _QWORD *))(v16 + 496))(v10, v25, v28);
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x00449410  BuildingClass::GetBoundingSizeExt  cls=BuildingClass  sig=csp  renamed_refs=0 ====
int __thiscall BuildingClass::GetBoundingSizeExt(#377 *this)
{
  return (*(_BYTE *)(*((_DWORD *)this + 328) + 5829) != 0 ? 0x20 : 0)
       - (*(_BYTE *)(*((_DWORD *)this + 328) + 5815) != 0 ? 0x10 : 0)
       + ObjectClass::GetBoundingSize(this);
}

// ==== BACKFILL 0x0044B760  AbstractClass::COMStub_133  cls=AbstractClass  sig=csp  renamed_refs=0 ====
int AbstractClass_COMStub_133()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __thiscall AbstractClass::COMStub_133(#377 *this)
{
  return IPersistStream::StubReturn450();
}
}

// ==== BACKFILL 0x0044B770  AbstractClass::COMStub_137  cls=AbstractClass  sig=csp  renamed_refs=0 ====
int AbstractClass_COMStub_137()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __thiscall AbstractClass::COMStub_137(#377 *this)
{
  return AircraftClass::CheckMissionStatus();
}
}

// ==== BACKFILL 0x0044D700  BuildingClass::GetAmmoCountScaled  cls=BuildingClass  sig=csp  renamed_refs=0 ====
int BuildingClass::GetAmmoCountScaled()
{
    // IDA 0x44D700. Type@+0x520, PipScale@+0x3D4, HasTiberiumAmmo@+0x16BC,
    // Owner@+0x21C, vtable[29]=GetPipMax(+0x74), RoundToInt@0x7C5F00.
    BuildingTypeClass* buildingType = this->Type;
    if (buildingType->PipScale != PipScale::Tiberium)
        return TechnoClass::GetAmmoCount();
    if (!buildingType->HasTiberiumAmmo)
        return 0;
    double repairRatio = BuildingClass::checkRepairEligibility(this->Owner);
    int maxPips = buildingType->GetPipMax();
    return Math::RoundToInt((double)maxPips * repairRatio);
}

// ==== BACKFILL 0x0044D760  BuildingClass::PushScriptAction  cls=BuildingClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int BuildingClass::PushScriptAction() {
{
    int result;
    int *v3;
    int v4;
    char v5[12];
    int v6;
    int v7;
    result = v6;
    if ( v6 )
  {
    result = House::IsHumanPlayer(*((HouseClass **)(this) + 135));
    if ( (char)result )
    {
    v3 = (int *)this->ClearPointerRefs(v5, 0);
    LOWORD(v7) = *v3 / 256;
    HIWORD(v7) = v3[1] / 256;
    v4 = v7;
    return ScriptActionQueue::PushNext(&v4);
    }
  }
    return result;
}
} }

// ==== BACKFILL 0x0044F640  BuildingClass::GetFactoryPosition  cls=BuildingClass  sig=csp  renamed_refs=0 ====
CoordStruct* BuildingClass::GetFactoryPosition(CoordStruct* out) const {
BuildingTypeClass* buildingType = this->Type;
CoordStruct* coords = &this->location;
if ( buildingType->ExitCoord.X == 0 && buildingType->ExitCoord.Y == 0 && buildingType->ExitCoord.Z == 0 )
{
    CoordStruct exitCoords;
    CoordStruct* result = this->GetExitCoords(&exitCoords, 0);
    out->X = result->X;
    out->Y = result->Y;
    out->Z = result->Z;
    return out;
}
else
{
    out->X = coords->X + buildingType->ExitCoord.X;
    out->Y = coords->Y + buildingType->ExitCoord.Y;
    out->Z = coords->Z + buildingType->ExitCoord.Z;
    return out;
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
    return {}; // TODO stub - translate quarantined IDA block above
}

// ==== BACKFILL 0x0044F6E0  sub_44F6E0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_44F6E0::sub_44F6E0(unsigned int * a2, int a3)
{
{
    int v3;
    int v4;
    int *v5;
    int v6;
    int v7;
    char v9[12];
    int v10;
    v3 = 6;
    v4 = 5;
    v5 = (int *)this->Vf72(v9);
    v6 = *v5 / 256;
    v7 = v5[1] / 256;
    if ( a3 )
  {
    if ( a3 == 2 )
    v4 = 0;
  }
    else
  {
    v3 = 0;
  }
    if ( (short)v6 - DataGlobal_87F90C > g_AircraftTrackerPool / 2 )
    v3 = -v3;
    if ( (short)v7 - DataGlobal_87F910 > g_AircraftTrackerState / 2 )
    v4 = -v4;
    LOWORD(v10) = v6 + v3;
    HIWORD(v10) = v7 + v4;
    *a2 = v10;
    return a2;
}
}

// ==== BACKFILL 0x0044FE60  sub_44FE60  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int INIClass::sub_44FE60()
{
{
    int result;
    int i;
    int v4;
    INIClass::ClearSection((int)this, (INIClass *)aStructures, 0);
    result = *(int *)&g_NetworkPlayerBuffer.__pad_14B0[100];
    for ( i = 0; i < *(int *)&g_NetworkPlayerBuffer.__pad_14B0[100]; ++i )
  {
    v4 = *(int *)(*(int *)&g_NetworkPlayerBuffer.__pad_14B0[88] + 4 * i);
    if ( !*(char *)(v4 + 129) && !*(char *)(*(int *)(v4 + 1312) + 5823) )
    BuildingClass::ReadConstructionData(v4, this);
    result = *(int *)&g_NetworkPlayerBuffer.__pad_14B0[100];
  }
    return result;
}
}
