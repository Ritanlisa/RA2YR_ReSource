// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00630090  ParticleSystemClass::vt_06  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemClass__vt_06_(int * a1, int * a2, int a3)
{
{
    int result;
    int v4;
    int i;
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
  {
    v4 = *a2;
    a3 = *((int*)(a1) + 51);
    result = (*(int (__stdcall **)(int *, int *, int, int))(v4 + 16))(a2, &a3, 4, 0);
    if ( result >= 0 )
    {
    for ( i = 0; i < a3; ++i )
      {
    result = (*(int (__stdcall **)(int *, int, int, int))(*a2 + 16))(a2, *((int*)(a1) + 48) + 4 * i, 4, 0);
    if ( result < 0 )
    break;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00630100  ParticleSystemClass::PowerDrainUpdate  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ParticleSystemClass::PowerDrainUpdate(void* a1) {
{
      int i;
      int v4;
      int v5;
      int v7;

      HouseClass::ProcessPower((#374 *)this);
      for ( i = 0; i < this->Owner; ++i )
      {
        v7 = *(_DWORD *)(this->TargetCoords + 4 * i) + 4;
        (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 16))(v7);
        Power::TimerProcess(aP1);
      }
      v4 = this->SpotlightRadius;
      if ( v4 )
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4);
        Power::TimerProcess(aP1);
      }
      v5 = this->TimeToDie;
      if ( v5 )
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4);
        Power::TimerProcess(aP1);
      }
      Checksummer::Add_float((unsigned int *)aP1, *(ParticleSystemClass **)(this + 232));
      return Power::TimerProcess(aP1);
}
} }

// ==== BACKFILL 0x006301A0  C07EFB9C::ddtor  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int C07EFB9C::ddtor(int a1, _DWORD *a2)
{
    if ( !a2 )
        return -2147467261;
    *a2 = 237448648;
    a2[1] = 298949647;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

// ==== BACKFILL 0x006301E0  ParticleSystemClass::ProcessFrame  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void ParticleSystemClass::ProcessFrame() {
{
      this->q0F8 = 1;
}
} }

// ==== BACKFILL 0x006301F0  ObjectClass::SetMember59  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::SetMember59(int a1) {
{
    this->WaveClass_field_198 = aP1;
    return (int)aP1->__pad_0;
}
} } }

// ==== BACKFILL 0x00630200  ParticleSystemClass::GetObjectSize  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemClass::GetObjectSize()
{
return 256;
}

// ==== BACKFILL 0x00630210  ParticleSystemClass::GetTypeIdentifier  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
int ParticleSystemClass::GetTypeIdentifier()
{
return 24;
}

// ==== BACKFILL 0x00630220  ParticleSystemClass::Stub  cls=ParticleSystemClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ParticleSystemClass::Stub() {
{
    return this->Type;
}
} }

// ==== BACKFILL 0x00630230  ParticleSystemClass::ddtor  cls=ParticleSystemClass  sig=csp  renamed_refs=5  residual=IsAllocated ====
_DWORD * ParticleSystemClass::ddtor(int a2, int a3)
{
    this->vtable2 = 0;
    this->vtable3 = a2;
    this->vtable4 = 1;
    this->IsAllocated = 0;
    if ( a2 )
    {
        if ( a3 )
        {
            this->vtable2 = a3;
            return this;
        }
        this->vtable2 = OperatorNew(4 * a2);
        this->IsAllocated = 1;
    }
    return this;
}

// ==== BACKFILL 0x00630250  VectorClass::PushBackCopy  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
char VectorClass::PushBackCopy(AbstractClass * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->Capacity;
    if ( this->Count >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->Count;
    v7 = this->Items;
    this->Count = v6 + 1;
    *(int *)(v7 + 4 * v6) = *(int *)aP1->__pad_0;
    return 1;
}
}

// ==== BACKFILL 0x006302A0  ParticleSystemClass::resetSystemState  cls=ParticleSystemClass  sig=csp  renamed_refs=5  residual=IsAllocated ====
namespace gamemd { void* ParticleSystemClass::resetSystemState(int a1, int a2) {
{
      this->vtable2 = 0;
      this->vtable3 = a2;
      this->vtable4 = 1;
      this->IsAllocated = 0;
      *this = &vt_VectorClass_ParticleClass;
      if ( a2 )
      {
        if ( a3 )
        {
          this->vtable2 = a3;
          return this;
        }
        this->vtable2 = __2_YAPAXI_Z(4 * a2);
        this->IsAllocated = 1;
      }
      return this;
}
} }

// ==== BACKFILL 0x00631E30  TacticalClass::saveConfig  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* TacticalClass::saveConfig(int a2) {
{
    this->vfptr = &vt_PixelFXClass;
    BuildingDebris::Init(this, a2);
    return &this->vfptr;
}
} }

// ==== BACKFILL 0x00631F10  sub_631F10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_631F10::sub_631F10(int a2, int a3)
{
{
    this->M48 = a2;
    this->M52 = a3;
    return a2;
}
}

// ==== BACKFILL 0x00631F30  sub_631F30  cls=PixelFXClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_631F30::sub_631F30()
{
{
    this->vfptr = &vt_PixelFXClass;
}
}

// ==== BACKFILL 0x00631F40  GameClass::saveGameState  cls=GameClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * GameClass::saveGameState(char a2)
{
{
    this->vfptr = &vt_PixelFXClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return &this->vfptr;
}
}

// ==== BACKFILL 0x00631FC0  sub_631FC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_631FC0::sub_631FC0(ObjectClass * aP1)
{
{
    if ( aP1 )
    return EncodeVarInt((int)this, aP1, 64);
    else
    return 0;
}
}

// ==== BACKFILL 0x00631FE0  sub_631FE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_631FE0::sub_631FE0(unsigned char * a2)
{
{
    if ( a2 )
    return EncodeVarInt((int)this + 256, a2, 64);
    else
    return 0;
}
}

// ==== BACKFILL 0x006329C0  sub_6329C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * E4Recv_6329C0::sub_6329C0(void * a2, unsigned short a3)
{
{
    int v5[64];
    InitArrayWithValue(v5, 0, 64);
    DataGlobal_A8F8FD = DecodeAudioSampleWord((int)v5, this, a3, 0, 64);
    qmemcpy(a2, v5, 0x100u);
    return a2;
}
}

// ==== BACKFILL 0x00632A20  sub_632A20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * E4Recv_632A20::sub_632A20(void * a2, const void * a3)
{
{
    int v5[64];
    InitArrayWithValue(v5, 0, 64);
    ModInverseBigInteger((char *)v5, this, a3, 64);
    qmemcpy(a2, v5, 0x100u);
    return a2;
}
}

// ==== BACKFILL 0x00632A70  sub_632A70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::sub_632A70(int a2, int a3, ObjectClass * aP3)
{
{
    int result;
    sub_5C8E40(this, a2, a3, aP3, 64);
    result = *(int *)this->__pad_0;
    LOBYTE(result) = *(int *)this->__pad_0 | 1;
    *(int *)this->__pad_0 = result;
    return result;
}
}

// ==== BACKFILL 0x00632AC0  sub_632AC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_632AC0::sub_632AC0(unsigned int * a2, unsigned short a3)
{
{
    unsigned int v5[64];
    InitArrayWithValue(v5, 0, 64);
    DataGlobal_A8F8FC = sub_5C6AA0(v5, this, a3, 0, 64);
    qmemcpy(a2, v5, 0x100u);
    return a2;
}
}

