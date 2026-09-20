// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x005F15C0  sub_5F15C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_5F15C0::sub_5F15C0(int a2, int a3, int a4, short a5)
{
{
    this->M68 = a2;
    this->M72 = a3;
    this->M8 = a4;
    this->M76 = a5;
    this->M44 = 60;
    this->M92 = 60;
    *(void**)this = &vt_NullModemClass;
    this->M64 = -1;
    this->M56 = 0;
    this->M80 = 0;
    this->M4 = 0;
    this->M16 = 500;
    this->M12 = 0;
    this->M24 = -1;
    this->M28 = 0;
    this->M32 = 0;
    this->M36 = 3000;
    this->M40 = 1200;
    this->M48 = 43;
    this->M104 = 0;
    this->M108 = 0;
    this->M112 = 0;
    this->M60 = 0;
    this->M96 = -1;
    this->M100 = 1200;
    this->M52 = 0;
    return this;
}
}

// ==== BACKFILL 0x005F1950  NullModemClass::COMStub  cls=NullModemClass  sig=csp  renamed_refs=0  residual=- ====
int NullModemClass::COMStub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall NullModemClass::_vt04(_DWORD *this)
{
  return *(this + 15); /*0x5f1953*/
}
}

// ==== BACKFILL 0x005F1960  ObjectClass::FreeResources  cls=ObjectClass  sig=csp  renamed_refs=4  residual=- ====
namespace ra2 { namespace game { int ObjectClass::FreeResources() {
{
    void (__thiscall ***v2)(int, int);
    v2 = *(void (__thiscall ****)(int, int))(this + 56);
    if ( v2 )
  {
    (**v2)(v2, 1);
    this->attachedBomb = 0;
  }
    if ( this->customSound_controller )
  {
    __3_YAXPAX_Z(*(void **)(this + 80));
    this->customSound_controller = 0;
  }
    if ( this->vtable2 )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->vtable2 = 0;
  }
    if ( this->vtable4 )
  {
    __3_YAXPAX_Z(*(void **)(this + 12));
    this->vtable4 = 0;
  }
    this->ambientSoundController = 0;
    return 1;
}
} } }

// ==== BACKFILL 0x005F1B70  ObjectClass::DetachAndFree  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::DetachAndFree() {
{
    int result;
    if ( this->TiberiumClass_field_F4 != -1 && g_ClipboardBuffer )
  {
    SerialPort::Close();
    if ( g_ClipboardBuffer )
    (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1);
    g_ClipboardBuffer = 0;
    this->TiberiumClass_field_F4 = -1;
    return ObjectClass::FreeResources((int)this);
  }
    return result;
}
} } }

// ==== BACKFILL 0x005F1BF0  Stream::WriteBlock  cls=Stream  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int Stream::WriteBlock(int a1, int a2, int a3) {
{
      int result;

      if ( !this->q03C )
        return 0;
      result = (*(int (__thiscall **)(_DWORD, CellStruct *, int, int, _DWORD))(**(_DWORD **)(this + 56) + 8))(
                 this->q038,
                 aP1,
                 a3,
                 a4,
                 0);
      if ( !result )
        ++this->q068;
      return result;
}
} }

// ==== BACKFILL 0x005F1C30  ObjectTypeClass::CreateInstance  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::CreateInstance(CampaignScore * aP1, CampaignScore * aP2)
{
{
    if ( this->zero_3C )
    return (*(int (__thiscall **)(int, CampaignScore *, CampaignScore *))(**(int **)(this + 56) + 16))( this->TargetStrengthCoefficient, aP1, aP2);
    else
    return 0;
}
}

// ==== BACKFILL 0x005F1EE0  CellClass::GetBridgeIndexThunk  cls=NullModemClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::GetBridgeIndexThunk() {
{
    int v1;
    v1 = *(this + 14);
    if ( v1 )
    return CellClass::GetBridgeIndex(*(int **)(v1 + 4));
    else
    return 0;
}
} }

// ==== BACKFILL 0x005F1F20  sub_5F1F20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5F1F20::sub_5F1F20()
{
{
    int v2;
    int *v3;
    int TileIndex;
    v2 = 0;
    v3 = *(int **)(this->M56 + 4);
    if ( (int)v3[10] <= 0 )
    return 0;
    while ( 1 )
  {
    TileIndex = Terrain::GetTileIndex(v3, v2);
    if ( TileIndex )
    {
    if ( !*(char *)(*(int *)(TileIndex + 20) + 2) && (*(char *)TileIndex & 2) == 0 )
    break;
    }
    ++v2;
    v3 = *(int **)(this->M56 + 4);
    if ( v2 >= v3[10] )
    return 0;
  }
    return *(int *)(TileIndex + 20);
}
}

// ==== BACKFILL 0x005F3340  nullsub_28  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_28()
{
  ;
}

// ==== BACKFILL 0x005F3440  EventClass::GetState  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int EventClass::GetState(int a1)
{
return 0;
}

// ==== BACKFILL 0x005F3450  Dialog::CheckButtonState  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
unsigned int Dialog::CheckButtonState()
{
{
    int v0;
    char v2[84];
    v0 = (*(int (__thiscall **)(HWND))(*(int *)(g_ClipboardBuffer) + 12))(g_ClipboardBuffer);
    if ( (*(int (__thiscall **)(HWND, char *, int, char *, int, int, int, int))(*(int *)(g_ClipboardBuffer) + 28))( g_ClipboardBuffer, DataGlobal_832678, 13, v2, 81, 90, 1, -1) == 2 )
    return v0 & 0xFFFFFF7F;
    return v0;
}
}

// ==== BACKFILL 0x005F34D0  sub_5F34D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5F34D0(char * String)
{
{
    int v1;
    unsigned int v2;
    v1 = 0;
    v2 = strlen(String) + 1;
    if ( (int)(v2 - 1) <= 0 )
    return atoi(String);
    while ( isdigit(String[v1]) )
  {
    if ( ++v1 >= (int)(v2 - 1) )
    return atoi(String);
  }
    return -1;
}
}

// ==== BACKFILL 0x005F3520  NullModemClass::COMStub_Return0  cls=NullModemClass  sig=csp  renamed_refs=0  residual=- ====
int NullModemClass::COMStub_Return0(int a1)
{
return 0;
}

// ==== BACKFILL 0x005F3530  NullModemClass::Send  cls=NullModemClass  sig=csp  renamed_refs=0  residual=- ====
int NullModemClass::Send(int a1)
{
return 0;
}

// ==== BACKFILL 0x005F3540  NullModemClass::Disconnect  cls=NullModemClass  sig=csp  renamed_refs=0  residual=- ====
int NullModemClass::Disconnect(int a2, int a3, int a4)
{
{
    return this->Connect(a2, a3, a4, 1);
}
}

// ==== BACKFILL 0x005F35A0  NullModemClass::ddtor  cls=NullModemClass  sig=csp  renamed_refs=0  residual=- ====
int NullModemClass::ddtor(int a2, int a3, int a4)
{
    if ( this->linkOpen )
        return this->linkObject->Dispatch(a2, a3);
    return 0;
}

