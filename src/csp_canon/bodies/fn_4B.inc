// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x004B0410  JumpjetLocomotionClass::ComputeAudio3DRotation  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
float * JumpjetLocomotionClass::ComputeAudio3DRotation(unsigned int * a1, float * a2, unsigned int * a3)
{
{
    int v3;
    double v4;
    int v5;
    int v6;
    int v7;
    float v9[12];
    v3 = *((int*)(a1) + 11);
    if ( v3 )
  {
    v5 = *((int*)(a1) + 8);
    v6 = *((int*)(a1) + 10);
    if ( v5 != -1 )
    {
    if ( (int)g_CurrentFrame - v5 >= v6 )
    v6 = 0;
    else
    v6 -= (int)g_CurrentFrame - v5;
    }
    v4 = (double)(v3 - v6) / (double)(int)*((int*)(a1) + 11);
  }
    else
  {
    v4 = 1.0;
  }
    if ( v4 != 1.0 || (v7 = *((int*)(a1) + 2), fabs(*(float *)(v7 + 808)) >= 0.005) || fabs(*(float *)(v7 + 812)) >= 0.005 )
  {
    if ( a3 )
    *a3 = -1;
  }
    qmemcpy(a2, Audio3D::ComputeRotation((int)a1, v9, a3), 0x30u);
    return a2;
}
}

// ==== BACKFILL 0x004B04D0  JumpjetLocomotionClass::DispatchVirtualCall  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::DispatchVirtualCall(int * a1)
{
{
    int v1;
    int v2;
    v1 = *a1;
    v2 = (*(int (__thiscall **)(int))(*(int *)*((int*)(a1) + 2) + 444))(*((int*)(a1) + 2));
    return (*(int (__stdcall **)(int *, int))(v1 + 124))(a1, *(unsigned char *)(v2 + 284));
}
}

// ==== BACKFILL 0x004B0DF0  sub_4B0DF0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_4B0DF0::sub_4B0DF0(IUnknown * aP1)
{
{
    int v2;
    int *v4;
    TechnoClass *v5;
    IUnknown *v6;
    int *v7;
    AbstractClass *v9;
    v2 = *(int *)&g_CellDirectionOffsets.__pad_DFC[772];
    v4 = (int *)(this + 64);
    if ( this->M64 != *(int *)&g_CellDirectionOffsets.__pad_DFC[772] || this->M68 != *(int *)&g_CellDirectionOffsets.__pad_DFC[776] || this->M72 != *(int *)&g_CellDirectionOffsets.__pad_DFC[780] )
  {
    *v4 = *(int *)&g_CellDirectionOffsets.__pad_DFC[772];
    this->M68 = *(int *)&g_CellDirectionOffsets.__pad_DFC[776];
    v5 = *(TechnoClass **)&g_CellDirectionOffsets.__pad_DFC[780];
    this->M99 = 0;
    this->M72 = v5;
    v2 = *(int *)&g_CellDirectionOffsets.__pad_DFC[772];
  }
    if ( aP1->field_0 != v2 || aP1->field_4 != *(int *)&g_CellDirectionOffsets.__pad_DFC[776] || aP1->field_8 != *(int *)&g_CellDirectionOffsets.__pad_DFC[780] )
  {
    *v4 = aP1->field_0;
    this->M68 = aP1->field_4;
    v6 = (IUnknown *)aP1->field_8;
    this->M99 = 1;
    this->M72 = v6;
    v9 = *(AbstractClass **)(this + 12);
    v7 = Coord::To_Cell(&DataGlobal_87F7E8, aP1);
    if ( CrateClass::ProcessPickup(v7, v9) && !*(char *)(this->M12 + 129) )
    {
    JumpjetLocomotion::MoveTo(this, aP1, 1);
    return 1;
    }
    if ( *(char *)(this->M12 + 144) )
    {
    *v4 = *(int *)&g_CellDirectionOffsets.__pad_DFC[772];
    this->M68 = *(int *)&g_CellDirectionOffsets.__pad_DFC[776];
    this->M72 = *(int *)&g_CellDirectionOffsets.__pad_DFC[780];
    this->M99 = 0;
    }
  }
    return 0;
}
}

