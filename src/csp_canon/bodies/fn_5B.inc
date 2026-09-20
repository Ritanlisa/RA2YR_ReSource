// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x005B0060  JumpjetLocomotionClass::ShortFunc_5B0060  cls=MechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::ShortFunc_5B0060(int a1)
{
{
    BuildingClass::ProcessMission(a1 - 4, 1);
    return (*(int (__stdcall **)(int))(*(int *)(a1) + 16))(a1);
}
}

// ==== BACKFILL 0x005B0080  JumpjetLocomotionClass::ConvertCoordToCell_1  cls=MechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::ConvertCoordToCell_1(int a1, int aP1, IUnknown * aP2, IUnknown * aP3)
{
{
    int result;
    IUnknown *v5;
    IUnknown *v6;
    result = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 892))(*(int *)(a1 + 8));
    if ( !(char)result )
  {
    result = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 896))(*(int *)(a1 + 8));
    if ( !(char)result )
    {
    result = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 468))(*(int *)(a1 + 8));
    if ( !(char)result )
      {
    result = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 472))(*(int *)(a1 + 8));
    if ( !(char)result )
        {
    v5 = aP2;
    v6 = aP3;
    *(int *)(a1 + 20) = aP1;
    *(int *)(a1 + 24) = v5;
    *(int *)(a1 + 28) = v6;
    result = (int)Coord::To_Cell(&DataGlobal_87C374.__pad_14B0[8132], (IUnknown *)&aP1);
    if ( (*(int *)(result + 320) & 0x100) != 0 )
          {
    result = Coord::ScaleToScreenY((void *)0x3C);
    *(int *)(a1 + 28) += result;
          }
    *(char *)(a1 + 44) = 1;
        }
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x005B0120  JumpjetLocomotionClass::SyncMatrixTransformState  cls=MechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SyncMatrixTransformState(int a1)
{
{
    int result;
    result = a1;
    *(int *)(a1 + 20) = g_MatrixTransformState;
    *(int *)(a1 + 24) = DataGlobal_ABEE14;
    *(int *)(a1 + 28) = DataGlobal_ABEE18;
    if ( *(int *)(a1 + 32) == g_MatrixTransformState && *(int *)(a1 + 36) == DataGlobal_ABEE14 && *(int *)(a1 + 40) == DataGlobal_ABEE18 )
  {
    *(char *)(a1 + 44) = 0;
  }
    return result;
}
}

// ==== BACKFILL 0x005B0170  JumpjetLocomotionClass::UpdateFacingDirection_1  cls=MechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::UpdateFacingDirection_1(int a1, int a2)
{
{
    return FacingClass::Update((char *)(*(int *)(a1 + 8) + 904), &a2);
}
}

// ==== BACKFILL 0x005B01A0  JumpjetLocomotionClass::InitMultiFieldArray  cls=MechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::InitMultiFieldArray(unsigned int * a1, int a2, int a3, int a4)
{
{
    *((int*)(a1) + 8) = a2;
    *((int*)(a1) + 9) = a3;
    *((int*)(a1) + 10) = a4;
    return a2;
}
}

// ==== BACKFILL 0x005B1960  MechLocomotionClass::ddtor  cls=MechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int MechLocomotionClass::ddtor(int a1, unsigned int * a2)
{
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1439777208;
    *((int*)(a2) + 1) = 298965908;
    *((int*)(a2) + 2) = 1610651820;
    *((int*)(a2) + 3) = -1252326136;
    return 0;
}
}

// ==== BACKFILL 0x005B19A0  MechLocomotionClass::BeginMove  cls=MechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int MechLocomotionClass::BeginMove(int * a1, int * a2)
{
{
    int result;
    result = SwizzleManager::SaveLoad(a1, a2);
    if ( result >= 0 )
  {
    if ( a1 )
    {
    *a1 = (int)(unsigned int)vt_MechLocomotionClass;
    *((int*)(a1) + 1) = (int)&vt_MechLocomotionClass;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x005B19D0  JumpjetLocomotionClass::SmallStub_5B19D0  cls=MechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_5B19D0(int a1)
{
return 2;
}

// ==== BACKFILL 0x005B19E0  JumpjetLocomotionClass::StubReturnTrue_4  cls=MechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::StubReturnTrue_4(InfantryClass * aP0)
{
{
    if ( TimerClass::Active(*(int *)&aP0->__pad_0[8] + 904) )
    return 1;
    return (*(unsigned char (__stdcall **)(InfantryClass *))(*(int *)aP0->__pad_0 + 16))(aP0)
    && (aP0->NeedsSaveOrLink != g_MatrixTransformState || *(__int64 *)&aP0->objectTypeFlags != *(__int64 *)(&g_MatrixTransformState + 1))
    && (*(int (__thiscall **)(int))(**(int **)&aP0->__pad_0[8] + 1336))(*(int *)&aP0->__pad_0[8]) > 0;
}
}

// ==== BACKFILL 0x005B1A50  JumpjetLocomotionClass::DispatchVirtualCall_5  cls=MechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::DispatchVirtualCall_5(unsigned int * a1, int a2)
{
{
    int result;
    int *v3;
    int v4;
    int v5[3];
    char v6[12];
    result = a2;
    if ( !a2 )
  {
    v3 = (int *)(*(int (__stdcall **)(int *, char *))(*a1 + 24))(a1, v6);
    v5[0] = *v3;
    v5[1] = v3[1];
    v4 = *((int*)(a1) + 2);
    v5[2] = v3[2];
    return (*(int (__thiscall **)(int, int *))(*(int *)(v4) + 244))(v4, v5);
  }
    return result;
}
}

// ==== BACKFILL 0x005B1AA0  JumpjetLocomotionClass::IsPositionWithinThreshold_0  cls=MechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::IsPositionWithinThreshold_0(int a1, int a2, int a3, int a4)
{
{
    int *v4;
    int v5;
    int v6;
    int v7;
    char v9[12];
    v4 = (int *)(*(int (__stdcall **)(int, char *))(*(int *)(a1) + 24))(a1, v9);
    v5 = v4[2];
    v6 = *v4;
    v7 = v4[1] / 256;
    return (unsigned short)(v6 / 256) == (unsigned short)(a2 / 256)
    && (short)v7 == (unsigned short)(a3 / 256)
    && (int)abs32(v5 - a4) <= DataGlobal_ABEE50;
}
}

// ==== BACKFILL 0x005B1B40  MechLocomotionClass::StubReturn52  cls=MechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int MechLocomotionClass::StubReturn52()
{
return 52;
}

// ==== BACKFILL 0x005B1B50  MechLocomotionClass::ProcessMove  cls=MechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
MechLocomotionClass * MechLocomotionClass::ProcessMove(char a2)
{
{
    *(void**)this = vt_MechLocomotionClass;
    *(this + 1) = &vt_MechLocomotionClass;
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MechLocomotionClass *)this;
}
}

// ==== BACKFILL 0x005B1D90  sub_5B1D90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
double * E4Recv_5B1D90::sub_5B1D90()
{
{
    DWORD v2;
    unsigned int v4;
    double v5;
    *(int *)this = 0;
    v4 = 0;
    this->M4 = 1072693248;
    v2 = sub_5CAF70((LONG *)&v4);
    if ( v2 || v4 )
  {
    v5 = (double)v4;
    Debug::Log();
    *(void**)this = (v5 * 4294967296.0 + (double)v2) * 0.001;
    return this;
  }
    else
  {
    timeBeginPeriod(1u);
    return this;
  }
}
}

// ==== BACKFILL 0x005B2930  Movement::Check  cls=Movement  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Movement::Check(unsigned int * a2, unsigned short * a3)
{
{
    LOWORD(a3) = *(void**)(this) + *a3;
    *a2 = a3;
    return a2;
}
}

// ==== BACKFILL 0x005B2950  Math::Sub16  cls=Math  sig=csp  renamed_refs=0  residual=- ====
IUnknown * Math::Sub16(BuildingTypeClass * aP1, IUnknown * aP2)
{
{
    LOWORD(aP2) = *(void**)this - LOWORD(aP2->field_0);
    *(int *)aP1->vtable0 = aP2;
    return (IUnknown *)aP1;
}
}

// ==== BACKFILL 0x005B2970  Movement::DivideAndStoreScaled  cls=Movement  sig=csp  renamed_refs=0  residual=- ====
int * Movement::DivideAndStoreScaled(int * a2, int a3)
{
{
    LOWORD(a3) = *(void**)this / a3;
    *a2 = a3;
    return a2;
}
}

// ==== BACKFILL 0x005B2990  Math::Abs16Cmp  cls=Math  sig=csp  renamed_refs=0  residual=- ====
bool Math::Abs16Cmp(IUnknown * aP1, IUnknown * aP2)
{
{
    return abs16(aP2->field_0) >= (int)abs16(*(void**)this - LOWORD(aP1->field_0));
}
}

// ==== BACKFILL 0x005B29C0  Movement::CompareAbsCoords  cls=Movement  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int Movement::CompareAbsCoords(void* a2, void* a3) {
{
    short v3;
    short v4;
    short v5;
    v3 = *a3;
    v4 = *a2;
    v5 = *(void**)this;
    if ( abs16(*a3) < (int)abs16(*(void**)this - *a2) )
  {
    if ( (short)(v4 - v5) >= 0 )
    *(void**)this = v5 + v3;
    else
    *(void**)this = v5 - v3;
    return 0;
  }
    else
  {
    *(void**)this = v4;
    return 1;
  }
}
} }

// ==== BACKFILL 0x005B2A30  Movement::UpdateLocomotion  cls=Movement  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void Movement::UpdateLocomotion(void* a1) {
{
      double v3;
      double v4;
      double v5;
      double v6;

      v3 = Math::Sqrt(*this * *this + this->q004 * this->q004);
      v4 = Math::CalcAngle(this->q008, v3);
      v5 = (double)((__int16)Math::RoundToInt((v4 - 1.570796326794897) * -10430.06004058427) - 0x3FFF)
         * -0.00009587672516830327;
      v6 = Math::Sqrt(this->q008 * this->q008 + *this * *this + this->q004 * this->q004);
      if ( v5 != 0.0 )
      {
        *this = *this / Math::ArcTan2(v5);
        this->q004 = this->q004 / Math::ArcTan2(v5);
      }
      *this = Math::ArcTan2((double)(SLOWORD(aP1->field_0) - 0x3FFF) * -0.00009587672516830327) * *this;
      this->q004 = Math::ArcTan2((double)(SLOWORD(aP1->field_0) - 0x3FFF) * -0.00009587672516830327) * this->q004;
      this->q008 = Math::SinCos((double)(SLOWORD(aP1->field_0) - 0x3FFF) * -0.00009587672516830327) * v6;
}
} }