// ==== BACKFILL 0x005F3B50  ObjectClass::Init  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* ObjectClass::Init(int a1) {
{
      AbstractClass::InitVtables(this, (int)aP1);
      *this = &ObjectClass::`vftable';
      *(this + 1) = &ObjectClass::`vftable';
      *(this + 2) = &ObjectClass::`vftable';
      *(this + 3) = &vt_ObjectClass;
      return this;
}
} } }

// ==== BACKFILL 0x005F3DB0  ObjectClass::CalcTargetFacing  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* ObjectClass::CalcTargetFacing(void* aP1, int aP2) {
{
    ObjectClass *v4;
    int *v5;
    double v6;
    char v8[12];
    char v9[12];
    ObjectClass *aP2a;
    v4 = (ObjectClass *)(*(int (__thiscall **)(ObjectClass *, char *))(*(int *)aP2->__pad_0 + 72))(aP2, v8);
    v5 = (int *)this->Delete(v9);
    aP2a = *(ObjectClass **)v4->__pad_0;
    v6 = Math::CalcAngle((double)v5[1] - (double)*(int *)&v4->__pad_0[4], (double)*(int *)v4->__pad_0 - (double)*v5);
    LOWORD(aP2a) = Math::RoundToInt((v6 - 1.570796326794897) * -10430.06004058427);
    aP1->field_0 = (int)aP2a;
    return &aP1->field_0;
}
} } }

// ==== BACKFILL 0x005F3E30  ObjectClass::HasC4  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::HasC4() {
{
    int v1;
    v1 = this->COMStub_Return0_34();
    return (*(int (__thiscall **)(int))(*(int *)(v1) + 156))(v1);
}
} } }

// ==== BACKFILL 0x005F3E50  ObjectClass::StepCleanup  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::StepCleanup(void* a2) {
{
    this->COMStub_Return0_34();
    return AbstractTypeClass::NameEquals(a2);
}
} } }

// ==== BACKFILL 0x005F4240  AbstractClass::COMStub_29  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_29()
{
return 0;
}

// ==== BACKFILL 0x005F4250  AbstractClass::COMStub_28  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_28()
{
return 0;
}

// ==== BACKFILL 0x005F4260  ObjectClass::GetThreatLevel  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::GetThreatLevel() {
{
    if ( this->Open() )
    return (this->DropAsBomb() >= g_RulesClass_Instance->?[13]) + 3;
    else
    return 2;
}
} } }

// ==== BACKFILL 0x005F42A0  AbstractClass::COMStub_Ret2147483647_35  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Ret2147483647_35()
{
return 0x7FFFFFFF;
}

// ==== BACKFILL 0x005F42B0  AbstractClass::COMStub_Return0_37  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_37()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x005F42C0  AbstractClass::COMStub_Return0_38  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_38()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x005F42D0  AbstractClass::COMStub_Return0_39  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_39()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x005F42E0  AbstractClass::COMStub_Return0_40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_40()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x005F42F0  AbstractClass::COMStub_Return0_56  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_56()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x005F4300  AbstractClass::COMStub_Return0_57  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_57()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x005F4310  AbstractClass::COMStub_Return0_63  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_63()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x005F4320  AbstractClass::COMStub_64  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_64()
{
return 0;
}

// ==== BACKFILL 0x005F4330  AbstractClass::COMStub_Return0_71  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_71()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x005F4340  AbstractClass::COMStub_Return0_72  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_72()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x005F4350  AbstractClass::COMStub_81  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_81()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x005F4360  AbstractClass::COMStub_80  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_80()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x005F4370  AbstractClass::COMStub_Return0_82  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_82()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x005F4380  AbstractClass::COMStub_89  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_89()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x005F4390  AbstractClass::COMStub_90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_90()
{
return 0;
}

// ==== BACKFILL 0x005F43A0  AbstractClass::COMStub_Return0_93  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_93()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x005F43B0  AircraftClass::StubReturnFalse3  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
bool AircraftClass::StubReturnFalse3() { return false; }

// ==== BACKFILL 0x005F43C0  AircraftClass::StubReturnTrue  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
bool AircraftClass::StubReturnTrue()  { return true; }

// ==== BACKFILL 0x005F43D0  AbstractClass::COMStub_Return0_96  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_96()
{
return 0;
}

// ==== BACKFILL 0x005F43E0  AbstractClass::processStateUpdate  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::processStateUpdate()
{
return -1;
}

// ==== BACKFILL 0x005F43F0  AircraftClass::StubReturnFalse4  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
bool AircraftClass::StubReturnFalse4() { return false; }

// ==== BACKFILL 0x005F4400  AbstractClass::COMStub_Return0_104  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_104()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x005F4410  ObjectClass::MoveToDirection  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::MoveToDirection() {
{
      int v2;
      int v3;
      int v4;
      int v5;
      int v6;
      void *v7;
      _DWORD v9[3];
      int v10;

      this->vt73(0);
      v2 = this->location;
      v3 = this->q0A0;
      v9[2] = this->q0A4;
      v4 = DataGlobal_89F6D8[2 * (v10 & 7)];
      v5 = v3 + DataGlobal_89F6DC[2 * (v10 & 7)];
      v6 = *(_DWORD *)this;
      v9[1] = v5;
      v9[0] = v2 + v4;
      v7 = Coord::To_Cell(&DataGlobal_87F7E8, v9);
      if ( !(*(int (__thiscall **)(#374 *, void *, int, int, _DWORD, int))(v6 + 428))(this, v7, v10, -1, 0, 1) )
        this->vt109(v9);
      return this->vt73(1);
}
} } }

// ==== BACKFILL 0x005F4730  ObjectClass::GetPlacementScreenRect  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::GetPlacementScreenRect() {
{
      _DWORD *v2;
      int v3;
      int *FoundationSize;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;
      int v14;
      int v15;
      _DWORD v16[3];
      int v17;
      _DWORD *v18;

      v2 = (_DWORD *)this->vt43(v16);
      Coord::To_Screen(g_TacticalClass_Instance, v2, &v14);
      v3 = this->vt27();
      if ( v3 )
      {
        FoundationSize = Building::GetFoundationSize(v16, 0);
        v6 = *FoundationSize;
        v7 = FoundationSize[1];
        v8 = FoundationSize[2];
        v9 = FoundationSize[3];
        v10 = *(__int16 *)(v3 + 2);
        v17 = v9;
        v11 = v14 + v6 - v10 / 2;
        v12 = v15 + v7 - *(__int16 *)(v3 + 4) / 2;
        v15 = v12 + g_Map_VisibleRect;
        if ( DSurface_ViewBounds >= DSurface_ViewBounds + v11 + v8
          || g_Map_VisibleRect >= v15 + v9
          || DSurface_ViewBounds + g_Map_VisibleRectOffset <= DSurface_ViewBounds + v11
          || g_DSurface_WindowOffset + g_Map_VisibleRect <= v15 )
        {
          *v18 = DataGlobal_AC1350;
          v18[1] = DataGlobal_AC1354;
          v18[2] = DataGlobal_AC1358;
          v18[3] = DataGlobal_AC135C;
          return (int)v18;
        }
        else
        {
          *v18 = v11;
          v13 = v17;
          v18[1] = v12;
          v18[2] = v8;
          v18[3] = v13;
          return (int)v18;
        }
      }
      else
      {
        *v18 = DataGlobal_AC1350;
        v18[1] = DataGlobal_AC1354;
        v18[2] = DataGlobal_AC1358;
        v18[3] = DataGlobal_AC135C;
        return (int)v18;
      }
}
} } }

// ==== BACKFILL 0x005F4B10  ObjectClass::CalcDrawRect  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::CalcDrawRect() {
{
      int result;
      int v3;
      _DWORD *v4;
      int *v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;
      int v14;
      int v16;
      int v17;
      int v18;
      int v19;
      int v20;
      int v21;
      int *v22;
      char v23;
      int v24;
      int v25;

      if ( (ArmageddonMode || (result = (int)g_hWnd) == 0 || (v23 || this->needsRedraw) && !this->inLimbo)
        && ((v3 = *(_DWORD *)this,
             this->needsRedraw = 0,
             v4 = (_DWORD *)(*(int (__thiscall **)(#374 *, int *))(v3 + 172))(this, &v18),
             Coord::To_Screen(g_TacticalClass_Instance, v4, &v16))
         || (result = this->vt11(), result == 24)) )
      {
        v19 = g_Map_VisibleRect;
        v20 = g_Map_VisibleRectOffset;
        v21 = g_DSurface_WindowOffset;
        v5 = v22;
        v6 = 0;
        v7 = 0;
        v8 = 0;
        v9 = 0;
        v10 = DSurface_ViewBounds;
        v14 = v22[2];
        if ( v14 > 0 && v22[3] > 0 && g_Map_VisibleRectOffset > 0 && g_DSurface_WindowOffset > 0 )
        {
          v24 = *v22;
          if ( DSurface_ViewBounds < *v22 )
          {
            v10 = *v22;
            v20 += DSurface_ViewBounds - *v22;
          }
          if ( v20 >= 1 )
          {
            v11 = v22[1];
            if ( v19 >= v11 )
            {
              v5 = v22;
            }
            else
            {
              v21 += v19 - v11;
              v5 = v22;
              v19 = v22[1];
            }
            if ( v21 >= 1 )
            {
              v5 = v22;
              if ( v10 + v20 > v14 + v24 )
                v20 = v22[2] + v24 - v10;
              if ( v20 >= 1 )
              {
                v25 = v22[3] + v22[1];
                if ( v21 + v19 <= v25 )
                  v12 = v21;
                else
                  v12 = v25 - v19;
                if ( v12 >= 1 )
                {
                  v7 = v19;
                  v8 = v20;
                  v6 = v10;
                  v9 = v12;
                }
                v5 = v22;
              }
            }
          }
        }
        *v5 = v6;
        v5[1] = v7;
        v5[2] = v8;
        v5[3] = v9;
        if ( *v5 > DSurface_ViewBounds )
          v16 += DSurface_ViewBounds - *v5;
        v13 = v5[1];
        if ( v13 > g_Map_VisibleRect )
          v17 += g_Map_VisibleRect - v13;
        result = this->vt69(&v16, v5);
        LOBYTE(result) = 1;
      }
      else
      {
        LOBYTE(result) = 0;
      }
      return result;
}
} } }

// ==== BACKFILL 0x005F5230  Object::Unlink  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Object::Unlink()
{
{
    int result;
    int v2;
    char v3;
    result = this->Object_field_0x34;
    if ( result == v2 && result )
  {
    --*(int *)(result + 44);
    this->Object_field_0x34 = 0;
  }
    LOBYTE(result) = v3;
    if ( v3 )
  {
    result = this->Object_field_0x30;
    if ( v2 == result )
    {
    if ( v2 )
      {
    result = *(int *)(result + 48);
    this->Object_field_0x30 = result;
      }
    }
  }
    if ( v2 == this->Object_field_0x88 )
    this->Object_field_0x88 = 0;
    return result;
}
}

// ==== BACKFILL 0x005F5320  ObjectClass::ProcessInputKey  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::ProcessInputKey() {
{
    double v2;
    int v3;
    if ( v3 == 13 )
  {
    this->GetCoords(2);
  }
    else
  {
    if ( v3 != 34 )
    return 0;
    v2 = (double)this->health;
    if ( v2 / (double)*(int *)(this->COMStub_Return0_34() + 160) >= *(double *)&g_RulesClass_Instance[1].? )
    return 10;
  }
    return 1;
}
} } }

// ==== BACKFILL 0x005F5930  AbstractClass::IsNotNull  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::IsNotNull() {
{
    int v2;
    return v2 != 0;
}
} } }

// ==== BACKFILL 0x005F5B50  ObjectClass::SetReference  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::SetReference(int a1) {
{
    int v2;
    v2 = this->attachedTag;
    if ( v2 )
  {
    --*(int *)(v2 + 44);
    this->attachedTag = 0;
  }
    if ( !a2 )
    return 0;
    this->attachedTag = a2;
    ++*(int *)(a2 + 44);
    return 1;
}
} } }

// ==== BACKFILL 0x005F5C20  ObjectClass::Fire  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::Fire() {
{
    int *v2;
    int v3;
    int v5;
    int v6;
    int v7;
    v2 = (int *)this->COMStub_Return0_34();
    v3 = *v2;
    v5 = this->GetMember06();
    return (*(int (__thiscall **)(int *, int, int, int, int))(v3 + 148))(v2, v6, v7, 0, v5);
}
} } }

// ==== BACKFILL 0x005F5D20  ObjectClass::IsYellowHP  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { bool ObjectClass::IsYellowHP() {
{
    int result;
    double v3;
    double v4;
    v3 = (double)this->health;
    result = 0;
    if ( v3 / (double)*(int *)(this->COMStub_Return0_34() + 160) > *(double *)&g_RulesClass_Instance[1].? )
  {
    v4 = (double)this->health;
    if ( v4 / (double)*(int *)(this->COMStub_Return0_34() + 160) <= *(double *)&g_RulesClass_Instance[1].? )
    return 1;
  }
    return result;
}
} } }

// ==== BACKFILL 0x005F5D90  ObjectClass::IsGreenHP  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { bool ObjectClass::IsGreenHP() {
{
    double v2;
    v2 = (double)this->health;
    return v2 / (double)*(int *)(this->COMStub_Return0_34() + 160) > *(double *)&g_RulesClass_Instance[1].?;
}
} } }

// ==== BACKFILL 0x005F5DD0  BuildingClass::GetSellPriority  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingClass::GetSellPriority()
{
{
    int result;
    double v3;
    double v4;
    double v5;
    double v6;
    v4 = (double)this->health;
    if ( v4 / (double)*(int *)(this->HasValidWeapon() + 160) <= *((double *)g_RulesClass_Instance + 737) && this->health > 0 )
  {
    return 0;
  }
    v5 = (double)this->health;
    if ( v5 / (double)*(int *)(this->HasValidWeapon() + 160) <= *((double *)g_RulesClass_Instance + 737) )
    return 2;
    v6 = (double)this->health;
    v3 = v6 / (double)*(int *)(this->HasValidWeapon() + 160);
    result = 1;
    if ( v3 > *((double *)g_RulesClass_Instance + 736) )
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

// ==== BACKFILL 0x005F5E80  BuildingClass::SaveLoad_Register  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingClass::SaveLoad_Register()
{
{
    int result;
    int *v2;
    int v3;
    result = AbstractClass::SaveLoad_Prefix_0(v2, v3);
    if ( result >= 0 )
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 12);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 13);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 14);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 6);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 34);
    AudioController::Init(v2 + 15);
    AudioController::Init(v2 + 20);
    v2[42] = 0;
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x005F5F00  ObjectClass::GetLandHeight  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::GetLandHeight() {
{
      return *(char *)(this->vt111() + 283) + (this->onBridge != 0 ? 4 : 0);
}
} } }

// ==== BACKFILL 0x005F5F30  ObjectClass::GetMember41  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::GetMember41() {
    return this->location.Z;

/* ASM:
mov     eax, [ecx+0A4h]
retn
*/
} } }

// ==== BACKFILL 0x005F5F40  ObjectClass::GetZAboveGround  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetZAboveGround()
{
{
    int v2;
    int v4[3];
    v4[0] = this->location;
    v4[1] = this->WaveClass_field_14C;
    v4[2] = this->WaveClass_field_150;
    v2 = this->WaveClass_field_150 - Cell::GetGroundHeight(v4);
    if ( this->onBridge )
    v2 -= DataGlobal_AC13BC;
    return v2;
}
}

// ==== BACKFILL 0x005F5FA0  ObjectClass::SetZ  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::SetZ() {
{
    int v2;
    int result;
    int v4;
    int v5;
    int v6;
    int v7;
    v2 = v7;
    if ( this->onBridge )
    v2 = DataGlobal_AC13BC + v7;
    if ( this->isOnMap )
  {
    this->GetCoords(0);
    v4 = this->location;
    v5 = this->WaveClass_field_14C;
    v6 = this->WaveClass_field_150;
    this->WaveClass_field_150 = v2 + Cell::GetGroundHeight(&v4);
    return this->GetCoords(1);
  }
    else
  {
    v4 = this->location;
    v5 = this->WaveClass_field_14C;
    v6 = this->WaveClass_field_150;
    result = v2 + Cell::GetGroundHeight(&v4);
    this->WaveClass_field_150 = result;
  }
    return result;
}
} } }

// ==== BACKFILL 0x005F6060  ObjectClass::SetAnim  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::SetAnim(int a1) {
{
    AbstractClass *v3;
    if ( this->isOnMap )
  {
    this->GetCoords(0);
    v3 = (AbstractClass *)*(void**)this;
    this->WaveClass_field_150 = aP1;
    return (*(int (__thiscall **)(int *, int))&v3[8].__pad_0[4])(this, 1);
  }
    else
  {
    this->WaveClass_field_150 = aP1;
    return (int)aP1;
  }
}
} } }

// ==== BACKFILL 0x005F60A0  MapClass::SetCellOverlayFlag  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::SetCellOverlayFlag()
{
{
    int *v1;
    int v2;
    int result;
    int *v4;
    int v5;
    int *v6;
    if ( DataGlobal_AC13BC + Cell::GetGroundHeight(v6) <= v6[2] && (*((int *)Coord::To_Cell(&DataGlobal_87F7E8, v6) + 80) & 0x100) != 0 )
  {
    v1 = Coord::To_Cell(&DataGlobal_87F7E8, v6);
    v2 = v1[74];
    result = (int)(v1 + 74);
    *(int *)result = v2 | 0x40;
  }
    else
  {
    v4 = Coord::To_Cell(&DataGlobal_87F7E8, v6);
    v5 = v4[73];
    result = (int)(v4 + 73);
    *(int *)result = v5 | 0x40;
  }
    return result;
}
}

// ==== BACKFILL 0x005F6120  MapClass::ClearCellOverlayFlag  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::ClearCellOverlayFlag()
{
{
    int *v1;
    int v2;
    int result;
    int *v4;
    int v5;
    int *v6;
    if ( DataGlobal_AC13BC + Cell::GetGroundHeight(v6) <= v6[2] && (*((int *)Coord::To_Cell(&DataGlobal_87F7E8, v6) + 80) & 0x100) != 0 )
  {
    v1 = Coord::To_Cell(&DataGlobal_87F7E8, v6);
    v2 = v1[74];
    result = (int)(v1 + 74);
    *(int *)result = v2 & 0xFFFFFFBF;
  }
    else
  {
    v4 = Coord::To_Cell(&DataGlobal_87F7E8, v6);
    v5 = v4[73];
    result = (int)(v4 + 73);
    *(int *)result = v5 & 0xFFFFFFBF;
  }
    return result;
}
}

// ==== BACKFILL 0x005F61A0  ObjectTypeClass::ReleaseWaveAndString  cls=ObjectTypeClass  sig=csp  renamed_refs=2  residual=- ====
void ObjectTypeClass::ReleaseWaveAndString()
{
{
    void *v2;
    void **v3;
    v2 = (void *)*(void**)this;
    if ( *(void**)this )
  {
    WaveClass::Destroy(*(void**)this);
    __3_YAXPAX_Z(v2);
  }
    v3 = (void **)this->vtable2;
    *(void**)this = 0;
    if ( v3 )
  {
    String::Release(v3);
    __3_YAXPAX_Z(v3);
  }
    this->vtable2 = 0;
}
}

// ==== BACKFILL 0x005F6250  HouseClass::ProcessPower  cls=ObjectClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int HouseClass::ProcessPower() {
{
      int v2;
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;
      int v14;
      int *v16;

      AbstractClass::ProcessPower(this);
      v2 = this->relatedTagsCount;
      if ( v2 )
      {
        v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(v2 + 4) + 16))(v2 + 4);
        Power::TimerProcess(v3);
      }
      v4 = this->relatedTagsCapacity;
      if ( v4 )
      {
        v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4);
        Power::TimerProcess(v5);
      }
      Power::TimerProcess(this->absorbersCount);
      LOBYTE(v6) = this->bunkers;
      Power::FlagProcess(v16, v6);
      if ( !g_GameMode_Current[0] || g_GameMode_Current[0] == 5 )
      {
        LOBYTE(v7) = this->occupiables;
        v9 = Power::FlagProcess(v16, v7);
        LOBYTE(v9) = this->q083;
        Power::FlagProcess(v16, v9);
      }
      LOBYTE(v8) = this->inLimbo;
      Power::FlagProcess(v16, v8);
      LOBYTE(v10) = this->occupiablesCount;
      v11 = Power::FlagProcess(v16, v10);
      LOBYTE(v11) = this->cloningVats;
      Power::FlagProcess(v16, v11);
      LOBYTE(v12) = this->q08D;
      Power::FlagProcess(v16, v12);
      LOBYTE(v13) = this->q08F;
      v14 = Power::FlagProcess(v16, v13);
      LOBYTE(v14) = this->cloningVatsCount;
      Power::FlagProcess(v16, v14);
      Power::TimerProcess(this->secretLabsCount);
      Power::TimerProcess(this->secretLabsCapacity);
      return Power::TimerProcess(this->psychicDetectionBuildings);
}
} }

// ==== BACKFILL 0x005F6440  ObjectClass::ComputeDistance  cls=ObjectClass  sig=csp  renamed_refs=1  residual=- ====
namespace ra2 { namespace game { int ObjectClass::ComputeDistance(int a1) {
{
      int *v4;
      int v5;
      int v6;
      _DWORD *v7;
      double v8;
      BuildingTypeClass *v9;
      int v10;
      TechnoClass *v11;
      BuildingTypeClass *FoundationHeight;
      _BYTE v13[12];
      _BYTE v14[12];

      if ( !aP1 )
        return 0;
      v4 = (int *)(*(int (__thiscall **)(TechnoClass *, _BYTE *))(*(_DWORD *)aP1->__pad_0 + 72))(aP1, v13);
      v5 = *v4;
      v6 = v4[1];
      v7 = (_DWORD *)this->vt18(v14);
      v8 = Math::Sqrt((double)(*v7 - v5) * (double)(*v7 - v5) + (double)(v7[1] - v6) * (double)(v7[1] - v6));
      v9 = (BuildingTypeClass *)Math::RoundToInt(v8);
      v10 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1);
      v11 = v10 == 6 ? aP1 : 0;
      if ( v11 )
      {
        FoundationHeight = (BuildingTypeClass *)BuildingTypeClass::GetFoundationHeight(
                                                  *(_DWORD *)(v10 == 6 ? &aP1[1] : (TechnoClass *)1312)->__pad_0,
                                                  0);
        v9 = (BuildingTypeClass *)((char *)v9
                                 - 64
                                 * ((_DWORD)FoundationHeight
                                  + BuildingTypeClass::GetFoundationWidth(*(_DWORD **)v11[1].__pad_0)));
        if ( (int)v9 < 0 )
          return 0;
      }
      return (int)v9->vtable1;
}
} } }

// ==== BACKFILL 0x005F6500  BuildingClass::SquaredDistanceTo  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingClass::SquaredDistanceTo(ObjectClass* target) const
{
    // Binary: fetch each object's coords through the vtable slot 18 (+72)
    // virtual (BuildingClass override = GetExitCoords @0x447AC0; the target
    // dispatch goes through TARGET's own vtable), then 2D squared distance.
    // The old location.X/Y body was a blind-verifier-era fabrication (the IDA
    // side could not see the indirect dispatches then).
    if (!target)
        return 0;
    CoordStruct myBuf;
    CoordStruct* mine = this->GetExitCoords(&myBuf, 0);
    CoordStruct tgBuf;
    CoordStruct* theirs = target->GetExitCoords(&tgBuf, 0);
    int dx = mine->X - theirs->X;
    int dy = mine->Y - theirs->Y;
    return dx * dx + dy * dy;
}

// ==== BACKFILL 0x005F65A0  ObjectClass::GetCoords  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::GetCoords() {
{
    int *v2;
    CoordStruct *out;
    v2 = (int *)((char *)(this) + 156);
    out->X = *v2;
    out->Y = v2[1];
    out->Z = v2[2];
    return (int)out;
}
} } }

// ==== BACKFILL 0x005F65D0  ObjectClass::DelegateVt69  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::DelegateVt69() {
{
    int v2;
    int v3;
    return this->computeDistanceSquared(v2, v3);
}
} } }

// ==== BACKFILL 0x005F6690  ObjectClass::IsActive  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
bool ObjectClass::IsActive() const
{
    return isAliveFlag && isOnMap && !inLimbo;
}

// ==== BACKFILL 0x005F6790  Network_Process_5F6790  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * sub_5F6790(int * a1, int a2)
{
{
    int v2;
    int v4;
    int v5;
    int v6;
    int *v7;
    int *v8;
    int v10;
    int v11;
    v2 = *(int *)(a2 + 16);
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v11 = v2;
    if ( v2 - 1 >= 0 )
  {
    v7 = (int *)(*(int *)(a2 + 4) + 4 * (v2 - 1));
    v10 = v2;
    do
    {
    v8 = (int *)*v7--;
    v4 += v8[39];
    v5 += v8[40];
    v6 += v8[41];
    --v10;
    }
    while ( v10 );
    v2 = v11;
  }
    *a1 = v4 / v2;
    *((int*)(a1) + 1) = v5 / v2;
    *((int*)(a1) + 2) = v6 / v2;
    return a1;
}
}

// ==== BACKFILL 0x005F6940  ObjectClass::SetPosition  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::SetPosition() {
{
    int *v1;
    int result;
    int *v3;
    v1 = (int *)((char *)(this) + 156);
    *v1 = *v3;
    v1[1] = v3[1];
    result = v3[2];
    v1[2] = result;
    return result;
}
} } }

// ==== BACKFILL 0x005F6960  ObjectClass::GetCellCoords  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::GetCellCoords() {
{
    int *v1;
    int v2;
    int v3;
    int v5;
    int v6;
    int v7;
    v1 = (int *)((char *)(this) + 156);
    v5 = this->location;
    v6 = this->WaveClass_field_14C;
    v7 = this->WaveClass_field_150;
    Coord::To_Cell(&DataGlobal_87F7E8, &v5);
    v2 = v1[2];
    v3 = v1[1];
    v5 = *v1;
    v7 = v2;
    v6 = v3;
    return (int)Coord::To_Cell(&DataGlobal_87F7E8, &v5);
}
} } }

// ==== BACKFILL 0x005F69C0  ObjectClass::CoordToCell  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::CoordToCell() {
{
    int *v1;
    int v3;
    char v4[12];
    int *v5;
    v1 = (int *)this->IsReady(v4, 0);
    LOWORD(v3) = *v1 / 256;
    HIWORD(v3) = v1[1] / 256;
    *v5 = v3;
    return (int)v5;
}
} } }

// ==== BACKFILL 0x005F6A10  ObjectClass::GetCell  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetCell()
{
{
    int *v1;
    int v3;
    int v4;
    char v5[12];
    v1 = (int *)this->IsReady(v5, 0);
    LOWORD(v3) = *v1 / 256;
    HIWORD(v3) = v1[1] / 256;
    v4 = v3;
    return (int)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v4);
}
}

// ==== BACKFILL 0x005F6B50  AbstractClass::COMStub_Return0_105  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_105()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x005F6B60  ObjectClass::IsBelowScreen  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::IsBelowScreen() {
{
    int result;
    LOBYTE(result) = this->isOnMap
    && (result = this->DropAsBomb(), result < 2 * DataGlobal_AC13C8);
    return result;
}
} } }

// ==== BACKFILL 0x005F6B90  ObjectClass::IsHeightAboveThreshold  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::IsHeightAboveThreshold() {
{
    int result;
    LOBYTE(result) = this->isOnMap
    && (result = this->DropAsBomb(), result >= 2 * DataGlobal_AC13C8);
    return result;
}
} } }

// ==== BACKFILL 0x005F6BC0  AbstractClass::COMStub_Return0_33  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_33()
{
return 0;
}

// ==== BACKFILL 0x005F6C10  ObjectClass::IsAboveScreenMargin  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::IsAboveScreenMargin()
{
{
    int result;
    result = this->DropAsBomb();
    LOBYTE(result) = result > -20;
    return result;
}
}

// ==== BACKFILL 0x005F6C30  ObjectClass::IsPlayerOwnedAndCheck  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::IsPlayerOwnedAndCheck() {
{
      int result;

      if ( !this->vt50(HouseClass_Player)
        || (result = this->vt52(1)) != 0 )
      {
        result = this->vt34();
        LOBYTE(result) = *(_BYTE *)(result + 560);
      }
      else
      {
        LOBYTE(result) = 0;
      }
      return result;
}
} } }

// ==== BACKFILL 0x005F6C70  AbstractClass::COMStub_79  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::COMStub_79() {
{
      return this->vt78();
}
} } }

// ==== BACKFILL 0x005F6C80  ObjectClass::GetCoords_Alt  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::GetCoords_Alt() {
{
    int *v1;
    char v3[12];
    int *v4;
    v1 = (int *)this->Delete(v3);
    *v4 = *v1;
    v4[1] = v1[1];
    v4[2] = v1[2];
    return (int)v4;
}
} } }

// ==== BACKFILL 0x005F6CB0  ObjectClass::CheckFlagD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::CheckFlagD0(int a1) {
{
    IUnknown *result;
    result = aP1;
    this->customSound = aP1;
    if ( aP1 == (IUnknown *)-1 )
    return AudioFile::Stop(this + 20);
    return (int)result;
}
} } }

// ==== BACKFILL 0x005F6CD0  ObjectClass::IsCrushable  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { bool ObjectClass::IsCrushable(void* a1) {
{
      if ( aP1
        && *(_BYTE *)((*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 3369)
        && this
        && (this->abstractFlags & 1) != 0
        && !*(_BYTE *)(this->vt33() + 3370)
        && this->vt11() != 6
        && !Object::IsAlliedWithObjectHouse(*(_DWORD **)aP1[15].__pad_0, (IUnknown *)this)
        && !this->vt88() )
      {
        return 1;
      }
      return *(_BYTE *)(this->vt34() + 557)
          && this
          && (this->abstractFlags & 1) != 0
          && !this->q2A4
          && !Object::IsAlliedWithObjectHouse(*(_DWORD **)aP1[15].__pad_0, (IUnknown *)this)
          && !this->vt88();
}
} } }

// ==== BACKFILL 0x005F6DA0  ObjectClass::ResetPointerIfMatch  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::ResetPointerIfMatch() {
{
    int result;
    int v2;
    result = v2;
    if ( v2 == this->parachute )
    this->parachute = 0;
    return result;
}
} } }

// ==== BACKFILL 0x005F6DC0  ObjectClass::CreateInstance  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::CreateInstance()
{
{
    char v3;
    ObjectClass::Dtor(this);
    if ( (v3 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int)this;
}
}

// ==== BACKFILL 0x005F75B0  AbstractTypeClass::GetData  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::GetData()
{
return 0;
}

// ==== BACKFILL 0x005F75C0  ObjectTypeClass::InitTripleTen  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ObjectTypeClass::InitTripleTen(unsigned int * a1)
{
{
    *a1 = 10;
    *((int*)(a1) + 1) = 10;
    *((int*)(a1) + 2) = 10;
    return a1;
}
}

// ==== BACKFILL 0x005F75E0  Struct::InitTriple256  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Struct::InitTriple256(unsigned int * a1)
{
{
    int v1;
    v1 = 2 * DataGlobal_AC1474;
    *a1 = 256;
    *((int*)(a1) + 1) = 256;
    *((int*)(a1) + 2) = v1;
    return a1;
}
}

// ==== BACKFILL 0x005F7610  AbstractTypeClass::GetType  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::GetType(int a1)
{
return 0;
}

// ==== BACKFILL 0x005F7620  AbstractTypeClass::SetType  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::SetType()
{
return 0;
}

// ==== BACKFILL 0x005F7630  AbstractTypeClass::Validate  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::Validate()
{
return 0;
}

// ==== BACKFILL 0x005F8080  ObjectTypeClass::CleanupWeapons  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectTypeClass::CleanupWeapons()
{
{
    char *v1;
    int v2;
    void *v3;
    void **v4;
    void *v5;
    void *v6;
    v1 = this + 204;
    v2 = 18;
    do
  {
    v3 = (void *)*((int *)v1 - 1);
    if ( v3 )
    {
    WaveClass::Destroy(*((int *)v1 - 1));
    __3_YAXPAX_Z(v3);
    *((int *)v1 - 1) = 0;
    }
    v4 = *(void ***)v1;
    if ( *(int *)v1 )
    {
    String::Release(*(void ***)v1);
    __3_YAXPAX_Z(v4);
    *(int *)v1 = 0;
    }
    v5 = (void *)*((int *)(v1) + 35);
    if ( v5 )
    {
    WaveClass::Destroy(*((int *)(v1) + 35));
    __3_YAXPAX_Z(v5);
    *((int *)(v1) + 35) = 0;
    }
    v6 = (void *)*((int *)(v1) + 36);
    if ( v6 )
    {
    String::Release(*((void ***)(v1) + 36));
    __3_YAXPAX_Z(v6);
    *((int *)(v1) + 36) = 0;
    }
    v1 += 8;
    --v2;
  }
    while ( v2 );
}
}

// ==== BACKFILL 0x005F96B0  TheaterObjectTypeClassSpecificID  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void TheaterObjectTypeClassSpecificID(char * a1, int a2)
{
{
    char v2;
    char v3;
    if ( a2 != -1 )
  {
    v2 = *a1;
    v3 = *((int*)(a1) + 1);
    if ( *a1 >= 65 && v2 <= 90 )
    v2 += 32;
    if ( v3 >= 65 && v3 <= 90 )
    v3 += 32;
    if ( (v2 == 103 || v2 == 110 || v2 == 99 || v2 == 121) && (v3 == 97 || v3 == 116) )
    *((int*)(a1) + 1) = DataGlobal_7E1BCE[112 * a2];
  }
}
}

// ==== BACKFILL 0x005F9950  AbstractClass::SaveLoad_PrefixWrapper  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::SaveLoad_PrefixWrapper(TechnoTypeClass * aP0, ObjectTypeClass * aP1, TechnoTypeClass * aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, aP1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x005F9970  COMObject::GetSizeMaxWrapper  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int COMObject::GetSizeMaxWrapper(AbstractClass * aP0, AbstractClass * aP1)
{
{
    int result;
    result = ObjectClass::GetSizeMax((#374 *)aP0);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x005F9AE0  ObjectTypeClass::Destru_vt08  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
ObjectTypeClass * ObjectTypeClass::Destru_vt08(char a2)
{
{
    ObjectTypeClass::Destruct((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ObjectTypeClass *)this;
}
}

// ==== BACKFILL 0x005F9B60  ObjectTypeClass::FreeLoaderBuffer  cls=ObjectTypeClass  sig=csp  renamed_refs=3  residual=- ====
int ObjectTypeClass::FreeLoaderBuffer()
{
{
    __3_YAXPAX_Z(*(void **)this);
    *(int *)this = 0;
    this->vtable2 = 0;
    this->vtable3 = 0;
    this->vtable4 = 0;
    this->uniqueId = 0;
    return 0;
}
}

// ==== BACKFILL 0x005FA430  nullsub_29  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_29()
{
  ;
}

// ==== BACKFILL 0x005FA4A0  Options::SetScoreVolume  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
void Options::SetScoreVolume(float volume, int pad)
{
{
    double v4;
    int v5;
    int v6;
    if ( volume >= 1.0 )
    v4 = 1.0;
    else
    v4 = volume;
    *(float *)&this->__pad_34[12] = v4;
    v5 = Math::RoundToInt(v4 * 16384.0);
    EndBufferMixer(*(int **)&DataGlobal_87C374.__pad_14B0[3872], v5);
    v6 = Math::RoundToInt(*(float *)&this->__pad_34[12] * 255.0);
    GameSettings::SetScoreVolume(&g_BuildingTypeClass_Count, v6);
    Debug::Log();
}
}

// ==== BACKFILL 0x005FA510  Options::SetSoundVolume  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
void Options::SetSoundVolume(float volume, int pad)
{
{
    double v3;
    int v4;
    if ( volume >= 1.0 )
    v3 = 1.0;
    else
    v3 = volume;
    *(float *)&this->__pad_34[4] = v3;
    v4 = Math::RoundToInt(v3 * 16384.0);
    EndBufferMixer(*(int **)&DataGlobal_87C374.__pad_14B0[3876], v4);
    if ( (char)pad )
    PlayVocClass(*(int *)(*(int *)&DataGlobal_87C374.__pad_579C[22224] + 1808), 0x2000, 1.0, 0);
    Debug::Log();
}
}

// ==== BACKFILL 0x005FA590  Options::SetVoiceVolume  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
void Options::SetVoiceVolume(float volume, int pad)
{
{
    double v4;
    int v5;
    int v6;
    if ( volume >= 1.0 )
    v4 = 1.0;
    else
    v4 = volume;
    *(float *)&this->__pad_34[8] = v4;
    v5 = Math::RoundToInt(v4 * 255.0);
    ThemeClass::GetField(v5);
    v6 = Math::RoundToInt(*(float *)&this->__pad_34[8] * 16384.0);
    EndBufferMixer(*(int **)&DataGlobal_87C374.__pad_14B0[3868], v6);
    if ( (char)pad )
    PlayVocClass(*(int *)(*(int *)&DataGlobal_87C374.__pad_579C[22224] + 1808), 0x2000, *(float *)&this->__pad_34[8], 0);
    Debug::Log();
}
}

// ==== BACKFILL 0x005FAD10  ScenarioClass::SaveGameOptions  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::SaveGameOptions() {
{
      wchar_t *i;
      bool v3;
      _DWORD v5[22];
      _BYTE v6[12];
      int v7;
      wchar_t Buffer[200];

      CCFileClass::Construct(v5, g_Str_File_RA2MD_INI);
      Debug::Log();
      INIClass::SetInt(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Options,
        g_INI_Key_GameSpeed,
        *(_DWORD *)this,
        0);
      INIClass::SetInt(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Options,
        DataGlobal_8332CC,
        this->Items,
        0);
      INIClass::SetInt(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Options,
        DataGlobal_8332A8,
        this->Capacity,
        0);
      INIClass::SetInt(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Options,
        DataGlobal_833280,
        this->q00C,
        0);
      INIClass::SetInt(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Options,
        DataGlobal_833260,
        this->q010,
        0);
      INIClass::SetBool(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Options,
        DataGlobal_833240,
        this->q014);
      INIClass::SetInt(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Options,
        g_INI_Key_DetailLevel,
        this->q018,
        0);
      INIClass::SetBool(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Options,
        DataGlobal_8331EC,
        this->q01D);
      INIClass::SetBool(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Options,
        DataGlobal_8331C8,
        this->q01E);
      INIClass::SetBool(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Options,
        DataGlobal_8331A8,
        this->q01F);
      INIClass::SetBool(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Options,
        DataGlobal_833188,
        this->q020);
      INIClass::SetInt(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Video,
        g_INI_Key_ScreenWidth,
        this->q024,
        0);
      INIClass::SetInt(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Video,
        g_INI_Key_ScreenHeight,
        this->q028,
        0);
      INIClass::SetBool(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Video,
        DataGlobal_833128,
        this->q034);
      INIClass::SetDouble(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Audio,
        DataGlobal_8330BC,
        this->q038);
      INIClass::SetDouble(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Audio,
        DataGlobal_8330A8,
        this->q03C);
      INIClass::SetDouble(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Audio,
        DataGlobal_83309C,
        this->q040);
      INIClass::SetBool(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Audio,
        DataGlobal_83308C,
        this->q044);
      INIClass::SetBool(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Audio,
        DataGlobal_83307C,
        this->q046);
      INIClass::SetInt(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Audio,
        DataGlobal_833050,
        *(unsigned __int16 *)(this + 72),
        0);
      INIClass::SetBool(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Audio,
        DataGlobal_833070,
        this->q045);
      INIClass::SetInt(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Network,
        g_INI_Key_Socket,
        *(unsigned __int16 *)(this + 74),
        0);
      INIClass::SetInt(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Network,
        DataGlobal_833014,
        this->q054,
        0);
      INIClass::SetString(
        (char *)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_Network,
        g_INI_Key_DestNet,
        (char *)(this + 88));
      swprintf(
        Buffer,
        (const size_t)&DataGlobal_833328,
        (const wchar_t *const)(this->q04C + 1),
        this->q050 + 1);
      for ( i = Buffer; *i; ++i )
      {
        v3 = *i == 0xFFFFu;
        *i = ~*i;
        if ( v3 )
          *i = -1;
      }
      INIClass::SetWideAsHex(g_INI_Key_Network, DataGlobal_833068, Buffer);
      INIClass::WriteDigest(&CCINIClass_INI_RA2MD, (int)v5, 0);
      GameSettings::ParseNetworkAddress(this);
      v5[0] = &vt_CCFileClass;
      v7 = 0;
      Vector::Clear((int)v6);
      v5[0] = &off_7E1668;
      return BufferIOFileClass::Dtor(v5);
}
} }

// ==== BACKFILL 0x005FBF70  Map_Helper_5FBF70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5FBF70::sub_5FBF70()
{
{
    return this->M12;
}
}

// ==== BACKFILL 0x005FD270  Object::CheckState  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
char Object::CheckState(IUnknown * aP1, int a3)
{
{
    IUnknown *v3;
    int *v5;
    v3 = aP1;
    LOWORD(aP1) = aP1->field_0 / 256;
    HIWORD(aP1) = v3->field_4 / 256;
    v5 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&aP1);
    if ( CellClass::FindInfantry(v5, 0) )
    return 0;
    else
    return ObjectClass::Deploy((#374 *)this);
}
}

// ==== BACKFILL 0x005FD6A0  OverlayClass::WriteINI  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int OverlayClass::WriteINI() {
{
      int v2;
      signed int v3;
      int v4;
      int v5;
      int v6;
      int i;
      char *v8;
      int v9;
      int v10;
      signed int v11;
      int v12;
      int v13;
      int v14;
      int j;
      char *v16;
      int v17;
      __int16 v19;
      __int16 v20;
      int v21[3];
      _DWORD v22[4];
      int v23[3];
      _DWORD v24[4];
      int v25[10];
      int v26[10];

      INIClass::ClearSection((int)this, (int)aOverlay, 0);
      INIClass::ClearSection((int)this, (int)g_INI_Key_OverlayPack, 0);
      v2 = 0;
      v3 = 0;
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 128))(DSurface_Alternate);
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 124))(DSurface_Alternate) * v4;
      v6 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0);
      v21[1] = 0;
      v21[2] = 0;
      Buffer::Init(v22, v6, v5);
      v22[3] = 0;
      v21[0] = (int)&BufferPipe::`vftable';
      LCWPipe::Constructor(v26, 0, 0x2000);
      Pipe::SetDelegate(v26, (int)v21);
      do
      {
        for ( i = 0; i < 512; ++i )
        {
          v19 = i;
          v20 = v2;
          v8 = (char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, &v19);
          v3 += (signed int)LCW::Compress((int)v26, v8 + 68, 1);
        }
        ++v2;
      }
      while ( v2 < 512 );
      if ( v3 )
      {
        v9 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0);
        INIClass::ReadBase64Data(this, (unsigned __int8 *)g_INI_Key_OverlayPack, v9, v3);
        (*(void (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 96))(DSurface_Alternate);
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 96))(DSurface_Alternate);
      INIClass::ClearSection((int)this, (int)g_INI_Key_OverlayDataPack, 0);
      v10 = 0;
      v11 = 0;
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 128))(DSurface_Alternate);
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 124))(DSurface_Alternate) * v12;
      v14 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0);
      v23[1] = 0;
      v23[2] = 0;
      v23[0] = (int)&Pipe::`vftable';
      Buffer::Init(v24, v14, v13);
      v24[3] = 0;
      v23[0] = (int)&BufferPipe::`vftable';
      LCWPipe::Constructor(v25, 0, 0x2000);
      Pipe::SetDelegate(v25, (int)v23);
      do
      {
        for ( j = 0; j < 512; ++j )
        {
          v19 = j;
          v20 = v10;
          v16 = (char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, &v19);
          v11 += (signed int)LCW::Compress((int)v25, v16 + 286, 1);
        }
        ++v10;
      }
      while ( v10 < 512 );
      if ( v11 )
      {
        v17 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0);
        INIClass::ReadBase64Data(this, (unsigned __int8 *)g_INI_Key_OverlayDataPack, v17, v11);
        (*(void (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 96))(DSurface_Alternate);
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)DSurface_Alternate + 96))(DSurface_Alternate);
      LCWPipe::_LCWPipe(v25);
      Vector::Clear((int)v24);
      Pipe::Dtor(v23);
      LCWPipe::_LCWPipe(v26);
      Vector::Clear((int)v22);
      return Pipe::Dtor(v21);
}
} }