// ==== BACKFILL 0x004B0EF0  JumpjetLocomotionClass::UpdateFacingDirection  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::UpdateFacingDirection(int a1, int a2)
{
return FacingClass::Update((char *)(a1[2] + 904), &a2);
}

// ==== BACKFILL 0x004B4820  JumpjetLocomotionClass::StubReturnTwo  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnTwo(int a1)
{
return 2;
}

// ==== BACKFILL 0x004B4830  DriveLocomotionClass::ddtor  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int DriveLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1247291201;
  a2[1] = 298948665;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// ==== BACKFILL 0x004B4870  JumpjetLocomotionClass::StubReturnZero_1  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_1(int a1)
{
return 0;
}

// ==== BACKFILL 0x004B4880  JumpjetLocomotionClass::DispatchCheckState  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::DispatchCheckState(TunnelLocomotionClass * aP0)
{
return JumpjetLocomotionClass::CheckState(aP0);
}

// ==== BACKFILL 0x004B48D0  JumpjetLocomotionClass::MoveToChecked  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::MoveToChecked(DriveLocomotionClass * aP0, int a2)
{
{
    char result;
    result = (char)aP0 + 60;
    if ( aP0->Dest[2] != *(int *)&DataGlobal_89E138.__pad_14B0[4520] || aP0->HeadToCoord[0] != *(int *)&DataGlobal_89E138.__pad_14B0[4524] || aP0->HeadToCoord[1] != *(int *)&DataGlobal_89E138.__pad_14B0[4528] )
  {
    return JumpjetLocomotion::MoveTo((int)&aP0[-1].Piggybackee, (IUnknown *)&aP0->Dest[2], a2);
  }
    return result;
}
}

// ==== BACKFILL 0x004B4BE0  JumpjetLocomotionClass::SetByteField  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SetByteField(int a1)
{
{
    *(char *)(a1 + 97) = 0;
    return a1;
}
}

// ==== BACKFILL 0x004B4BF0  JumpjetLocomotionClass::SetByteField_0  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SetByteField_0(int a1)
{
{
    *(char *)(a1 + 97) = 1;
    return a1;
}
}

// ==== BACKFILL 0x004B4C00  JumpjetLocomotionClass::GetField_0x54  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::GetField_0x54(int a1)
{
return a1[21];
}

// ==== BACKFILL 0x004B4C10  JumpjetLocomotionClass::GetField_0x58  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::GetField_0x58(int a1)
{
return a1[22];
}

// ==== BACKFILL 0x004B4C20  JumpjetLocomotionClass::GetField_0x48  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::GetField_0x48(int a1)
{
return a1[18];
}

// ==== BACKFILL 0x004B4C30  StreamClass::IsInactive  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
BOOL StreamClass::IsInactive(IUnknown * aP0)
{
{
    return aP0->__pad_10[1] == 0;
}
}

// ==== BACKFILL 0x004B4C50  StreamClass::Vt32Thunk  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int StreamClass::Vt32Thunk(int a1)
{
{
    return (*(int (__stdcall **)(int))(*(int *)(a1) + 128))(a1);
}
}

// ==== BACKFILL 0x004B4C60  JumpjetLocomotionClass::MissionStub6  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::MissionStub6(int a1)
{
return 0;
}

// ==== BACKFILL 0x004B4C70  JumpjetLocomotionClass::Stub3  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub3(int a1)
{
  ;
}

// ==== BACKFILL 0x004B4C80  JumpjetLocomotionClass::MissionStub7  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::MissionStub7(int a1)
{
return 0;
}

// ==== BACKFILL 0x004B4C90  JumpjetLocomotionClass::Stub4  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub4(int a1)
{
  ;
}

// ==== BACKFILL 0x004B4CA0  JumpjetLocomotionClass::Stub5  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub5(int a1)
{
  ;
}

// ==== BACKFILL 0x004B4CD0  JumpjetLocomotionClass::GetLinkedLocomotorPointer  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
BOOL JumpjetLocomotionClass::GetLinkedLocomotorPointer(int a1)
{
return a1[20] != 0;
}

// ==== BACKFILL 0x004B4CF0  DriveLocomotionClass::StubReturn112  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int DriveLocomotionClass::StubReturn112()
{
return 112;
}

