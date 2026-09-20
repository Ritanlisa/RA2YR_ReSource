// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00750010  VeterancyStruct::IsElite  cls=Audio  sig=csp  renamed_refs=0 ====
BOOL VeterancyStruct::IsElite()
{
{
    return *(void**)this >= 2.0;
}
}

// ==== BACKFILL 0x00750080  Crate::processCratePickup  cls=Crate  sig=csp  renamed_refs=0 ====
namespace gamemd { void Crate::processCratePickup(int a1) {
    this->crate_timer.StartTime = 0;

/* ASM:
mov     dword ptr [ecx], 0
retn    4
*/
} }

// ==== BACKFILL 0x00750090  Power::ChangedHouse  cls=Power  sig=csp  renamed_refs=0 ====
char Power::ChangedHouse(char a2)
{
{
    char result;
    result = a2;
    if ( a2 )
    *(void**)this = 1065353216;
    else
    *(void**)this = 0;
    return result;
}
}

// ==== BACKFILL 0x007500E0  FootClass::SetField  cls=FootClass  sig=csp  renamed_refs=0 ====
void FootClass::SetField() {}

// ==== BACKFILL 0x007509E0  StartAudioControllerAt  cls=unknown  sig=csp  renamed_refs=0 ====
int StartAudioControllerAt(AudioController * aP0, int a2, int a1)
{
{
    int *v5;
    int *v6;
    AudioMixer *v7;
    int *eax7;
    double v9;
    CCINIClass *v8;
    if ( !DataGlobal_830620.__pad_579C[67312] )
    return 0;
    v5 = 0;
    v6 = 0;
    if ( (int)aP0 >= 0 && (int)aP0 < *(int *)&DataGlobal_B1D188.__pad_1D8[40] )
    v6 = **(int ***)(*(int *)&DataGlobal_B1D188.__pad_1D8[28] + 4 * (int)aP0);
    v7 = (AudioMixer *)a1;
    if ( a1 )
  {
    eax7 = AudioSource::Get((int **)a1);
    v5 = eax7;
    if ( eax7 )
    {
    if ( (int *)sub_406310(eax7) != v6 )
      {
    VocClass::Release((int)v5);
    v5 = 0;
      }
    }
  }
    if ( v6 )
  {
    v9 = ComputeAudioPosition((AudioMixer *)a2, &a1, (int)v6);
    if ( v9 <= 0.0 )
    {
    if ( v5 )
      {
    VocClass::Release((int)v5);
    v5 = 0;
      }
    }
    else
    {
    v8 = (CCINIClass *)Math::RoundToInt(v9 * 16384.0);
    if ( (unsigned int)v8 >= 0x4000 )
    v8 = (CCINIClass *)0x4000;
    if ( v5 || (v5 = AudioPool::ProcessQueue(v6)) != 0 )
      {
    AudioMixer::PlayBuffer(v5, (unsigned int)v8);
    AudioMixer::RequestOrEndBuffer((int)v5, a1);
      }
    }
  }
    if ( v7 )
    SetAudioSource(v7, v5, (int)v6);
    return (int)v5;
}
}

// ==== BACKFILL 0x00750E20  PlayAudioAt2  cls=unknown  sig=csp  renamed_refs=0 ====
int PlayAudioAt2(IUnknown * aP0, unsigned int * a1, int a3)
{
{
    int result;
    int *v6;
    int started;
    int v8;
    if ( (int)aP0 < 0 )
    return 0;
    result = (int)LinkedList::Next((int **)DataGlobal_B1D188.field_21C);
    v6 = (int *)result;
    if ( result )
  {
    AudioController::Init((int *)(result + 12));
    DListNode::InitEmpty(v6);
    v6[12] = 0;
    v6[8] = *a1;
    v6[9] = *((int*)(a1) + 1);
    v6[10] = *((int*)(a1) + 2);
    v6[11] = a3;
    started = StartAudioControllerAt((AudioController *)aP0, (int)(v6 + 8), (int)(v6 + 3));
    InsertAfterDListNode((int)&DataGlobal_B1D188.__pad_188[16], v6);
    v8 = ++*(int *)DataGlobal_B1D188.__pad_220;
    if ( *(int *)DataGlobal_B1D188.__pad_220 > *(int *)&DataGlobal_B1D188.__pad_220[4] )
    *(int *)&DataGlobal_B1D188.__pad_220[4] = v8;
    return started;
  }
    return result;
}
}

// ==== BACKFILL 0x00750F40  globalHelper_050F40  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_750F40(unsigned int * a1, int a2)
{
{
    int result;
    int *i;
    result = AudioQueue::GetNext(DataGlobal_B1D320);
    for ( i = (int *)result; result; i = (int *)result )
  {
    if ( (a2 & i[11]) != 0 && i[8] == *a1 && i[9] == *((int*)(a1) + 1) && i[10] == *((int*)(a1) + 2) )
    AudioFile::Stop(i + 3);
    result = AudioQueue::GetNextAlt(i);
  }
    return result;
}
}

// ==== BACKFILL 0x00751EA0  sub_751EA0  cls=unknown  sig=csp  renamed_refs=0 ====
HANDLE sub_751EA0(const CHAR * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4)
{
{
    const char *v4;
    HANDLE result;
    void *v7;
    HANDLE v9;
    CHAR FileName[260];
    struct _WIN32_FIND_DATAA FindFileData;
    v4 = a1;
    result = FindFirstFileA(a1, &FindFileData);
    v7 = result;
    v9 = result;
    if ( result != (HANDLE)-1 )
  {
    do
    {
    if ( (FindFileData.dwFileAttributes & 0x10) != 0 )
      {
    if ( _strcmpi(FindFileData.cFileName, DataGlobal_826598) )
        {
    if ( _strcmpi(FindFileData.cFileName, DataGlobal_846610) )
          {
    ++*a2;
    strcpy(FileName, v4);
    FileName[strlen(FileName) - 1] = 0;
    strcat(FileName, FindFileData.cFileName);
    strcat(FileName, DataGlobal_84660C);
    sub_751EA0(a3, a4);
    v7 = v9;
    v4 = a1;
          }
        }
      }
    else
      {
    ++*a3;
    *a4 += FindFileData.nFileSizeLow;
      }
    }
    while ( FindNextFileA(v7, &FindFileData) );
    return (HANDLE)FindClose(v7);
  }
    return result;
}
}

// ==== BACKFILL 0x007529E0  Audio::IsPlaying  cls=unknown  sig=csp  renamed_refs=0 ====
int Audio::IsPlaying()
{
{
    char *v0;
    UpdateThemes();
    if ( !g_InfantryDrawState )
    return 0;
    if ( !Audio::IsSoundPlaying(g_InfantryDrawState) && (_UNKNOWN *)DataGlobal_B1D3CC == &DataGlobal_B1D3C8 && (_UNKNOWN *)DataGlobal_B1D3F4 == &DataGlobal_B1D3F0 && !DataGlobal_B1D4B8 )
  {
    v0 = DataGlobal_B1D450;
    while ( *((char **)(v0) + 1) == v0 )
    {
    v0 += 12;
    if ( (int)v0 >= (int)&DataGlobal_B1D480 )
    return 0;
    }
  }
    return 1;
}
}