// ==== BACKFILL 0x00632B20  sub_632B20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * E4Recv_632B20::sub_632B20(void * a2, short a3)
{
{
    int v5[64];
    InitArrayWithValue(v5, 0, 64);
    DataGlobal_A8F8F8 = sub_5C6D90((int)v5, this, a3, 64);
    qmemcpy(a2, v5, 0x100u);
    return a2;
}
}

// ==== BACKFILL 0x00632B70  Buffer::RotateBufferCrypto  cls=Buffer  sig=csp  renamed_refs=0  residual=- ====
int * Buffer::RotateBufferCrypto(int * a2, int a3)
{
{
    int v4[64];
    qmemcpy(v4, this, sizeof(v4));
    RotateBitBufferLeft(v4, a3, 64);
    qmemcpy(a2, v4, 0x100u);
    return a2;
}
}

// ==== BACKFILL 0x00632BE0  Palette::ConvertIndices  cls=Palette  sig=csp  renamed_refs=0  residual=- ====
unsigned char * Palette::ConvertIndices(int a2)
{
{
    int v3;
    int v4;
    short *v5;
    short *v6;
    *(void**)this = 0;
    v3 = Hash_Check_5C61E0();
    v4 = Hash_Check();
    if ( v3 <= 0 )
    return this;
    v5 = (short *)v4;
    v6 = this + 2;
    do
  {
    LOWORD(v4) = *v5;
    v4 = ShiftBigIntAndScan(v4, 64);
    *v6 = v4;
    ++v5;
    ++v6;
    --v3;
  }
    while ( v3 );
    return this;
}
}

// ==== BACKFILL 0x00632D60  sub_632D60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_632D60::sub_632D60(int a2)
{
{
    int result;
    int v4;
    if ( !a2 )
  {
    result = this->Vf4();
    this->M12 = 0;
  }
    this->M56 = a2;
    if ( a2 )
  {
    v4 = this->M52;
    result = 1;
    this->M12 = 1;
    if ( v4 == 1 )
    {
    result = ((*(int *)(a2 + 512) - 1) / 8 + 1) * (55 / ((*(int *)(a2 + 512) - 1) / 8) + 1);
    this->M320 = result;
    this->M316 = result;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00632FE0  GameClass::loadGameState  cls=PKPipe  sig=csp  renamed_refs=0  residual=- ====
int GameClass::loadGameState(int a2)
{
{
    return this->SetDelegate(a2);
}
}

// ==== BACKFILL 0x00632FF0  GameClass::validateGameFile  cls=PKPipe  sig=csp  renamed_refs=0  residual=- ====
PKPipe * GameClass::validateGameFile(char a2)
{
{
    int *v3;
    Pipe *v4;
    v3 = (int *)*(this + 8);
    v4 = (Pipe *)(this + 5);
    *(this + 5) = &vt_BlowPipe;
    if ( v3 )
  {
    COMObject::Release(v3);
    __3_YAXPAX_Z(v3);
  }
    v4->Pipe_field_0x0C = 0;
    Pipe::Dtor((int *)v4->__pad_0);
    Pipe::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (PKPipe *)this;
}
}

// ==== BACKFILL 0x00633360  GameClass::parseGameOptions  cls=PKStrawClass  sig=csp  renamed_refs=0  residual=- ====
int GameClass::parseGameOptions(int a2)
{
{
    return this->GetRelatedObject(a2);
}
}

// ==== BACKFILL 0x00633370  GameClass::applyGameSettings  cls=PKStrawClass  sig=csp  renamed_refs=0  residual=- ====
PKStrawClass * GameClass::applyGameSettings(char a2)
{
{
    int *v3;
    Straw *v4;
    v3 = (int *)*(this + 8);
    v4 = (Straw *)(this + 5);
    *(this + 5) = &vt_BlowStraw;
    if ( v3 )
  {
    COMObject::Release(v3);
    __3_YAXPAX_Z(v3);
  }
    v4[1].Straw_field_0x04 = 0;
    Straw::Dtor((int *)v4->__pad_0);
    Straw::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (PKStrawClass *)this;
}
}

// ==== BACKFILL 0x00633A20  sub_633A20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_633A20::sub_633A20()
{
{
    *(void**)this = 0;
    this->M4 = 0;
    this->M8 = -1;
    this->M12 = 0;
    return this;
}
}

// ==== BACKFILL 0x00633A40  sub_633A40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_633A40::sub_633A40(int a2)
{
{
    *(void**)this = a2;
    return a2;
}
}

// ==== BACKFILL 0x00633A60  sub_633A60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_633A60::sub_633A60(int a2)
{
{
    this->M8 = a2;
    return a2;
}
}

// ==== BACKFILL 0x00633A70  sub_633A70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_633A70::sub_633A70(char a2)
{
{
    this->M12 = a2;
    return a2;
}
}

// ==== BACKFILL 0x00633A80  ReadPointerFromECX_2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_633A80::ReadPointerFromECX_2()
{
{
    return *(ObjectClass **)this;
}
}

// ==== BACKFILL 0x00633A90  sub_633A90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_633A90::sub_633A90()
{
{
    return this->M4;
}
}

// ==== BACKFILL 0x00633AA0  sub_633AA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_633AA0::sub_633AA0()
{
{
    return this->M8;
}
}

// ==== BACKFILL 0x00633AC0  ExecuteActionPlanManager_Helper  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_633AC0::sub_633AC0()
{
{
    *(char *)this = 0;
    this->M112 = 0;
    this->M116 = -1;
    return this;
}
}

// ==== BACKFILL 0x00633AE0  sub_633AE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_633AE0::sub_633AE0(const void * a2)
{
{
    qmemcpy(this, a2, 0x6Fu);
}
}

// ==== BACKFILL 0x00633B00  sub_633B00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_633B00::sub_633B00(int a2)
{
{
    this->M112 = a2;
    return a2;
}
}

// ==== BACKFILL 0x00633B10  sub_633B10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_633B10::sub_633B10(int a2)
{
{
    this->M116 = a2;
    return a2;
}
}

// ==== BACKFILL 0x00633B20  sub_633B20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_633B20::sub_633B20()
{
{
    this->M112 = 0;
}
}

// ==== BACKFILL 0x00633B30  sub_633B30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_633B30::sub_633B30()
{
{
    int result;
    result = this->M112 + 1;
    this->M112 = result;
    return result;
}
}

// ==== BACKFILL 0x00633B40  sub_633B40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_633B40::sub_633B40()
{
{
    int result;
    result = this->M112 - 1;
    this->M112 = result;
    return result;
}
}

// ==== BACKFILL 0x00633B70  sub_633B70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_633B70::sub_633B70()
{
{
    return this->M112;
}
}

// ==== BACKFILL 0x00633B80  sub_633B80  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_633B80::sub_633B80()
{
{
    return this->M116;
}
}

// ==== BACKFILL 0x00633B90  ScenarioClass::GetActionCoordsCopy  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* ScenarioClass::GetActionCoordsCopy(void* a1) {
{
    int *ScenarioClassActionCoords;
    int v3;
    int v4;
    int v5;
    int v7[3];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, this);
    v3 = *ScenarioClassActionCoords;
    v4 = ScenarioClassActionCoords[1];
    v5 = ScenarioClassActionCoords[2];
    *(int *)a1->__pad_0 = v3;
    *(int *)&a1->__pad_0[4] = v4;
    *(int *)&a1->__pad_0[8] = v5;
    return a1->__pad_0;
}
} }

// ==== BACKFILL 0x00633C60  sub_633C60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_633C60::sub_633C60(unsigned int * a2)
{
{
    int *ScenarioClassActionCoords;
    int v3;
    int v5[3];
    int v6[3];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v5, this);
    v6[0] = *ScenarioClassActionCoords;
    v6[1] = ScenarioClassActionCoords[1];
    v6[2] = ScenarioClassActionCoords[2];
    Coord::To_Screen(g_TacticalClass_Instance, v6, v5);
    v3 = g_Map_VisibleRect + v5[1];
    *a2 = DSurface_ViewBounds + v5[0];
    *((int*)(a2) + 1) = v3;
    return a2;
}
}