// ==== BACKFILL 0x004B4D00  DriveLocomotionClass::ProcessMove  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
DriveLocomotionClass * DriveLocomotionClass::ProcessMove(char a2)
{
{
    ILocomotion *v3;
    *(void**)this = (unsigned int)vt_DriveLocomotionClass;
    *(this + 1) = (ILocomotion *)&vt_DriveLocomotionClass;
    *(this + 6) = (ILocomotion *)&vt_DriveLocomotionClass_2;
    v3 = *(this + 26);
    if ( v3 )
    (*(void (__stdcall **)(ILocomotion *))(*(int *)(v3) + 8))(v3);
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DriveLocomotionClass *)this;
}
}

// ==== BACKFILL 0x004B4D90  JumpjetLocomotionClass::GetField_0x78  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::GetField_0x78(int a1, const void * a2, int * a3)
{
return DriveLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}

// ==== BACKFILL 0x004B4DA0  JumpjetLocomotionClass::GetField_0x7C  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::GetField_0x7C(int a1)
{
return DriveLocomotionClass::AddRef(a1 - 4);
}

// ==== BACKFILL 0x004B4DB0  JumpjetLocomotionClass::GetField_0x80  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::GetField_0x80(int a1)
{
return DriveLocomotionClass::Release((volatile LONG *)(a1 - 4));
}

// ==== BACKFILL 0x004B4E10  sub_4B4E10  cls=DropListClass  sig=csp  renamed_refs=0  residual=- ====
DropListClass * E4Recv_4B4E10::sub_4B4E10(DropListClass * aP1, wchar_t * String, int a4, DropListClass * aP4, ControlClass * aP5, ControlClass * aP6, ControlClass * aP7, int a9, ListClass * a10, int a11)
{
{
    AbstractClass *Instance;
    int v13;
    sub_4C2FC0((int *)this, aP1, (ControlClass *)String, a4, aP4, aP5, aP6, aP7, 18, 7);
    this->M72 = 0;
    this->M76 = a9;
    ShapeButtonClass::Constructor((char *)(this + 80), 0, a11, (int)&aP5->__pad_0[(int)aP7], (int)aP6, 0, 0, 0);
    ListClass::Construct( this + 176, 0, (int)aP5, (int)&aP6->__pad_0[*(short *)(a11 + 4)], (ListClass *)&aP7->__pad_0[*(short *)(a11 + 2)], a9, (ControlClass *)aP4, a10, a11);
    *(int *)this = &vt_DropListClass;
    Instance = TextRenderer::GetInstance();
    v13 = this->M176;
    this->M24 = Instance->referenceCount + 1;
    (*(void (__thiscall **)(int, int))(v13 + 132))(this + 176, this);
    (*(void (__thiscall **)(int, int))(this->M80 + 132))(this + 80, this);
    return (DropListClass *)this;
}
}

// ==== BACKFILL 0x004B4FB0  DropListClass::SetFocus  cls=DropListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int DropListClass::SetFocus(void* a1) {
{
      wcsncpy(*((wchar_t **)this + 13), Source, this->q038);
      this->vt18();
      return (*(int (__thiscall **)(int, wchar_t *))(this->List + 136))((int)this + 176, Source);
}
} }

// ==== BACKFILL 0x004B4FF0  DropListClass::KillFocus  cls=DropListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int DropListClass::KillFocus() {
{
    return (*(int (__thiscall **)(int *))(this->List + 156))(this + 44);
}
} }

// ==== BACKFILL 0x004B5010  DropListClass::GetItemData  cls=DropListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int DropListClass::GetItemData() {
{
    return (*(int (__thiscall **)(int *))(this->List + 152))(this + 44);
}
} }

// ==== BACKFILL 0x004B50A0  DropListClass::AddItem  cls=DropListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int DropListClass::AddItem() {
{
      char result;

      result = this->q048;
      if ( result )
      {
        result = (*(int (__thiscall **)(int))(this->List + 36))(this + 176);
        this->q048 = 0;
      }
      return result;
}
} }