// ==== BACKFILL 0x00753250  VocClass::FindByName  cls=VocClass  sig=csp  renamed_refs=0 ====
int VocClass::FindByName()
{
{
    int v3;
    if ( !this )
    return -1;
    v3 = 0;
    if ( *(int *)&DataGlobal_B1D188.__pad_2B8[112] <= 0 )
    return -1;
    while ( _strcmpi(this, *(const void **)(*(int *)&DataGlobal_B1D188.__pad_2B8[100] + 4 * v3)) )
  {
    if ( ++v3 >= *(int *)&DataGlobal_B1D188.__pad_2B8[112] )
    return -1;
  }
    return v3;
}
}

// ==== BACKFILL 0x007532BE  ?do_always_noconv_codecvt_base_std__MBE_NXZ_21  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char _do_always_noconv_codecvt_base_std__MBE_NXZ_21()
{
return 1;
}

// ==== BACKFILL 0x007533A0  ?do_always_noconv_codecvt_base_std__MBE_NXZ_22  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char _do_always_noconv_codecvt_base_std__MBE_NXZ_22()
{
return 1;
}

// ==== BACKFILL 0x007533B0  SaveGame::WriteMagicHeader  cls=SaveGame  sig=csp  renamed_refs=0 ====
int SaveGame::WriteMagicHeader()
{
{
    int v2;
    int result;
    int v4;
    int v5;
    v2 = *(void**)this;
    v5 = 1450145875;
    result = (*(int (__stdcall **)(int *, int *, int, int))(v2 + 16))(this, &v5, 4, 0);
    if ( result >= 0 )
  {
    v4 = *(void**)this;
    v5 = 1450145861;
    return (*(int (__stdcall **)(int *, int *, int, int))(v4 + 16))(this, &v5, 4, 0);
  }
    return result;
}
}

// ==== BACKFILL 0x007534E0  VoxClass::SetEVAIndex  cls=VoxClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int VoxClass::SetEVAIndex() {
{
    int result;
    if ( this == (void *)-1 )
  {
    DataGlobal_B1D4C8 = 0;
    return 0;
  }
    else
  {
    DataGlobal_B1D4C8 = (int)this;
  }
    return result;
}
} }

// ==== BACKFILL 0x00753B70  VoxelPaletteClass::LoadFromFile  cls=VoxelPaletteClass  sig=csp  renamed_refs=0 ====
int VoxelPaletteClass::LoadFromFile()
{
{
    int v2;
    int v4[8];
    VoxelPalette::Init(v4, (int)&DataGlobal_B2FB78, (int)g_VoxelColorPalette);
    v2 = VoxelPaletteClass::ConvertFromFile(v4, (int)this);
    DataGlobal_B2FB74 = v4[0];
    DataGlobal_B4317C = v4[1];
    DataGlobal_B2FB58 = v4[2];
    DataGlobal_B43178 = v4[3];
    VoxelPalette::Reset((int)v4);
    return v2;
}
}

// ==== BACKFILL 0x00753C80  globalHelper_053C80  cls=unknown  sig=csp  renamed_refs=0 ====
char globalHelper_053C80(unsigned int * a1, SomeVoxelCache * edx0, SomeVoxelCache * aP2, float * a4, float * a2)
{
{
    float *v7;
    int Info;
    float v10[3];
    float v11[3];
    float v12[12];
    float v13[12];
    qmemcpy(v12, InvertMatrix3x3Signs(v13, a4), sizeof(v12));
    v7 = Matrix3x3::TransformPoint(v12, (IUnknown *)v11, a2);
    v10[0] = *v7;
    v10[1] = v7[1];
    v10[2] = v7[2];
    Info = VoxelSection::GetInfo(a1, edx0, aP2);
    return GlobalHelper_053C80_Helper(v10, *(unsigned char *)(Info + 163));
}
}

// ==== BACKFILL 0x00753D00  Audio_Render  cls=unknown  sig=csp  renamed_refs=0 ====
char Audio_Render(unsigned int * a0, SomeVoxelCache * edx0, ObjectClass * aP2, float * a3, float * a4, float * a5, float a7)
{
{
    float *v9;
    float *v10;
    int Info;
    float v13[3];
    float v14[3];
    float v15[3];
    float v16[3];
    float v17[12];
    float v18[12];
    float v19[12];
    qmemcpy(v18, InvertMatrix3x3Signs(v19, a3), sizeof(v18));
    qmemcpy(v17, InvertMatrix3x3Signs(v19, a4), sizeof(v17));
    v9 = Matrix3x3::TransformPoint(v18, (IUnknown *)v13, a5);
    v15[0] = *v9;
    v15[1] = v9[1];
    v15[2] = v9[2];
    v13[0] = 0.0;
    v13[1] = 0.0;
    v13[2] = 1.0;
    v10 = Matrix3x3::TransformPoint(v17, (IUnknown *)v16, v13);
    v14[0] = *v10;
    v14[1] = v10[1];
    v14[2] = v10[2];
    Info = VoxelSection::GetInfo(a0, edx0, (SomeVoxelCache *)aP2);
    return VoxelAnim::ComputeTransform(v15, v14, a7, *(unsigned char *)(Info + 163));
}
}

