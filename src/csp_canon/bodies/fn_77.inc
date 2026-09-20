// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00770850  sub_770850  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void E4Recv_770850::sub_770850(unsigned int * a1, char ** a2, int a4, ObjectClass * aP4)
{
{
    Selection_WorldDominationTour *v6;
    int v7;
    void **v8;
    int i;
    void *v10;
    int v11;
    int v12;
    int v13;
    void *v14;
    ObjectClass *v15;
    char **v16;
    char *v17;
    char *a2a;
    v16 = (char **)aP4;
    v6 = StaticString::Factory(*(void**)this);
    ConcatStringAlloc(&a2a, (const char **)v6, v16);
    unknown_libname_73(&v17);
    String::Assign((char **)&aP4, &DataGlobal_87F8E4.__pad_5568[20760]);
    INIClass::ReadString((ObjectClass *)a1, (ObjectClass *)a2, (ObjectClass *)&a2a, (ReferenceCounted *)&aP4, (int)&v17);
    DeleteAndZero((void **)&aP4);
    v7 = (int)*(this + 6 * a4 + 223);
    v8 = this + 6 * a4 + 223;
    (*(void (__thiscall **)(void **))(v7 + 12))(v8);
    unknown_libname_73(&aP4);
    for ( i = String::Tokenize((const char **)&v17, 0, &Delimiter, (ObjectClass *)&aP4);
    i != -1;
    i = String::Tokenize((const char **)&v17, i, &Delimiter, (ObjectClass *)&aP4) ) {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&aP4);
    v10 = v8[2];
    v12 = v11;
    if ( (int)v8[4] >= (int)v10 )
    {
    if ( !*((char *)(v8) + 13) && v10 )
    continue;
    v13 = (int)v8[5];
    if ( v13 <= 0 || !(*((unsigned char (__thiscall **)(void **, int, int))*v8 + 2))(v8, (int)v10 + v13, 0) )
    continue;
    }
    v14 = v8[4];
    v15 = (ObjectClass *)v8[1];
    v8[4] = (char *)(v14) + 1;
    *(int *)&v15->__pad_0[4 * (int)v14] = v12;
  }
    DeleteAndZero((void **)&aP4);
    DeleteAndZero((void **)&v17);
    DeleteAndZero((void **)&a2a);
}
}

// ==== BACKFILL 0x00770970  sub_770970  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_770970::sub_770970(int a2, int a3, void ** a4)
{
{
    char **v4;
    int v5;
    int v6;
    int v7;
    int v9;
    int v10;
    char **v11;
    char **v12;
    char **v13;
    char **v14;
    void *v15;
    v4 = (char **)a4;
    v5 = *(void**)this;
    v6 = (int)(this + 37 * a2 + 12 * a3 + 2);
    DeleteAndZero::Alt2(a4);
    v7 = *(int *)(v6 + 16);
    if ( v7 <= 0 )
    return 0;
    if ( v7 == 1 )
    v9 = 0;
    else
    v9 = Random::Range(Randomizer_Global, 0, v7 - 1);
    v10 = *(int *)(*(int *)(v6 + 4) + 4 * v9);
    if ( v5 == 3 )
  {
    v11 = FormatStringInt((char **)&a3, v10, 2);
    v12 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Soviet, v11);
    String::Reassign(v4, (const char **)v12);
    DeleteAndZero((void **)&a2);
    DeleteAndZero((void **)&a3);
  }
    else
  {
    v13 = FormatStringInt((char **)&v15, v10, 2);
    v14 = ProcessStringAndCopy((char **)&a4, g_Str_WWD_Allied, v13);
    String::Reassign(v4, (const char **)v14);
    DeleteAndZero((void **)&a4);
    DeleteAndZero(&v15);
  }
    return 1;
}
}

// ==== BACKFILL 0x00770A50  sub_770A50  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_770A50::sub_770A50(int a2, int a3, void ** a4)
{
{
    char **v4;
    int v5;
    int v6;
    int v7;
    int v9;
    int v10;
    char **v11;
    char **v12;
    char **v13;
    char **v14;
    void *v15;
    v4 = (char **)a4;
    v5 = *(void**)this;
    v6 = (int)(this + 37 * a2 + 12 * a3 + 8);
    DeleteAndZero::Alt2(a4);
    v7 = *(int *)(v6 + 16);
    if ( v7 <= 0 )
    return 0;
    if ( v7 == 1 )
    v9 = 0;
    else
    v9 = Random::Range(Randomizer_Global, 0, v7 - 1);
    v10 = *(int *)(*(int *)(v6 + 4) + 4 * v9);
    if ( v5 == 3 )
  {
    v11 = FormatStringInt((char **)&a3, v10, 2);
    v12 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Soviet, v11);
    String::Reassign(v4, (const char **)v12);
    DeleteAndZero((void **)&a2);
    DeleteAndZero((void **)&a3);
  }
    else
  {
    v13 = FormatStringInt((char **)&v15, v10, 2);
    v14 = ProcessStringAndCopy((char **)&a4, g_Str_WWD_Allied, v13);
    String::Reassign(v4, (const char **)v14);
    DeleteAndZero((void **)&a4);
    DeleteAndZero(&v15);
  }
    return 1;
}
}

// ==== BACKFILL 0x00770B30  sub_770B30  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_770B30::sub_770B30(int a2, void ** a3)
{
{
    char **v3;
    int v4;
    int v5;
    int v6;
    int v8;
    int v9;
    char **v10;
    char **v11;
    char **v12;
    char **v13;
    void *v14;
    void *v15;
    v3 = (char **)a3;
    v4 = *(void**)this;
    v5 = (int)(this + 6 * a2 + 223);
    DeleteAndZero::Alt2(a3);
    v6 = *(int *)(v5 + 16);
    if ( v6 <= 0 )
    return 0;
    if ( v6 == 1 )
    v8 = 0;
    else
    v8 = Random::Range(Randomizer_Global, 0, v6 - 1);
    v9 = *(int *)(*(int *)(v5 + 4) + 4 * v8);
    if ( v4 == 3 )
  {
    v10 = FormatStringInt((char **)&a3, v9, 2);
    v11 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Soviet, v10);
    String::Reassign(v3, (const char **)v11);
    DeleteAndZero((void **)&a2);
    DeleteAndZero((void **)&a3);
  }
    else
  {
    v12 = FormatStringInt((char **)&v15, v9, 2);
    v13 = ProcessStringAndCopy((char **)&v14, g_Str_WWD_Allied, v12);
    String::Reassign(v3, (const char **)v13);
    DeleteAndZero(&v14);
    DeleteAndZero(&v15);
  }
    return 1;
}
}