// ==== BACKFILL 0x004B53E0  sub_4B53E0  cls=EditClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4B53E0::sub_4B53E0(int a2)
{
{
    int v3;
    ControlClass::CtorFromData((int *)this, a2);
    this->M44 = *(int *)(a2 + 44);
    this->M48 = *(int *)(a2 + 48);
    this->M52 = *(int *)(a2 + 52);
    this->M56 = *(int *)(a2 + 56);
    this->M60 = *(int *)(a2 + 60);
    this->M64 = *(int *)(a2 + 64);
    this->M68 = *(int *)(a2 + 68);
    *(int *)this = &vt_EditClass;
    this->M72 = *(char *)(a2 + 72);
    this->M76 = *(int *)(a2 + 76);
    ControlClass::CtorFromData((int *)(this + 80), a2 + 80);
    this->M124 = *(char *)(a2 + 124);
    this->M125 = *(char *)(a2 + 125);
    this->M128 = *(int *)(a2 + 128);
    this->M80 = &vt_ToggleClass;
    this->M132 = *(char *)(a2 + 132);
    this->M136 = *(int *)(a2 + 136);
    this->M140 = *(int *)(a2 + 140);
    this->M144 = *(char *)(a2 + 144);
    this->M148 = *(int *)(a2 + 148);
    this->M152 = *(int *)(a2 + 152);
    this->M156 = *(char *)(a2 + 156);
    this->M160 = *(int *)(a2 + 160);
    this->M164 = *(char *)(a2 + 164);
    this->M165 = *(char *)(a2 + 165);
    this->M168 = *(int *)(a2 + 168);
    this->M172 = *(char *)(a2 + 172);
    this->M80 = &vt_ShapeButtonClass;
    sub_557380(this + 176, a2 + 176);
    v3 = this->M176;
    *(int *)this = &vt_DropListClass;
    (*(void (__thiscall **)(int, int))(v3 + 132))(this + 176, this);
    (*(void (__thiscall **)(int, int))(this->M80 + 132))(this + 80, this);
    return this;
}
}

// ==== BACKFILL 0x004B54E0  DropListClass::RemoveItem  cls=DropListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int DropListClass::RemoveItem(int a1, int a2) {
{
      Rect_Point::Set(this, (GadgetClass *)aP1, (GadgetClass *)aP2);
      (*(void (__thiscall **)(_DWORD *, SBGadgetClass_SidebarClass *, int))(this->List + 100))(
        this + 44,
        aP1,
        aP2 + *(__int16 *)(this->q0A8 + 4));
      return (*(int (__thiscall **)(_DWORD *, char *, int))(this->q050 + 100))(this + 20, (char *)aP1 + this->q014, aP2);
}
} }

// ==== BACKFILL 0x004B55B0  DropListClass::ScrollUp  cls=DropListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int DropListClass::ScrollUp() {
{
    return (*(int (__thiscall **)(int *))(this->List + 148))(this + 44);
}
} }

// ==== BACKFILL 0x004B55D0  DropListClass::ScrollDown  cls=DropListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int DropListClass::ScrollDown(int a1) {
{
      return (*(int (__thiscall **)(_DWORD *, int))(this->List + 160))(this + 44, a2);
}
} }

// ==== BACKFILL 0x004B55F0  DropListClass::QueryInterface  cls=DropListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* DropListClass::QueryInterface(int a2) {
{
    *(void**)this = &vt_DropListClass;
    ListClass::Destruct(this + 44);
    ShapeButtonClass::Destructor((int)(this + 20));
    DropListClass::Constructor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DropListClass *)this;
}
} }

// ==== BACKFILL 0x004B56E0  sub_4B56E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4B56E0::sub_4B56E0(int a2)
{
{
    LinkedList::MoveNode((void *)this, (void *)a2);
    this->M12 = *(int *)(a2 + 12);
    this->M16 = *(int *)(a2 + 16);
    this->M20 = *(int *)(a2 + 20);
    this->M24 = *(int *)(a2 + 24);
    this->M28 = *(char *)(a2 + 28);
    this->M29 = *(char *)(a2 + 29);
    this->M30 = *(char *)(a2 + 30);
    this->M32 = *(int *)(a2 + 32);
    this->M36 = *(int *)(a2 + 36);
    this->M40 = *(int *)(a2 + 40);
    this->M44 = *(char *)(a2 + 44);
    this->M45 = *(char *)(a2 + 45);
    this->M46 = *(char *)(a2 + 46);
    this->M48 = *(int *)(a2 + 48);
    this->M52 = *(int *)(a2 + 52);
    this->M56 = *(int *)(a2 + 56);
    this->M60 = *(int *)(a2 + 60);
    this->M64 = *(int *)(a2 + 64);
    this->M68 = *(char *)(a2 + 68);
    this->M72 = *(int *)(a2 + 72);
    this->M76 = *(int *)(a2 + 76);
    this->M80 = *(int *)(a2 + 80);
    return this;
}
}

