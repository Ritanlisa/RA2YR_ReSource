// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00464AF0  BuildingTypeClass::GetSizeInLeptons  cls=BuildingTypeClass  sig=csp  renamed_refs=2  residual=- ====
unsigned int * BuildingTypeClass::GetSizeInLeptons(unsigned int * a2)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    v2 = this->DeployingAnim_e;
    v3 = DataGlobal_89DDB8 *(void**)this->DeployingAnimLoaded;
    v2 *= 4;
    v4 = *(int *)((char *)(DataGlobal_8192B8) + v2);
    v5 = *(int *)((char *)(DataGlobal_819310) + v2);
    *a2 = v4 << 8;
    *((int*)(a2) + 1) = v5 << 8;
    *((int*)(a2) + 2) = v3;
    return a2;
}
}

// ==== BACKFILL 0x00465300  BuildingTypeClass::SaveLoad_Prefix_0  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::SaveLoad_Prefix_0()
{
{
    int result;
    int v2;
    int v3;
    int i;
    int v5;
    int *v6;
    int *v7;
    int v8;
    result = TechnoTypeClass::SaveLoad_Prefix_0((int)v6, v6, v7, v8, v5);
    if ( result >= 0 )
  {
    v2 = *v7;
    v8 = v6[1507];
    result = (*(int (__stdcall **)(int *, int *, int, int))(v2 + 16))(v7, &v8, 4, 0);
    if ( result >= 0 )
    {
    v3 = 0;
    if ( v8 <= 0 )
      {
    return 0;
      }
    else
      {
    for ( i = 0; ; i += 12 )
        {
    result = (*(int (__stdcall **)(int *, int, int, int))(*v7 + 16))(v7, i + v6[1506], 12, 0);
    if ( result < 0 )
    break;
    if ( ++v3 >= v8 )
    return 0;
        }
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00465380  BuildingTypeClass::GetClassIdentifier  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::GetClassIdentifier()
{
{
    int *v2;
    if ( !v2 )
    return -2147467261;
    *v2 = -1366608933;
    v2[1] = 298976796;
    v2[2] = 1610654892;
    v2[3] = -1252326136;
    return 0;
}
}

// ==== BACKFILL 0x00465910  AbstractClass::releaseRef  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
char AbstractClass::releaseRef()
{
return 0;
}

// ==== BACKFILL 0x00465920  AbstractClass::finalRelease  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
char AbstractClass::finalRelease()
{
return 0;
}

// ==== BACKFILL 0x00465960  AbstractClass::LoadTheaterSHP  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::LoadTheaterSHP() {
{
      int result;
      __int16 *EntireFile;
      int v4;
      int v5;
      int v6;
      _DWORD v7[22];
      _BYTE v8[12];
      int v9;
      _DWORD v10[22];
      _BYTE v11[12];
      int v12;
      char Buffer[260];

      result = this->qE00;
      if ( !result && this->q1761 )
      {
        if ( strlen((const char *)(this + 3676)) )
        {
          _makepath(Buffer, 0, 0, (const char *)(this + 3676), Ext);
          TheaterObjectTypeClassSpecificID(Buffer, *((_DWORD *)g_ScenarioClass_Instance + 1174));
          CCFileClass::Construct(v10, Buffer);
          EntireFile = (__int16 *)CCFileClass::ReadEntireFile(v10);
          if ( !EntireFile )
          {
            ObjectTypeClass::SetRTTI71(Buffer);
            CCFileClass::Construct(v7, Buffer);
            EntireFile = (__int16 *)CCFileClass::ReadEntireFile(v7);
            v7[0] = &vt_CCFileClass;
            v9 = 0;
            Vector::Clear((int)v8);
            v7[0] = &off_7E1668;
            BufferIOFileClass::Dtor(v7);
          }
          this->qE00 = EntireFile;
          if ( EntireFile )
          {
            v4 = 1;
            this->qE04 = 1;
            v5 = EntireFile[3] / 2;
            v6 = v5;
            if ( this->q16B7 )
            {
              v5 = this->q16F8 + 1;
              v6 = v5;
            }
            if ( v5 > 0 )
              v4 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].GUIBuildSound * 900.0 / (double)v6);
            this->qF04 = 0;
            this->qF08 = v5;
            this->qF0C = v4;
          }
          v10[0] = &vt_CCFileClass;
          v12 = 0;
          Vector::Clear((int)v11);
          v10[0] = &off_7E1668;
          BufferIOFileClass::Dtor(v10);
        }
        return this->qE00;
      }
      return result;
}
} } }