// ==== BACKFILL 0x005B2DA0  RadioClass::Constructor  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int RadioClass::Constructor() {
{
      #72 *v2; // ecx

      ObjectClass::ctor((_DWORD *)this);
      this->currentMission = -1;
      this->suspendedMission = -1;
      this->queuedMission = -1;
      this->missionQueued = 0;
      this->missionStatus = 0;
      this->missionStartTime = 0;
      this->missionData = 0;
      v2 = g_CurrentFrame;
      this->q0D0 = 0;
      this->missionTimer = v2;
      *(_DWORD *)this = &MissionClass::`vftable';
      *(_DWORD *)(this + 4) = &MissionClass::`vftable';
      *(_DWORD *)(this + 8) = &MissionClass::`vftable';
      *(_DWORD *)(this + 12) = &MissionClass::`vftable';
      return this;
}
} } }

// ==== BACKFILL 0x005B2E10  MissionClass::Return450A  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::Return450A()
{
return 450;
}

// ==== BACKFILL 0x005B2E20  MissionClass::Return450B  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::Return450B()
{
return 450;
}

// ==== BACKFILL 0x005B2E30  MissionClass::Return450C  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::Return450C()
{
return 450;
}

// ==== BACKFILL 0x005B2E40  TechnoClass::StubReturn450  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::StubReturn450() { return 0; }

// ==== BACKFILL 0x005B2E50  IPersistStream::StubReturn450  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int IPersistStream::StubReturn450()
{
return 450;
}

// ==== BACKFILL 0x005B2E60  AbstractClass::COMStub_Ret450_134  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Ret450_134()
{
return 450;
}

// ==== BACKFILL 0x005B2E70  TechnoClass::CheckState1  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::CheckState1() const { return false; }

// ==== BACKFILL 0x005B2E80  TechnoClass::CheckState2  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::CheckState2() const { return false; }

// ==== BACKFILL 0x005B2E90  AircraftClass::CheckMissionStatus  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftClass::CheckMissionStatus()
{
return 450;
}

// ==== BACKFILL 0x005B2EA0  AbstractClass::COMStub_Ret450_138  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Ret450_138()
{
return 450;
}

// ==== BACKFILL 0x005B2EB0  AbstractClass::COMStub_Ret450_139  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Ret450_139()
{
return 450;
}

// ==== BACKFILL 0x005B2EC0  AbstractClass::COMStub_Ret450_140  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Ret450_140()
{
  return 450;
}

// ==== BACKFILL 0x005B2ED0  MissionClass::Return450D  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::Return450D()
{
return 450;
}

// ==== BACKFILL 0x005B2EE0  MissionClass::Return450E  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::Return450E()
{
return 450;
}

// ==== BACKFILL 0x005B2EF0  IPersistStream::GetMaxSize  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int IPersistStream::GetMaxSize()
{
return 450;
}

// ==== BACKFILL 0x005B2F00  AbstractClass::COMStub_Ret450_144  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Ret450_144()
{
return 450;
}

// ==== BACKFILL 0x005B2F10  MissionClass::Return450G  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::Return450G()
{
return 450;
}

// ==== BACKFILL 0x005B2F20  MissionClass::Return450H  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::Return450H()
{
return 450;
}

// ==== BACKFILL 0x005B2F30  AircraftClass::CheckMissionStatus2  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftClass::CheckMissionStatus2()
{
return 450;
}

// ==== BACKFILL 0x005B2F40  MissionClass::Return450I  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::Return450I()
{
return 450;
}

// ==== BACKFILL 0x005B2F50  MissionClass::Return450J  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::Return450J()
{
return 450;
}

// ==== BACKFILL 0x005B2F60  AbstractClass::COMStub_Ret450_150  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Ret450_150()
{
return 450;
}