// ==== BACKFILL 0x004B5780  sub_4B5780  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4B5780::sub_4B5780(int a2)
{
{
    LinkedList::MoveNode((void *)this, (void *)a2);
    this->M12 = *(int *)(a2 + 12);
    this->M16 = *(int *)(a2 + 16);
    this->M20 = *(int *)(a2 + 20);
    this->M24 = *(int *)(a2 + 24);
    this->M28 = *(char *)(a2 + 28);
    this->M29 = *(char *)(a2 + 29);
    this->M30 = *(char *)(a2 + 30);
    this->M32 = *(int *)(a2 + 32);
    return this;
}
}

// ==== BACKFILL 0x004B5830  sub_4B5830  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_4B5830::sub_4B5830(unsigned int * a2)
{
{
    int v3;
    void *v4;
    int v5;
    int v6;
    if ( this == a2 )
    return this;
    this->Vf12();
    v3 = *((int*)(a2) + 2);
    this->M8 = v3;
    if ( !v3 )
  {
    this->M4 = 0;
    this->M13 = 0;
    return this;
  }
    v4 = __2_YAPAXI_Z(4 * v3);
    this->M4 = v4;
    if ( !v4 )
    return this;
    v5 = this->M8;
    v6 = 0;
    this->M13 = 1;
    if ( v5 <= 0 )
    return this;
    do
  {
    *(int *)(this->M4 + 4 * v6) = *(int *)(*((int*)(a2) + 1) + 4 * v6);
    ++v6;
  }
    while ( v6 < this->M8 );
    return this;
}
}

// ==== BACKFILL 0x004B5B30  JumpjetLocomotionClass::StubReturnTrue_1  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::StubReturnTrue_1(int a1)
{
return 1;
}

// ==== BACKFILL 0x004B5B40  JumpjetLocomotionClass::GetSpeedCoordinate  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetSpeedCoordinate(unsigned int * a1, unsigned int * a2)
{
unsigned int coordY = a1[8];
unsigned int coordZ = a1[9];
*a2 = a1[7];
a2[1] = coordY;
a2[2] = coordZ;
return a2;
}

// ==== BACKFILL 0x004B6200  DropPodLocomotionClass::ddtor  cls=DropPodLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int DropPodLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1247291205;
  a2[1] = 298948665;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// ==== BACKFILL 0x004B6240  DropPodLocomotionClass::BeginMove  cls=DropPodLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT DropPodLocomotionClass::BeginMove(int * a1, int * pStm)
{
{
    IStream *v2;
    int v3;
    int v4;
    LPVOID *v5;
    v2 = (IStream *)pStm;
    v3 = SwizzleManager::SaveLoad(a1, pStm);
    if ( v3 < 0 )
    return v3;
    if ( a1 )
  {
    *((int*)(a1) + 11) = 0;
    *a1 = (int)(unsigned int)vt_DropPodLocomotionClass;
    a1[1] = (unsigned int)vt_DropPodLocomotionClass;
    *((int*)(a1) + 6) = (int)&vt_DropPodLocomotionClass;
  }
    v2->__pad_0->Read(v2, &pStm, 1, 0);
    if ( !(char)pStm )
    return v3;
    v4 = *((int*)(a1) + 11);
    v5 = (LPVOID *)(a1 + 11);
    if ( v4 )
    (*(void (__stdcall **)(int))(*(int *)(v4) + 8))(v4);
    *v5 = 0;
    return OleLoadFromStream(v2, &IID_ILocomotion, v5);
}
}