// ==== BACKFILL 0x00770C10  Map_Remove  cls=unknown  sig=csp  renamed_refs=0 ====
char sub_770C10(int a1, int a2, void ** a3)
{
{
    char **v3;
    int v6;
    int v8;
    int v9;
    char **v10;
    char **v11;
    char **v12;
    char **v13;
    void *v14;
    void *v15;
    void *v16;
    v3 = (char **)a3;
    DeleteAndZero::Alt2(a3);
    v6 = *(int *)(a2 + 16);
    if ( v6 <= 0 )
    return 0;
    if ( v6 == 1 )
    v8 = 0;
    else
    v8 = Random::Range(Randomizer_Global, 0, v6 - 1);
    v9 = *(int *)(*(int *)(a2 + 4) + 4 * v8);
    if ( a1 == 3 )
  {
    v10 = FormatStringInt((char **)&v14, v9, 2);
    v11 = ProcessStringAndCopy((char **)&a3, g_Str_WWD_Soviet, v10);
    String::Reassign(v3, (const char **)v11);
    DeleteAndZero((void **)&a3);
    DeleteAndZero(&v14);
  }
    else
  {
    v12 = FormatStringInt((char **)&v16, v9, 2);
    v13 = ProcessStringAndCopy((char **)&v15, g_Str_WWD_Allied, v12);
    String::Reassign(v3, (const char **)v13);
    DeleteAndZero(&v15);
    DeleteAndZero(&v16);
  }
    return 1;
}
}

// ==== BACKFILL 0x00770CE0  Map_Remove_770CE0  cls=unknown  sig=csp  renamed_refs=0 ====
char sub_770CE0(int a1, int a2, char ** a3)
{
{
    char **v3;
    char **v4;
    char **v6;
    char **v7;
    void *v8;
    void *v9;
    if ( a1 == 3 )
  {
    v3 = FormatStringInt((char **)&v9, a2, 2);
    v4 = ProcessStringAndCopy((char **)&v8, g_Str_WWD_Soviet, v3);
    String::Reassign(a3, (const char **)v4);
    DeleteAndZero(&v8);
    DeleteAndZero(&v9);
  }
    else
  {
    v6 = FormatStringInt((char **)&v8, a2, 2);
    v7 = ProcessStringAndCopy((char **)&v9, g_Str_WWD_Allied, v6);
    String::Reassign(a3, (const char **)v7);
    DeleteAndZero(&v9);
    DeleteAndZero(&v8);
  }
    return 1;
}
}

// ==== BACKFILL 0x00770F10  sub_770F10  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_770F10::sub_770F10(int a2, int a3, void ** a4)
{
{
    char **v4;
    int v5;
    int v6;
    int v8;
    int v9;
    char **v10;
    char **v11;
    char **v12;
    char **v13;
    void *v14;
    v4 = (char **)a4;
    v5 = (int)this + 48 * a3 + 4;
    DeleteAndZero::Alt2(a4);
    v6 = *(int *)(v5 + 16);
    if ( v6 <= 0 )
    return 0;
    if ( v6 == 1 )
    v8 = 0;
    else
    v8 = Random::Range(Randomizer_Global, 0, v6 - 1);
    v9 = *(int *)(*(int *)(v5 + 4) + 4 * v8);
    if ( a2 == 3 )
  {
    v10 = FormatStringInt((char **)&a4, v9, 2);
    v11 = ProcessStringAndCopy((char **)&a3, g_Str_WWD_Soviet, v10);
    String::Reassign(v4, (const char **)v11);
    DeleteAndZero((void **)&a3);
    DeleteAndZero((void **)&a4);
  }
    else
  {
    v12 = FormatStringInt((char **)&v14, v9, 2);
    v13 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Allied, v12);
    String::Reassign(v4, (const char **)v13);
    DeleteAndZero((void **)&a2);
    DeleteAndZero(&v14);
  }
    return 1;
}
}

// ==== BACKFILL 0x00770FE0  sub_770FE0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_770FE0::sub_770FE0(int a2, int a3, void ** a4)
{
{
    char **v4;
    int v5;
    int v6;
    int v8;
    int v9;
    char **v10;
    char **v11;
    char **v12;
    char **v13;
    void *v14;
    v4 = (char **)a4;
    v5 = (int)this + 48 * a3 + 28;
    DeleteAndZero::Alt2(a4);
    v6 = *(int *)(v5 + 16);
    if ( v6 <= 0 )
    return 0;
    if ( v6 == 1 )
    v8 = 0;
    else
    v8 = Random::Range(Randomizer_Global, 0, v6 - 1);
    v9 = *(int *)(*(int *)(v5 + 4) + 4 * v8);
    if ( a2 == 3 )
  {
    v10 = FormatStringInt((char **)&a4, v9, 2);
    v11 = ProcessStringAndCopy((char **)&a3, g_Str_WWD_Soviet, v10);
    String::Reassign(v4, (const char **)v11);
    DeleteAndZero((void **)&a3);
    DeleteAndZero((void **)&a4);
  }
    else
  {
    v12 = FormatStringInt((char **)&v14, v9, 2);
    v13 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Allied, v12);
    String::Reassign(v4, (const char **)v13);
    DeleteAndZero((void **)&a2);
    DeleteAndZero(&v14);
  }
    return 1;
}
}