// ==== BACKFILL 0x005B2F70  AbstractClass::COMStub_Ret450_151  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Ret450_151()
{
return 450;
}

// ==== BACKFILL 0x005B2F80  MissionClass::Return450K  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::Return450K()
{
return 450;
}

// ==== BACKFILL 0x005B2F90  MissionClass::Return450L  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::Return450L()
{
return 450;
}

// ==== BACKFILL 0x005B2FA0  MissionClass::Return450F  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::Return450F()
{
return 450;
}

// ==== BACKFILL 0x005B2FB0  MissionClass::Return450M  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::Return450M()
{
return 450;
}

// ==== BACKFILL 0x005B2FC0  MissionClass::Return450N  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::Return450N()
{
return 450;
}

// ==== BACKFILL 0x005B2FD0  MissionClass::ForceMission  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int MissionClass::ForceMission() {
{
    int result;
    int *v2;
    int v3;
    int v4;
    result = v4;
    if ( this->currentMission != 28 || v4 != 5 )
  {
    this->currentMission = v4;
    this->queuedMission = -1;
    this->missionQueued = 0;
    this->missionStatus = 0;
    this->missionStartTime = g_CurrentFrame;
    this->missionData = 0;
    v2 = (int *)((char *)(this) + 200);
    *v2 = g_CurrentFrame;
    v2[1] = v3;
    v2[2] = 0;
    return v3;
  }
    return result;
}
} } }

// ==== BACKFILL 0x005B3040  MissionClass::GetPrimaryOrFallback  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int ra2::game::MissionClass::GetPrimaryOrFallback() {
    int result = this->currentMission;
    if ( result == -1 )
        return this->queuedMission;
    return result;

/* ASM:
mov     eax, [ecx+0ACh]
cmp     eax, 0FFFFFFFFh
jnz     short locret_5B3051
mov     eax, [ecx+0B4h]

locret_5B3051:                          ; CODE XREF: MissionClass__GetPrimaryOrFallback+9↑j
retn
*/
}

// ==== BACKFILL 0x005B3570  MissionClass::NextMission  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int MissionClass::NextMission() {
{
      int result;
      wchar_t *v2;
      int v3;

      result = this->queuedMission;
      if ( result == -1 )
      {
        LOBYTE(result) = 0;
      }
      else
      {
        this->currentMission = result;
        this->queuedMission = -1;
        v2 = g_CurrentFrame;
        this->missionStatus = 0;
        this->missionTimer = v2;
        this->q0CC = v3;
        this->q0D0 = 0;
        result = (int)g_CurrentFrame;
        this->missionStartTime = g_CurrentFrame;
        this->missionData = 0;
        this->missionQueued = 0;
        LOBYTE(result) = 1;
      }
      return result;
}
} } }

// ==== BACKFILL 0x005B35E0  MissionClass::QueueMission  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int MissionClass::QueueMission() {
{
    int result;
    int v3;
    int v4;
    int v5;
    char v6;
    result = v5;
    v3 = this->currentMission;
    if ( (v3 != 28 || v5 != 5) && v3 != 19 )
  {
    if ( v5 != -1 )
    {
    if ( v3 != v5 || (v4 = this->queuedMission, v4 != v5) && v4 != -1 )
      {
    this->queuedMission = v5;
    this->missionQueued = 0;
      }
    }
    LOBYTE(result) = v6;
    if ( v6 )
    {
    result = this->isMissionDone();
    if ( (char)result )
    return this->nextMission();
    }
  }
    return result;
}
} }

// ==== BACKFILL 0x005B3650  AbstractClass::COMStub_125  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::COMStub_125(int a1, int a2, int a3) {
{
    int result;
    int v5;
    result = this->psychicDetectionCapacity;
    if ( (result != 28 || a2 != 5) && result != 19 )
  {
    v5 = this->productionFactory_plants_count;
    if ( v5 == -1 )
    {
    this->productionFactory_plants = result;
    this->psychicDetectionCapacity = a2;
    }
    else
    {
    this->psychicDetectionCapacity = a2;
    this->productionFactory_plants = v5;
    }
    this->productionFactory_plants_capacity = 0;
  }
    return result;
}
} } }

// ==== BACKFILL 0x005B36B0  AbstractClass::COMStub_126  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::COMStub_126() {
{
    int v1;
    v1 = this->productionFactory_plants;
    if ( v1 == -1 )
    return 0;
    this->psychicDetectionCapacity = v1;
    this->productionFactory_plants = -1;
    this->productionFactory_plants_capacity = 0;
    return 1;
}
} } }

// ==== BACKFILL 0x005B3700  MissionClass::FindName  cls=MissionClass  sig=csp  renamed_refs=2  residual=q005,q006,q007,q009 ====
namespace ra2 { namespace game { void* MissionClass::FindName() {
{
      this->vtable2 = 0;
      this->q005 = 0;
      this->q007 = 0;
      this->q006 = 1;
      this->vtable3 = 1;
      this->q009 = 1;
      this->uniqueId = -755914244;
      this->nextArrayIndex = -755914244;
      *(_DWORD *)this = -1;
      this->abstractFlags = 1066426957;
      this->referenceCount = 1066426957;
      return this;
}
} } }

// ==== BACKFILL 0x005B3950  FromNameIndex  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * Name_FromIndex(int a1)
{
{
    if ( a1 == -1 )
    return g_Str__none_;
    else
    return DataGlobal_816CAC[a1];
}
}

// ==== BACKFILL 0x005B3970  AbstractClass::COMStub_13  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::COMStub_13(int a1) {
{
    HouseClass::ProcessPower((#374 *)this);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    Power::TimerProcess(aP1);
    return Power::TimerProcess(aP1);
}
} } }

// ==== BACKFILL 0x005B3A00  MissionClass::GetMissionControl  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* MissionClass::GetMissionControl() {
{
    return (char *)&DataGlobal_A8E3A8 + 32 *(void**)this->currentMission;
}
} } }

// ==== BACKFILL 0x005B3A10  MissionClass::HasValidTarget  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::HasValidTarget()
{
{
    return this->suspendedMission != -1;
}
}

// ==== BACKFILL 0x005B3A50  IPersistStream::StubReturnFalse  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int IPersistStream::StubReturnFalse()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x005B3A60  AbstractClass::getWeaponRange  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
MissionClass * AbstractClass::getWeaponRange(char a2)
{
{
    *(void**)this = vt_MissionClass;
    *(this + 1) = (unsigned int)vt_MissionClass;
    *(this + 2) = (unsigned int)vt_MissionClass;
    *(this + 3) = &vt_MissionClass;
    ObjectClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MissionClass *)this;
}
}

// ==== BACKFILL 0x005B3E90  sub_5B3E90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_5B3E90::sub_5B3E90()
{
{
    int i;
    ObjectClass Filename;
    char Ext[256];
    char Buffer[260];
    for ( i = (int)*(&g_MatrixTransformState + 116); ; i = *(int *)(i + 4) )
  {
    if ( !i || !*(int *)(i + 4) || !*(int *)(i + 8) )
    return 0;
    _splitpath(*(const char **)(i + 12), 0, 0, &Filename, Ext);
    _makepath(Buffer, 0, 0, &Filename, Ext);
    if ( !_strcmpi(Buffer, this) )
    break;
  }
    if ( *(int *)(i + 36) )
  {
    if ( *(char *)(i + 18) )
    __3_YAXPAX_Z(*(void **)(i + 36));
  }
    *(int *)(i + 36) = 0;
    *(char *)(i + 18) = 0;
    return 1;
}
}

