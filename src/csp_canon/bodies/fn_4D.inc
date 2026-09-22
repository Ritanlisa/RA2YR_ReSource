// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x004D02B0  VoxelAnimClass::UpdateMatrix  cls=VoxelAnimClass  sig=csp  renamed_refs=2  residual=- ====
char VoxelAnimClass::UpdateMatrix()
{
{
    int v3;
    int (__stdcall ***v4)(int, void *, int *);
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    if ( this->objectTypeFlags > Cell::GetGroundHeight(this + 7) + 120 )
    return 1;
    v3 = this->vtable4;
    if ( *(int *)(v3 + 692) && *(int *)(v3 + 764) )
    return 1;
    v4 = (int (__stdcall ***)(int, void *, int *))this->vtable4;
    v8 = 0;
    if ( !v4 )
    return 0;
    v5 = (**v4)(v4, &DataGlobal_822410, &v9);
    if ( v5 >= 0 )
  {
    v7 = v9;
    Release3COM(&v8);
    v6 = v7;
    v8 = v7;
  }
    else
  {
    Release3COM(&v8);
    v6 = 0;
    v8 = 0;
  }
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !v6 )
    return 0;
    if ( !(*(int (__stdcall **)(int))(*(int *)(v6) + 32))(v6) )
  {
    if ( v8 )
    (*(void (__stdcall **)(int))(*(int *)(v8) + 8))(v8);
    return 0;
  }
    if ( v8 )
    (*(void (__stdcall **)(int))(*(int *)(v8) + 8))(v8);
    return 1;
}
}

// ==== BACKFILL 0x004D0390  FlyLocomotionClass::StubReturn96  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int FlyLocomotionClass::StubReturn96()
{
return 96;
}

// ==== BACKFILL 0x004D03A0  FlyLocomotionClass::ProcessMove  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
FlyLocomotionClass * FlyLocomotionClass::ProcessMove(char a2)
{
{
    *(void**)this = vt_FlyLocomotionClass;
    *(this + 1) = &vt_FlyLocomotionClass;
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (FlyLocomotionClass *)this;
}
}

// ==== BACKFILL 0x004D03D0  UnitClass::CompareCoordinateMagnitude  cls=UnitClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::CompareCoordinateMagnitude(short* a2)
{
{
    return abs16(*(void**)this) >= (int)abs16(*a2);
}

/* ASM:
mov     eax, [esp+arg_0]
push    esi
movsx   eax, word ptr [eax]
cdq
mov     esi, eax
movsx   eax, word ptr [ecx]
xor     esi, edx
xor     ecx, ecx
sub     esi, edx
cdq
xor     eax, edx
sub     eax, edx
cmp     eax, esi
pop     esi
setnl   cl
mov     al, cl
retn    4
*/
}

// ==== BACKFILL 0x004D0400  JumpjetLocomotionClass::CheckWindowsErrorWrapper_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
BOOL JumpjetLocomotionClass::CheckWindowsErrorWrapper_0(int a2)
{
if (a2)
    WinAPI::Wrapper(-2147467261);
return *(unsigned int *)this == 0;
}

// ==== BACKFILL 0x004D0510  JumpjetLocomotionClass::GetInterface  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::GetInterface(int a1, const void * a2, unsigned int * a3)
{
return LocomotionClass::QueryInterface(a1 - 4, a2, a3);
}

// ==== BACKFILL 0x004D0520  JumpjetLocomotionClass::GetInterface2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::GetInterface2(int a1)
{
return COM::AddRef(a1 - 4);
}

// ==== BACKFILL 0x004D0530  JumpjetLocomotionClass::Stub2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::Stub2(int a1)
{
return COM::ReleaseRef((volatile LONG *)(a1 - 4));
}