// ==== BACKFILL 0x007710B0  INIClass::ReadTokenizedPair  cls=INIClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void INIClass::ReadTokenizedPair(void* a1, void* a2, void* a3, int a4, void* a5) {
{
      Selection_WorldDominationTour *v7;
      char **v8;
      char **v9;
      ObjectClass *i;
      char *v11;
      int v12;
      int v13;
      int v14;
      char *v15;
      ObjectClass *v16;
      char **v17;
      ObjectClass *j;
      char *v19;
      ObjectClass *v20;
      ObjectClass *v21;
      int v22;
      char *v23;
      ObjectClass *v24;
      ObjectClass *v26;
      char *a2;

      v26 = aP5;
      v7 = StaticString::Factory(aP3);
      v8 = ConcatStringAlloc((ObjectClass *)&aP3, (const char **)v7, this);
      String::Concat((const char **)v8, &a2, (IUnknown *)v26);
      DeleteAndZero((int)&aP3);
      unknown_libname_73(&aP5);
      String::Assign((char **)&aP3, &stru_87C374.__pad_579C[33876]);
      INIClass::ReadString(aP1, aP2, (ObjectClass *)&a2, (ReferenceCounted *)&aP3, (int)&aP5);
      DeleteAndZero((int)&aP3);
      v9 = this + 12 * a5;
      (*((void (__thiscall **)(char **))v9[1] + 3))(v9 + 1);
      unknown_libname_73(&aP3);
      for ( i = (ObjectClass *)String::Tokenize(
                                 (const char **)&aP5,
                                 0,
                                 (ObjectClass *)&stru_817F40.nextObject,
                                 (ObjectClass *)&aP3);
            i != (ObjectClass *)-1;
            i = (ObjectClass *)String::Tokenize(
                                 (const char **)&aP5,
                                 (int)i,
                                 (ObjectClass *)&stru_817F40.nextObject,
                                 (ObjectClass *)&aP3) )
      {
        __1_Timevec_std__QAE_XZ((const char **)&aP3);
        v11 = v9[3];
        v13 = v12;
        if ( (int)v9[5] >= (int)v11 )
        {
          if ( !*((_BYTE *)v9 + 17) && v11 )
            continue;
          v14 = (int)v9[6];
          if ( v14 <= 0 || !(*((unsigned __int8 (__thiscall **)(char **, char *, _DWORD))v9[1] + 2))(v9 + 1, &v11[v14], 0) )
            continue;
        }
        v15 = v9[5];
        v16 = (ObjectClass *)v9[2];
        v9[5] = v15 + 1;
        *(_DWORD *)&v16->__pad_0[4 * (_DWORD)v15] = v13;
      }
      DeleteAndZero((int)&aP3);
      String::Append((const char **)&a2, (CCINIClass *)&g_Str_WWD_Allied.sectionHead[2]);
      String::Assign((char **)&aP3, &stru_87C374.__pad_579C[33876]);
      INIClass::ReadString(aP1, aP2, (ObjectClass *)&a2, (ReferenceCounted *)&aP3, (int)&aP5);
      DeleteAndZero((int)&aP3);
      v17 = v9 + 7;
      (*((void (__thiscall **)(char **))v9[7] + 3))(v9 + 7);
      unknown_libname_73(&aP2);
      for ( j = (ObjectClass *)String::Tokenize(
                                 (const char **)&aP5,
                                 0,
                                 (ObjectClass *)&stru_817F40.nextObject,
                                 (ObjectClass *)&aP2);
            j != (ObjectClass *)-1;
            j = (ObjectClass *)String::Tokenize(
                                 (const char **)&aP5,
                                 (int)j,
                                 (ObjectClass *)&stru_817F40.nextObject,
                                 (ObjectClass *)&aP2) )
      {
        __1_Timevec_std__QAE_XZ((const char **)&aP2);
        v19 = v17[2];
        v21 = v20;
        if ( (int)v17[4] >= (int)v19 )
        {
          if ( !*((_BYTE *)v17 + 13) && v19 )
            continue;
          v22 = (int)v17[5];
          if ( v22 <= 0 || !(*((unsigned __int8 (__thiscall **)(char **, char *, _DWORD))*v17 + 2))(v17, &v19[v22], 0) )
            continue;
        }
        v23 = v17[4];
        v24 = (ObjectClass *)v17[1];
        v17[4] = v23 + 1;
        *(_DWORD *)&v24->__pad_0[4 * (_DWORD)v23] = v21;
      }
      DeleteAndZero((int)&aP2);
      DeleteAndZero((int)&aP5);
      DeleteAndZero((int)&a2);
}
} }

// ==== BACKFILL 0x00771710  sub_771710  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_771710::sub_771710()
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int result;
    v2 = this->M976;
    v3 = v2 - 1;
    if ( v2 > this->M956 )
  {
    do
    {
    v4 = this->M976;
    if ( v3 < v4 )
      {
    v5 = v4 - 1;
    v6 = v3;
    for ( this->M976 = v5; v6 < this->M976; ++v6 )
    String::Reassign( (char **)(this->M964 + 4 * v6), (const char **)(this->M964 + 4 * v6 + 4));
      }
    v7 = v3--;
    }
    while ( v7 > this->M956 );
  }
    result = this->M956;
    if ( !result )
    this->M952 = 1;
    return result;
}
}

// ==== BACKFILL 0x007717A0  sub_7717A0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
DWORD E4Recv_7717A0::sub_7717A0()
{
{
    DWORD result;
    DWORD *v3;
    DWORD v4;
    if ( (int)this->M976 > 0 )
  {
    StopThemeClass(1);
    (*(void (__thiscall **)(DWORD *))(this->M960 + 12))(this + 240);
  }
    result = Timer::GetTicks();
    v3 = this + 235;
    *v3 = result;
    v3[1] = v4;
    v3[2] = 0;
    return result;
}
}

// ==== BACKFILL 0x00771850  sub_771850  cls=Anim@Voices@WorldDominationTour  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_771850::sub_771850(int a2)
{
{
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 0;
    this->M16 = Timer::GetTicks();
    this->M24 = 0;
    this->M28 = a2;
    *(void**)this = &vt_WorldDominationTour_Voices_Anim;
    return this;
}
}

// ==== BACKFILL 0x007719E0  sub_7719E0  cls=DynamicVectorClass_uint  sig=csp  renamed_refs=0 ====
int E4Recv_7719E0::sub_7719E0()
{
{
    this->M12 = 1;
    this->M4 = 0;
    this->M8 = 0;
    this->M13 = 0;
    *(void**)this = vt_DynamicVectorClass_unsigned_int;
    this->M20 = 10;
    this->M16 = 0;
    return 0;
}
}

// ==== BACKFILL 0x00771A00  sub_771A00  cls=VectorClass  sig=csp  renamed_refs=0 ====
void E4Recv_771A00::sub_771A00()
{
{
    CCINIClass *v2;
    v2 = (CCINIClass *)this->M4;
    *(int *)this = &vt_VectorClass_unsigned_int;
    if ( v2 && (unsigned char)this->M13 )
  {
    __3_YAXPAX_Z(v2);
    this->M4 = 0;
  }
    this->M13 = 0;
    this->M8 = 0;
}
}

// ==== BACKFILL 0x00771F00  WeaponTypeClass::loadWeaponProperties  cls=WeaponTypeClass  sig=csp  renamed_refs=4 ====
unsigned int * WeaponTypeClass::loadWeaponProperties(AbstractTypeClass * aP1)
{
{
    AbstractTypeClass::Init((int)this, aP1);
    this->DownReport = &vt_TypeList_int;
    this->q0D8 = &vt_TypeList_int;
    this->InfiniteMindControl = &vt_TypeList_AnimTypeClass_const;
    *(void**)this = vt_WeaponTypeClass;
    this->__pad_004 = (unsigned int)vt_WeaponTypeClass;
    this->vtable2 = (unsigned int)vt_WeaponTypeClass;
    this->vtable3 = &vt_WeaponTypeClass;
    return this;
}
}

// ==== BACKFILL 0x007729F0  WeaponTypeClass::CalculateSpeed  cls=WeaponTypeClass  sig=csp  renamed_refs=3 ====
int WeaponTypeClass::CalculateSpeed()
{
{
    int result;
    double WeatherConBoltExplosion;
    result = this->Damage;
    if ( result && !*(int *)(result + 732) )
  {
    WeatherConBoltExplosion = (double)g_RulesClass_Instance[1].?;
    if ( *(char *)(result + 661) )
    WeatherConBoltExplosion = RulesClass::GetFiringDistance();
    result = TechnoClass::ComputeScanRange((void *)this->MinimumRange, WeatherConBoltExplosion);
    this->Warhead = result;
  }
    return result;
}
}