// ==== BACKFILL 0x00633E50  sub_633E50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_633E50::sub_633E50()
{
{
    return this->M24;
}
}

// ==== BACKFILL 0x00633E60  sub_633E60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_633E60::sub_633E60()
{
{
    return this->M16;
}
}

// ==== BACKFILL 0x00633EA0  TeamClass::FindScriptAction  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TeamClass::FindScriptAction(unsigned int * a2)
{
{
    int *Type;
    int v4;
    int v5;
    int v6;
    int v8;
    int v9;
    int v10;
    Type = (int *)BuildingClass::GetPlanningToken(a2);
    v4 = Type[1];
    a2 = this;
    v5 = (*(int (__thiscall **)(int *, int **))(v4 + 16))(Type + 1, &a2);
    if ( v5 == -1 )
    return 0;
    v6 = Type[5];
    if ( v6 == 1 )
    return this;
    v8 = v5 - 1;
    if ( v8 < 0 )
    v8 = v6 - 1;
    v9 = v8;
    if ( !v6 )
    return 0;
    if ( v8 >= v6 )
  {
    v10 = Type[37];
    if ( v10 < 0 )
    return 0;
    v9 = v10 + (v8 - v10) % Type[36];
  }
    if ( v9 >= 0 && v9 < v6 )
    return *(int **)(Type[2] + 4 * v9);
    return 0;
}
}

// ==== BACKFILL 0x00633F20  TeamClass::GetNextScriptAction  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TeamClass::GetNextScriptAction(unsigned int * a2)
{
{
    int *Type;
    int v4;
    int v5;
    int v6;
    int v8;
    int v9;
    int v10;
    Type = (int *)BuildingClass::GetPlanningToken(a2);
    v4 = Type[1];
    a2 = this;
    v5 = (*(int (__thiscall **)(int *, int **))(v4 + 16))(Type + 1, &a2);
    if ( v5 == -1 )
    return 0;
    v6 = Type[5];
    if ( v6 == 1 )
    return this;
    v8 = v5 + 1;
    if ( v8 >= v6 )
    v8 = 0;
    v9 = v8;
    if ( !v6 )
    return 0;
    if ( v8 >= v6 )
  {
    v10 = Type[37];
    if ( v10 < 0 )
    return 0;
    v9 = v10 + (v8 - v10) % Type[36];
  }
    if ( v9 >= 0 && v9 < v6 )
    return *(int **)(Type[2] + 4 * v9);
    return 0;
}
}

// ==== BACKFILL 0x00634360  sub_634360  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_634360::sub_634360(int a2)
{
{
    int v2;
    int v3;
    int v4;
    int **i;
    v2 = this->M16;
    v3 = -1;
    v4 = 0;
    if ( v2 > 0 )
  {
    i = (int **)this->M4;
    for ( ; **i != a2; ++i )
    {
    if ( ++v4 >= v2 )
    return 0;
    }
    v3 = v4;
  }
    return v3 != -1;
}
}

// ==== BACKFILL 0x006343B0  sub_6343B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6343B0::sub_6343B0()
{
{
    return *(int *)(**(void**)this->M4 + 540);
}
}

// ==== BACKFILL 0x00634470  sub_634470  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_634470::sub_634470(int a2, int a3)
{
{
    int *ScenarioClassActionCoords;
    int *v4;
    int *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v11;
    int v12[3];
    int v13[3];
    int v14[4];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v13, *(char **)(*(void**)this->M4 + 4));
    v12[0] = *ScenarioClassActionCoords;
    v12[1] = ScenarioClassActionCoords[1];
    v12[2] = ScenarioClassActionCoords[2];
    v4 = ToCoordPixel(&v11, v12);
    v5 = ComputeBounds(v14, 8, *v4, v4[1]);
    v6 = *v5 - 4;
    v7 = v5[1] - 4;
    v8 = v5[2] + 8;
    v9 = v5[3] + 8;
    return a2 >= v6 && a2 < v8 + v6 && a3 >= v7 && a3 < v9 + v7;
}
}

// ==== BACKFILL 0x00634510  ComputeBounds  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ComputeBounds(AbstractClass * aP0, ObjectClass * aP1, int a3, int a4)
{
{
    *(int *)aP0->__pad_0 = (int)aP1 / -2 + a3;
    *(int *)&aP0->__pad_0[4] = (int)aP1 / -2 + a4;
    *(int *)&aP0->__pad_0[8] = aP1;
    *(int *)&aP0->__pad_0[12] = aP1;
    return aP0->__pad_0;
}
}

// ==== BACKFILL 0x00634700  sub_634700  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_634700::sub_634700()
{
{
    return this->M48;
}
}

// ==== BACKFILL 0x006347A0  sub_6347A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6347A0::sub_6347A0(int a2)
{
{
    return *(int *)(this->M36 + 4 * a2);
}
}

// ==== BACKFILL 0x00634800  sub_634800  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_634800::sub_634800()
{
{
    return this + 56;
}
}

// ==== BACKFILL 0x00634810  sub_634810  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_634810::sub_634810(unsigned int * a2, int a3)
{
{
    int *ScenarioClassActionCoords;
    int v4;
    int v5;
    int v6;
    int v8[3];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v8, *(char **)(this->M36 + 4 * a3));
    v4 = *ScenarioClassActionCoords;
    v5 = ScenarioClassActionCoords[1];
    v6 = ScenarioClassActionCoords[2];
    *a2 = v4;
    *((int*)(a2) + 1) = v5;
    *((int*)(a2) + 2) = v6;
    return a2;
}
}

// ==== BACKFILL 0x00634850  sub_634850  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_634850::sub_634850(unsigned int * a2)
{
{
    int *ScenarioClassActionCoords;
    int v3;
    int v4;
    int v5;
    int v7[3];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, this + 56);
    v3 = *ScenarioClassActionCoords;
    v4 = ScenarioClassActionCoords[1];
    v5 = ScenarioClassActionCoords[2];
    *a2 = v3;
    *((int*)(a2) + 1) = v4;
    *((int*)(a2) + 2) = v5;
    return a2;
}
}

// ==== BACKFILL 0x00634880  sub_634880  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_634880::sub_634880(unsigned int * a2, int a3)
{
{
    int *ScenarioClassActionCoords;
    int v4;
    int v6[2];
    int v7[3];
    int v8[3];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v8, *(char **)(this->M36 + 4 * a3));
    v7[0] = *ScenarioClassActionCoords;
    v7[1] = ScenarioClassActionCoords[1];
    v7[2] = ScenarioClassActionCoords[2];
    Coord::To_Screen(g_TacticalClass_Instance, v7, v6);
    v4 = g_Map_VisibleRect + v6[1];
    *a2 = DSurface_ViewBounds + v6[0];
    *((int*)(a2) + 1) = v4;
    return a2;
}
}

// ==== BACKFILL 0x006348F0  sub_6348F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6348F0::sub_6348F0(unsigned int * a2)
{
{
    int *ScenarioClassActionCoords;
    int v3;
    int v5[2];
    int v6[3];
    int v7[3];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, this + 56);
    v6[0] = *ScenarioClassActionCoords;
    v6[1] = ScenarioClassActionCoords[1];
    v6[2] = ScenarioClassActionCoords[2];
    Coord::To_Screen(g_TacticalClass_Instance, v6, v5);
    v3 = g_Map_VisibleRect + v5[1];
    *a2 = DSurface_ViewBounds + v5[0];
    *((int*)(a2) + 1) = v3;
    return a2;
}
}