// ==== BACKFILL 0x005B3F50  sub_5B3F50  cls=MixFileClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_5B3F50::sub_5B3F50()
{
{
    void *v2;
    void *v3;
    int v4;
    int v5;
    int v6;
    int v7;
    v2 = (void *)this->M12;
    *(int *)this = &vt_MixFileClass;
    if ( v2 )
    free(v2);
    if ( this->M36 && (unsigned char)this->M18 )
  {
    __3_YAXPAX_Z(*((void **)(this) + 9));
    this->M18 = 0;
  }
    v3 = (void *)this->M32;
    this->M36 = 0;
    if ( v3 )
  {
    __3_YAXPAX_Z(v3);
    this->M32 = 0;
  }
    if ( this )
  {
    v4 = this->M4;
    if ( v4 )
    {
    v5 = this->M8;
    if ( v5 )
      {
    *(int *)(v5 + 4) = v4;
    *(int *)(this->M4 + 8) = this->M8;
    this->M8 = 0;
    this->M4 = 0;
      }
    }
  }
    *(int *)this = &vt_GenericNode;
    if ( this )
  {
    v6 = this->M4;
    if ( v6 )
    {
    v7 = this->M8;
    if ( v7 )
      {
    *(int *)(v7 + 4) = v6;
    *(int *)(this->M4 + 8) = this->M8;
    this->M8 = 0;
    this->M4 = 0;
      }
    }
  }
}
}

// ==== BACKFILL 0x005B4350  sub_5B4350  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5B4350::sub_5B4350()
{
{
    int i;
    ObjectClass Filename;
    char Ext[256];
    char Buffer[260];
    for ( i = (int)*(&g_MatrixTransformState + 116); i && *(int *)(i + 4) && *(int *)(i + 8); i = *(int *)(i + 4) )
  {
    _splitpath(*(const char **)(i + 12), 0, 0, &Filename, Ext);
    _makepath(Buffer, 0, 0, &Filename, Ext);
    if ( !_strcmpi(Buffer, this) )
    return i;
  }
    return 0;
}
}

// ==== BACKFILL 0x005B43E0  ?do_always_noconv_codecvt_base_std__MBE_NXZ_7  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char _do_always_noconv_codecvt_base_std__MBE_NXZ_7()
{
return 1;
}

// ==== BACKFILL 0x005B43F0  ReturnTrue  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char ReturnTrue(AnimClass * aP0)
{
return 1;
}

// ==== BACKFILL 0x005B4400  sub_5B4400  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_5B4400::sub_5B4400()
{
{
    if ( this->M36 && (unsigned char)this->M18 )
    __3_YAXPAX_Z(*(void **)(this + 36));
    this->M36 = 0;
    this->M18 = 0;
}
}

// ==== BACKFILL 0x005B4590  MixFileClass::LinkIntoPool  cls=MixFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void MixFileClass::LinkIntoPool() {
{
    int v1;
    int v2;
    if ( this )
  {
    v1 = this->Previous;
    if ( v1 )
    {
    v2 = this->Blowfish;
    if ( v2 )
      {
    *(int *)(v2 + 4) = v1;
    *(int *)(this->Previous + 8) = this->Blowfish;
    this->Blowfish = 0;
    this->Previous = 0;
      }
    }
  }
}
} }

// ==== BACKFILL 0x005B4610  MixFileClass::UnlinkFromPool  cls=MixFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* MixFileClass::UnlinkFromPool(int a2) {
{
    COMObject::Release(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
} }

// ==== BACKFILL 0x005B56F0  Game::processStartup  cls=Game  sig=csp  renamed_refs=0  residual=- ====
void Game::processStartup()
{
{
    HWND DlgItem;
    HWND v3;
    HWND v4;
    HWND v5;
    LRESULT v6;
    char lParam[40];
    Debug::Log();
    DlgItem = GetDlgItem(*(void**)this, 1473);
    if ( DlgItem )
  {
    SendMessageA(DlgItem, 0x4B3u, 0x14u, (LPARAM)lParam);
    CopyWideToChar(g_GameSetupBuffer, lParam, -1);
  }
    Debug::Log();
    v3 = GetDlgItem(*(void**)this, 1029);
    if ( v3 )
    g_TauntCommandState = SendMessageA(v3, 0x147u, 0, 0);
    Debug::Log();
    v4 = GetDlgItem(*(void**)this, 1639);
    v5 = v4;
    if ( v4 )
  {
    v6 = SendMessageA(v4, 0x147u, 0, 0);
    g_CommandExecState = SendMessageA(v5, 0x150u, v6, 0);
  }
    Debug::Log();
}
}