// ==== BACKFILL 0x00772AC0  InfantryClass::startPanic  cls=InfantryClass  sig=csp  renamed_refs=0 ====
void InfantryClass::startPanic()
{
{
    int v1;
    v1 = this->currentMission;
    return v1 && *(char *)(v1 + 324);
}

/* ASM:
mov     eax, [ecx+0ACh]
test    eax, eax
jz      short loc_772AD7
mov     cl, [eax+144h]
test    cl, cl
jz      short loc_772AD7
mov     al, 1
retn
; ---------------------------------------------------------------------------

loc_772AD7:                             ; CODE XREF: InfantryClass__startPanic+8↑j
; InfantryClass__startPanic+12↑j
xor     al, al
retn
*/
}

// ==== BACKFILL 0x00772C90  WeaponTypeClass::GetClassIdentifier  cls=WeaponTypeClass  sig=csp  renamed_refs=0 ====
int WeaponTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1613620790;
  a2[1] = 298979195;
  a2[2] = 1610642049;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x007730D0  WeaponTypeClass::GetObjectSize  cls=WeaponTypeClass  sig=csp  renamed_refs=0 ====
int WeaponTypeClass::GetObjectSize()
{
return 352;
}

// ==== BACKFILL 0x007730E0  WeaponTypeClass::GetTypeIdentifier  cls=WeaponTypeClass  sig=csp  renamed_refs=0 ====
int WeaponTypeClass::GetTypeIdentifier()
{
return 49;
}

// ==== BACKFILL 0x007730F0  WeaponTypeClass::ddtor  cls=WeaponTypeClass  sig=csp  renamed_refs=0 ====
WeaponTypeClass * WeaponTypeClass::ddtor(char a2)
{
    WeaponTypeClass* v8 = this;
    WeaponTypeClass* blk = this;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    blk->wtField160 = 0;
    blk->wtField172 = 0;
    int v3 = WeaponTypeClass_Array.FindItemIndex(&v8);
    if ( v3 != -1 && v3 < g_WeaponTypePool && v3 < --g_WeaponTypePool )
    {
        do
        {
            ++v3;
            *(g_WeaponTypeConfig + v3 - 1) = *(g_WeaponTypeConfig + v3);
        }
        while ( v3 < g_WeaponTypePool );
    }
    void *v4 = blk->wtVec248;
    blk->wtVec244 = nullptr;
    if ( v4 && blk->wtByte257 )
    {
        OperatorDelete(v4);
        blk->wtVec248 = nullptr;
    }
    blk->wtByte257 = 0;
    blk->wtCap252 = 0;
    void *v5 = blk->wtVec220;
    blk->wtVec216 = nullptr;
    if ( v5 && blk->wtByte229 )
    {
        OperatorDelete(v5);
        blk->wtVec220 = nullptr;
    }
    blk->wtByte229 = 0;
    blk->wtCap224 = 0;
    void *v6 = blk->wtVec192;
    blk->wtVec188 = nullptr;
    if ( v6 && blk->wtByte201 )
    {
        OperatorDelete(v6);
        blk->wtVec192 = nullptr;
    }
    blk->wtByte201 = 0;
    blk->wtCap196 = 0;
    AbstractTypeClass::Dtor(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}

// ==== BACKFILL 0x00773590  sub_773590  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char AnimClass::sub_773590(int a2, int a3)
{
{
    void **v4;
    *(int *)&this->__pad_40C[4] = a2;
    Debug::Log();
    v4 = &this->field_8;
    if ( CoCreateInstance(&DataGlobal_7F7C60, 0, 1u, &DataGlobal_7F7C30, &this->field_8) >= 0 )
  {
    Debug::Log();
    (*(void (__stdcall **)(void *, AnimClass *))(*(int *)*v4 + 20))(*v4, this);
    (*(void (__stdcall **)(void *, int, int))(*(int *)*v4 + 12))(*v4, a2, a3);
    (*(void (__stdcall **)(void *, int))(*(int *)*v4 + 60))(*v4, 1);
  }
    return 1;
}
}

// ==== BACKFILL 0x007738A0  sub_7738A0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
BOOL E4Recv_7738A0::sub_7738A0(const char * cbData, LPBYTE lpData, const char * Type)
{
{
    LSTATUS Value;
    HKEY phkResult;
    CHAR ValueName[64];
    Value = RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_WOL_URL_RegKey, 0, 0x20019u, &phkResult);
    if ( !Value )
  {
    strcpy(ValueName, cbData);
    if ( !this->M8 )
    strcat(ValueName, DataGlobal_84968C);
    cbData = Type;
    Value = RegQueryValueExA(phkResult, ValueName, 0, (LPDWORD)&Type, lpData, (LPDWORD)&cbData);
    RegCloseKey(phkResult);
  }
    return Value == 0;
}
}

// ==== BACKFILL 0x00773970  sub_773970  cls=unknown  sig=csp  renamed_refs=0 ====
BOOL sub_773970(BYTE * Type, DWORD cbData)
{
{
    LSTATUS v2;
    char *v3;
    char *v4;
    HKEY phkResult;
    v2 = RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_Software_Westwood_Yuri_s_Reven, 0, 0x20019u, &phkResult);
    if ( !v2 )
  {
    v3 = (char *)Type;
    v2 = RegQueryValueExA(phkResult, g_INI_Key_HTMLPath, 0, (LPDWORD)&Type, Type, &cbData);
    RegCloseKey(phkResult);
    if ( !v2 )
    {
    v4 = strrchr(v3, 92);
    if ( !v4 || strlen(v3) > v4 - v3 + 1 )
    strcat(v3, asc_815E74);
    }
  }
    return v2 == 0;
}
}

// ==== BACKFILL 0x00773A40  WebBrowser::QueryInterface  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser::QueryInterface()
{
{
    int v2;
    const void *v3;
    int *v4;
    *v4 = 0;
    if ( memcmp(v3, &IID_IUnknown, 0x10u) && memcmp(v3, &DataGlobal_7F7C20, 0x10u) )
    return -2147467262;
    *v4 = v2;
    (*(void (__stdcall **)(int))(*(int *)(v2) + 4))(v2);
    return 0;
}
}

// ==== BACKFILL 0x00773AA0  WebBrowser::AddRef  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser::AddRef()
{
{
    int v1;
    int v3;
    v1 = *(int *)(v3 + 4) + 1;
    *(int *)(v3 + 4) = v1;
    return v1;
}
}

