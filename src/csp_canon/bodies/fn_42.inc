// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00420120  ??0Iostream_init_QAE_XZ_0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
Iostream_init * Iostream_init::Iostream_init()
{
return this;
}

// ==== BACKFILL 0x00420130  nullsub_53  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_53()
{
  ;
}

// ==== BACKFILL 0x004202F0  sub_4202F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_4202F0::sub_4202F0(int a2)
{
{
    int v2;
    int v3;
    short *v4;
    int v5;
    short v6;
    v2 = 0;
    *(this + 0x8000) = a2;
    this->M131076 = 0;
    v3 = a2 - 1;
    v4 = this;
    do
  {
    v5 = v3 * (v2 >> 8) * (unsigned char)v2 / 32258;
    if ( v5 > v3 )
    LOBYTE(v5) = a2 - 1;
    LOBYTE(v6) = 0;
    ++v2;
    HIBYTE(v6) = v5;
    *v4++ = v6;
  }
    while ( v2 <= 0xFFFF );
    return this;
}
}

// ==== BACKFILL 0x00420DE0  AlphaShapeClass::SD_vt05  cls=AlphaShapeClass  sig=csp  renamed_refs=1  residual=- ====
int AlphaShapeClass::SD_vt05(AbstractClass * aP0, int aP1)
{
{
    AbstractClass *Prefix_0;
    Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( (int)Prefix_0 >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_AlphaShapeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_AlphaShapeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_AlphaShapeClass;
    *(int *)&aP0->__pad_0[12] = &vt_AlphaShapeClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1]);
    aP0[1].q014 = 0;
  }
    return (int)Prefix_0->__pad_0;
}
}

// ==== BACKFILL 0x00421730  AlphaShapeClass::SDDTOR  cls=AlphaShapeClass  sig=csp  renamed_refs=0  residual=- ====
AlphaShapeClass * AlphaShapeClass::SDDTOR(char a2)
{
    AlphaShapeClass* v7 = this;
    int v2 = DataGlobal_88A0F0.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < DataGlobal_88A100 && v2 < --DataGlobal_88A100 )
    {
        do
        {
            ++v2;
            *(DataGlobal_88A0F4 + v2 - 1) = *(DataGlobal_88A0F4 + v2);
        }
        while ( v2 < DataGlobal_88A100 );
    }
    int v3 = DataGlobal_B0F720.FindItemIndex(&v7);
    if ( v3 != -1 && v3 < DataGlobal_B0F730 && v3 < --DataGlobal_B0F730 )
    {
        do
        {
            ++v3;
            *(DataGlobal_B0F724 + v3 - 1) = *(DataGlobal_B0F724 + v3);
        }
        while ( v3 < DataGlobal_B0F730 );
    }
    AbstractClass::DTOR(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}

// ==== BACKFILL 0x00421800  VectorClass_ptr_AlphaShapeClass::Destroy  cls=VectorClass_ptr_AlphaShapeClass  sig=csp  renamed_refs=0  residual=- ====
void VectorClass_ptr_AlphaShapeClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}

// ==== BACKFILL 0x00421830  VectorClass_ptr_AlphaShapeClass::GetItemIndex  cls=VectorClass_ptr_AlphaShapeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int VectorClass_ptr_AlphaShapeClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x004219E0  VectorClass_ptr_AlphaShapeClass::SetCapacity  cls=VectorClass_ptr_AlphaShapeClass  sig=csp  renamed_refs=0  residual=- ====
char VectorClass_ptr_AlphaShapeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
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
  }
    else
  {
    this->FindItemIndex();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}

// ==== BACKFILL 0x00421A90  VectorClass_ptr_AlphaShapeClass::FindItemIndex  cls=VectorClass_ptr_AlphaShapeClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_ptr_AlphaShapeClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}

// ==== BACKFILL 0x00422720  AnimClass::SimpleCtor  cls=AnimClass  sig=csp  renamed_refs=8  residual=- ====
namespace gamemd { int AnimClass::SimpleCtor() {
{
      wchar_t *v2;
      int v3;

      ObjectClass::ctor((_DWORD *)this);
      this->q0AC = 0;
      this->q0B0 = 0;
      v2 = g_CurrentFrame;
      this->q0BC = 0;
      this->q0B4 = v2;
      this->q0C0 = 0;
      this->q0C4 = 1;
      this->q0C8 = 0;
      this->q0CC = 0;
      this->q0D0 = -1;
      this->q0D4 = 0;
      this->q0D8 = -1;
      this->q0FC = 1000;
      this->q100 = 0;
      this->q104 = 0;
      this->q118 = 0;
      this->q119 = 0;
      this->q11A = 0;
      this->q11B = 0;
      this->q11C = 0;
      this->q120 = 0;
      this->q128 = 0;
      this->q130 = 0;
      this->q138 = 0;
      this->q12C = 0;
      this->q134 = 0;
      this->q13C = 0;
      Int4::Set(0, 0, 0, 1065353216);
      Int4::Set(0, 0, 0, 1065353216);
      this->q188 = 0;
      this->q179 = 0;
      this->q184 = 0;
      this->q18C = 0;
      this->q194 = 0;
      this->q195 = 1;
      this->q196 = 0;
      this->q197 = 0;
      this->q19B = 0;
      this->q19C = 1;
      this->q19D = 0;
      this->q19E = 0;
      *(_DWORD *)this = 0;
      this->vtable3 = 0;
      this->vtable4 = &vt_AnimClass;
      this->vtable4 = &off_7E3328;
      if ( g_AnimClassCount < DataGlobal_A8E9B0
        || (DataGlobal_A8E9B5 || !DataGlobal_A8E9B0)
        && DataGlobal_A8E9BC > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(AnimClass_Array + 8))(
             &AnimClass_Array,
             DataGlobal_A8E9B0 + DataGlobal_A8E9BC,
             0) )
      {
        v3 = g_AnimClassCount++;
        *((_DWORD *)g_AnimClassPool + v3) = this;
      }
      AudioController::Init((_DWORD *)(this + 416));
      AudioController::Init((_DWORD *)(this + 436));
      this->q090 = 1;
      return this;
}
} }

// ==== BACKFILL 0x00422B80  TerrainClass::ClearAnimationLinkFlags  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void TerrainClass::ClearAnimationLinkFlags() {
{
      int i;
      int v2;

      if ( this )
      {
        for ( i = 0; i < g_AnimClassCount; ++i )
        {
          v2 = *((_DWORD *)g_AnimClassPool + i);
          if ( *(void **)(v2 + 204) == this )
            *(_BYTE *)(v2 + 405) = 0;
        }
      }
}
} }

