// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00470C00  MPCooperative::startGame  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
unsigned int * MPCooperative::startGame()
{
{
    this->vfptr = &vt_CampaignEndScoreClass;
    DataGlobal_89E008 = -1;
    DataGlobal_89E020 = 0;
    DataGlobal_89DFD4 = 0;
    return &this->vfptr;
}
}

// ==== BACKFILL 0x00470C30  sub_470C30  cls=CampaignEndScoreClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_470C30::sub_470C30()
{
{
    this->vfptr = &vt_CampaignEndScoreClass;
}
}

// ==== BACKFILL 0x00471F90  ObjectClass::RemoveFromPointerList  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::RemoveFromPointerList(int a2) {
{
    int v3;
    int *v4;
    int v5;
    int v6;
    int v7;
    v3 = this->attachedTag - 1;
    if ( v3 < 0 )
    return 1;
    do
  {
    v4 = *(int **)(this->owningHouseIndex + 4 * v3);
    if ( *v4 == a2 )
    {
    if ( v4 )
    __3_YAXPAX_Z(*(void **)(this->owningHouseIndex + 4 * v3));
    v5 = this->attachedTag;
    if ( v3 < v5 )
      {
    v6 = v5 - 1;
    v7 = v3;
    for ( this->attachedTag = v6;
    v7 < this->attachedTag;
    *(int *)(this->owningHouseIndex + 4 * v7 - 4) = *(int *)(this->owningHouseIndex + 4 * v7) ) {
    ++v7;
        }
      }
    }
    --v3;
  }
    while ( v3 >= 0 );
    return 1;
}
} } }

// ==== BACKFILL 0x004722A0  CaptureManagerClass::CannotControlAnyMore  cls=CaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
bool CaptureManagerClass::CannotControlAnyMore()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall CaptureManagerClass::CannotControlAnyMore(int this)
{
  return !this->CaptureManagerClass_field_40 && this->originalOwner >= *(_DWORD *)(this + 60); /*0x4722a7*/
}
}

// ==== BACKFILL 0x004722D0  TechnoClass::processPowerDrain  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::processPowerDrain()
{
{
    return this->attachedTag;
}
}

// ==== BACKFILL 0x004722F0  CaptureManagerClass::GetOriginalOwner  cls=CaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
int CaptureManagerClass::GetOriginalOwner(int a2)
{
{
    int v2;
    int v3;
    int **i;
    v2 = this->originalOwner - 1;
    if ( v2 < 0 )
    return 0;
    v3 = this->controlNodeCount;
    for ( i = (int **)(v3 + 4 * v2); **i != a2; --i )
  {
    if ( --v2 < 0 )
    return 0;
  }
    return *(int *)(*(int *)(v3 + 4 * v2) + 4);
}
}

// ==== BACKFILL 0x00472330  HouseClass::AssignCivilianToLowPowerTargets  cls=HouseClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int HouseClass::AssignCivilianToLowPowerTargets(int a2) {
{
      int v2;
      int v4;
      int v5;
      HouseClass *i;
      int v8;
      int j;
      _DWORD *v10;

      v2 = HouseClass_Count;
      v4 = HouseTypeClass::Find(g_INI_Key_Civilian);
      v5 = 0;
      if ( v2 <= 0 )
        return 0;
      for ( i = HouseClass_Array;
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)i->__pad_0 + 52) + 188) != v4;
            i = (HouseClass *)((char *)i + 4) )
      {
        if ( ++v5 >= v2 )
          return 0;
      }
      v8 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v5];
      if ( !v8 )
        return 0;
      for ( j = this->relatedTagsCapacity - 1; j >= 0; --j )
      {
        v10 = *(_DWORD **)(this->vtable6 + 4 * j);
        if ( *v10 == a2 )
          v10[1] = v8;
      }
      return 1;
}
} }

// ==== BACKFILL 0x004726F0  CaptureManagerClass::PowerDrainUpdate  cls=CaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
int CaptureManagerClass::PowerDrainUpdate(int a2)
{
{
    int result;
    int v4;
    int v5;
    result = AbstractClass::ProcessPower((#378 *)this);
    v4 = this->overloadCount;
    if ( v4 )
  {
    v5 = (*(int (__stdcall **)(int))(*(int *)(v4 + 4) + 16))(v4 + 4);
    return Power::TimerProcess(v5);
  }
    return result;
}
}

// ==== BACKFILL 0x00472960  CaptureManagerClass::GetClassIdentifier  cls=CaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
int CaptureManagerClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 108652930;
  a2[1] = 299085213;
  a2[2] = 268441278;
  a2[3] = 1822515787;
  return 0;
}

// ==== BACKFILL 0x004729A0  CaptureManagerClass::GetObjectSize  cls=CaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
int CaptureManagerClass::GetObjectSize()
{
return 80;
}

// ==== BACKFILL 0x004729B0  CaptureManagerClass::GetTypeIdentifier  cls=CaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
int CaptureManagerClass::GetTypeIdentifier()
{
return 66;
}

// ==== BACKFILL 0x004729C0  CaptureManagerClass::ddtor  cls=CaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
CaptureManagerClass * CaptureManagerClass::ddtor(char a2)
{
{
    int v3;
    void *v4;
    int *v6;
    *(void**)this = vt_CaptureManagerClass;
    *(this + 1) = (unsigned int)vt_CaptureManagerClass;
    *(this + 2) = (unsigned int)vt_CaptureManagerClass;
    *(this + 3) = &vt_CaptureManagerClass;
    v6 = this;
    v3 = (*(int (__thiscall **)(int *, int **))(DataGlobal_89E0F0 + 16))(&DataGlobal_89E0F0, &v6);
    if ( v3 != -1 && v3 < DataGlobal_89E100 && v3 < --DataGlobal_89E100 )
  {
    do
    {
    ++v3;
    *((int *)(DataGlobal_89E0F4) + v3 - 1) = *((int *)(DataGlobal_89E0F4) + v3);
    }
    while ( v3 < DataGlobal_89E100 );
  }
    v4 = (void *)*(this + 10);
    *(this + 9) = &vt_VectorClass_ControlNode;
    if ( v4 && *((char *)(this) + 49) )
  {
    __3_YAXPAX_Z(v4);
    *(this + 10) = 0;
  }
    *((char *)(this) + 49) = 0;
    *(this + 11) = 0;
    AbstractClass::DTOR(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (CaptureManagerClass *)this;
}
}

// ==== BACKFILL 0x00473140  CaptureManagerClass::Constructor_473140  cls=CaptureManagerClass  sig=csp  renamed_refs=5  residual=IsAllocated ====
unsigned int * CaptureManagerClass::Constructor_473140(int a2, int a3)
{
{
    this->vtable2 = 0;
    this->vtable3 = a2;
    this->vtable4 = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_ControlNode;
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
}

// ==== BACKFILL 0x00473430  LinkedList::Pop  cls=LinkedList  sig=csp  renamed_refs=0  residual=- ====
int LinkedList::Pop()
{
{
    int result;
    result = this->Tail;
    if ( result )
  {
    this->Tail = *(int *)(result + 48);
    *(int *)(result + 48) = 0;
    --*(void**)this;
  }
    return result;
}
}

// ==== BACKFILL 0x00473450  CCINIClass::GetDB  cls=CCINIClass  sig=csp  renamed_refs=0  residual=- ====
int CCINIClass::GetDB()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CCINIClass_GetDB(_DWORD *this)
{
  return *(this + 1); /*0x473453*/
}
}

// ==== BACKFILL 0x00473460  HouseClass::SumPowerDrain  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int HouseClass::SumPowerDrain() {
{
    int v1;
    int *v2;
    int result;
    int *v4;
    int i;
    int v6;
    int v7;
    v1 = *(void**)this;
    v2 = (int *)*(this + 1);
    result = 0;
    v7 = 0;
    if ( v2 )
  {
    v4 = v2;
    for ( i = 0; i < v1; v7 = result )
    {
    if ( !v4 )
    break;
    v6 = (*(int (__thiscall **)(int *))(*v4 + 132))(v4);
    result = Math::RoundToInt((double)v7 + *(double *)(v6 + 896));
    v4 = (int *)v4[12];
    ++i;
    }
  }
    return result;
}
} }

// ==== BACKFILL 0x004734B0  FootClass::updateMovementAnimation  cls=FootClass  sig=csp  renamed_refs=2  residual=- ====
namespace ra2 { namespace game { void FootClass::updateMovementAnimation(int aP1) {
{
      TimerStruct *v2;
      TimerStruct *StartTime;

      if ( aP1 )
      {
        v2 = (TimerStruct *)this->vtable2;
        if ( v2 )
        {
          StartTime = (TimerStruct *)v2[4].StartTime;
          if ( v2 == aP1 )
          {
            this->vtable2 = StartTime;
            --*this;
          }
          else if ( StartTime )
          {
            while ( aP1 != StartTime )
            {
              v2 = StartTime;
              StartTime = (TimerStruct *)StartTime[4].StartTime;
              if ( !StartTime )
                return;
            }
            v2[4].StartTime = *(_DWORD *)(v2[4].StartTime + 48);
            --*this;
          }
        }
      }
}
} } }

// ==== BACKFILL 0x00473750  sub_473750  cls=CarryoverClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_473750::sub_473750(unsigned int * a2)
{
{
    int *v3;
    int v4;
    int v5;
    int v6;
    int v7;
    v3 = a2;
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 0;
    this->M20 = 0;
    this->M22 = 0;
    this->M24 = 0;
    this->M28 = -1;
    *(void**)this = &vt_CarryoverClass;
    if ( v3 )
  {
    v4 = (*(int (__thiscall **)(int *))(*v3 + 44))(v3);
    this->M12 = v4;
    v5 = v4 - 1;
    if ( !v5 || (v6 = v5 - 5) == 0 || v6 == 9 )
    {
    v7 = (*(int (__thiscall **)(int *))(*v3 + 132))(v3);
    this->M16 = (*(int (__thiscall **)(int))(*(int *)(v7) + 64))(v7);
    }
    this->M28 = *(int *)(*(int *)(v3[135] + 52) + 184);
    this->M24 = v3[27];
    this->M20 = *(int *)(*(int (__thiscall **)(int *, int **))(*v3 + 440))(v3, &a2);
  }
    return this;
}
}

// ==== BACKFILL 0x00473960  sub_473960  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * sub_473960(unsigned int a1)
{
{
    if ( a1 >= 0xB )
    return g_Str__none_;
    else
    return DataGlobal_81B7CC[2 * a1];
}
}

// ==== BACKFILL 0x00473A30  CCFileClass::Construct2  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* CCFileClass::Construct2(void* a1) {
{
      char *v3;

      BufferIOFile::Init(this);
      Buffer::Init(this + 22, 0, 0);
      this->q064 = 0;
      *this = &vt_CCFileClass;
      this->q068 = 0;
      v3 = String::GetOrEmpty_Alt(a2);
      this->q068 = 0;
      FileClass::OpenWithCDSearch(this, (IUnknown *)v3);
      return (CCFileClass *)this;
}
} }

// ==== BACKFILL 0x00473A80  CCFileClass::Construct3  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CCFileClass::Construct3() {
{
      BufferIOFile::Init((_BYTE *)this);
      Buffer::Init((_DWORD *)(this + 88), 0, 0);
      this->q064 = 0;
      *(_DWORD *)this = &vt_CCFileClass;
      this->q068 = 0;
      return this;
}
} }

// ==== BACKFILL 0x00473BA0  BufferIOFileClass::Seek  cls=CCFileClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int BufferIOFileClass::Seek() {
{
      int v3;
      bool v4;
      int v5;
      int result;

      if ( !this->FileBuffer )
        return BufferIOFileClass::SeekInternal(lDistanceToMove, dwMoveMethod);
      if ( dwMoveMethod )
      {
        if ( dwMoveMethod == 2 )
          this->q064 = this->q05C;
      }
      else
      {
        this->q064 = 0;
      }
      v3 = this->q064;
      v4 = lDistanceToMove + v3 < 0;
      v5 = lDistanceToMove + v3;
      this->q064 = v5;
      result = v4 ? 0 : v5;
      this->q064 = result;
      if ( result > this->q05C )
        result = this->q05C;
      this->q064 = result;
      return result;
}
} }

// ==== BACKFILL 0x00473CD0  CCFileClass::Destru_vt06  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool CCFileClass::Destru_vt06() {
{
    return this->FileBuffer || BufferIOFileClass::Read(this);
}
} }

// ==== BACKFILL 0x00473E50  CCFileClass::Destru_vt14  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CCFileClass::Destru_vt14() {
{
    int DosTimestamp;
    const char *v3;
    char *v4;
    int v5;
    int v7;
    int v8[22];
    int v9[3];
    int v10;
    int v11;
    v7 = 0;
    DosTimestamp = FileClass::GetDosTimestamp(this);
    if ( DosTimestamp )
    return DosTimestamp;
    v3 = (const char *)this->vt004();
    if ( !LookupFileInfoCache(v3, 0, &v7, 0, 0) )
    return DosTimestamp;
    v4 = *(char **)(v7 + 12);
    BufferIOFile::Init(v8);
    Buffer::Init(v9, 0, 0);
    v10 = 0;
    v8[0] = &vt_CCFileClass;
    v11 = 0;
    FileClass::OpenWithCDSearch(v8, v4);
    v5 = (*(int (__thiscall **)(int *))(v8[0] + 56))(v8);
    v8[0] = &vt_CCFileClass;
    v10 = 0;
    Vector::Clear((int)v9);
    v8[0] = &vt_CDFileClass;
    BufferIOFileClass::Dtor(v8);
    return v5;
}
}
}

// ==== BACKFILL 0x00473F00  CCFileClass::Destru_vt15  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CCFileClass::Destru_vt15(int a1) {
{
    char v3;
    const char *v4;
    char *v5;
    int v7;
    int v8[22];
    int v9[3];
    int v10;
    int v11;
    v7 = 0;
    v3 = FileClass::SetTime(this, wFatTime);
    if ( !v3 )
  {
    v4 = (const char *)this->vt004();
    if ( LookupFileInfoCache(v4, 0, &v7, 0, 0) )
    {
    v5 = *(char **)(v7 + 12);
    BufferIOFile::Init(v8);
    Buffer::Init(v9, 0, 0);
    v10 = 0;
    v8[0] = &vt_CCFileClass;
    v11 = 0;
    FileClass::OpenWithCDSearch(v8, v5);
    v3 = (*(int (__thiscall **)(int *, int))(v8[0] + 60))(v8, wFatTime);
    v8[0] = &vt_CCFileClass;
    v10 = 0;
    Vector::Clear((int)v9);
    v8[0] = &vt_CDFileClass;
    BufferIOFileClass::Dtor(v8);
    }
  }
    return v3;
}
} }

// ==== BACKFILL 0x00474320  CCINIClass::LoadAndVerifyDigest  cls=CCINIClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { int CCINIClass::LoadAndVerifyDigest(int a1, int a2, int a3) {
{
      int File;
      int Base64Data;
      int result;
      CCINIClass v8;
      int v9[5];

      File = INIClass::LoadFile((_DWORD *)this, (CCINIClass *)aP1, (INIClass *)aP2);
      this->ownsFile = 0;
      if ( !File || !a3 )
        return File;
      Base64Data = INIClass::GetBase64Data((void *)this, g_INI_Key_Digest.__pad_0, (int)v9, 0x14u);
      if ( !Base64Data )
        return 2;
      if ( Base64Data <= 0 )
        return File;
      INIClass::ClearSection(this, &g_INI_Key_Digest, 0);
      memset(v8.headNode, 0, 9);
      v8.unknown38 = 0;
      v8.INIClass_field_3C = 0;
      *(_DWORD *)&v8.__pad_20[4] = 1732584193;
      *(_DWORD *)&v8.__pad_20[8] = -271733879;
      v8.INIClass_field_2C = -1732584194;
      v8.unknown30 = 271733878;
      *(_DWORD *)&v8.needsSave_flag = -1009589776;
      *(_DWORD *)v8.__pad_0 = &vt_SHAPipe;
      INIClass::WriteToString((_DWORD *)this, &v8);
      SHA1::ComputeThunk(&v8, (ObjectClass *)(this + 65));
      this->ownsFile = 1;
      Pipe::Dtor((int *)v8.__pad_0);
      result = 2;
      if ( !memcmp(v9, (const void *)(this + 65), 0x14u) )
        return File;
      return result;
}
} }

// ==== BACKFILL 0x00474540  sub_474540  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
CCINIClass * E4Recv_474540::sub_474540(CCINIClass * aP1, char a3)
{
{
    CCINIClass *v5;
    CCINIClass v6;
    if ( !a3 )
    return (CCINIClass *)INIClass::WriteToString((int *)this, aP1);
    INIClass::ClearSection(this, &g_INI_Key_Digest, 0);
    memset(v6.headNode, 0, 9);
    v6.unknown38 = 0;
    v6.INIClass_field_3C = 0;
    *(int *)&v6.__pad_20[4] = 1732584193;
    *(int *)&v6.__pad_20[8] = -271733879;
    v6.INIClass_field_2C = -1732584194;
    v6.unknown30 = 271733878;
    *(int *)&v6.needsSave_flag = -1009589776;
    *(int *)v6.__pad_0 = &vt_SHAPipe;
    INIClass::WriteToString((int *)this, &v6);
    SHA1::ComputeThunk(&v6, (ObjectClass *)(this + 65));
    this->M64 = 1;
    Pipe::Dtor((int *)v6.__pad_0);
    INIClass::ReadBase64Data( (char *)this, (unsigned char *)&g_INI_Key_Digest, (ObjectClass *)(this + 65), (ObjectClass *)0x14);
    v5 = (CCINIClass *)INIClass::WriteToString((int *)this, aP1);
    INIClass::ClearSection(this, &g_INI_Key_Digest, 0);
    return v5;
}
}

// ==== BACKFILL 0x00474620  INIClass::ReadCoord  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
INIClass * INIClass::ReadCoord(double aP1, int a2, INIClass * aP2, int a4)
{
{
    int v4;
    double Double_Overwrite;
    Double_Overwrite = INIClass::ReadDouble_Overwrite(v4, (INIClass *)LODWORD(aP1), (unsigned char *)HIDWORD(aP1), 0);
    if ( Double_Overwrite == -1.0 )
    return (INIClass *)a2;
    else
    return (INIClass *)Math::RoundToInt(Double_Overwrite * 256.0);
}
}

// ==== BACKFILL 0x00474660  sub_474660  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_474660::sub_474660(unsigned char * Block, char * a3, int a4)
{
{
    return INIClass::SetDouble(this, Block, a3, (double)a4 * 0.00390625);
}
}

// ==== BACKFILL 0x00474690  ObjectTypeClass::ReadBool  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectTypeClass::ReadBool(INIClass * Block, INIClass * aP2, int a4)
{
{
    char Buffer[32];
    sprintf(Buffer, g_Str_Trace__d, 360 * a4 / 256);
    return INIClass::SetString(this, Block, aP2, (INIClass *)Buffer);
}
}

// ==== BACKFILL 0x004746E0  ObjectTypeClass::ReadPrerequisite  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::ReadPrerequisite(unsigned char * a2, unsigned char * a3, int a4)
{
{
    char String[32];
    if ( INIClass::GetString(this, a2, a3, &g_INI_DefaultBuffer, String, 32) )
    return (atoi(String) << 8) / 360;
    else
    return a4;
}
}

// ==== BACKFILL 0x00474740  ObjectTypeClass::ReadSoundList  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char ** ObjectTypeClass::ReadSoundList(unsigned char ** a2, unsigned char * a3, unsigned char * a4, unsigned char ** a5)
{
{
    char Buffer[64];
    if ( INIClass::GetString(this, a3, a4, &g_INI_DefaultBuffer, Buffer, 64) )
  {
    sscanf(Buffer, g_Str_Trace__d__d, &a4, &a3);
    HIWORD(a4) = (short)a3;
    *a2 = a4;
    return a2;
  }
    else
  {
    *a2 = *a5;
    return a2;
  }
}
}

// ==== BACKFILL 0x004747C0  ObjectTypeClass::ReadBool2  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectTypeClass::ReadBool2(INIClass * Block, INIClass * aP2, short * a4)
{
{
    INIClass Buffer;
    sprintf(Buffer.__pad_0, g_INI_Key_Digest.__pad_20, *a4, *((int*)(a4) + 1));
    return INIClass::SetString(this, Block, aP2, &Buffer);
}
}

// ==== BACKFILL 0x004748A0  INIClass::GetPipIdx  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::GetPipIdx(void* a1, void* a2, int a3) {
{
    int v4;
    ObjectClass *v5;
    char Destination[32];
    INIClass::GetString(this, (INIClass *)a1, a2, *(&DataGlobal_81B958 + 2 * (int)a3), (INIClass *)Destination, 32);
    v4 = 0;
    v5 = (ObjectClass *)&DataGlobal_81B958;
    while ( _strcmpi(Destination, *(char **)v5->__pad_0) )
  {
    v5 = (ObjectClass *)((char *)(v5) + 8);
    ++v4;
    if ( (int)v5 >= (int)&DataGlobal_81B9B0 )
    return 1;
  }
    return DataGlobal_81B95C[2 * v4];
}
} }

// ==== BACKFILL 0x004749E0  ObjectTypeClass::loadTypeMember_54749E0  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_54749E0(CCINIClass * aP1, unsigned char * a2, unsigned int a4)
{
{
    INIClass *v5;
    char Destination[32];
    v5 = (INIClass *)sub_473960(a4);
    INIClass::GetString(this, (INIClass *)aP1, a2, v5, (INIClass *)Destination, 32);
    return ObjectTypeClass::loadTypeMember_473980(Destination);
}
}

// ==== BACKFILL 0x00474A90  BuildingTypeClass::FindAnimByName  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::FindAnimByName(INIClass * aP1, unsigned char * a2, AnimTypeClass * aP3)
{
{
    int v4;
    IUnknown *v5;
    bool v6;
    char Destination[32];
    INIClass::GetString( this, aP1, a2, *(INIClass **)(*(int *)(DataGlobal_B05488.field_4C + 4 * (int)aP3) + 772), (INIClass *)Destination, 32);
    v4 = 0;
    if ( *(int *)DataGlobal_B05488.__pad_58 <= 0 )
    return (int)aP3->__pad_0;
    v5 = (IUnknown *)DataGlobal_B05488.field_4C;
    while ( 1 )
  {
    v6 = _strcmpi(*(const void **)(*(&v5->field_0 + v4) + 772), Destination) == 0;
    v5 = (IUnknown *)DataGlobal_B05488.field_4C;
    if ( v6 && *(int *)(*(int *)(DataGlobal_B05488.field_4C + 4 * v4) + 784) != 1 )
    break;
    if ( ++v4 >= *(int *)DataGlobal_B05488.__pad_58 )
    return (int)aP3->__pad_0;
  }
    return v4;
}
}

// ==== BACKFILL 0x00474B20  HouseClass::WriteBuildingTypeNameToINI  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int HouseClass::WriteBuildingTypeNameToINI(void* aP1, void* a2, int a4) {
{
      return INIClass::SetString(this, aP1, (INIClass *)a2, *(INIClass **)(*((_DWORD *)BuildingTypeClass_AnimTable + a4) + 772));
}
} }

// ==== BACKFILL 0x00474B50  INIClass::GetCoord  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::GetCoord(int a1, void* a2, void* a3, void* a4) {
{
    char v7;
    short v8;
    char v9;
    char v10;
    INIClass Buffer;
    INIClass Destination;
    sprintf( Buffer.__pad_0, (const char *const)&DataGlobal_818994.sectionCount, LOBYTE(a4->Color_field_00), BYTE1(a4->Color_field_00), BYTE2(a4->Color_field_00));
    if ( INIClass::GetString(this, a2, (unsigned char *)a3, &Buffer, &Destination, 64) )
  {
    sscanf(Destination.__pad_0, (const char *const)&DataGlobal_818994.sectionCount, &v8, &v10, &v9);
    HIBYTE(v8) = v10;
    v7 = v9;
    *(short *)a1->__pad_0 = v8;
    a1->__pad_0[2] = v7;
    return (int)a1->__pad_0;
  }
    else
  {
    *(short *)a1->__pad_0 = a4->Color_field_00;
    a1->__pad_0[2] = BYTE2(a4->Color_field_00);
    return (int)a1->__pad_0;
  }
}
} }

// ==== BACKFILL 0x00474C20  INIEntry::Write3Bytes  cls=INIEntry  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIEntry::Write3Bytes(void* a1, void* a2, void* a3) {
{
    INIClass Buffer;
    sprintf(Buffer.__pad_0, (const char *const)&DataGlobal_818994.sectionCount, *a4, *((int*)(a4) + 1), *((int*)(a4) + 2));
    return INIClass::SetString(this, Block, aP2, &Buffer);
}
} }

// ==== BACKFILL 0x00474C70  INIEntry::ReadColor  cls=INIEntry  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIEntry::ReadColor(int a1, void* a2, void* a3, void* a4) {
{
    char v7;
    int v8;
    int v9;
    int v10;
    INIClass Buffer;
    INIClass Destination;
    sprintf(Buffer.__pad_0, (const char *const)&DataGlobal_818994.sectionCount, *a4, *((int*)(a4) + 1), *((int*)(a4) + 2));
    if ( INIClass::GetString(this, (INIClass *)a2, a3, &Buffer, &Destination, 64) )
  {
    v8 = 0;
    v10 = 0;
    v9 = 0;
    sscanf(Destination.__pad_0, (const char *const)&DataGlobal_818994.sectionCount, &v8, &v10, &v9);
    BYTE1(v8) = v10;
    v7 = v9;
    *(short *)a2 = v8;
    *(char *)(a2 + 2) = v7;
    return a2;
  }
    else
  {
    *(short *)a2 = *(short *)a4;
    *(char *)(a2 + 2) = *((int*)(a4) + 2);
    return a2;
  }
}
} }

// ==== BACKFILL 0x00474D50  ObjectTypeClass::ReadString  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectTypeClass::ReadString(INIClass * Block, INIClass * aP2, unsigned char * a4)
{
{
    INIClass Buffer;
    sprintf(Buffer.__pad_0, (const char *const)&DataGlobal_818994.sectionCount, *a4, *((int*)(a4) + 1), *((int*)(a4) + 2));
    return INIClass::SetString(this, Block, aP2, &Buffer);
}
}