// ==== BACKFILL 0x00753F90  globalHelper_053F90  cls=unknown  sig=csp  renamed_refs=0 ====
char * globalHelper_053F90(unsigned int * a0, ObjectClass * aP1, SomeVoxelCache * aP2, float * a3, float * a4, float * a5, int a7, int a8, int a9)
{
{
    int Info;
    int v12;
    int v13;
    Tactical *v14;
    Tactical *v15;
    float *v16;
    float *v17;
    double v18;
    float v20;
    float v21;
    float v22;
    float v23[3];
    float v24[3];
    Info = VoxelSection::GetInfo(a0, (SomeVoxelCache *)aP1, aP2);
    v12 = 4;
    v13 = 72 * *(int *)&DataGlobal_B1D188.__pad_579C[53836] + 11796344;
    *(int *)(v13 + 60) = a7;
    *(int *)(v13 + 64) = a8;
    *(int *)v13 = a0;
    *(int *)(v13 + 4) = aP1;
    *(int *)(v13 + 8) = aP2;
    *(int *)(v13 + 68) = a9;
    v14 = (Tactical *)(v13 + 12);
    v15 = (Tactical *)(Info + 64);
    do
  {
    v16 = TransformMatrix3x4Point((AbstractClass *)v23, (IUnknown *)a4, (IUnknown *)v15);
    *(float *)v14->__pad_0 = *v16;
    *(float *)&v14->field_2[2] = v16[1];
    v14->field_8 = (void *)v16[2];
    v14->field_8 = 0;
    v17 = TransformMatrix3x4Point((AbstractClass *)v24, (IUnknown *)a3, (IUnknown *)v14);
    *(float *)v14->__pad_0 = *v17;
    *(float *)&v14->field_2[2] = v17[1];
    v14->field_8 = (void *)v17[2];
    v20 = *a5 + *(float *)v14->__pad_0;
    v21 = *(float *)&v14->field_2[2] + *((int*)(a5) + 1);
    v18 = *((int*)(a5) + 2) + *(float *)&v14->field_8;
    *(float *)v14->__pad_0 = v20;
    v22 = v18;
    *(float *)&v14->field_2[2] = v21;
    *(float *)&v14->field_8 = v22;
    *(float *)&v14->field_2[2] = -*(float *)&v14->field_2[2];
    if ( *(float *)v14->__pad_0 < (double)*(float *)&DataGlobal_B1D188.__pad_579C[44220] )
    *(int *)&DataGlobal_B1D188.__pad_579C[44220] = *(int *)v14->__pad_0;
    if ( *(float *)&v14->field_2[2] < (double)*(float *)&DataGlobal_B1D188.__pad_579C[44224] )
    *(int *)&DataGlobal_B1D188.__pad_579C[44224] = *(int *)&v14->field_2[2];
    if ( *(float *)v14->__pad_0 > (double)*(float *)&DataGlobal_B1D188.__pad_579C[45092] )
    *(int *)&DataGlobal_B1D188.__pad_579C[45092] = *(int *)v14->__pad_0;
    if ( *(float *)&v14->field_2[2] > (double)*(float *)&DataGlobal_B1D188.__pad_579C[45096] )
    *(int *)&DataGlobal_B1D188.__pad_579C[45096] = *(int *)&v14->field_2[2];
    v15 = (Tactical *)((char *)(v15) + 12);
    v14 = (Tactical *)((char *)(v14) + 12);
    --v12;
  }
    while ( v12 );
    return (char *)++*(int *)&DataGlobal_B1D188.__pad_579C[53836];
}
}

// ==== BACKFILL 0x00754900  ??0Iostream_init_QAE_XZ_8  cls=ObjectClass  sig=csp  renamed_refs=0 ====
Iostream_init * E4Recv_754900::__0Iostream_init_QAE_XZ_8()
{
{
    return this;
}
}

// ==== BACKFILL 0x00754C00  Voxel::SetProjectionAngle  cls=unknown  sig=csp  renamed_refs=0 ====
int Voxel::SetProjectionAngle(float a1)
{
{
    int *v1;
    float v3[3];
    float v4[3];
    float v5[12];
    Matrix3x4::Identity(v5);
    DataGlobal_88746C = a1;
    Matrix3D::RotateZ(v5, a1);
    v3[0] = -0.70710599;
    v3[1] = -0.70710599;
    v3[2] = 0.0;
    v1 = (int *)TransformMatrix3x4Point(v4, v5, v3);
    DataGlobal_887470 = *v1;
    DataGlobal_887474 = v1[1];
    DataGlobal_887478 = v1[2];
    DataGlobal_887424 = 0;
    v3[0] = *(float *)&DataGlobal_887470 * -6.0;
    DataGlobal_887428 = 0;
    DataGlobal_887420 = LODWORD(v3[0]);
    return 0;
}
}

// ==== BACKFILL 0x007559B0  CopyAudioData  cls=unknown  sig=csp  renamed_refs=0 ====
char * AudioData_Copy(char * a1, int a2)
{
{
    qmemcpy(a1, (char *)&DataGlobal_B45188 + 48 * a2, 0x30u);
    return a1;
}
}

// ==== BACKFILL 0x00755A40  InterpolateVoxelAnimPose  cls=unknown  sig=csp  renamed_refs=0 ====
void * VoxelAnim_InterpolatePose(void * a1, int a2, int a3, double a4)
{
{
    int v5;
    const void *v6;
    float v8;
    char v9[48];
    if ( a2 == a3 )
  {
    qmemcpy(a1, (char *)&DataGlobal_B45188 + 48 * a3, 0x30u);
    return a1;
  }
    else
  {
    v8 = a4;
    v5 = Math::QuaternionSlerp((int)&DataGlobal_B43188 + 16 * a3, v8);
    v6 = (const void *)ToQuaternionMatrix(v9, v5);
    qmemcpy(a1, v6, 0x30u);
    return a1;
  }
}
}

// ==== BACKFILL 0x00755C60  Locomotor_Update  cls=unknown  sig=csp  renamed_refs=0 ====
char * sub_755C60(char * a1, int a2)
{
{
    char *result;
    result = a1;
    if ( a2 >= 4 )
    a2 -= 4;
    qmemcpy(a1, (char *)&DataGlobal_B450B8 + 48 * a2, 0x30u);
    return result;
}
}

// ==== BACKFILL 0x00755CB0  sub_755CB0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_755CB0::sub_755CB0()
{
{
    *(char *)this = 0;
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 0;
    this->M16 = 0;
    this->M20 = 0;
    this->M24 = 0;
    return this;
}
}

// ==== BACKFILL 0x00755D10  WaveClass::Destroy  cls=WaveClass  sig=csp  renamed_refs=4 ====
namespace gamemd { void WaveClass::Destroy() {
{
    void *v2;
    void *v3;
    if ( this->WaveClass_field_BC )
    __3_YAXPAX_Z(*(void **)(this + 16));
    v2 = *(void **)(this + 20);
    this->WaveClass_field_BC = 0;
    if ( v2 )
    __3_YAXPAX_Z(v2);
    v3 = *(void **)(this + 24);
    this->WaveClass_field_C0 = 0;
    if ( v3 )
    __3_YAXPAX_Z(v3);
    this->WaveClass_field_C4 = 0;
}
} }

// ==== BACKFILL 0x007564A0  sub_7564A0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_7564A0::sub_7564A0(int a2)
{
{
    return this->M16 + 12 * a2;
}
}

// ==== BACKFILL 0x007564E0  sub_7564E0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
float * E4Recv_7564E0::sub_7564E0(float * a2, int a3, int a4)
{
{
    int v4;
    int v5;
    int v6;
    double v7;
    float *v8;
    double v9;
    float v11;
    float v12;
    float v13;
    float v14;
    float v15;
    v4 = this->M16;
    v5 = this->M20;
    v6 = 41 * (a4 + *(int *)(v4 + 12 * a3));
    v7 = *(float *)(v5 + 4 * v6 + 112) + *(float *)(v5 + 4 * v6 + 88);
    v8 = (float *)(v5 + 164 * (a4 + *(int *)(v4 + 12 * a3)));
    v14 = v8[29] + v8[23];
    v9 = v8[30] + v8[24];
    v15 = v9;
    v11 = v7 * 0.5;
    *a2 = v11;
    v12 = v14 * 0.5;
    *((int*)(a2) + 1) = v12;
    v13 = v15 * 0.5;
    *((int*)(a2) + 2) = v13;
    return a2;
}
}