// ==== BACKFILL 0x005FD8F0  Object::LoadObject  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
int Object::LoadObject(ObjectClass * aP1, int aP1a)
{
{
    ObjectClass *Register;
    Register = (ObjectClass *)BuildingClass::SaveLoad_Register((AnimClass *)this);
    if ( (int)Register >= 0 )
  {
    if ( aP1 )
    {
    ObjectClass::Init(aP1, (AbstractClass *)&aP1a);
    *(int *)aP1->__pad_0 = (unsigned int)vt_OverlayClass;
    *(int *)&aP1->__pad_0[4] = (unsigned int)vt_OverlayClass;
    *(int *)&aP1->__pad_0[8] = (unsigned int)vt_OverlayClass;
    *(int *)&aP1->__pad_0[12] = &vt_OverlayClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP1[1]);
  }
    return (int)Register->__pad_0;
}
}

// ==== BACKFILL 0x005FD950  Object::SaveObject  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
int Object::SaveObject(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}

// ==== BACKFILL 0x005FDCC0  globalHelper_0FDCC0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * globalHelper_0FDCC0(IUnknown * aP0, int a2)
{
{
    int *result;
    int v3;
    int v4;
    result = &aP0->field_0;
    v3 = *(int *)(HouseClass_Player.field_38 + 4 * a2);
    v4 = 0;
    if ( *(char *)(v3 + 681) || *(char *)(v3 + 680) || *(int *)(v3 + 660) == 126 || *(char *)(v3 + 682) )
    v4 = -12;
    if ( *(int *)(v3 + 664) == 9 )
    --v4;
    if ( a2 == 126 )
    --v4;
    *result = 0;
    result[1] = v4;
    return result;
}
}