// ==== BACKFILL 0x00465CB0  nullsub_7  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_7()
{
  ;
}

// ==== BACKFILL 0x00465D70  BuildingClass::processPowerState  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int BuildingClass::processPowerState() {
{
      return this->qEDC;
}
} }

// ==== BACKFILL 0x00465D80  ??0Iostream_init_QAE_XZ_2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
Iostream_init * E4Recv_465D80::__0Iostream_init_QAE_XZ_2()
{
{
    return this;
}
}

// ==== BACKFILL 0x00465D90  BuildingTypeClass::GetTypeIdentifier  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::GetTypeIdentifier()
{
return 7;
}

// ==== BACKFILL 0x00465DA0  BuildingTypeClass::GetObjectSize  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::GetObjectSize()
{
return 6040;
}

// ==== BACKFILL 0x00465DB0  BuildingTypeClass::GetAuxField  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::GetAuxField()
{
{
    return this->ArrayIndex;
}
}

// ==== BACKFILL 0x00465DC0  BuildingTypeClass::ddtor  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::ddtor()
{
{
    char v3;
    BuildingTypeClass::CleanupMembers((void **)this);
    if ( (v3 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int)this;
}
}

// ==== BACKFILL 0x00466660  BulletClass::CalculateSpreadAngle  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int * BulletClass::CalculateSpreadAngle(int a1)
{
{
    if ( (DataGlobal_89DE10 & 1) == 0 )
  {
    DataGlobal_89DE10 |= 1u;
    DataGlobal_89DDF4 = 2147450879;
    atexit(nullsub_108);
  }
    return &DataGlobal_89DDF4;
}
}

// ==== BACKFILL 0x00468090  BulletClass::SetupVoxelTransform  cls=BulletClass  sig=csp  renamed_refs=4  residual=- ====
namespace gamemd { void BulletClass::SetupVoxelTransform(void* a1, void* a2) {
{
      int v4;
      double v5;
      double v6;
      float *inited;
      float *v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;
      int v14;
      int v15;
      int v16;
      int v17;
      int v18;
      int v19;
      float v20;
      float v21;
      unsigned int v22;
      double v23;
      int v24;
      int v25;
      int v26;
      int v27;
      int GroundHeight;
      unsigned int v29;
      float v30[12];
      _BYTE v31[48];
      float v32[12];

      if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) == 0
        || (v25 = this->q09C, v26 = this->q0A0,
                                          v27 = this->q0A4,
                                          !Game::Stub3((int)&v25)) )
      {
        v4 = this->BulletClass_field_0xAC;
        if ( !*(_BYTE *)(v4 + 670) && !this->q158 )
        {
          if ( *(_BYTE *)(v4 + 566) )
          {
            Matrix3x4::Identity(v30);
            v5 = Math::CalcAngle(-*((double *)this + 30), *((double *)this + 29));
            LOWORD(v22) = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427);
            v20 = (double)(int)(((((v22 >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621;
            Matrix2D::Rotate(v30, v20);
            v23 = Math::Sqrt(*((double *)this + 29) * *((double *)this + 29) + *((double *)this + 30)
                                                                             * *((double *)this + 30));
            v6 = Math::CalcAngle(*((double *)this + 31), v23);
            LOWORD(v23) = Math::RoundToInt((v6 - 1.570796326794897) * -10430.06004058427);
            v21 = -((double)(int)((((unsigned int)((LODWORD(v23) >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621);
            Matrix3D::RotateZ(v30, v21);
            inited = (float *)AudioConfig::InitDefault(v31);
            v8 = MultiplyMatrix3x4(v32, inited, v30);
            ((void (__stdcall *)(int, float *, int *, int *, _DWORD, int, int))BulletClass::RenderVoxelBullet)(
              this->BulletClass_field_0xAC + 176,
              v8,
              a2,
              a3,
              0,
              2048,
              1000);
          }
          else
          {
            v24 = this->vt27();
            if ( v24 )
            {
              v29 = this->vt122();
              v9 = this->vt114();
              v25 = this->q09C;
              v26 = this->q0A0;
              v27 = this->q0A4;
              GroundHeight = Cell::GetGroundHeight(&v25);
              if ( !this->q08C )
              {
                v10 = this->q0A0;
                v11 = this->q0A4;
                v25 = this->q09C;
                v26 = v10;
                v27 = v11;
                if ( (*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &v25) + 80) & 0x100) != 0 && v9 >= DataGlobal_89DE64 )
                {
                  v9 -= DataGlobal_89DE64;
                  GroundHeight += DataGlobal_89DE64;
                }
              }
              if ( v9 > 0 && *(_BYTE *)(this->BulletClass_field_0xAC + 666) )
              {
                v12 = ZCoordToScreenY(v9);
                v13 = *a2;
                v26 = v12 + a2[1];
                v25 = v13;
                v14 = ZCoordToScreenY(GroundHeight);
                DrawToSurfaceSHP(
                  g_DSurface_Hidden_2,
                  g_FileSystem_THEATER_PAL,
                  v24,
                  v29,
                  &v25,
                  a3,
                  9729,
                  0,
                  -10 - v14,
                  0,
                  1000,
                  0,
                  0,
                  0,
                  0,
                  0);
              }
              v15 = this->BulletClass_field_0xAC;
              v16 = g_FileSystem_THEATER_PAL;
              if ( *(_BYTE *)(v15 + 680) )
              {
                v16 = DataGlobal_87F6C0;
              }
              else if ( *(_BYTE *)(v15 + 681) )
              {
                v17 = this->InheritedColor;
                if ( v17 == -1 )
                  v16 = *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + *((_DWORD *)HouseClass_Player + 22549)) + 780);
                else
                  v16 = *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + v17) + 780);
              }
              v18 = this->vt116();
              v19 = ZCoordToScreenY(v18);
              DrawToSurfaceSHP(g_DSurface_Hidden_2, v16, v24, v29, a2, a3, 11776, 0, -30 - v19, 0, 1000, 0, 0, 0, 0, 0);
            }
          }
        }
      }
}
} }

// ==== BACKFILL 0x00468430  BulletClass::LoseTarget  cls=BulletClass  sig=csp  renamed_refs=6  residual=- ====
namespace gamemd { int BulletClass::LoseTarget() {
{
    int *v2;
    int v4;
    int v5;
    char v6[12];
    v2 = (int *)(*(int (__thiscall **)(int, char *))(*(void**)this->BulletClass_field_0x10C + 72))(this->BulletClass_field_0x10C, v6);
    LOWORD(v5) = *v2 / 256;
    HIWORD(v5) = v2[1] / 256;
    v4 = v5;
    LOWORD(v2) = IKnowWhatImDoing;
    if ( IKnowWhatImDoing || (LOWORD(v2) = (*(int (__thiscall **)(int))(*(void**)this->BulletClass_field_0x10C + 84))(this->BulletClass_field_0x10C), (char)v2) || (LOWORD(v2) = v4, v4 == DataGlobal_89DDF0) )
  {
    this->BulletClass_field_0x10C = 0;
  }
    else
  {
    v2 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v4);
    this->BulletClass_field_0x10C = v2;
  }
    return (short)v2;
}
} }

// ==== BACKFILL 0x004684E0  BulletClass::ProcessImpact  cls=BulletClass  sig=csp  renamed_refs=7  residual=- ====
namespace gamemd { int BulletClass::ProcessImpact(void* a1, void* a2) {
{
      char *v3;
      char *v5;
      char *v6;
      _DWORD *v7;
      char **i;
      __int16 v10;
      char v11[12];

      v3 = a2;
      Object::Unlink((#374 *)this);
      v5 = *(char **)(this + 176);
      if ( v5 == v3 )
        this->BulletClass_field_0xB0 = 0;
      v6 = *(char **)(this + 268);
      if ( v6 == v3 )
      {
        v7 = (_DWORD *)(*(int (__thiscall **)(char *, char *))(*(_DWORD *)v6 + 72))(v6, v11);
        a2 = *(char **)CellStruct::Set(&v10, *v7 / 256, v7[1] / 256);
        LOWORD(v5) = g_IKnowWhatImDoing;
        if ( g_IKnowWhatImDoing
          || (LOWORD(v5) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 268) + 84))(this->BulletClass_field_0x10C),
              (_BYTE)v5)
          || (LOWORD(v5) = (_WORD)a2, a2 == (char *)DataGlobal_89DDF0) )
        {
          this->BulletClass_field_0x10C = 0;
        }
        else
        {
          v5 = (char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a2);
          this->BulletClass_field_0x10C = v5;
        }
      }
      if ( *(char **)(this + 172) == v3 )
        this->BulletClass_field_0xAC = 0;
      if ( *(char **)(this + 304) == v3 )
        this->BulletClass_field_0x130 = 0;
      if ( *(char **)(this + 340) == v3 )
        this->BulletClass_field_0x154 = 0;
      if ( (_BYTE)a3 )
      {
        v5 = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v3 + 44))(v3);
        if ( v5 == (char *)8 )
        {
          a3 = v3;
          if ( *(_BYTE *)(*((_DWORD *)v3 + 43) + 748) )
          {
            v5 = 0;
            if ( DataGlobal_89DE28 > 0 )
            {
              for ( i = (char **)DataGlobal_89DE1C; v3 != *i; ++i )
              {
                if ( (int)++v5 >= DataGlobal_89DE28 )
                  return (__int16)v5;
              }
              v5 = (char *)(*(int (__thiscall **)(int *, char **))(DataGlobal_89DE18 + 16))(&DataGlobal_89DE18, &a3);
              if ( v5 != (char *)-1 && (int)v5 < DataGlobal_89DE28 && (int)v5 < --DataGlobal_89DE28 )
              {
                do
                {
                  ++v5;
                  *((_DWORD *)DataGlobal_89DE1C + (_DWORD)v5 - 1) = *((_DWORD *)DataGlobal_89DE1C + (_DWORD)v5);
                }
                while ( (int)v5 < DataGlobal_89DE28 );
              }
            }
          }
        }
      }
      return (__int16)v5;
}
} }