// ==== BACKFILL 0x00756570  sub_756570  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_756570::sub_756570()
{
{
    return 12 *(void**)this->M4 + 164 *(void**)this->M8 + this->M12 + 28;
}
}

// ==== BACKFILL 0x00758670  GlobalHelper_053C80_Helper  cls=unknown  sig=csp  renamed_refs=0 ====
char sub_758670(float * a1, int a2)
{
{
    int v2;
    int v3;
    float *v5;
    double v6;
    v2 = DataGlobal_8469F4[a2];
    v3 = 0;
    if ( v2 > 0 )
  {
    v5 = (float *)(DataGlobal_8469E0[a2] + 4);
    do
    {
    v6 = *(v5 - 1) * *a1 + v5[1] * *((int*)(a1) + 2) + *((int*)(a1) + 1) * *v5;
    if ( v6 >= 0.0 )
    g_VoxelShadeTable[v3] = Math::RoundToInt(v6 * 16.0);
    else
    g_VoxelShadeTable[v3] = 0;
    ++v3;
    v5 += 3;
    }
    while ( v3 < v2 );
  }
    DataGlobal_B45A8F = 16;
    DataGlobal_B45A8E = 16;
    DataGlobal_B45A8D = 16;
    return 16;
}
}

// ==== BACKFILL 0x007589F0  sub_7589F0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
BOOL E4Recv_7589F0::sub_7589F0(int a2)
{
{
    int v4;
    (*(void (__thiscall **)(int, int))(*(int *)(a2) + 28))(a2, 1);
    v4 = (*(int (__thiscall **)(int, int, int))(*(int *)(a2) + 36))(a2, this->M16, 768) != 768;
    (*(void (__thiscall **)(int))(*(int *)(a2) + 52))(a2);
    return v4;
}
}

// ==== BACKFILL 0x00758E10  sub_758E10  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_758E10::sub_758E10(float a2, float a3, float a4)
{
{
    unsigned char *v4;
    char v5;
    int i;
    double v7;
    double v8;
    double v9;
    float v11;
    v4 = (unsigned char *)this->M16;
    v5 = 0;
    v11 = 100000.0;
    for ( i = 0; i < 256; ++i )
  {
    v7 = a3 - (double)v4[1];
    v8 = a4 - (double)v4[2];
    v9 = v8 * v8 + v7 * v7 + (a2 - (double)*v4) * (a2 - (double)*v4);
    if ( v9 < v11 )
    {
    v11 = v9;
    v5 = i;
    }
    v4 += 3;
  }
    return v5;
}
}

// ==== BACKFILL 0x00759510  CCFileClass::Cleanup  cls=CCFileClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int CCFileClass::Cleanup() {
{
    System_Cleanup();
    *++this = &vt_CCFileClass;
    this->q064 = 0;
    Vector::Clear((int)(this + 22));
    *(void**)this = &vt_CDFileClass;
    return BufferIOFileClass::Dtor(this);
}
} }

// ==== BACKFILL 0x00759760  sub_759760  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned char * E4Recv_759760::sub_759760(const void * a2)
{
{
    qmemcpy(this + 516, a2, 0x300u);
    this->M1320 = 1;
    return this;
}
}

// ==== BACKFILL 0x007598D0  AbstractClass::updateBuildingState  cls=AbstractClass  sig=csp  renamed_refs=2 ====
namespace ra2 { namespace game { void AbstractClass::updateBuildingState(int a1) {
{
      if ( a2 != this->__pad_504 && ProcessAudioStreamBuffer(this->q200, a2, 0) != -6 )
        this->__pad_504 = a2;
}
} } }

// ==== BACKFILL 0x00759BC0  sub_759BC0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int E4Recv_759BC0::sub_759BC0(signed int a2)
{
{
    signed int v2;
    unsigned int result;
    v2 = a2;
    if ( a2 == -1 )
    v2 = this->M1288 - 1;
    if ( this->M1284 != v2 )
  {
    if ( ProcessAudioStreamBuffer(this->M512, v2, 0) != -6 )
    this->M1284 = v2;
    this->M1284 = v2;
  }
    MovieClass::RenderLoop((char *)this, v2, 0);
    result = this->M1284;
    if ( result >= this->M1288 )
    this->M1284 = 0;
    return result;
}
}

// ==== BACKFILL 0x00759E10  AbstractClass::processConstruction  cls=AbstractClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::processConstruction() {
{
      char result;

      result = this->q514;
      if ( result )
      {
        result = this->q550;
        if ( !result )
          result = ProcessAudioStreamPipeline(this->q200, 2, 0);
      }
      this->q550 = 1;
      return result;
}
} } }

// ==== BACKFILL 0x00759E50  AbstractClass::checkBuildProgress  cls=AbstractClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void AbstractClass::checkBuildProgress() {
{
      this->q550 = 0;
}
} } }

// ==== BACKFILL 0x00759E60  DSurface::FlipIfNeeded  cls=DSurface  sig=csp  renamed_refs=0 ====
char DSurface::FlipIfNeeded()
{
{
    char result;
    result = (unsigned char)this->DSurface_field_0x514;
    if ( result )
    return DSurface::Flip(this->DSurface_field_0x200);
    return result;
}
}

// ==== BACKFILL 0x0075A810  TestBitArray  cls=unknown  sig=csp  renamed_refs=0 ====
bool BitArray_Test(int a1)
{
{
    return ((unsigned char)(1 << (a1 & 7)) & (unsigned char)DataGlobal_B45BA8[a1 >> 3]) != 0;
}
}

// ==== BACKFILL 0x0075AB30  JumpjetLocomotionClass::SmallStub_75AB30  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
char JumpjetLocomotionClass::SmallStub_75AB30(int a1)
{
{
    return *(char *)(a1 + 48);
}
}

// ==== BACKFILL 0x0075AB40  JumpjetLocomotionClass::ComputeFloatExpression_4  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
bool JumpjetLocomotionClass::ComputeFloatExpression_4(unsigned int * a1)
{
{
    return (*(unsigned char (__stdcall **)(int *))(*a1 + 16))(a1)
    && *(double *)(*((int*)(a1) + 2) + 1400) > 0.0 && (*((int*)(a1) + 9) != g_AsyncMovieState || *((int*)(a1) + 10) != g_MovieFrameState1 || *((int*)(a1) + 11) != g_MovieFrameState2);
}
}