// ==== BACKFILL 0x00634950  sub_634950  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_634950::sub_634950()
{
{
    this->M28 = 1;
}
}

// ==== BACKFILL 0x00634960  sub_634960  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_634960::sub_634960()
{
{
    return this->M28;
}
}

// ==== BACKFILL 0x00635120  FactoryClass::ClearObjects  cls=FactoryClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int FactoryClass::ClearObjects() {
{
      int v2;
      int i;
      int v4;
      int result;
      int v6;

      v2 = this->queuedObjects;
      for ( i = 0; i < v2; ++i )
        __3_YAXPAX_Z(*(void **)(this->production + 4 * i));
      (*(void (__thiscall **)(int *))(this->NeedsSaveOrLink + 12))(this + 8);
      v4 = this->uniqueId;
      result = 0;
      if ( v4 <= 0 )
      {
        this->q0A8 = 0;
        this->q0B0 = -1;
      }
      else
      {
        do
        {
          ++result;
          v6 = *(_DWORD *)(this->vtable2 + 4 * result - 4);
          *(_DWORD *)(v6 + 8) = -1;
          *(_BYTE *)(v6 + 12) = 0;
        }
        while ( result < v4 );
        this->q0A8 = 0;
        this->q0B0 = -1;
      }
      return result;
}
} }

// ==== BACKFILL 0x00635210  sub_635210  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_635210::sub_635210()
{
{
    int result;
    int v3;
    char *v4;
    int *ScenarioClassActionCoords;
    int v6;
    int v7;
    int *v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13[3];
    int v14[3];
    char v15[112];
    char v16[108];
    short v17;
    char v18;
    this->M176 = -1;
    result = this->M168;
    if ( result )
  {
    result = this->M48;
    qmemcpy(v15, (const void *)(this + 56), 0x6Eu);
    v3 = 0;
    v11 = result;
    v15[110] = (unsigned char)this->M166;
    if ( result > 0 )
    {
    while ( 1 )
      {
    v4 = *(char **)(this->M36 + 4 * v3);
    qmemcpy(v16, v4, sizeof(v16));
    v4 += 108;
    v17 = *(short *)v4;
    v18 = v4[2];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v13, v15);
    v6 = *ScenarioClassActionCoords;
    v7 = ScenarioClassActionCoords[1];
    v12 = ScenarioClassActionCoords[2];
    v8 = GetScenarioClassActionCoords(v14, v16);
    result = *v8;
    v9 = v8[1];
    v10 = v8[2];
    if ( v6 == result && v7 == v9 && v12 == v10 )
    break;
    result = v11;
    if ( ++v3 >= v11 )
    return result;
      }
    this->M176 = v3;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x006352D0  sub_6352D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6352D0::sub_6352D0()
{
{
    int v2;
    int v3;
    char *v4;
    char result;
    v2 = 0;
    v3 = this->M16;
    if ( v3 > 0 )
  {
    do
    {
    v4 = **(char ***)(this->M4 + 4 * v2);
    result = v4[131];
    if ( !result )
    result = (*(int (__thiscall **)(char *))(*(int *)(v4) + 332))(v4);
    ++v2;
    }
    while ( v2 < v3 );
  }
    return result;
}
}

// ==== BACKFILL 0x00635310  sub_635310  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_635310::sub_635310()
{
{
    int v2;
    int v3;
    char *v4;
    char result;
    v2 = 0;
    v3 = this->M16;
    if ( v3 > 0 )
  {
    do
    {
    v4 = **(char ***)(this->M4 + 4 * v2);
    result = v4[131];
    if ( result )
    result = (*(int (__thiscall **)(char *))(*(int *)(v4) + 336))(v4);
    ++v2;
    }
    while ( v2 < v3 );
  }
    return result;
}
}

// ==== BACKFILL 0x00635350  ScenarioClass::RenderAction  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::RenderAction(int a2) {
{
      int *Viewport;
      int v4;
      int v5;
      _DWORD *ActionCoords;
      _DWORD *v7;
      int v8;
      int result;
      int v10;
      _DWORD v11[3];
      int v12[4];
      int v13;
      int v14;
      int v15;
      int v16;
      int v17;
      int v18;
      int v19;
      int v20;

      Viewport = Display::GetViewport(v12);
      v17 = *Viewport;
      v18 = Viewport[1];
      v19 = Viewport[2];
      v4 = Viewport[3];
      v5 = this->Items;
      v20 = v4;
      ActionCoords = GetScenarioClassActionCoords(v12, *(_BYTE **)(*(_DWORD *)v5 + 4));
      v11[0] = *ActionCoords;
      v11[1] = ActionCoords[1];
      v11[2] = ActionCoords[2];
      v7 = ToCoordPixel(&v10, v11);
      v8 = v7[1];
      v13 = *v7 - 4;
      v14 = v8 - 4;
      v15 = 8;
      v16 = 8;
      (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 84))(DSurface_Composite, &v17, &v13, a2);
      result = v13;
      if ( v17 < v13 + v15 && v18 < v14 + v16 && v17 + v19 > v13 )
      {
        result = v20;
        if ( v20 + v18 > v14 )
        {
          result = DataGlobal_AC4C20;
          if ( DataGlobal_AC4C28 < DataGlobal_AC4C20
            || (DataGlobal_AC4C25 || !DataGlobal_AC4C20)
            && DataGlobal_AC4C2C > 0
            && (result = (*(int (__thiscall **)(int *, int, _DWORD))(DataGlobal_AC4C18 + 8))(
                           &DataGlobal_AC4C18,
                           DataGlobal_AC4C2C + DataGlobal_AC4C20,
                           0),
                (_BYTE)result) )
          {
            result = DataGlobal_AC4C28++;
            *((_DWORD *)DataGlobal_AC4C1C + result) = this;
          }
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x006357D0  ShrinkRect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Rect_Shrink(unsigned int * a1, int a2)
{
{
    int result;
    int v3;
    int v4;
    int v5;
    int v6;
    result = 2 * a2;
    if ( (a2 & 0x40000000) != 0 && (result >= *((int*)(a1) + 2) || result >= *((int*)(a1) + 3)) )
  {
    *a1 = 0;
    *((int*)(a1) + 1) = 0;
    *((int*)(a1) + 2) = 0;
    *((int*)(a1) + 3) = 0;
  }
    else
  {
    v3 = *((int*)(a1) + 1);
    *a1 -= a2;
    v4 = v3 - a2;
    v5 = *((int*)(a1) + 3);
    v6 = result + *((int*)(a1) + 2);
    *((int*)(a1) + 1) = v4;
    *((int*)(a1) + 2) = v6;
    *((int*)(a1) + 3) = result + v5;
  }
    return result;
}
}

// ==== BACKFILL 0x00635DF0  sub_635DF0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_635DF0::sub_635DF0(unsigned int * a2)
{
{
    int *ScenarioClassActionCoords;
    int v4;
    int v5[2];
    int v6[3];
    int v7[4];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, *(char **)(*(void**)this->M4 + 4));
    v6[0] = *ScenarioClassActionCoords;
    v6[1] = ScenarioClassActionCoords[1];
    v6[2] = ScenarioClassActionCoords[2];
    Coord::To_Screen(g_TacticalClass_Instance, v6, v5);
    v5[0] += DSurface_ViewBounds;
    v4 = g_Map_VisibleRect + v5[1] - 8;
    *a2 = v5[0] - 8;
    *((int*)(a2) + 1) = v4;
    *((int*)(a2) + 2) = 16;
    *((int*)(a2) + 3) = 16;
    return a2;
}
}

// ==== BACKFILL 0x00635E90  sub_635E90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int * E4Recv_635E90::sub_635E90(int * a2)
{
{
    int *ScenarioClassActionCoords;
    int *v3;
    int *v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v10;
    int v11[3];
    int v12[3];
    int v13[4];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v12, *(char **)(*(void**)this->M4 + 4));
    v11[0] = *ScenarioClassActionCoords;
    v11[1] = ScenarioClassActionCoords[1];
    v11[2] = ScenarioClassActionCoords[2];
    v3 = ToCoordPixel(&v10, v11);
    v4 = ComputeBounds(v13, 8, *v3, v3[1]);
    v5 = *v4 - 8;
    v6 = v4[1] - 8;
    v7 = v4[2] + 8;
    v8 = v4[3];
    *a2 = v5;
    *((int*)(a2) + 1) = v6;
    *((int*)(a2) + 2) = v7 + 8;
    *((int*)(a2) + 3) = v8 + 16;
    return a2;
}
}

// ==== BACKFILL 0x00636110  ReadPointerFromECX2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_636110::ReadPointerFromECX2()
{
{
    return *(ObjectClass **)this;
}
}

// ==== BACKFILL 0x00636520  sub_636520  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_636520::sub_636520()
{
{
    this->M28 = 1;
}
}

// ==== BACKFILL 0x00636530  sub_636530  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_636530::sub_636530()
{
{
    this->M28 = 0;
}
}

// ==== BACKFILL 0x00636540  sub_636540  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_636540::sub_636540()
{
{
    return this->M28;
}
}

// ==== BACKFILL 0x00636D90  ?GetExecutionResourceId_irtualProcessor_details_Concurrency__QBEIXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int E4Recv_636D90::_GetExecutionResourceId_irtualProcessor_details_Concurrency__QBEIXZ()
{
{
    return this->M140;
}
}

// ==== BACKFILL 0x00636DC0  FactoryClass::GetState  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
int FactoryClass::GetState()
{
{
    return this->abstractFlags;
}
}

// ==== BACKFILL 0x00636EB0  ExecuteActionPlanManager_Helper_636EB0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_636EB0::sub_636EB0()
{
{
    int v1;
    v1 = this->M20 - 1;
    if ( v1 >= 0 )
    return *(int *)(this->M8 + 4 * v1);
    else
    return 0;
}
}

// ==== BACKFILL 0x00636FA0  sub_636FA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_636FA0::sub_636FA0(int a2, int a3)
{
{
    this->M144 = a2;
    this->M148 = a3;
    this->M152 = 1;
    return a2;
}
}

// ==== BACKFILL 0x00636FC0  ?GetMaskId_irtualProcessor_details_Concurrency__QBEIXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int E4Recv_636FC0::_GetMaskId_irtualProcessor_details_Concurrency__QBEIXZ()
{
{
    return this->M144;
}
}

// ==== BACKFILL 0x00636FD0  sub_636FD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_636FD0::sub_636FD0()
{
{
    return this->M148;
}
}

// ==== BACKFILL 0x00637020  ?WasExplicitlyAttached_ExternalContextBase_details_Concurrency__QBE_NXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool E4Recv_637020::_WasExplicitlyAttached_ExternalContextBase_details_Concurrency__QBE_NXZ()
{
{
    return (unsigned char)this->M152;
}
}

// ==== BACKFILL 0x00637030  sub_637030  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_637030::sub_637030()
{
{
    return this->M153;
}
}

// ==== BACKFILL 0x00637060  TabClass::processTabInput  cls=TabClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void TabClass::processTabInput() {
{
    DataGlobal_AC4B80 = (int)this;
}
} }

// ==== BACKFILL 0x00637550  FlushPlanningQueue  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void __usercall FlushPlanningQueue(CCINIClass *a1)
{
{
    char *esi1;
    CCINIClass *v2;
    int v4;
    CCINIClass *v5;
    int v6;
    esi1 = (char *)&(*(&g_MatrixTransformState + 5970))[-1].Z + 3;
    if ( (int)&(*(&g_MatrixTransformState + 5970))[-1].Z + 3 >= 0 )
  {
    v5 = a1;
    do
    {
    v2 = (CCINIClass *)*(&(*(&g_MatrixTransformState + 5967))->X + (int)esi1);
    Render_Show(v5, v6);
    if ( (int)esi1 < (int)*(&g_MatrixTransformState + 5970) )
      {
    v4 = (int)esi1;
    *(&g_MatrixTransformState + 5970) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 5970) - 1);
    if ( (int)esi1 < (int)*(&g_MatrixTransformState + 5970) )
        {
    do
          {
    ++v4;
    *((int *)*(&g_MatrixTransformState + 5967) + v4 - 1) = *(&(*(&g_MatrixTransformState + 5967))->X + v4);
          }
    while ( v4 < (int)*(&g_MatrixTransformState + 5970) );
        }
      }
    __3_YAXPAX_Z(v2);
    --esi1;
    }
    while ( (int)esi1 >= 0 );
  }
}
}