// ==== BACKFILL 0x00422BC0  AnimClass::SetAnimSpeed  cls=AnimClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int AnimClass::SetAnimSpeed() {
{
    return this->q104 + ObjectClass::GetBoundingSize((AnimClass *)this);
}
} }

// ==== BACKFILL 0x00422BE0  AnimClass::UpdateZAdjust  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* AnimClass::UpdateZAdjust(void* a1) {
{
      _DWORD *Coords;
      _DWORD *v4;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int *v11;
      CoordStruct v12;

      if ( this->q0CC )
      {
        Coords = (_DWORD *)ObjectClass::GetCoords(this);
        v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD, CoordStruct *))(**((_DWORD **)this + 51) + 72))(
                         this->q0CC,
                         &v12);
        v5 = *Coords + *v4;
        v6 = Coords[1];
        v7 = Coords[2];
        v8 = v4[1] + v6;
        v9 = v4[2];
        *a2 = v5;
        a2[1] = v8;
        a2[2] = v9 + v7;
        return a2;
      }
      else
      {
        v11 = (int *)ObjectClass::GetCoords(this);
        *a2 = *v11;
        a2[1] = v11[1];
        a2[2] = v11[2];
        return a2;
      }
}
} }

// ==== BACKFILL 0x00422C70  AnimClass::CheckLayerFlags  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int AnimClass::CheckLayerFlags(int a1, int a2, int a3) {
{
    if ( this->q184 )
    return 0;
    else
    return ObjectClass::CalcDrawRect((AnimClass *)this);
}
} }

// ==== BACKFILL 0x004238B0  AnimClass::UpdateMirrorState  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool AnimClass::UpdateMirrorState(int a1) {
{
    return (unsigned char)ObjectClass::UpdateProductionDisplay((#374 *)this) != 0;
}
} }

// ==== BACKFILL 0x004238D0  AnimClass::CheckMirrorFlags  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int * AnimClass::CheckMirrorFlags(int a1)
{
{
    if ( (DataGlobal_89A190 & 1) == 0 )
  {
    DataGlobal_89A190 |= 1u;
    DataGlobal_89A160 = 2147450879;
    atexit(nullsub_89);
  }
    return &DataGlobal_89A160;
}
}

// ==== BACKFILL 0x00423930  AnimClass::UpdateProjectileTrajectory  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int AnimClass::UpdateProjectileTrajectory() {
{
      float *v2;
      int v3;
      int v4;
      void **v5;
      int *v6;
      _DWORD *Coords;
      _DWORD *v8;
      _DWORD *v9;
      _DWORD *v10;
      int v11;
      int v12;
      int v13;
      int v14;
      int v15;
      int v16;
      _DWORD *v17;
      int v19;
      int v20;
      int v21;
      int v22;
      char v23[12];
      int v24[3];
      char v25[12];
      _DWORD v26[3];

      v2 = (float *)(this + 296);
      v3 = JumpjetLocomotionClass::Update2(this + 296);
      v4 = this->q0C8;
      v22 = v3;
      if ( *(_BYTE *)(v4 + 854) )
        v2[11] = v2[11] + *((double *)v2 + 1);
      if ( v3 == 1 )
      {
        if ( *(_DWORD *)(this->q0C8 + 768) )
        {
          v5 = (void **)__2_YAPAXI_Z(0x1C8u);
          if ( v5 )
          {
            v6 = (int *)this->vt18(v23);
            AnimClass::ctor(v5, *(void **)(this->q0C8 + 768), v6, 0, 1, (void *)0x600, 0, 0);
          }
        }
        Coords = Coord::GetCoords(v2, v24);
        v8 = (_DWORD *)*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, Coords) + 57);
        if ( v8 )
        {
          do
          {
            v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v8 + 72))(v8, v25);
            v10 = Coord::GetCoords((float *)this + 74, v26);
            v11 = this->q0C8;
            v12 = abs32(v10[1] - v9[1]) + abs32(*v10 - *v9);
            if ( v12 <= *(_DWORD *)(v11 + 820) )
            {
              v13 = Math::RoundToInt(*(double *)(v11 + 680));
              v14 = *v8;
              v20 = v13;
              v19 = *(_DWORD *)(v11 + 816);
              v21 = v14;
              v15 = ZCoordToScreenY(v12);
              (*(void (__thiscall **)(_DWORD *, int *, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(v21 + 364))(
                v8,
                &v20,
                v15,
                v19,
                0,
                0,
                0,
                0);
            }
            v8 = (_DWORD *)v8[12];
          }
          while ( v8 );
          v3 = v22;
        }
      }
      else if ( v3 == 2 )
      {
        this->vt62();
      }
      v16 = *(_DWORD *)this;
      v17 = Coord::GetCoords((float *)this + 74, v26);
      (*(void (__thiscall **)(char *, _DWORD *))(v16 + 436))(this, v17);
      return v3;
}
} }

// ==== BACKFILL 0x00425260  AnimClass::SetField8  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
void AnimClass::SetField8(int v) {
PowerOff = 1;

/* ASM:
mov     byte ptr [ecx+19Eh], 1
retn
*/
}

// ==== BACKFILL 0x00425280  AnimClass::SaveLoad_Prefix  cls=AnimClass  sig=csp  renamed_refs=9  residual=- ====
namespace gamemd { int AnimClass::SaveLoad_Prefix(int a1, int a2) {
{
      ObjectClass *Register;
      int fallRate;
      int v6;
      int v7;

      Register = (ObjectClass *)BuildingClass::SaveLoad_Register((#374 *)this);
      if ( (int)Register >= 0 )
      {
        if ( aP1 )
        {
          ObjectClass::Init(aP1, (AbstractClass *)&aP1a);
          __4type_info_AAEAAV0_ABV0__Z(&aP1[1].__pad_0[8], (int)&aP1a);
          *(_DWORD *)aP1->__pad_0 = 0;
          *(_DWORD *)&aP1->__pad_0[4] = 0;
          *(_DWORD *)&aP1->__pad_0[8] = &vt_AnimClass;
          *(_DWORD *)&aP1->__pad_0[12] = &off_7E3328;
        }
        AudioController::Init(&aP1[2].q03C[3]);
        AudioController::Init(&aP1[2].q050[3]);
        ObjectPtr::RegisterForTracking(
          (SwizzleManagerClass *)&stru_B05488[27784],
          (MouseClass *)&aP1[1].q01C);
        ObjectPtr::RegisterForTracking(
          (SwizzleManagerClass *)&stru_B05488[27784],
          (MouseClass *)&aP1[1].NeedsSaveOrLink);
        ObjectPtr::RegisterForTracking(
          (SwizzleManagerClass *)&stru_B05488[27784],
          (MouseClass *)&aP1[2].objectTypeFlags);
        ObjectPtr::RegisterForTracking(
          (SwizzleManagerClass *)&stru_B05488[27784],
          (MouseClass *)&aP1[2].q028);
        fallRate = aP1[1].q02C;
        if ( fallRate <= -1 )
        {
          if ( LOBYTE(aP1[1].q030) )
          {
            v6 = FileExtension::MapHandler((ObjectClass *)((char *)aP1 + 220));
            if ( v6 )
            {
              v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 24))(v6, 0);
              if ( v7 )
              {
                aP1[1].q028 = *(_DWORD *)(v7 + 780);
                return (int)Register->__pad_0;
              }
            }
          }
          aP1[1].q028 = 0;
        }
        else if ( fallRate < *(int *)stru_B05488[88] )
        {
          aP1[1].q028 = *(_DWORD *)(*(_DWORD *)(stru_B05488.field_4C + 4 * fallRate) + 780);
          return (int)Register->__pad_0;
        }
      }
      return (int)Register->__pad_0;
}
} }