// ==== BACKFILL 0x0075ABA0  JumpjetLocomotionClass::GetMovementCoordinate_2  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate_2(unsigned int * a1, unsigned int * a2)
{
{
    int *result;
    int v3;
    int v4;
    int *v5;
    if ( (*(unsigned char (__stdcall **)(int *))(*a1 + 16))(a1) )
  {
    result = a2;
    v3 = *((int*)(a1) + 7);
    v4 = *((int*)(a1) + 8);
    v5 = a2;
    *a2 = *((int*)(a1) + 6);
  }
    else
  {
    result = a2;
    v3 = g_MovieFrameState1;
    v4 = g_MovieFrameState2;
    v5 = a2;
    *a2 = g_AsyncMovieState;
  }
    v5[1] = v3;
    v5[2] = v4;
    return result;
}
}

// ==== BACKFILL 0x0075AC00  JumpjetLocomotionClass::GetRenderCoordinate_2  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate_2(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    if ( *((int*)(a1) + 9) == g_AsyncMovieState && *((int*)(a1) + 10) == g_MovieFrameState1 && *((int*)(a1) + 11) == g_MovieFrameState2 )
  {
    v5 = *((int*)(a1) + 2);
    v6 = v5 + 156;
    v7 = *(int *)(v5 + 156);
    v8 = *(int *)(v5 + 160);
    v9 = *(int *)(v6 + 8);
    *a2 = v7;
    *((int*)(a2) + 1) = v8;
    *((int*)(a2) + 2) = v9;
    return a2;
  }
    else
  {
    v2 = *((int*)(a1) + 10);
    v3 = *((int*)(a1) + 11);
    *a2 = *((int*)(a1) + 9);
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
  }
}
}

// ==== BACKFILL 0x0075AC80  JumpjetLocomotionClass::DrawVoxelAnimation  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::DrawVoxelAnimation(unsigned char * a1)
{
{
    *((int*)(a1) + 49) = 1;
    VoxelAnim::Draw((int)(a1 - 4), (int *)1);
    *((int*)(a1) + 49) = 0;
    return (*(int (__stdcall **)(char *))(*(int *)(a1) + 16))(a1);
}
}

// ==== BACKFILL 0x0075ACB0  JumpjetLocomotionClass::ConvertCoordToCell_4  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
char JumpjetLocomotionClass::ConvertCoordToCell_4(int a1, int a2, int a3, int a4)
{
{
    int v4;
    int v5;
    int v6;
    LOBYTE(v4) = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 892))(*(int *)(a1 + 8));
    if ( !(char)v4 )
  {
    LOBYTE(v4) = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 468))(*(int *)(a1 + 8));
    if ( !(char)v4 )
    {
    LOBYTE(v4) = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 472))(*(int *)(a1 + 8));
    if ( !(char)v4 )
      {
    v4 = a2;
    v5 = a3;
    v6 = a4;
    *(int *)(a1 + 24) = a2;
    *(int *)(a1 + 28) = v5;
    *(int *)(a1 + 32) = v6;
    if ( v4 == g_AsyncMovieState && v5 == g_MovieFrameState1 && v6 == g_MovieFrameState2 )
        {
    if ( *(int *)(a1 + 36) == g_AsyncMovieState && *(int *)(a1 + 40) == g_MovieFrameState1 && *(int *)(a1 + 44) == g_MovieFrameState2 )
          {
    LOBYTE(v4) = *(char *)(a1 + 48);
    *(char *)(a1 + 48) = 0;
    if ( (char)v4 )
    LOBYTE(v4) = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 1356))(*(int *)(a1 + 8));
          }
        }
    else
        {
    a3 = v5;
    a2 = v4;
    a4 = v6;
    v4 = (int)Coord::To_Cell(&DataGlobal_87F7E8, &a2);
    if ( (*(int *)(v4 + 320) & 0x100) != 0 )
          {
    v4 = Coord::ScaleToScreenY((void *)0x3C);
    *(int *)(a1 + 32) += v4;
          }
    *(char *)(a1 + 48) = 1;
        }
      }
    }
  }
    return v4;
}
}

// ==== BACKFILL 0x0075ADA0  JumpjetLocomotionClass::DispatchVirtualCall_8  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::DispatchVirtualCall_8(FootClass * aP0)
{
{
    FootClass *result;
    result = aP0;
    aP0->nextArrayIndex = g_AsyncMovieState.field_0;
    aP0->referenceCount = g_AsyncMovieState.field_4;
    aP0->NeedsSaveOrLink = (void *)g_AsyncMovieState.field_8;
    if ( aP0->objectTypeFlags == g_AsyncMovieState.field_0 && aP0->owningHouseIndex == g_AsyncMovieState.field_4 && aP0->fallRate == g_AsyncMovieState.field_8 )
  {
    LOBYTE(aP0->nextObject) = 0;
    BYTE2(aP0->nextObject) = 0;
    return (*(int (__thiscall **)(int))(**(int **)&aP0->__pad_0[8] + 1356))(*(int *)&aP0->__pad_0[8]);
  }
    return (int)result->__pad_0;
}
}

// ==== BACKFILL 0x0075AE00  JumpjetLocomotionClass::SynchronizeFacingDirection_1  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
char JumpjetLocomotionClass::SynchronizeFacingDirection_1(int a1, int a2)
{
{
    return FacingClass::Set_SyncLog((char *)(*(int *)(a1 + 8) + 904), &a2);
}
}

// ==== BACKFILL 0x0075AE30  JumpjetLocomotionClass::DispatchVirtualCall_9  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::DispatchVirtualCall_9(int a1, int a2, int a3, int a4)
{
{
    char v4;
    int result;
    int v6[3];
    v6[0] = a2;
    v4 = *(char *)(a1 + 48);
    v6[1] = a3;
    v6[2] = a4;
    Voxel::DrawHelper((int *)(a1 - 4), v6);
    result = g_AsyncMovieState;
    if ( *(int *)(a1 + 36) == g_AsyncMovieState && *(int *)(a1 + 40) == g_MovieFrameState1 && *(int *)(a1 + 44) == g_MovieFrameState2 && *(int *)(a1 + 24) == g_AsyncMovieState && *(int *)(a1 + 28) == g_MovieFrameState1 && *(int *)(a1 + 32) == g_MovieFrameState2 )
  {
    *(char *)(a1 + 48) = 0;
    if ( v4 )
    return (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 1356))(*(int *)(a1 + 8));
  }
    return result;
}
}

// ==== BACKFILL 0x0075C640  WalkLocomotionClass::ddtor  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
int WalkLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1247291204;
  a2[1] = 298948665;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// ==== BACKFILL 0x0075C680  WalkLocomotionClass::BeginMove  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