// ==== BACKFILL 0x005B57D0  sub_5B57D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
HWND E4Recv_5B57D0::sub_5B57D0()
{
{
    HWND result;
    HWND v3;
    char *v4;
    unsigned int v5;
    HWND v6;
    int (__usercall *v7)@<eax>(char@<cf>, char@<zf>);
    HWND v8;
    int v9;
    wchar_t *Format;
    int v11[62];
    short v12;
    wchar_t lParam[256];
    wchar_t Buffer[256];
    result = GetDlgItem(*(void**)this, 1344);
    v3 = result;
    if ( result )
  {
    SendMessageA(result, 0x4B3u, 0x100u, (LPARAM)lParam);
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString);
    result = (HWND)wcslen(lParam);
    if ( result )
    {
    if ( lParam[0] != 13 )
      {
    WideString::Trim(lParam);
    result = (HWND)lParam;
    if ( &v9 != (int *)-272 )
        {
    memset(v11, 0, sizeof(v11));
    v12 = 0;
    v11[0] = 104;
    strcpy((char *)&v11[1], g_GameSetupBuffer);
    LOBYTE(v11[6]) = g_TauntCommandState;
    wcscpy((wchar_t *)((char *)&v11[6] + 1), lParam);
    Stream::WriteBlock((int)&g_EventManager, (int)v11, 250, 1);
    Stream::ReadPacket((int)&g_EventManager);
    v4 = CharToWideString(g_GameSetupBuffer);
    v5 = g_TauntCommandState;
    v8 = *(void**)this;
    Format = (wchar_t *)v4;
    result = GetDlgItem(v8, 1343);
    v6 = result;
    if ( result )
          {
    if ( v5 >= 8 )
    v7 = Math::InitDegToRad;
    else
    v7 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))DataGlobal_8316A8[v5];
    swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, lParam);
    return (HWND)DrawDialogText((LPARAM)v7, Buffer, v6);
          }
        }
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x005B5960  sub_5B5960  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_5B5960::sub_5B5960()
{
{
    HWND DlgItem;
    HWND v3;
    DlgItem = GetDlgItem(*(HWND *)this, 1639);
    v3 = DlgItem;
    if ( DlgItem )
  {
    DlgItem = (HWND)SendMessageA(DlgItem, 0x147u, 0, 0);
    if ( DlgItem != HWND_MESSAGE|0x2 )
    {
    g_CommandExecState = SendMessageA(v3, 0x150u, (WPARAM)DlgItem, 0);
    this->M9 = 1;
    this->M8 = 1;
    LOBYTE(DlgItem) = 1;
    }
  }
    return (char)DlgItem;
}
}

// ==== BACKFILL 0x005B5A50  sub_5B5A50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_5B5A50::sub_5B5A50(char a2)
{
{
    HWND DlgItem;
    HWND v4;
    wchar_t lParam[22];
    DlgItem = GetDlgItem(*(HWND *)this, 1473);
    v4 = DlgItem;
    if ( DlgItem )
  {
    SendMessageA(DlgItem, 0x4B3u, 0x15u, (LPARAM)lParam);
    WideString::Trim(lParam);
    if ( !a2 )
    SendMessageA(v4, 0x4B2u, 0, (LPARAM)lParam);
    CopyWideToChar(g_GameSetupBuffer, (char *)lParam, -1);
    this->M9 = 1;
    this->M8 = 1;
    LOBYTE(DlgItem) = 1;
  }
    return (char)DlgItem;
}
}

// ==== BACKFILL 0x005B5E90  Network::SendSettingsRequest  cls=Network  sig=csp  renamed_refs=0  residual=- ====
int Network::SendSettingsRequest()
{
{
    HWND DlgItem;
    int v3[62];
    short v4;
    DlgItem = GetDlgItem(*(void**)this, 1);
    if ( DlgItem )
    EnableWindow(DlgItem, 0);
    memset(v3, 0, sizeof(v3));
    v4 = 0;
    v3[0] = 116;
    return Stream::WriteBlock((int)&g_EventManager, (int)v3, 250, 1);
}
}

// ==== BACKFILL 0x005B6DA0  sub_5B6DA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_5B6DA0::sub_5B6DA0(wchar_t * Source)
{
{
    char *v3;
    unsigned int v4;
    HWND DlgItem;
    int (__usercall *v6)@<eax>(char@<cf>, char@<zf>);
    wchar_t *Format;
    int v8[62];
    short v9;
    wchar_t Buffer[256];
    if ( Source )
  {
    memset(v8, 0, sizeof(v8));
    v9 = 0;
    v8[0] = 104;
    strcpy((char *)&v8[1], g_GameSetupBuffer);
    LOBYTE(v8[6]) = g_TauntCommandState;
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source);
    Stream::WriteBlock((int)&g_EventManager, (int)v8, 250, 1);
    Stream::ReadPacket((int)&g_EventManager);
    v3 = CharToWideString(g_GameSetupBuffer);
    v4 = g_TauntCommandState;
    Format = (wchar_t *)v3;
    DlgItem = GetDlgItem(*(void**)this, 1343);
    if ( DlgItem )
    {
    if ( v4 >= 8 )
    v6 = Math::InitDegToRad;
    else
    v6 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))DataGlobal_8316A8[v4];
    swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source);
    DrawDialogText((LPARAM)v6, Buffer, DlgItem);
    }
  }
}
}