// ==== BACKFILL 0x00425410  AnimClass::ProcessPower  cls=AnimClass  sig=csp  renamed_refs=3  residual=- ====
namespace gamemd { int AnimClass::ProcessPower(void* a1) {
{
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;

      HouseClass::ProcessPower((#374 *)this);
      v3 = this->q0CC;
      if ( v3 )
      {
        v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4);
        Power::TimerProcess(v4);
      }
      Power::TimerProcess(this->q0D0);
      Power::TimerProcess(this->q0FC);
      Power::TimerProcess(this->q100);
      Power::TimerProcess(this->q104);
      Power::TimerProcess(this->q184);
      Checksummer::Add_double(this->q188, this->q18C);
      Power::TimerProcess(this->q190);
      LOBYTE(v5) = this->q194;
      Power::FlagProcess(a2, v5);
      v6 = Power::TimerProcess(*(unsigned __int8 *)(this + 405));
      LOBYTE(v6) = this->q196;
      Power::FlagProcess(a2, v6);
      LOBYTE(v7) = this->q197;
      Power::FlagProcess(a2, v7);
      LOBYTE(v8) = this->q19B;
      v9 = Power::FlagProcess(a2, v8);
      LOBYTE(v9) = this->q19C;
      Power::FlagProcess(a2, v9);
      LOBYTE(v10) = this->q19E;
      return Power::FlagProcess(a2, v10);
}
} }

// ==== BACKFILL 0x00425510  AnimClass::CheckEndOfSequence  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int AnimClass::CheckEndOfSequence() {
{
      return *(_DWORD *)(this->q0C8 + 704);
}
} }

// ==== BACKFILL 0x00425520  AbstractClass::updateLayer  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int AbstractClass::updateLayer()
{
{
    return this->infantrySelfHeal;
}
}

// ==== BACKFILL 0x00425530  AnimClass::Undeploy  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int AnimClass::Undeploy() {
{
      CoordStruct *v2;
      _DWORD *v3;
      _DWORD v5[3];

      v2 = (CoordStruct *)this->q0C8;
      if ( v2 && BYTE1(v2[71].X) )
      {
        v5[0] = this->q09C;
        v5[1] = this->q0A0;
        v5[2] = this->q0A4;
        v3 = Coord::To_Cell(&stru_87C374[13428], (IUnknown *)v5);
        v3[80] &= ~0x20000u;
      }
      if ( !(unsigned __int8)ObjectClass::Undeploy(this) )
        return 0;
      RemoveTarget((IUnknown *)this);
      return 1;
}
} }

// ==== BACKFILL 0x00425630  AnimClass::CheckDamageFlags  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int AnimClass::CheckDamageFlags() {
{
      _DWORD *v1;
      int v2;
      int result;

      v1 = this + 39;
      v2 = this->q0CC;
      result = v1[2];
      if ( v2 )
        result += *(_DWORD *)(v2 + 164);
      return result;
}
} }

// ==== BACKFILL 0x00426270  AnimClass::UpdateDamageRadius  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int AnimClass::UpdateDamageRadius(void* a1) {
{
      char v3;
      _BYTE *v4;
      int result;

      v3 = Input::OffsetToDirection(a2);
      v4 = Coord::To_Cell(&DataGlobal_87F7E8, a2);
      if ( Map_MaxHeight + Cell::GetGroundHeight(a2) <= a2[2] && (*((_DWORD *)v4 + 80) & 0x100) != 0 )
      {
        v4[296] |= 1 << v3;
        result = this->vt14();
        *((_DWORD *)v4 + 22) = result;
      }
      else
      {
        v4[292] |= 1 << v3;
        result = this->vt14();
        *((_DWORD *)v4 + 21) = result;
      }
      return result;
}
} }

// ==== BACKFILL 0x00426300  AnimClass::ProcessAreaEffect  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
char AnimClass::ProcessAreaEffect(unsigned int * a1)
{
{
    char v1;
    char *v2;
    char result;
    v1 = Input::OffsetToDirection(a1);
    v2 = Coord::To_Cell(&DataGlobal_87F7E8, a1);
    if ( Cell::GetGroundHeight(a1) + Map_MaxHeight > *((int*)(a1) + 2) )
  {
    result = ~(1 << v1) & v2[292];
    v2[292] = result;
    if ( (result & 0x1C) == 0 )
    *((int *)(v2) + 21) = -1;
  }
    else
  {
    result = ~(1 << v1) & v2[296];
    v2[296] = result;
    if ( (result & 0x1C) == 0 )
    *((int *)(v2) + 22) = -1;
  }
    return result;
}
}

// ==== BACKFILL 0x00426390  AbstractClass::COMStub_Return0_25  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_25()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x004263A0  AbstractClass::COMStub_26  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_26()
{
return 0;
}

// ==== BACKFILL 0x004263B0  AbstractClass::COMStub_Return0_32  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_32()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x004263C0  AbstractClass::COMStub_Ret8487648_36  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Ret8487648_36()
{
{
    return (int)aNoName_0;
}
}

// ==== BACKFILL 0x004263D0  ObjectClass::GetDrawPosition  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::GetDrawPosition() {
{
    int *v1;
    int v2;
    int v3;
    int v4;
    char v6[12];
    int *v7;
    v1 = (int *)this->Delete(v6);
    v2 = *v1;
    v3 = v1[1];
    v4 = v1[2];
    *v7 = v2;
    v7[1] = v3;
    v7[2] = v4 + 50;
    return (int)v7;
}
} } }

// ==== BACKFILL 0x00426410  AbstractClass::getCoordCenter  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::getCoordCenter()
{
{
    int result;
    LOBYTE(result) = 1;
    return result;
}
}