// ==== BACKFILL 0x00474DA0  INIClass::LookupEnum  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::LookupEnum(void* a1, void* a2, int a3) {
{
    int v4;
    ObjectClass *v5;
    char Destination[32];
    INIClass::GetString(this, (INIClass *)a1, a2, *(&DataGlobal_81B9D8 + 2 * (int)a3), (INIClass *)Destination, 32);
    v4 = 0;
    v5 = (ObjectClass *)&DataGlobal_81B9D8;
    while ( _strcmpi(Destination, *(const void **)v5->__pad_0) )
  {
    v5 = (ObjectClass *)((char *)(v5) + 8);
    ++v4;
    if ( (int)v5 >= (int)&DataGlobal_81BA88 )
    return 0;
  }
    return `typeinfo for'x1[2 * v4];
}
} }

// ==== BACKFILL 0x00474E40  ObjectTypeClass::loadTypeMember_5474E40  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_5474E40(INIClass * aP1, unsigned char * a2, int a4)
{
{
    int v4;
    ObjectClass *v5;
    char Destination[32];
    INIClass::GetString(this, aP1, a2, *(&DataGlobal_81BA88 + a4), (INIClass *)Destination, 32);
    v4 = 0;
    v5 = (ObjectClass *)&DataGlobal_81BA88;
    while ( _strcmpi(Destination, *(char **)v5->__pad_0) )
  {
    v5 = (ObjectClass *)((char *)(v5) + 4);
    ++v4;
    if ( (int)v5 >= (int)&DataGlobal_81BABC )
    return -1;
  }
    return v4;
}
}

// ==== BACKFILL 0x00474EE0  SuperWeaponTypeClass::loadSWProperties  cls=SuperWeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SuperWeaponTypeClass::loadSWProperties(CCINIClass * aP1, unsigned char * a2, int a4)
{
{
    int v4;
    ObjectClass *v5;
    char Destination[32];
    INIClass::GetString(this, (INIClass *)aP1, a2, *(&DataGlobal_7E4C50 + a4), (INIClass *)Destination, 32);
    v4 = 0;
    v5 = (ObjectClass *)&DataGlobal_7E4C50;
    while ( _strcmpi(Destination, *(char **)v5->__pad_0) )
  {
    v5 = (ObjectClass *)((char *)(v5) + 4);
    ++v4;
    if ( (int)v5 >= (int)&DataGlobal_7E4D74 )
    return 0;
  }
    return v4;
}
}

// ==== BACKFILL 0x00474FA0  ObjectTypeClass::ReadDouble  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::ReadDouble(unsigned char * a2, unsigned char * a3, int a4)
{
{
    char Destination[100];
    INIClass::GetString(this, a2, a3, &g_INI_DefaultBuffer, Destination, 100);
    if ( strlen(Destination) )
    return VocClass::FindByName(Destination);
    else
    return a4;
}
}

// ==== BACKFILL 0x00474FF0  ObjectTypeClass::ReadDouble2  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::ReadDouble2(INIClass * aP1, unsigned char * a2, void * a4)
{
{
    INIClass *Name;
    char Destination[32];
    Name = (INIClass *)AbstractType::FindName(a4);
    INIClass::GetString(this, aP1, a2, Name, (INIClass *)Destination, 32);
    return StringTable::Lookup(Destination);
}
}

// ==== BACKFILL 0x00475060  ObjectTypeClass::ReadBool3  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::ReadBool3(INIClass * aP1, unsigned char * a2, void * a4)
{
{
    INIClass *v5;
    char Destination[32];
    v5 = (INIClass *)sub_45DD20(a4);
    INIClass::GetString(this, aP1, a2, v5, (INIClass *)Destination, 32);
    return sub_45DD50(Destination);
}
}

// ==== BACKFILL 0x004750D0  INIClass::ParseFlagList  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::ParseFlagList(void* a1, void* a2, int a3) {
{
    char *i;
    INIClass String[2];
    if ( INIClass::GetString(this, (INIClass *)aP1, a2, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], String, 128) )
  {
    a4 = 0;
    for ( i = strtok(String[0].__pad_0, Delimiter.__pad_0); i; i = strtok(0, Delimiter.__pad_0) )
    a4 |= COMStub_48DEB0(i);
  }
    return a4;
}
} }

// ==== BACKFILL 0x00475150  BulletTypeClass::ReadTrajectoryFlags  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
char BulletTypeClass::ReadTrajectoryFlags(unsigned char * Block, char * a3, int a4)
{
{
    char v4;
    char *v5;
    int v6;
    int v8;
    char Source[128];
    v4 = 0;
    Source[0] = 0;
    if ( !a4 || g_SuperWeaponTypeArray <= 0 )
    return 1;
    v5 = (char *)g_SuperWeaponTypeCount;
    v8 = g_SuperWeaponTypeArray;
    do
  {
    v6 = *(int *)v5;
    if ( ((1 << *(int *)(*(int *)(v5) + 184)) & a4) != 0 )
    {
    if ( v4 )
    strcat(Source, Delimiter);
    strcat(Source, (const char *)(v6 + 36));
    v4 = Source[0];
    }
    v5 += 4;
    --v8;
  }
    while ( v8 );
    if ( v4 )
    return INIClass::SetString(this, Block, a3, Source);
    else
    return 1;
}
}

// ==== BACKFILL 0x00475260  HouseClass::ReadHouseNamesToBitmask  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int HouseClass::ReadHouseNamesToBitmask(void* a1, void* a2, int a3) {
{
    char *i;
    INIClass String[2];
    if ( INIClass::GetString(this, (INIClass *)aP1, a2, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], String, 128) )
  {
    a4 = 0;
    for ( i = strtok(String[0].__pad_0, Delimiter.__pad_0); i; i = strtok(0, Delimiter.__pad_0) )
    a4 |= 1 << HouseClass::FindByName(i);
  }
    return a4;
}
} }

// ==== BACKFILL 0x004752E0  HouseClass::WriteHouseListToINI  cls=HouseClass  sig=csp  renamed_refs=37  residual=IsAllocated,q00D ====
namespace gamemd { int HouseClass::WriteHouseListToINI(void* aP1, void* a2, int a4) {
{
    char v4;
    HouseClass *v5;
    int v6;
    IUnknown *v8;
    INIClass Source[2];
    v4 = 0;
    Source[0].__pad_0[0] = 0;
    if ( !a4 || (int)HouseClass_Count <= 0 )
    return 1;
    v5 = HouseClass_Array;
    v8 = HouseClass_Count;
    do
  {
    v6 = *(int *)v5->__pad_0;
    if ( ((1 << *(int *)(*(int *)v5->__pad_0 + 48)) & a4) != 0 )
    {
    if ( v4 )
    strcat(Source[0].__pad_0, Delimiter.__pad_0);
    strcat(Source[0].__pad_0, (const char *)(v6 + 90100));
    v4 = Source[0].__pad_0[0];
    }
    v5 = (HouseClass *)((char *)(v5) + 4);
    v8 = (IUnknown *)((char *)v8 - 1);
  }
    while ( v8 );
    if ( v4 )
    return INIClass::SetString(this, (INIClass *)aP1, (INIClass *)a2, Source);
    else
    return 1;
}
}
// 0x475980
namespace gamemd { int HouseClass::ReadIntFromINI(void* a1, void* a2, int a3) {
{
    char Destination[128];
    if ( INIClass::GetString(this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) )
    return HouseClass::FindHouseIndexByName(Destination);
    else
    return a4;
}
} }

// 0x4759D0
namespace gamemd { int HouseClass::updateBuildingProduction(void* a1, void* a2, int a3) {
{
    return INIClass::SetString(this, aP1, (INIClass *)a2, *(&DataGlobal_7E1B60 + (int)aP3));
}
} }

// 0x483410
namespace gamemd { int HouseClass::MarkCellBuildable(int a1) {
{
      int v3;

      if ( (this->q140 & 0x10) != 0 || !Cell::IsBuildable(this, 1, 0, 0, -1, 0, -1, 1) )
        return 0;
      v3 = this->q140;
      LOBYTE(v3) = v3 | 0x10;
      this->q140 = v3;
      this->unitRepairStations = a2;
      return 1;
}
} }

// 0x483460
namespace gamemd { int HouseClass::checkAutoProduction() {
{
      int v1;

      v1 = this->q140;
      if ( (v1 & 0x10) == 0 )
        return 0;
      LOBYTE(v1) = v1 & 0xEF;
      this->unitRepairStations = -1;
      this->q140 = v1;
      return 1;
}
} }

// 0x4870F0
namespace gamemd { bool HouseClass::HasType() {
{
    return *(this + a2 + 86) > 0;
}
} }

// 0x48DB80
namespace gamemd { int HouseClass::FindHouseIndexByName() {
{
    int v2;
    const void **v3;
    if ( !this )
    return -1;
    v2 = 0;
    v3 = (const void **)&DataGlobal_7E1B60;
    while ( _strcmpi(*v3, this) )
  {
    ++v3;
    ++v2;
    if ( (int)v3 >= (int)&DataGlobal_7E1B74 )
    return -1;
  }
    return v2;
}
}
// 0x49F9B0
namespace gamemd { void* CounterClass::Construct() {
{
      this->Items = 0;
      this->Capacity = 0;
      this->vtable4 = 1;
      this->q00D = 0;
      *this = &CounterClass::`vftable';
      this->Count = 0;
      return this;
}
} }

// 0x49FA70
namespace gamemd { int CounterClass::Decrement(int a1) {
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CounterClass_Decrement(_DWORD *this, int a2)
{
  int v3; // edi
  int i; // eax
  int v5; // ecx

  v3 = *(this + 2); /*0x49fa79*/
  if ( a2 < v3 ) /*0x49fa7e*/
  {
LABEL_5:
    --*(_DWORD *)(*(this + 1) + 4 * a2); /*0x49faad*/
    v5 = *(this + 1); /*0x49fabd*/
    --*(this + 4); /*0x49fac1*/
    return *(_DWORD *)(v5 + 4 * a2); /*0x49fac9*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2 + 10, 0) ) /*0x49fa8a*/
  {
    for ( i = v3; i < *(this + 2); *(_DWORD *)(*(this + 1) + 4 * i - 4) = 0 ) /*0x49fa98*/
      ++i; /*0x49fa9d*/
    goto LABEL_5; /*0x49faab*/
  }
  return 0; /*0x49fab0*/
}
} }

// 0x49FB40
namespace gamemd { int CounterClass::ddtor() {
    int result;
    for ( result = 0; result < this->Capacity; this->Items[result - 1] = 0 )
        ++result;
    this->Count = 0;
    return result;
} }

// 0x49FBE0
namespace gamemd { int CounterClass::Load(int a1) {
{
      AbstractClass *v3;
      int result;
      int v5;