// ==== BACKFILL 0x005B9250  sub_5B9250  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
HWND E4Recv_5B9250::sub_5B9250()
{
{
    HWND result;
    HWND v3;
    char *v4;
    unsigned int v5;
    HWND v6;
    int (__usercall *v7)@<eax>(char@<cf>, char@<zf>);
    HWND v8;
    int v9;
    wchar_t *Format;
    int v11[62];
    short v12;
    wchar_t lParam[256];
    wchar_t Buffer[256];
    memset(lParam, 0, sizeof(lParam));
    result = GetDlgItem(*(void**)this, 1344);
    v3 = result;
    if ( result )
  {
    SendMessageA(result, 0x4B3u, 0x100u, (LPARAM)lParam);
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString);
    result = (HWND)wcslen(lParam);
    if ( result )
    {
    if ( lParam[0] != 13 )
      {
    WideString::Trim(lParam);
    result = (HWND)lParam;
    if ( &v9 != (int *)-272 )
        {
    memset(v11, 0, sizeof(v11));
    v12 = 0;
    v11[0] = 104;
    strcpy((char *)&v11[1], g_GameSetupBuffer);
    LOBYTE(v11[6]) = g_TauntCommandState;
    wcscpy((wchar_t *)((char *)&v11[6] + 1), lParam);
    Stream::WriteBlock((int)&g_EventManager, (int)v11, 250, 1);
    Stream::ReadPacket((int)&g_EventManager);
    v4 = CharToWideString(g_GameSetupBuffer);
    v5 = g_TauntCommandState;
    v8 = *(void**)this;
    Format = (wchar_t *)v4;
    result = GetDlgItem(v8, 1343);
    v6 = result;
    if ( result )
          {
    if ( v5 >= 8 )
    v7 = Math::InitDegToRad;
    else
    v7 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))DataGlobal_8316A8[v5];
    swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, lParam);
    return (HWND)DrawDialogText((LPARAM)v7, Buffer, v6);
          }
        }
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x005B93F0  sub_5B93F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_5B93F0::sub_5B93F0()
{
{
    HWND DlgItem;
    HWND v3;
    DlgItem = GetDlgItem(*(HWND *)this, 1639);
    v3 = DlgItem;
    if ( DlgItem )
  {
    DlgItem = (HWND)SendMessageA(DlgItem, 0x147u, 0, 0);
    if ( DlgItem != HWND_MESSAGE|0x2 )
    {
    DlgItem = (HWND)SendMessageA(v3, 0x150u, (WPARAM)DlgItem, 0);
    if ( DlgItem != HWND_MESSAGE|0x2 )
      {
    g_CommandExecState = (int)DlgItem;
    this->M9 = 1;
    this->M8 = 1;
    LOBYTE(DlgItem) = 1;
      }
    }
  }
    return (char)DlgItem;
}
}

// ==== BACKFILL 0x005B9450  sub_5B9450  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int E4Recv_5B9450::sub_5B9450()
{
{
    unsigned int result;
    HWND v3;
    result = (unsigned int)GetDlgItem(*(HWND *)this, 1029);
    v3 = (HWND)result;
    if ( result )
  {
    result = SendMessageA((HWND)result, 0x147u, 0, 0);
    if ( result != -1 )
    {
    g_TauntCommandState = result;
    this->M9 = 1;
    this->M8 = 1;
    if ( result >= 8 )
    return SendMessageA(v3, 0x498u, 0, (LPARAM)Math::InitDegToRad);
    else
    return SendMessageA(v3, 0x498u, 0, DataGlobal_8316A8[result]);
    }
  }
    return result;
}
}

// ==== BACKFILL 0x005B94C0  sub_5B94C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_5B94C0::sub_5B94C0(char a2)
{
{
    HWND DlgItem;
    HWND v4;
    wchar_t lParam[20];
    DlgItem = GetDlgItem(*(HWND *)this, 1473);
    v4 = DlgItem;
    if ( DlgItem )
  {
    SendMessageA(DlgItem, 0x4B3u, 0x14u, (LPARAM)lParam);
    WideString::Trim(lParam);
    if ( !a2 )
    SendMessageA(v4, 0x4B2u, 0, (LPARAM)lParam);
    strcpy(g_GameSetupBuffer, ToWideStringChar((char *)lParam));
    this->M9 = 1;
    this->M8 = 1;
    LOBYTE(DlgItem) = 1;
  }
    return (char)DlgItem;
}
}

// ==== BACKFILL 0x005BA660  Game::BuildGameSetupPacket  cls=Game  sig=csp  renamed_refs=0  residual=- ====
int Game::BuildGameSetupPacket()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BuildGameSetupPacket(int this)
{
  HWND DlgItem; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // dl
  unsigned int v9; // eax
  _DWORD v11[62]; // [esp+8h] [ebp-168h] BYREF
  __int16 v12; // [esp+100h] [ebp-70h]
  int v13[22]; // [esp+104h] [ebp-6Ch] BYREF
  _BYTE v14[12]; // [esp+15Ch] [ebp-14h] BYREF
  int v15; // [esp+168h] [ebp-8h]

  Debug::Log(); /*0x5ba66f*/
  DlgItem = GetDlgItem(*(HWND *)this, 1); /*0x5ba67e*/
  EnableWindow(DlgItem, 0); /*0x5ba685*/
  v3 = *(_DWORD *)(this + 88); /*0x5ba696*/
  memset(v11, 0, sizeof(v11)); /*0x5ba699*/
  v4 = *(_DWORD *)(this + 84); /*0x5ba69b*/
  v12 = 0; /*0x5ba69e*/
  v5 = *(_DWORD *)(this + 92); /*0x5ba6a0*/
  v11[0] = 101; /*0x5ba6a3*/
  *(_DWORD *)((char *)&v11[33] + 2) = v4; /*0x5ba6ab*/
  v11[53] = v3; /*0x5ba6b2*/
  v11[52] = v5; /*0x5ba6b9*/
  v11[54] = GameOptions::GetEntry(); /*0x5ba6ca*/
  *(_DWORD *)((char *)&v11[7] + 2) = NetworkBuffer::GetField2(&MEMORY[0xA8ECE0]); /*0x5ba6db*/
  v6 = NetworkBuffer::GetField3(&MEMORY[0xA8ECE0]); /*0x5ba6df*/
  *(_DWORD *)((char *)&v11[36] + 2) = MEMORY[0xA8ED94]; /*0x5ba6f0*/
  *(_DWORD *)((char *)&v11[37] + 2) = MEMORY[0xA8E960]; /*0x5ba6fd*/
  *(_DWORD *)((char *)&v11[8] + 2) = v6; /*0x5ba70a*/
  BYTE2(v11[40]) = MEMORY[0xA8B268]; /*0x5ba71b*/
  v7 = *(_DWORD *)((char *)&v11[35] + 2); /*0x5ba739*/
  LOBYTE(v7) = BYTE2(v11[35]) & 0xF; /*0x5ba744*/
  *(_DWORD *)((char *)&v11[35] + 2) = v7 /*0x5ba750*/
                                    | (16
                                     * (MEMORY[0xA8B262] & 1
                                      | (2
                                       * (MEMORY[0xA8B263] & 1
                                        | (2 * (MEMORY[0xA8B264] & 1 | (2 * (MEMORY[0xA8B26C] & 1))))))));
  LOBYTE(v11[6]) = MEMORY[0xA8DB30]; /*0x5ba75d*/
  v8 = MEMORY[0xA8B394]; /*0x5ba776*/
  strcpy((char *)&v11[1], MEMORY[0xA8B380]); /*0x5ba77f*/
  BYTE1(v11[7]) = v8; /*0x5ba793*/
  *(_DWORD *)((char *)&v11[6] + 1) = MEMORY[0xA8B3AC]; /*0x5ba797*/
  *(_DWORD *)((char *)&v11[31] + 2) = MEMORY[0xA8B25C]; /*0x5ba79b*/
  v9 = *(_DWORD *)((char *)&v11[32] + 2) & 0xFFFFFFFE | MEMORY[0xA8B258] & 1; /*0x5ba7bd*/
  LOBYTE(v9) = BYTE2(v11[32]) & 0xF8 | MEMORY[0xA8B258] & 1; /*0x5ba7cc*/
  *(_DWORD *)((char *)&v11[32] + 2) = v9 | (2 * (MEMORY[0xA8B260] & 1 | (2 * (MEMORY[0xA8B261] & 1)))); /*0x5ba7f7*/
  LOBYTE(v11[35]) = MEMORY[0xA8B274]; /*0x5ba819*/
  *(_DWORD *)((char *)&v11[35] + 2) = *(_DWORD *)((char *)&v11[35] + 2) & 0xFFFFFFF1 /*0x5ba828*/
                                    | (4 * (MEMORY[0xA8B320] & 1)) & 0xF5
                                    | (2 * (MEMORY[0xA8B31D] & 1 | (4 * (MEMORY[0xA8B31F] & 1))));
  BYTE1(v11[35]) = MEMORY[0xA8B278]; /*0x5ba835*/
  BYTE2(v11[34]) = g_RulesInitConfig; /*0x5ba842*/
  HIBYTE(v11[34]) = MEMORY[0xA8B270]; /*0x5ba84e*/
  wcscpy((wchar_t *)&v11[9] + 1, *(const wchar_t **)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254])); /*0x5ba85e*/
  CCFileClass::Construct(v13, (char *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 88)); /*0x5ba87f*/
  *(_DWORD *)((char *)&v11[39] + 2) = CCFileClass::GetSize(v13); /*0x5ba896*/
  strncpy((char *)&v11[40] + 3, (const char *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 88), 0xDu); /*0x5ba8b3*/
  strncpy((char *)&v11[44], (const char *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 348), 0x20u); /*0x5ba8d7*/
  *(_DWORD *)((char *)&v11[32] + 2) = *(_DWORD *)((char *)&v11[32] + 2) & 0xFFFFFFEF /*0x5ba90c*/
                                    | (16 * (*(_BYTE *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 380) & 1));
  Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v11, 250, 1); /*0x5ba91d*/
  v13[0] = (int)&vt_CCFileClass; /*0x5ba929*/
  v15 = 0; /*0x5ba934*/
  Vector::Clear((int)v14); /*0x5ba93f*/
  v13[0] = (int)&off_7E1668; /*0x5ba94b*/
  return BufferIOFileClass::Dtor(v13); /*0x5ba95b*/
}
}

// ==== BACKFILL 0x005BA970  NetworkGameSetup::SendGameSetupPacket  cls=NetworkGameSetup  sig=csp  renamed_refs=0  residual=- ====
void NetworkGameSetup::SendGameSetupPacket(wchar_t * Source)
{
{
    char *v3;
    unsigned int v4;
    HWND DlgItem;
    int (__usercall *v6)@<eax>(char@<cf>, char@<zf>);
    wchar_t *Format;
    int v8[62];
    short v9;
    wchar_t Buffer[256];
    if ( Source )
  {
    memset(v8, 0, sizeof(v8));
    v9 = 0;
    v8[0] = 104;
    strcpy((char *)&v8[1], g_GameSetupBuffer);
    LOBYTE(v8[6]) = g_TauntCommandState;
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source);
    Stream::WriteBlock((int)&g_EventManager, (int)v8, 250, 1);
    Stream::ReadPacket((int)&g_EventManager);
    v3 = CharToWideString(g_GameSetupBuffer);
    v4 = g_TauntCommandState;
    Format = (wchar_t *)v3;
    DlgItem = GetDlgItem(*(void**)this, 1343);
    if ( DlgItem )
    {
    if ( v4 >= 8 )
    v6 = Math::InitDegToRad;
    else
    v6 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))DataGlobal_8316A8[v4];
    swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source);
    DrawDialogText((LPARAM)v6, Buffer, DlgItem);
    }
  }
}
}