// ==== BACKFILL 0x00426420  AbstractClass::COMStub_Return0_49  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_49()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x00426430  AbstractClass::COMStub_50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_50()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x00426440  AbstractClass::COMStub_Return0_67  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_67()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x00426450  AbstractClass::COMStub_Return0_68  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_68()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x00426460  AbstractClass::COMStub_Return0_85  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_85()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x00426470  AbstractClass::COMStub_Return0_86  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_86()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x00426480  AbstractClass::COMStub_Return0_87  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_87()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x00426490  AbstractClass::COMStub_Return0_88  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_88()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x004264A0  AbstractClass::COMStub_Return0_92  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_92()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x004264B0  AbstractClass::COMStub_Return0_99  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_99()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x004264C0  AbstractClass::COMStub_107  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_107()
{
return 0;
}

// ==== BACKFILL 0x004264D0  ObjectClass::COMStub_108  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::COMStub_108()
{
return 0;
}

// ==== BACKFILL 0x004264E0  AbstractClass::COMStub_Return0_117  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_117()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x004264F0  AbstractClass::COMStub_Return0_118  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_118()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x00426500  AbstractClass::COMStub_Return0_119  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_119()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x00426510  AbstractClass::getCoordCenter2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::getCoordCenter2()
{
{
    int result;
    LOBYTE(result) = 1;
    return result;
}
}

// ==== BACKFILL 0x00426520  AbstractClass::COMStub_Return0_121  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_121()
{
return 0;
}

// ==== BACKFILL 0x00426530  AnimClass::MissionStubReturnZero  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int AnimClass::MissionStubReturnZero()
{
return 456;
}

// ==== BACKFILL 0x00426540  AnimClass::MissionStubReturnZero2  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int AnimClass::MissionStubReturnZero2(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448643;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// ==== BACKFILL 0x00426580  AbstractClass::getAltitude  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::getAltitude()
{
return 4;
}

// ==== BACKFILL 0x00426590  AnimClass::MissionStubReturnZero3  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* AnimClass::MissionStubReturnZero3(int a2) {
{
    AnimClass::Destruct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (AnimClass *)this;
}
} }

// ==== BACKFILL 0x004265B0  Cell::GetHeight  cls=Cell  sig=csp  renamed_refs=0  residual=- ====
unsigned short * Cell::GetHeight(BuildingTypeClass * aP1, int * a2)
{
{
    double v4;
    if ( *(int *)aP1->vtable0 == *a2 && *(int *)&aP1->vtable0[4] == *((int*)(a2) + 1) )
    *(void**)this = 0;
    v4 = Math::CalcAngle((double)*(int *)&aP1->vtable0[4] - (double)*((int*)(a2) + 1), (double)*a2 - (double)*(int *)aP1->vtable0);
    LOWORD(aP1) = Math::RoundToInt((v4 - 1.570796326794897) * -10430.06004058427);
    *(int *)this = aP1;
    return this;
}
}

// ==== BACKFILL 0x00426620  ??4type_info_AAEAAV0_ABV0__Z  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void * E4Recv_426620::__4type_info_AAEAAV0_ABV0__Z(int a2)
{
{
    return this;
}
}

// ==== BACKFILL 0x00426630  CDTimerClass::TimeRemaining  cls=Locomotor  sig=csp  renamed_refs=0  residual=- ====
int CDTimerClass::TimeRemaining()
{
    int result = TimeLeft;
    if (StartTime != -1)
    {
        if (g_CurrentFrame - StartTime >= result)
            return 0;
        result -= g_CurrentFrame - StartTime;
    }
    return result;
}

// ==== BACKFILL 0x004266D0  sub_4266D0  cls=AnimFile  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_4266D0::sub_4266D0()
{
{
    char v2;
    void (__thiscall ***v3)(int, int);
    v2 = (unsigned char)this->M137;
    *(int *)this = &vt_AnimFile;
    if ( v2 )
  {
    (*(void (__thiscall **)(int))(**((int **)(this) + 33) + 52))(this->M132);
    this->M137 = 0;
  }
    v3 = (void (__thiscall ***)(int, int))this->M3596;
    this->M132 = 0;
    if ( v3 )
  {
    (**v3)(v3, 1);
    this->M3596 = 0;
  }
    if ( this->M3600 )
  {
    __3_YAXPAX_Z(*((void **)(this) + 900));
    this->M3600 = 0;
  }
    this->M136 = 0;
    *(int *)this = &vt_Animate;
}
}

// ==== BACKFILL 0x00426990  sub_426990  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_426990::sub_426990()
{
{
    char result;
    int v2;
    int v3;
    short *i;
    if ( this->M140 == 541478988 && this->M156 == 1296649793 && (unsigned short)this->M144 == 256 && this->M148 <= 0xFFFFu && (unsigned short)this->M152 <= 0x100u && (unsigned short)this->M154 == 1280 && (unsigned short)this->M160 == 320 && (unsigned short)this->M162 == 200 )
  {
    result = 1;
    if ( (unsigned char)this->M169 <= 1u && (unsigned char)this->M171 == 1 && !(unsigned char)this->M170 && !(unsigned char)this->M168 )
    {
    v2 = 0;
    v3 = *(unsigned short *)(this + 146);
    if ( !(short)v3 )
    return result;
    for ( i = (short *)(this + 2062); *i <= 0x100u; i += 3 )
      {
    if ( ++v2 >= v3 )
    return result;
      }
    }
  }
    return 0;
}
}

// ==== BACKFILL 0x00426A73  ?UNSAFE_CurrentVirtualProcessor_uint_nternalContextBase_details_Concurrency__uint_BEPAVVirtualProcessor_23_XZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
struct Concurrency::details::VirtualProcessor * E4Recv_426A73::_UNSAFE_CurrentVirtualProcessor_uint_nternalContextBase_details_Concurrency__uint_BEPAVVirtualProcessor_23_XZ()
{
{
    return (struct Concurrency::details::VirtualProcessor *)this->M160;
}
}

// ==== BACKFILL 0x00426A80  AbstractClass::getMapCoords  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::getMapCoords()
{
{
    return this->buildtimeDefensesMult;
}
}