// ==== BACKFILL 0x00468B90  BulletClass::UpdateFlightPath  cls=BulletClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int BulletClass::UpdateFlightPath() {
{
    int v1;
    v1 = -(*(char *)(this->BulletClass_field_0xAC + 759) != 0);
    LOBYTE(v1) = v1 & 0xFE;
    return v1 + 3;
}
} }

// ==== BACKFILL 0x0046AE70  BulletClass::SaveLoad_Prefix  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int BulletClass::SaveLoad_Prefix(void* a1, int a2) {
{
      int result;
      ObjectClass *v4;
      int v5;

      result = BuildingClass::SaveLoad_Register((#374 *)this);
      v4 = (ObjectClass *)result;
      if ( result >= 0 )
      {
        if ( a1 )
        {
          ObjectClass::Init(a1, (AbstractClass *)&aP2);
          Timer::Start(a1 + 46, 0);
          Timer::Start(a1 + 49, 0);
          *a1 = (int)&BulletClass::`vftable';
          a1[1] = (int)&BulletClass::`vftable';
          a1[2] = (int)&BulletClass::`vftable';
          a1[3] = (int)&vt_BulletClass;
        }
        if ( a1[85]
          && (*(int *)&stru_B05488.__pad_579C[18852] < *(int *)&stru_B05488.__pad_579C[18844]
           || (stru_B05488.__pad_579C[18849] || !*(_DWORD *)&stru_B05488.__pad_579C[18844])
           && *(int *)&stru_B05488.__pad_579C[18856] > 0
           && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[18836] + 8))(
                &stru_B05488.__pad_579C[18836],
                *(_DWORD *)&stru_B05488.__pad_579C[18844] + *(_DWORD *)&stru_B05488.__pad_579C[18856],
                0)) )
        {
          v5 = (*(_DWORD *)&stru_B05488.__pad_579C[18852])++;
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18840] + 4 * v5) = a1;
        }
        ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a1 + 43));
        ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a1 + 44));
        ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a1 + 74));
        ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a1 + 67));
        ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a1 + 76));
        ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)(a1 + 85));
        return (int)v4->__pad_0;
      }
      return result;
}
} }

// ==== BACKFILL 0x0046AFB0  BulletClass::SaveLoad_Prefix_0  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}

// ==== BACKFILL 0x0046AFD0  BulletClass::CheckTargetValidity  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
LONG BulletClass::CheckTargetValidity(int a1)
{
{
    ++g_BulletClassPool;
    return InterlockedIncrement((volatile LONG *)(a1 + 28));
}
}

// ==== BACKFILL 0x0046AFF0  BulletClass::ValidateTarget  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
LONG BulletClass::ValidateTarget(volatile LONG * a1)
{
{
    LONG v1;
    --g_BulletClassPool;
    v1 = InterlockedDecrement(a1 + 7);
    if ( !v1 && a1 )
    (*(void (__thiscall **)(volatile LONG *, int))(*a1 + 32))(a1, 1);
    return v1;
}
}

// ==== BACKFILL 0x0046B050  CreateUIObjectCOM  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LPVOID CreateUIObjectCOM(IUnknown * aP0, AbstractClass * aP1, AbstractClass * aP2, AbstractClass * aP3, AbstractClass * aP4, int a6, AbstractClass * aP7)
{
{
    void *v10;
    LPVOID ppv;
    ppv = 0;
    if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv) < 0 )
    return 0;
    v10 = ppv;
    Particle::Init( (int)ppv, (AbstractClass *)aP0, (TechnoClass *)aP1, (IUnknown *)aP2, (TechnoClass *)aP3, (InfantryClass *)aP4, a6, aP7);
    return v10;
}
}

// ==== BACKFILL 0x0046B0C0  BulletClass::RenderVoxelBullet  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int BulletClass::RenderVoxelBullet(int a1, void* a2, void* a3, void* a4, int a5, int a6, int a7) {
{
      _DWORD *v8;
      _DWORD *v9;
      unsigned int i;
      float *v11;
      float *v12;
      int v13;
      int v14;
      unsigned int v15;
      int v16;
      char *v17;
      int *v18;
      int *SHPFrame;
      int v21;
      int v22[2];
      _DWORD *v23;
      _DWORD v24[6];
      float v25[12];
      float v26[12];
      float v27[12];
      float v28[12];

      v8 = *(_DWORD **)a2;
      v9 = *(_DWORD **)(a2 + 4);
      v22[0] = (int)this;
      v23 = v8;
      globalHelper_053C80(v8, 0, 0, a3, (float *)&DataGlobal_887470);
      Viewport::Clear();
      for ( i = 0; i < v8[1]; ++i )
      {
        if ( v9 )
        {
          qmemcpy(v25, (const void *)(v9[3] + 48 * (i + v9[1] * (a6 % v9[2]))), sizeof(v25));
          qmemcpy(v26, MultiplyMatrix3x4(v27, a3, v25), sizeof(v26));
          v8 = v23;
        }
        v11 = MultiplyMatrix3x4(v28, DataGlobal_887430, v26);
        TransformVoxelVertex(v8, i, 0, v11);
      }
      v12 = Voxel::RenderFrame(v25);
      v13 = *(_DWORD *)(v22[0] + 172);
      v14 = 0;
      qmemcpy(v24, v12, sizeof(v24));
      v15 = a7 & 0xFFFFFFEF;
      if ( *(_BYTE *)(v13 + 759) )
      {
        v14 = DataGlobal_81AF00;
        v15 = a7 & 0xFFFFDFEF | 0x2000;
      }
      v16 = v24[1] + a4[1];
      v22[0] = v24[0] + *a4;
      v22[1] = v16;
      v17 = (char *)BuildingTypeClass_AnimTable + 4 * *(_DWORD *)(v13 + 724);
      v21 = *(_BYTE *)(v13 + 759) != 0 ? 0 : 2;
      SHPFrame = (int *)BuildingClass::GetSHPFrame(*(_DWORD **)(*(_DWORD *)v17 + 780), v15);
      v18 = Miles::DriverGet();
      return BlitterDrawSHP(
               (int *)g_DSurface_Hidden_2,
               *(_DWORD *)(*(_DWORD *)v17 + 780),
               v18,
               &v24[2],
               v22,
               a5,
               0,
               SHPFrame,
               v14,
               v21,
               a8,
               0,
               0);
}
} }

// ==== BACKFILL 0x0046B280  BulletClass::InitScalable  cls=BulletClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { int BulletClass::InitScalable() {
{
    int v2;
    int v3;
    if ( DataGlobal_89DE28 < DataGlobal_89DE20 || (DataGlobal_89DE25 || !DataGlobal_89DE20) && DataGlobal_89DE2C > 0 && (*(unsigned char (__thiscall **)(int *, int, int))(DataGlobal_89DE18 + 8))(&DataGlobal_89DE18, DataGlobal_89DE20 + DataGlobal_89DE2C, 0) )
  {
    v2 = DataGlobal_89DE28++;
    *((int *)(DataGlobal_89DE1C) + v2) = this;
  }
    v3 = DataGlobal_89DE28 - 5;
    if ( DataGlobal_89DE28 - 5 < 0 )
    v3 = 0;
    return BulletTypeClass::SetScaledSpawnDelay(this->BulletClass_field_0xAC, v3 / 3 + (this->BulletClass_field_0xAC)[185]);
}
} }

// ==== BACKFILL 0x0046B310  SuperWeapon::CreateNukePayload  cls=SuperWeapon  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int SuperWeapon::CreateNukePayload() {
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

      v2 = this->q10C;
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
      v8 = this->q0B0;
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

// ==== BACKFILL 0x0046B540  BulletClass::MissionStubReturnZero  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::MissionStubReturnZero()
{
return 352;
}

// ==== BACKFILL 0x0046B550  BulletClass::MissionStubReturnZero2  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::MissionStubReturnZero2()
{
return 8;
}

// ==== BACKFILL 0x0046B560  BulletClass::PowerDrainProcess  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::PowerDrainProcess(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448649;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// ==== BACKFILL 0x0046B5A0  BulletClass::CheckEndOfSequence  cls=BulletClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int BulletClass::CheckEndOfSequence(int a1) {
{
      this->BulletClass_field_0x10C = a2;
      return a2;
}
} }

// ==== BACKFILL 0x0046B5B0  BulletClass::CheckMissionAbort  cls=BulletClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int BulletClass::CheckMissionAbort() {
{
    return this->BulletClass_field_0xAC;
}
} }

// ==== BACKFILL 0x0046B5C0  BulletClass::CheckActionStatus  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* BulletClass::CheckActionStatus(int a2) {
{
    BulletClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BulletClass *)this;
}
} }

// ==== BACKFILL 0x0046B5E0  VectorClass_ptr_BulletClass::Destroy  cls=VectorClass_ptr_BulletClass  sig=csp  renamed_refs=0  residual=- ====
void VectorClass_ptr_BulletClass::Destroy()
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

// ==== BACKFILL 0x0046B610  VectorClass_ptr_BulletClass::GetItemIndex  cls=VectorClass_ptr_BulletClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int VectorClass_ptr_BulletClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x0046B7E0  VectorClass_ptr_BulletClass::SetCapacity  cls=VectorClass_ptr_BulletClass  sig=csp  renamed_refs=0  residual=- ====
char VectorClass_ptr_BulletClass::SetCapacity(int a2, unsigned int * a3)
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

// ==== BACKFILL 0x0046B890  VectorClass_ptr_BulletClass::FindItemIndex  cls=VectorClass_ptr_BulletClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_ptr_BulletClass::FindItemIndex(unsigned int * a2)
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

// ==== BACKFILL 0x0046B960  BulletClass::AddVector3  cls=BulletClass  sig=csp  renamed_refs=4  residual=- ====
namespace gamemd { void* BulletClass::AddVector3(void* a1) {
{
      *this = *a2 + *this;
      this->vtable2 = a2[1] + this->vtable2;
      this->vtable3 = a2[2] + this->vtable3;
      return this;
}
} }

// ==== BACKFILL 0x0046B990  VectorClass_ptr_BulletClass::GetItem  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG VectorClass_ptr_BulletClass::GetItem(int a1)
{
{
    return BulletClass::CheckTargetValidity(a1 - 4);
}
}

// ==== BACKFILL 0x0046B9A0  VectorClass_ptr_BulletClass::GetItem_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG VectorClass_ptr_BulletClass::GetItem_0(int a1)
{
{
    return BulletClass::ValidateTarget((volatile LONG*)(a1 - 4));
}
}

// ==== BACKFILL 0x0046C4F0  BulletTypeClass::GetROF  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * BulletTypeClass::GetROF(unsigned int * a1, int * a2)
{
{
    int GroundHeight;
    int v3;
    int v5;
    int v6;
    int v7;
    v5 = *a2;
    v6 = *((int*)(a2) + 1);
    v7 = *((int*)(a2) + 2);
    GroundHeight = Cell::GetGroundHeight(&v5);
    v3 = v7;
    if ( v7 <= GroundHeight )
    v3 = Cell::GetGroundHeight(&v5) + 1;
    *a1 = v5;
    *((int*)(a1) + 1) = v6;
    *((int*)(a1) + 2) = v3;
    return a1;
}
}

// ==== BACKFILL 0x0046C6A0  BulletTypeClass::SaveLoad_Prefix  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BulletTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
{
    int result;
    result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_BulletTypeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_BulletTypeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_BulletTypeClass;
    *(int *)&aP0->__pad_0[12] = &vt_BulletTypeClass;
    }
    VoxelAnimType::LoadAnim(aP0->__pad_0);
    ObjectTypeClass::Load2DArt(aP0->__pad_0);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].UINameLabel[7]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].referenceCount);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].NeedsSaveOrLink);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x0046C730  BulletTypeClass::SaveLoad_Prefix_0  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BulletTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x0046C750  BulletTypeClass::GetClassIdentifier  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BulletTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1525862007;
  a2[1] = 298976820;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x0046C820  BulletTypeClass::GetWarhead  cls=BulletTypeClass  sig=csp  renamed_refs=2  residual=- ====
int BulletTypeClass::GetWarhead(int a2, int a3)
{
    int result;
    result = a2;
    if ( a2 == (int)this->ROT_e )
        this->ROT_e = 0;
    return result;
}

// ==== BACKFILL 0x0046C850  BulletTypeClass::GetTypeIdentifier  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BulletTypeClass::GetTypeIdentifier()
{
return 9;
}

// ==== BACKFILL 0x0046C860  BulletTypeClass::GetObjectSize  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BulletTypeClass::GetObjectSize()
{
return 760;
}

// ==== BACKFILL 0x0046C870  BulletTypeClass::Stub  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
char BulletTypeClass::Stub(int a1, int a2)
{
return 0;
}

// ==== BACKFILL 0x0046C880  BulletTypeClass::StubReturnFalse  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BulletTypeClass::StubReturnFalse(int a1)
{
return 0;
}

// ==== BACKFILL 0x0046C890  BulletTypeClass::ddtor  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
BulletTypeClass * BulletTypeClass::ddtor(char a2)
{
    BulletTypeClass* v7 = this;
    AbstractClass::AnnounceExpiredPointer(this, 1);
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
    BulletTypeClass_Array;
    int v3 = BulletTypeClass_Array.FindItemIndex(&v7);
    if ( v3 != -1 && v3 < g_BulletTypeInitState && v3 < --g_BulletTypeInitState )
    {
        do
        {
            ++v3;
            *(g_BulletTypeTable + v3 - 1) = *(g_BulletTypeTable + v3);
        }
        while ( v3 < g_BulletTypeInitState );
    }
    ObjectTypeClass::Destruct(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}

// ==== BACKFILL 0x0046CCD0  CampaignClass::GetMapData  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CampaignClass::GetMapData(void* a1) {
{
      int Int_Overwrite;
      CCINIClass *v4;
      INIClass Destination[16];

      INIClass::ResetSection(aP1);
      if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) )
        return 0;
      Int_Overwrite = INIClass::ReadInt_Overwrite(
                        (int)aP1,
                        (unsigned __int8 *)(this + 36),
                        (CCINIClass *)&stru_81B1A4.unknown30,
                        *(INIClass **)(this + 152));
      v4 = *(CCINIClass **)(this + 668);
      this->q098 = Int_Overwrite;
      this->q29C = INIClass::GetBool(
                                  aP1,
                                  (INIClass *)(this + 36),
                                  (unsigned __int8 *)&stru_81B1A4.__pad_20[4],
                                  (int)v4);
      INIClass::GetString(
        aP1,
        (INIClass *)(this + 36),
        (unsigned __int8 *)&stru_81B1A4.sectionHead[2],
        (INIClass *)(this + 156),
        (INIClass *)(this + 156),
        512);
      _strupr((char *)(this + 156));
      if ( INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), (CCINIClass *)&stru_81B1A4.headNode[2], 0) )
      {
        INIClass::GetString(aP1, (INIClass *)(this + 36), (unsigned __int8 *)&stru_81B1A4, 0, Destination, 1024);
        strcat(Destination[0].__pad_0, (const char *)&stru_81B138.unknown54);
        BulkCharToWide((_WORD *)(this + 672), (unsigned __int8 *)Destination, -1);
      }
      else
      {
        INIClass::GetStringEx((int)aP1, (INIClass *)(this + 36), &stru_81B1A4, (CCINIClass *)(this + 672), 0x80u);
      }
      return 1;
}
} }

// ==== BACKFILL 0x0046CF80  CampaignClass::ddtor  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
int CampaignClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -2439096;
  a2[1] = 298980631;
  a2[2] = 1610642817;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x0046CFC0  CampaignClass::Stat  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CampaignClass::Stat(void* a1) {
{
      AbstractTypeClass::ProcessPower((char *)this, a2);
      Power::TimerProcess(this->q098);
      Checksum::AddString((unsigned int *)a2, (unsigned __int8 *)(this + 156));
      return Power::TimerProcess(this->q29C);
}
} }

// ==== BACKFILL 0x0046D000  CampaignClass::Write  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
int CampaignClass::Write(AbstractTypeClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_CampaignClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_CampaignClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_CampaignClass;
    *(int *)&aP0->__pad_0[12] = &vt_CampaignClass;
    }
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x0046D050  CampaignClass::Seek  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
int CampaignClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x0046D070  CampaignClass::StubReturn928  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
int CampaignClass::StubReturn928()
{
return 928;
}

// ==== BACKFILL 0x0046D080  CampaignClass::StubReturn10  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
int CampaignClass::StubReturn10()
{
return 10;
}

// ==== BACKFILL 0x0046D090  CampaignClass::DTOR  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
CampaignClass * CampaignClass::DTOR(char a2)
{
{
    int v3;
    void **v5;
    *(void**)this = vt_CampaignClass;
    *(this + 1) = (unsigned int)vt_CampaignClass;
    *(this + 2) = (unsigned int)vt_CampaignClass;
    *(this + 3) = &vt_CampaignClass;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v5 = this;
    v3 = (*(int (__thiscall **)(int *, void ***))(DataGlobal_A83CF8 + 16))(&DataGlobal_A83CF8, &v5);
    if ( v3 != -1 && v3 < g_UnitTypeInitState && v3 < --g_UnitTypeInitState )
  {
    do
    {
    ++v3;
    *((int *)(g_CampaignTypeArray) + v3 - 1) = *((int *)(g_CampaignTypeArray) + v3);
    }
    while ( v3 < g_UnitTypeInitState );
  }
    AbstractTypeClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (CampaignClass *)this;
}
}

// ==== BACKFILL 0x0046D330  MPCooperative::initGame  cls=MPCooperative  sig=csp  renamed_refs=1  residual=- ====
unsigned int * MPCooperative::initGame()
{
{
    *(void**)this = &vt_CampaignScoreClass;
    this->MPCooperative_field_0x4 = 0;
    DataGlobal_89E050 = 0;
    DataGlobal_81B1E8 = -1;
    return this;
}
}

// ==== BACKFILL 0x0046D350  sub_46D350  cls=CampaignScore  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_46D350::sub_46D350()
{
    *(void**)this = &vt_CampaignScoreClass;

}

// ==== BACKFILL 0x0046D490  sub_46D490  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_46D490::sub_46D490()
{
{
    return *((char *)&g_GameModeOptionState + (int)this);
}
}

// ==== BACKFILL 0x0046D810  sub_46D810  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_46D810()
{
{
    int result;
    int v1;
    char v2[43];
    int Option;
    int PlayerSide;
    int PlayerColor;
    v1 = 51;
    strcpy(v2, g_GameSetupBuffer);
    Option = SessionClass::GetOption(*(int *)Game_PlayerInfoArray);
    PlayerSide = SessionClass::GetPlayerSide(*(int *)Game_PlayerInfoArray);
    PlayerColor = SessionClass::GetPlayerColor(*(int *)Game_PlayerInfoArray);
    result = g_NetworkPlayerName;
    if ( g_NetworkPlayerName )
  {
    Network::SendToPlayer((int)g_NetworkManager, (int)&v1, 455, 1, (wchar_t *)g_NetworkPlayerName);
    return Network::ReceiveLoop(g_NetworkManager);
  }
    return result;
}
}