      if ( this )
      {
        this->Items = 0;
        this->Capacity = 0;
        this->vtable4 = 1;
        this->q00D = 0;
        *this = &CounterClass::`vftable';
        this->Count = 0;
      }
      v3 = aP1;
      result = (*(int (__stdcall **)(AbstractClass *, _DWORD *, int, _DWORD))(*(_DWORD *)aP1->__pad_0 + 12))(
                 aP1,
                 this + 4,
                 4,
                 0);
      if ( result >= 0 )
      {
        result = (*(int (__stdcall **)(AbstractClass *, AbstractClass **, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 12))(
                   v3,
                   &aP1,
                   4,
                   0);
        if ( result >= 0 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, AbstractClass *, _DWORD))(*this + 8))(this, aP1, 0) )
          {
            v5 = 0;
            if ( (int)aP1 <= 0 )
            {
              return 0;
            }
            else
            {
              while ( 1 )
              {
                result = (*(int (__stdcall **)(AbstractClass *, int, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 12))(
                           v3,
                           this->Items + 4 * v5,
                           4,
                           0);
                if ( result < 0 )
                  break;
                if ( ++v5 >= (int)aP1 )
                  return 0;
              }
            }
          }
          else
          {
            return 8;
          }
        }
      }
      return result;
}
} }

// 0x49FCE0
namespace gamemd { void* CounterClass::QueryInterface(int a2) {
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_int;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (CounterClass *)this;
}
} }

// 0x4B69B0
namespace gamemd { void* HouseClass::initDropshipData() {
{
    *(void**)this = g_CurrentFrame;
    this->vtable3 = 0x7FFFFFFF;
    this->vtable4 = 0;
    this->uniqueId = 0;
    this->vtable6 = 0;
    return this;
}
} }

// 0x4B6BB0
namespace gamemd { int HouseClass::RegisterForSwizzleTracking() {
{
    int v2;
    int result;
    int *v4;
    v2 = 0;
    result = this->uniqueId;
    if ( result > 0 )
  {
    v4 = this + 5;
    do
    {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4);
    result = this->uniqueId;
    ++v2;
    ++v4;
    }
    while ( v2 < result );
  }
    return result;
}
} }

// 0x4CA6E0
namespace gamemd { int HouseClass::UpdateTeamProductionSpeed() {
{
      int result;
      int i;
      _DWORD *v4;
      _DWORD *v5;
      int v6;
      int v7;

      result = g_TeamTypeCapacity;
      for ( i = 0; i < g_TeamTypeCapacity; ++i )
      {
        v4 = (_DWORD *)*((_DWORD *)g_TeamTypeCount + i);
        if ( (void *)v4[27] == this )
        {
          v5 = (_DWORD *)v4[22];
          v6 = 0;
          if ( v5 )
            v6 = HouseClass::CalcProductionSpeed(v5);
          v7 = v6 / 54;
          if ( v7 >= 1 )
          {
            if ( v7 > 255 )
              v7 = 255;
          }
          else
          {
            v7 = 1;
          }
          if ( v7 != v4[14] )
            v4[14] = v7;
        }
        result = g_TeamTypeCapacity;
      }
      return result;
}
} }

// 0x4E8290
namespace gamemd { void HouseClass::COMStub_3() {
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->uniqueId = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->vtable2 = 0;
  }
    this->IsAllocated = 0;
    this->vtable3 = 0;
}
} }

// 0x4E82C0
namespace gamemd { int HouseClass::COMStub_5(int a1) {
{
      if ( this->vtable4 )
        return (unsigned int)(a2 - this->vtable2) >> 2;
      else
        return 0;
}
} }

// 0x4E82E0
namespace gamemd { int HouseClass::COMStub_6(int a1) {
{
    return *(int *)(*(this + 1) + 4 * a2);
}
} }

// 0x4E9200
namespace gamemd { int HouseClass::COMStub_1(int a1) {
{
      int v2;
      int v3;
      _DWORD *v4;
      int v5;

      v2 = this->vtable3;
      if ( v2 == *(_DWORD *)(a2 + 8) )
      {
        v3 = 0;
        if ( v2 <= 0 )
          return 1;
        v4 = (_DWORD *)this->vtable2;
        v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4;
        while ( *v4 == *(_DWORD *)((char *)v4 + v5) )
        {
          ++v3;
          ++v4;
          if ( v3 >= v2 )
            return 1;
        }
      }
      return 0;
}
} }

// 0x4E9380
namespace gamemd { int HouseClass::COMStub_2(int a1, void* a2) {
{
      _DWORD *v4;
      int v5;
      int i;
      int v7;

      if ( a2 )
      {
        this->vtable4 = 0;
        if ( a3 )
          v4 = a3;
        else
          v4 = __2_YAPAXI_Z(4 * a2);
        this->vtable4 = 1;
        if ( !v4 )
          return 0;
        if ( this->vtable2 )
        {
          v5 = this->vtable3;
          if ( a2 < v5 )
            v5 = a2;
          for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->vtable2 + 4 * i - 4) )
            ++i;
          if ( this->IsAllocated )
          {
            __3_YAXPAX_Z(*((void **)this + 1));
            this->vtable2 = 0;
          }
        }
        this->vtable2 = v4;
        this->vtable3 = a2;
        this->IsAllocated = a3 == 0;
      }
      else
      {
        this->vt3();
      }
      v7 = this->vtable3;
      if ( v7 < this->uniqueId )
        this->uniqueId = v7;
      return 1;
}
} }

// 0x4E9430
namespace gamemd { int HouseClass::COMStub_4(void* a1) {
{
      int v2;
      int result;
      _DWORD *i;

      v2 = this->uniqueId;
      result = 0;
      if ( v2 <= 0 )
        return -1;
      for ( i = (_DWORD *)this->vtable2; *i != *a2; ++i )
      {
        if ( ++result >= v2 )
          return -1;
      }
      return result;
}
} }

// 0x4EF530
namespace gamemd { void* HouseClass::COMStub_0(int a2) {
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TagClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
} }

// 0x4F21A0
namespace gamemd { void HouseClass::processTargetSelection() {
{
      GraphicMenu *v2;
      void (__thiscall ***v3)(_DWORD, int); // ecx
      void *v4;
      void **v5;
      GraphicMenu *v6;
      int v7;

      v2 = this + 22;
      this->vfptr = &vt_GraphicMenu;
      v6 = this + 22;
      v7 = 0;
      v5 = &vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem;
      if ( Map::CanScroll(&v5) )
      {
        do
        {
          v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)v6[1].vfptr + v7);
          if ( v3 )
            (**v3)(v3, 1);
          ((void (__thiscall *)(void ***))v5[2])(&v5);
        }
        while ( ((unsigned __int8 (__thiscall *)(void ***))v5[1])(&v5) );
      }
      (*(void (__thiscall **)(int *, _DWORD))(*DSurface_Alternate + 24))(DSurface_Alternate, 0);
      (*(void (__thiscall **)(IUnknown *, _DWORD))(g_DSurface_Hidden->field_0 + 24))(g_DSurface_Hidden, 0);
      (*(void (__thiscall **)(int, IUnknown *, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 4))(
        g_DSurface_Primary,
        g_DSurface_Hidden,
        0,
        1);
      v4 = (void *)this->grinders;
      v2->vfptr = &vt_VectorClass_GraphicMenuItem;
      if ( v4 && this->q065 )
      {
        __3_YAXPAX_Z(v4);
        this->grinders = 0;
      }
      this->q065 = 0;
      this->grindersCount = 0;
      DeleteAndZero((void **)this + 20);
      DeleteAndZero((void **)this + 19);
      MSEngine::Destruct((_DWORD *)this + 1);
}
} }

// 0x4F2810
namespace gamemd { void* HouseClass::vt_placeholder_03(int a2) {
{
    HashTable::DestroyHashTableINIClass(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (HouseClass *)this;
}
} }

// 0x4F2830
namespace gamemd { void* HouseClass::vt_placeholder_04(int a2) {
{
    HouseClass::processTargetSelection(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (HouseClass *)this;
}
} }

// 0x4F2850
namespace gamemd { void HouseClass::vt_placeholder_05() {
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->uniqueId = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->vtable2 = 0;
  }
    this->IsAllocated = 0;
    this->vtable3 = 0;
}
} }

// 0x4F2880
namespace gamemd { int HouseClass::vt_placeholder_06(int a1) {
{
      if ( this->vtable4 )
        return (unsigned int)(a2 - this->vtable2) >> 2;
      else
        return 0;
}
} }

// 0x4F2A60
namespace gamemd { int HouseClass::processWaypointPlanning(int a1, void* a2) {
{
      _DWORD *v4;
      int v5;
      int i;
      int v7;

      if ( a2 )
      {
        this->vtable4 = 0;
        if ( a3 )
          v4 = a3;
        else
          v4 = __2_YAPAXI_Z(4 * a2);
        this->vtable4 = 1;
        if ( !v4 )
          return 0;
        if ( this->vtable2 )
        {
          v5 = this->vtable3;
          if ( a2 < v5 )
            v5 = a2;
          for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->vtable2 + 4 * i - 4) )
            ++i;
          if ( this->IsAllocated )
          {
            __3_YAXPAX_Z(*((void **)this + 1));
            this->vtable2 = 0;
          }
        }
        this->vtable2 = v4;
        this->vtable3 = a2;
        this->IsAllocated = a3 == 0;
      }
      else
      {
        this->vt3();
      }
      v7 = this->vtable3;
      if ( v7 < this->uniqueId )
        this->uniqueId = v7;
      return 1;
}
} }

// 0x4F2B10
namespace gamemd { int HouseClass::vt_placeholder_08(void* a1) {
{
      int v2;
      int result;
      _DWORD *i;

      v2 = this->uniqueId;
      result = 0;
      if ( v2 <= 0 )
        return -1;
      for ( i = (_DWORD *)this->vtable2; *i != *a2; ++i )
      {
        if ( ++result >= v2 )
          return -1;
      }
      return result;
}
} }

// 0x4F2BB0
namespace gamemd { void* HouseClass::vt_placeholder_11(int a2) {
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_GraphicMenuItem;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
} }

// 0x4F5190
namespace gamemd { int HouseClass::Constructor(int a1) {
{
      _DWORD *v3;
      int v5;

      AbstractClass::InitVtables((_DWORD *)this, (int)aP1);
      TagClassVector::Construct((_DWORD *)(this + 56), 0, 0);
      *(_DWORD *)(this + 56) = &vt_DynamicVectorClass_TagClass;
      this->buildingsCapacity = 10;
      this->buildingsCount = 0;
      VectorClass::BuildingConstructor((_DWORD *)(this + 80), 0, 0);
      *(_DWORD *)(this + 80) = &vt_DynamicVectorClass_BuildingClass;
      this->grindersCapacity = 10;
      this->grindersCount = 0;
      VectorClass::BuildingConstructor((_DWORD *)(this + 104), 0, 0);
      *(_DWORD *)(this + 104) = &vt_DynamicVectorClass_BuildingClass;
      this->bunkersCapacity = 10;
      this->bunkersCount = 0;
      VectorClass::BuildingConstructor((_DWORD *)(this + 128), 0, 0);
      *(_DWORD *)(this + 128) = &vt_DynamicVectorClass_BuildingClass;
      this->cloningVatsCapacity = 10;
      this->cloningVatsCount = 0;
      VectorClass::BuildingConstructor((_DWORD *)(this + 152), 0, 0);
      *(_DWORD *)(this + 152) = &vt_DynamicVectorClass_BuildingClass;
      this->psychicDetectionCapacity = 10;
      this->psychicDetectionCount = 0;
      VectorClass::BuildingConstructor((_DWORD *)(this + 176), 0, 0);
      *(_DWORD *)(this + 176) = &vt_DynamicVectorClass_BuildingClass;
      this->countWarfactories = 10;
      this->countResourceDestinations = 0;
      VectorClass::BuildingConstructor((_DWORD *)(this + 200), 0, 0);
      *(_DWORD *)(this + 200) = &vt_DynamicVectorClass_BuildingClass;
      this->aiDifficulty = 10;
      this->startingUnitsCapacity = 0;
      VectorClass::BuildingConstructor((_DWORD *)(this + 224), 0, 0);
      *(_DWORD *)(this + 224) = &vt_DynamicVectorClass_BuildingClass;
      this->q0F4 = 10;
      this->airspeedMultiplier = 0;
      VectorClass::BuildingConstructor((_DWORD *)(this + 248), 0, 0);
      *(_DWORD *)(this + 248) = &vt_DynamicVectorClass_BuildingClass;
      this->q10C = 10;
      this->costMultiplier = 0;
      VectorClass::BuildingConstructor((_DWORD *)(this + 272), 0, 0);
      *(_DWORD *)(this + 272) = &vt_DynamicVectorClass_BuildingClass;
      this->q124 = 10;
      this->buildDelay = 0;
      VectorClass::BuildingConstructor((_DWORD *)(this + 296), 0, 0);
      *(_DWORD *)(this + 296) = &vt_DynamicVectorClass_BuildingClass;
      this->q13C = 10;
      this->startingEdge = 0;
      VectorClass::BuildingConstructor((_DWORD *)(this + 320), 0, 0);
      *(_DWORD *)(this + 320) = &vt_DynamicVectorClass_BuildingClass;
      this->q154 = 10;
      this->q150 = 0;
      StartingTechnoVector::Construct((_DWORD *)(this + 364), 0, 0);
      *(_DWORD *)(this + 364) = &DynamicVectorClass<HouseClass::StartingTechnoStruct *>::`vftable';
      this->q180 = 10;
      this->q17C = 0;
      SuperClassVector::Construct((_DWORD *)(this + 596), 0, 0);
      *(_DWORD *)(this + 596) = &vt_DynamicVectorClass_SuperClass;
      this->lastBuiltAircraftType = 10;
      this->lastBuiltInfantryType = 0;
      this->q280 = *(_DWORD *)&g_NetworkPlayerBuffer.__pad_14B0[664];
      this->q288 = 0;
      CounterClass::Construct((_DWORD *)(this + 21760));
      CounterClass::Construct((_DWORD *)(this + 21780));
      CounterClass::Construct((_DWORD *)(this + 21800));
      CounterClass::Construct((_DWORD *)(this + 21820));
      CounterClass::Construct((_DWORD *)(this + 21840));
      CounterClass::Construct((_DWORD *)(this + 21860));
      CounterClass::Construct((_DWORD *)(this + 21880));
      CounterClass::Construct((_DWORD *)(this + 21900));
      CounterClass::Construct((_DWORD *)(this + 21920));
      CounterClass::Construct((_DWORD *)(this + 21940));
      CounterClass::Construct((_DWORD *)(this + 21960));
      CounterClass::Construct((_DWORD *)(this + 21980));
      AngerVector::Construct((_DWORD *)(this + 22020), 0, 0);
      *(_DWORD *)(this + 22020) = &DynamicVectorClass<AngerStruct>::`vftable';
      this->scoutNodesCapacity = 10;
      this->scoutNodesCount = 0;
      ScoutVector::Construct((_DWORD *)(this + 22044), 0, 0);
      *(_DWORD *)(this + 22044) = &DynamicVectorClass<ScoutStruct>::`vftable';
      this->q5630 = 10;
      this->q562C = 0;
      v3 = (_DWORD *)(this + 22128);
      v5 = 3;
      do
      {
        HouseClass::initDropshipData(v3);
        v3 += 11;
        --v5;
      }
      while ( v5 );
      BaseClass::Construct((_DWORD *)(this + 22272), (int)aP1);
      this->waypointPathCapacity = 0;
      this->HouseClass_field_1607C = 0;
      this->unknown16080 = 1;
      this->q16071 = 0;
      *(_DWORD *)(this + 90212) = &vt_DynamicVectorClass_IConnectionPoint;
      this->unused16088 = 10;
      this->unknown16084 = 0;
      *(_DWORD *)this = &HouseClass::`vftable';
      *(_DWORD *)(this + 4) = &HouseClass::`vftable';
      *(_DWORD *)(this + 8) = &HouseClass::`vftable';
      *(_DWORD *)(this + 12) = &HouseClass::`vftable';
      *(_DWORD *)(this + 36) = &HouseClass::`vftable';
      *(_DWORD *)(this + 40) = &HouseClass::`vftable';
      *(_DWORD *)(this + 44) = &HouseClass::`vftable';
      return this;
}
} }
// 0x4F6EC0
namespace gamemd { int HouseClass::SetCombatPower(int a1) {
{
      double *v2;
      _DWORD *v3;
      _DWORD *v4;
      double v5;
      _DWORD *v6;
      _DWORD *v7;
      _DWORD *v8;
      _DWORD *v9;
      _DWORD *v10;
      _DWORD *v11;
      int v12;
      _DWORD *v13;
      int v15;
      int v16;

      v15 = this->q184;
      this->q184 = aP1;
      if ( g_GameMode_Current )
      {
        v2 = *(double **)(this + 52);
        *(double *)(this + 392) = *(double *)(80 * (_DWORD)aP1 + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5432)
                                * v2[25];
        *(double *)(this + 400) = *(double *)(16 * (5 * (_DWORD)aP1 + 340) + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108])
                                * *(double *)(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5144)
                                * v2[26];
        *(double *)(this + 408) = *(double *)(80 * (_DWORD)aP1 + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5448)
                                * *(double *)(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5144)
                                * v2[27];
        *(double *)(this + 416) = *(double *)(80 * (_DWORD)aP1 + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5456)
                                * v2[28];
        *(double *)(this + 424) = *(double *)(80 * (_DWORD)aP1 + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5464)
                                * v2[29];
        *(double *)(this + 432) = *(double *)(80 * (_DWORD)aP1 + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5472)
                                * v2[30];
        v3 = (_DWORD *)(80 * (_DWORD)aP1 + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5488);
        this->q1C0 = *v3;
        this->q1C4 = v3[1];
        v4 = (_DWORD *)(80 * (_DWORD)aP1 + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5496);
        this->q1C8 = *v4;
        this->q1CC = v4[1];
        v5 = *(double *)(80 * (_DWORD)aP1 + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5480)
           * *(double *)(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5144)
           * v2[31];
      }
      else
      {
        v6 = (_DWORD *)(80 * (_DWORD)aP1 + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5432);
        this->q188 = *v6;
        this->q18C = v6[1];
        *(double *)(this + 400) = *(double *)(16 * (5 * (_DWORD)aP1 + 340) + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108])
                                * *(double *)(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5144);
        *(double *)(this + 408) = *(double *)(80 * (_DWORD)aP1 + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5448)
                                * *(double *)(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5144);
        v7 = (_DWORD *)(80 * (_DWORD)aP1 + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5456);
        this->q1A0 = *v7;
        this->q1A4 = v7[1];
        v8 = (_DWORD *)(80 * (_DWORD)aP1 + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5464);
        this->q1A8 = *v8;
        this->q1AC = v8[1];
        v9 = (_DWORD *)(80 * (_DWORD)aP1 + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5472);
        this->q1B0 = *v9;
        this->q1B4 = v9[1];
        v10 = (_DWORD *)(80 * (_DWORD)aP1 + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5488);
        this->q1C0 = *v10;
        this->q1C4 = v10[1];
        v11 = (_DWORD *)(80 * (_DWORD)aP1 + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5496);
        this->q1C8 = *v11;
        this->q1CC = v11[1];
        v5 = *(double *)(80 * (_DWORD)aP1 + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5480)
           * *(double *)(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 5144);
      }
      *(double *)(this + 440) = v5;
      v12 = 175 * this->relatedTagsCount
          + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 4444) + 4 * (_DWORD)aP1);
      v13 = (_DWORD *)(this + 22424);
      *v13 = *(_DWORD *)&g_NetworkPlayerBuffer.__pad_14B0[664];
      v13[1] = v16;
      v13[2] = v12;
      return v15;
}
} }

// 0x4F7140
namespace gamemd { int HouseClass::Destruct() {
{
      _DWORD *v2;
      int v3;
      int i;
      int v5;
      int v6;
      int v7;
      int j;
      int k;
      int v10;
      int v11;
      int v12;
      int v13;
      int v14;
      int v15;
      void *v16;
      int v17;
      void *v18;
      int v19;
      int v20;
      void *v21;
      void *v22;
      void *v23;
      void *v24;
      void *v25;
      void *v26;
      void *v27;
      void *v28;
      void *v29;
      void *v30;
      void *v31;
      void *v32;
      void *v33;
      void *v34;
      void *v35;
      void *v36;
      int v38;
      int v39;
      int v40;

      *(_DWORD *)this = &HouseClass::`vftable';
      *(_DWORD *)(this + 4) = &HouseClass::`vftable';
      *(_DWORD *)(this + 8) = &HouseClass::`vftable';
      *(_DWORD *)(this + 12) = &HouseClass::`vftable';
      *(_DWORD *)(this + 36) = &HouseClass::`vftable';
      *(_DWORD *)(this + 40) = &HouseClass::`vftable';
      *(_DWORD *)(this + 44) = &HouseClass::`vftable';
      AbstractClass::AnnounceExpiredPointer((void **)this);
      v2 = (_DWORD *)(this + 528);
      this->relatedTagsCapacity = 0;
      v3 = 12;
      do
      {
        if ( *v2 )
          (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*v2 + 32))(*v2, 1);
        *v2++ = 0;
        --v3;
      }
      while ( v3 );
      for ( i = 0; i < this->lastBuiltInfantryType; ++i )
      {
        v5 = *(_DWORD *)(this->supersCount + 4 * i);
        if ( v5 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1);
      }
      (*(void (__thiscall **)(int))(this->supers + 12))(this + 596);
      v6 = this->threatPosed_estimates_padding;
      if ( v6 && g_WTFMode )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 8))(this->threatPosed_estimates_padding);
        this->threatPosed_estimates_padding = 0;
      }
      while ( this->buildingsCount > 0 )
      {
        v7 = **(_DWORD **)(this + 60);
        if ( v7 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 32))(v7, 1);
      }
      for ( j = this->q17C - 1; j >= 0; --j )
        __3_YAXPAX_Z(*(void **)(this->q170 + 4 * j));
      (*(void (__thiscall **)(int))(this->q16C + 12))(this + 364);
      for ( k = 0; k < this->unknown16084; *(_DWORD *)(this->waypointPathCapacity + 4 * k - 4) = 0 )
      {
        v38 = *(_DWORD *)(this->waypointPathCapacity + 4 * k);
        if ( (*(int (__stdcall **)(int))(*(_DWORD *)v38 + 8))(v38) )
        {
          do
            v39 = *(_DWORD *)(this->waypointPathCapacity + 4 * k);
          while ( (*(int (__stdcall **)(int))(*(_DWORD *)v39 + 8))(v39) );
        }
        ++k;
      }
      (*(void (__thiscall **)(int))(this->waypointPathCount + 12))(this + 90212);
      this->q1607C = 0;
      v40 = this;
      v10 = (*(int (__thiscall **)(int *, int *))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v40);
      if ( v10 != -1 )
        DynamicVector::RemoveItem(&g_AnimPoolManager, v10);
      v40 = this;
      v11 = (*(int (__thiscall **)(int *, int *))(DataGlobal_B0F640 + 16))(&DataGlobal_B0F640, &v40);
      if ( v11 != -1 )
        DynamicVector::RemoveItem(&DataGlobal_B0F640, v11);
      v40 = this;
      v12 = (*(int (__thiscall **)(int *, int *))(DataGlobal_B0F5F0 + 16))(&DataGlobal_B0F5F0, &v40);
      if ( v12 != -1 )
        DynamicVector::RemoveItem(&DataGlobal_B0F5F0, v12);
      v40 = this;
      v13 = (*(int (__thiscall **)(int *, int *))(DataGlobal_B0F618 + 16))(&DataGlobal_B0F618, &v40);
      if ( v13 != -1 )
        DynamicVector::RemoveItem(&DataGlobal_B0F618, v13);
      v40 = this;
      v14 = (*(int (__thiscall **)(int *, int *))(AbstractClass_Array + 16))(&AbstractClass_Array, &v40);
      if ( v14 != -1 )
        DynamicVector::RemoveItem(&AbstractClass_Array, v14);
      if ( DataGlobal_89C374 == this )
        DataGlobal_89C374 = 0;
      v40 = this;
      v15 = (*(int (__thiscall **)(int *, int *))(HouseClass_Array_0 + 16))(&HouseClass_Array_0, &v40);
      if ( v15 != -1 )
        HouseClass::processAIEvents(v15);
      v16 = *(void **)(this + 90216);
      *(_DWORD *)(this + 90212) = &vt_VectorClass_IConnectionPoint;
      if ( v16 && this->q16071 )
      {
        __3_YAXPAX_Z(v16);
        this->waypointPathCapacity = 0;
      }
      this->q16071 = 0;
      this->HouseClass_field_1607C = 0;
      v17 = this->q5704;
      *(_DWORD *)(this + 22272) = &vt_BaseClass;
      (*(void (__thiscall **)(int))(v17 + 12))(this + 22276);
      *(_DWORD *)(this + 22328) = &vt_VectorClass_Cell;
      Buffer::Cleanup(this + 22328);
      *(_DWORD *)(this + 22304) = &vt_VectorClass_Cell;
      Buffer::Cleanup(this + 22304);
      v18 = *(void **)(this + 22280);
      *(_DWORD *)(this + 22276) = &VectorClass<BaseNodeClass>::`vftable';
      if ( v18 && this->q5711 )
      {
        __3_YAXPAX_Z(v18);
        this->q5708 = 0;
      }
      this->q5711 = 0;
      this->q570C = 0;
      v19 = this + 22260;
      v20 = 3;
      do
      {
        v19 -= 44;
        nullsub_126(v19);
        --v20;
      }
      while ( v20 );
      v21 = *(void **)(this + 22048);
      *(_DWORD *)(this + 22044) = &vt_VectorClass_ScoutStruct;
      if ( v21 && this->q5629 )
      {
        __3_YAXPAX_Z(v21);
        this->q5620 = 0;
      }
      this->q5629 = 0;
      this->q5624 = 0;
      v22 = *(void **)(this + 22024);
      *(_DWORD *)(this + 22020) = &vt_VectorClass_AngerStruct;
      if ( v22 && this->q5611 )
      {
        __3_YAXPAX_Z(v22);
        this->angerNodesCount = 0;
      }
      this->q5611 = 0;
      this->angerNodesCapacity = 0;
      IntVector::Destructor((_DWORD *)(this + 21980));
      IntVector::Destructor((_DWORD *)(this + 21960));
      IntVector::Destructor((_DWORD *)(this + 21940));
      IntVector::Destructor((_DWORD *)(this + 21920));
      IntVector::Destructor((_DWORD *)(this + 21900));
      IntVector::Destructor((_DWORD *)(this + 21880));
      IntVector::Destructor((_DWORD *)(this + 21860));
      IntVector::Destructor((_DWORD *)(this + 21840));
      IntVector::Destructor((_DWORD *)(this + 21820));
      IntVector::Destructor((_DWORD *)(this + 21800));
      IntVector::Destructor((_DWORD *)(this + 21780));
      IntVector::Destructor((_DWORD *)(this + 21760));
      nullsub_143(this + 19312);
      nullsub_143(this + 17256);
      nullsub_143(this + 15200);
      nullsub_143(this + 13144);
      nullsub_143(this + 11088);
      nullsub_143(this + 9032);
      nullsub_143(this + 6976);
      nullsub_143(this + 4920);
      nullsub_143(this + 2864);
      nullsub_143(this + 808);
      v23 = *(void **)(this + 600);
      *(_DWORD *)(this + 596) = &vt_VectorClass_SuperClass;
      if ( v23 && this->q261 )
      {
        __3_YAXPAX_Z(v23);
        this->supersCount = 0;
      }
      this->q261 = 0;
      this->supersCapacity = 0;
      v24 = *(void **)(this + 368);
      *(_DWORD *)(this + 364) = &vt_VectorClass_HouseClass_StartingTechnoStruct;
      if ( v24 && this->q179 )
      {
        __3_YAXPAX_Z(v24);
        this->q170 = 0;
      }
      this->q179 = 0;
      this->q174 = 0;
      v25 = *(void **)(this + 324);
      *(_DWORD *)(this + 320) = &vt_VectorClass_BuildingClass;
      if ( v25 && this->q14D )
      {
        __3_YAXPAX_Z(v25);
        this->q144 = 0;
      }
      this->q14D = 0;
      this->q148 = 0;
      v26 = *(void **)(this + 300);
      *(_DWORD *)(this + 296) = &vt_VectorClass_BuildingClass;
      if ( v26 && this->q135 )
      {
        __3_YAXPAX_Z(v26);
        this->techLevel = 0;
      }
      this->q135 = 0;
      this->altAllies = 0;
      v27 = *(void **)(this + 276);
      *(_DWORD *)(this + 272) = &vt_VectorClass_BuildingClass;
      if ( v27 && this->q11D )
      {
        __3_YAXPAX_Z(v27);
        this->q114 = 0;
      }
      this->q11D = 0;
      this->repairDelay = 0;
      v28 = *(void **)(this + 252);
      *(_DWORD *)(this + 248) = &vt_VectorClass_BuildingClass;
      if ( v28 && this->q105 )
      {
        __3_YAXPAX_Z(v28);
        this->q0FC = 0;
      }
      this->q105 = 0;
      this->rofMultiplier = 0;
      v29 = *(void **)(this + 228);
      *(_DWORD *)(this + 224) = &vt_VectorClass_BuildingClass;
      if ( v29 && this->q0ED )
      {
        __3_YAXPAX_Z(v29);
        this->q0E4 = 0;
      }
      this->q0ED = 0;
      this->groundspeedMultiplier = 0;
      v30 = *(void **)(this + 204);
      *(_DWORD *)(this + 200) = &vt_VectorClass_BuildingClass;
      if ( v30 && this->q0D5 )
      {
        __3_YAXPAX_Z(v30);
        this->unitsSelfHeal = 0;
      }
      this->q0D5 = 0;
      this->startingUnits = 0;
      v31 = *(void **)(this + 180);
      *(_DWORD *)(this + 176) = &vt_VectorClass_BuildingClass;
      if ( v31 && this->q0BD )
      {
        __3_YAXPAX_Z(v31);
        this->productionFactory_plants_count = 0;
      }
      this->q0BD = 0;
      this->productionFactory_plants_capacity = 0;
      v32 = *(void **)(this + 156);
      *(_DWORD *)(this + 152) = &vt_VectorClass_BuildingClass;
      if ( v32 && this->q0A5 )
      {
        __3_YAXPAX_Z(v32);
        this->secretLabsCount = 0;
      }
      this->q0A5 = 0;
      this->secretLabsCapacity = 0;
      v33 = *(void **)(this + 132);
      *(_DWORD *)(this + 128) = &vt_VectorClass_BuildingClass;
      if ( v33 && this->q08D )
      {
        __3_YAXPAX_Z(v33);
        this->occupiablesCount = 0;
      }
      this->q08D = 0;
      this->occupiablesCapacity = 0;
      v34 = *(void **)(this + 108);
      *(_DWORD *)(this + 104) = &vt_VectorClass_BuildingClass;
      if ( v34 && this->q075 )
      {
        __3_YAXPAX_Z(v34);
        this->absorbersCount = 0;
      }
      this->q075 = 0;
      this->absorbersCapacity = 0;
      v35 = *(void **)(this + 84);
      *(_DWORD *)(this + 80) = &vt_VectorClass_BuildingClass;
      if ( v35 && this->q05D )
      {
        __3_YAXPAX_Z(v35);
        this->repairStationsCount = 0;
      }
      this->q05D = 0;
      this->repairStationsCapacity = 0;
      v36 = *(void **)(this + 60);
      *(_DWORD *)(this + 56) = &vt_VectorClass_TagClass;
      if ( v36 && this->q045 )
      {
        __3_YAXPAX_Z(v36);
        this->conYardsCount = 0;
      }
      this->q045 = 0;
      this->conYardsCapacity = 0;
      return AbstractClass::DTOR(this);
}
} }

// 0x4F7870
namespace gamemd { int HouseClass::CanBuild(int a1, int a2, int a3) {
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall HouseClass::CanBuild(_DWORD *this, IUnknown *aP1, AbstractClass *aP2, AbstractClass *aP3)
{
  _DWORD *v4; // ebp
  IUnknown *v5; // edi
  int v6; // esi
  int v7; // esi
  void *v8; // eax
  void *v9; // eax
  bool v10; // zf
  char v11; // al
  int v12; // ebx
  void *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edi
  _DWORD *v17; // eax
  int v18; // ecx
  int v19; // esi
  IUnknown **v20; // edx
  char v21; // cl
  int v23; // ecx
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi
  char v29; // bl
  int v30; // esi
  int v31; // ecx
  int v32; // ebx
  int v33; // edi
  int v34; // ecx
  int v35; // esi
  int v36; // eax
  _DWORD *v37; // ecx
  int v38; // esi
  DynamicVector *v39; // eax
  DynamicVector *v40; // eax
  int v41; // esi
  CCINIClass *v42; // eax
  _DWORD *v43; // ecx
  FactoryClass *v44; // eax
  DynamicVector *v45; // eax
  DynamicVector *v46; // eax
  int v47; // ebp
  int i; // edi
  int v49; // esi
  int v50; // eax
  CCINIClass *v51; // eax
  int v52; // ecx
  FactoryClass *v53; // eax
  int v54; // esi
  DynamicVector *v55; // eax
  DynamicVector *v56; // eax
  CCINIClass *v57; // eax
  _DWORD *v58; // ecx
  FactoryClass *v59; // eax
  int v60; // esi
  DynamicVector *v61; // eax
  DynamicVector *v62; // eax
  CCINIClass *v63; // eax
  _DWORD *v64; // ecx
  FactoryClass *Type; // eax
  void **v67; // [esp+14h] [ebp-38h] BYREF
  void *Block; // [esp+18h] [ebp-34h]
  int v69; // [esp+1Ch] [ebp-30h]
  char v70; // [esp+21h] [ebp-2Bh]
  int v71; // [esp+24h] [ebp-28h]
  void **v72; // [esp+30h] [ebp-1Ch] BYREF
  void *v73; // [esp+34h] [ebp-18h]
  char v74; // [esp+3Dh] [ebp-Fh]
  int v75; // [esp+40h] [ebp-Ch]
  AbstractClass *aP2a; // [esp+54h] [ebp+8h]

  v4 = this; /*0x4f7879*/
  if ( !(_BYTE)aP2 ) /*0x4f7883*/
  {
    v5 = aP1; /*0x4f7889*/
    if ( aP1->__pad_BC0[216] ) /*0x4f788d*/
      return 0; /*0x4f7895*/
    DynamicVectorClass::Copy(&v72, (DynamicVector *)&aP1->__pad_524[304]); /*0x4f78a6*/
    v6 = 0; /*0x4f78b4*/
    v72 = &vt_TypeList_int; /*0x4f78b6*/
    if ( v75 > 0 ) /*0x4f78bc*/
    {
      while ( DynamicVector::GetOrGrow(v4 + 5460, *((DynamicVector **)v73 + v6)) <= 0 ) /*0x4f78d5*/
      {
        if ( ++v6 >= v75 ) /*0x4f78de*/
        {
          v5 = aP1; /*0x4f78e0*/
          goto LABEL_7; /*0x4f78e0*/
        }
      }
      v72 = &vt_VectorClass_int; /*0x4f7913*/
      VectorClass::Destroy((int)&v72); /*0x4f791b*/
      goto LABEL_135; /*0x4f7920*/
    }
LABEL_7:
    v7 = 0; /*0x4f78e4*/
    if ( (int)v4[72] > 0 ) /*0x4f78ee*/
    {
      while ( (IUnknown *)HouseClass::GetRepairStepAmount(*(_DWORD **)(v4[69] + 4 * v7)) != v5 ) /*0x4f7900*/
      {
        if ( ++v7 >= v4[72] ) /*0x4f790b*/
          goto LABEL_15; /*0x4f790b*/
      }
      v8 = v73; /*0x4f7925*/
      v72 = &vt_VectorClass_int; /*0x4f7929*/
      if ( !v73 || !v74 ) /*0x4f793f*/
        goto LABEL_135; /*0x4f793f*/
      goto LABEL_134; /*0x4f793f*/
    }
LABEL_15:
    if ( *(_DWORD *)&v5->__pad_524[272] == -1 ) /*0x4f7951*/
    {
      v9 = v73; /*0x4f7953*/
      v72 = &vt_VectorClass_int; /*0x4f7957*/
      v10 = v73 == 0; /*0x4f795f*/
      goto LABEL_125; /*0x4f7961*/
    }
    DynamicVectorClass::Copy(&v67, (DynamicVector *)&v5->__pad_524[276]); /*0x4f7971*/
    v11 = v5->__pad_BC0[477]; /*0x4f7976*/
    v67 = &vt_TypeList_int; /*0x4f797c*/
    v12 = v4[117]; /*0x4f7980*/
    if ( v11 && !*((_BYTE *)v4 + 702) ) /*0x4f798a*/
      goto LABEL_19; /*0x4f798a*/
    if ( v5->__pad_BC0[476] && !*((_BYTE *)v4 + 701) ) /*0x4f79c6*/
      goto LABEL_19; /*0x4f79c6*/
    if ( v5->__pad_BC0[475] && !*((_BYTE *)v4 + 700) ) /*0x4f79da*/
      goto LABEL_19; /*0x4f79da*/
    v14 = *(_DWORD *)&v5->__pad_BC0[480]; /*0x4f79e4*/
    if ( v14 != -1 /*0x4f7a71*/
      && ((1 << *(_DWORD *)(v4[13] + 184)) & v14) == 0
      && ((v14 & v4[177]) == 0 || (*(int (__thiscall **)(IUnknown *))(v5->field_0 + 44))(v5) != 16)
      && ((v4[178] & *(_DWORD *)&v5->__pad_BC0[480]) == 0
       || (*(int (__thiscall **)(IUnknown *))(v5->field_0 + 44))(v5) != 40)
      && ((v4[179] & *(_DWORD *)&v5->__pad_BC0[480]) == 0
       || (*(int (__thiscall **)(IUnknown *))(v5->field_0 + 44))(v5) != 3)
      && ((v4[180] & *(_DWORD *)&v5->__pad_BC0[480]) == 0
       || (*(int (__thiscall **)(IUnknown *))(v5->field_0 + 44))(v5) != 7) )
    {
      goto LABEL_19; /*0x4f7a71*/
    }
    v15 = *(_DWORD *)&v5->__pad_BC0[484]; /*0x4f7a77*/
    if ( v15 != -1 && ((1 << *(_DWORD *)(v4[13] + 184)) & v15) != 0 ) /*0x4f7a94*/
      goto LABEL_19; /*0x4f7a94*/
    if ( (_BYTE)MEMORY[0xA8B263] /*0x4f7ac4*/
      || (*(int (__thiscall **)(IUnknown *))(v5->field_0 + 44))(v5) != 7
      || (v16 = *(_DWORD *)&aP1->__pad_14B0[576], v16 == -1) )
    {
      v17 = *(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x4f7b51*/
    }
    else
    {
      v17 = *(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x4f7aca*/
      v18 = 0; /*0x4f7acf*/
      v19 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2348); /*0x4f7ad1*/
      if ( v19 <= 0 ) /*0x4f7ad9*/
      {
LABEL_47:
        if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v4[150] + 4 * v16) + 40) + 231) ) /*0x4f7b01*/
        {
          v67 = &vt_VectorClass_int; /*0x4f7b16*/
          if ( Block && v70 ) /*0x4f7b22*/
          {
            __3_YAXPAX_Z(Block); /*0x4f7b25*/
            Block = 0; /*0x4f7b2d*/
          }
          goto LABEL_51; /*0x4f7b2d*/
        }
      }
      else
      {
        v20 = *(IUnknown ***)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2336); /*0x4f7adb*/
        while ( *v20 != aP1 ) /*0x4f7ae7*/
        {
          ++v18; /*0x4f7ae9*/
          ++v20; /*0x4f7aea*/
          if ( v18 >= v19 ) /*0x4f7aef*/
          {
            v4 = this; /*0x4f7af1*/
            goto LABEL_47; /*0x4f7af1*/
          }
        }
        v4 = this; /*0x4f7b58*/
      }
    }
    if ( *(_DWORD *)&aP1->__pad_524[272] > v12 ) /*0x4f7b66*/
    {
LABEL_19:
      v13 = Block; /*0x4f7994*/
      v67 = &vt_VectorClass_int; /*0x4f799d*/
LABEL_20:
      if ( v13 && v70 ) /*0x4f79b1*/
      {
LABEL_123:
        __3_YAXPAX_Z(v13); /*0x4f7f13*/
        Block = 0; /*0x4f7f1c*/
      }
LABEL_124:
      v9 = v73; /*0x4f7f20*/
      v70 = 0; /*0x4f7f24*/
      v69 = 0; /*0x4f7f29*/
      v72 = &vt_VectorClass_int; /*0x4f7f2d*/
      v10 = v73 == 0; /*0x4f7f31*/
      goto LABEL_125; /*0x4f7f31*/
    }
    v21 = *((_BYTE *)v4 + 492); /*0x4f7b76*/
    if ( !MEMORY[0xA8B238] ) /*0x4f7b7c*/
      v21 = v21 || *((_BYTE *)v4 + 493); /*0x4f7b90*/
    if ( !v21 ) /*0x4f7b94*/
    {
      v67 = &vt_VectorClass_int; /*0x4f7ba1*/
      if ( Block && v70 ) /*0x4f7bad*/
      {
        __3_YAXPAX_Z(Block); /*0x4f7bb0*/
        Block = 0; /*0x4f7bb8*/
      }
      v70 = 0; /*0x4f7bc0*/
      v69 = 0; /*0x4f7bc7*/
      v72 = &vt_VectorClass_int; /*0x4f7bcb*/
      if ( v73 && v74 ) /*0x4f7bd7*/
        __3_YAXPAX_Z(v73); /*0x4f7bda*/
      return 1; /*0x4f7bda*/
    }
    aP2a = 0; /*0x4f7bf5*/
    if ( v71 > 0 ) /*0x4f7bfb*/
    {
      while ( 1 ) /*0x4f7c18*/
      {
        v23 = *((_DWORD *)Block + (_DWORD)aP2a); /*0x4f7c09*/
        switch ( v23 ) /*0x4f7c18*/
        {
          case -6: /*0x4f7c18*/
            v29 = 0; /*0x4f7d74*/
            v30 = 0; /*0x4f7d76*/
            if ( (int)v17[253] <= 0 ) /*0x4f7d7a*/
              goto LABEL_95; /*0x4f7d7a*/
            while ( DynamicVector::GetOrGrow(v4 + 5460, *(DynamicVector **)(v17[250] + 4 * v30)) <= 0 ) /*0x4f7d95*/
            {
              v17 = *(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x4f7d97*/
              if ( ++v30 >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1012) ) /*0x4f7da3*/
                goto LABEL_95; /*0x4f7da3*/
            }
            v17 = *(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x4f7da7*/
            v29 = 1; /*0x4f7dac*/
LABEL_95:
            v31 = v17[256]; /*0x4f7db0*/
            if ( v31 ) /*0x4f7db8*/
            {
              if ( DynamicVector::GetOrGrow(v4 + 5465, *(DynamicVector **)(v31 + 3576)) > 0 ) /*0x4f7dce*/
                goto LABEL_113; /*0x4f7dce*/
              v17 = *(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x4f7dd4*/
            }
            if ( !v29 ) /*0x4f7ddb*/
            {
              v13 = Block; /*0x4f7e99*/
              v67 = &vt_VectorClass_int; /*0x4f7ea2*/
              goto LABEL_20; /*0x4f7ea6*/
            }
            goto LABEL_114; /*0x4f7ddb*/
          case -5: /*0x4f7c18*/
            v28 = 0; /*0x4f7d31*/
            if ( (int)v17[246] <= 0 ) /*0x4f7d35*/
              goto LABEL_116; /*0x4f7d35*/
            while ( DynamicVector::GetOrGrow(v4 + 5460, *(DynamicVector **)(v17[243] + 4 * v28)) <= 0 ) /*0x4f7d54*/
            {
              v17 = *(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x4f7d5a*/
              if ( ++v28 >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 984) ) /*0x4f7d66*/
                goto LABEL_116; /*0x4f7d66*/
            }
            goto LABEL_113; /*0x4f7d54*/
          case -4: /*0x4f7c18*/
            v27 = 0; /*0x4f7cee*/
            if ( (int)v17[239] <= 0 ) /*0x4f7cf2*/
              goto LABEL_116; /*0x4f7cf2*/
            while ( DynamicVector::GetOrGrow(v4 + 5460, *(DynamicVector **)(v17[236] + 4 * v27)) <= 0 ) /*0x4f7d11*/
            {
              v17 = *(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x4f7d17*/
              if ( ++v27 >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 956) ) /*0x4f7d23*/
                goto LABEL_116; /*0x4f7d23*/
            }
            goto LABEL_113; /*0x4f7d11*/
          case -3: /*0x4f7c18*/
            v26 = 0; /*0x4f7cab*/
            if ( (int)v17[232] <= 0 ) /*0x4f7caf*/
              goto LABEL_116; /*0x4f7caf*/
            while ( DynamicVector::GetOrGrow(v4 + 5460, *(DynamicVector **)(v17[229] + 4 * v26)) <= 0 ) /*0x4f7cce*/
            {
              v17 = *(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x4f7cd4*/
              if ( ++v26 >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 928) ) /*0x4f7ce0*/
                goto LABEL_116; /*0x4f7ce0*/
            }
            goto LABEL_113; /*0x4f7cce*/
          case -2: /*0x4f7c18*/
            v25 = 0; /*0x4f7c68*/
            if ( (int)v17[225] <= 0 ) /*0x4f7c6c*/
              goto LABEL_116; /*0x4f7c6c*/
            while ( DynamicVector::GetOrGrow(v4 + 5460, *(DynamicVector **)(v17[222] + 4 * v25)) <= 0 ) /*0x4f7c8b*/
            {
              v17 = *(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x4f7c91*/
              if ( ++v25 >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 900) ) /*0x4f7c9d*/
                goto LABEL_116; /*0x4f7c9d*/
            }
            goto LABEL_113; /*0x4f7c8b*/
          case -1: /*0x4f7c18*/
            v24 = 0; /*0x4f7c25*/
            if ( (int)v17[218] <= 0 ) /*0x4f7c29*/
              goto LABEL_116; /*0x4f7c29*/
            do /*0x4f7c5a*/
            {
              if ( DynamicVector::GetOrGrow(v4 + 5460, *(DynamicVector **)(v17[215] + 4 * v24)) > 0 ) /*0x4f7c48*/
                goto LABEL_113; /*0x4f7c48*/
              v17 = *(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x4f7c4e*/
              ++v24; /*0x4f7c53*/
            }
            while ( v24 < *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 872) ); /*0x4f7c5a*/
LABEL_116:
            v13 = Block; /*0x4f7e85*/
            v67 = &vt_VectorClass_int; /*0x4f7e8e*/
            goto LABEL_20; /*0x4f7e94*/
          default:
            v32 = *((_DWORD *)g_TriggerTypeCount + v23); /*0x4f7deb*/
            if ( *(_BYTE *)(v32 + 3720) ) /*0x4f7dee*/
            {
              v33 = v4[30] - 1; /*0x4f7dfb*/
              if ( v33 < 0 ) /*0x4f7dfc*/
              {
LABEL_118:
                v67 = &vt_VectorClass_int; /*0x4f7eab*/
                if ( Block && v70 ) /*0x4f7ec6*/
                {
                  __3_YAXPAX_Z(Block); /*0x4f7ed1*/
                  v9 = v73; /*0x4f7ed6*/
                  Block = 0; /*0x4f7edd*/
                  v70 = 0; /*0x4f7ee5*/
                  v69 = 0; /*0x4f7eea*/
                  v72 = &vt_VectorClass_int; /*0x4f7ef2*/
                  v10 = v73 == 0; /*0x4f7ef6*/
                  goto LABEL_125; /*0x4f7ef8*/
                }
LABEL_51:
                v9 = v73; /*0x4f7b35*/
                v70 = 0; /*0x4f7b39*/
                v69 = 0; /*0x4f7b3e*/
                v72 = &vt_VectorClass_int; /*0x4f7b46*/
                v10 = v73 == 0; /*0x4f7b4a*/
LABEL_125:
                if ( !v10 ) /*0x4f7f33*/
                {
                  if ( v74 ) /*0x4f7f3b*/
                    __3_YAXPAX_Z(v9); /*0x4f7f3e*/
                }
                return 0; /*0x4f7f4f*/
              }
              while ( 1 ) /*0x4f7e02*/
              {
                v34 = v4[27]; /*0x4f7e02*/
                v35 = *(_DWORD *)(v34 + 4 * v33); /*0x4f7e05*/
                if ( !*(_BYTE *)(v35 + 129) /*0x4f7e32*/
                  && *(_BYTE *)(v35 + 1632)
                  && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v35 + 388))(*(_DWORD *)(v34 + 4 * v33)) != 19
                  && *(_DWORD *)(v35 + 180) != 19 )
                {
                  break; /*0x4f7e32*/
                }
                if ( --v33 < 0 ) /*0x4f7e35*/
                  goto LABEL_118; /*0x4f7e35*/
              }
              v36 = 0; /*0x4f7e39*/
              v37 = (_DWORD *)(v35 + 1516); /*0x4f7e3b*/
              while ( *v37 != v32 ) /*0x4f7e43*/
              {
                ++v36; /*0x4f7e45*/
                ++v37; /*0x4f7e46*/
                if ( v36 >= 3 ) /*0x4f7e4c*/
                  goto LABEL_118; /*0x4f7e4c*/
              }
            }
            else if ( !DynamicVector::GetOrGrow(v4 + 5460, *((DynamicVector **)Block + (_DWORD)aP2a)) ) /*0x4f7e5e*/
            {
              v13 = Block; /*0x4f7efa*/
              v67 = &vt_VectorClass_int; /*0x4f7f05*/
              if ( Block && v70 ) /*0x4f7f11*/
                goto LABEL_123; /*0x4f7f11*/
              goto LABEL_124; /*0x4f7f11*/
            }
LABEL_113:
            v17 = *(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x4f7e64*/
LABEL_114:
            aP2a = (AbstractClass *)((char *)aP2a + 1); /*0x4f7e6b*/
            if ( (int)aP2a >= v71 ) /*0x4f7e7a*/
              goto LABEL_129; /*0x4f7e7a*/
            break; /*0x4f7e7a*/
        }
      }
    }
LABEL_129:
    v67 = &vt_VectorClass_int; /*0x4f7f52*/
    if ( Block && v70 ) /*0x4f7f69*/
    {
      __3_YAXPAX_Z(Block); /*0x4f7f6c*/
      Block = 0; /*0x4f7f74*/
    }
    v8 = v73; /*0x4f7f78*/
    v70 = 0; /*0x4f7f7c*/
    v69 = 0; /*0x4f7f83*/
    v72 = &vt_VectorClass_int; /*0x4f7f87*/
    if ( v73 && v74 ) /*0x4f7f93*/
LABEL_134:
      __3_YAXPAX_Z(v8); /*0x4f7f95*/
  }
LABEL_135:
  switch ( (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 44))(aP1) ) /*0x4f7fbd*/
  {
    case 3: /*0x4f7fbd*/
      v60 = aP1->field_3B8; /*0x4f8289*/
      if ( v60 <= 0 ) /*0x4f8291*/
      {
        v61 = (DynamicVector *)(*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 64))(aP1); /*0x4f8297*/
        return DynamicVector::GetOrGrow(v4 + 5495, v61) < (int)abs32(v60); /*0x4f82bc*/
      }
      v62 = (DynamicVector *)(*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 64))(aP1); /*0x4f82cb*/
      if ( DynamicVector::GetOrGrow(v4 + 5455, v62) < aP1->field_3B8 ) /*0x4f82e0*/
        return 1; /*0x4f82e0*/
      if ( (_BYTE)aP3 ) /*0x4f82ec*/
      {
        v41 = 0; /*0x4f82f3*/
        if ( MEMORY[0xA83E40] > 0 ) /*0x4f82f7*/
        {
          v63 = MEMORY[0xA83E34]; /*0x4f82f9*/
          while ( 1 ) /*0x4f82fe*/
          {
            v64 = *(_DWORD **)&v63->__pad_0[4 * v41]; /*0x4f82fe*/
            if ( (_DWORD *)v64[27] == v4 ) /*0x4f8304*/
            {
              if ( AbstractClass::GetType(v64) ) /*0x4f8306*/
              {
                Type = (FactoryClass *)AbstractClass::GetType(*(_DWORD **)&MEMORY[0xA83E34]->__pad_0[4 * v41]); /*0x4f8318*/
                if ( (IUnknown *)(*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)Type->__pad_0 + 132))(Type) == aP1 ) /*0x4f8329*/
                  goto LABEL_199; /*0x4f8329*/
              }
              v63 = MEMORY[0xA83E34]; /*0x4f832b*/
            }
            if ( ++v41 >= MEMORY[0xA83E40] ) /*0x4f8339*/
              return -1; /*0x4f8345*/
          }
        }
      }
      return -1; /*0x4f82f7*/
    case 7: /*0x4f7fbd*/
      v54 = aP1->field_3B8; /*0x4f81be*/
      if ( v54 <= 0 ) /*0x4f81c6*/
      {
        v55 = (DynamicVector *)(*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 64))(aP1); /*0x4f81cc*/
        return DynamicVector::GetOrGrow(v4 + 5480, v55) < (int)abs32(v54); /*0x4f81f1*/
      }
      v56 = (DynamicVector *)(*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 64))(aP1); /*0x4f8200*/
      if ( DynamicVector::GetOrGrow(v4 + 5440, v56) < aP1->field_3B8 ) /*0x4f8215*/
        return 1; /*0x4f8215*/
      if ( (_BYTE)aP3 ) /*0x4f8221*/
      {
        v41 = 0; /*0x4f822c*/
        if ( MEMORY[0xA83E40] > 0 ) /*0x4f8230*/
        {
          v57 = MEMORY[0xA83E34]; /*0x4f8236*/
          while ( 1 ) /*0x4f823b*/
          {
            v58 = *(_DWORD **)&v57->__pad_0[4 * v41]; /*0x4f823b*/
            if ( (_DWORD *)v58[27] == v4 ) /*0x4f8241*/
            {
              if ( AbstractClass::GetType(v58) ) /*0x4f8243*/
              {
                v59 = (FactoryClass *)AbstractClass::GetType(*(_DWORD **)&MEMORY[0xA83E34]->__pad_0[4 * v41]); /*0x4f8255*/
                if ( (IUnknown *)(*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)v59->__pad_0 + 132))(v59) == aP1 ) /*0x4f8266*/
                  goto LABEL_199; /*0x4f8266*/
              }
              v57 = MEMORY[0xA83E34]; /*0x4f826c*/
            }
            if ( ++v41 >= MEMORY[0xA83E40] ) /*0x4f827a*/
              return -1; /*0x4f8286*/
          }
        }
      }
      return -1; /*0x4f8230*/
    case 16: /*0x4f7fbd*/
      if ( aP1->field_3B8 <= 0 ) /*0x4f8097*/
      {
        v45 = (DynamicVector *)(*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 64))(aP1); /*0x4f809d*/
        if ( DynamicVector::GetOrGrow(v4 + 5490, v45) >= (int)abs32(aP1->field_3B8) ) /*0x4f80bb*/
          return 0; /*0x4f80c6*/
      }
      v46 = (DynamicVector *)(*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 64))(aP1); /*0x4f80d1*/
      v47 = DynamicVector::GetOrGrow(this + 5450, v46); /*0x4f80e4*/
      if ( aP1->__pad_DFC[202] ) /*0x4f80e6*/
      {
        for ( i = 0; i < *(int *)&MEMORY[0x89F690].__pad_579C[62188]; ++i ) /*0x4f80f9*/
        {
          v49 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62176] + 4 * i); /*0x4f8105*/
          if ( *(_DWORD **)(v49 + 540) == this /*0x4f811d*/
            && *(_DWORD *)(v49 + 824) == (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 64))(aP1) )
          {
            ++v47; /*0x4f811f*/
          }
        }
      }
      v50 = aP1->field_3B8; /*0x4f812a*/
      if ( v50 <= 0 || v47 < v50 ) /*0x4f813a*/
        return 1; /*0x4f813a*/
      if ( !(_BYTE)aP3 ) /*0x4f8146*/
        return -1; /*0x4f8146*/
      if ( v47 != v50 ) /*0x4f814e*/
        return -1; /*0x4f814e*/
      v41 = 0; /*0x4f8159*/
      if ( MEMORY[0xA83E40] <= 0 ) /*0x4f815d*/
        return -1; /*0x4f815d*/
      v51 = MEMORY[0xA83E34]; /*0x4f8163*/
      break; /*0x4f8163*/
    case 40: /*0x4f7fbd*/
      v38 = aP1->field_3B8; /*0x4f7fc4*/
      if ( v38 <= 0 ) /*0x4f7fcc*/
      {
        v39 = (DynamicVector *)(*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 64))(aP1); /*0x4f7fd2*/
        return DynamicVector::GetOrGrow(v4 + 5485, v39) < (int)abs32(v38); /*0x4f7ff7*/
      }
      v40 = (DynamicVector *)(*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 64))(aP1); /*0x4f8006*/
      if ( DynamicVector::GetOrGrow(v4 + 5445, v40) < aP1->field_3B8 ) /*0x4f801b*/
        return 1; /*0x4f801b*/
      if ( (_BYTE)aP3 ) /*0x4f8027*/
      {
        v41 = 0; /*0x4f8032*/
        if ( MEMORY[0xA83E40] > 0 ) /*0x4f8036*/
        {
          v42 = MEMORY[0xA83E34]; /*0x4f803c*/
          while ( 1 ) /*0x4f8041*/
          {
            v43 = *(_DWORD **)&v42->__pad_0[4 * v41]; /*0x4f8041*/
            if ( (_DWORD *)v43[27] == v4 ) /*0x4f8047*/
            {
              if ( AbstractClass::GetType(v43) ) /*0x4f8049*/
              {
                v44 = (FactoryClass *)AbstractClass::GetType(*(_DWORD **)&MEMORY[0xA83E34]->__pad_0[4 * v41]); /*0x4f805b*/
                if ( (IUnknown *)(*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)v44->__pad_0 + 132))(v44) == aP1 ) /*0x4f806c*/
                  goto LABEL_199; /*0x4f806c*/
              }
              v42 = MEMORY[0xA83E34]; /*0x4f8072*/
            }
            if ( ++v41 >= MEMORY[0xA83E40] ) /*0x4f8080*/
              return -1; /*0x4f808c*/
          }
        }
      }
      return -1; /*0x4f8036*/
    default:
      return 1;
  }
  while ( 1 ) /*0x4f8170*/
  {
    v52 = *(_DWORD *)&v51->__pad_0[4 * v41]; /*0x4f8170*/
    if ( *(_DWORD **)(v52 + 108) == this ) /*0x4f8176*/
      break; /*0x4f8176*/
LABEL_169:
    if ( ++v41 >= MEMORY[0xA83E40] ) /*0x4f81af*/
      return -1; /*0x4f81bb*/
  }
  if ( !AbstractClass::GetType((_DWORD *)v52) /*0x4f819b*/
    || (v53 = (FactoryClass *)AbstractClass::GetType(*(_DWORD **)&MEMORY[0xA83E34]->__pad_0[4 * v41]),
        (IUnknown *)(*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)v53->__pad_0 + 132))(v53) != aP1) )
  {
    v51 = MEMORY[0xA83E34]; /*0x4f81a1*/
    goto LABEL_169; /*0x4f81a1*/
  }
LABEL_199:
  if ( *(_DWORD *)&MEMORY[0xA83E34]->__pad_0[4 * v41] ) /*0x4f834d*/
    return 1; /*0x4f7bee*/
  return -1; /*0x4f7be2*/
}
} }

// 0x4F83C0
namespace gamemd { int HouseClass::GetFactoryProducing(int a2) {
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall HouseClass::GetFactoryProducing(void *this, int a2)
{
  int v2; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // ecx
  int Type; // eax

  v2 = 0; /*0x4f83ca*/
  if ( MEMORY[0xA83E40] <= 0 ) /*0x4f83d1*/
    return 0; /*0x4f841f*/
  v4 = MEMORY[0xA83E34]; /*0x4f83d7*/
  while ( 1 ) /*0x4f83dc*/
  {
    v5 = (_DWORD *)v4[v2]; /*0x4f83dc*/
    if ( (void *)v5[27] == this ) /*0x4f83e2*/
      break; /*0x4f83e2*/
LABEL_7:
    if ( ++v2 >= MEMORY[0xA83E40] ) /*0x4f8417*/
      return 0; /*0x4f8417*/
  }
  if ( !AbstractClass::GetType(v5) /*0x4f8407*/
    || (Type = AbstractClass::GetType(*((_DWORD **)MEMORY[0xA83E34] + v2)),
        (*(int (__thiscall **)(int))(*(_DWORD *)Type + 132))(Type) != a2) )
  {
    v4 = MEMORY[0xA83E34]; /*0x4f8409*/
    goto LABEL_7; /*0x4f8409*/
  }
  return *((_DWORD *)MEMORY[0xA83E34] + v2); /*0x4f8419*/
}
} }

// 0x4f8440
void __thiscall HouseClass::Update_TogglePower(#375 *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // eax
  char v13; // al
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // eax
  char v19; // al
  int v20; // edx
  int v21; // ecx
  int v22; // edi
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int *v28; // eax
  int v29; // eax
  _DWORD *v30; // eax
  int ClosestObjectCell; // eax
  int v32; // edi
  int v33; // ebx
  char v34; // al
  int v35; // ebx
  int v36; // ecx
  int v37; // eax
  int v38; // edx
  int v39; // eax
  char v40; // al
  int i; // edi
  int v42; // ecx
  int v43; // edx
  void *v44; // eax
  int v45; // edx
  int v46; // eax
  int *v47; // edi
  int v48; // eax
  char *ProductionTimeMult; // eax
  int v50; // edx
  int v51; // ecx
  int v52; // ebx
  double v53; // st7
  int v54; // eax
  char *v55; // eax
  int v56; // eax
  #72 *StringCSF; // eax
  int v58; // eax
  char *v59; // eax
  int v60; // edi
  int v61; // edx
  int v62; // eax
  int v63; // edx
  int j; // ebx
  int v65; // edi
  int Status; // eax
  _DWORD *v67; // ebp
  int v68; // edi
  int v69; // edi
  int v70; // edi
  int v71; // edi
  int v72; // edi
  int v73; // edi
  int v74; // edi
  int v75; // eax
  int k; // edi
  int v77; // edx
  int v78; // eax
  char v79; // al
  int updated; // eax
  char v81; // al
  int v82; // eax
  int v83; // eax
  int v84; // edi
  int v85; // edx
  int v86; // ecx
  int v87; // eax
  int v88; // edi
  int v89; // ebx
  int v90; // edi
  int v91; // edx
  int v92; // ecx
  int v93; // eax
  int v94; // edi
  int v95; // ebx
  int v96; // eax
  int v97; // eax
  bool v98; // bl
  int v99; // eax
  int v100; // eax
  char v101; // al
  int v102; // ebp
  int m; // ebx
  _DWORD *v104; // edi
  int v105; // ecx
  int v106; // eax
  int v107; // ecx
  int v108; // [esp+10h] [ebp-6Ch]
  int v109; // [esp+18h] [ebp-64h]
  int v110; // [esp+34h] [ebp-48h] BYREF
  int Ticks; // [esp+38h] [ebp-44h] BYREF
  int v112; // [esp+3Ch] [ebp-40h] BYREF
  int v113; // [esp+40h] [ebp-3Ch]
  void **v114; // [esp+44h] [ebp-38h] BYREF
  void *Block; // [esp+48h] [ebp-34h]
  char v116; // [esp+51h] [ebp-2Bh]
  int v117; // [esp+54h] [ebp-28h]
  void **v118[7]; // [esp+60h] [ebp-1Ch] BYREF

  v2 = *((_DWORD *)this + 169);
  v3 = *((_DWORD *)this + 171);
  if ( v2 != -1 )
  {
    if ( dword_A8ED54[12] - v2 >= v3 )
      goto LABEL_6;
    v3 -= dword_A8ED54[12] - v2;
  }
  if ( v3 == 1 )
  {
    v4 = v112;
    *((_DWORD *)this + 169) = dword_A8ED54[12];
    *((_DWORD *)this + 170) = v4;
    *((_DWORD *)this + 171) = 0;
    *((_BYTE *)this + 22392) = 1;
  }
LABEL_6:
  v5 = *((_DWORD *)this + 172);
  v6 = *((_DWORD *)this + 174);
  if ( v5 != -1 )
  {
    if ( dword_A8ED54[12] - v5 >= v6 )
      goto LABEL_11;
    v6 -= dword_A8ED54[12] - v5;
  }
  if ( v6 == 1 )
  {
    v7 = v112;
    *((_DWORD *)this + 172) = dword_A8ED54[12];
    *((_DWORD *)this + 173) = v7;
    *((_DWORD *)this + 174) = 0;
    *((_BYTE *)this + 22393) = 1;
  }
LABEL_11:
  if ( *((_BYTE *)this + 22392) )
  {
    HouseClass::UpdatePower((int)this);
    *((_BYTE *)this + 22393) = 1;
  }
  if ( *((_BYTE *)this + 22393) )
  {
    if ( !MEMORY[0x87F7E8][536404] )
      HouseClass::CanTogglePower((int)this);
    HouseClass::ToggleGapGeneratorReveal((int)this);
  }
  v8 = dword_A8ED54[12] % 100;
  if ( !(dword_A8ED54[12] % 100) && *((int *)this + 5509) > 0 )
  {
    do
    {
      v9 = *((_DWORD *)this + 5506);
      v10 = *(_DWORD *)(v9 + 8 * v8 + 4);
      v11 = (_DWORD *)(v9 + 8 * v8 + 4);
      if ( v10 > 1 )
        *v11 = v10 - 1;
      ++v8;
    }
    while ( v8 < *((_DWORD *)this + 5509) );
  }
  v12 = *((_DWORD *)this + 5624);
  if ( v12 )
  {
    v110 = 0;
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)v12 + 16))(v12, &v110);
  }
  v13 = *((_BYTE *)this + 492);
  if ( !MEMORY[0x87F7E8][536212] )
    v13 = v13 || *((_BYTE *)this + 493);
  if ( !v13 && (*((_BYTE *)this + 499) || *((_DWORD *)this + 147) >= *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5180)) )
  {
    *((_BYTE *)this + 499) = 1;
    *((_BYTE *)this + 494) = 1;
    *((_BYTE *)this + 495) = 1;
  }
  if ( !*((_BYTE *)this + 503) )
    goto LABEL_65;
  v14 = *((_DWORD *)this + 166);
  v15 = *((_DWORD *)this + 168);
  if ( v14 != -1 )
  {
    if ( dword_A8ED54[12] - v14 >= v15 )
      goto LABEL_38;
    v15 -= dword_A8ED54[12] - v14;
  }
  if ( v15 )
    goto LABEL_65;
LABEL_38:
  if ( MEMORY[0x87F7E8][536212] || *((int *)this + 159) <= 0 )
  {
    Ticks = Timer::GetTicks(&v112);
    v113 = 120;
    while ( (unsigned __int8)Audio::IsPlaying() )
    {
      v16 = v113;
      if ( Ticks != -1 )
      {
        v17 = Timer::GetTicks(&v112);
        v18 = v17 - Ticks;
        if ( v18 >= v16 )
          break;
        v16 -= v18;
      }
      if ( !v16 )
        break;
      Event::Dispatch();
    }
    *((_BYTE *)this + 503) = 0;
    if ( MEMORY[0x87F7E8][536212] )
    {
      if ( this != (#375 *)MEMORY[0x87F7E8][528729] )
      {
        if ( (MEMORY[0x87F7E8][536212] == 3 || MEMORY[0x87F7E8][536212] == 4)
          && MEMORY[0x87F7E8][536213]
          && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][536213] + 4))(MEMORY[0x87F7E8][536213])
          && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][536213] + 8))(MEMORY[0x87F7E8][536213]) )
        {
          v19 = *((_BYTE *)this + 492);
          if ( !MEMORY[0x87F7E8][536212] )
            v19 = v19 || *((_BYTE *)this + 493);
          if ( v19 )
          {
            BYTE1(MEMORY[0x87F7E8][528728]) = 1;
            goto LABEL_65;
          }
        }
        goto LABEL_64;
      }
    }
    else if ( !*((_BYTE *)this + 492) )
    {
      if ( *((_BYTE *)this + 493) )
      {
        BYTE1(MEMORY[0x87F7E8][528728]) = 1;
        goto LABEL_65;
      }
LABEL_64:
      LOBYTE(MEMORY[0x87F7E8][539962]) = 1;
      goto LABEL_65;
    }
    BYTE1(MEMORY[0x87F7E8][528728]) = 1;
  }
LABEL_65:
  if ( !*((_BYTE *)this + 504) )
    goto LABEL_83;
  v20 = *((_DWORD *)this + 166);
  v21 = *((_DWORD *)this + 168);
  if ( v20 != -1 )
  {
    if ( dword_A8ED54[12] - v20 >= v21 )
      goto LABEL_70;
    v21 -= dword_A8ED54[12] - v20;
  }
  if ( v21 )
    goto LABEL_83;
LABEL_70:
  Ticks = Timer::GetTicks(&v112);
  v113 = 120;
  while ( (unsigned __int8)Audio::IsPlaying() )
  {
    v22 = v113;
    if ( Ticks != -1 )
    {
      v23 = Timer::GetTicks(&v112);
      v24 = v23 - Ticks;
      if ( v24 >= v22 )
        break;
      v22 -= v24;
    }
    if ( !v22 )
      break;
    Event::Dispatch();
  }
  if ( !MEMORY[0x87F7E8][536212] )
  {
    if ( !*((_BYTE *)this + 492) )
    {
      if ( *((_BYTE *)this + 493) )
      {
        LOBYTE(MEMORY[0x87F7E8][539962]) = 1;
        goto LABEL_83;
      }
      goto LABEL_82;
    }
LABEL_81:
    LOBYTE(MEMORY[0x87F7E8][539962]) = 1;
    goto LABEL_83;
  }
  if ( this == (#375 *)MEMORY[0x87F7E8][528729] )
    goto LABEL_81;
LABEL_82:
  BYTE1(MEMORY[0x87F7E8][528728]) = 1;
LABEL_83:
  if ( !*((_BYTE *)this + 502) )
    goto LABEL_89;
  v25 = *((_DWORD *)this + 166);
  v26 = *((_DWORD *)this + 168);
  if ( v25 == -1 )
  {
LABEL_87:
    if ( v26 )
      goto LABEL_89;
    goto LABEL_88;
  }
  v27 = dword_A8ED54[12] - v25;
  if ( v27 < v26 )
  {
    v26 -= v27;
    goto LABEL_87;
  }
LABEL_88:
  *((_BYTE *)this + 502) = 0;
  HouseClass::ClearLowPowerTargets(this);
LABEL_89:
  *((_DWORD *)this + 5353) &= (*((_DWORD *)this + 5353) <= 0) - 1;
  *((_DWORD *)this + 5354) &= (*((_DWORD *)this + 5354) <= 0) - 1;
  if ( *(_DWORD *)(MEMORY[0x87F7E8][528729] + 48) == *((_DWORD *)this + 12)
    && (MEMORY[0x87F7E8][536212] == 3 || MEMORY[0x87F7E8][536212] == 4)
    && MEMORY[0x87F7E8][536213]
    && !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][536213] + 4))(MEMORY[0x87F7E8][536213]) )
  {
    if ( (dword_A8ED54[186] & 1) == 0 )
    {
      LOBYTE(dword_A8ED54[186]) |= 1u;
      dword_A8ED54[165] = Random::Range(&MEMORY[0x87F7E8][7400], 0, 1);
    }
    if ( !Random::Range(&MEMORY[0x87F7E8][7400], 0, 2) )
    {
      v28 = (int *)(dword_A8ED54[165]
                  ? (MEMORY[0x87F7E8][61] << 11) + MEMORY[0x87F7E8][79] + 22580
                  : MEMORY[0x87F7E8][79]
                  + 4 * (MEMORY[0x87F7E8][62] + ((MEMORY[0x87F7E8][62] + MEMORY[0x87F7E8][61]) << 9))
                  - 30668);
      v29 = *v28;
      if ( v29 )
      {
        if ( *(_DWORD *)(v29 + 304) != 1 || (*(_BYTE *)(v29 + 300) & 0x18) != 0 )
          Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 2);
      }
    }
  }
  if ( *((_DWORD *)this + 5368) != dword_A8ED54[145] && !(dword_A8ED54[12] % 15) )
  {
    Ticks = 0;
    v112 = 0;
    v30 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)this + 10736);
    ClosestObjectCell = Object::FindClosestObjectCell(v30, &Ticks, 0, 0);
    v32 = ClosestObjectCell;
    if ( ClosestObjectCell )
    {
      if ( (*(_BYTE *)(ClosestObjectCell + 20) & 4) != 0 )
      {
        v33 = ClosestObjectCell;
        if ( *(_DWORD *)(ClosestObjectCell + 1444) )
        {
          v34 = 1;
          goto LABEL_112;
        }
      }
      else
      {
        v33 = 0;
      }
      (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)ClosestObjectCell + 372))(
        ClosestObjectCell,
        &dword_A8ED54[169],
        1,
        1);
      v34 = 0;
LABEL_112:
      if ( (!v33 || !*(_DWORD *)(v33 + 1444)) && !v34 )
      {
        v35 = 0;
        while ( !*(_BYTE *)(v32 + 129) )
        {
          v36 = v35++;
          if ( v36 >= 5 )
            break;
          v37 = *(_DWORD *)v32;
          v110 = *(_DWORD *)(v32 + 108);
          (*(void (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v37 + 364))(
            v32,
            &v110,
            0,
            *(_DWORD *)(MEMORY[0x87F7E8][7806] + 4008),
            0,
            1,
            0,
            0);
        }
      }
    }
  }
  v38 = *((_DWORD *)this + 5606);
  v39 = *((_DWORD *)this + 5608);
  if ( v38 == -1 )
    goto LABEL_121;
  if ( dword_A8ED54[12] - v38 < v39 )
  {
    v39 -= dword_A8ED54[12] - v38;
LABEL_121:
    if ( v39 )
      goto LABEL_135;
  }
  v40 = *((_BYTE *)this + 492);
  if ( !MEMORY[0x87F7E8][536212] )
    v40 = v40 || *((_BYTE *)this + 493);
  if ( !v40 && !*(_BYTE *)(*((_DWORD *)this + 13) + 422) )
  {
    AISelectTeamHouseClass(v118, (int)this, 0);
    TeamTypeVector::CopyConstruct(&v114, v118);
    v114 = &TypeList<TeamTypeClass const *>::`vftable';
    v118[0] = &VectorClass<TeamTypeClass const *>::`vftable';
    VectorClass::ClearAndFree3((int)v118);
    if ( v117 > 0 )
    {
      for ( i = 0; i < v117; ++i )
        TeamClass::CreateOneOf(*((_DWORD *)Block + i), (int)this);
    }
    v42 = *(_DWORD *)(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 4444) + 4 * *((_DWORD *)this + 97));
    v43 = v112;
    *((_DWORD *)this + 5606) = dword_A8ED54[12];
    v44 = Block;
    *((_DWORD *)this + 5607) = v43;
    *((_DWORD *)this + 5608) = v42;
    v114 = &VectorClass<TeamTypeClass const *>::`vftable';
    if ( v44 && v116 )
      __3_YAXPAX_Z(v44);
  }