// ==== BACKFILL 0x006379C0  UI_Create_731A50_Create  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_6379C0()
{
{
    char result;
    result = DataGlobal_AC4CF4;
    if ( !DataGlobal_AC4CF4 )
  {
    DataGlobal_AC4CF4 = 1;
    result = PlayVocClass(g_RulesClass_Instance->MindClearedSound, 0x2000, 1.0, 0);
    if ( DataGlobal_AC4B80 )
    return (**(int (__thiscall ***)(int, int, int))DataGlobal_AC4B80)(DataGlobal_AC4B80, 4551, 0);
  }
    return result;
}
}

// ==== BACKFILL 0x00637A10  House_Play  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_637A10()
{
{
    char result;
    char v1[108];
    int v2;
    char v3[108];
    short v4;
    char v5;
    result = DataGlobal_AC4CF4;
    if ( DataGlobal_AC4CF4 )
  {
    EventClass::AddEvent(v3, *((int *)(HouseClass_Player) + 12), 0x2Bu);
    qmemcpy(v1, v3, sizeof(v1));
    LOWORD(v2) = v4;
    BYTE2(v2) = v5;
    Network::RecordEvent( *(__int64 *)v1, *(int *)&v1[8], *(int *)&v1[12], *(int *)&v1[16], *(int *)&v1[20], *(int *)&v1[24], *(int *)&v1[28], *(int *)&v1[32], *(int *)&v1[36], *(int *)&v1[40], *(int *)&v1[44], *(int *)&v1[48], *(int *)&v1[52], *(int *)&v1[56], *(int *)&v1[60], *(int *)&v1[64], *(int *)&v1[68], *(int *)&v1[72], *(int *)&v1[76], *(int *)&v1[80], *(int *)&v1[84], *(int *)&v1[88], *(int *)&v1[92], *(int *)&v1[96], *(int *)&v1[100], *(int *)&v1[104], v2);
    g_ScriptPool = 0;
    g_ScriptState = 0;
    g_ScriptActionPool = 0;
    DataGlobal_AC4CF4 = 0;
    result = PlayVocClass(g_RulesClass_Instance->EnterBioReactorSound, 0x2000, 1.0, 0);
    if ( DataGlobal_AC4B80 )
    return (**(int (__thiscall ***)(int, int, int))DataGlobal_AC4B80)(DataGlobal_AC4B80, 4552, 0);
  }
    return result;
}
}

// ==== BACKFILL 0x00637AA0  FactoryClass::GetFlag  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char FactoryClass::GetFlag()
{
{
    return DataGlobal_AC4CF4;
}
}