HRESULT WalkLocomotionClass::BeginMove(int * a1, int * pStm)
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
    *((int*)(a1) + 14) = 0;
    *a1 = (int)(unsigned int)vt_WalkLocomotionClass;
    a1[1] = (unsigned int)vt_WalkLocomotionClass;
    *((int*)(a1) + 6) = (int)&vt_WalkLocomotionClass;
  }
    v2->__pad_0->Read(v2, &pStm, 1, 0);
    if ( !(char)pStm )
    return v3;
    v4 = *((int*)(a1) + 14);
    v5 = (LPVOID *)(a1 + 14);
    if ( v4 )
    (*(void (__stdcall **)(int))(*(int *)(v4) + 8))(v4);
    *v5 = 0;
    return OleLoadFromStream(v2, &IID_ILocomotion, v5);
}
}

// ==== BACKFILL 0x0075C700  WalkLocomotionClass::LoadFromStream  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
HRESULT WalkLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{
{
    IStream *v3;
    int *v4;
    int IPersistStream;
    int v6;
    int (__stdcall ***v7)(int, void *, int **);
    int v8;
    int *v9;
    HRESULT v10;
    int v12;
    v3 = (IStream *)pPStm;
    v4 = a1;
    IPersistStream = LoadIPersistStream(a1, pPStm, a3);
    if ( IPersistStream < 0 )
    return IPersistStream;
    if ( !v4[14] )
  {
    v12 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 0;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v12 + 16))(v3, &a3, 1, 0);
    return IPersistStream;
  }
    v6 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 1;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v6 + 16))(v3, &a3, 1, 0);
    v7 = (int (__stdcall ***)(int, void *, int **))v4[14];
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
}

// ==== BACKFILL 0x0075C7E0  JumpjetLocomotionClass::SmallStub_75C7E0  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::SmallStub_75C7E0(int a1)
{
return 2;
}

// ==== BACKFILL 0x0075C850  JumpjetLocomotionClass::StubReturnZero_22  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::StubReturnZero_22(int a1, int a2)
{
{
    if ( !a2 )
    return -2147467261;
    if ( *(int *)(a1 + 32) )
    return -2147467259;
    *(int *)(a1 + 32) = a2;
    (*(void (__stdcall **)(int))(*(int *)(a2) + 4))(a2);
    return 0;
}
}

// ==== BACKFILL 0x0075C8A0  JumpjetLocomotionClass::StubReturnZero_23  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::StubReturnZero_23(int a1, unsigned int * a2)
{
{
    int v3;
    if ( !a2 )
    return -2147467261;
    v3 = *(int *)(a1 + 32);
    if ( !v3 )
    return 1;
    *a2 = v3;
    *(int *)(a1 + 32) = 0;
    return 0;
}
}

// ==== BACKFILL 0x0075C8E0  JumpjetLocomotionClass::CheckBaseClassState_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
bool JumpjetLocomotionClass::CheckBaseClassState_0(int a1)
{
{
    return !(*(unsigned char (__stdcall **)(int))(*(int *)(a1 - 20) + 16))(a1 - 20)
    && *(int *)(a1 + 32)
    && !*(char *)(a1 + 29)
    && !*(char *)(*(int *)(a1 - 12) + 1709);
}
}

// ==== BACKFILL 0x0075C920  JumpjetLocomotionClass::LoadLocomotionFromStream_4  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::LoadLocomotionFromStream_4(unsigned int * a1, unsigned int * a2)
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
    v4 = a1 + 8;
    if ( *((int*)(a1) + 8) )
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

// ==== BACKFILL 0x0075CA30  JumpjetLocomotionClass::DispatchVirtualCall_10  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::DispatchVirtualCall_10(unsigned int * a1, int a2)
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

// ==== BACKFILL 0x0075CA80  JumpjetLocomotionClass::IsPositionWithinThreshold_1  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
bool JumpjetLocomotionClass::IsPositionWithinThreshold_1(int a1, int a2, int a3, int a4)
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
    && (int)abs32(v5 - a4) <= DataGlobal_B45C28;
}
}

// ==== BACKFILL 0x0075CB20  JumpjetLocomotionClass::SmallStub_75CB20  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
char JumpjetLocomotionClass::SmallStub_75CB20(int a1)
{
{
    return *(char *)(a1 + 50);
}
}

// ==== BACKFILL 0x0075CB30  JumpjetLocomotionClass::InitMultiFieldArray_1  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
unsigned int * JumpjetLocomotionClass::InitMultiFieldArray_1(unsigned int * a1)
{
{
    *((int*)(a1) + 6) = g_AsyncMovieState;
    *((int*)(a1) + 7) = g_MovieFrameState1;
    *((int*)(a1) + 8) = g_MovieFrameState2;
    *((int*)(a1) + 9) = g_AsyncMovieState;
    *((int*)(a1) + 10) = g_MovieFrameState1;
    *((int*)(a1) + 11) = g_MovieFrameState2;
    return a1 + 9;
}
}

// ==== BACKFILL 0x0075CBA0  JumpjetLocomotionClass::ShortFunc_75CBA0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
BOOL JumpjetLocomotionClass::ShortFunc_75CBA0(int a1)
{
{
    return *(int *)(a1 + 32) != 0;
}
}

// ==== BACKFILL 0x0075CBC0  JumpjetLocomotionClass::SetByteField_3  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::SetByteField_3(int a1)
{
{
    *(char *)(a1 + 50) = 0;
    return a1;
}
}

// ==== BACKFILL 0x0075CBD0  WalkLocomotionClass::StubReturn60  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
int WalkLocomotionClass::StubReturn60()
{
return 60;
}

// ==== BACKFILL 0x0075CBE0  WalkLocomotionClass::ProcessMove  cls=WalkLocomotionClass  sig=csp  renamed_refs=0 ====
WalkLocomotionClass * WalkLocomotionClass::ProcessMove(char a2)
{
{
    ILocomotion *v3;
    *(void**)this = (unsigned int)vt_WalkLocomotionClass;
    *(this + 1) = (unsigned int)vt_WalkLocomotionClass;
    *(this + 6) = (ILocomotion *)&vt_WalkLocomotionClass;
    v3 = *(this + 14);
    if ( v3 )
    (*(void (__stdcall **)(ILocomotion *))(*(int *)(v3) + 8))(v3);
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (WalkLocomotionClass *)this;
}
}

// ==== BACKFILL 0x0075CC30  JumpjetLocomotionClass::SmallStub_75CC30  cls=unknown  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::SmallStub_75CC30(int a1, const void * a2, int * a3)
{
{
    return WalkLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}
}

// ==== BACKFILL 0x0075CC40  JumpjetLocomotionClass::SmallStub_75CC40  cls=unknown  sig=csp  renamed_refs=0 ====
LONG JumpjetLocomotionClass::SmallStub_75CC40(int a1)
{
{
    return WalkLocomotionClass::AddRef(a1 - 4);
}
}