// ==== BACKFILL 0x005FDDE0  Object::ProcessEvent  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
int Object::ProcessEvent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Object::_vt34(_DWORD *this)
{
  return *(this + 43); /*0x5fdde6*/
}
}

// ==== BACKFILL 0x005FDF00  Object::StubReturn176  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
int Object::StubReturn176()
{
return 176;
}

// ==== BACKFILL 0x005FDF10  Object::ddtor  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
int Object::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448647;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// ==== BACKFILL 0x005FDF50  Object::StubReturn20  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
int Object::StubReturn20()
{
return 20;
}

// ==== BACKFILL 0x005FDF60  nullsub_212  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_212(int a1, int a2)
{
  ;
}

// ==== BACKFILL 0x005FE020  OverlayClass::updateOverlayState  cls=OverlayClass  sig=csp  renamed_refs=3  residual=- ====
namespace gamemd { void* OverlayClass::updateOverlayState(int a1, int a2) {
{
      this->vtable2 = a2;
      this->vtable3 = a3;
      this->vtable4 = 0;
      *this = &XSurface_Vtable;
      return (TechnoClass *)this;
}
} }

// ==== BACKFILL 0x005FE4C0  OverlayTypeClass::GetTile  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int * OverlayTypeClass::GetTile(int a1)
{
{
    if ( (DataGlobal_AC15E8 & 1) == 0 )
  {
    DataGlobal_AC15E8 |= 1u;
    DataGlobal_AC1640 = 0;
    DataGlobal_AC1644 = 2147450879;
    atexit(nullsub_213);
  }
    return &DataGlobal_AC1640;
}
}