// ==== BACKFILL 0x005BAA80  sub_5BAA80  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_5BAA80::sub_5BAA80(wchar_t * Format, unsigned int a3, int a4)
{
{
    HWND DlgItem;
    int (__usercall *v5)@<eax>(char@<cf>, char@<zf>);
    wchar_t Buffer[256];
    if ( a4 )
  {
    DlgItem = GetDlgItem(*(void**)this, 1343);
    if ( DlgItem )
    {
    if ( a3 >= 8 )
    v5 = Math::InitDegToRad;
    else
    v5 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))DataGlobal_8316A8[a3];
    swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, a4);
    DrawDialogText((LPARAM)v5, Buffer, DlgItem);
    }
  }
}
}

// ==== BACKFILL 0x005BB560  NetworkGameSetup::DeleteComPtr  cls=NetworkGameSetup  sig=csp  renamed_refs=0  residual=- ====
unsigned int * NetworkGameSetup::DeleteComPtr(char a2)
{
{
    ComPtr::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x005BB580  Network_Find  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HKEY sub_5BB580(HKEY a1, const CHAR * a2, const char * a3)
{
{
    HKEY v3;
    DWORD v4;
    CHAR *v5;
    HKEY RegistrySubKey;
    int v7;
    DWORD v9;
    LPBYTE lpData;
    DWORD cchName;
    DWORD cbData;
    LPCSTR lpValueName;
    DWORD Type;
    HKEY v15;
    struct _FILETIME ftLastWriteTime;
    v3 = a1;
    lpValueName = a2;
    v15 = a1;
    v4 = 0;
    v5 = (CHAR *)__2_YAPAXI_Z(0x100u);
    lpData = (LPBYTE)__2_YAPAXI_Z(0x100u);
    cbData = 256;
    while ( 1 )
  {
    v9 = v4;
    cchName = 256;
    ++v4;
    if ( RegEnumKeyExA(v3, v9, v5, &cchName, 0, 0, 0, &ftLastWriteTime) )
    break;
    RegistrySubKey = FindRegistrySubKey(v3, v5, 0);
    if ( RegistrySubKey )
    {
    cbData = 256;
    if ( !RegQueryValueExA(RegistrySubKey, lpValueName, 0, &Type, lpData, &cbData) && Type == 1 && !strcmp((const char *)lpData, a3) )
      {
    __3_YAXPAX_Z(v5);
    __3_YAXPAX_Z(lpData);
    return RegistrySubKey;
      }
    v7 = Network_Find(a3);
    RegCloseKey(RegistrySubKey);
    if ( v7 )
      {
    __3_YAXPAX_Z(v5);
    __3_YAXPAX_Z(lpData);
    return (HKEY)v7;
      }
    v3 = v15;
    }
  }
    __3_YAXPAX_Z(v5);
    __3_YAXPAX_Z(lpData);
    return 0;
}
}

// ==== BACKFILL 0x005BC4D0  sub_5BC4D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_5BC4D0()
{
{
    int *v0;
    char *v1;
    int v2;
    int v3;
    char *v4;
    int *v5;
    int v6;
    char result;
    v0 = DataGlobal_ABF168;
    do
  {
    v1 = (char *)*v0;
    v2 = 0;
    v3 = *v0 + 2000;
    do
    {
    v4 = &v1[v2];
    v5 = (int *)v3;
    v6 = 80;
    do
      {
    *v4 = 32;
    *v5 = 0;
    v5 += 25;
    v4 += 25;
    --v6;
      }
    while ( v6 );
    ++v2;
    v3 += 4;
    }
    while ( v2 < 25 );
    v1[10036] = 1;
    result = Text::DrawRepeated(v1, 0, 0, 80, 25);
    ++v0;
  }
    while ( (int)v0 < (int)&DataGlobal_ABF188 );
    return result;
}
}

// ==== BACKFILL 0x005BCB90  sub_5BCB90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_5BCB90::sub_5BCB90(int a2)
{
{
    int v3;
    int *v4;
    char *v5;
    int *v6;
    int v7;
    v3 = 0;
    this->M10008 = a2;
    this->M10012 = 0;
    this->M10016 = 0;
    this->M10020 = 0;
    this->M10024 = 0;
    this->M10028 = 80;
    this->M10032 = 25;
    v4 = (int *)(this + 2000);
    do
  {
    v5 = (char *)(v3 + this);
    v6 = v4;
    v7 = 80;
    do
    {
    *v5 = 32;
    *v6 = 0;
    v6 += 25;
    v5 += 25;
    --v7;
    }
    while ( v7 );
    ++v3;
    ++v4;
  }
    while ( v3 < 25 );
    this->M10036 = 1;
    Text::DrawRepeated((void *)this, 0, 0, 80, 25);
    return (ObjectClass *)this;
}
}

// ==== BACKFILL 0x005BCC30  sub_5BCC30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5BCC30::sub_5BCC30()
{
{
    return this->M10008;
}
}

// ==== BACKFILL 0x005BCC60  sub_5BCC60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5BCC60::sub_5BCC60(int a2, int a3, int a4, int a5)
{
{
    this->M10020 = a2;
    this->M10024 = a3;
    this->M10028 = a4;
    this->M10032 = a5;
    return a4;
}
}

// ==== BACKFILL 0x005BCCE0  sub_5BCCE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_5BCCE0::sub_5BCCE0()
{
{
    return this->M10036;
}
}

// ==== BACKFILL 0x005BD1F0  Debug::Printf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char Debug::Printf()
{
{
    char result;
    char Buffer[256];
    int v3;
    char *Format;
    char ArgList;
    result = g_MiscFlag;
    if ( g_MiscFlag )
  {
    vsprintf(Buffer, Format, &ArgList);
    Buffer[255] = 0;
    return Debug::ScrollText(v3, Buffer);
  }
    return result;
}
}

// ==== BACKFILL 0x005BD2E0  sub_5BD2E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_5BD2E0::sub_5BD2E0(ObjectClass * aP1, int a3, int a4, int a5)
{
{
    char result;
    CellStruct Buffer;
    result = *((char *)&(&g_MatrixTransformState)[22] + 10);
    if ( *((char *)&(&g_MatrixTransformState)[22] + 10) )
  {
    this->M10012 = a3;
    this->M10016 = a4;
    if ( *((char *)&(&g_MatrixTransformState)[22] + 10) )
    this->M10000 = a5;
    sprintf((char *const)&Buffer, &DataGlobal_82D020, (INIClass *)aP1);
    return Debug::ScrollText((int)this, &Buffer);
  }
    return result;
}
}

// ==== BACKFILL 0x005BD360  Debug_Helper  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char Debug_Helper(ObjectClass * aP0)
{
{
    char result;
    result = (char)aP0;
    switch ( (char)aP0 )
  {
    case 0xA: return 32;
    case 0xB3: return 124;
    case 0xC4: return 45;
    case 0xCD: return 61;
    case 0xDA: case 0xC2: case 0xBF: case 0xC6: case 0xC3: case 0xD1: case 0xC5: case 0xD8: case 0xB5: case 0xC0: case 0xC1: case 0xD9: case 0xD5: case 0xB4: return 43;
  }
    return result;
}
}

// ==== BACKFILL 0x005BD560  sub_5BD560  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_5BD560::sub_5BD560()
{
{
    *(char *)this = 0;
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 0;
    return this;
}
}

// ==== BACKFILL 0x005BDA40  sub_5BDA40  cls=MouseClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char * E4Recv_5BDA40::sub_5BDA40()
{
{
    SmallFunc_692290((int)this);
    *(void**)this = vt_MouseClass;
    this->M21852 = 0;
    this->M21856 = 0;
    this->M21860 = 0;
    this->M21864 = 0;
    this->M21784 = &vt_MouseClass;
    return this;
}
}

// ==== BACKFILL 0x005BDAB0  MouseClass::SetPosition  cls=MouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int MouseClass::SetPosition(int a1) {
{
      char result;
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      _DWORD v8[2];
      int v9;

      result = this->q555C;
      if ( result != a2 )
      {
        v3 = this->q5560;
        this->q555C = a2;
        if ( !a2 || DataGlobal_82D034[7 * v3] == -1 )
          v9 = MouseClass_Cursors[7 * v3];
        else
          v9 = DataGlobal_82D034[7 * v3];
        v4 = DataGlobal_82D03C[7 * v3];
        v5 = 0;
        v6 = 0;
        if ( v4 == 12345 )
          v5 = *((__int16 *)DataGlobal_ABF294 + 1) / 2;
        if ( v4 == 54321 )
          v5 = *((__int16 *)DataGlobal_ABF294 + 1);
        v7 = DataGlobal_82D040[7 * v3];
        if ( v7 == 12345 )
          v6 = *((__int16 *)DataGlobal_ABF294 + 2) / 2;
        if ( v7 == 54321 )
          v6 = *((__int16 *)DataGlobal_ABF294 + 2);
        v8[1] = v6;
        v8[0] = v5;
        return (*(int (__thiscall **)(int, _DWORD *, void *, int))(*(_DWORD *)g_WWMouseClass_Instance + 4))(
                 g_WWMouseClass_Instance,
                 v8,
                 DataGlobal_ABF294,
                 v9 + this->q5568);
      }
      return result;
}
} }