LABEL_135:
  if ( (#375 *)MEMORY[0x87F7E8][528729] == this )
  {
    if ( !*((_DWORD *)this + 188) && BYTE1(MEMORY[0x87F7E8][1132]) )
      BuildingClass::TogglePower(MEMORY[0x87F7E8], 0);
    if ( (#375 *)MEMORY[0x87F7E8][528729] == this )
    {
      v45 = *((_DWORD *)this + 5621);
      v46 = *((_DWORD *)this + 5623);
      v47 = (int *)((char *)this + 22484);
      if ( v45 != -1 )
      {
        if ( dword_A8ED54[12] - v45 >= v46 )
        {
LABEL_144:
          if ( (*(int (__stdcall **)(char *))(*((_DWORD *)this + 9) + 24))((char *)this + 36) < 100
            && *((_DWORD *)this + 5343) + *((_DWORD *)this + 5344) + *((_DWORD *)this + 5345) + *((_DWORD *)this + 5346) > 0 )
          {
            VoxClass::FindAndPlay(aEvaInsufficien, -1);
            HouseClass::updateFactoryQueue(MEMORY[0x87F7E8]);
            v48 = Math::RoundToInt(*(double *)(MEMORY[0x87F7E8][7806] + 5800) * 900.0);
            ProductionTimeMult = Rules::GetProductionTimeMult(&MEMORY[0x87F7E8][539870], v48);
            *v47 = dword_A8ED54[12];
            *((_DWORD *)this + 5622) = v112;
            *((_DWORD *)this + 5623) = ProductionTimeMult;
          }
LABEL_147:
          v50 = *v47;
          v51 = *((_DWORD *)this + 5623);
          if ( *v47 != -1 )
          {
            if ( dword_A8ED54[12] - v50 >= v51 )
              goto LABEL_151;
            v51 -= dword_A8ED54[12] - v50;
          }
          if ( v51 )
          {
LABEL_154:
            v56 = *((_DWORD *)this + 5354);
            v110 = *((_DWORD *)this + 5353);
            Ticks = v56;
            if ( v110 >= v56 || !v56 || v110 && (double)v110 / (double)Ticks >= 1.0 )
            {
              dword_A8ED54[187] = 0;
            }
            else if ( DynamicVector::GetOrGrow(
                        (_DWORD *)this + 5460,
                        *(_DWORD *)(**(_DWORD **)(MEMORY[0x87F7E8][7806] + 2224) + 3576)) > 0
                   || DynamicVector::GetOrGrow(
                        (_DWORD *)this + 5460,
                        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 2224) + 4) + 3576)) > 0
                   || DynamicVector::GetOrGrow(
                        (_DWORD *)this + 5460,
                        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 2224) + 8) + 3576)) > 0 )
            {
              if ( !dword_A8ED54[187] )
              {
                VoxClass::FindAndPlay(aEvaLowpower, -1);
                v109 = Math::RoundToInt(*(double *)(MEMORY[0x87F7E8][7806] + 5312) * 900.0);
                v108 = *((_DWORD *)this + 22549);
                StringCSF = GetStringCSF((#72 *)aTxtLowPower, 0, g_Str_File_House_CPP, 2377);
                MessageListClass::AddMessage(&MEMORY[0x87F7E8][536862], 0, 0, StringCSF, v108, 16454, v109, 0);
                dword_A8ED54[187] = 1;
              }
              v58 = Math::RoundToInt(*(double *)(MEMORY[0x87F7E8][7806] + 5800) * 900.0);
              v59 = Rules::GetProductionTimeMult(&MEMORY[0x87F7E8][539870], v58);
              *((_DWORD *)this + 5615) = dword_A8ED54[12];
              *((_DWORD *)this + 5616) = v112;
              *((_DWORD *)this + 5617) = v59;
            }
            goto LABEL_165;
          }
LABEL_151:
          v52 = *((_DWORD *)this + 196);
          v53 = Float4::Sum((float *)this + 191);
          if ( (int)(v52 - Math::RoundToInt(v53)) < 30 && v52 > 50 )
          {
            v54 = Math::RoundToInt(*(double *)(MEMORY[0x87F7E8][7806] + 5800) * 900.0);
            v55 = Rules::GetProductionTimeMult(&MEMORY[0x87F7E8][539870], v54);
            *v47 = dword_A8ED54[12];
            *((_DWORD *)this + 5622) = v112;
            *((_DWORD *)this + 5623) = v55;
          }
          goto LABEL_154;
        }
        v46 -= dword_A8ED54[12] - v45;
      }
      if ( v46 )
        goto LABEL_147;
      goto LABEL_144;
    }
  }