// ==== BACKFILL 0x00637DB0  ScriptAction::SetField10  cls=ScriptAction  sig=csp  renamed_refs=0  residual=- ====
bool ScriptAction::SetField10()
{
{
    return !DataGlobal_AC4CF4 || this != (void *)4;
}
}

// ==== BACKFILL 0x00637DD0  Object_Helper_637DD0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_637DD0(char a1, int a2, int a3, int a4, int a5, int a6, int a7, short a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28)
{
{
    char result;
    char v29[108];
    int v30;
    result = a1;
    if ( a1 == 4 )
  {
    HIBYTE(a8) = 1;
    qmemcpy(v29, &a1, sizeof(v29));
    LOWORD(v30) = a28;
    BYTE2(v30) = BYTE2(a28);
    return Network::RecordEvent( *(__int64 *)v29, *(int *)&v29[8], *(int *)&v29[12], *(int *)&v29[16], *(int *)&v29[20], *(int *)&v29[24], *(int *)&v29[28], *(int *)&v29[32], *(int *)&v29[36], *(int *)&v29[40], *(int *)&v29[44], *(int *)&v29[48], *(int *)&v29[52], *(int *)&v29[56], *(int *)&v29[60], *(int *)&v29[64], *(int *)&v29[68], *(int *)&v29[72], *(int *)&v29[76], *(int *)&v29[80], *(int *)&v29[84], *(int *)&v29[88], *(int *)&v29[92], *(int *)&v29[96], *(int *)&v29[100], *(int *)&v29[104], v30);
  }
    return result;
}
}

// ==== BACKFILL 0x00638C40  ExecuteActionPlanManager_Helper_638C40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool E4Recv_638C40::sub_638C40(int a2, char a3)
{
{
    if ( this != (void *)1 && this != (void *)11 )
    return 0;
    if ( a3 == 11 )
    return 1;
    return this == (void *)11 && !a3;
}
}

// ==== BACKFILL 0x00638CE0  ScriptAction::ClassifyAction  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ScriptAction::ClassifyAction(int * a1, char * a2)
{
{
    char v3;
    int *Type;
    int v6;
    int *v7;
    int Value;
    int v9;
    char *v10;
    char v11[108];
    short v12;
    char v13;
    v3 = *a2;
    if ( *a2 == 9 || v3 == 6 || v3 == 7 )
    return 0;
    if ( Team_Load(a1, *((int*)(a2) + 12), *(int *)(a2 + 14), *((int*)(a2) + 18)) )
    return 0;
    Type = (int *)BuildingClass::GetPlanningToken(a1);
    if ( !Type )
    return -1;
    v6 = Type[5];
    if ( v6 <= 0 )
    return -1;
    v7 = *(int **)(Type[2] + 4 * v6 - 4);
    Value = Array::FindValue(v7, *Type);
    if ( Value == -1 )
    v9 = 0;
    else
    v9 = *(int *)(v7[1] + 4 * Value);
    v10 = *(char **)(v9 + 4);
    qmemcpy(v11, v10, sizeof(v11));
    v10 += 108;
    v12 = *(short *)v10;
    v13 = v10[2];
    if ( v11[12] == 7 || v11[12] == 8 || v11[12] == 9 )
    return 1;
    if ( (v11[12] == 1 || v11[12] == 11) && (v11[18] == 11 || v11[12] == 11 && !v11[18]) )
    return 2;
    else
    return -1;
}
}

// ==== BACKFILL 0x00638F90  sub_638F90  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_638F90(int a1, int a2)
{
{
    int *Coords;
    int *v3;
    int v4;
    int v6;
    int v7[3];
    int v8[4];
    int v9[4];
    if ( !g_ScriptPool )
    return 0;
    Coords = ScriptAction::GetCoords((int **)g_ScriptPool, v8);
    v7[0] = *Coords;
    v7[1] = Coords[1];
    v7[2] = Coords[2];
    v3 = ToCoordPixel(&v6, v7);
    Rect::Set(v9, *v3 - 4, v3[1] - 4, 8, 8);
    v8[0] = v9[0];
    v4 = v9[1] - 4;
    if ( a1 < v9[0] - 4 )
    return 0;
    if ( a1 < v9[2] + 8 + v9[0] - 4 && a2 >= v4 && a2 < v9[3] + 8 + v4 )
    return g_ScriptPool;
    else
    return 0;
}
}

// ==== BACKFILL 0x0063A4A0  sub_63A4A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_63A4A0::sub_63A4A0()
{
{
    DataGlobal_AC4C90 = (int)this;
}
}