// ==== BACKFILL 0x005FE530  OverlayTypeClass::GetType  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
bool OverlayTypeClass::GetType(IUnknown * aP2, int a3)
{
{
    void *v4;
    v4 = (void *)__2_YAPAXI_Z(0xB0u);
    return v4 && Object::SpawnAtCell(v4, this, aP2, (BuildingTypeClass *)0xFFFFFFFF);
}
}

// ==== BACKFILL 0x005FE570  OverlayTypeClass::GetDamage  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
OverlayClass * OverlayTypeClass::GetDamage(int a2)
{
{
    void *v3;
    v3 = (void *)__2_YAPAXI_Z(0xB0u);
    if ( v3 )
    return Object::SpawnAtCell( v3, this, (IUnknown *)(&(&g_MatrixTransformState)[213] + 2), (BuildingTypeClass *)0xFFFFFFFF);
    else
    return 0;
}
}

// ==== BACKFILL 0x005FE5A0  OverlayTypeClass::GetLandType  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
void OverlayTypeClass::GetLandType(unsigned int * a2, int * a3, unsigned int a4)
{
{
    int v4;
    int v5;
    int v6[2];
    v4 = g_Map_VisibleRect + *((int*)(a2) + 1) + 15;
    v6[0] = DSurface_ViewBounds + *a2 + 30;
    v6[1] = v4;
    v5 = this->GetCategory();
    DrawToSurfaceSHP(g_DSurface_Hidden_2, DataGlobal_87F6B8, v5, a4, v6, a3, 1536, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
}
}

// ==== BACKFILL 0x005FEA30  OverlayTypeClass::vt_entry_6C  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * OverlayTypeClass::vt_entry_6C(unsigned int * a0, OverlayTypeClass * aP1)
{
{
    *a0 = *(int *)aP1->__pad_0;
    *((int*)(a0) + 1) = *(int *)&aP1->__pad_0[4];
    *((int*)(a0) + 2) = *(int *)&aP1->__pad_0[8];
    return a0;
}
}

// ==== BACKFILL 0x005FEA50  OverlayTypeClass::PowerDrainUpdate  cls=OverlayTypeClass  sig=csp  renamed_refs=6  residual=- ====
int OverlayTypeClass::PowerDrainUpdate(int * a2)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(this->vtable2);
    Power::TimerProcess(this->vtable3);
    Power::TimerProcess(this->uniqueId);
    Power::TimerProcess(this->abstractFlags);
    LOBYTE(v3) = this->nextArrayIndex;
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = this->IsVeinholeMonster;
    v5 = Power::FlagProcess(a2, v4);
    LOBYTE(v5) = this->IsVeins;
    Power::FlagProcess(a2, v5);
    LOBYTE(v6) = this->ImageLoaded;
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = this->NeedsSaveOrLink;
    return Power::FlagProcess(a2, v7);
}
}