// ==== BACKFILL 0x004D08B0  ObjectClass::Construct  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* ObjectClass::Construct() {
{
      int v2;

      AbstractClass::Constructor((int)this);
      this->objectTypeFlags = -1;
      this->owningHouseIndex = 0;
      this->fallRate = 0;
      this->nextObject = 0;
      this->attachedTag = 0;
      this->attachedBomb = 0;
      this->ambientSoundController = 0;
      this->q040 = 0;
      this->q044 = 0;
      this->q048 = 0;
      this->q04C = 0;
      this->q054 = -1;
      this->customSound_controller = 0;
      this->q058 = 0;
      this->q060 = 0;
      this->customSound = 0;
      this->bombVisible = 1;
      this->alignmentPadding69 = 0;
      *(this + 23) = &vt_DynamicVectorClass_FoggedObjectClass_DrawRecord;
      this->estimatedHealth = 10;
      this->health = 0;
      this->isOnMap = 1;
      *this = &FoggedObjectClass::`vftable';
      *(this + 1) = &FoggedObjectClass::`vftable';
      *(this + 2) = &FoggedObjectClass::`vftable';
      *(this + 3) = &vt_FoggedObjectClass;
      if ( g_FootClassConfig < DataGlobal_8B3D18
        || (DataGlobal_8B3D1D || !DataGlobal_8B3D18)
        && DataGlobal_8B3D24 > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(DataGlobal_8B3D10 + 8))(
             &DataGlobal_8B3D10,
             DataGlobal_8B3D18 + DataGlobal_8B3D24,
             0) )
      {
        v2 = g_FootClassConfig++;
        *((_DWORD *)DataGlobal_8B3D14 + v2) = this;
      }
      return this;
}
} } }

// ==== BACKFILL 0x004D2370  MarkAllFootOccupancies  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4D2370()
{
{
      int result;
      int v1;
      int v2;
      _WORD *v3;
      int v4;
      _DWORD *v5;
      _DWORD *v6;
      _DWORD *v7;
      int v8;
      int i;
      int v10;
      _BYTE v11[4];
      _DWORD v12[3];

      result = g_FootClassConfig;
      v1 = 0;
      for ( i = 0; v1 < g_FootClassConfig; i = v1 )
      {
        v2 = *((_DWORD *)DataGlobal_8B3D14 + v1);
        if ( *(_DWORD *)(v2 + 48) == 6
          && (*(int (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(v2 + 96) + 144))(**(_DWORD **)(v2 + 96), 0) )
        {
          if ( *(_DWORD *)(v2 + 48) == 6 )
            v3 = (_WORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(v2 + 96) + 144))(
                            **(_DWORD **)(v2 + 96),
                            0);
          else
            v3 = 0;
          v4 = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 96))(v2, v11);
          v10 = v4;
          while ( *v3 != 0x7FFF || v3[1] != 0x7FFF )
          {
            LOWORD(v8) = v4 + *v3;
            HIWORD(v8) = HIWORD(v4) + v3[1];
            v10 = v8;
            v5 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v10);
            v3 += 2;
            v5[80] |= 0x400000u;
          }
          v1 = i;
        }
        else
        {
          v6 = (_DWORD *)(v2 + 52);
          v12[0] = *v6;
          v12[1] = v6[1];
          v12[2] = v6[2];
          v7 = Coord::To_Cell(&DataGlobal_87F7E8, v12);
          v7[80] |= 0x400000u;
        }
        result = g_FootClassConfig;
        ++v1;
      }
      return result;
}
} }

// ==== BACKFILL 0x004D24A0  FoggedObjectClass::SaveToINI  cls=FoggedObjectClass  sig=csp  renamed_refs=0  residual=- ====
int FoggedObjectClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    int v4;
    int v5;
    int v6;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
  {
    v4 = *a1;
    aP2 = *(int *)&aP0->Name[8];
    result = (*(int (__stdcall **)(int *, int *, int, int))(v4 + 16))(a1, &aP2, 4, 0);
    if ( result >= 0 )
    {
    v5 = 0;
    if ( aP2 > 0 )
      {
    v6 = 0;
    do
        {
    if ( (*(int (__stdcall **)(int *, char *, int, int))(*a1 + 16))(a1, (char *)aP0->UIName + v6, 16, 0) < 0 )
    break;
    ++v5;
    v6 += 16;
        }
    while ( v5 < aP2 );
      }
    return 0;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x004D2790  CellClass::recalcPassability  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::recalcPassability() {
{
      if ( this->q030 == 6 )
        return (*(int (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(this + 96) + 144))(**(_DWORD **)(this + 96), 0);
      else
        return 0;
}
} }

// ==== BACKFILL 0x004D27B0  FoggedObjectClass::GetTypeIdentifier  cls=FoggedObjectClass  sig=csp  renamed_refs=0  residual=- ====
int FoggedObjectClass::GetTypeIdentifier()
{
return 61;
}

// ==== BACKFILL 0x004D27C0  FoggedObjectClass::GetObjectSize  cls=FoggedObjectClass  sig=csp  renamed_refs=0  residual=- ====
int FoggedObjectClass::GetObjectSize()
{
return 120;
}

// ==== BACKFILL 0x004D27D0  FoggedObjectClass::GetClassIdentifier  cls=FoggedObjectClass  sig=csp  renamed_refs=0  residual=- ====
int FoggedObjectClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 474417934;
  a2[1] = 299002327;
  a2[2] = 1610674872;
  a2[3] = -318126072;
  return 0;
}

// ==== BACKFILL 0x004D28C0  TechnoClass::recalcThreat  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int TechnoClass::recalcThreat() {
{
    if ( this->health <= 0 )
    return 0;
    else
    return **(int **)(this + 96);
}
} } }

// ==== BACKFILL 0x004D2910  FoggedObjectClass::ddtor  cls=FoggedObjectClass  sig=csp  renamed_refs=0  residual=- ====
FoggedObjectClass * FoggedObjectClass::ddtor(char a2)
{
{
    DestructFoggedObjectClass((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (FoggedObjectClass *)this;
}
}

// ==== BACKFILL 0x004D2930  AbstractClass::getMissionState  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void AbstractClass::getMissionState() {
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->uniqueId = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->vtable1 = 0;
  }
    this->IsAllocated = 0;
    this->vtable2 = 0;
}
} } }

// ==== BACKFILL 0x004D2960  AbstractClass::setMissionState  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::setMissionState(int a1) {
{
      if ( this->vtable3 )
        return (unsigned int)(a2 - this->vtable1) >> 4;
      else
        return 0;
}
} } }

// ==== BACKFILL 0x004D2E40  Vector::ReallocDynamic  cls=Vector  sig=csp  renamed_refs=0  residual=- ====
char Vector::ReallocDynamic(int a2)
{
{
    char *v3;
    int i;
    int v5;
    int *v6;
    int v7;
    if ( a2 < 0 )
    return 0;
    v3 = (char *)__2_YAPAXI_Z(8 * (a2 + this->Vector_field_0x8));
    if ( !v3 )
    return 0;
    for ( i = 0; i < this->Vector_field_0x4; *(int *)&v3[v5 + 4] = v6[1] )
  {
    v5 = 8 * i;
    v6 = (int *)(*(int *)(this) + 8 * i++);
    *(int *)&v3[v5] = *v6;
  }
    __3_YAXPAX_Z(*(void **)this);
    v7 = a2 + this->Vector_field_0x8;
    *(int *)this = v3;
    this->Vector_field_0x8 = v7;
    this->Vector_field_0x10 = 0;
    return 1;
}
}

// ==== BACKFILL 0x004D4FC0  sub_4D4FC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_4D4FC0::sub_4D4FC0()
{
{
    int v2;
    short *v3;
    int *v4;
    int *v5;
    int *v6;
    int v7;
    int v9;
    int v10;
    char v11[4];
    v2 = 0;
    while ( 1 )
  {
    v3 = (short *)this->Vf440(v11);
    LOWORD(v9) = LOWORD(Direction_X_Offsets[v2 & 7]) + *v3;
    HIWORD(v9) = v3[1] + HIWORD(Direction_X_Offsets[v2 & 7]);
    v10 = v9;
    v4 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v10);
    v5 = Cell::IsBridge(v4);
    v6 = v5;
    if ( v5 )
    {
    if ( *(char *)(v5[328] + 5493) )
      {
    v7 = (*(int (__thiscall **)(int *))(*v5 + 60))(v5);
    if ( v7 == this->Vf60() )
    break;
      }
    }
    if ( ++v2 >= 8 )
    return 0;
  }
    return v6;
}
}

// ==== BACKFILL 0x004D94A0  ObjectClass::SetMember360  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::SetMember360(int a1) {
{
      this->q5A0 = a2;
      return a2;
}
} } }

// ==== BACKFILL 0x004DA020  globalHelper_0DA020  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * globalHelper_0DA020(unsigned int * a0, AbstractClass * aP1)
{
{
    *a0 = *(int *)aP1->__pad_0;
    return a0;
}
}

// ==== BACKFILL 0x004DA030  InfantryClass::ProcessExitQueue  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int InfantryClass::ProcessExitQueue() {
{
      int v2;
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;

      v2 = this->Archive;
      if ( !v2 )
      {
        v2 = this->q5BC;
        if ( v2 )
        {
          v2 = this->q5B0;
          v3 = *(_DWORD *)v2;
          if ( *(_DWORD *)v2 )
          {
            this->vt288(v3, 1);
            v4 = this->q5BC;
            if ( v4 > 0 )
            {
              v5 = v4 - 1;
              v6 = 0;
              for ( this->q5BC = v5;
                    v6 < this->q5BC;
                    *(_DWORD *)(this->q5B0 + 4 * v6 - 4) = *(_DWORD *)(this->q5B0 + 4 * v6) )
              {
                ++v6;
              }
            }
            LOBYTE(v2) = this->FootClass_field_6B1;
            if ( (_BYTE)v2 )
            {
              v7 = this->q5B4;
              if ( this->q5BC < v7
                || ((LOBYTE(v2) = this->q5B9, (_BYTE)v2) || !v7)
                && (v2 = this->q5C0, v2 > 0)
                && (LOBYTE(v2) = (*(int (__thiscall **)(int *, int, _DWORD))(this->FootClass_DVC_5AC + 8))(this + 363, v7 + v2, 0),
                    (_BYTE)v2) )
              {
                v2 = this->q5BC;
                v8 = this->q5B0;
                this->q5BC = v2 + 1;
                *(_DWORD *)(v8 + 4 * v2) = v3;
              }
            }
          }
        }
      }
      return v2;
}
} }

// ==== BACKFILL 0x004DB0D0  TechnoClass::QueueDrawVoiceResponse  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int TechnoClass::QueueDrawVoiceResponse(void* a1, int aP2, int aP3, int aP4, int aP5, void* aP6, int aP7, int aP8, int aP9, int aP10, int aP11) {
{
    int result;
    int v14;
    int v15;
    int *v16;
    int v17;
    int v18;
    int v19;
    TechnoClass *v20;
    int v21;
    result = this->Locomotor;
    if ( result )
  {
    result = (*(int (__stdcall **)(int))(*(int *)this->Locomotor + 32))(this->Locomotor);
    if ( (char)result == 1 )
    {
    v14 = *(int *)aP6->__pad_0;
    v20 = *(TechnoClass **)&aP6->__pad_0[4];
    v15 = this->Locomotor;
    v19 = v14;
    if ( v15 )
      {
    v16 = (int *)(*(int (__stdcall **)(int, int *))(*(int *)this->Locomotor + 48))(this->Locomotor, &v21);
    v17 = v16[1];
    v18 = *(int *)&aP6->__pad_0[4];
    v19 = *v16 + *(int *)aP6->__pad_0;
    v20 = (TechnoClass *)(v17 + v18);
      }
    return QueueTechnoVoiceLine( this, (TechnoClass *)a1, (TechnoClass *)aP2, aP3, (TechnoClass *)aP4, (TechnoClass *)aP5, (TechnoClass *)&v19, (TechnoClass *)aP7, (TechnoClass *)aP8, (TechnoClass *)aP9, (TechnoClass *)aP10, (TechnoClass *)aP11);
    }
  }
    return result;
}
} } }

// ==== BACKFILL 0x004DB250  AbstractClass::COMStub_Return0_69  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::COMStub_Return0_69(Tactical * aP0, AbstractClass * aP1)
{
  ;
}

// ==== BACKFILL 0x004DBA30  FootClass::vt_entry_548  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
void FootClass::vt_entry_548() {}

// ==== BACKFILL 0x004DBA40  FootClass::vt_entry_54C  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
void FootClass::vt_entry_54C() {}

// ==== BACKFILL 0x004DBA50  TechnoClass::GetTargetCellCenter  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::GetTargetCellCenter(AbstractClass* a2) {
{
    int* v3;
    int v4;
    int v5;
    int v6;
    int v9[3];
    int v10[3];

    v3 = a2->GetCoordsEx(v10, this);
    v4 = v3[0];
    v5 = v3[1];
    v9[2] = 0;
    v6 = (short)(v5 / 256);
    v9[0] = (((short)(v4 / 256)) << 8) + 128;
    v9[1] = (v6 << 8) + 128;
    return this->CheckTileSeed(v9);
}
}

// ==== BACKFILL 0x004DEE50  FootClass::vt_entry_530  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
int FootClass::vt_entry_530() { return 0; }

// ==== BACKFILL 0x004DF1C0  TechnoClass::vt_entry_4AC  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::vt_entry_4AC() {
return this->q5C4 != -1;
}

// ==== BACKFILL 0x004DF1D0  TechnoClass::vt_entry_4B0  cls=TechnoClass  sig=csp  renamed_refs=1  residual=- ====
int TechnoClass::vt_entry_4B0() {
return this->__pad_5D1;
}

// ==== BACKFILL 0x004DF1E0  TechnoClass::vt_entry_4B4  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::vt_entry_4B4() {
return this->q5C4;
}

// ==== BACKFILL 0x004DF280  sub_4DF280  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_4DF280::sub_4DF280()
{
{
    int v2;
    int *v3;
    int v4;
    int v5;
    char v6[12];
    v2 = this->M1484;
    if ( v2 )
  {
    v3 = (int *)(*(int (__thiscall **)(int, char *))(*(int *)(v2) + 72))(v2, v6);
    LOWORD(v4) = *v3 / 256;
    HIWORD(v4) = v3[1] / 256;
    v5 = v4;
    this->M1480 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v5);
  }
    else
  {
    this->M1480 = 0;
  }
    this->M1484 = 0;
}
}

// ==== BACKFILL 0x004DF310  TechnoClass::vt_entry_4C4  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::vt_entry_4C4() {
return this->q5C4 == 29;
}