// ==== BACKFILL 0x0063AAC0  UI_Handle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char UI_Handle(MouseClass * aP0, int a2)
{
{
    char result;
    *((__int64 *)&(&g_MatrixTransformState)[503] + 1) = -1;
    result = *((char *)&(&g_MatrixTransformState)[506] + 4);
    *((char *)&g_MatrixTransformState + 24224) = 1;
    if ( *((char *)&(&g_MatrixTransformState)[506] + 4) )
  {
    result = HouseClass_Player[44924];
    if ( *(int *)&HouseClass_Player[44924] <= 0 )
    {
    *((__int64 *)&(&g_MatrixTransformState)[503] + 1) = __PAIR64__(a2, (unsigned int)aP0);
    return (char)aP0;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0063AB00  UI_Handle_63AB00  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_63AB00(int a1, int a2)
{
{
    int v2;
    LOBYTE(v2) = DataGlobal_AC4CF4;
    DataGlobal_AC4CB0 = 0;
    if ( DataGlobal_AC4CF4 )
  {
    if ( (int)g_SelectionManager <= 0 )
    {
    if ( g_ScriptActionPool )
      {
    v2 = abs32(a1 - DataGlobal_AC4C68);
    if ( v2 <= 3 )
        {
    v2 = abs32(a2 - DataGlobal_AC4C6C);
    if ( v2 <= 3 )
    g_ScriptActionPool = 0;
        }
      }
    }
  }
    return v2;
}
}

// ==== BACKFILL 0x0063AD30  sub_63AD30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_63AD30::sub_63AD30()
{
{
    g_ScriptState = (int)this;
}
}

// ==== BACKFILL 0x0063CA80  Render_Render_63CA80  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_63CA80(unsigned int * a1, unsigned char * a2, int a3)
{
{
    int *ScenarioClassActionCoords;
    int v5;
    int v6;
    int v7;
    int *v8;
    int v10[3];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v10, a2);
    v5 = *ScenarioClassActionCoords;
    v6 = ScenarioClassActionCoords[1];
    v7 = ScenarioClassActionCoords[2];
    if ( *ScenarioClassActionCoords == -1 && v6 == -1 && v7 == -1 && a3 )
  {
    v8 = (int *)(*(int (__thiscall **)(int, int *))(*(int *)(a3) + 88))(a3, v10);
    v5 = *v8;
    v6 = v8[1];
    v7 = v8[2];
  }
    *a1 = v5;
    *((int*)(a1) + 1) = v6;
    *((int*)(a1) + 2) = v7;
    return a1;
}
}

// ==== BACKFILL 0x0063D070  ColorLerpAndPack  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int ColorLerpAndPack(short * a1, unsigned char * a2, ObjectClass * aP1)
{
{
    short v3;
    unsigned char v5[8];
    v3 = *a1;
    v5[2] = *((char *)(a1) + 2);
    *(short *)v5 = v3;
    Color::Lerp(v5, aP1, a2);
    return (v5[0] >> g_CellDirectionOffsets[5956] << g_CellDirectionOffsets[5952])
    | (v5[1] >> g_CellDirectionOffsets[5972] << g_CellDirectionOffsets[5968])
    | (v5[2] >> g_CellDirectionOffsets[5964] << g_CellDirectionOffsets[5960]);
}
}

// ==== BACKFILL 0x0063D210  ActionScenarioClassCoordToScreen  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * ActionScenarioClassCoordToScreen(BuildingClass * aP0, const void * a1, int a3)
{
{
    int v3;
    int v5;
    int *ScenarioClassActionCoords;
    int v7;
    int v8;
    Tactical *v9;
    int v10;
    int a1a[3];
    int v13[3];
    char v14[12];
    char v15[112];
    v3 = -1;
    v5 = -1;
    if ( a1 )
  {
    qmemcpy(v15, a1, 0x6Fu);
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v13, v15);
    v7 = *ScenarioClassActionCoords;
    v8 = ScenarioClassActionCoords[1];
    v9 = (Tactical *)ScenarioClassActionCoords[2];
    if ( *ScenarioClassActionCoords == -1 && v8 == -1 && v9 == (Tactical *)-1 && a3 )
    {
    v10 = (*(int (__thiscall **)(int, char *))(*(int *)(a3) + 88))(a3, v14);
    v7 = *(int *)v10;
    v8 = *(int *)(v10 + 4);
    v9 = *(Tactical **)(v10 + 8);
    }
    a1a[1] = v8;
    a1a[0] = v7;
    a1a[2] = v9;
    Coord::To_Screen(*(int **)&DataGlobal_87C374[44976], a1a, (IUnknown *)v13);
    v3 = *(int *)&DataGlobal_87C374[44076] + v13[0];
    v5 = *(int *)&DataGlobal_87C374[44080] + v13[1];
  }
    *(int *)aP0->__pad_0 = v3;
    *(int *)&aP0->__pad_0[4] = v5;
    return (int *)aP0->__pad_0;
}
}

// ==== BACKFILL 0x0063D2D0  sub_63D2D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_63D2D0::sub_63D2D0()
{
{
    int result;
    int v2;
    int v3;
    int **i;
    int v5;
    v5 = **(void**)this->M4;
    result = (HIBYTE(DataGlobal_A83CDA) >> g_BitMask_Red << g_BitShift_Blue)
    | ((unsigned char)DataGlobal_A83CDA >> g_BitMask_Blue << g_BitMask_Green)
    | ((unsigned char)DataGlobal_A83CD9 >> g_BitShift_Green_0 << g_BitShift_Red);
    if ( v5 )
  {
    if ( g_ScriptActionPool )
    {
    v2 = *(int *)(g_ScriptActionPool + 16);
    v3 = 0;
    if ( v2 > 0 )
      {
    for ( i = *(int ***)(g_ScriptActionPool + 4); **i != v5; ++i )
        {
    if ( ++v3 >= v2 )
    return result;
        }
    if ( v3 != -1 )
    return (HIBYTE(DataGlobal_A80221) >> g_BitMask_Red << g_BitShift_Blue)
    | ((unsigned char)DataGlobal_A80221 >> g_BitMask_Blue << g_BitMask_Green)
    | ((unsigned char)DataGlobal_A80220 >> g_BitShift_Green_0 << g_BitShift_Red);
      }
    }
    else if ( *(char *)(v5 + 131) )
    {
    return (HIBYTE(DataGlobal_A80221) >> g_BitMask_Red << g_BitShift_Blue)
    | ((unsigned char)DataGlobal_A80221 >> g_BitMask_Blue << g_BitMask_Green)
    | ((unsigned char)DataGlobal_A80220 >> g_BitShift_Green_0 << g_BitShift_Red);
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0063D400  DSurface::DrawMarker  cls=DSurface  sig=csp  renamed_refs=0  residual=- ====
int DSurface::DrawMarker(AbstractClass * aP1, ObjectClass * aP2)
{
{
    int *Viewport;
    int v6[4];
    int v7[4];
    int v8[4];
    Viewport = Display::GetViewport(v6);
    v8[0] = *Viewport;
    v8[1] = Viewport[1];
    v8[2] = Viewport[2];
    v8[3] = Viewport[3];
    v6[0] = (int)aP1;
    v7[2] = 6;
    v7[0] = (char *)aP1 - 3;
    v7[1] = (char *)aP2 - 3;
    v7[3] = 6;
    return (*(int (__thiscall **)(int, int *, int *, void *))(**(int **)&DataGlobal_87F8E4[31288] + 84))( *(int *)&DataGlobal_87F8E4[31288], v8, v7, this);
}
}

// ==== BACKFILL 0x0063D540  BuildingClass::updateAnimationState  cls=BuildingClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int BuildingClass::updateAnimationState() {
{
    int v1;
    v1 = this->vtable4;
    if ( v1 == 11 )
    return Memory::Alloc76();
    if ( v1 == 29 )
    return Factory::IdleHandler();
    return -1;
}
} }

// ==== BACKFILL 0x0063D910  DrawTacticalFillScanline  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char DrawTacticalFillScanline(AbstractClass * aP0, BuildingClass * aP1, int a3, BuildingClass * aP3, int a5, int a6)
{
{
    char *v7;
    int v8;
    int v9;
    v7 = &aP0->__pad_0[-((int)aP0 >> 31)];
    v8 = (int)aP0 / 2;
    v9 = (int)aP0 / 2 - (int)aP0 + 1;
    if ( v9 <= (int)aP0 / 2 )
  {
    do
    LOBYTE(v7) = DrawTacticalLine2D(v9++, (ObjectClass *)aP1, a3, (int)aP3, a5, a6, 0);
    while ( v9 <= v8 );
  }
    return (char)v7;
}
}

// ==== BACKFILL 0x0063D960  globalHelper_03D960  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_03D960(Tactical * aP0, int a2, int a3, int a4, int a5, int a6)
{
{
    int v6;
    int v7;
    int v8;
    int v9;
    v6 = (int)&aP0[-1].field_539C + 2;
    if ( v6 > 0 )
  {
    v9 = v6 - (v6 >> 31);
    v8 = v6 / 2;
    v7 = v6 / 2 - v6 + 1;
  }
    else
  {
    v7 = 0;
    v8 = 0;
  }
    for ( ; v7 <= v8; ++v7 )
    LOBYTE(v9) = DrawTacticalLine2D(v7, (ObjectClass *)a2, a3, a4, a5, a6, 1);
    return v9;
}
}

// ==== BACKFILL 0x0063D9C0  FactoryClass::RemoveFromArrays  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* FactoryClass::RemoveFromArrays(int a2) {
{
    int v3;
    int v4;
    int v5;
    ObjectClass *v6;
    ObjectClass *v7;
    int *v9;
    FactoryClass::ClearObjects(this);
    v9 = this;
    v3 = (*(int (__thiscall **)(int *, int **))(g_ScriptConfig + 16))(&g_ScriptConfig, &v9);
    if ( v3 != -1 )
    Array::RemoveAt(&g_ScriptConfig, v3);
    v4 = (*(int (__thiscall **)(int *, int **))(DataGlobal_AC4B30 + 16))(&DataGlobal_AC4B30, &v9);
    if ( v4 != -1 )
    Array::RemoveAt(&DataGlobal_AC4B30, v4);
    v5 = (*(int (__thiscall **)(int *, int **))(DataGlobal_AC4C18 + 16))(&DataGlobal_AC4C18, &v9);
    if ( v5 != -1 )
    Array::RemoveAt(&DataGlobal_AC4C18, v5);
    if ( (int *)g_ScriptPool == v9 )
    g_ScriptPool = 0;
    if ( (int *)g_ScriptState == v9 )
    g_ScriptState = 0;
    if ( (int *)g_ScriptActionPool == v9 )
    g_ScriptActionPool = 0;
    v6 = (ObjectClass *)*(this + 9);
    *(this + 8) = (int)&vt_VectorClass_PlanningBranchClass;
    if ( v6 && *((char *)(this) + 45) )
  {
    __3_YAXPAX_Z(v6);
    *(this + 9) = 0;
  }
    *((char *)(this) + 45) = 0;
    *(this + 10) = 0;
    v7 = (ObjectClass *)*(this + 1);
    *(void**)this = (int)&vt_VectorClass_PlanningMemberClass;
    if ( v7 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v7);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
} }

// ==== BACKFILL 0x0063DB20  HandlePlanningModeClick_Handle  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_63DB20::sub_63DB20(unsigned int * a2)
{
{
    int v2;
    int v3;
    int result;
    result = 0;
    if ( *a2 >= *(void**)this && *a2 < *(void**)(this) + this->M8 )
  {
    v2 = *((int*)(a2) + 1);
    v3 = this->M4;
    if ( v2 >= v3 && v2 < v3 + this->M12 )
    return 1;
  }
    return result;
}
}

// ==== BACKFILL 0x0063DFD0  FactoryClass::RemoveItemAt  cls=FactoryClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { int FactoryClass::RemoveItemAt(int a1) {
{
      int v3;
      int v4;
      int v5;

      v3 = this->vt4(aP1);
      if ( v3 == -1 )
        return 0;
      v4 = this->uniqueId;
      if ( v3 >= v4 )
        return 0;
      v5 = v4 - 1;
      for ( this->uniqueId = v5; v3 < this->uniqueId; *(_DWORD *)(this->vtable2 + 4 * v3 - 4) = *(_DWORD *)(this->vtable2 + 4 * v3) )
        ++v3;
      return 1;
}
} }

// ==== BACKFILL 0x0063E140  VectorClass::Cleanup2  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void VectorClass::Cleanup2()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// ==== BACKFILL 0x0063E540  VectorClass::Append  cls=VectorClass  sig=csp  renamed_refs=1  residual=- ====
char VectorClass::Append(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->Capacity;
    if ( this->Count >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->Count;
    v7 = this->Items;
    this->Count = v6 + 1;
    *(int *)(v7 + 4 * v6) = *(int *)aP1->vtable1;
    return 1;
}
}

// ==== BACKFILL 0x0063E900  VectorClass::EraseAt  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
char VectorClass::EraseAt(IUnknown * aP1)
{
{
    int v3;
    int v4;
    int v5;
    v3 = this->FindItemIndex(aP1);
    if ( v3 == -1 )
    return 0;
    v4 = this->Count;
    if ( v3 >= v4 )
    return 0;
    v5 = v4 - 1;
    for ( this->Count = v5; v3 < this->Count; *(int*)(this->Items + 4 * v3 - 4) = *(int*)(this->Items + 4 * v3) )
    ++v3;
    return 1;
}
}

// ==== BACKFILL 0x0063F000  FactoryClass::RemoveItem  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int FactoryClass::RemoveItem(int a1) {
{
    int v2;
    VectorClass *v3;
    int v4;
    v2 = this->uniqueId;
    v3 = a1;
    if ( (int)a1 >= v2 )
    return 0;
    v4 = v2 - 1;
    this->uniqueId = v4;
    if ( (int)a1 < v4 )
  {
    do
    {
    v3 = (VectorClass *)((char *)(v3) + 1);
    *(int *)(*(this + 1) + 4 * (int)v3 - 4) = *(int *)(*(this + 1) + 4 * (int)v3);
    }
    while ( (int)v3 < this->uniqueId );
  }
    return 1;
}
} }