// ==== BACKFILL 0x005FEC10  OverlayTypeClass::SaveLoad_Prefix_0  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int OverlayTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x005FEC30  OverlayTypeClass::GetClassIdentifier  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int OverlayTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1525862009;
  a2[1] = 298976820;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x005FED00  OverlayTypeClass::GetRadarColor  cls=OverlayTypeClass  sig=csp  renamed_refs=2  residual=- ====
int OverlayTypeClass::GetRadarColor(int a2, unsigned int a3)
{
{
    char **v4;
    int v5;
    int v6;
    int v7;
    char v8;
    int PixelData;
    short v11;
    v4 = (char **)this->GetCategory();
    if ( v4 || (v5 = this->vtable4) != 0 && (v4 = (char **)(*(int (__thiscall **)(int))(*(int *)(v5) + 156))(v5)) != 0 )
  {
    v6 = this->vtable2;
    if ( (v6 < 127 || v6 > 138) && (v6 < 147 || v6 > 158) )
    {
    PixelData = MixFileClass::GetPixelData(v4, (int)&a3, a3);
    *(short *)a2 = *(short *)PixelData;
    *(char *)(a2 + 2) = *(char *)(PixelData + 2);
    return a2;
    }
    else
    {
    v7 = MixFileClass::GetPixelData(v4, (int)&a3, a3);
    v11 = *(short *)v7;
    v8 = HIBYTE(*(short *)v7);
    BYTE1(a3) = *(char *)(v7 + 2);
    LOBYTE(a3) = v11;
    *(short *)a2 = a3;
    *(char *)(a2 + 2) = v8;
    return a2;
    }
  }
    else
  {
    *(short *)a2 = 0;
    *(char *)(a2 + 2) = 0;
    return a2;
  }
}
}