// ==== BACKFILL 0x00426E80  sub_426E80  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_426E80::sub_426E80(int a2)
{
{
    int result;
    int v3;
    unsigned short *i;
    int v5;
    if ( a2 >= this->M204 )
    return -1;
    result = 0;
    v3 = *(unsigned short *)(this + 146);
    if ( !(short)v3 )
    return -1;
    for ( i = (unsigned short *)(this + 2060); ; i += 3 )
  {
    HIWORD(v5) = 0;
    if ( *i <= a2 )
    {
    LOWORD(v5) = *i;
    if ( v5 + i[1] > a2 )
    break;
    }
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}

// ==== BACKFILL 0x00426FD0  sub_426FD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned short E4Recv_426FD0::sub_426FD0(int a2)
{
{
    int v2;
    unsigned short result;
    int v5;
    int v6;
    unsigned short *i;
    int v8;
    int v9;
    unsigned short *v10;
    int v11;
    int v12;
    v2 = a2;
    result = 0;
    if ( a2 < this->M204 )
  {
    v5 = 0;
    v6 = *(unsigned short *)(this + 146);
    if ( (short)v6 )
    {
    for ( i = (unsigned short *)(this + 2060); ; i += 3 )
      {
    HIWORD(v8) = 0;
    if ( *i <= a2 )
        {
    LOWORD(v8) = *i;
    if ( v8 + i[1] > a2 )
    break;
        }
    if ( ++v5 >= v6 )
    return 0;
      }
    if ( v5 == -1 )
    return 0;
    if ( (unsigned char)this->M136 && this->M3608 != v5 )
      {
    v9 = this->M132;
    this->M3608 = v5;
    (*(void (__thiscall **)(int, int, int))(*(int *)(v9) + 40))(v9, (v5 << 16) + 2816, 0);
    (*(void (__thiscall **)(int, int, int))(**(int **)(this + 132) + 36))( this->M132, this->M3600, *(unsigned short *)(this + 2 * (3 * v5 + 1032)) + 2 * *(unsigned short *)(this + 6 * v5 + 2062) + 8);
    v2 = a2;
      }
    v10 = (unsigned short *)(this->M3600 + 8);
    v11 = v2 - *(unsigned short *)(this + 6 * v5 + 2060);
    if ( v11 < 0 )
    return 0;
    v12 = v11 + 1;
    do
      {
    result = *v10++;
    if ( result >= 2u )
    result -= 2;
    --v12;
      }
    while ( v12 );
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00427270  AbstractClass::setMapCoords  cls=Animate  sig=csp  renamed_refs=0  residual=- ====
std::locale::facet * AbstractClass::setMapCoords(char a2)
{
{
    *(void**)this = vt_Animate;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00427290  AnimFile::Stub  cls=AnimFile  sig=csp  renamed_refs=0  residual=- ====
char * AnimFile::Stub()
{
{
    return this + 1292;
}
}

// ==== BACKFILL 0x004272A0  AnimFile::QueryInterface  cls=AnimFile  sig=csp  renamed_refs=0  residual=- ====
AnimFile * AnimFile::QueryInterface(char a2)
{
{
    char v3;
    void (__thiscall ***v4)(int, int);
    v3 = *((char *)(this) + 137);
    *(int *)this = &vt_AnimFile;
    if ( v3 )
  {
    (*(void (__thiscall **)(int))(**((int **)(this) + 33) + 52))(*((int *)(this) + 33));
    *((char *)(this) + 137) = 0;
  }
    v4 = (void (__thiscall ***)(int, int))*((int *)(this) + 899);
    *((int *)(this) + 33) = 0;
    if ( v4 )
  {
    (**v4)(v4, 1);
    *((int *)(this) + 899) = 0;
  }
    if ( *((int *)(this) + 900) )
  {
    __3_YAXPAX_Z(*((void **)(this) + 900));
    *((int *)(this) + 900) = 0;
  }
    *((char *)(this) + 136) = 0;
    *(int *)this = &vt_Animate;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (AnimFile *)this;
}
}

// ==== BACKFILL 0x00427A80  AnimTypeClass::GetLoopCount  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
char AnimTypeClass::GetLoopCount(int a2)
{
{
    int v2;
    char Buffer[512];
    LOBYTE(v2) = g_ArmageddonMode;
    if ( g_ArmageddonMode || a2 != DataGlobal_822CF8 )
  {
    if ( !this->Theater || this->DemandLoad )
    {
    LOBYTE(v2) = this->NewTheater;
    if ( (char)v2 )
    LOBYTE(v2) = this->GetWarhead(a2);
    }
    else
    {
    if ( this->Image && this->ImageAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 41));
    this->ImageAllocated = 0;
      }
    this->Image = 0;
    _makepath(Buffer, 0, 0, (const char *)(this) + 36, (const char *)&DataGlobal_7E1BC6 + 112 * a2);
    v2 = SearchMIXFile(Buffer, 1);
    this->Image = v2;
    }
  }
    return v2;
}
}

// ==== BACKFILL 0x00427CB0  AnimTypeClass::FindIndex  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::FindIndex()
{
{
    int v2;
    if ( !this )
    return -1;
    v2 = 0;
    if ( *(int *)&DataGlobal_89E138[90152] <= 0 )
    return -1;
    while ( _strcmpi((const void *)(*(int *)(*(int *)&DataGlobal_89E138[90140] + 4 * v2) + 36), this) )
  {
    if ( ++v2 >= *(int *)&DataGlobal_89E138[90152] )
    return -1;
  }
    return v2;
}
}

// ==== BACKFILL 0x00428970  AnimTypeClass::SaveLoad_Prefix_0  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x00428990  AnimTypeClass::GetClassIdentifier  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1366608934;
  a2[1] = 298976796;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x00428C10  AnimTypeClass::GetAnimData  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::GetAnimData(int a2, int a3)
{
{
    int result;
    result = this->Next;
    if ( result == a2 )
    this->Next = 0;
    return result;
}
}

// ==== BACKFILL 0x00428E40  AnimTypeClass::Thunk_AnimTypeClass_sub_428E40  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::Thunk_AnimTypeClass_sub_428E40()
{
return -1;
}

// ==== BACKFILL 0x00428E50  AnimTypeClass::Thunk_AnimTypeClass_sub_428E50  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::Thunk_AnimTypeClass_sub_428E50()
{
return 5;
}

// ==== BACKFILL 0x00428E60  AnimTypeClass::GetAuxField  cls=AnimTypeClass  sig=csp  renamed_refs=1  residual=- ====
int AnimTypeClass::GetAuxField()
{
{
    return this->vtable2;
}
}

// ==== BACKFILL 0x00428E70  AnimTypeClass::GetObjectSize  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::GetObjectSize()
{
return 888;
}

// ==== BACKFILL 0x00428E80  AnimTypeClass::Stub  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
char AnimTypeClass::Stub(int a1, int a2)
{
return 0;
}

// ==== BACKFILL 0x00428E90  AnimTypeClass::StubReturnFalse  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::StubReturnFalse(int a1)
{
return 0;
}

// ==== BACKFILL 0x00428EA0  AnimTypeClass::ddtor  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
AnimTypeClass * AnimTypeClass::ddtor(char a2)
{
    AnimTypeClass* v7 = this;
    g_AnimPoolManager;
    int v2 = g_AnimPoolManager.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < g_AnimManager && v2 < --g_AnimManager )
    {
        do
        {
            ++v2;
            *(g_AnimPoolCount + v2 - 1) = *(g_AnimPoolCount + v2);
        }
        while ( v2 < g_AnimManager );
    }
    DataGlobal_8B4150;
    int v3 = DataGlobal_8B4150.FindItemIndex(&v7);
    if ( v3 != -1 && v3 < DataGlobal_8B4160 && v3 < --DataGlobal_8B4160 )
    {
        do
        {
            ++v3;
            *(DataGlobal_8B4154 + v3 - 1) = *(DataGlobal_8B4154 + v3);
        }
        while ( v3 < DataGlobal_8B4160 );
    }
    ObjectTypeClass::Destruct(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}

// ==== BACKFILL 0x00429210  HouseClass::QueryInterface_Helper  cls=TiberianSunClassFactory  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::QueryInterface_Helper()
{
{
    int v2;
    const void *v3;
    int *v4;
    if ( !v4 )
    return -2147467261;
    if ( memcmp(v3, &DataGlobal_7F7CA0, 0x10u) && memcmp(v3, &IID_IUnknown, 0x10u) )
    return -2147467262;
    *v4 = v2;
    (*(void (__stdcall **)(int))(*(int *)(v2) + 4))(v2);
    return 0;
}
}

// ==== BACKFILL 0x00429270  HouseClass::QueryInterface_Dispatch  cls=TiberianSunClassFactory  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::QueryInterface_Dispatch()
{
{
    int *v1;
    int v3;
    int v4;
    const void *v5;
    int *v6;
    v1 = v6;
    if ( !v6 )
    return -2147024809;
    *v6 = 0;
    if ( v4 )
    return -2147221232;
    v3 = -2147467262;
    if ( !memcmp(v5, &DataGlobal_7E36C0, 0x10u) || !memcmp(v5, &IID_IUnknown, 0x10u) )
  {
    if ( !&punk )
    return -2147024882;
    v3 = (*(int (__stdcall **)(IUnknown *, const void *, int *))punk.field_0)(&punk, v5, v6);
    if ( v3 < 0 )
    __3_YAXPAX_Z(&punk);
    v1 = v6;
  }
    if ( !memcmp(v5, &DataGlobal_7EA6E8, 0x10u) )
  {
    if ( !&DataGlobal_87F7E8 )
    return -2147024882;
    v3 = ((int (__stdcall *)(MouseClass **, const void *, int *))DataGlobal_87F7E8->field_0)( &DataGlobal_87F7E8, v5, v1);
    if ( v3 < 0 )
    __3_YAXPAX_Z(&DataGlobal_87F7E8);
  }
    return v3;
}
}

// ==== BACKFILL 0x00429360  sub_429360  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_429360::sub_429360()
{
{
    int result;
    int v2;
    const void *v3;
    int *v4;
    if ( !v4 )
    return -2147467261;
    if ( !memcmp(v3, &DataGlobal_7E36C0, 0x10u) || !memcmp(v3, &IID_IUnknown, 0x10u) )
  {
    *v4 = v2;
    (*(void (__stdcall **)(int))(*(int *)(v2) + 4))(v2);
    return 0;
  }
    else
  {
    result = 0;
    if ( !memcmp(v3, &DataGlobal_7EA6E8, 0x10u) )
    *v4 = &DataGlobal_87F7E8;
    else
    return -2147467262;
  }
    return result;
}
}

// ==== BACKFILL 0x004293E0  sub_4293E0  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4293E0()
{
return 1;
}

// ==== BACKFILL 0x004293F0  sub_4293F0  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4293F0()
{
return 1;
}

// ==== BACKFILL 0x00429400  sub_429400  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_429400::sub_429400()
{
{
    int (__stdcall ***v2)(int, void *, int);
    int v3;
    return (**v2)(v2, &DataGlobal_7E36C0, v3);
}
}

// ==== BACKFILL 0x00429420  sub_429420  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_429420::sub_429420()
{
{
    BSTR *v2;
    if ( !v2 )
    return -2147467261;
    *v2 = SysAllocString(&psz);
    return 0;
}
}

// ==== BACKFILL 0x00429450  sub_429450  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_429450::sub_429450()
{
{
    BSTR *v2;
    if ( !v2 )
    return -2147467261;
    *v2 = SysAllocString(aSun);
    return 0;
}
}

// ==== BACKFILL 0x00429480  sub_429480  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_429480::sub_429480()
{
{
    int (__stdcall ***v2)(int, void *, int);
    int v3;
    return (**v2)(v2, &DataGlobal_7E36C0, v3);
}
}

// ==== BACKFILL 0x004294A0  sub_4294A0  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4294A0()
{
return 0;
}

// ==== BACKFILL 0x004294B0  sub_4294B0  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4294B0::sub_4294B0()
{
{
    WCHAR WideCharStr[32];
    BSTR *v3;
    if ( !v3 )
    return -2147467261;
    MultiByteToWideChar(0, 1u, (LPCCH)g_ScenarioClass_Instance->fileName, -1, WideCharStr, 32);
    *v3 = SysAllocString(WideCharStr);
    return 0;
}
}

// ==== BACKFILL 0x00429500  sub_429500  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_429500::sub_429500()
{
{
    int v2;
    int *v3;
    int *v4;
    if ( !v4 )
    return -2147467261;
    v2 = g_ScenarioClass_Instance->pauseTimer[0];
    if ( g_ScenarioClass_Instance->elapsedTimer[1] != -1 )
  {
    v3 = &g_ScenarioClass_Instance->elapsedTimer[1];
    v2 += Timer::GetTicks() - *v3;
  }
    *v4 = v2;
    return 0;
}
}

// ==== BACKFILL 0x0042A5B0  CellClass::ClearOccupancyGrid  cls=CellClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int CellClass::ClearOccupancyGrid() {
{
      _DWORD *v1;
      int i;
      _DWORD *v3;
      int j;
      int result;
      int k;
      char *v7;
      int *v8;
      int v9;
      int v10;
      _DWORD *v11;
      int v12;
      int v13;
      int v14;
      int v15;

      *(_DWORD *)(this->vtable4 + 1572864) = 0;
      *(_DWORD *)(this->lightConvert + 0x100000) = 0;
      v1 = (_DWORD *)this->isoTileTypeIndex;
      for ( i = 0; i <= *v1; *(_DWORD *)(v1[2] + 4 * i - 4) = 0 )
        ++i;
      *v1 = 0;
      v3 = (_DWORD *)this->unknown68;
      for ( j = 0; j <= *v3; *(_DWORD *)(v3[2] + 4 * j - 4) = 0 )
        ++j;
      *v3 = 0;
      result = this->attached1 + 1;
      this->attached1 = result;
      if ( !result )
      {
        for ( k = g_MapCellWidth * g_MapCellWidth - 1; k >= 0; *(_DWORD *)(this->rubble + 4 * k + 4) = 0 )
        {
          --k;
          *(_DWORD *)(this->attachedTag + 4 * k + 4) = 0;
        }
        v7 = (char *)(&DataGlobal_87F810 - (_UNKNOWN *)this);
        v8 = this + 19;
        v15 = 3;
        do
        {
          v9 = *v8;
          v10 = *(int *)((char *)v8 + (_DWORD)v7) - 1;
          if ( v10 >= 0 )
          {
            v11 = (_DWORD *)(v9 + 4 * v10);
            v12 = *(v8 - 3) - v9;
            v13 = v8[3] - v9;
            v14 = v10 + 1;
            do
            {
              *(_DWORD *)((char *)v11 + v12) = 0;
              *v11 = 0;
              *(_DWORD *)((char *)v11-- + v13) = 0;
              --v14;
            }
            while ( v14 );
            v7 = (char *)(&DataGlobal_87F810 - (_UNKNOWN *)this);
          }
          ++v8;
          --v15;
        }
        while ( v15 );
        result = this->attached1 + 1;
        this->attached1 = result;
      }
      return result;
}
} }

// ==== BACKFILL 0x0042B1F0  Object::ComputeAllocationSize  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Object::ComputeAllocationSize()
{
{
    return 2 * g_Cell_PositionLUT * (g_CellPositionOffset + 4);
}
}

// ==== BACKFILL 0x0042D470  CellStruct::Set  cls=CellStruct  sig=csp  renamed_refs=0  residual=- ====
unsigned short * CellStruct::Set(short a2, short a3)
{
{
    LOWORD(this->vfptr) = a2;
    HIWORD(this->vfptr) = a3;
    return this;
}
}

// ==== BACKFILL 0x0042D830  sub_42D830  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_42D830::sub_42D830(unsigned int * a2)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->M8;
    if ( this->M16 >= v3 )
  {
    if ( !(unsigned char)this->M13 && v3 )
    return 0;
    v4 = this->M20;
    if ( v4 <= 0 || !this->Vf8(v3 + v4, 0) )
    return 0;
  }
    v6 = this->M16;
    v7 = this->M4;
    this->M16 = v6 + 1;
    *(int *)(v7 + 4 * v6) = *a2;
    return 1;
}
}

// ==== BACKFILL 0x0042DF40  Delegate::ProcessBitmapAndDispatch  cls=Base64Pipe  sig=csp  renamed_refs=0  residual=- ====
int Delegate::ProcessBitmapAndDispatch()
{
{
    Pipe *v2;
    BombClass *v3;
    Pipe *pad_14;
    Pipe *v5;
    v2 = 0;
    v3 = (BombClass *)this->field_10;
    if ( v3 )
  {
    if ( this->field_C )
    {
    pad_14 = (Pipe *)&this->field_18;
    v5 = (Pipe *)DecodeBitmapRGB((Pipe *)this->__pad_14, v3, &this->field_18, 3);
    }
    else
    {
    pad_14 = (Pipe *)this->__pad_14;
    v5 = (Pipe *)EncodeBitmapRGB((Pipe *)&this->field_18, (int)v3, this->__pad_14, 4);
    }
    v2 = Delegate::Dispatch(this, pad_14, v5);
    this->field_10 = 0;
  }
    return (int)&v2->__pad_0[GameClass::GetRelatedObject(this)];
}
}

// ==== BACKFILL 0x0042E410  Rect::Set  cls=Rect  sig=csp  renamed_refs=0  residual=- ====
IUnknown * Rect::Set(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4)
{
{
    *(void**)this = aP1;
    this->Y = aP2;
    this->Width = aP3;
    this->Height = aP4;
    return (IUnknown *)this;
}
}

// ==== BACKFILL 0x0042E6C0  sub_42E6C0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_42E6C0(int a1)
{
return 1;
}

// ==== BACKFILL 0x0042E6D0  CellClass::setTileIndex  cls=CellClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int CellClass::setTileIndex(int a1) {
{
    this->vtable2 += a2;
    *(this + 3) += HIWORD(a2);
    return a2;
}
} }