// ==== BACKFILL 0x0075CC50  JumpjetLocomotionClass::SmallStub_75CC50  cls=unknown  sig=csp  renamed_refs=0 ====
LONG JumpjetLocomotionClass::SmallStub_75CC50(int a1)
{
{
    return WalkLocomotionClass::Release((volatile LONG *)(a1 - 4));
}
}

// ==== BACKFILL 0x0075CC60  JumpjetLocomotionClass::SmallStub_75CC60  cls=unknown  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::SmallStub_75CC60(int a1, const void * a2, int * a3)
{
{
    return WalkLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}
}

// ==== BACKFILL 0x0075CC70  JumpjetLocomotionClass::SmallStub_75CC70  cls=unknown  sig=csp  renamed_refs=0 ====
LONG JumpjetLocomotionClass::SmallStub_75CC70(int a1)
{
{
    return WalkLocomotionClass::AddRef(a1 - 24);
}
}

// ==== BACKFILL 0x0075CC80  JumpjetLocomotionClass::SmallStub_75CC80  cls=unknown  sig=csp  renamed_refs=0 ====
LONG JumpjetLocomotionClass::SmallStub_75CC80(int a1)
{
{
    return WalkLocomotionClass::Release((volatile LONG *)(a1 - 24));
}
}

// ==== BACKFILL 0x0075D230  AbstractClass::ProcessInit  cls=AbstractClass  sig=csp  renamed_refs=1 ====
namespace ra2 { namespace game { int AbstractClass::ProcessInit() {
{
      int v2;
      int v3;
      void *v4;
      void *v5;
      void *v6;
      int v8;