LABEL_165:
  v60 = *((_DWORD *)this + 5367);
  if ( v60 && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v60 + 44))(*((_DWORD *)this + 5367)) == 1 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v60 + 292))(v60, 2);
  v61 = *((_DWORD *)this + 5609);
  v62 = *((_DWORD *)this + 5611);
  if ( v61 != -1 )
  {
    if ( dword_A8ED54[12] - v61 >= v62 )
    {
LABEL_173:
      v63 = v112;
      *((_DWORD *)this + 5609) = dword_A8ED54[12];
      *((_DWORD *)this + 5610) = v63;
      *((_DWORD *)this + 5611) = 90;
      *((_BYTE *)this + 582) = 0;
      goto LABEL_174;
    }
    v62 -= dword_A8ED54[12] - v61;
  }
  if ( !v62 || *((_BYTE *)this + 582) )
    goto LABEL_173;
LABEL_174:
  for ( j = 0; j < *((_DWORD *)this + 153); ++j )
  {
    v65 = *(_DWORD *)(*((_DWORD *)this + 150) + 4 * j);
    if ( SuperWeapon::UpdateSuperWeaponReadyState(v65, this == (#375 *)MEMORY[0x87F7E8][528729])
      && this == (#375 *)MEMORY[0x87F7E8][528729] )
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v65 + 40) + 64))(*(_DWORD *)(v65 + 40));
      Status = HouseClass::GetStatus((void *)0x39, 0);
      Sidebar::ActivateTab((int)MEMORY[0x87F7E8], Status);
    }
  }
  if ( MEMORY[0x87F7E8][536212]
    && !*((_BYTE *)this + 501)
    && dword_A8ED54[12] > 0
    && !*(_BYTE *)(*((_DWORD *)this + 13) + 422) )
  {
    if ( BYTE2(MEMORY[0x87F7E8][536222]) )
    {
      v67 = *(_DWORD **)(MEMORY[0x87F7E8][7806] + 2852);
      v68 = DynamicVector::GetOrGrow((_DWORD *)this + 5445, *(_DWORD *)(v67[1] + 3576));
      v69 = DynamicVector::GetOrGrow((_DWORD *)this + 5445, *(_DWORD *)(v67[2] + 3576)) + v68;
      v70 = DynamicVector::GetOrGrow((_DWORD *)this + 5445, *(_DWORD *)(*v67 + 3576)) + v69;
      if ( *((int *)this + 188) <= 0 && v70 <= 0 )
      {
LABEL_190:
        HouseClass::ClearLowPowerTargets(this);
        HouseClass::DefeatPlayer((int)this);
      }
    }
    else
    {
      v71 = *((_DWORD *)this + 188);
      v72 = VectorClass::GetCount((_DWORD *)this + 5465) + v71;
      v73 = VectorClass::GetCount((_DWORD *)this + 5470) + v72;
      v74 = VectorClass::GetCount((_DWORD *)this + 5475) + v73;
      v75 = *(_DWORD *)(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 2280) + 8);
      if ( v75 )
        v74 += DynamicVector::GetOrGrow((_DWORD *)this + 5460, *(_DWORD *)(v75 + 3576));
      if ( !v74 )
        goto LABEL_190;
    }
  }
  if ( !(dword_A8ED54[12] % 8) )
  {
    for ( k = *((_DWORD *)this + 18) - 1; k >= 0; --k )
      TeamClass::Update_0(*(void ***)(*((_DWORD *)this + 15) + 4 * k), 8, 0, dword_A8ED54[145], 0, 0);
  }
  v77 = *((_DWORD *)this + 5517);
  v78 = *((_DWORD *)this + 5519);
  if ( v77 == -1 )
  {
LABEL_197:
    if ( v78 )
      goto LABEL_206;
    goto LABEL_198;
  }
  if ( dword_A8ED54[12] - v77 < v78 )
  {
    v78 -= dword_A8ED54[12] - v77;
    goto LABEL_197;
  }
LABEL_198:
  v79 = *((_BYTE *)this + 492);
  if ( !MEMORY[0x87F7E8][536212] )
    v79 = v79 || *((_BYTE *)this + 493);
  if ( !v79 && !*(_BYTE *)(*((_DWORD *)this + 13) + 422) )
  {
    updated = House::UpdateHouseAI((unsigned int)this);
    *((_DWORD *)this + 5517) = dword_A8ED54[12];
    *((_DWORD *)this + 5518) = v112;
    *((_DWORD *)this + 5519) = updated;
  }