// ==== BACKFILL 0x004B62C0  DropPodLocomotionClass::UpdateMovement  cls=DropPodLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT DropPodLocomotionClass::UpdateMovement(int * a1, int * pPStm, int a3)
{
{
    IStream *v3;
    int *v4;
    HRESULT result;
    int v6;
    int (__stdcall ***v7)(int, void *, int **);
    int v8;
    int *v9;
    HRESULT v10;
    int v11;
    v3 = (IStream *)pPStm;
    v4 = a1;
    result = LoadIPersistStream(a1, pPStm, a3);
    if ( result >= 0 )
  {
    if ( v4[11] )
    {
    v6 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 1;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v6 + 16))(v3, &a3, 1, 0);
    v7 = (int (__stdcall ***)(int, void *, int **))v4[11];
    pPStm = 0;
    if ( v7 )
      {
    v8 = (**v7)(v7, &DataGlobal_820270, &a1);
    if ( v8 >= 0 )
        {
    v9 = a1;
    if ( pPStm )
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm);
    pPStm = v9;
        }
    else
        {
    Function::Method_4B4D60((int *)&pPStm);
    pPStm = 0;
        }
    if ( v8 < 0 && v8 != -2147467262 )
    WinAPI::Wrapper(v8);
      }
    v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3);
    if ( pPStm )
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm);
    return v10;
    }
    else
    {
    v11 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 0;
    return (*(HRESULT (__stdcall **)(IStream *, int *, int, int))(v11 + 16))(v3, &a3, 1, 0);
    }
  }
    return result;
}
}

// ==== BACKFILL 0x004B63A0  JumpjetLocomotionClass::Stub6  cls=DropPodLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub6(int a1)
{
  ;
}

// ==== BACKFILL 0x004B63B0  JumpjetLocomotionClass::StubReturnZero_3  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_3(int a1, int a2)
{
{
    if ( !a2 )
    return -2147467261;
    if ( *(int *)(a1 + 20) )
    return -2147467259;
    *(int *)(a1 + 20) = a2;
    (*(void (__stdcall **)(int))(*(int *)(a2) + 4))(a2);
    return 0;
}
}

// ==== BACKFILL 0x004B6400  JumpjetLocomotionClass::StubReturnZero_4  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_4(int a1, unsigned int * a2)
{
{
    int v3;
    if ( !a2 )
    return -2147467261;
    v3 = *(int *)(a1 + 20);
    if ( !v3 )
    return 1;
    *a2 = v3;
    *(int *)(a1 + 20) = 0;
    return 0;
}
}

// ==== BACKFILL 0x004B6440  JumpjetLocomotionClass::CheckBaseClassState  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::CheckBaseClassState(int a1)
{
{
    return !(*(unsigned char (__stdcall **)(int))(*(int *)(a1 - 20) + 16))(a1 - 20) && *(int *)(a1 + 20);
}
}

// ==== BACKFILL 0x004B64D0  JumpjetLocomotionClass::SmallStub_4B64D0  cls=DropPodLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_4B64D0(int a1)
{
return 3;
}

// ==== BACKFILL 0x004B64E0  JumpjetLocomotionClass::LoadLocomotionFromStream_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::LoadLocomotionFromStream_0(unsigned int * a1, unsigned int * a2)
{
{
    int *v2;
    int *v4;
    int v5;
    int v6;
    int v7;
    int *v8;
    int *v9;
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v4 = a1 + 5;
    if ( *((int*)(a1) + 5) )
  {
    a1 = 0;
    v5 = StreamClass::Set2(&a1, v4);
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !a1 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*a1 + 12))(a1, v2);
    if ( a1 )
    {
    (*(void (__stdcall **)(int *))(*a1 + 8))(a1);
    return v6;
    }
  }
    else
  {
    a2 = 0;
    if ( a1 == (int *)24 )
    return -2147467259;
    v7 = (*(int (__stdcall **)(int *, void *, int **))*(a1 - 6))(a1 - 6, &DataGlobal_818858, &a1);
    if ( v7 >= 0 )
    {
    v9 = a1;
    ComPtr::Release_Alt((int *)&a2);
    v8 = v9;
    a2 = v9;
    }
    else
    {
    ComPtr::Release_Alt((int *)&a2);
    v8 = 0;
    a2 = 0;
    }
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    if ( !v8 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*v8 + 12))(v8, v2);
    if ( a2 )
    (*(void (__stdcall **)(int *))(*a2 + 8))(a2);
  }
    return v6;
}
}