// ==== BACKFILL 0x00773AB0  WebBrowser::Release  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser::Release()
{
{
    int result;
    int *v2;
    result = v2[1] - 1;
    v2[1] = result;
    if ( !result )
  {
    if ( v2 )
    (*(void (__thiscall **)(int *, int))(*v2 + 68))(v2, 1);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x00773AD0  WebBrowser::?  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser___vt03()
{
{
    HWND v1;
    int v3;
    v1 = *(HWND *)(v3 + 1040);
    if ( v1 )
    *(int *)GetWindowLongA(v1, 8) = 1;
    return 0;
}
}

// ==== BACKFILL 0x00773B00  WebBrowser::COMStub_Return0  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser::COMStub_Return0()
{
return 0;
}

// ==== BACKFILL 0x00773B10  WebBrowser::Write  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser::Write()
{
{
    int v2;
    int v3;
    if ( v3 )
    (*(void (__stdcall **)(int, int, int, wchar_t *))(**(int **)(v2 + 8) + 64))( *(int *)(v2 + 8), v2 + 12, 0, DataGlobal_8496B8);
    return 0;
}
}

// ==== BACKFILL 0x00773B40  WebBrowser::StubReturnFalse  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser::StubReturnFalse()
{
return 0;
}

// ==== BACKFILL 0x00773B50  WebBrowser::SetSize  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser::SetSize()
{
return 0;
}

// ==== BACKFILL 0x00773B60  WebBrowser::CopyTo  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser::CopyTo()
{
return 0;
}

// ==== BACKFILL 0x00773B70  WebBrowser::Commit  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser::Commit()
{
return 0;
}

// ==== BACKFILL 0x00773B80  WebBrowser::Revert  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser::Revert()
{
return 0;
}

// ==== BACKFILL 0x00773B90  WebBrowser::LockRegion  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser::LockRegion()
{
return 0;
}

// ==== BACKFILL 0x00773BA0  WebBrowser::UnlockRegion  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser::UnlockRegion()
{
return -2147467259;
}

// ==== BACKFILL 0x00773BB0  WebBrowser::Stat  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser::Stat()
{
return 0;
}

// ==== BACKFILL 0x00773BC0  WebBrowser::Clone  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser::Clone()
{
{
    LSTATUS v1;
    char *v2;
    HKEY phkResult;
    DWORD cbData;
    DWORD Type;
    BYTE Data[260];
    wchar_t Dest[260];
    int v9;
    Debug::Log();
    if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_Software_Westwood_Yuri_s_Reven, 0, 0x20019u, &phkResult) )
    return 0;
    cbData = 260;
    v1 = RegQueryValueExA(phkResult, g_INI_Key_HTMLPath, 0, &Type, Data, &cbData);
    RegCloseKey(phkResult);
    if ( v1 )
    return 0;
    v2 = strrchr((const char *)Data, 92);
    if ( !v2 || strlen((const char *)Data) > v2 - (char *)(Data) + 1 )
    strcat((char *)Data, asc_815E74);
    mbstowcs((wchar_t *)(v9 + 12), (const char *)Data, 0x104u);
    wcscat((wchar_t *)(v9 + 12), DataGlobal_8496C4);
    mbstowcs(Dest, (const char *)Data, 0x104u);
    wcscat(Dest, DataGlobal_84962C);
    return (*(int (__stdcall **)(int, wchar_t *, int, int))(**(int **)(v9 + 8) + 64))( *(int *)(v9 + 8), Dest, 0, 0);
}
}

// ==== BACKFILL 0x00773D20  WebBrowser::Navigate  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser::Navigate()
{
{
    Debug::Log();
    return 0;
}
}

// ==== BACKFILL 0x00773D40  WebBrowser::GoBack  cls=WebBrowser  sig=csp  renamed_refs=0 ====
int WebBrowser::GoBack()
{
{
    void *v2;
    int v3[2];
    int v4;
    char v5;
    char Dest[64];
    char v7[64];
    wchar_t *Source;
    wchar_t *v9;
    wcstombs(Dest, Source, 0x40u);
    wcstombs(v7, v9, 0x40u);
    String::Assign((char **)&v2, Dest);
    Debug::Log();
    LoadPlayerProfile(v3, (const char **)&v2);
    v4 = 0;
    v5 = 0;
    ReadRegistryOptionsWOL(&v4);
    if ( Flag::IsNot2(&v4) )
  {
    FindChannelWOL(Dest, (int)v7, 1u, *(int *)(v3[1] + 16));
    SaveConfigWOL((int)g_GameMode_Current);
  }
    String::Assign_Alt((void **)&g_WebBrowser, Dest);
    String::Assign_Alt((void **)&g_WebBrowserConfig, v7);
    v3[0] = &vt_rc_ptr_PlayerProfile;
    ComPtr::Release(v3);
    DeleteAndZero(&v2);
    return 0;
}
}

// ==== BACKFILL 0x00773E30  sub_773E30  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_773E30(HWND hWndParent, unsigned int a2, int a3, unsigned int a4)
{
{
    int result;
    LPARAM lParam[2];
    result = BaseDialogProc(hWndParent, a2, a3, a4);
    if ( !result )
  {
    if ( a2 == 272 )
    {
    lParam[0] = 800;
    lParam[1] = 600;
    ResizeDialogAndEnum(hWndParent, (LPARAM)lParam);
    }
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x007754A0  WinModemClass::ddtor  cls=WinModemClass  sig=csp  renamed_refs=1 ====
int WinModemClass::ddtor(int a2)
{
    this->q064 = a2;
    return a2;
}

// ==== BACKFILL 0x00775610  WinModemClass::QueryInterface  cls=WinModemClass  sig=csp  renamed_refs=0 ====
WinModemClass * WinModemClass::QueryInterface(char a2)
{
{
    int v3;
    v3 = *((int *)(this) + 23);
    *(int *)this = &vt_WinModemClass;
    if ( v3 != -1 )
  {
    Debug::Log();
    CloseHandle(*((HANDLE *)(this) + 23));
    *((int *)(this) + 23) = -1;
  }
    if ( *(int *)(this + 36) )
    __3_YAXPAX_Z(*((void **)(this) + 9));
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (WinModemClass *)this;
}
}

// ==== BACKFILL 0x007759B0  Dialog::FindByPtr  cls=Dialog  sig=csp  renamed_refs=0 ====
int Dialog::FindByPtr()
{
{
    int v1;
    void **i;
    v1 = g_DialogTrackingList - 1;
    if ( g_DialogTrackingList - 1 < 0 )
    return 0;
    for ( i = (void **)(8 * v1 + 12004648); this != *i || v1 <= 0; i -= 2 )
  {
    if ( --v1 < 0 )
    return 0;
  }
    return (int)*(&g_ClipboardBuffer + 2 * v1);
}
}

// ==== BACKFILL 0x00775B40  sub_775B40  cls=unknown  sig=csp  renamed_refs=0 ====
INT_PTR sub_775B40(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
return 0;
}

// ==== BACKFILL 0x00775B50  sub_775B50  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_775B50(unsigned short a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM) a2, int a3, LONG * a4)
{
{
    ObjectClass *DialogParamA;
    LONG bottom;
    struct tagRECT Rect;
    DialogParamA = (ObjectClass *)CreateDialogParamA(g_hInstance, (LPCSTR)a1, 0, a2, 0);
    GetClientRect((HWND)DialogParamA, &Rect);
    DestroyWindow((HWND)DialogParamA);
    bottom = Rect.bottom;
    *a4 = Rect.right;
    *((int*)(a4) + 1) = bottom;
    return 1;
}
}

// ==== BACKFILL 0x00775BA0  Dialog::GetField  cls=Dialog  sig=csp  renamed_refs=0 ====
BOOL Dialog::GetField()
{
{
    EnumChildWindows(this, (WNDENUMPROC)DialogClass::Reposition, 1);
    return DialogClass::Reposition((SkirmishDialog *)this, 0);
}
}

// ==== BACKFILL 0x00776670  sub_776670  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char sub_776670(LPARAM lParam)
{
{
    int v2;
    HCURSOR CursorA;
    char v4;
    HCURSOR v5;
    struct tagRECT Rect;
    WPARAM wParam[10];
    struct tagPOINT v9[5];
    if ( !DataGlobal_B7309C )
    return 0;
    ImageList_DragShowNolock(0);
    qmemcpy(v9, HitDialogTest(lParam, v2, v9), sizeof(v9));
    qmemcpy(wParam, v9, sizeof(wParam));
    if ( SendMessageA((HWND)v9[0].y, 0x4C8u, (WPARAM)wParam, lParam) )
  {
    CursorA = LoadCursorA(0, (LPCSTR)0x7F00);
    SetCursor(CursorA);
    v4 = 1;
  }
    else
  {
    v5 = LoadCursorA(0, (LPCSTR)0x7F88);
    SetCursor(v5);
    v4 = 0;
  }
    ImageList_DragShowNolock(1);
    GetWindowRect((HWND)wParam[1], &Rect);
    ImageList_DragMove(wParam[4] - Rect.left, wParam[5] - Rect.top);
    return v4;
}
}

// ==== BACKFILL 0x007767F0  sub_7767F0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int E4Recv_7767F0::sub_7767F0()
{
{
    char *v2;
    LPARAM lParam[10];
    v2 = this->M28;
    if ( !v2 )
    return 0;
    String::Trim(v2);
    strcpy((char *)DataGlobal_B73080, v2);
    lParam[1] = (LPARAM)this->M16;
    lParam[0] = 1;
    lParam[4] = DataGlobal_B73080;
    SendMessageA(DataGlobal_B730A0, 0x110Du, 0, (LPARAM)lParam);
    return strlen((const char *)DataGlobal_B73080);
}
}

// ==== BACKFILL 0x007768F0  LoadWOLSettings  cls=unknown  sig=csp  renamed_refs=0 ====
BOOL sub_7768F0(HWND hWnd, LPARAM a2)
{
{
    int v3;
    LRESULT i;
    unsigned char *v5;
    signed int j;
    LRESULT v7;
    unsigned int Int_Overwrite;
    CHAR ClassName[64];
    unsigned char *hWnda;
    GetClassNameA(hWnd, ClassName, 64);
    if ( !strcmp(ClassName, aSystreeview32) )
  {
    v3 = 0;
    hWnda = (unsigned char *)DataGlobal_B73098;
    for ( i = SendMessageA(hWnd, 0x110Au, 0, 0); i; i = SendMessageA(hWnd, 0x110Au, 1u, i) )
    {
    wsprintfA(ClassName, "TV%d", ++v3);
    if ( INIClass::ReadBool_Overwrite(a2, hWnda, (unsigned char *)ClassName, 0) )
    SendMessageA(hWnd, 0x1102u, 2u, i);
    else
    SendMessageA(hWnd, 0x1102u, 1u, i);
    }
  }
    GetClassNameA(hWnd, ClassName, 64);
    if ( !strcmp(ClassName, aSyslistview32) )
  {
    v5 = (unsigned char *)DataGlobal_B73098;
    if ( hWnd )
    {
    for ( j = 0; j < 10; ++j )
      {
    wsprintfA(ClassName, "LV%d", j);
    v7 = SendMessageA(hWnd, 0x101Du, j, 0);
    Int_Overwrite = INIClass::ReadInt_Overwrite(a2, v5, (unsigned char *)ClassName, v7);
    if ( Int_Overwrite < 0x3E8 )
    SendMessageA(hWnd, 0x101Eu, j, (unsigned short)Int_Overwrite);
      }
    }
  }
    return 1;
}
}

// ==== BACKFILL 0x00776B40  SaveWOLUISettings  cls=unknown  sig=csp  renamed_refs=0 ====
BOOL SaveWOLUISettings(HWND hWnd, char * a2)
{
{
    int v2;
    LRESULT i;
    unsigned char *v4;
    signed int j;
    unsigned int v6;
    unsigned char *Block;
    CHAR v9[32];
    CHAR ClassName[4];
    LRESULT v11;
    char v12;
    int v13;
    GetClassNameA(hWnd, ClassName, 64);
    if ( !strcmp(ClassName, aSystreeview32) )
  {
    v2 = 0;
    Block = (unsigned char *)DataGlobal_B73098;
    for ( i = SendMessageA(hWnd, 0x110Au, 0, 0); i; i = SendMessageA(hWnd, 0x110Au, 1u, i) )
    {
    wsprintfA(v9, "TV%d", ++v2);
    *(int *)ClassName = 24;
    v13 = 32;
    v11 = i;
    if ( SendMessageA(hWnd, 0x110Cu, 0, (LPARAM)ClassName) )
    INIClass::SetBool(a2, Block, v9, (v12 & 0x20) != 0);
    }
  }
    GetClassNameA(hWnd, ClassName, 64);
    if ( !strcmp(ClassName, aSyslistview32) )
  {
    v4 = (unsigned char *)DataGlobal_B73098;
    if ( hWnd )
    {
    for ( j = 0; j < 10; ++j )
      {
    wsprintfA(v9, "LV%d", j);
    v6 = SendMessageA(hWnd, 0x101Du, j, 0);
    if ( v6 < 0x3E8 )
    INIClass::SetInt(a2, v4, v9, v6, 0);
      }
    }
  }
    return 1;
}
}

// ==== BACKFILL 0x00776D80  Window::ClampToScreen  cls=unknown  sig=csp  renamed_refs=0 ====
char Window::ClampToScreen(int * a1)
{
{
    char v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v1 = 0;
    v2 = *a1;
    if ( *a1 < 0 )
  {
    v3 = *((int*)(a1) + 2);
    *a1 = 0;
    v1 = 1;
    *((int*)(a1) + 2) = v3 - v2;
  }
    v4 = *((int*)(a1) + 1);
    if ( v4 < 0 )
  {
    v5 = *((int*)(a1) + 3);
    *((int*)(a1) + 1) = 0;
    v1 = 1;
    *((int*)(a1) + 3) = v5 - v4;
  }
    if ( *((int*)(a1) + 2) > GetSystemMetrics(16) )
  {
    *a1 += GetSystemMetrics(16) - *((int*)(a1) + 2);
    *((int*)(a1) + 2) = GetSystemMetrics(16);
    v1 = 1;
  }
    if ( *((int*)(a1) + 3) <= GetSystemMetrics(17) )
    return v1;
    *((int*)(a1) + 1) += GetSystemMetrics(17) - *((int*)(a1) + 3);
    *((int*)(a1) + 3) = GetSystemMetrics(17);
    return 1;
}
}

// ==== BACKFILL 0x00776E10  FindListBoxItem  cls=unknown  sig=csp  renamed_refs=0 ====
LRESULT FindListBoxItem(HWND hWnd, LRESULT wParam, int a3)
{
{
    LRESULT v6;
    v6 = SendMessageA(hWnd, 0x146u, 0, 0);
    if ( wParam >= v6 )
    return -1;
    while ( SendMessageA(hWnd, 0x150u, wParam, 0) != a3 )
  {
    if ( ++wParam >= v6 )
    return -1;
  }
    return wParam;
}
}

// ==== BACKFILL 0x00776EB0  sub_776EB0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void * E4Recv_776EB0::sub_776EB0()
{
{
    DWORD dwBuildNumber;
    DWORD dwMinorVersion;
    DWORD dwPlatformId;
    struct _OSVERSIONINFOA VersionInformation;
    *(int *)this = 0;
    this->M4 = 0;
    this->M8 = 0;
    this->M140 = 0;
    this->M141 = 0;
    VersionInformation.dwOSVersionInfoSize = 148;
    GetVersionExA(&VersionInformation);
    dwBuildNumber = VersionInformation.dwBuildNumber;
    dwMinorVersion = VersionInformation.dwMinorVersion;
    *(int *)this = VersionInformation.dwMajorVersion;
    this->M8 = dwBuildNumber;
    dwPlatformId = VersionInformation.dwPlatformId;
    this->M4 = dwMinorVersion;
    if ( dwPlatformId == 1 )
  {
    this->M140 = 1;
  }
    else if ( dwPlatformId == 2 )
  {
    this->M141 = 1;
  }
    strncpy((char *)(this) + 12, VersionInformation.szCSDVersion, 0x7Fu);
    this->M139 = 0;
    return this;
}
}

// ==== BACKFILL 0x00777060  Dialog::RestoreParent  cls=Dialog  sig=csp  renamed_refs=0 ====
HWND Dialog::RestoreParent()
{
{
    HWND result;
    result = (HWND)GetWindowLongA(this, -8);
    if ( result )
    return (HWND)SetDialogParent(this, result);
    return result;
}
}

// ==== BACKFILL 0x00777AC0  Time::FormatDate  cls=Time  sig=csp  renamed_refs=0 ====
int Time::FormatDate()
{
{
    int result;
    struct _SYSTEMTIME SystemTime;
    result = FileTimeToSystemTime(&FileTime, &SystemTime);
    if ( result )
    return sprintf(this, &DataGlobal_849F20, (INIClass *)SystemTime.wMonth);
    return result;
}
}

// ==== BACKFILL 0x00777F90  sub_777F90  cls=ObjectClass  sig=csp  renamed_refs=0 ====
LONG sub_777F90(HWND hWnd)
{
{
    LONG result;
    WCHAR *v3;
    LONG v4;
    CHAR Buf[516];
    WCHAR WideCharStr[258];
    result = (LONG)DataGlobal_B7355C;
    if ( DataGlobal_B7355C )
  {
    result = ImmGetCompositionStringA(DataGlobal_B7355C, 0x800u, Buf, 0x200u);
    if ( result > 0 )
    {
    Buf[result] = 0;
    result = MultiByteToWideChar(0, 0, Buf, strlen(Buf), WideCharStr, 256);
    if ( result < 0 )
    result = 0;
    WideCharStr[result] = 0;
    if ( result > 0 )
      {
    v3 = WideCharStr;
    v4 = result;
    do
        {
    result = SendMessageA(hWnd, 0x4D9u, *v3, *v3);
    ++v3;
    --v4;
        }
    while ( v4 );
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x007781A0  DisableIME  cls=unknown  sig=csp  renamed_refs=0 ====
HIMC IME_Disable()
{
{
    return ImmAssociateContext(g_hWnd, 0);
}
}

// ==== BACKFILL 0x007784A0  CCToolTip::QueryInterface  cls=CCToolTip  sig=csp  renamed_refs=0 ====
CCToolTip * CCToolTip::QueryInterface(char a2)
{
{
    *(void**)this = &vt_CCToolTip;
    ToolTipClass::updateString(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (CCToolTip *)this;
}
}

// ==== BACKFILL 0x00779690  LoadAccountInfoWOL_Load  cls=ReferenceCounted  sig=csp  renamed_refs=0 ====
void * E4Recv_779690::LoadAccountInfoWOL_Load(ReferenceCounted * aP1, ObjectClass * aP2, ReferenceCounted * aP3, ReferenceCounted * aP4, int a6, ObjectClass * aP6, ReferenceCounted * aP7, ReferenceCounted * aP8, ReferenceCounted * aP9, ReferenceCounted * aP10, ReferenceCounted * aP11, ReferenceCounted * aP12, ReferenceCounted * aP13, ReferenceCounted * aP14)
{
{
    this->M4 = 0;
    this->M8 = 0;
    *(int *)this = &vt_ReferenceCounted;
    String::AssignFromPtr((char **)(this) + 3, (const char **)aP1);
    this->M16 = aP2;
    this->M24 = aP4;
    this->M20 = (char)aP3;
    this->M28 = a6;
    this->M36 = aP7;
    this->M32 = aP6;
    this->M40 = aP8;
    this->M48 = aP10;
    this->M44 = aP9;
    this->M52 = aP11;
    this->M56 = (char)aP12;
    WideString::AssignFromPtr((wchar_t **)(this) + 15, (const wchar_t **)aP14);
    WideString::AssignFromPtr((wchar_t **)(this) + 16, (const wchar_t **)aP13);
    *(void**)this = vt_PlayerProfile;
    return this;
}
}

// ==== BACKFILL 0x0077A8D0  MainLobbyDlgProcWOL_Get  cls=unknown  sig=csp  renamed_refs=0 ====
void MainLobbyDlgProcWOL_Get(HWND hDlg, char a2)
{
{
    HWND DlgItem;
    HWND v4;
    wchar_t *StringCSF;
    HWND v6;
    wchar_t *v7;
    HWND v8;
    wchar_t *v9;
    HWND v10;
    wchar_t *v11;
    HWND v12;
    wchar_t *v13;
    HWND v14;
    wchar_t *v15;
    void *v16;
    if ( a2 )
  {
    DlgItem = GetDlgItem(hDlg, 1576);
    SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer);
    InvalidateRect(DlgItem, 0, 0);
  }
    v4 = GetDlgItem(hDlg, 1775);
    SendMessageA(v4, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString);
    StringCSF = GetStringCSF(g_Str_GUI_UnknownStats, 0, aDRa2mdpostWolp, 892);
    WideString::Assign((wchar_t **)&v16, StringCSF);
    v6 = GetDlgItem(hDlg, 1776);
    v7 = WideString::GetOrEmpty_Alt((wchar_t **)&v16);
    SendMessageA(v6, 0x4B2u, 0, (LPARAM)v7);
    v8 = GetDlgItem(hDlg, 1777);
    v9 = WideString::GetOrEmpty_Alt((wchar_t **)&v16);
    SendMessageA(v8, 0x4B2u, 0, (LPARAM)v9);
    v10 = GetDlgItem(hDlg, 1793);
    v11 = WideString::GetOrEmpty_Alt((wchar_t **)&v16);
    SendMessageA(v10, 0x4B2u, 0, (LPARAM)v11);
    v12 = GetDlgItem(hDlg, 1780);
    v13 = WideString::GetOrEmpty_Alt((wchar_t **)&v16);
    SendMessageA(v12, 0x4B2u, 0, (LPARAM)v13);
    v14 = GetDlgItem(hDlg, 1781);
    v15 = WideString::GetOrEmpty_Alt((wchar_t **)&v16);
    SendMessageA(v14, 0x4B2u, 0, (LPARAM)v15);
    DeleteAndZero::Alt(&v16);
}
}

// ==== BACKFILL 0x0077D1F0  ConnectAndLoginWOL_Connect  cls=SimpleWonlineDialogControl  sig=csp  renamed_refs=0 ====
void E4Recv_77D1F0::ConnectAndLoginWOL_Connect()
{
{
    this->vfptr = &vt_SimpleWonlineDialogControl;
    OwnerDrawControl::InitVtable((DialogControl_OwnerDraw *)this);
}
}

// ==== BACKFILL 0x0077D240  sub_77D240  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_77D240::sub_77D240()
{
{
    signed int v1;
    char *v2;
    signed int v3;
    int i;
    char *v6;
    v1 = g_WOL_State;
    v2 = 0;
    v3 = 0;
    if ( (int)g_WOL_State <= 0 )
    return -1;
    for ( i = 0; ; i += 108 )
  {
    if ( i >= 0 && v3 < v1 )
    v2 = (char *)(g_WOL_ConnectionFlags) + i;
    v6 = String::GetOrEmpty_Alt(this);
    if ( !_strcmpi(v6, v2 + 36) )
    break;
    v1 = g_WOL_State;
    if ( ++v3 >= (int)g_WOL_State )
    return -1;
  }
    return v3;
}
}

// ==== BACKFILL 0x0077D350  sub_77D350  cls=ObjectClass  sig=csp  renamed_refs=0 ====
BOOL sub_77D350(ObjectClass * String1)
{
{
    wchar_t *StringCSF;
    size_t v3;
    const wchar_t *v5;
    wchar_t Buffer[256];
    StringCSF = GetStringCSF(aTxtBuddyFilter, 0, (CampaignScore *)g_Str_File_wonline_cpp, 873);
    swprintf(Buffer, (const size_t)StringCSF, v5, *(CampaignScore **)Buffer);
    v3 = wcslen(Buffer);
    return _wcsnicmp(String1, Buffer, v3) == 0;
}
}

// ==== BACKFILL 0x0077D3A0  sub_77D3A0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
BOOL sub_77D3A0(ObjectClass * String1)
{
{
    wchar_t *StringCSF;
    size_t v3;
    const wchar_t *v5;
    wchar_t Buffer[256];
    StringCSF = GetStringCSF(aTxtClanFilter, 0, (CampaignScore *)g_Str_File_wonline_cpp, 879);
    swprintf(Buffer, (const size_t)StringCSF, v5, *(CampaignScore **)Buffer);
    v3 = wcslen(Buffer);
    return _wcsnicmp(String1, Buffer, v3) == 0;
}
}

// ==== BACKFILL 0x0077E7A0  GameConfig::BuildChecksum  cls=GameConfig  sig=csp  renamed_refs=0 ====
namespace gamemd { int GameConfig::BuildChecksum() {
{
    int v2;
    void **p_attachedTag;
    INIClass *Entry;
    v2 = DataGlobal_B76B1C;
    if ( DataGlobal_B76B1C > 0 )
  {
    p_attachedTag = &g_WOL_LoginObject.attachedTag;
    do
    {
    p_attachedTag += 37;
    --v2;
    }
    while ( v2 );
  }
    GameOption::CheckDuplicate();
    Hash_Check_5E9580();
    Hash_Check_5E94D0();
    Entry = GameOptions::GetEntry();
    return (INIClass *)sprintf(Buffer, (ObjectClass *)&g_INI_Key_WOnline.sectionHead[1], Entry);
}
} }

// ==== BACKFILL 0x0077E820  ParseStringCommaInts  cls=unknown  sig=csp  renamed_refs=0 ====
void ** ParseStringCommaInts(char * String, int * a2, int * a3, int * a4, int * a5, int * a6, void ** a7)
{
{
    char *v8;
    int v9;
    char *v10;
    int v11;
    char *v12;
    int v13;
    char *v14;
    int v15;
    char *v16;
    int v17;
    CCINIClass *v18;
    v8 = strtok(String, (ObjectClass *)&DataGlobal_817F40.nextObject);
    if ( v8 )
    v9 = atol(v8);
    else
    v9 = 0;
    *a2 = v9;
    v10 = strtok(0, (ObjectClass *)&DataGlobal_817F40.nextObject);
    if ( v10 )
    v11 = atol(v10);
    else
    v11 = 0;
    *a3 = v11;
    v12 = strtok(0, (ObjectClass *)&DataGlobal_817F40.nextObject);
    if ( v12 )
    v13 = atol(v12);
    else
    v13 = 0;
    *a4 = v13;
    v14 = strtok(0, (ObjectClass *)&DataGlobal_817F40.nextObject);
    if ( v14 )
    v15 = atol(v14);
    else
    v15 = 0;
    *a5 = v15;
    v16 = strtok(0, (ObjectClass *)&DataGlobal_817F40.nextObject);
    if ( v16 )
    v17 = atol(v16);
    else
    v17 = 0;
    *a6 = v17;
    v18 = (CCINIClass *)strtok(0, (ObjectClass *)&DataGlobal_817F40.nextObject);
    return String::Assign_Alt(a7, v18);
}
}