LABEL_206:
  v81 = *((_BYTE *)this + 492);
  if ( !MEMORY[0x87F7E8][536212] )
    v81 = v81 || *((_BYTE *)this + 493);
  if ( !v81 && !*(_BYTE *)(*((_DWORD *)this + 13) + 422) && !(dword_A8ED54[12] % 8) )
  {
    v82 = *((_DWORD *)this + 121);
    if ( !v82 || !MEMORY[0x87F7E8][536212] )
    {
      HouseClass::AutoBuild((int)this);
LABEL_251:
      HouseClass::AIUnitProduction(this);
      HouseClass::AIInfantryProduction(this);
      HouseClass::AIAircraftProduction(this);
      goto LABEL_252;
    }
    if ( v82 == 1 )
    {
      HouseClass::AutoBuild((int)this);
      v83 = *((_DWORD *)this + 5523);
      if ( v83 == -1
        || !(*(int (__thiscall **)(_DWORD, int, int, int, #375 *))(**(_DWORD **)(MEMORY[0x87F7E8][528673] + 4 * v83)
                                                                 + 148))(
              *(_DWORD *)(MEMORY[0x87F7E8][528673] + 4 * v83),
              1,
              1,
              1,
              this) )
      {
        goto LABEL_251;
      }
    }
    else if ( v82 == 2 )
    {
      HouseClass::AIUnitProduction(this);
      v84 = MEMORY[0x87F7E8][7806] + 2876;
      v85 = 1 << SuperWeaponTypeClass::FindByName((void *)(*((_DWORD *)this + 13) + 152));
      v86 = *(_DWORD *)(v84 + 16);
      v87 = 0;
      if ( v86 <= 0 )
        goto LABEL_233;
      v88 = *(_DWORD *)(v84 + 4);
      v89 = v88;
      while ( (v85 & *(_DWORD *)(*(_DWORD *)v89 + 1740)) == 0 )
      {
        ++v87;
        v89 += 4;
        if ( v87 >= v86 )
          goto LABEL_233;
      }
      if ( !*(_DWORD *)(v88 + 4 * v87) )
        goto LABEL_233;
      v90 = MEMORY[0x87F7E8][7806] + 2876;
      v91 = 1 << SuperWeaponTypeClass::FindByName((void *)(*((_DWORD *)this + 13) + 152));
      v92 = *(_DWORD *)(v90 + 16);
      v93 = 0;
      if ( v92 <= 0 )
      {
LABEL_231:
        v96 = 0;
      }
      else
      {
        v94 = *(_DWORD *)(v90 + 4);
        v95 = v94;
        while ( (v91 & *(_DWORD *)(*(_DWORD *)v95 + 1740)) == 0 )
        {
          ++v93;
          v95 += 4;
          if ( v93 >= v92 )
            goto LABEL_231;
        }
        v96 = *(_DWORD *)(v94 + 4 * v93);
      }
      if ( *((_DWORD *)this + 5524) != *(_DWORD *)(v96 + 3576) )
      {
LABEL_233:
        HouseClass::AIInfantryProduction(this);
        HouseClass::AIAircraftProduction(this);
      }
      v97 = *((_DWORD *)this + 5524);
      v98 = v97 == -1 && *((_DWORD *)this + 5525) == -1 && *((_DWORD *)this + 5526) == -1;
      if ( v97 != -1
        && !(*(int (__thiscall **)(_DWORD, int, int, int, #375 *))(**(_DWORD **)(MEMORY[0x87F7E8][528703] + 4 * v97)
                                                                 + 148))(
              *(_DWORD *)(MEMORY[0x87F7E8][528703] + 4 * v97),
              1,
              1,
              1,
              this) )
      {
        v98 = 1;
      }
      v99 = *((_DWORD *)this + 5525);
      if ( v99 != -1
        && !(*(int (__thiscall **)(_DWORD, int, int, int, #375 *))(**(_DWORD **)(MEMORY[0x87F7E8][539353] + 4 * v99)
                                                                 + 148))(
              *(_DWORD *)(MEMORY[0x87F7E8][539353] + 4 * v99),
              1,
              1,
              1,
              this) )
      {
        v98 = 1;
      }
      v100 = *((_DWORD *)this + 5526);
      if ( v100 != -1
        && !(*(int (__thiscall **)(_DWORD, int, int, int, #375 *))(**(_DWORD **)(MEMORY[0x87F7E8][536205] + 4 * v100)
                                                                 + 148))(
              *(_DWORD *)(MEMORY[0x87F7E8][536205] + 4 * v100),
              1,
              1,
              1,
              this)
        || v98 )
      {
        HouseClass::AutoBuild((int)this);
      }
    }
  }
LABEL_252:
  v101 = *((_BYTE *)this + 508);
  if ( (#375 *)MEMORY[0x87F7E8][528729] == this )
  {
    if ( !v101 )
      goto LABEL_267;
    *((_BYTE *)this + 508) = 0;
    v102 = *((_DWORD *)this + 30);
    for ( m = 0; m < v102; ++m )
    {
      v104 = *(_DWORD **)(*((_DWORD *)this + 27) + 4 * m);
      if ( v104
        && *((_BYTE *)v104 + 144)
        && (int)v104[27] > 0
        && (*(int (__thiscall **)(_DWORD *))(*v104 + 388))(v104) != 19
        && v104[45] != 19
        && MEMORY[0x87F7E8][528729] == v104[135] )
      {
        (*(void (__thiscall **)(_DWORD *))(*v104 + 1248))(v104);
      }
    }
    HouseClass::UpdateAllProductionTabs((char *)MEMORY[0x87F7E8]);
  }
  else
  {
    if ( !v101 )
      goto LABEL_267;
    *((_BYTE *)this + 508) = 0;
  }
  SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((int)this);
  SuperWeapon::UpdateSuperWeaponsUnavailableHouseClass(this);
LABEL_267:
  if ( !*((_BYTE *)this + 581) )
    goto LABEL_273;
  v105 = *((_DWORD *)this + 160);
  v106 = *((_DWORD *)this + 162);
  if ( v105 == -1 )
  {
LABEL_271:
    if ( v106 )
      goto LABEL_273;
    goto LABEL_272;
  }
  v107 = dword_A8ED54[12] - v105;
  if ( v107 < v106 )
  {
    v106 -= v107;
    goto LABEL_271;
  }
LABEL_272:
  *((_BYTE *)this + 581) = 0;
LABEL_273:
  if ( this == (#375 *)MEMORY[0x87F7E8][528729] )
  {
    if ( *((_BYTE *)this + 587) )
    {
      *((_BYTE *)this + 587) = 0;
      Radar::UpdateReveal(0, 0);
    }
  }
}

/* ASM:
Block           = dword ptr -34h
var_2B          = byte ptr -2Bh
var_28          = dword ptr -28h
var_1C          = dword ptr -1Ch

sub     esp, 4Ch
push    ebx
push    ebp
push    esi
mov     esi, ecx
xor     ebp, ebp
push    edi
mov     ecx, [esi+2A4h]
mov     eax, [esi+2ACh]
mov     edi, dword_A8ED54+30h
cmp     ecx, 0FFFFFFFFh
jz      short loc_4F846C
mov     edx, edi
sub     edx, ecx
cmp     edx, eax
jge     short loc_4F8490
sub     eax, edx

loc_4F846C:                             ; CODE XREF: HouseClass__Update_TogglePower+20↑j
cmp     eax, 1
jnz     short loc_4F8490
mov     ecx, [esp+5Ch+var_40]
xor     eax, eax
mov     [esi+2A4h], edi
mov     [esi+2A8h], ecx
mov     [esi+2ACh], eax
mov     byte ptr [esi+5778h], 1

loc_4F8490:                             ; CODE XREF: HouseClass__Update_TogglePower+28↑j
; HouseClass__Update_TogglePower+2F↑j
mov     edx, [esi+2B0h]
mov     eax, [esi+2B8h]
cmp     edx, 0FFFFFFFFh
jz      short loc_4F84AF
mov     ecx, dword_A8ED54+30h
sub     ecx, edx
cmp     ecx, eax
jge     short loc_4F84D9
sub     eax, ecx

loc_4F84AF:                             ; CODE XREF: HouseClass__Update_TogglePower+5F↑j
cmp     eax, 1
jnz     short loc_4F84D9
mov     edx, dword_A8ED54+30h
mov     ecx, [esp+5Ch+var_40]
xor     eax, eax
mov     [esi+2B0h], edx
mov     [esi+2B4h], ecx
mov     [esi+2B8h], eax
mov     byte ptr [esi+5779h], 1

loc_4F84D9:                             ; CODE XREF: HouseClass__Update_TogglePower+6B↑j
; HouseClass__Update_TogglePower+72↑j
mov     al, [esi+5778h]
test    al, al
jz      short loc_4F84F1
mov     ecx, esi
call    HouseClass__UpdatePower
mov     byte ptr [esi+5779h], 1

loc_4F84F1:                             ; CODE XREF: HouseClass__Update_TogglePower+A1↑j
mov     al, [esi+5779h]
test    al, al
jz      short loc_4F8511
cmp     ds:0A8B538h, ebp
jnz     short loc_4F850A
mov     ecx, esi
call    HouseClass__CanTogglePower

loc_4F850A:                             ; CODE XREF: HouseClass__Update_TogglePower+C1↑j
mov     ecx, esi
call    HouseClass__ToggleGapGeneratorReveal

loc_4F8511:                             ; CODE XREF: HouseClass__Update_TogglePower+B9↑j
mov     eax, dword_A8ED54+30h
mov     ecx, 64h ; 'd'
cdq
idiv    ecx
test    edx, edx
jnz     short loc_4F854B
cmp     [esi+5614h], ebp
jle     short loc_4F854B

loc_4F852A:                             ; CODE XREF: HouseClass__Update_TogglePower+109↓j
mov     eax, [esi+5608h]
mov     ecx, [eax+edx*8+4]
lea     eax, [eax+edx*8+4]
cmp     ecx, 1
jle     short loc_4F8540
dec     ecx
mov     [eax], ecx

loc_4F8540:                             ; CODE XREF: HouseClass__Update_TogglePower+FB↑j
mov     eax, [esi+5614h]
inc     edx
cmp     edx, eax
jl      short loc_4F852A

loc_4F854B:                             ; CODE XREF: HouseClass__Update_TogglePower+E0↑j
; HouseClass__Update_TogglePower+E8↑j
mov     eax, [esi+57E0h]
cmp     eax, ebp
jz      short loc_4F8564
lea     edx, [esp+5Ch+var_48]
mov     [esp+5Ch+var_48], ebp
mov     ecx, [eax]
push    edx
push    eax
call    dword ptr [ecx+10h]

loc_4F8564:                             ; CODE XREF: HouseClass__Update_TogglePower+113↑j
mov     eax, ds:0A8B238h
cmp     eax, ebp
mov     al, [esi+1ECh]
jnz     short loc_4F8587
test    al, al
jnz     short loc_4F8585
mov     al, [esi+1EDh]
test    al, al
jnz     short loc_4F8585
xor     al, al
jmp     short loc_4F8587
; ---------------------------------------------------------------------------

loc_4F8585:                             ; CODE XREF: HouseClass__Update_TogglePower+135↑j
; HouseClass__Update_TogglePower+13F↑j
mov     al, 1

loc_4F8587:                             ; CODE XREF: HouseClass__Update_TogglePower+131↑j
; HouseClass__Update_TogglePower+143↑j
test    al, al
jnz     short loc_4F85BE
mov     al, [esi+1F3h]
test    al, al
jnz     short loc_4F85A9
mov     ecx, ds:8871E0h
mov     eax, [esi+24Ch]
cmp     eax, [ecx+143Ch]
jl      short loc_4F85BE

loc_4F85A9:                             ; CODE XREF: HouseClass__Update_TogglePower+153↑j
mov     byte ptr [esi+1F3h], 1
mov     byte ptr [esi+1EEh], 1
mov     byte ptr [esi+1EFh], 1

loc_4F85BE:                             ; CODE XREF: HouseClass__Update_TogglePower+149↑j
; HouseClass__Update_TogglePower+167↑j
mov     al, [esi+1F7h]
mov     ebx, 78h ; 'x'
test    al, al
jz      loc_4F86FE
mov     edx, [esi+298h]
mov     ecx, [esi+2A0h]
cmp     edx, 0FFFFFFFFh
jz      short loc_4F85EF
mov     eax, dword_A8ED54+30h
sub     eax, edx
cmp     eax, ecx
jge     short loc_4F85F7
sub     ecx, eax

loc_4F85EF:                             ; CODE XREF: HouseClass__Update_TogglePower+1A0↑j
cmp     ecx, ebp
jnz     loc_4F86FE

loc_4F85F7:                             ; CODE XREF: HouseClass__Update_TogglePower+1AB↑j
cmp     ds:0A8B238h, ebp
jnz     short loc_4F860B
cmp     [esi+27Ch], ebp
jg      loc_4F86FE

loc_4F860B:                             ; CODE XREF: HouseClass__Update_TogglePower+1BD↑j
lea     ecx, [esp+5Ch+var_40]
call    Timer__GetTicks
mov     [esp+5Ch+var_44], eax
mov     [esp+5Ch+var_3C], ebx
call    Audio__IsPlaying
test    al, al
jz      short loc_4F8657

loc_4F8625:                             ; CODE XREF: HouseClass__Update_TogglePower+215↓j
mov     eax, [esp+5Ch+var_44]
mov     edi, [esp+5Ch+var_3C]
cmp     eax, 0FFFFFFFFh
jz      short loc_4F8645
lea     ecx, [esp+5Ch+var_40]
call    Timer__GetTicks
sub     eax, [esp+5Ch+var_44]
cmp     eax, edi
jge     short loc_4F8657
sub     edi, eax

loc_4F8645:                             ; CODE XREF: HouseClass__Update_TogglePower+1F0↑j
cmp     edi, ebp
jz      short loc_4F8657
call    Event__Dispatch
call    Audio__IsPlaying
test    al, al
jnz     short loc_4F8625

loc_4F8657:                             ; CODE XREF: HouseClass__Update_TogglePower+1E3↑j
; HouseClass__Update_TogglePower+201↑j ...
mov     byte ptr [esi+1F7h], 0
mov     ecx, ds:0A8B238h
cmp     ecx, ebp
jnz     short loc_4F8685
mov     al, [esi+1ECh]
test    al, al
jnz     short loc_4F8692
mov     al, [esi+1EDh]
test    al, al
jz      short loc_4F86F7
mov     byte ptr ds:0A83D49h, 1
jmp     short loc_4F86FE
; ---------------------------------------------------------------------------

loc_4F8685:                             ; CODE XREF: HouseClass__Update_TogglePower+226↑j
cmp     esi, ds:0A83D4Ch
setz    al
test    al, al
jz      short loc_4F869B

loc_4F8692:                             ; CODE XREF: HouseClass__Update_TogglePower+230↑j
mov     byte ptr ds:0A83D49h, 1
jmp     short loc_4F86FE
; ---------------------------------------------------------------------------

loc_4F869B:                             ; CODE XREF: HouseClass__Update_TogglePower+250↑j
cmp     ecx, 3
jz      short loc_4F86A5
cmp     ecx, 4
jnz     short loc_4F86F7

loc_4F86A5:                             ; CODE XREF: HouseClass__Update_TogglePower+25E↑j
mov     ecx, ds:0A8B23Ch
cmp     ecx, ebp
jz      short loc_4F86F7
mov     edx, [ecx]
call    dword ptr [edx+4]
test    al, al
jz      short loc_4F86F7
mov     ecx, ds:0A8B23Ch
mov     eax, [ecx]
call    dword ptr [eax+8]
test    al, al
jz      short loc_4F86F7
mov     eax, ds:0A8B238h
cmp     eax, ebp
mov     al, [esi+1ECh]
jnz     short loc_4F86EA
test    al, al
jnz     short loc_4F86E8
mov     al, [esi+1EDh]
test    al, al
jnz     short loc_4F86E8
xor     al, al
jmp     short loc_4F86EA
; ---------------------------------------------------------------------------

loc_4F86E8:                             ; CODE XREF: HouseClass__Update_TogglePower+298↑j
; HouseClass__Update_TogglePower+2A2↑j
mov     al, 1

loc_4F86EA:                             ; CODE XREF: HouseClass__Update_TogglePower+294↑j
; HouseClass__Update_TogglePower+2A6↑j
test    al, al
jz      short loc_4F86F7
mov     byte ptr ds:0A83D49h, 1
jmp     short loc_4F86FE
; ---------------------------------------------------------------------------

loc_4F86F7:                             ; CODE XREF: HouseClass__Update_TogglePower+23A↑j
; HouseClass__Update_TogglePower+263↑j ...
mov     byte ptr ds:0A8ECD0h, 1

loc_4F86FE:                             ; CODE XREF: HouseClass__Update_TogglePower+18B↑j
; HouseClass__Update_TogglePower+1B1↑j ...
mov     al, [esi+1F8h]
test    al, al
jz      loc_4F87C2
mov     edx, [esi+298h]
mov     ecx, [esi+2A0h]
cmp     edx, 0FFFFFFFFh
jz      short loc_4F872A
mov     eax, dword_A8ED54+30h
sub     eax, edx
cmp     eax, ecx
jge     short loc_4F8732
sub     ecx, eax

loc_4F872A:                             ; CODE XREF: HouseClass__Update_TogglePower+2DB↑j
cmp     ecx, ebp
jnz     loc_4F87C2

loc_4F8732:                             ; CODE XREF: HouseClass__Update_TogglePower+2E6↑j
lea     ecx, [esp+5Ch+var_40]
call    Timer__GetTicks
mov     [esp+5Ch+var_44], eax
mov     [esp+5Ch+var_3C], ebx
call    Audio__IsPlaying
test    al, al
jz      short loc_4F8780
or      ebx, 0FFFFFFFFh

loc_4F874F:                             ; CODE XREF: HouseClass__Update_TogglePower+33E↓j
mov     eax, [esp+5Ch+var_44]
mov     edi, [esp+5Ch+var_3C]
cmp     eax, ebx
jz      short loc_4F876E
lea     ecx, [esp+5Ch+var_40]
call    Timer__GetTicks
sub     eax, [esp+5Ch+var_44]
cmp     eax, edi
jge     short loc_4F8780
sub     edi, eax

loc_4F876E:                             ; CODE XREF: HouseClass__Update_TogglePower+319↑j
cmp     edi, ebp
jz      short loc_4F8780
call    Event__Dispatch
call    Audio__IsPlaying
test    al, al
jnz     short loc_4F874F

loc_4F8780:                             ; CODE XREF: HouseClass__Update_TogglePower+30A↑j
; HouseClass__Update_TogglePower+32A↑j ...
cmp     ds:0A8B238h, ebp
jnz     short loc_4F87A5
mov     al, [esi+1ECh]
test    al, al
jnz     short loc_4F87B2
mov     al, [esi+1EDh]
test    al, al
jz      short loc_4F87BB
mov     byte ptr ds:0A8ECD0h, 1
jmp     short loc_4F87C2
; ---------------------------------------------------------------------------

loc_4F87A5:                             ; CODE XREF: HouseClass__Update_TogglePower+346↑j
cmp     esi, ds:0A83D4Ch
setz    al
test    al, al
jz      short loc_4F87BB

loc_4F87B2:                             ; CODE XREF: HouseClass__Update_TogglePower+350↑j
mov     byte ptr ds:0A8ECD0h, 1
jmp     short loc_4F87C2
; ---------------------------------------------------------------------------

loc_4F87BB:                             ; CODE XREF: HouseClass__Update_TogglePower+35A↑j
; HouseClass__Update_TogglePower+370↑j
mov     byte ptr ds:0A83D49h, 1

loc_4F87C2:                             ; CODE XREF: HouseClass__Update_TogglePower+2C6↑j
; HouseClass__Update_TogglePower+2EC↑j ...
mov     al, [esi+1F6h]
test    al, al
jz      short loc_4F87FF
mov     ecx, [esi+298h]
mov     eax, [esi+2A0h]
cmp     ecx, 0FFFFFFFFh
jz      short loc_4F87ED
mov     edx, dword_A8ED54+30h
sub     edx, ecx
mov     ecx, edx
cmp     ecx, eax
jge     short loc_4F87F1
sub     eax, ecx

loc_4F87ED:                             ; CODE XREF: HouseClass__Update_TogglePower+39B↑j
cmp     eax, ebp
jnz     short loc_4F87FF

loc_4F87F1:                             ; CODE XREF: HouseClass__Update_TogglePower+3A9↑j
mov     ecx, esi
mov     byte ptr [esi+1F6h], 0
call    HouseClass__ClearLowPowerTargets

loc_4F87FF:                             ; CODE XREF: HouseClass__Update_TogglePower+38A↑j
; HouseClass__Update_TogglePower+3AF↑j
mov     eax, [esi+53A4h]
xor     ecx, ecx
cmp     eax, ebp
setle   cl
dec     ecx
xor     edx, edx
and     eax, ecx
mov     [esi+53A4h], eax
mov     eax, [esi+53A8h]
cmp     eax, ebp
setle   dl
dec     edx
and     eax, edx
mov     [esi+53A8h], eax
mov     eax, ds:0A83D4Ch
mov     ecx, [eax+30h]
mov     eax, [esi+30h]
cmp     ecx, eax
jnz     loc_4F890D
mov     eax, ds:0A8B238h
cmp     eax, 3
jz      short loc_4F8851
cmp     eax, 4
jnz     loc_4F890D

loc_4F8851:                             ; CODE XREF: HouseClass__Update_TogglePower+406↑j
mov     ecx, ds:0A8B23Ch
cmp     ecx, ebp
jz      loc_4F890D
mov     edx, [ecx]
call    dword ptr [edx+4]
test    al, al
jnz     loc_4F890D
mov     al, byte ptr dword_A8ED54+2E8h
test    al, 1
jnz     short loc_4F8892
mov     dl, al
push    1
or      dl, 1
push    ebp
mov     ecx, 886B88h
mov     byte ptr dword_A8ED54+2E8h, dl
call    Random__Range
mov     dword_A8ED54+294h, eax

loc_4F8892:                             ; CODE XREF: HouseClass__Update_TogglePower+433↑j
push    2
push    ebp
mov     ecx, 886B88h
call    Random__Range
test    eax, eax
jnz     short loc_4F890D
cmp     dword_A8ED54+294h, ebp
jz      short loc_4F88C2
mov     eax, ds:87F8DCh
mov     ecx, ds:87F924h
shl     eax, 0Bh
lea     eax, [eax+ecx+5834h]
jmp     short loc_4F88E2
; ---------------------------------------------------------------------------

loc_4F88C2:                             ; CODE XREF: HouseClass__Update_TogglePower+469↑j
mov     eax, ds:87F8E0h
mov     edx, ds:87F8DCh
lea     ecx, [eax+edx]
mov     edx, ds:87F924h
shl     ecx, 9
add     ecx, eax
lea     eax, [edx+ecx*4-77CCh]

loc_4F88E2:                             ; CODE XREF: HouseClass__Update_TogglePower+480↑j
mov     eax, [eax]
cmp     eax, ebp
jz      short loc_4F890D
cmp     dword ptr [eax+130h], 1
jnz     short loc_4F88FA
test    byte ptr [eax+12Ch], 18h
jz      short loc_4F890D

loc_4F88FA:                             ; CODE XREF: HouseClass__Update_TogglePower+4AF↑j
mov     eax, ds:0A8B230h
push    2
push    ebp
lea     ecx, [eax+218h]
call    Random__Range

loc_4F890D:                             ; CODE XREF: HouseClass__Update_TogglePower+3F8↑j
; HouseClass__Update_TogglePower+40B↑j ...
mov     dx, [esi+53E0h]
lea     ecx, [esi+53E0h]
cmp     dx, word ptr dword_A8ED54+244h
jnz     short loc_4F8934
mov     ax, [ecx+2]
cmp     ax, word ptr dword_A8ED54+246h
jz      loc_4F8A00

loc_4F8934:                             ; CODE XREF: HouseClass__Update_TogglePower+4E1↑j
mov     eax, dword_A8ED54+30h
mov     edi, 0Fh
cdq
idiv    edi
test    edx, edx
jnz     loc_4F8A00
push    ebp
lea     edx, [esp+60h+var_44]
push    ebp
push    edx
push    ecx
mov     ecx, 87F7E8h
mov     [esp+6Ch+var_44], ebp
mov     [esp+6Ch+var_40], ebp
call    CellCoord__To_CellObj
mov     ecx, eax
call    Object__FindClosestObjectCell
mov     edi, eax
cmp     edi, ebp
jz      loc_4F8A00
mov     al, [edi+14h]
mov     byte ptr [esp+5Ch+var_4C+3], 0
test    al, 4
jz      short loc_4F8990
mov     eax, [edi+5A4h]
mov     ebx, edi
cmp     eax, ebp
jz      short loc_4F8992
mov     al, 1
jmp     short loc_4F89A9
; ---------------------------------------------------------------------------

loc_4F8990:                             ; CODE XREF: HouseClass__Update_TogglePower+53E↑j
xor     ebx, ebx

loc_4F8992:                             ; CODE XREF: HouseClass__Update_TogglePower+54A↑j
mov     eax, [edi]
push    1
push    1
push    (offset dword_A8ED54+2A4h)
mov     ecx, edi
call    dword ptr [eax+174h]
mov     al, byte ptr [esp+5Ch+var_4C+3]

loc_4F89A9:                             ; CODE XREF: HouseClass__Update_TogglePower+54E↑j
cmp     ebx, ebp
jz      short loc_4F89B5
cmp     [ebx+5A4h], ebp
jnz     short loc_4F8A00

loc_4F89B5:                             ; CODE XREF: HouseClass__Update_TogglePower+56B↑j
test    al, al
jnz     short loc_4F8A00
mov     al, [edi+81h]
xor     ebx, ebx
test    al, al
jnz     short loc_4F8A00

loc_4F89C5:                             ; CODE XREF: HouseClass__Update_TogglePower+5BE↓j
mov     ecx, ebx
inc     ebx
cmp     ecx, 5
jge     short loc_4F8A00
mov     edx, [edi+6Ch]
mov     ecx, ds:8871E0h
mov     eax, [edi]
push    ebp
mov     [esp+60h+var_48], edx
mov     edx, [ecx+0FA8h]
push    ebp
push    1
push    ebp
push    edx
lea     ecx, [esp+70h+var_48]
push    ebp
push    ecx
mov     ecx, edi
call    dword ptr [eax+16Ch]
mov     al, [edi+81h]
test    al, al
jz      short loc_4F89C5

loc_4F8A00:                             ; CODE XREF: HouseClass__Update_TogglePower+4EE↑j
; HouseClass__Update_TogglePower+503↑j ...
mov     edx, [esi+5798h]
mov     eax, [esi+57A0h]
cmp     edx, 0FFFFFFFFh
jz      short loc_4F8A1F
mov     ecx, dword_A8ED54+30h
sub     ecx, edx
cmp     ecx, eax
jge     short loc_4F8A27
sub     eax, ecx

loc_4F8A1F:                             ; CODE XREF: HouseClass__Update_TogglePower+5CF↑j
cmp     eax, ebp
jnz     loc_4F8B08

loc_4F8A27:                             ; CODE XREF: HouseClass__Update_TogglePower+5DB↑j
mov     eax, ds:0A8B238h
cmp     eax, ebp
mov     al, [esi+1ECh]
jnz     short loc_4F8A4A
test    al, al
jnz     short loc_4F8A48
mov     al, [esi+1EDh]
test    al, al
jnz     short loc_4F8A48
xor     al, al
jmp     short loc_4F8A4A
; ---------------------------------------------------------------------------

loc_4F8A48:                             ; CODE XREF: HouseClass__Update_TogglePower+5F8↑j
; HouseClass__Update_TogglePower+602↑j
mov     al, 1

loc_4F8A4A:                             ; CODE XREF: HouseClass__Update_TogglePower+5F4↑j
; HouseClass__Update_TogglePower+606↑j
test    al, al
jnz     loc_4F8B08
mov     edx, [esi+34h]
mov     al, [edx+1A6h]
test    al, al
jnz     loc_4F8B08
push    ebp
mov     edx, esi
lea     ecx, [esp+60h+var_1C]
call    AISelectTeamHouseClass
lea     eax, [esp+5Ch+var_1C]
lea     ecx, [esp+5Ch+var_38]
push    eax
call    TeamTypeVector__CopyConstruct
mov     ebx, offset ??_7?$VectorClass@PBVTeamTypeClass@@@@6B@ ; const VectorClass<TeamTypeClass const *>::`vftable'
lea     ecx, [esp+5Ch+var_1C]
mov     [esp+5Ch+var_38], offset ??_7?$TypeList@PBVTeamTypeClass@@@@6B@ ; const TypeList<TeamTypeClass const *>::`vftable'
mov     [esp+5Ch+var_1C], ebx
call    VectorClass__ClearAndFree3
mov     eax, [esp+5Ch+var_28]
cmp     eax, ebp
jle     short loc_4F8ABB
xor     edi, edi
cmp     eax, ebp
jle     short loc_4F8ABB

loc_4F8AA5:                             ; CODE XREF: HouseClass__Update_TogglePower+679↓j
mov     ecx, [esp+5Ch+Block]
push    esi
mov     ecx, [ecx+edi*4]
call    TeamClass__CreateOneOf
mov     eax, [esp+5Ch+var_28]
inc     edi
cmp     edi, eax
jl      short loc_4F8AA5

loc_4F8ABB:                             ; CODE XREF: HouseClass__Update_TogglePower+65D↑j
; HouseClass__Update_TogglePower+663↑j
mov     ecx, ds:8871E0h
mov     edx, [esi+184h]
mov     eax, dword_A8ED54+30h
mov     ecx, [ecx+115Ch]
mov     ecx, [ecx+edx*4]
mov     edx, [esp+5Ch+var_40]
mov     [esi+5798h], eax
mov     eax, [esp+5Ch+Block]
mov     [esi+579Ch], edx
cmp     eax, ebp
mov     [esi+57A0h], ecx
mov     [esp+5Ch+var_38], ebx
jz      short loc_4F8B08
mov     cl, [esp+5Ch+var_2B]
test    cl, cl
jz      short loc_4F8B08
push    eax             ; Block
call    ??3_YAXPAX_Z
add     esp, 4

loc_4F8B08:                             ; CODE XREF: HouseClass__Update_TogglePower+5E1↑j
; HouseClass__Update_TogglePower+60C↑j ...
cmp     ds:0A83D4Ch, esi
jnz     loc_4F8DB1
cmp     [esi+2F0h], ebp
jnz     short loc_4F8B30
mov     al, ds:880999h
test    al, al
jz      short loc_4F8B30
push    ebp
mov     ecx, 87F7E8h
call    BuildingClass__TogglePower

loc_4F8B30:                             ; CODE XREF: HouseClass__Update_TogglePower+6DA↑j
; HouseClass__Update_TogglePower+6E3↑j
cmp     ds:0A83D4Ch, esi
jnz     loc_4F8DB1
mov     edx, [esi+57D4h]
mov     eax, [esi+57DCh]
lea     edi, [esi+57D4h]
cmp     edx, 0FFFFFFFFh
jz      short loc_4F8B61
mov     ecx, dword_A8ED54+30h
sub     ecx, edx
cmp     ecx, eax
jge     short loc_4F8B65
sub     eax, ecx

loc_4F8B61:                             ; CODE XREF: HouseClass__Update_TogglePower+711↑j
cmp     eax, ebp
jnz     short loc_4F8BE4

loc_4F8B65:                             ; CODE XREF: HouseClass__Update_TogglePower+71D↑j
mov     ecx, [esi+24h]
lea     eax, [esi+24h]
push    eax
call    dword ptr [ecx+18h]
cmp     eax, 64h ; 'd'
jge     short loc_4F8BE4
mov     edx, [esi+5388h]
mov     eax, [esi+5384h]
mov     ebx, [esi+5380h]
mov     ecx, [esi+537Ch]
add     edx, eax
add     edx, ebx
add     edx, ecx
test    edx, edx
jle     short loc_4F8BE4
push    0FFFFFFFFh      ; int
or      edx, 0FFFFFFFFh
mov     ecx, offset aEvaInsufficien ; "EVA_InsufficientFunds"
call    VoxClass__FindAndPlay
mov     ecx, 87F7E8h
call    HouseClass__updateFactoryQueue
mov     eax, ds:8871E0h
fld     qword ptr [eax+16A8h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
push    eax
mov     ecx, 0A8EB60h
call    Rules__GetProductionTimeMult
mov     ecx, dword_A8ED54+30h
mov     edx, edi
mov     [edx], ecx
mov     ecx, [esp+5Ch+var_40]
mov     [edx+4], ecx
mov     [edx+8], eax

loc_4F8BE4:                             ; CODE XREF: HouseClass__Update_TogglePower+723↑j
; HouseClass__Update_TogglePower+732↑j ...
mov     edx, [edi]
mov     ecx, [edi+8]
cmp     edx, 0FFFFFFFFh
jz      short loc_4F8BFB
mov     eax, dword_A8ED54+30h
sub     eax, edx
cmp     eax, ecx
jge     short loc_4F8BFF
sub     ecx, eax

loc_4F8BFB:                             ; CODE XREF: HouseClass__Update_TogglePower+7AC↑j
cmp     ecx, ebp
jnz     short loc_4F8C56

loc_4F8BFF:                             ; CODE XREF: HouseClass__Update_TogglePower+7B7↑j
mov     ebx, [esi+310h]
lea     ecx, [esi+2FCh]
call    Float4__Sum
call    Math__RoundToInt
mov     edx, ebx
sub     edx, eax
cmp     edx, 1Eh
jge     short loc_4F8C56
cmp     ebx, 32h ; '2'
jle     short loc_4F8C56
mov     eax, ds:8871E0h
fld     qword ptr [eax+16A8h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
push    eax
mov     ecx, 0A8EB60h
call    Rules__GetProductionTimeMult
mov     ecx, dword_A8ED54+30h
mov     [edi], ecx
mov     ecx, [esp+5Ch+var_40]
mov     [edi+4], ecx
mov     [edi+8], eax

loc_4F8C56:                             ; CODE XREF: HouseClass__Update_TogglePower+7BD↑j
; HouseClass__Update_TogglePower+7DC↑j ...
mov     ecx, [esi+53A4h]
mov     eax, [esi+53A8h]
cmp     ecx, eax
mov     [esp+5Ch+var_48], ecx
mov     [esp+5Ch+var_44], eax
jge     loc_4F8DAB
cmp     eax, ebp
jz      loc_4F8DAB
cmp     ecx, ebp
jz      short loc_4F8C97
fild    [esp+5Ch+var_48]
fidiv   [esp+5Ch+var_44]
fcomp   ds:dbl_7E1718
fnstsw  ax
test    ah, 1
jz      loc_4F8DAB

loc_4F8C97:                             ; CODE XREF: HouseClass__Update_TogglePower+83C↑j
mov     edx, ds:8871E0h
lea     edi, [esi+5550h]
mov     eax, [edx+8B0h]
mov     ecx, [eax]
mov     edx, [ecx+0DF8h]
mov     ecx, edi
push    edx
call    DynamicVector__GetOrGrow
test    eax, eax
jg      short loc_4F8D02
mov     eax, ds:8871E0h
mov     ecx, [eax+8B0h]
mov     edx, [ecx+4]
mov     ecx, edi
mov     eax, [edx+0DF8h]
push    eax
call    DynamicVector__GetOrGrow
test    eax, eax
jg      short loc_4F8D02
mov     ecx, ds:8871E0h
mov     edx, [ecx+8B0h]
mov     eax, [edx+8]
mov     ecx, [eax+0DF8h]
push    ecx
mov     ecx, edi
call    DynamicVector__GetOrGrow
test    eax, eax
jle     loc_4F8DB1

loc_4F8D02:                             ; CODE XREF: HouseClass__Update_TogglePower+87B↑j
; HouseClass__Update_TogglePower+89B↑j
cmp     dword_A8ED54+2ECh, ebp
jnz     short loc_4F8D6B
push    0FFFFFFFFh      ; int
or      edx, 0FFFFFFFFh
mov     ecx, offset aEvaLowpower ; "EVA_LowPower"
call    VoxClass__FindAndPlay
mov     edx, ds:8871E0h
push    ebp             ; char
fld     qword ptr [edx+14C0h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
push    eax             ; char
mov     eax, [esi+16054h]
push    4046h           ; int
push    eax             ; int
push    949h            ; int
push    offset g_Str_File_House_CPP ; "D:\\ra2mdpost\\House.CPP"
xor     edx, edx
mov     ecx, offset aTxtLowPower ; "TXT_LOW_POWER"
call    GetStringCSF
push    eax             ; wchar_t *
push    ebp             ; int
push    ebp             ; Source
mov     ecx, 0A8BC60h
call    MessageListClass__AddMessage
mov     dword_A8ED54+2ECh, 1

loc_4F8D6B:                             ; CODE XREF: HouseClass__Update_TogglePower+8C8↑j
mov     ecx, ds:8871E0h
fld     qword ptr [ecx+16A8h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
push    eax
mov     ecx, 0A8EB60h
call    Rules__GetProductionTimeMult
mov     ecx, dword_A8ED54+30h
lea     edx, [esi+57BCh]
mov     [esi+57BCh], ecx
mov     ecx, [esp+5Ch+var_40]
mov     [edx+4], ecx
mov     [edx+8], eax
jmp     short loc_4F8DB1
; ---------------------------------------------------------------------------

loc_4F8DAB:                             ; CODE XREF: HouseClass__Update_TogglePower+82C↑j
; HouseClass__Update_TogglePower+834↑j ...
mov     dword_A8ED54+2ECh, ebp

loc_4F8DB1:                             ; CODE XREF: HouseClass__Update_TogglePower+6CE↑j
; HouseClass__Update_TogglePower+6F6↑j ...
mov     edi, [esi+53DCh]
cmp     edi, ebp
jz      short loc_4F8DD3
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 1
jnz     short loc_4F8DD3
mov     eax, [edi]
push    2
mov     ecx, edi
call    dword ptr [eax+124h]

loc_4F8DD3:                             ; CODE XREF: HouseClass__Update_TogglePower+979↑j
; HouseClass__Update_TogglePower+985↑j
mov     edx, [esi+57A4h]
mov     eax, [esi+57ACh]
cmp     edx, 0FFFFFFFFh
jz      short loc_4F8DF2
mov     ecx, dword_A8ED54+30h
sub     ecx, edx
cmp     ecx, eax
jge     short loc_4F8E00
sub     eax, ecx

loc_4F8DF2:                             ; CODE XREF: HouseClass__Update_TogglePower+9A2↑j
cmp     eax, ebp
jz      short loc_4F8E00
mov     al, [esi+246h]
test    al, al
jz      short loc_4F8E28

loc_4F8E00:                             ; CODE XREF: HouseClass__Update_TogglePower+9AE↑j
; HouseClass__Update_TogglePower+9B4↑j
mov     ecx, dword_A8ED54+30h
mov     edx, [esp+5Ch+var_40]
mov     eax, 5Ah ; 'Z'
mov     [esi+57A4h], ecx
mov     [esi+57A8h], edx
mov     [esi+57ACh], eax
mov     byte ptr [esi+246h], 0

loc_4F8E28:                             ; CODE XREF: HouseClass__Update_TogglePower+9BE↑j
mov     eax, [esi+264h]
xor     ebx, ebx
cmp     eax, ebp
jle     short loc_4F8E86

loc_4F8E34:                             ; CODE XREF: HouseClass__Update_TogglePower+A44↓j
mov     eax, [esi+258h]
mov     edi, [eax+ebx*4]
mov     eax, ds:0A83D4Ch
cmp     esi, eax
setz    cl
push    ecx
mov     ecx, edi
call    SuperWeapon__UpdateSuperWeaponReadyState
test    al, al
jz      short loc_4F8E7B
cmp     esi, ds:0A83D4Ch
jnz     short loc_4F8E7B
mov     ecx, [edi+28h]
mov     edx, [ecx]
call    dword ptr [edx+40h]
push    ebp
mov     edx, eax
mov     ecx, 39h ; '9'
call    HouseClass__GetStatus
push    eax
mov     ecx, 87F7E8h
call    Sidebar__ActivateTab

loc_4F8E7B:                             ; CODE XREF: HouseClass__Update_TogglePower+A11↑j
; HouseClass__Update_TogglePower+A19↑j
mov     eax, [esi+264h]
inc     ebx
cmp     ebx, eax
jl      short loc_4F8E34

loc_4F8E86:                             ; CODE XREF: HouseClass__Update_TogglePower+9F2↑j
cmp     ds:0A8B238h, ebp
jz      loc_4F8F87
mov     al, [esi+1F5h]
test    al, al
jnz     loc_4F8F87
cmp     dword_A8ED54+30h, ebp
jle     loc_4F8F87
mov     eax, [esi+34h]
mov     cl, [eax+1A6h]
test    cl, cl
jnz     loc_4F8F87
mov     al, ds:0A8B262h
test    al, al
jz      short loc_4F8F21
mov     ecx, ds:8871E0h
lea     ebx, [esi+5514h]
mov     ebp, [ecx+0B24h]
mov     ecx, ebx
mov     edx, [ebp+4]
mov     eax, [edx+0DF8h]
push    eax
call    DynamicVector__GetOrGrow
mov     ecx, [ebp+8]
mov     edi, eax
mov     edx, [ecx+0DF8h]
mov     ecx, ebx
push    edx
call    DynamicVector__GetOrGrow
add     edi, eax
mov     eax, [ebp+0]
mov     ecx, [eax+0DF8h]
push    ecx
mov     ecx, ebx
call    DynamicVector__GetOrGrow
add     edi, eax
mov     eax, [esi+2F0h]
test    eax, eax
jg      short loc_4F8F87
test    edi, edi
jg      short loc_4F8F87
jmp     short loc_4F8F79
; ---------------------------------------------------------------------------

loc_4F8F21:                             ; CODE XREF: HouseClass__Update_TogglePower+A84↑j
mov     edi, [esi+2F0h]
lea     ecx, [esi+5564h]
call    VectorClass__GetCount
lea     ecx, [esi+5578h]
add     edi, eax
call    VectorClass__GetCount
lea     ecx, [esi+558Ch]
add     edi, eax
call    VectorClass__GetCount
mov     edx, ds:8871E0h
add     edi, eax
mov     eax, [edx+8E8h]
mov     eax, [eax+8]
cmp     eax, ebp
jz      short loc_4F8F75
mov     ecx, [eax+0DF8h]
push    ecx
lea     ecx, [esi+5550h]
call    DynamicVector__GetOrGrow
add     edi, eax

loc_4F8F75:                             ; CODE XREF: HouseClass__Update_TogglePower+B1F↑j
cmp     edi, ebp
jnz     short loc_4F8F87

loc_4F8F79:                             ; CODE XREF: HouseClass__Update_TogglePower+ADF↑j
mov     ecx, esi
call    HouseClass__ClearLowPowerTargets
mov     ecx, esi
call    HouseClass__DefeatPlayer

loc_4F8F87:                             ; CODE XREF: HouseClass__Update_TogglePower+A4C↑j
; HouseClass__Update_TogglePower+A5A↑j ...
mov     edx, dword_A8ED54+30h
and     edx, 80000007h
jns     short loc_4F8F9A
dec     edx
or      edx, 0FFFFFFF8h
inc     edx

loc_4F8F9A:                             ; CODE XREF: HouseClass__Update_TogglePower+B53↑j
jnz     short loc_4F8FBE
mov     edi, [esi+48h]
dec     edi
js      short loc_4F8FBE

loc_4F8FA2:                             ; CODE XREF: HouseClass__Update_TogglePower+B7C↓j
mov     eax, dword_A8ED54+244h
mov     ecx, [esi+3Ch]
push    0               ; int
push    0               ; int
mov     ecx, [ecx+edi*4] ; void **
push    eax             ; int
push    0               ; int
push    8               ; int
call    TeamClass__Update_0
dec     edi
jns     short loc_4F8FA2

loc_4F8FBE:                             ; CODE XREF: HouseClass__Update_TogglePower:loc_4F8F9A↑j
; HouseClass__Update_TogglePower+B60↑j
mov     edx, [esi+5634h]
mov     eax, [esi+563Ch]
cmp     edx, 0FFFFFFFFh
jz      short loc_4F8FDD
mov     ecx, dword_A8ED54+30h
sub     ecx, edx
cmp     ecx, eax
jge     short loc_4F8FE1
sub     eax, ecx

loc_4F8FDD:                             ; CODE XREF: HouseClass__Update_TogglePower+B8D↑j
test    eax, eax
jnz     short loc_4F9038

loc_4F8FE1:                             ; CODE XREF: HouseClass__Update_TogglePower+B99↑j
mov     eax, ds:0A8B238h
test    eax, eax
mov     al, [esi+1ECh]
jnz     short loc_4F9004
test    al, al
jnz     short loc_4F9002
mov     al, [esi+1EDh]
test    al, al
jnz     short loc_4F9002
xor     al, al
jmp     short loc_4F9004
; ---------------------------------------------------------------------------

loc_4F9002:                             ; CODE XREF: HouseClass__Update_TogglePower+BB2↑j
; HouseClass__Update_TogglePower+BBC↑j
mov     al, 1

loc_4F9004:                             ; CODE XREF: HouseClass__Update_TogglePower+BAE↑j
; HouseClass__Update_TogglePower+BC0↑j
test    al, al
jnz     short loc_4F9038
mov     edx, [esi+34h]
mov     al, [edx+1A6h]
test    al, al
jnz     short loc_4F9038
mov     ecx, esi
call    House__UpdateHouseAI
mov     ecx, dword_A8ED54+30h
mov     [esi+5634h], ecx
mov     ecx, [esp+5Ch+var_40]
mov     [esi+5638h], ecx
mov     [esi+563Ch], eax

loc_4F9038:                             ; CODE XREF: HouseClass__Update_TogglePower+B9F↑j
; HouseClass__Update_TogglePower+BC6↑j ...
mov     eax, ds:0A8B238h
test    eax, eax
mov     al, [esi+1ECh]
jnz     short loc_4F905B
test    al, al
jnz     short loc_4F9059
mov     al, [esi+1EDh]
test    al, al
jnz     short loc_4F9059
xor     al, al
jmp     short loc_4F905B
; ---------------------------------------------------------------------------

loc_4F9059:                             ; CODE XREF: HouseClass__Update_TogglePower+C09↑j
; HouseClass__Update_TogglePower+C13↑j
mov     al, 1

loc_4F905B:                             ; CODE XREF: HouseClass__Update_TogglePower+C05↑j
; HouseClass__Update_TogglePower+C17↑j
test    al, al
jnz     loc_4F9265
mov     edx, [esi+34h]
mov     al, [edx+1A6h]
test    al, al
jnz     loc_4F9265
mov     eax, dword_A8ED54+30h
and     eax, 80000007h
jns     short loc_4F9085
dec     eax
or      eax, 0FFFFFFF8h
inc     eax

loc_4F9085:                             ; CODE XREF: HouseClass__Update_TogglePower+C3E↑j
jnz     loc_4F9265
mov     eax, [esi+1E4h]
test    eax, eax
jz      loc_4F9249
mov     ecx, ds:0A8B238h
test    ecx, ecx
jz      loc_4F9249
cmp     eax, 1
jnz     short loc_4F90E7
mov     ecx, esi
call    HouseClass__AutoBuild
mov     eax, [esi+564Ch]
cmp     eax, 0FFFFFFFFh
jz      loc_4F9250
mov     ecx, ds:0A83C6Ch
push    esi
push    1
push    1
mov     ecx, [ecx+eax*4]
push    1
mov     edx, [ecx]
call    dword ptr [edx+94h]
test    eax, eax
jnz     loc_4F9265
jmp     loc_4F9250
; ---------------------------------------------------------------------------

loc_4F90E7:                             ; CODE XREF: HouseClass__Update_TogglePower+C6A↑j
cmp     eax, 2
jnz     loc_4F9265
mov     ecx, esi
call    HouseClass__AIUnitProduction
mov     eax, ds:8871E0h
mov     ecx, [esi+34h]
add     ecx, 98h        ; void *
lea     edi, [eax+0B3Ch]
call    SuperWeaponTypeClass__FindByName
mov     edx, 1
mov     ecx, eax
shl     edx, cl
mov     ecx, [edi+10h]
xor     eax, eax
test    ecx, ecx
jle     short loc_4F9196
mov     edi, [edi+4]
mov     ebx, edi

loc_4F9127:                             ; CODE XREF: HouseClass__Update_TogglePower+CF7↓j
mov     ebp, [ebx]
test    [ebp+6CCh], edx
jnz     short loc_4F913B
inc     eax
add     ebx, 4
cmp     eax, ecx
jl      short loc_4F9127
jmp     short loc_4F9196
; ---------------------------------------------------------------------------

loc_4F913B:                             ; CODE XREF: HouseClass__Update_TogglePower+CEF↑j
cmp     dword ptr [edi+eax*4], 0
jz      short loc_4F9196
mov     ecx, ds:8871E0h
lea     edi, [ecx+0B3Ch]
mov     ecx, [esi+34h]
add     ecx, 98h        ; void *
call    SuperWeaponTypeClass__FindByName
mov     edx, 1
mov     ecx, eax
shl     edx, cl
mov     ecx, [edi+10h]
xor     eax, eax
test    ecx, ecx
jle     short loc_4F9184
mov     edi, [edi+4]
mov     ebx, edi

loc_4F9172:                             ; CODE XREF: HouseClass__Update_TogglePower+D42↓j
mov     ebp, [ebx]
test    [ebp+6CCh], edx
jnz     short loc_4F91C5
inc     eax
add     ebx, 4
cmp     eax, ecx
jl      short loc_4F9172

loc_4F9184:                             ; CODE XREF: HouseClass__Update_TogglePower+D2B↑j
xor     eax, eax

loc_4F9186:                             ; CODE XREF: HouseClass__Update_TogglePower+D88↓j
mov     edx, [esi+5650h]
mov     ecx, [eax+0DF8h]
cmp     edx, ecx
jz      short loc_4F91A4

loc_4F9196:                             ; CODE XREF: HouseClass__Update_TogglePower+CE0↑j
; HouseClass__Update_TogglePower+CF9↑j ...
mov     ecx, esi
call    HouseClass__AIInfantryProduction
mov     ecx, esi
call    HouseClass__AIAircraftProduction

loc_4F91A4:                             ; CODE XREF: HouseClass__Update_TogglePower+D54↑j
mov     eax, [esi+5650h]
or      edi, 0FFFFFFFFh
cmp     eax, edi
jnz     short loc_4F91CA
cmp     [esi+5654h], edi
jnz     short loc_4F91CA
cmp     [esi+5658h], edi
jnz     short loc_4F91CA
mov     bl, 1
jmp     short loc_4F91CC
; ---------------------------------------------------------------------------

loc_4F91C5:                             ; CODE XREF: HouseClass__Update_TogglePower+D3A↑j
mov     eax, [edi+eax*4]
jmp     short loc_4F9186
; ---------------------------------------------------------------------------

loc_4F91CA:                             ; CODE XREF: HouseClass__Update_TogglePower+D6F↑j
; HouseClass__Update_TogglePower+D77↑j ...
xor     bl, bl

loc_4F91CC:                             ; CODE XREF: HouseClass__Update_TogglePower+D83↑j
cmp     eax, edi
jz      short loc_4F91EE
mov     ecx, ds:0A83CE4h
push    esi
push    1
push    1
mov     ecx, [ecx+eax*4]
push    1
mov     edx, [ecx]
call    dword ptr [edx+94h]
test    eax, eax
jnz     short loc_4F91EE
mov     bl, 1

loc_4F91EE:                             ; CODE XREF: HouseClass__Update_TogglePower+D8E↑j
; HouseClass__Update_TogglePower+DAA↑j
mov     eax, [esi+5654h]
cmp     eax, edi
jz      short loc_4F9216
mov     ecx, ds:0A8E34Ch
push    esi
push    1
push    1
mov     ecx, [ecx+eax*4]
push    1
mov     edx, [ecx]
call    dword ptr [edx+94h]
test    eax, eax
jnz     short loc_4F9216
mov     bl, 1

loc_4F9216:                             ; CODE XREF: HouseClass__Update_TogglePower+DB6↑j
; HouseClass__Update_TogglePower+DD2↑j
mov     eax, [esi+5658h]
cmp     eax, edi
jz      short loc_4F923C
mov     ecx, ds:0A8B21Ch
push    esi
push    1
push    1
mov     ecx, [ecx+eax*4]
push    1
mov     edx, [ecx]
call    dword ptr [edx+94h]
test    eax, eax
jz      short loc_4F9240

loc_4F923C:                             ; CODE XREF: HouseClass__Update_TogglePower+DDE↑j
test    bl, bl
jz      short loc_4F9265

loc_4F9240:                             ; CODE XREF: HouseClass__Update_TogglePower+DFA↑j
mov     ecx, esi
call    HouseClass__AutoBuild
jmp     short loc_4F9265
; ---------------------------------------------------------------------------

loc_4F9249:                             ; CODE XREF: HouseClass__Update_TogglePower+C53↑j
; HouseClass__Update_TogglePower+C61↑j
mov     ecx, esi
call    HouseClass__AutoBuild

loc_4F9250:                             ; CODE XREF: HouseClass__Update_TogglePower+C7C↑j
; HouseClass__Update_TogglePower+CA2↑j
mov     ecx, esi
call    HouseClass__AIUnitProduction
mov     ecx, esi
call    HouseClass__AIInfantryProduction
mov     ecx, esi
call    HouseClass__AIAircraftProduction

loc_4F9265:                             ; CODE XREF: HouseClass__Update_TogglePower+C1D↑j
; HouseClass__Update_TogglePower+C2E↑j ...
mov     eax, ds:0A83D4Ch
cmp     eax, esi
mov     al, [esi+1FCh]
jnz     short loc_4F92E9
test    al, al
jz      loc_4F9302
mov     byte ptr [esi+1FCh], 0
mov     ebp, [esi+78h]
xor     ebx, ebx
test    ebp, ebp
jle     short loc_4F92DD

loc_4F928C:                             ; CODE XREF: HouseClass__Update_TogglePower+E9B↓j
mov     eax, [esi+6Ch]
mov     edi, [eax+ebx*4]
test    edi, edi
jz      short loc_4F92D8
mov     al, [edi+90h]
test    al, al
jz      short loc_4F92D8
mov     eax, [edi+6Ch]
test    eax, eax
jle     short loc_4F92D8
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+184h]
cmp     eax, 13h
jz      short loc_4F92D8
cmp     dword ptr [edi+0B4h], 13h
jz      short loc_4F92D8
mov     eax, ds:0A83D4Ch
mov     ecx, [edi+21Ch]
cmp     eax, ecx
jnz     short loc_4F92D8
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+4E0h]

loc_4F92D8:                             ; CODE XREF: HouseClass__Update_TogglePower+E54↑j
; HouseClass__Update_TogglePower+E5E↑j ...
inc     ebx
cmp     ebx, ebp
jl      short loc_4F928C

loc_4F92DD:                             ; CODE XREF: HouseClass__Update_TogglePower+E4A↑j
mov     ecx, 87F7E8h
call    HouseClass__UpdateAllProductionTabs
jmp     short loc_4F92F4
; ---------------------------------------------------------------------------

loc_4F92E9:                             ; CODE XREF: HouseClass__Update_TogglePower+E32↑j
test    al, al
jz      short loc_4F9302
mov     byte ptr [esi+1FCh], 0

loc_4F92F4:                             ; CODE XREF: HouseClass__Update_TogglePower+EA7↑j
mov     ecx, esi
call    SuperWeapon__UpdateSuperWeaponsOwnedHouseClass
mov     ecx, esi
call    SuperWeapon__UpdateSuperWeaponsUnavailableHouseClass

loc_4F9302:                             ; CODE XREF: HouseClass__Update_TogglePower+E36↑j
; HouseClass__Update_TogglePower+EAB↑j
mov     al, [esi+245h]
test    al, al
jz      short loc_4F9338
mov     ecx, [esi+280h]
mov     eax, [esi+288h]
cmp     ecx, 0FFFFFFFFh
jz      short loc_4F932D
mov     edx, dword_A8ED54+30h
sub     edx, ecx
mov     ecx, edx
cmp     ecx, eax
jge     short loc_4F9331
sub     eax, ecx

loc_4F932D:                             ; CODE XREF: HouseClass__Update_TogglePower+EDB↑j
test    eax, eax
jnz     short loc_4F9338

loc_4F9331:                             ; CODE XREF: HouseClass__Update_TogglePower+EE9↑j
mov     byte ptr [esi+245h], 0

loc_4F9338:                             ; CODE XREF: HouseClass__Update_TogglePower+ECA↑j
; HouseClass__Update_TogglePower+EEF↑j
cmp     esi, ds:0A83D4Ch
jnz     short loc_4F935F
mov     al, [esi+24Bh]
test    al, al
jz      short loc_4F935F
push    0
push    0
mov     ecx, 87F7E8h
mov     byte ptr [esi+24Bh], 0
call    Radar__UpdateReveal

loc_4F935F:                             ; CODE XREF: HouseClass__Update_TogglePower+EFE↑j
; HouseClass__Update_TogglePower+F08↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 4Ch
retn
*/
} }

// ==== BACKFILL 0x004754B0  OverlayTypeClass::ReadINIString  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int OverlayTypeClass::ReadINIString(CCINIClass * aP1, unsigned char * a2, AnimTypeClass * aP3)
{
{
    INIClass *v5;
    INIClass Destination[2];
    v5 = (INIClass *)sub_48DFD0((unsigned int)aP3);
    if ( INIClass::GetString(this, (INIClass *)aP1, a2, v5, Destination, 128) )
    return OverlayTypeClass::LookupByName(Destination);
    else
    return (int)aP3->__pad_0;
}
}

// ==== BACKFILL 0x00475540  SuperWeaponTypeClass::FindOrCreate  cls=SuperWeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SuperWeaponTypeClass::FindOrCreate(INIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{
{
    void *v4;
    HouseTypeClass *result;
    char *eax5;
    HouseTypeClass *v6;
    int v8;
    CCINIClass *i;
    INIClass Destination[2];
    if ( !INIClass::GetString(this, aP1, a2, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], Destination, 128) )
    return (int)aP3->__pad_0;
    v4 = (void *)PlayerSlot::NameToDialogID(Destination[0].__pad_0);
    if ( BuildingType::IsSpecialType(v4) )
    return (int)v4;
    result = (HouseTypeClass *)SuperWeaponTypeClass::FindByName(Destination);
    if ( result == (HouseTypeClass *)-1 )
  {
    eax5 = (char *)__2_YAPAXI_Z(0x1B0u);
    if ( eax5 )
    v6 = (HouseTypeClass *)SuperWeaponTypeClass::Construct(eax5, Destination[0].__pad_0);
    else
    v6 = 0;
    v8 = 0;
    if ( g_SuperWeaponTypeArray <= 0 )
    {
    return -1;
    }
    else
    {
    for ( i = (CCINIClass *)g_SuperWeaponTypeCount;
    *(HouseTypeClass **)i->__pad_0 != v6;
    i = (CCINIClass *)((char *)(i) + 4) ) {
    if ( ++v8 >= g_SuperWeaponTypeArray )
    return -1;
      }
    return v8;
    }
  }
    return (int)result->__pad_0;
}
}

// ==== BACKFILL 0x004756F0  HouseTypeClass::loadCountryData  cls=HouseTypeClass  sig=csp  renamed_refs=0  residual=- ====
int HouseTypeClass::loadCountryData(unsigned char * a2, unsigned char * a3, int a4)
{
{
    int result;
    int *v5;
    int *v6;
    int v7;
    int *i;
    char Destination[128];
    if ( !INIClass::GetString(this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) )
    return a4;
    result = HouseTypeClass::Find(Destination);
    if ( result == -1 )
  {
    v5 = __2_YAPAXI_Z(0xB4u);
    if ( v5 )
    v6 = SideClass::Construct(v5, Destination);
    else
    v6 = 0;
    v7 = 0;
    if ( g_ObjectTypeList <= 0 )
    {
    return -1;
    }
    else
    {
    for ( i = DataGlobal_8B4124; (int *)*i != v6; ++i )
      {
    if ( ++v7 >= g_ObjectTypeList )
    return -1;
      }
    return v7;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x004757D0  INIClass::GetBool  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::GetBool(INIClass * aP1, unsigned char * a2, int a4)
{
{
    int result;
    INIClass Destination[2];
    if ( !INIClass::GetString(this, aP1, a2, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], Destination, 128) )
    return a4;
    result = LookupNameIndex(Destination);
    if ( result == -1 )
    return a4;
    return result;
}
}

// ==== BACKFILL 0x00475820  INIClass::SetStringByIndex  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::SetStringByIndex(void* a1, void* a2, int a3) {
{
    if ( a3 < (CCINIClass *)*(&g_MatrixTransformState + 356) )
    return INIClass::SetString( this, a1, (INIClass *)a2, *((INIClass **)&(*(&g_MatrixTransformState + 353))->X + (int)a3));
    else
    return INIClass::SetString(this, a1, (INIClass *)a2, (INIClass *)&DataGlobal_817460.sectionHead[1]);
}
} }

// ==== BACKFILL 0x00475870  ScenarioClass::ReadAndParseString  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::ReadAndParseString(void* a1, void* a2, int a3) {
{
    INIClass Destination[2];
    if ( INIClass::GetString(this, aP1, a2, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], Destination, 128) )
    return (int)ScenarioClass::FindTerrainTypeIndex(Destination);
    else
    return a4;
}
} }

// ==== BACKFILL 0x004758C0  MapClass::loadTheaterINI  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
char MapClass::loadTheaterINI(INIClass * aP1, char * a2, int a4)
{
{
    return INIClass::SetString(this, aP1, (INIClass *)a2, (INIClass *)&Theater_Array[112 * a4]);
}
}

// ==== BACKFILL 0x004758F0  Scenario::FindBuildingTypeByName  cls=Scenario  sig=csp  renamed_refs=0  residual=- ====
int Scenario::FindBuildingTypeByName(unsigned char * a1, unsigned char * a2, CCINIClass * aP3)
{
{
    INIClass Destination[2];
    if ( INIClass::GetString(this, (INIClass *)a1, a2, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], Destination, 128) )
    return StringList::Find(&g_BuildingTypeClass_Count, Destination[0].__pad_0);
    else
    return (int)aP3->__pad_0;
}
}