// ==== BACKFILL 0x004B65F0  JumpjetLocomotionClass::ShortFunc_4B65F0  cls=DropPodLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
BOOL JumpjetLocomotionClass::ShortFunc_4B65F0(DropPodLocomotionClass * aP0)
{
{
    return aP0->__pad_18[0] != 0;
}
}

// ==== BACKFILL 0x004B6610  JumpjetLocomotionClass::Thunk_VtableDispatch4  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::Thunk_VtableDispatch4(int a1)
{
{
    return (*(int (__stdcall **)(int))(*(int *)(a1) + 16))(a1);
}
}

// ==== BACKFILL 0x004B6620  JumpjetLocomotionClass::Stub7  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub7(int a1, int a2)
{
  ;
}

// ==== BACKFILL 0x004B6630  JumpjetLocomotionClass::MissionStub8  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::MissionStub8(int a1, int a2, int a3, int a4)
{
return 0;
}

// ==== BACKFILL 0x004B6640  JumpjetLocomotionClass::MissionStub9  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::MissionStub9(int a1)
{
return 0;
}

// ==== BACKFILL 0x004B6650  JumpjetLocomotionClass::Stub8  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub8(int a1)
{
  ;
}

// ==== BACKFILL 0x004B6660  JumpjetLocomotionClass::Stub9  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub9(int a1)
{
  ;
}

// ==== BACKFILL 0x004B6670  JumpjetLocomotionClass::CheckState3  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::CheckState3(int a1)
{
return -1;
}

// ==== BACKFILL 0x004B6680  JumpjetLocomotionClass::CheckState4  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::CheckState4(int a1)
{
return -1;
}

// ==== BACKFILL 0x004B6690  JumpjetLocomotionClass::CheckState5  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::CheckState5(int a1)
{
return -1;
}

// ==== BACKFILL 0x004B66C0  JumpjetLocomotionClass::ShortFunc_4B66C0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
BOOL JumpjetLocomotionClass::ShortFunc_4B66C0(int a1)
{
return a1[5] != 0;
}

// ==== BACKFILL 0x004B66E0  DropPodLocomotionClass::StubReturn48  cls=DropPodLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int DropPodLocomotionClass::StubReturn48()
{
return 48;
}

// ==== BACKFILL 0x004B66F0  DropPodLocomotionClass::ProcessMove  cls=DropPodLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
DropPodLocomotionClass * DropPodLocomotionClass::ProcessMove(char a2)
{
{
    ILocomotion *v3;
    *(void**)this = (unsigned int)vt_DropPodLocomotionClass;
    *(this + 1) = (unsigned int)vt_DropPodLocomotionClass;
    *(this + 6) = (ILocomotion *)&vt_DropPodLocomotionClass;
    v3 = *(this + 11);
    if ( v3 )
    (*(void (__stdcall **)(ILocomotion *))(*(int *)(v3) + 8))(v3);
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DropPodLocomotionClass *)this;
}
}

// ==== BACKFILL 0x004B6740  JumpjetLocomotionClass::SmallStub_4B6740  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_4B6740(int a1, const void * a2, int * a3)
{
return DropPodLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}

// ==== BACKFILL 0x004B6750  JumpjetLocomotionClass::SmallStub_4B6750  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_4B6750(int a1)
{
return DropPodLocomotionClass::AddRef(a1 - 4);
}

// ==== BACKFILL 0x004B6760  JumpjetLocomotionClass::SmallStub_4B6760  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_4B6760(int a1)
{
return DropPodLocomotionClass::Release((volatile LONG *)(a1 - 4));
}

// ==== BACKFILL 0x004B6770  JumpjetLocomotionClass::SmallStub_4B6770  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_4B6770(int a1, const void * a2, int * a3)
{
return DropPodLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}