// ==== BACKFILL 0x0063F6B0  RadarClass::Create  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RadarClass::Create() {
{
      RadarClass::Construct((_DWORD *)this);
      this->q150C = 0;
      this->q1510 = Timer::GetTicks();
      this->q1518 = 0;
      this->q151C = 0;
      this->q1520 = Timer::GetTicks();
      this->q1528 = 0;
      this->q153C = -1;
      this->q1540 = -1;
      this->q152C = 0;
      this->q1530 = 0;
      this->q1534 = 0;
      this->q1538 = 0;
      *(_DWORD *)this = 0;
      return this;
}
} }

// ==== BACKFILL 0x0063F730  PowerClass::updateDrain  cls=PowerClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* PowerClass::updateDrain() {
{
      int v2;
      int Ticks;
      #441 *result; // eax
      _DWORD v5[2];

      RadarClass::Destru_vt07((int)this);
      this->q153C = -1;
      this->q1540 = -1;
      this->q1510 = Timer::GetTicks(v5);
      v2 = v5[0];
      this->q151C = 0;
      this->q1514 = v2;
      this->q1518 = 0;
      Ticks = Timer::GetTicks(v5);
      this->q152C = 0;
      this->q1530 = 0;
      this->q1520 = Ticks;
      result = (#441 *)v5[0];
      this->q1534 = 0;
      this->q1538 = 0;
      this->q1524 = result;
      this->q1528 = 0;
      return result;
}
} }

// ==== BACKFILL 0x0063F7C0  PowerClass::checkBlackout  cls=PowerClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void PowerClass::checkBlackout() {
{
      void *result;

      RadarClass::Destru_vt53(this);
      result = LoadFileSHP(DataGlobal_836D9C, (bool *)&DataGlobal_AC4E78);
      DataGlobal_AC4E74 = result;
      return result;
}
} }

// ==== BACKFILL 0x0063F810  sub_63F810  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_63F810::sub_63F810()
{
{
    int *v1;
    int v3;
    this->M5404 = 10;
    v1 = this + 1348;
    this->M5392 = Timer::GetTicks();
    v1[1] = v3;
    v1[2] = 3;
    return v3;
}
}

// ==== BACKFILL 0x0063F8F0  sub_63F8F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
long long E4Recv_63F8F0::sub_63F8F0()
{
{
    int v2;
    int v4;
    v2 = PowerBar::CalcFill();
    v4 = this->M5420 + this->M5424 + this->M5428;
    if ( v4 > v2 )
    v4 = v2;
    return Math::RoundToInt((double)v4 / (double)v2 * 5.0);
}
}

// ==== BACKFILL 0x0063FDC0  sub_63FDC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_63FDC0::sub_63FDC0()
{
{
    int v2;
    int result;
    int v4;
    int v5;
    int v6;
    int v7;
    PowerBar::ComputeFill(&v5, &v7, &v6);
    v2 = this->M5420;
    if ( v2 <= v5 )
  {
    v4 = this->M5428;
    if ( v4 <= v6 )
    {
    result = this->M5424;
    if ( result > v7 )
    this->M5424 = --result;
    }
    else
    {
    result = v4 - 1;
    this->M5428 = result;
    }
  }
    else
  {
    result = v2 - 1;
    this->M5420 = result;
  }
    return result;
}
}

// ==== BACKFILL 0x0063FE30  sub_63FE30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_63FE30::sub_63FE30()
{
{
    int v2;
    int result;
    int v4;
    int v5;
    int v6;
    int v7;
    PowerBar::ComputeFill(&v6, &v7, &v5);
    v2 = this->M5428;
    if ( v2 >= v5 )
  {
    v4 = this->M5420;
    if ( v4 >= v6 )
    {
    result = this->M5424;
    if ( result < v7 )
    this->M5424 = ++result;
    }
    else
    {
    result = v4 + 1;
    this->M5420 = result;
    }
  }
    else
  {
    result = v2 + 1;
    this->M5428 = result;
  }
    return result;
}
}