// ==== BACKFILL 0x00475950  ScenarioClass::loadMapData  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::loadMapData(void* a1, void* a2, int a3) {
{
    INIClass *v5;
    v5 = (INIClass *)ScenarioClass::processEndgame(&g_BuildingTypeClass_Count, (INIClass *)aP1a);
    return INIClass::SetString(this, (INIClass *)a1, (INIClass *)a2, v5);
}
} }

// ==== BACKFILL 0x004759F0  INIClass::ReadStringValue  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::ReadStringValue(void* a1, void* a2, int a3) {
{
    INIClass Destination[2];
    if ( INIClass::GetString(this, (INIClass *)a1, a2, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], Destination, 128) )
    return INIClass::readSection(Destination);
    else
    return (int)a3->__pad_0;
}
} }

// ==== BACKFILL 0x00475B70  WeaponTypeClass::ReadTrajectoryData  cls=WeaponTypeClass  sig=csp  renamed_refs=1  residual=- ====
char WeaponTypeClass::ReadTrajectoryData(WeaponTypeClass * aP1, char * a2, int a4)
{
{
    BuildingTypeClass *v4;
    int v5;
    ObjectClass *v6;
    BuildingTypeClass *v8;
    char Source[125];
    short v10;
    char v11;
    Source[0] = DataGlobal_87C374.__pad_579C[33876];
    memset(&Source[1], 0, 0x7Cu);
    v10 = 0;
    v11 = 0;
    v4 = g_TriggerClassCount;
    if ( (int)g_TriggerClassCount > 32 )
    v4 = (BuildingTypeClass *)32;
    v5 = 0;
    v8 = v4;
    if ( (int)v4 > 0 )
  {
    v6 = (ObjectClass *)g_TriggerTypeCount;
    do
    {
    if ( ((1 << v5) & a4) != 0 )
      {
    if ( Source[0] )
    strcat(Source, (const char *)&DataGlobal_817F40.nextObject);
    strcat(Source, (const char *)(*(int *)v6->vtable1 + 36));
    v4 = v8;
      }
    ++v5;
    v6 = (ObjectClass *)((char *)(v6) + 4);
    }
    while ( v5 < (int)v4 );
  }
    return INIClass::SetString(this, (INIClass *)aP1, (INIClass *)a2, (INIClass *)Source);
}
}

// ==== BACKFILL 0x00475C70  WeaponTypeClass::ReadVeteranData  cls=WeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
char WeaponTypeClass::ReadVeteranData(unsigned char * a2, char * a3, int a4, int * Block, int a6, short a7, int a8, int a9, int a10)
{
{
    int *v10;
    int v11;
    char *SampleNameByIndex;
    char v13;
    char Source[125];
    short v17;
    char v18;
    Source[0] = g_INI_DefaultBuffer;
    memset(&Source[1], 0, 0x7Cu);
    v17 = 0;
    v18 = 0;
    if ( a8 > 0 )
  {
    v10 = Block;
    v11 = a8;
    do
    {
    if ( Source[0] )
    strcat(Source, Delimiter);
    SampleNameByIndex = VocClass::GetSampleNameByIndex(*v10++);
    strcat(Source, SampleNameByIndex);
    --v11;
    }
    while ( v11 );
  }
    v13 = INIClass::SetString(this, a2, a3, Source);
    if ( Block && HIBYTE(a7) )
    __3_YAXPAX_Z(Block);
    return v13;
}
}

// ==== BACKFILL 0x00475F30  ScenarioClass::SaveIntListToINI  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::SaveIntListToINI(void* a1, void* a2, int a3) {
{
    int i;
    char Buffer[12];
    char Source[509];
    short v9;
    char v10;
    Source[0] = DataGlobal_87C374.__pad_579C[33876];
    memset(&Source[1], 0, 0x1FCu);
    v9 = 0;
    v10 = 0;
    for ( i = 0; i < a3->sectionHead[0]; ++i )
  {
    if ( Source[0] )
    strcat(Source, (const char *)&DataGlobal_817F40.nextObject);
    sprintf(Buffer, (ObjectClass *)&DataGlobal_817F40.fallRate, *(INIClass **)(a3->headNode[0] + 4 * i));
    strcat(Source, Buffer);
  }
    return INIClass::SetString(this, a1, (INIClass *)a2, (INIClass *)Source);
}
} }

// ==== BACKFILL 0x00476240  ObjectTypeClass::ReadTypeListINI  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectTypeClass::ReadTypeListINI(unsigned char * Block, char * a2, ObjectTypeClass * aP3)
{
{
    int i;
    int v5;
    int v6;
    CCINIClass *v8;
    char v9;
    char *v10;
    char Source[509];
    short v12;
    char v13;
    v10 = this;
    Source[0] = DataGlobal_87C374.__pad_579C[33876];
    memset(&Source[1], 0, 0x1FCu);
    v12 = 0;
    v13 = 0;
    for ( i = 0; i < aP3->uniqueId; ++i )
  {
    if ( Source[0] )
    strcat(Source, (const char *)&DataGlobal_817F40.nextObject);
    v5 = *(int *)&aP3->__pad_0[4];
    v9 = 0;
    v6 = *(int *)(v5 + 4 * i);
    v9 = HIBYTE(v6);
    v8 = (CCINIClass *)(v6 & 0xFFFFFF);
    strcat(Source, (const char *)(System_Read_6E7330(&v8) + 36));
  }
    return INIClass::SetString(v10, (INIClass *)Block, (INIClass *)a2, (INIClass *)Source);
}
}

// ==== BACKFILL 0x00476340  ParticleSystemTypeClass::ReadXYZFromINI  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0  residual=- ====
float * ParticleSystemTypeClass::ReadXYZFromINI(float * a1, CCINIClass * aP2, unsigned char * a3, float * a4)
{
{
    char *v5;
    char *v6;
    char *v7;
    double v8;
    float v10;
    float v11;
    float v12;
    INIClass String[8];
    if ( INIClass::GetString(this, (INIClass *)aP2, a3, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], String, 512) )
  {
    v5 = strtok(String[0].__pad_0, Delimiter.__pad_0);
    v10 = atof(v5);
    v6 = strtok(0, Delimiter.__pad_0);
    v11 = atof(v6);
    v7 = strtok(0, Delimiter.__pad_0);
    v8 = atof(v7);
    v12 = v8;
    *a1 = v10;
    *((int*)(a1) + 1) = v11;
    *((int*)(a1) + 2) = v12;
    return a1;
  }
    else
  {
    *a1 = *a4;
    *((int*)(a1) + 1) = *((int*)(a4) + 1);
    *((int*)(a1) + 2) = *((int*)(a4) + 2);
    return a1;
  }
}
}

// ==== BACKFILL 0x00476420  INIClass::GetCoord2  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* INIClass::GetCoord2(void* a1, void* a2, void* a3, void* a4) {
{
    char *v5;
    int v6;
    char *v7;
    int v8;
    char *v9;
    int v10;
    INIClass String[8];
    if ( INIClass::GetString(this, (INIClass *)a2, a3, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], String, 512) )
  {
    v5 = strtok(String[0].__pad_0, Delimiter.__pad_0);
    v6 = atoi(v5);
    v7 = strtok(0, Delimiter.__pad_0);
    v8 = atoi(v7);
    v9 = strtok(0, Delimiter.__pad_0);
    v10 = atoi(v9);
    *a1 = v6;
    *((int*)(a1) + 1) = v8;
    *((int*)(a1) + 2) = v10;
    return a1;
  }
    else
  {
    *a1 = *a4;
    *((int*)(a1) + 1) = *((int*)(a4) + 1);
    *((int*)(a1) + 2) = *((int*)(a4) + 2);
    return a1;
  }
}
} }

// ==== BACKFILL 0x004766F0  ScenarioClass::SaveTypeNameListToINI  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::SaveTypeNameListToINI(void* a1, void* a2, int a3) {
{
    int v4;
    int v5;
    char Source[509];
    short v8;
    char v9;
    Source[0] = DataGlobal_87F8E4.__pad_5568[20760];
    memset(&Source[1], 0, 0x1FCu);
    v8 = 0;
    v9 = 0;
    if ( *(int *)(a4 + 16) > 0 )
  {
    v4 = *(int *)(a4 + 4);
    v5 = *(int *)(a4 + 16);
    do
    {
    if ( Source[0] )
    strcat(Source, Delimiter.__pad_0);
    strcat(Source, (const char *)(*(int *)(v4) + 36));
    v4 += 4;
    --v5;
    }
    while ( v5 );
  }
    return INIClass::SetString(this, aP1, (INIClass *)a2, (INIClass *)Source);
}
} }