// ==== BACKFILL 0x005FEF00  OverlayTypeClass::GetTypeIdentifier  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int OverlayTypeClass::GetTypeIdentifier()
{
return 21;
}

// ==== BACKFILL 0x005FEF10  OverlayTypeClass::GetObjectSize  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int OverlayTypeClass::GetObjectSize()
{
return 700;
}

// ==== BACKFILL 0x005FEF20  OverlayTypeClass::GetAuxField  cls=OverlayTypeClass  sig=csp  renamed_refs=1  residual=- ====
int OverlayTypeClass::GetAuxField()
{
{
    return this->vtable2;
}
}

// ==== BACKFILL 0x005FEF30  OverlayTypeClass::ddtor  cls=OverlayTypeClass  sig=csp  renamed_refs=2  residual=- ====
OverlayTypeClass * OverlayTypeClass::ddtor(char a2)
{
{
    int v3;
    void **v5;
    *(void**)this = vt_OverlayTypeClass;
    *(this + 1) = (unsigned int)vt_OverlayTypeClass;
    *(this + 2) = (unsigned int)vt_OverlayTypeClass;
    *(this + 3) = &vt_OverlayTypeClass;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v5 = this;
    v3 = (*(int (__thiscall **)(int *, void ***))(DataGlobal_A83D80 + 16))(&DataGlobal_A83D80, &v5);
    if ( v3 != -1 && v3 < g_ObjectTypeConfig && v3 < --g_ObjectTypeConfig )
  {
    do
    {
    ++v3;
    *(int *)&g_BuildingTypeClass_Array->vtable1[4 * v3 - 4] = *(int *)&g_BuildingTypeClass_Array->vtable1[4 * v3];
    }
    while ( v3 < g_ObjectTypeConfig );
  }
    ObjectTypeClass::Destruct((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (OverlayTypeClass *)this;
}
}

// ==== BACKFILL 0x005FF250  ObjectClass::RegisterInArray  cls=ObjectClass  sig=csp  renamed_refs=3  residual=- ====
namespace ra2 { namespace game { void* ObjectClass::RegisterInArray(int a1, int a2, int a3, int a4) {
{
    int v6;
    *(void**)this = aP1;
    this->vtable2 = a3;
    this->vtable4 = 0;
    this->abstractFlags = 0;
    this->vtable3 = a4;
    this->uniqueId = a5;
    if ( (int)*(&g_MatrixTransformState + 2590) < (int)*(&g_MatrixTransformState + 2588) || (*((char *)&g_MatrixTransformState + 10357) || !*(&g_MatrixTransformState + 2588)) && (int)*(&g_MatrixTransformState + 2591) > 0 && ((unsigned char (__thiscall *)(CoordStruct **, char *, int))(*(&g_MatrixTransformState + 2586))->Z)( &g_MatrixTransformState + 2586, (char *)*(&g_MatrixTransformState + 2591) + (int)*(&g_MatrixTransformState + 2588), 0) )
  {
    v6 = (int)*(&g_MatrixTransformState + 2590);
    *(&g_MatrixTransformState + 2590) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2590) + 1);
    *(&(*(&g_MatrixTransformState + 2587))->X + v6) = (int)this;
  }
    return this;
}
} } }