// ==== BACKFILL 0x0042E6F0  BaseClass::Constructor  cls=BaseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* BaseClass::Constructor() {
{
      _DWORD *v2;

      v2 = this + 1;
      BaseNodeClass::Vector_Constructor(0, 0);
      *v2 = &vt_DynamicVectorClass_BaseNodeClass;
      v2[5] = 10;
      v2[4] = 0;
      this->cells38 = 0;
      VectorClass::CellConstructor(this + 8, 0, 0);
      *(this + 8) = &vt_DynamicVectorClass_Cell;
      this->q034 = 10;
      this->q030 = 0;
      VectorClass::CellConstructor(this + 14, 0, 0);
      *(this + 14) = &vt_DynamicVectorClass_Cell;
      this->owner = 10;
      this->q048 = 0;
      this->q050 = 0;
      this->q052 = 0;
      this->q054 = 0;
      this->q058 = 0;
      this->q05C = 0;
      this->q060 = 0;
      this->q064 = 0;
      this->q068 = 0;
      this->q06C = 0;
      this->q070 = 0;
      this->q074 = 0;
      *this = &vt_BaseClass;
      return this;
}
} }

// ==== BACKFILL 0x0042E800  sub_42E800  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_42E800::sub_42E800(int a2)
{
{
    return *(char *)(16 * a2 + this->M8 + 8);
}
}