// ==== BACKFILL 0x005BDB90  System_Handle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5BDB90(int a1, char a2)
{
{
    int result;
    if ( !a2 )
    return MouseClass_Cursors[7 * a1];
    result = DataGlobal_82D034[7 * a1];
    if ( result == -1 )
    return MouseClass_Cursors[7 * a1];
    return result;
}
}

// ==== BACKFILL 0x005BDF30  MouseClass::LoadTypeData  cls=MouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* MouseClass::LoadTypeData() {
{
    void *result;
    BlowStraw_29::Stub(this);
    result = LoadFileSHP(g_Str_File_MOUSE_SHA, (bool *)&DataGlobal_ABF2DC);
    DataGlobal_ABF294 = result;
    return result;
}
} }

// ==== BACKFILL 0x005BDF50  MouseClass::HandleClick  cls=MouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int MouseClass::HandleClick() {
{
      HouseClass::InitSubsystems((_BYTE *)this);
      this->q555C = 0;
      this->q5564 = 0;
      return 0;
}
} }

// ==== BACKFILL 0x005BE970  Render_Render_5BE970  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5BE970(int a1)
{
{
    return MouseClass_Cursors[7 * a1];
}
}

// ==== BACKFILL 0x005BE990  Render_Render_5BE990  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5BE990(int a1)
{
{
    return DataGlobal_82D02C[7 * a1];
}
}

// ==== BACKFILL 0x005BE9B0  MouseClass::drawCursor  cls=MouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* MouseClass::drawCursor(int a1) {
{
      UI_Init((int)this, a2);
      *(this + 5446) = &vt_INoticeSink;
      *this = &TabClass::`vftable';
      *(this + 5446) = &TabClass::`vftable';
      return this;
}
} }

// ==== BACKFILL 0x005BE9E0  BlowStraw_29::Read  cls=TabClass  sig=csp  renamed_refs=0  residual=- ====
TabClass * BlowStraw_29::Read(char a2)
{
{
    char *v3;
    int v4;
    v3 = this + 21484;
    v4 = 4;
    do
  {
    v3 -= 3988;
    Array::ForEachReverse((int)v3, 52, 75, (int (__thiscall *)(int))nullsub_56);
    --v4;
  }
    while ( v4 );
    RadarClass::Destruct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TabClass *)this;
}
}

// ==== BACKFILL 0x005BEA30  MouseClass::loadCursor  cls=MouseClass  sig=csp  renamed_refs=7  residual=- ====
namespace gamemd { void* MouseClass::loadCursor(int a2, int a3) {
{
    void *v4;
    this->MouseClass_field_0x4 = 0;
    this->MouseClass_field_0x8 = a2;
    this->MouseClass_field_0xC = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_HashObject_unsigned_int_unsigned_int;
    if ( a2 )
  {
    if ( a3 )
    {
    this->MouseClass_field_0x4 = a3;
    }
    else
    {
    v4 = __2_YAPAXI_Z(8 * a2);
    if ( !v4 )
    v4 = 0;
    this->MouseClass_field_0x4 = v4;
    this->IsAllocated = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_HashObject_unsigned_int_unsigned_int;
    this->MouseClass_field_0x14 = 10;
    this->MouseClass_field_0x10 = 0;
    return this;
}
} }

// ==== BACKFILL 0x005BECC0  sub_5BECC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5BECC0::sub_5BECC0()
{
{
    int v1;
    int result;
    char *v3;
    int v4;
    int v5;
    char *v6;
    char v7;
    v1 = 0;
    result = 256 - (int)this;
    v3 = this;
    do
  {
    v4 = v1 + 1;
    v5 = v1 + 1;
    if ( v1 + 1 < 256 )
    {
    v6 = &v3[result + v1 + (int)this];
    do
      {
    v7 = *v6;
    v6 += 256;
    v3[v5++] = v7;
      }
    while ( v5 < 256 );
    result = 256 - (int)this;
    }
    ++v1;
    v3 += 256;
  }
    while ( v4 < 255 );
    return result;
}
}

// ==== BACKFILL 0x005BF360  sub_5BF360  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5BF360::sub_5BF360()
{
{
    int result;
    if ( this )
    return MessageListClass::AddMessage( g_GameNetworkObject, 0, 0, *(wchar_t **)(this + 20), 0, 16454, this->M4, 0);
    return result;
}
}

// ==== BACKFILL 0x005BF500  AsyncIO::Read  cls=AsyncIO  sig=csp  renamed_refs=0  residual=- ====
int AsyncIO::Read()
{
{
    int result;
    result = g_AsyncIOState;
    if ( g_AsyncIOState > 0 )
    return (*(int (__thiscall **)(int, void *))(**(int **)(AsyncIO_Instance) + 12))( *(int *)AsyncIO_Instance, this);
    return result;
}
}

// ==== BACKFILL 0x005BF8B0  sub_5BF8B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_5BF8B0()
{
{
    return (*(int (__thiscall **)(int))(**(int **)(g_BigIntPool + 8) + 96))(*(int *)(g_BigIntPool + 8));
}
}