// ==== BACKFILL 0x00476A20  INIClass::WriteSuperWeaponList  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIClass::WriteSuperWeaponList(void* a2, void* a3, int a4, void* Block, int a6, int a7, int a8, int a9, int a10) {
{
    void *v10;
    int *v11;
    int v12;
    int v13;
    char v14;
    char Source[125];
    short v18;
    char v19;
    Source[0] = g_INI_DefaultBuffer;
    v10 = Block;
    memset(&Source[1], 0, 0x7Cu);
    v18 = 0;
    v19 = 0;
    if ( a8 > 0 )
  {
    v11 = (int *)Block;
    v12 = a8;
    do
    {
    if ( Source[0] )
    strcat(Source, Delimiter);
    v13 = *v11++;
    strcat(Source, (const char *)(*((int *)(g_SuperWeaponTypeCount) + v13) + 36));
    --v12;
    }
    while ( v12 );
    v10 = Block;
  }
    v14 = INIClass::SetString(this, a2, a3, Source);
    if ( v10 && HIBYTE(a7) )
    __3_YAXPAX_Z(v10);
    return v14;
}
} }

// ==== BACKFILL 0x00476E20  sub_476E20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_476E20::sub_476E20()
{
{
    int v3[3];
    char v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    v3[1] = 0;
    v3[2] = 0;
    v4 = 0;
    v10 = 0;
    v11 = 0;
    v5 = 1732584193;
    v6 = -271733879;
    v7 = -1732584194;
    v8 = 271733878;
    v9 = -1009589776;
    v3[0] = (int)&vt_SHAPipe;
    INIClass::WriteToString((int *)this, (int)v3);
    SHA1::ComputeThunk(v3, (char *)(this + 65));
    this->M64 = 1;
    return Pipe::Dtor(v3);
}
}

// ==== BACKFILL 0x00476EA0  sub_476EA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_476EA0::sub_476EA0()
{
{
    this->M64 = 0;
}
}

// ==== BACKFILL 0x00476EB0  INIEntry::GetTechnoType  cls=INIEntry  sig=csp  renamed_refs=0  residual=- ====
int INIEntry::GetTechnoType(CCINIClass * aP1, unsigned char * a2)
{
{
    int ExitCellByName;
    int Index;
    int v6;
    int IndexByName;
    INIClass Destination[2];
    INIClass::GetString(this, (INIClass *)aP1, a2, (INIClass *)&DataGlobal_817460.sectionHead[1], Destination, 128);
    ExitCellByName = Factory::FindExitCellByName(Destination);
    if ( ExitCellByName != -1 )
    return *(int *)(*(int *)&g_NetworkPlayerBuffer.__pad_BC0[336] + 4 * ExitCellByName);
    Index = BuildingTypeClass::FindIndex(Destination);
    if ( Index != -1 )
    return *(int *)&g_UnitTypeCount2->__pad_0[4 * Index];
    v6 = TypeClass::FindByName(Destination);
    if ( v6 != -1 )
    return *(int *)&g_AircraftTypeCount->__pad_0[4 * v6];
    IndexByName = BuildingTypeClass::FindIndexByName(Destination);
    if ( IndexByName == -1 )
    return 0;
    else
    return *((int *)(g_TriggerTypeCount) + IndexByName);
}
}

// ==== BACKFILL 0x00476FC0  ObjectTypeClass::loadTypeMember_476FC0  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_476FC0(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{
{
    INIClass *v5;
    INIClass Destination[2];
    v5 = (INIClass *)sub_48E030((unsigned int)aP3);
    if ( INIClass::GetString(this, (INIClass *)aP1, a2, v5, Destination, 128) )
    return ObjectTypeClass::loadTypeMember_48DFF0(Destination);
    else
    return (int)aP3->__pad_0;
}
}

// ==== BACKFILL 0x00477050  AnimTypeClass::ReadINIString  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::ReadINIString(INIClass * aP1, unsigned char * a2, Layer a3)
{
{
    INIClass *v5;
    INIClass Destination[2];
    v5 = (INIClass *)globalHelper_08E090(a3);
    if ( INIClass::GetString(this, aP1, a2, v5, Destination, 128) )
    return AnimTypeClass::LookupByName(Destination);
    else
    return a3;
}
}

// ==== BACKFILL 0x00477590  ObjectTypeClass::loadTypeMember_5477590  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_5477590(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{
{
    char *v4;
    ObjectClass *result;
    bool v6;
    INIClass String[2];
    INIClass::GetString(this, (INIClass *)aP1, a2, *(&DataGlobal_81BABC + (int)aP3), String, 128);
    v4 = strtok(String[0].__pad_0, Delimiter.__pad_0);
    result = (ObjectClass *)_strcmpi(v4, g_INI_Key_None);
    if ( result )
  {
    if ( _strcmpi(v4, (char *)&DataGlobal_81BB58.headNode[1]) )
    {
    v6 = _strcmpi(v4, aStrong) == 0;
    result = (ObjectClass *)2;
    if ( !v6 )
    return (int)aP3->__pad_0;
    }
    else
    {
    return 1;
    }
  }
    return (int)result->__pad_0;
}
}

// ==== BACKFILL 0x00477640  INIEntry::ReadAbilities  cls=INIEntry  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIEntry::ReadAbilities(int a1, void* a2, void* a3, int a4) {
{
    short v5;
    char *i;
    ObjectClass *v7;
    VectorClass *v9;
    int v10;
    int v11;
    int v12;
    short v13;
    INIClass String[2];
    if ( INIClass::GetString(this, (INIClass *)aP2, a3, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], String, 128) )
  {
    v5 = 0;
    v13 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    for ( i = strtok(String[0].__pad_0, Delimiter.__pad_0); i; i = strtok(0, Delimiter.__pad_0) )
    {
    if ( !*i )
    break;
    v7 = INIEntry::LookupByName(i);
    if ( v7 != (ObjectClass *)-1 )
      {
    *((char *)&v9 + (int)v7) = 1;
    v5 = v13;
      }
    }
    *(int *)aP1->__pad_0 = v9;
    aP1->headNode[0] = v10;
    aP1->headNode[1] = v11;
    aP1->headNode[2] = v12;
    LOWORD(aP1->sectionHead[0]) = v5;
    return (int)aP1->__pad_0;
  }
    else
  {
    *(int *)aP1->__pad_0 = *(int *)a5;
    aP1->headNode[0] = *(int *)(a5 + 4);
    aP1->headNode[1] = *(int *)(a5 + 8);
    aP1->headNode[2] = *(int *)(a5 + 12);
    LOWORD(aP1->sectionHead[0]) = *(short *)(a5 + 16);
    return (int)aP1->__pad_0;
  }
}
} }

// ==== BACKFILL 0x00477750  VectorClass::ScalarDtor  cls=SHAPipe  sig=csp  renamed_refs=0  residual=- ====
int * VectorClass::ScalarDtor(char a2)
{
Pipe::Dtor((int *)this);
if ( (a2 & 1) != 0 )
    operator delete(this);
return (int *)this;
}

// ==== BACKFILL 0x004777B0  VectorClass::Copy  cls=VectorClass  sig=csp  renamed_refs=1  residual=- ====
unsigned int * VectorClass::Copy(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_int;
    if ( this != (int *)aP1 )
  {
    VectorClass::Destroy((int)this);
    v3 = aP1->Capacity;
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *((int *)aP1->Items + v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = aP1[1].vtable1;
    this->CapacityIncrement = aP1[1].Items;
    *(void**)this = &vt_TypeList_int;
    return this;
}
}

// ==== BACKFILL 0x004779E0  DynamicVectorClass::Copy  cls=DynamicVectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * DynamicVectorClass::Copy(DynamicVector * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_int;
    if ( this != (int *)aP1 )
  {
    VectorClass::Destroy((int)this);
    v3 = aP1->field_8;
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *(int *)(*(int *)&aP1->field_1[3] + 4 * v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = aP1->field_10;
    this->CapacityIncrement = *(int *)aP1->__pad_14;
    *(void**)this = &vt_DynamicVectorClass_int;
    return this;
}
}

// ==== BACKFILL 0x00477BE0  VectorClass::Construct  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * VectorClass::Construct(int a2, int a3)
{
{
    this->Items = (void*)(0);
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_int;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = (void*)(a3);
    return this;
    }
    this->Items = (void*)(__2_YAPAXI_Z(4 * a2));
    this->IsAllocated = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x00477D20  VectorClass::Destroy  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void VectorClass::Destroy()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// ==== BACKFILL 0x00477DB0  DynamicVectorClass::Construct  cls=DynamicVectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * DynamicVectorClass::Construct(int a2, int a3)
{
{
    this->Items = 0;
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_int;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = a3;
    }
    else
    {
    this->Items = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_int;
    this->CapacityIncrement = 10;
    this->Count = 0;
    return this;
}
}

// ==== BACKFILL 0x00477EC0  DynamicVector::Add_Alt  cls=DynamicVector  sig=csp  renamed_refs=2  residual=- ====
char DynamicVector::Add_Alt(VectorClass * aP1)
{
{
    MapClass *v3;
    int v4;
    int v6;
    VectorClass *v7;
    v3 = (MapClass *)this->DynamicVector_field_0x8;
    if ( this->DynamicVector_field_0x10 >= (int)v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity((char *)(v3) + v4, 0) )
    return 0;
  }
    v6 = this->DynamicVector_field_0x10;
    v7 = (VectorClass *)this->Items;
    this->DynamicVector_field_0x10 = v6 + 1;
    *(int *)&v7->vtable1[4 * v6] = *(int *)aP1->vtable1;
    return 1;
}
}

// ==== BACKFILL 0x00478220  INIClass::parseKeyValue  cls=INIClass  sig=csp  renamed_refs=4  residual=- ====
namespace gamemd { void* INIClass::parseKeyValue(void* a1) {
{
      int v3;
      char *v4;
      _BYTE *v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;

      this->headNode = 0;
      this->q008 = 0;
      this->q00C = 1;
      this->q00D = 0;
      *this = &vt_VectorClass_RGBClass;
      if ( this == a2 )
        return this;
      FilePipe_38::ddtor((int)this);
      v3 = a2[2];
      this->q008 = v3;
      if ( !v3 )
      {
        this->headNode = 0;
        this->q00D = 0;
        return this;
      }
      v4 = (char *)__2_YAPAXI_Z(3 * v3);
      if ( v4 )
      {
        if ( v3 - 1 >= 0 )
        {
          v5 = v4 + 2;
          v6 = v3;
          do
          {
            *(v5 - 2) = 0;
            *(v5 - 1) = 0;
            *v5 = 0;
            v5 += 3;
            --v6;
          }
          while ( v6 );
        }
      }
      else
      {
        v4 = 0;
      }
      this->headNode = v4;
      if ( !v4 )
        return this;
      v7 = this->q008;
      v8 = 0;
      this->q00D = 1;
      if ( v7 <= 0 )
        return this;
      v9 = 0;
      do
      {
        v10 = v9 + a2[1];
        v11 = this->headNode + v9;
        ++v8;
        v9 += 3;
        *(_WORD *)v11 = *(_WORD *)v10;
        *(_BYTE *)(v11 + 2) = *(_BYTE *)(v10 + 2);
      }
      while ( v8 < this->q008 );
      return this;
}
} }

// ==== BACKFILL 0x00478630  VectorClass::vt00  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
VectorClass * VectorClass::vt00(unsigned int * Block, char a2)
{
{
    void *v3;
    v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_int;
    if ( v3 && *((char*)(Block) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
  }
    *((char*)(Block) + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}
}

// ==== BACKFILL 0x00478720  TypeList::Copy  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TypeList::Copy(unsigned int * a2)
{
{
    int v3;
    void *v4;
    int v5;
    int v6;
    if ( this == a2 )
    return this;
    this->Clear();
    v3 = *((int*)(a2) + 2);
    this->Capacity = v3;
    if ( !v3 )
  {
    this->Items = 0;
    this->IsAllocated = 0;
    return this;
  }
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( !v4 )
    return this;
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 <= 0 )
    return this;
    do
  {
    *(int *)(this->Items + 4 * v6) = *(int *)(*((int*)(a2) + 1) + 4 * v6);
    ++v6;
  }
    while ( v6 < this->Capacity );
    return this;
}
}

// ==== BACKFILL 0x00478790  TypeList::TechnoTypeConstructor  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TypeList::TechnoTypeConstructor(int a2, int a3)
{
{
    this->Items = 0;
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_TechnoTypeClass;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = a3;
    return this;
    }
    this->Items = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x00478850  BuildingTypeClass::loadBuildingProperty_b_5478850  cls=BuildingTypeClass  sig=csp  renamed_refs=5  residual=IsAllocated ====
unsigned int * BuildingTypeClass::loadBuildingProperty_b_5478850(int a2, int a3)
{
{
    char *v4;
    char *v5;
    int v6;
    char *v8;
    char *v9;
    int v10;
    v4 = 0;
    this->vtable2 = 0;
    this->vtable3 = a2;
    this->vtable4 = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_RGBClass;
    if ( !a2 )
    return this;
    if ( !a3 )
  {
    v8 = (char *)__2_YAPAXI_Z(3 * a2);
    if ( v8 )
    {
    if ( a2 - 1 >= 0 )
      {
    v9 = v8 + 2;
    v10 = a2;
    do
        {
    *(v9 - 2) = 0;
    *(v9 - 1) = 0;
    *v9 = 0;
    v9 += 3;
    --v10;
        }
    while ( v10 );
      }
    v4 = v8;
    }
    this->vtable2 = v4;
    this->IsAllocated = 1;
    return this;
  }
    if ( a2 - 1 >= 0 )
  {
    v5 = (char *)(a3 + 2);
    v6 = a2;
    do
    {
    *(v5 - 2) = 0;
    *(v5 - 1) = 0;
    *v5 = 0;
    v5 += 3;
    --v6;
    }
    while ( v6 );
  }
    this->vtable2 = a3;
    return this;
}
}

// ==== BACKFILL 0x004790A0  Game::CheckForGameCD  cls=Game  sig=csp  renamed_refs=0  residual=- ====
int Game::CheckForGameCD()
{
{
    return AlwaysFindYRCD(DataGlobal_89E414, this);
}
}

// ==== BACKFILL 0x004790E0  CD::AlwaysAvailable  cls=CD  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CD::AlwaysAvailable(int a1) {
{
      if ( a2 == -2 )
        return 1;
      if ( g_Audio_MixerEnabled == 1 )
        return 1;
      this->q004 = -1;
      return CD::CheckDiscPresence(this, a2);
}
} }

// ==== BACKFILL 0x00479110  CD::NeverAsk  cls=CD  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool CD::NeverAsk(int a1) {
{
      int v3;
      BOOL v4;
      wchar_t *String;
      bool v6;
      BOOL v7;
      int v8;
      int v9;

      if ( this->q004 == -1 )
      {
        v3 = DataGlobal_A83D14;
        if ( DataGlobal_A83D14 == -1 )
          v3 = DataGlobal_A83D18;
        this->q004 = v3;
      }
      Theme::Stop(&g_BuildingTypeClass_Count, 0);
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) < 0;
      while ( (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) < 0 )
        (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance);
      Timer::PumpMessages((HWND *)g_BinkMoviePlayer);
      String = GetStringCSF(aTxtInsertCdDia, 0, aDRa2mdpostCdCp, 164);
      v6 = (unsigned __int8)CD::CreateDialog((LPARAM)String) != 0;
      Timer::PumpMessages((HWND *)g_BinkMoviePlayer);
      v7 = v4;
      v8 = v4 - 1;
      if ( v7 )
      {
        v9 = v8 + 1;
        do
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance);
          --v9;
        }
        while ( v9 );
      }
      if ( !v6 && this->q004 != -1 )
      {
        Theme::QueueSong((int)&g_BuildingTypeClass_Count, this->q004);
        this->q004 = -1;
      }
      return v6;
}
} }

// ==== BACKFILL 0x00479900  sub_479900  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_479900(char a1)
{
{
    UINT v1;
    DWORD v3;
    HANDLE FileA;
    char Buffer[8];
    CHAR FileName[8];
    sprintf(Buffer, g_Str_Trace__c__, a1 + 65);
    v1 = GetDriveTypeA(Buffer) - 2;
    if ( v1 )
  {
    if ( v1 != 3 )
    {
    Debug::Log();
    return -1;
    }
    v3 = 0x80000000;
  }
    else
  {
    v3 = -1073741824;
  }
    sprintf(FileName, g_Str_Trace______c_, a1 + 65);
    FileA = CreateFileA(FileName, v3, 3u, 0, 3u, 0, 0);
    if ( FileA == (HANDLE)-1 )
    Debug::Log();
    return (int)FileA;
}
}

// ==== BACKFILL 0x004799D0  sub_4799D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_4799D0(HANDLE hDevice)
{
{
    HANDLE v1;
    int v2;
    v1 = hDevice;
    v2 = 0;
    while ( !DeviceIoControl(v1, 0x90018u, 0, 0, 0, 0, (LPDWORD)&hDevice, 0) )
  {
    GetLastError();
    Debug::Log();
    Sleep(0x1F4u);
    if ( ++v2 >= 20 )
    return 0;
  }
    return 1;
}
}

// ==== BACKFILL 0x00479A40  sub_479A40  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_479A40(HANDLE hDevice)
{
{
    HANDLE v1;
    int v2;
    v1 = hDevice;
    v2 = 0;
    while ( !DeviceIoControl(v1, 0x9001Cu, 0, 0, 0, 0, (LPDWORD)&hDevice, 0) )
  {
    GetLastError();
    Debug::Log();
    Sleep(0x1F4u);
    if ( ++v2 >= 20 )
    return 0;
  }
    return 1;
}
}

// ==== BACKFILL 0x0047A1B0  sub_47A1B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectClass::sub_47A1B0(DWORD BytesReturned)
{
{
    AnimClass *FileA;
    char v5;
    Debug::Log();
    Debug::Log();
    LOBYTE(BytesReturned) = BytesReturned + 1;
    FileA = (AnimClass *)CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0);
    Debug::Log();
    if ( CDROM::LockVolume(this, FileA, BytesReturned, 0, 0) )
  {
    Debug::Log();
    Debug::Log();
    if ( sub_47A560(FileA, BytesReturned) )
    {
    Debug::Log();
    v5 = 1;
    }
    else
    {
    Debug::Log();
    v5 = 0;
    }
    DriveControlCD(this, FileA, BytesReturned);
    CloseHandle(FileA);
    Debug::Log();
    return v5;
  }
    else
  {
    Debug::Log();
    return 0;
  }
}
}

// ==== BACKFILL 0x0047A2D0  sub_47A2D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectClass::sub_47A2D0(DWORD BytesReturned)
{
{
    AnimClass *FileA;
    char v5;
    Debug::Log();
    Debug::Log();
    LOBYTE(BytesReturned) = BytesReturned + 1;
    FileA = (AnimClass *)CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0);
    Debug::Log();
    if ( CDROM::LockVolume(this, FileA, BytesReturned, 0, 0) )
  {
    Debug::Log();
    Debug::Log();
    if ( CDROM::DeviceIoControl(FileA, BytesReturned) )
    {
    Debug::Log();
    v5 = 1;
    }
    else
    {
    Debug::Log();
    v5 = 0;
    }
    DriveControlCD(this, FileA, BytesReturned);
    CloseHandle(FileA);
    Debug::Log();
    return v5;
  }
    else
  {
    Debug::Log();
    return 0;
  }
}
}

// ==== BACKFILL 0x0047A560  sub_47A560  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool sub_47A560(HANDLE hDevice, DWORD BytesReturned)
{
{
    char v2;
    char v4[2];
    int InBuffer[7];
    v2 = BytesReturned;
    memset(&InBuffer[1], 0, 0x18u);
    v4[1] = 0;
    CDROM::DeviceIoControl(hDevice, BytesReturned);
    InBuffer[0] = v2;
    InBuffer[1] = v4;
    v4[0] = 0;
    InBuffer[3] = 17421;
    InBuffer[2] = 2120;
    if ( !DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) )
  {
    GetLastError();
    Debug::Log();
    return 0;
  }
    return (InBuffer[6] & 1) == 0;
}
}

// ==== BACKFILL 0x0047A620  sub_47A620  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool sub_47A620(HANDLE hDevice, DWORD BytesReturned)
{
{
    int InBuffer[7];
    memset(&InBuffer[1], 0, 0x18u);
    InBuffer[0] = (char)BytesReturned;
    InBuffer[3] = 17421;
    InBuffer[2] = 2121;
    if ( !DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) )
  {
    GetLastError();
    Debug::Log();
    return 0;
  }
    return (InBuffer[6] & 1) == 0;
}
}

// ==== BACKFILL 0x0047AA00  sub_47AA00  cls=CDFileClass  sig=csp  renamed_refs=0  residual=- ====
CDFileClass * E4Recv_47AA00::sub_47AA00(char ** a2)
{
{
    char *v3;
    BufferIOFileClass::Constructor(this);
    this->M84 = 0;
    *(int *)this = &DataGlobal_7E1668;
    v3 = String::GetOrEmpty_Alt(a2);
    FileClass::OpenWithCDSearch(this, (IUnknown *)v3);
    return (CDFileClass *)this;
}
}

// ==== BACKFILL 0x0047AAB0  FileClass::OpenFileBufferIO  cls=CDFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool FileClass::OpenFileBufferIO() {
{
    return BufferIOFileClass::Open((int)this, aP1);
}
} }

// ==== BACKFILL 0x0047ADA0  CD::SetCurrentInstance  cls=CD  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CD::SetCurrentInstance() {
{
    int result;
    result = DataGlobal_89E414;
    DataGlobal_89E414 = (int)this;
    DataGlobal_89E418 = result;
    return result;
}
} }

// ==== BACKFILL 0x0047AF10  CCFileClass::Reopen  cls=CDFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CCFileClass::Reopen(void* a1, int a2) {
{
      CCFileClass::Close(this);
      if ( !Source )
        this->vt16(2, 0, 0);
      if ( this->q054 || aP1 == (CDFileClass *)2 )
      {
        CCFileClass::SetName(this, (IUnknown *)Source);
        return BufferIOFileClass::Open((int)this, aP1);
      }
      else
      {
        this->vt2(Source);
        return BufferIOFileClass::Open((int)this, aP1);
      }
}
} }

// ==== BACKFILL 0x0047BB60  CellClass::DTOR  cls=CellClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { void CellClass::DTOR() {
    CellAttachedStub *v2 = this->attached1;
    if ( v2 )
    {
        v2->Delete(1);
        this->attached1 = 0;
    }
    CellAttachedStub *v3 = this->CellClass_field_FC;
    if ( v3 )
    {
        v3->Delete(1);
        this->CellClass_field_FC = 0;
    }
    this->firstLink = 0;
    if ( this->smudgeTypeIndex != *(int *)&DataGlobal_89E748 )
    {
        unsigned int *v4 = this->attached3;
        if ( v4 )
        {
            if ( g_WTFMode )
                --v4[101];
            this->attached3 = 0;
        }
    }
    AbstractClass::DTOR(this);
} }

// ==== BACKFILL 0x0047C550  CellClass::FindInfantry  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* CellClass::FindInfantry(int a1) {
{
      _DWORD *v2;

      if ( !g_WTFMode )
        return 0;
      v2 = (_DWORD *)(a2 ? this->altObject : this->firstObject);
      if ( !v2 )
        return 0;
      while ( (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) != 36 )
      {
        v2 = (_DWORD *)v2[12];
        if ( !v2 )
          return 0;
      }
      return v2;
}
} }

// ==== BACKFILL 0x0047DD70  CellClass::UpdateAnimations  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void CellClass::UpdateAnimations() {
{
      _DWORD *v2;
      _DWORD *v3;
      _DWORD *v4;
      _DWORD *v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      void **v11;
      int v12;
      void **v13;
      void *v14;
      int v15;
      int v16;
      int v17;
      int v18;

      if ( !ArmageddonMode )
      {
        v2 = *(_DWORD **)(this + 228);
        if ( v2 )
        {
          do
          {
            v3 = (_DWORD *)v2[12];
            (*(void (__stdcall **)(_DWORD *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(*v2 + 364))(
              v2 + 27,
              0,
              *((_DWORD *)g_RulesClass_Instance + 1002),
              0,
              1,
              1,
              0);
            v2 = v3;
          }
          while ( v3 );
        }
        v4 = *(_DWORD **)(this + 232);
        if ( v4 )
        {
          do
          {
            v5 = (_DWORD *)v4[12];
            (*(void (__thiscall **)(_DWORD *))(*v4 + 236))(v4);
            v4 = v5;
          }
          while ( v5 );
        }
        if ( DataGlobal_87F8CC < DataGlobal_87F8C4
          || (DataGlobal_87F8C9 || !DataGlobal_87F8C4)
          && DataGlobal_87F8D0 > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(DataGlobal_87F8BC + 8))(
               &DataGlobal_87F8BC,
               DataGlobal_87F8C4 + DataGlobal_87F8D0,
               0) )
        {
          v6 = DataGlobal_87F8CC++;
          *(_DWORD *)(DataGlobal_87F8C0 + 4 * v6) = this->smudgeTypeIndex;
        }
        if ( *((int *)g_RulesClass_Instance + 90) > 0
          && (double)Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2147483646) * 4.656612877414201e-10 < 0.95 )
        {
          v7 = DataGlobal_89E7C0 * this->level;
          v8 = this->q026;
          v16 = (this->smudgeTypeIndex << 8) + 128;
          v18 = DataGlobal_89E7B4 + v7;
          v17 = (v8 << 8) + 128;
          v9 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2147483646);
          v16 = Math::RoundToInt(((double)v9 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v16);
          v10 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2147483646);
          v17 = Math::RoundToInt(((double)v10 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v17);
          if ( (double)Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2147483646) * 4.656612877414201e-10 < 0.5 )
          {
            v11 = (void **)__2_YAPAXI_Z(0x1C8u);
            if ( v11 )
            {
              v12 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, *((_DWORD *)g_RulesClass_Instance + 83) - 1);
              AnimClass::ctor(
                v11,
                *(void **)(*((_DWORD *)g_RulesClass_Instance + 80) + 4 * v12),
                (int)&v16,
                0,
                1,
                (void *)0x600,
                0,
                0);
            }
          }
          v13 = (void **)__2_YAPAXI_Z(0x1C8u);
          if ( v13 )
          {
            v14 = (void *)Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 1, 5);
            v15 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, *((_DWORD *)g_RulesClass_Instance + 90) - 1);
            AnimClass::ctor(
              v13,
              *(void **)(*((_DWORD *)g_RulesClass_Instance + 87) + 4 * v15),
              (int)&v16,
              v14,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
      }
}
} }

// ==== BACKFILL 0x0047EBA0  CellClass::FindBuilding  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* CellClass::FindBuilding(int a1) {
{
      _DWORD *v2;

      if ( !g_WTFMode )
        return 0;
      v2 = (_DWORD *)(a2 ? this->altObject : this->firstObject);
      if ( !v2 )
        return 0;
      while ( (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) != 1 )
      {
        v2 = (_DWORD *)v2[12];
        if ( !v2 )
          return 0;
      }
      return v2;
}
} }

// ==== BACKFILL 0x0047EC40  WTFMode::FindObjectByType  cls=WTFMode  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* WTFMode::FindObjectByType(int a1) {
{
      _DWORD *v2;

      if ( !g_WTFMode )
        return 0;
      v2 = (_DWORD *)(a2 ? this->q0E8 : this->q0E4);
      if ( !v2 )
        return 0;
      while ( (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) != 15 )
      {
        v2 = (_DWORD *)v2[12];
        if ( !v2 )
          return 0;
      }
      return v2;
}
} }