// ==== BACKFILL 0x004B6780  JumpjetLocomotionClass::SmallStub_4B6780  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_4B6780(int a1)
{
return DropPodLocomotionClass::AddRef(a1 - 24);
}

// ==== BACKFILL 0x004B6790  JumpjetLocomotionClass::SmallStub_4B6790  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_4B6790(int a1)
{
return DropPodLocomotionClass::Release((volatile LONG *)(a1 - 24));
}

// ==== BACKFILL 0x004B69D0  nullsub_126  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_126()
{
  ;
}

// ==== BACKFILL 0x004B6B80  sub_4B6B80  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_4B6B80::sub_4B6B80()
{
{
    int v2;
    char result;
    v2 = this->M16;
    this->M12 = 0;
    if ( v2 > 0 )
  {
    do
    {
    result = sub_4B6AB0((int *)this, 0);
    --v2;
    }
    while ( v2 );
  }
    this->M16 = 0;
    this->M40 = 0;
    return result;
}
}

// ==== BACKFILL 0x004B6BE0  sub_4B6BE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4B6BE0::sub_4B6BE0(int a2)
{
{
    return *(this + a2 + 5);
}
}

// ==== BACKFILL 0x004B9CE0  VectorClass_ptr_CrossDissolveEffect::SetCapacity  cls=VectorClass_ptr_CrossDissolveEffect  sig=csp  renamed_refs=0  residual=- ====
char VectorClass_ptr_CrossDissolveEffect::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
        }
      }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->FindItemIndex_0();
    return 1;
  }
}
}

// ==== BACKFILL 0x004B9D90  VectorClass_ptr_CrossDissolveEffect::Destroy  cls=VectorClass_ptr_CrossDissolveEffect  sig=csp  renamed_refs=0  residual=- ====
void VectorClass_ptr_CrossDissolveEffect::Destroy()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}

// ==== BACKFILL 0x004B9DC0  VectorClass_ptr_CrossDissolveEffect::FindItemIndex_0  cls=VectorClass_ptr_CrossDissolveEffect  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_ptr_CrossDissolveEffect::FindItemIndex_0(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    i = this->Items;
    if ( v3 <= 0 )
    return -1;
    for ( ; *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}

// ==== BACKFILL 0x004B9E00  VectorClass_ptr_CrossDissolveEffect::GetItemIndex  cls=VectorClass_ptr_CrossDissolveEffect  sig=csp  renamed_refs=0  residual=- ====
unsigned int VectorClass_ptr_CrossDissolveEffect::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x004BAFE0  sub_4BAFE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_4BAFE0::sub_4BAFE0()
{
{
    int v1;
    v1 = this->M28;
    return v1 && (*(int (__stdcall **)(int))(*(int *)(v1) + 96))(v1) == -2005532222;
}
}

// ==== BACKFILL 0x004BB080  DSurface::BlitPart  cls=DSurface  sig=csp  renamed_refs=0  residual=- ====
int DSurface::BlitPart(int a2, int a3, int a4, int a5, int a6)
{
{
    int v7;
    int v8;
    int v9;
    char v11[28];
    char v12[4];
    v7 = *(void**)this;
    v8 = (*(int (__thiscall **)(int, char *, int, int, int))(*(int *)(a3) + 120))(a3, v11, a4, a5, a6);
    v9 = this->GetRect(v12, a5, a3, v8);
    return (*(int (__thiscall **)(int *, int))(v7 + 12))(this, v9);
}
}

// ==== BACKFILL 0x004BF650  BlendMinimapPixel  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
short BlendMinimapPixel(unsigned short a1, unsigned short a2, int a3)
{
{
    int v3;
    LOWORD(v3) = a1;
    switch ( a3 )
  {
    case 0: LOWORD(v3) = a2;
    break;
    case 25: v3 = 4 * (HIWORD(DataGlobal_8A0DE8) & (a1 >> 2));
    break;
    case 50: v3 = ((unsigned short)DataGlobal_8A0DE8 & (a2 >> 1)) + ((unsigned short)DataGlobal_8A0DE8 & (a1 >> 1));
    break;
    case 75: v3 = 4 * (HIWORD(DataGlobal_8A0DE8) & (a1 >> 2));
    break;
    default: return v3;
  }
    return v3;
}
}