      *(_DWORD *)this = &WarheadTypeClass::`vftable';
      *(_DWORD *)(this + 4) = &WarheadTypeClass::`vftable';
      *(_DWORD *)(this + 8) = &WarheadTypeClass::`vftable';
      *(_DWORD *)(this + 12) = &vt_WarheadTypeClass;
      AbstractClass::AnnounceExpiredPointer((void **)this, 1);
      v8 = this;
      v2 = (*(int (__thiscall **)(WarheadTypeClass **, int *))&WarheadTypeClass_Array->__pad_0[16])(&WarheadTypeClass_Array, &v8);
      if ( v2 != -1 && v2 < g_WarheadTypePool && v2 < --g_WarheadTypePool )
      {
        do
        {
          ++v2;
          *((_DWORD *)DataGlobal_8874C4 + v2 - 1) = *((_DWORD *)DataGlobal_8874C4 + v2);
        }
        while ( v2 < g_WarheadTypePool );
      }
      v8 = this;
      v3 = (*(int (__thiscall **)(int *, int *))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v8);
      if ( v3 != -1 && v3 < g_AnimManager && v3 < --g_AnimManager )
      {
        do
        {
          ++v3;
          *((_DWORD *)g_AnimPoolCount + v3 - 1) = *((_DWORD *)g_AnimPoolCount + v3);
        }
        while ( v3 < g_AnimManager );
      }
      v4 = *(void **)(this + 428);
      *(_DWORD *)(this + 424) = &vt_VectorClass_int;
      if ( v4 && this->q1B5 )
      {
        __3_YAXPAX_Z(v4);
        this->q1AC = 0;
      }
      this->q1B5 = 0;
      this->q1B0 = 0;
      v5 = *(void **)(this + 400);
      *(_DWORD *)(this + 396) = &vt_VectorClass_VoxelAnimTypeClass_const;
      if ( v5 && this->q199 )
      {
        __3_YAXPAX_Z(v5);
        this->q190 = 0;
      }
      this->q199 = 0;
      this->q194 = 0;
      v6 = *(void **)(this + 264);
      *(_DWORD *)(this + 260) = &vt_VectorClass_AnimTypeClass_const;
      if ( v6 && this->q111 )
      {
        __3_YAXPAX_Z(v6);
        this->__pad_108 = 0;
      }
      this->q111 = 0;
      this->q10C = 0;
      return AbstractTypeClass::Dtor((_DWORD *)this);
}
} } }

// ==== BACKFILL 0x0075E080  WarheadTypeClass::vt_03  cls=WarheadTypeClass  sig=csp  renamed_refs=0 ====
int WarheadTypeClass__vt_03_(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1463464540;
  a2[1] = 298979195;
  a2[2] = 1610642049;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x0075E4A0  Crate::applyCrateEffect  cls=Crate  sig=csp  renamed_refs=0 ====
namespace gamemd { int Crate::applyCrateEffect() {
{
    int v1;
    v1 = 0;
    if ( *(int *)&DataGlobal_87C374.__pad_579C[22976] <= 0 )
    return 0;
    while ( _strcmpi((const void *)(*(int *)(*(int *)&DataGlobal_87C374.__pad_579C[22964] + 4 * v1) + 36), this) )
  {
    if ( ++v1 >= *(int *)&DataGlobal_87C374.__pad_579C[22976] )
    return 0;
  }
    return *(int *)(*(int *)&DataGlobal_87C374.__pad_579C[22964] + 4 * v1);
}
} }

// ==== BACKFILL 0x0075E4F0  WarheadTypeClass::GetObjectSize  cls=WarheadTypeClass  sig=csp  renamed_refs=0 ====
int WarheadTypeClass::GetObjectSize()
{
return 464;
}

// ==== BACKFILL 0x0075E500  WarheadTypeClass::GetTypeIdentifier  cls=WarheadTypeClass  sig=csp  renamed_refs=0 ====
int WarheadTypeClass::GetTypeIdentifier()
{
return 50;
}

// ==== BACKFILL 0x0075E690  WarheadTypeClass::checkImmunity  cls=WarheadTypeClass  sig=csp  renamed_refs=0 ====
CCINIClass * WarheadTypeClass::checkImmunity(TypeList * aP1)
{
{
    *(void**)this = &vt_TypeList_VoxelAnimTypeClass_const;
    return (CCINIClass *)this;
}
}

// ==== BACKFILL 0x0075E6A0  WarheadTypeClass::calculateDamage  cls=WarheadTypeClass  sig=csp  renamed_refs=0 ====
DynamicVector * WarheadTypeClass::calculateDamage(AbstractClass * aP1)
{
{
    *(void**)this = &vt_TypeList_int;
    return (DynamicVector *)this;
}
}

// ==== BACKFILL 0x0075EF30  sub_75EF30  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_75EF30(unsigned short * a1, int a2)
{
{
    int v2;
    int v3;
    int result;
    v2 = (unsigned char)((unsigned char)(*a1 >> g_BitShift_Red) << g_BitShift_Green_0) + (char)(a2 >> 2);
    v3 = (unsigned char)((unsigned char)(*a1 >> g_BitShift_Blue) << g_BitMask_Red) + ((96 * a2) >> 8);
    if ( v3 > 255 )
    v3 = 255;
    if ( v2 > 255 )
    v2 = 255;
    result = v3 >> g_BitMask_Red << g_BitShift_Blue;
    *a1 = result | ((int)(unsigned char)((unsigned char)(*a1 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green)
    | (v2 >> g_BitShift_Green_0 << g_BitShift_Red);
    return result;
}
}

// ==== BACKFILL 0x0075F020  Voxel::InitDistanceTable  cls=Voxel  sig=csp  renamed_refs=0 ====
int Voxel::InitDistanceTable()
{
{
    int v0;
    short *v1;
    int i;
    double v3;
    short *v4;
    double v5;
    short *v6;
    double v7;
    int *v8;
    int result;
    int v10;
    int v11;
    DataGlobal_B725CC = 1;
    v0 = 0;
    v1 = DataGlobal_B4669C;
    do
  {
    for ( i = 0; i < 300; ++i )
    {
    v3 = Math::Sqrt((double)(v0 * v0 + i * i));
    *v1++ = Math::RoundToInt(v3);
    }
    ++v0;
  }
    while ( (int)v1 < (int)&DataGlobal_B725BC );
    v4 = DataGlobal_B46254;
    v10 = 0;
    do
  {
    v5 = Math::SinCos((double)v10 * 0.125);
    *v4++ = Math::RoundToInt(v5 * 12.0 + 0.49);
    ++v10;
  }
    while ( (int)v4 < (int)DataGlobal_B4663C );
    v11 = 0;
    v6 = DataGlobal_B45E68;
    do
  {
    v7 = Math::SinCos((double)v11 * 0.1);
    *v6++ = Math::RoundToInt(v7 * 12.0 + 0.49);
    ++v11;
  }
    while ( (int)v6 < (int)&DataGlobal_B46248 );
    v8 = DataGlobal_B46648;
    for ( result = 110; result < 214; result += 8 )
    *v8++ = result;
    return result;
}
}

// ==== BACKFILL 0x0075F330  WaveClass::DamageArea  cls=WaveClass  sig=csp  renamed_refs=0 ====
char WaveClass::DamageArea(ObjectClass * aP1)
{
{
    int v3;
    ObjectClass *v4;
    char *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v15;
    int v16;
    v3 = this->Owner;
    if ( v3 )
  {
    v4 = aP1;
    LOWORD(aP1) = *(int *)aP1->__pad_0 / 256;
    HIWORD(aP1) = *(int *)&v4->__pad_0[4] / 256;
    v5 = (char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&aP1);
    v6 = (*(int (__thiscall **)(int, int))(*(int *)this->Owner + 1016))(this->Owner, 0);
    v7 = *(int *)v6;
    v15 = *(int *)(*(int *)(v6) + 172);
    v16 = *(int *)(*(int *)(v6) + 152);
    if ( (*((int *)(v5) + 80) & 0x100) != 0 && this->WaveClass_field_168 >= DataGlobal_B725C8 * (v5[283] + 4) )
    v8 = *((int *)(v5) + 58);
    else
    v8 = *((int *)(v5) + 57);
    for ( ; v8; v8 = *(int *)(v8 + 48) )
    {
    v9 = this->Owner;
    if ( v8 != v9 && *(char *)(v8 + 144) && *(char *)(v8 + 116) && !*(char *)(v8 + 129) && *(int *)(v8 + 108) > 0 )
    (*(void (__thiscall **)(int, int *, int, int, int, int, int, int))(*(int *)(v8) + 364))( v8, &v16, 0, v15, v9, 0, 0, 0);
    }
    v10 = *((int *)(v5) + 17);
    if ( v10 != -1 )
    {
    v11 = *(int *)&g_BuildingTypeClass_Array->__pad_0[4 * v10];
    if ( *(char *)(v11 + 689) )
      {
    aP1 = (ObjectClass *)*((int *)(v5) + 9);
    CellChainReact();
      }
    if ( *(char *)(v11 + 680) )
    BuildingClass::SellEffects((int)v5, *(TechnoClass **)(v7 + 152));
    }
    LOBYTE(v3) = CellClass::IsActiveOrNext(v5);
    if ( (char)v3 )
    {
    v12 = *(int *)(*(int *)&DataGlobal_87F8E4.__pad_5568[9108] + 6092);
    v3 = Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)0x63);
    if ( v3 < v12 )
    LOBYTE(v3) = LayerClass::DestroyCliff((int *)&DataGlobal_87F7E8, v13, (int)v5);
    }
  }
    return v3;
}
}

// ==== BACKFILL 0x0075F5C0  TacticalClass::CalcInverseAlpha  cls=TacticalClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void* TacticalClass::CalcInverseAlpha(int a1, float a2) {
{
      double v3;
      int v5;
      int v6;

      v3 = 1.0 - a3;
      v5 = Math::RoundToInt(v3);
      v6 = Math::RoundToInt(v3);
      *this = v5;
      this->q004 = v6;
      return this;
}
} }

// ==== BACKFILL 0x0075F610  WaveClass::UpdateWave  cls=WaveClass  sig=csp  renamed_refs=2 ====
namespace gamemd { int WaveClass::UpdateWave(int a1, int a2) {
{
    TechnoClass *result;
    Object::Unlink((AnimClass *)this);
    result = 0;
    if ( this->Owner == a2 )
    this->Owner = 0;
    if ( this->WaveClass_field_158 == a2 )
    this->WaveClass_field_158 = 0;
    return (int)result->__pad_0;
}
} }

// ==== BACKFILL 0x0075F7D0  WaveClass::ProcessWaveTick  cls=WaveClass  sig=csp  renamed_refs=0 ====
int WaveClass::ProcessWaveTick(int * a1, int * a2, int a3)
{
{
    int v3;
    int result;
    int i;
    AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    v3 = *a2;
    a3 = *((int*)(a1) + 128);
    result = (*(int (__stdcall **)(int *, int *, int, int))(v3 + 16))(a2, &a3, 4, 0);
    if ( result >= 0 )
  {
    for ( i = 0; i < a3; ++i )
    {
    result = (*(int (__stdcall **)(int *, int, int, int))(*a2 + 16))(a2, *((int*)(a1) + 125) + 4 * i, 4, 0);
    if ( result < 0 )
    break;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0075F840  WaveClass::GetClassIdentifier  cls=WaveClass  sig=csp  renamed_refs=0 ====
int WaveClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448653;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// ==== BACKFILL 0x0075F880  WaveClass::GetObjectSize  cls=WaveClass  sig=csp  renamed_refs=0 ====
int WaveClass::GetObjectSize()
{
return 576;
}

// ==== BACKFILL 0x0075F890  WaveClass::CheckStateFlag  cls=WaveClass  sig=csp  renamed_refs=0 ====
int WaveClass::CheckStateFlag()
{
return 3;
}

// ==== BACKFILL 0x0075F8A0  WaveClass::StubReturnFalse  cls=WaveClass  sig=csp  renamed_refs=0 ====
int WaveClass::StubReturnFalse()
{
return 0;
}