// ==== BACKFILL 0x005FF800  WinMainSetup_Setup_5FF800  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_5FF800()
{
{
    int *v0;
    if ( DataGlobal_AC1838 )
  {
    __3_YAXPAX_Z(DataGlobal_AC1838);
    DataGlobal_AC1838 = 0;
  }
    v0 = DataGlobal_AC1698;
    do
  {
    if ( *v0 )
    (**(void (__thiscall ***)(int, int))*v0)(*v0, 1);
    *v0++ = 0;
  }
    while ( (int)v0 < (int)&DataGlobal_AC17C0 );
}
}

// ==== BACKFILL 0x005FFFA0  Render_Render_5FFFA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_5FFFA0()
{
{
    char result;
    int i;
    result = DataGlobal_AC1688;
    for ( i = DataGlobal_AC1688 - 1; i >= 0; --i )
    result = BuildingLight::CalculateShading(*((int **)DataGlobal_AC167C + i));
    return result;
}
}

// ==== BACKFILL 0x005FFFC0  VectorClass::Destructor  cls=DynamicVector  sig=csp  renamed_refs=2  residual=- ====
void VectorClass::Destructor()
{
{
    void *v2;
    v2 = this->Items;
    this->DynamicVector_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->DynamicVector_field_0x8 = 0;
}
}