// ==== BACKFILL 0x0042E990  sub_42E990  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool E4Recv_42E990::sub_42E990(unsigned int * a2)
{
{
    int v4;
    int v5;
    int v6;
    short *v7;
    char v9[4];
    int i;
    if ( *((int*)(a2) + 135) != this->M116 )
    return 0;
    v4 = 0;
    if ( (int)this->M20 <= 0 )
    return 0;
    v5 = 0;
    for ( i = 0; ; i += 16 )
  {
    v6 = this->M8 + v5;
    if ( *(int *)(*((int*)(a2) + 328) + 3576) == *(int *)v6 )
    {
    v7 = (short *)(*(int (__thiscall **)(int *, char *))(*a2 + 440))(a2, v9);
    if ( *v7 == *(short *)(v6 + 4) && v7[1] == *(short *)(v6 + 6) )
    break;
    }
    ++v4;
    v5 = i + 16;
    if ( v4 >= this->M20 )
    return 0;
  }
    return this->M8 + 16 * v4 != 0;
}
}

// ==== BACKFILL 0x0042EA30  sub_42EA30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_42EA30::sub_42EA30(unsigned int * a2)
{
{
    int v4;
    int v5;
    short *v6;
    char v8[4];
    int v9;
    if ( *((int*)(a2) + 135) != this->M116 )
    return 0;
    v4 = 0;
    v9 = 0;
    if ( (int)this->M20 <= 0 )
    return 0;
    while ( 1 )
  {
    v5 = this->M8 + v4;
    if ( *(int *)(*((int*)(a2) + 328) + 3576) == *(int *)v5 )
    {
    v6 = (short *)(*(int (__thiscall **)(int *, char *))(*a2 + 440))(a2, v8);
    if ( *v6 == *(short *)(v5 + 4) && v6[1] == *(short *)(v5 + 6) )
    break;
    }
    v4 += 16;
    if ( ++v9 >= this->M20 )
    return 0;
  }
    return this->M8 + 16 * v9;
}
}

// ==== BACKFILL 0x0042EAD0  sub_42EAD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_42EAD0::sub_42EAD0(unsigned short * a2)
{
{
    int v2;
    int v3;
    int v4;
    short *i;
    v2 = this->M20;
    v3 = 0;
    if ( v2 <= 0 )
    return 0;
    v4 = this->M8;
    for ( i = (short *)(v4 + 4); *a2 != *i || *((int*)(a2) + 1) != i[1]; i += 8 )
  {
    if ( ++v3 >= v2 )
    return 0;
  }
    return v4 + 16 * v3;
}
}

// ==== BACKFILL 0x0042ED60  HouseClass::SaveTriggerNodeData  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int HouseClass::SaveTriggerNodeData(void* a1, void* a2) {
{
    int result;
    INIClass *v5;
    INIClass *v6;
    char *v7;
    int v8;
    int v9;
    ObjectClass *v10;
    INIClass Buffer[2];
    INIClass::SetInt(a1->__pad_0, Block, (char *)&DataGlobal_818994.headNode[2], this->referenceCount, 0);
    INIClass::SetInt(a1->__pad_0, Block, DataGlobal_818994[0], this->abstractFlags, 0);
    result = this->abstractFlags;
    v5 = 0;
    if ( result > 0 )
  {
    v6 = 0;
    do
    {
    sprintf(Buffer[0].__pad_0, DataGlobal_81898C, v5);
    v7 = &v6->__pad_0[*(this + 2)];
    v8 = *(int *)v7;
    v10 = (ObjectClass *)*((short *)(v7) + 3);
    v9 = *((short *)(v7) + 2);
    if ( *(int *)v7 < 0 )
    sprintf((char *const)&Buffer[0].headNode[2], (const char *const)&DataGlobal_818994.sectionCount, v8, v9, v10);
    else
    sprintf( (char *const)&Buffer[0].headNode[2], &DataGlobal_818994[40], *((int *)(g_TriggerTypeCount) + v8) + 36, v9, v10);
    INIClass::SetString(a1->__pad_0, (INIClass *)Block, Buffer, (INIClass *)&Buffer[0].headNode[2]);
    result = this->abstractFlags;
    v5 = (INIClass *)((char *)(v5) + 1);
    v6 = (INIClass *)((char *)(v6) + 16);
    }
    while ( (int)v5 < result );
  }
    return result;
}
} }

// ==== BACKFILL 0x0042F1E0  BaseClass::Construct  cls=BaseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* BaseClass::Construct(int a1) {
{
      _DWORD *v3;

      v3 = this + 1;
      BaseNodeClass::Vector_Constructor(this + 1, 0, 0);
      *v3 = &vt_DynamicVectorClass_BaseNodeClass;
      v3[5] = 10;
      v3[4] = 0;
      VectorClass::CellConstructor(this + 8, 0, 0);
      *(this + 8) = &vt_DynamicVectorClass_Cell;
      this->q034 = 10;
      this->q030 = 0;
      VectorClass::CellConstructor(this + 14, 0, 0);
      *(this + 14) = &vt_DynamicVectorClass_Cell;
      this->owner = 10;
      this->q048 = 0;
      *this = &vt_BaseClass;
      return this;
}
} }

// ==== BACKFILL 0x0042F380  HouseClass::FailedToPlaceNode  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::FailedToPlaceNode(int a1)
{
{
    int result;
    int v2;
    result = a1;
    if ( a1 )
  {
    v2 = *(int *)(a1 + 12) + 1;
    *(int *)(a1 + 12) = v2;
    return v2;
  }
    return result;
}
}

// ==== BACKFILL 0x0042F670  DynamicVector::Constructor_Cell  cls=DynamicVector  sig=csp  renamed_refs=2  residual=- ====
unsigned int * DynamicVector::Constructor_Cell(ObjectClass * aP1, ObjectClass * aP2)
{
{
    int v4;
    this->Items = 0;
    this->q008 = aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_Cell;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->Items = aP2;
    }
    else
    {
    v4 = __2_YAPAXI_Z(4 * (int)aP1);
    if ( !v4 )
    v4 = 0;
    this->Items = v4;
    this->IsAllocated = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_Cell;
    this->CapacityIncrement = 10;
    this->q010 = 0;
    return this;
}
}

// ==== BACKFILL 0x0042F860  VectorClass::ResizeEx  cls=DynamicVector  sig=csp  renamed_refs=5  residual=- ====
char VectorClass::ResizeEx(int a2, unsigned int * a3)
{
unsigned int* newItems = 0;
if ( a2 )
{
    this->IsInitialized = 0;
    if ( a3 )
    {
        newItems = a3;
    }
    else
    {
        unsigned int* fresh = (unsigned int *)operator new(4 * a2);
        if ( fresh )
            newItems = fresh;
        else
            newItems = 0;
    }
    this->IsInitialized = 1;
    if ( !newItems )
        return 0;
    if ( this->Items )
    {
        int copyCount = this->q008;
        if ( a2 < copyCount )
            copyCount = a2;
        int i = 0;
        while ( i < copyCount )
        {
            newItems[i] = this->Items[i];
            ++i;
        }
        if ( this->IsAllocated )
        {
            operator delete(this->Items);
            this->Items = 0;
        }
    }
    this->Items = (decltype(this->Items))newItems;
    this->q008 = a2;
    this->IsAllocated = (a3 == 0);
}
else
{
    this->Clear();
}
int capacity = this->q008;
if ( capacity < this->q010 )
    this->q010 = capacity;
return 1;
}

// ==== BACKFILL 0x0042FCB0  VectorClass::CellConstructor  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * VectorClass::CellConstructor(IUnknown * aP1, IUnknown * aP2)
{
    this->Items = 0;
    this->Capacity = (int)aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_Cell;
    if ( aP1 )
    {
        if ( aP2 )
        {
            this->Items = (void*)aP2;
            return this;
        }
        int v5 = __2_YAPAXI_Z(4 * (int)aP1);
        if ( v5 )
        {
            this->Items = (void*)v5;
            this->IsAllocated = 1;
            return this;
        }
        this->IsAllocated = 1;
        this->Items = 0;
    }
    return this;
}
