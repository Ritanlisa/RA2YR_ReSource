// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x005C0080  Entity_Load  cls=unknown  sig=csp  renamed_refs=0 ====
char sub_5C0080(char ** a1, unsigned char * a2)
{
{
    char result;
    if ( g_BigIntPool )
    return 0;
    g_BigIntPool = (int)a1;
    result = VQAClass::AdvanceFrame(*a1, a2);
    g_BigIntPool = 0;
    return result;
}
}

// ==== BACKFILL 0x005C0280  AbstractClass::checkLOS  cls=VQMovieHandle  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void AbstractClass::checkLOS(int a1) {
{
    int *v2;
    int v3;
    char *v4;
    v2 = this->uniqueId;
    if ( a2 )
  {
    if ( v2 )
    {
    v3 = *v2;
    if ( v3 )
    AbstractClass::processConstruction(v3);
    }
  }
    else if ( v2 )
  {
    v4 = (char *)*v2;
    if ( v4 )
    AbstractClass::checkBuildProgress(v4);
  }
}
} } }

// ==== BACKFILL 0x005C02C0  AbstractClass::computePathCost  cls=VQMovieHandle  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::computePathCost() {
{
    char result;
    DataGlobal_ABF3F8 = (int)this;
    result = RenderMovieFrame(this->uniqueId, 1, -1, 0);
    DataGlobal_ABF3F8 = 0;
    return result;
}
} } }

// ==== BACKFILL 0x005C02E0  AbstractClass::validatePathNode  cls=VQMovieHandle  sig=csp  renamed_refs=0 ====
char AbstractClass::validatePathNode()
{
{
    return this->abstractFlags;
}
}

// ==== BACKFILL 0x005C02F0  AbstractClass::processPathNode  cls=VQMovieHandle  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::processPathNode() {
{
    char **v1;
    char result;
    v1 = *(char ***)(this + 16);
    if ( (*v1)[1360] || !*((char *)(v1) + 69) || g_BigIntPool )
    return 0;
    g_BigIntPool = this->uniqueId;
    result = VQAClass::AdvanceFrame(*v1, (char *)(this + 20));
    g_BigIntPool = 0;
    return result;
}
} } }

// ==== BACKFILL 0x005C0330  nullsub_176  cls=VQMovieHandle  sig=csp  renamed_refs=0 ====
void nullsub_176()
{
  ;
}

// ==== BACKFILL 0x005C0340  AbstractClass::computePathDistance  cls=VQMovieHandle  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::computePathDistance(int a2, int a3) {
{
    int *v3;
    int *v4;
    int result;
    *(int *)(this->uniqueId + 36) = a2;
    *(int *)(this->uniqueId + 40) = a3;
    v3 = (int *)this->uniqueId;
    v4 = v3 + 9;
    v3 += 13;
    *v3 = *v4;
    v3[1] = v4[1];
    v3[2] = v4[2];
    result = v4[3];
    v3[3] = result;
    return result;
}
} } }

// ==== BACKFILL 0x005C0380  AbstractClass::checkPathEnd  cls=VQMovieHandle  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::checkPathEnd(int a1) {
{
    return AbstractClass::getTotalValue(*(int **)(this->uniqueId + 72), a2);
}
} } }

// ==== BACKFILL 0x005C03A0  AbstractClass::finalizePath  cls=VQMovieHandle  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void AbstractClass::finalizePath(int a1) {
{
    AbstractClass::finalizeConstruction(*(void**)this->uniqueId);
    AbstractClass::updateBuildingState(*(void**)this->uniqueId, a2);
}
} } }

// ==== BACKFILL 0x005C03C0  AbstractClass::resetPathState  cls=VQMovieHandle  sig=csp  renamed_refs=0 ====
int AbstractClass::resetPathState()
{
return 33;
}

// ==== BACKFILL 0x005C0540  BinkMovieHandle::?  cls=BinkMovieHandle  sig=csp  renamed_refs=0 ====
int BinkMovieHandle::_vt03(unsigned char a2)
{
{
    return BinkMovie::Pause(this->height, a2);
}
}

// ==== BACKFILL 0x005C0550  BinkMovieHandle::InitFromFile  cls=BinkMovieHandle  sig=csp  renamed_refs=0 ====
int BinkMovieHandle::InitFromFile()
{
{
    int result;
    DataGlobal_ABF3F8 = (int)this;
    result = BinkMovie::Play(this->height);
    DataGlobal_ABF3F8 = 0;
    return result;
}
}

// ==== BACKFILL 0x005C0570  BinkMovieHandle::COMStub  cls=BinkMovieHandle  sig=csp  renamed_refs=0 ====
BOOL BinkMovieHandle::COMStub()
{
{
    return BinkMovie::IsAtEnd(this->height);
}
}

// ==== BACKFILL 0x005C0580  BinkMovieHandle::AddRef  cls=BinkMovieHandle  sig=csp  renamed_refs=0 ====
bool BinkMovieHandle::AddRef()
{
{
    return BinkMovie::RenderFrameToSurface(this->height);
}
}

// ==== BACKFILL 0x005C0590  BinkMovieHandle::Release  cls=BinkMovieHandle  sig=csp  renamed_refs=0 ====
int BinkMovieHandle::Release()
{
{
    int v1;
    int result;
    v1 = this->height;
    result = BinkWait(*(int *)(v1 + 4));
    if ( !result )
    *(char *)(v1 + 45) = 1;
    return result;
}
}

// ==== BACKFILL 0x005C05A0  BinkMovieHandle::Pause  cls=BinkMovieHandle  sig=csp  renamed_refs=0 ====
int BinkMovieHandle::Pause(int a2, int a3)
{
{
    return BinkMovieHandle::RenderFrameClipped(this->height, a2, a3);
}
}

// ==== BACKFILL 0x005C05C0  BinkMovieHandle::RenderLoop  cls=BinkMovieHandle  sig=csp  renamed_refs=0 ====
int BinkMovieHandle::RenderLoop(int a2)
{
{
    return COMStub_432C10(this->height, a2);
}
}

// ==== BACKFILL 0x005C05D0  BinkMovieHandle::AdjustSurfaceFormat  cls=BinkMovieHandle  sig=csp  renamed_refs=0 ====
int BinkMovieHandle::AdjustSurfaceFormat(int a2)
{
{
    return BinkMovieHandle::Check(this->height, a2);
}
}

// ==== BACKFILL 0x005C05E0  BinkMovieHandle::BlitToTarget  cls=BinkMovieHandle  sig=csp  renamed_refs=0 ====
unsigned int BinkMovieHandle::BlitToTarget()
{
{
    return 0x3E8 / (unsigned int)(*(int *)(*(int *)(this->height + 4) + 20) / *(int *)(*(int *)(this->height + 4) + 24));
}
}

// ==== BACKFILL 0x005C05F0  BinkMovieHandle::Close  cls=BinkMovieHandle  sig=csp  renamed_refs=0 ====
unsigned int * BinkMovieHandle::Close()
{
{
    return BinkMovieHandle::CopyFrameToSurface(this->height);
}
}

// ==== BACKFILL 0x005C0630  sub_5C0630  cls=MovieHandle  sig=csp  renamed_refs=0 ====
void E4Recv_5C0630::sub_5C0630()
{
{
    *(void**)this = &vt_MovieHandle;
}
}

// ==== BACKFILL 0x005C0640  Render_Play  cls=unknown  sig=csp  renamed_refs=0 ====
char sub_5C0640(const char * a1, char * a2, int a3)
{
{
    char *v3;
    char i;
    int *v5;
    char v6;
    int *v7;
    char v8;
    int v11[22];
    char v12[12];
    int v13;
    char Source[200];
    v3 = strcpy(Source, a1);
    for ( i = Source[0]; i; i = *++v3 )
  {
    if ( i == 46 )
    break;
  }
    *v3 = 0;
    GameOptionsClass::UnlockMovieIfNeeded_MoviesList(g_GameModeOptions, Source);
    strcpy(v3, aBik_0);
    v5 = CCFileClass::Construct(v11, Source);
    v6 = (*(int (__thiscall **)(int *, int))(*v5 + 20))(v5, 0);
    v11[0] = &vt_CCFileClass;
    v13 = 0;
    Vector::Clear((int)v12);
    v11[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v11);
    if ( !v6 )
  {
    strcpy(v3, aVqa);
    v7 = CCFileClass::Construct(v11, Source);
    v8 = (*(int (__thiscall **)(int *, int))(*v7 + 20))(v7, 0);
    v11[0] = &vt_CCFileClass;
    v13 = 0;
    Vector::Clear((int)v12);
    v11[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v11);
    if ( !v8 )
    return 0;
  }
    if ( a2 )
    strcpy(a2, Source);
    return 1;
}
}

// ==== BACKFILL 0x005C09B0  AbstractClass::processCombatState  cls=VQMovieHandle  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void* AbstractClass::processCombatState(int a2) {
{
    AbstractClass **v3;
    AbstractClass *v4;
    AbstractClass *v5;
    v3 = this->uniqueId;
    *(void**)this = (AbstractClass **)&vt_VQMovieHandle;
    if ( v3 )
  {
    if ( *v3 )
    {
    DSurface::FlipIfNeeded((int)*v3);
    v4 = *v3;
    if ( *v3 )
      {
    CCFileClass::Cleanup(*v3);
    __3_YAXPAX_Z(v4);
      }
    *v3 = 0;
    }
    v5 = v3[18];
    if ( v5 )
    {
    BinkMovie::FreeSurfaceTracker((int *)v3[18]->__pad_0);
    __3_YAXPAX_Z(v5);
    v3[18] = 0;
    }
    *((char *)(v3) + 69) = 0;
  }
    *(void**)this = (AbstractClass **)&vt_MovieHandle;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VQMovieHandle *)this;
}
} } }

// ==== BACKFILL 0x005C0A30  BinkMovieHandle::QueryInterface  cls=BinkMovieHandle  sig=csp  renamed_refs=0 ====
BinkMovieHandle * BinkMovieHandle::QueryInterface(char a2)
{
{
    BinkMovie *v3;
    v3 = *(this + 4);
    *(void**)this = (BinkMovie *)&vt_BinkMovieHandle;
    if ( v3 )
  {
    BinkMovie::Stop((int)v3);
    __3_YAXPAX_Z(v3);
  }
    *(void**)this = (BinkMovie *)&vt_MovieHandle;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BinkMovieHandle *)this;
}
}

// ==== BACKFILL 0x005C0A70  TacticalClass::ClearVector  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace gamemd { void TacticalClass::ClearVector() {
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
} }

// ==== BACKFILL 0x005C0AA0  TacticalClass::ProbeCalling  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace gamemd { int TacticalClass::ProbeCalling(int a1) {
{
      if ( this->q00C )
        return (unsigned int)(a2 - this->q004) >> 2;
      else
        return 0;
}
} }

// ==== BACKFILL 0x005C0B10  AbstractClass::checkCombatFlags  cls=VectorClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::checkCombatFlags(int a2, void* a3) {
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->vtable3 = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->vtable3 = 1;
    if ( v4 )
    {
    if ( this->vtable1 )
      {
    v6 = this->vtable2;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->vtable1 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->vtable1 = 0;
        }
      }
    this->vtable1 = v4;
    this->vtable2 = a2;
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
    this->vt_entry_68();
    return 1;
  }
}
} } }

// ==== BACKFILL 0x005C0BC0  AbstractClass::processDamageEvent  cls=VectorClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void AbstractClass::processDamageEvent() {
{
    if ( this->vtable1 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->vtable1 = 0;
  }
    this->IsAllocated = 0;
    this->vtable2 = 0;
}
} } }

// ==== BACKFILL 0x005C0BF0  AbstractClass::applyDamageEffects  cls=VectorClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::applyDamageEffects(void* a1) {
{
      int result;
      int v3;
      _DWORD *i;

      if ( !this->vtable3 )
        return 0;
      v3 = this->vtable2;
      result = 0;
      if ( v3 <= 0 )
        return -1;
      for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i )
      {
        if ( ++result >= v3 )
          return -1;
      }
      return result;
}
} } }

// ==== BACKFILL 0x005C0C30  AbstractClass::checkDamageThreshold  cls=VectorClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::checkDamageThreshold(int a1) {
{
      if ( this->vtable3 )
        return (unsigned int)(a2 - this->vtable1) >> 2;
      else
        return 0;
}
} } }

// ==== BACKFILL 0x005C0C50  TacticalClass::ReallocVector  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace gamemd { int TacticalClass::ReallocVector(int a1, void* a2) {
{
      _DWORD *v4;
      int v5;
      int i;
      int v7;

      if ( a2 )
      {
        this->q00C = 0;
        if ( a3 )
          v4 = a3;
        else
          v4 = __2_YAPAXI_Z(4 * a2);
        this->q00C = 1;
        if ( !v4 )
          return 0;
        if ( this->q004 )
        {
          v5 = this->q008;
          if ( a2 < v5 )
            v5 = a2;
          for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->q004 + 4 * i - 4) )
            ++i;
          if ( this->q00D )
          {
            __3_YAXPAX_Z(*((void **)this + 1));
            this->q004 = 0;
          }
        }
        this->q004 = v4;
        this->q008 = a2;
        this->q00D = a3 == 0;
      }
      else
      {
        this->vt3();
      }
      v7 = this->q008;
      if ( v7 < this->uniqueId )
        this->uniqueId = v7;
      return 1;
}
} }

// ==== BACKFILL 0x005C0D00  TacticalClass::FindInVector  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace gamemd { int TacticalClass::FindInVector(void* a1) {
{
      int v2;
      int result;
      _DWORD *i;

      v2 = this->uniqueId;
      result = 0;
      if ( v2 <= 0 )
        return -1;
      for ( i = (_DWORD *)this->q004; *i != *a2; ++i )
      {
        if ( ++result >= v2 )
          return -1;
      }
      return result;
}
} }

// ==== BACKFILL 0x005C0D30  AbstractClass::processDeathEvent  cls=VectorClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void* AbstractClass::processDeathEvent(int a2) {
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_char_const;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
} } }

// ==== BACKFILL 0x005C0DD0  MPBattleClass::initGame  cls=MPBattleClass  sig=csp  renamed_refs=0 ====
unsigned int * MPBattleClass::initGame(const wchar_t ** a1, MultiplayerBattle * aP2, const char ** a3, MultiplayerBattle * aP4, char aP5, MultiplayerBattle * aP6)
{
{
    MultiplayerGameMode::Construct( this, (MultiplayerGameMode *)a1, (MultiplayerGameMode *)aP2, (MultiplayerGameMode *)a3, (MultiplayerGameMode *)aP4, (MultiplayerGameMode *)aP5, (MultiplayerGameMode *)aP6);
    this->vfptr = &vt_MultiplayerBattle;
    return &this->vfptr;
}
}

// ==== BACKFILL 0x005C0E10  sub_5C0E10  cls=MultiplayerBattle  sig=csp  renamed_refs=0 ====
void E4Recv_5C0E10::sub_5C0E10()
{
{
    this->vfptr = &vt_MultiplayerBattle;
    MultiplayerGameMode::Dtor(this);
}
}

// ==== BACKFILL 0x005C0E20  ScenarioClass::initUnits  cls=MultiplayerBattle  sig=csp  renamed_refs=0 ====
char ScenarioClass::initUnits()
{
return 1;
}

// ==== BACKFILL 0x005C0E30  ScenarioClass::StubReturnFalse  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
char ScenarioClass::StubReturnFalse()
{
return 0;
}

// ==== BACKFILL 0x005C0E40  ScenarioClass::StubReturnFalse2  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
char ScenarioClass::StubReturnFalse2()
{
return 0;
}

// ==== BACKFILL 0x005C0E50  ScenarioClass::StubReturnFalse3  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
char ScenarioClass::StubReturnFalse3(int a1)
{
return 1;
}

// ==== BACKFILL 0x005C0E60  ScenarioClass::StubReturnTrue  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
void ScenarioClass::StubReturnTrue()
{
  ;
}

// ==== BACKFILL 0x005C0E70  ScenarioClass::StubReturnTrue2  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
void ScenarioClass::StubReturnTrue2()
{
  ;
}

// ==== BACKFILL 0x005C0E80  ScenarioClass::StubReturnFalse4  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
void ScenarioClass::StubReturnFalse4(int a1)
{
  ;
}

// ==== BACKFILL 0x005C0E90  Memory::FreeConditional  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
char Memory::FreeConditional(int a1, int a2, void * Block, int a4, short a5, int a6, int a7, int a8, int a9)
{
{
    if ( Block && HIBYTE(a5) )
    __3_YAXPAX_Z(Block);
    return 0;
}
}

// ==== BACKFILL 0x005C0ED0  ScenarioClass::StubReturnFalse5  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
char ScenarioClass::StubReturnFalse5(int a1, int a2, int a3)
{
return 1;
}

// ==== BACKFILL 0x005C0EE0  ScenarioClass::initTriggers  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
char ScenarioClass::initTriggers()
{
return 1;
}

// ==== BACKFILL 0x005C0EF0  ScenarioClass::StubReturnFalse6  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
void ScenarioClass::StubReturnFalse6(int a1, int a2)
{
  ;
}

// ==== BACKFILL 0x005C0F00  ScenarioClass::StubReturnFalse7  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
void ScenarioClass::StubReturnFalse7(int a1)
{
  ;
}

// ==== BACKFILL 0x005C0F10  ScenarioClass::StubReturnTrue3  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
void ScenarioClass::StubReturnTrue3()
{
  ;
}

// ==== BACKFILL 0x005C0F20  ScenarioClass::StubReturnTrue4  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
void ScenarioClass::StubReturnTrue4()
{
  ;
}

// ==== BACKFILL 0x005C0F30  ScenarioClass::initTeams  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
int ScenarioClass::initTeams()
{
return -1;
}

// ==== BACKFILL 0x005C0F40  ScenarioClass::StubReturnTrue5  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
void ScenarioClass::StubReturnTrue5()
{
  ;
}

// ==== BACKFILL 0x005C0F50  ScenarioClass::StubReturnFalse8  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
void ScenarioClass::StubReturnFalse8(int a1)
{
  ;
}

// ==== BACKFILL 0x005C0F60  ScenarioClass::StubReturnFalse9  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
void ScenarioClass::StubReturnFalse9(int a1)
{
  ;
}

// ==== BACKFILL 0x005C0F70  ScenarioClass::StubReturnFalse10  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
char ScenarioClass::StubReturnFalse10()
{
return 0;
}

// ==== BACKFILL 0x005C0F80  ScenarioClass::StubReturnTrue6  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
void ScenarioClass::StubReturnTrue6()
{
  ;
}

// ==== BACKFILL 0x005C0F90  ScenarioClass::StubReturnTrue7  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
void ScenarioClass::StubReturnTrue7()
{
  ;
}

// ==== BACKFILL 0x005C0FA0  Memory::FreeConditional2  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
char Memory::FreeConditional2(int a1, void * Block, int a3, short a4, int a5, int a6, int a7)
{
{
    if ( Block && HIBYTE(a4) )
    __3_YAXPAX_Z(Block);
    return 0;
}
}

// ==== BACKFILL 0x005C0FC0  ScenarioClass::StubReturnFalse11  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
int ScenarioClass::StubReturnFalse11()
{
return 0;
}

// ==== BACKFILL 0x005C0FD0  ScenarioClass::initWaypoints  cls=MultiplayerGameMode  sig=csp  renamed_refs=0 ====
char ScenarioClass::initWaypoints()
{
return 1;
}

// ==== BACKFILL 0x005C0FE0  ScenarioClass::initAI  cls=MultiplayerBattle  sig=csp  renamed_refs=0 ====
namespace gamemd { void* ScenarioClass::initAI(int a2) {
{
    this->vfptr = &vt_MultiplayerBattle;
    MultiplayerGameMode::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return &this->vfptr;
}
} }

// ==== BACKFILL 0x005C1980  MPCooperative_Copy  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int sub_5C1980()
{
{
    int result;
    int v1;
    int i;
    int v3;
    int v4;
    result = -1;
    v1 = 0;
    v3 = -1;
    if ( DataGlobal_89F574 > 0 )
  {
    do
    {
    Movie::GetSection((int)&g_DDrawSurfaceManager, v1, &v4);
    for ( i = 0; i < 780; i += 260 )
      {
    if ( g_GameRulesOptions )
        {
    if ( !_strnicmp( (const char *)(*(int *)(g_MultiplayerGameState + 4 * g_GameRulesOptions) + 88), (const char *)(*(int *)(v4 + 12) + i), strlen((const char *)(*(int *)(v4 + 12) + i))) )
    v3 = v1;
        }
      }
    ++v1;
    }
    while ( v1 < DataGlobal_89F574 );
    return v3;
  }
    return result;
}
}

// ==== BACKFILL 0x005C1D80  MPCooperative::Write  cls=MPCooperative  sig=csp  renamed_refs=1 ====
char MPCooperative::Write(int a2)
{
{
    char *v2;
    if ( Game_PlayerCount == 2 )
  {
    v2 = this->MPCooperative_field_0x40;
    if ( v2 )
    String::AssignWideToChar(v2, *(char **)Game_PlayerInfoArray, *(char **)(Game_PlayerInfoArray + 4));
  }
    return ScenarioClass::MissionStubReturnZero2(a2);
}
}

// ==== BACKFILL 0x005C21A0  MPCooperative::CheckReady  cls=MPCooperative  sig=csp  renamed_refs=0 ====
HWND MPCooperative::CheckReady(HWND hDlg)
{
{
    HWND result;
    result = GetDlgItem(hDlg, 1842);
    if ( result )
    return (HWND)PostMessageA(result, 0x405u, 1u, DataGlobal_A8EB68);
    return result;
}
}

// ==== BACKFILL 0x005C2500  Campaign::SetupMovie  cls=Campaign  sig=csp  renamed_refs=0 ====
namespace gamemd { namespace wdt { void Campaign::SetupMovie() {
{
      HWND v2;
      char *v3;
      int *v4;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int *v10;
      int ResourceID2;
      int v12;
      HWND GameUI;
      int v14;
      int v15;
      int v16;
      int *v17;
      int v18;

      v2 = hDlg;
      v3 = 0;
      v4 = this;
      v17 = this;
      if ( hDlg )
      {
        v5 = this->q33C;
        v6 = DataGlobal_A8BB0C;
        v16 = DataGlobal_A8BB0C;
        v14 = 0;
        Movie::GetSection((int)&g_DDrawSurfaceManager, v5, &v15);
        v7 = v15;
        if ( v15 )
        {
          if ( *(_DWORD *)(v15 + 32) )
          {
            v8 = v4[16];
            if ( v8 )
            {
              if ( Movie::GetState(v8, &v14) )
              {
                v9 = v14;
              }
              else
              {
                v9 = 0;
                v14 = 0;
              }
              v7 = v15;
            }
            else
            {
              v9 = 0;
              v14 = 0;
            }
            if ( v9 < *(_DWORD *)(v7 + 32) )
            {
              v18 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 20) + 4 * v9) + 16);
              if ( v6 > 0 )
              {
                v10 = &g_NetworkPlayerName;
                do
                {
                  ResourceID2 = GetResourceID2CSF(v3);
                  MovieClass::ReadConfig(v2, ResourceID2);
                  if ( v18 <= 1 )
                  {
                    v12 = SideClass::FindByName(**(void ***)(*(_DWORD *)(*(_DWORD *)(v15 + 20) + 4 * v14) + 4));
                    SetupLobbyCountryCombo(hDlg, ResourceID2, v12);
                    SessionClass::SetPlayerOption(*v10, v12);
                    v2 = hDlg;
                  }
                  else
                  {
                    SetupLobbyCountryCombo(v2, ResourceID2, -2);
                    SessionClass::SetPlayerOption(*v10, -2);
                  }
                  ++v3;
                  ++v10;
                }
                while ( (int)v3 < v16 );
                v4 = v17;
                v6 = v16;
              }
              DisableCampaignSlots(v2, v6);
              GameUI = (HWND)Dialog::FindGameUI();
              if ( GameUI )
                CampaignCoop::Setup(v4, GameUI, 1);
            }
          }
        }
      }
}
} } }

// ==== BACKFILL 0x005C2640  MPCooperative::Clone  cls=MPCooperative  sig=csp  renamed_refs=0 ====
void MPCooperative::Clone(HWND hDlg)
{
{
    int v3;
    char *i;
    int ResourceID2CSF;
    if ( hDlg )
  {
    v3 = *(int *)&g_NetworkPlayerBuffer.__pad_430[24];
    for ( i = 0; (int)i < v3; ++i )
    {
    ResourceID2CSF = GetResourceID2CSF(i);
    MovieClass::ReadConfig(this, (IUnknown *)hDlg, ResourceID2CSF);
    }
    CampaignCoop::Setup(this, hDlg, 1);
  }
}
}

// ==== BACKFILL 0x005C2CB0  MPCooperative::ValidateSettings  cls=MPCooperative  sig=csp  renamed_refs=0 ====
char MPCooperative::ValidateSettings()
{
{
    HWND GameUI;
    GameUI = (HWND)Dialog::FindGameUI();
    if ( GameUI || (GameUI = (HWND)Dialog::FindByHandle((void *)0xBC6)) != 0 )
    CampaignCoop::Setup(this, GameUI, 1);
    return 1;
}
}

// ==== BACKFILL 0x005C2CE0  MPCooperative::SaveSettings  cls=MPCooperative  sig=csp  renamed_refs=0 ====
int MPCooperative::SaveSettings(HWND hWnd, int a3)
{
{
    return ListBox::FillPlayers(this, hWnd, a3);
}
}

// ==== BACKFILL 0x005C36F0  MPCooperative::j_?do_always_noconv_codecvt_base_std__MBE_NXZ_17  cls=MPCooperative  sig=csp  renamed_refs=0 ====
int MPCooperative::j__do_always_noconv_codecvt_base_std__MBE_NXZ_17()
{
    bool __thiscall MPCooperative::j__do_always_noconv_codecvt_base_std__MBE_NXZ_17(std::codecvt_base *(void**)this)
{
    return ScenarioClass::processAI(this);
}
}

// ==== BACKFILL 0x005C3700  MPCooperative::StubReturnFalse  cls=MPCooperative  sig=csp  renamed_refs=0 ====
char MPCooperative::StubReturnFalse()
{
return 0;
}

// ==== BACKFILL 0x005C3F30  MPCooperative::Cleanup  cls=MPCooperative  sig=csp  renamed_refs=0 ====
int MPCooperative::Cleanup()
{
{
    HWND GameUI;
    HWND v3;
    int result;
    GameUI = (HWND)Dialog::FindGameUI();
    v3 = GameUI;
    if ( GameUI )
  {
    CampaignCoop::Setup(this, GameUI, 0);
    SkirmishDialog::FillComboBoxes(v3);
  }
    for ( result = 0; result < Game_PlayerCount; ++result )
    *(int *)(*(int *)(Game_PlayerInfoArray + 4 * result) + 107) = result;
    return result;
}
}

// ==== BACKFILL 0x005C42C0  MPCooperative::COMStub_Ret2  cls=MPCooperative  sig=csp  renamed_refs=0 ====
int MPCooperative::COMStub_Ret2()
{
return 2;
}

// ==== BACKFILL 0x005C4670  MPCooperative::checkVictory  cls=MPCooperative  sig=csp  renamed_refs=3 ====
int MPCooperative::checkVictory()
{
{
    int v2;
    int v3;
    int v5;
    int v6;
    int v7;
    v2 = 0;
    v3 = this->MPCooperative_field_0x40;
    if ( !v3 )
    return 0;
    MPCooperative::GetMovieScore(v3, &v5);
    Movie::GetState(this->MPCooperative_field_0x40, &v6);
    if ( v5 == v6 )
  {
    Movie::GetSectionID(this->MPCooperative_field_0x40, &v7);
    v2 = 1 << v7;
    Debug::Log();
  }
    return v2;
}
}

// ==== BACKFILL 0x005C4E90  MPCooperative::spawnUnits  cls=MPCooperative  sig=csp  renamed_refs=1 ====
char MPCooperative::spawnUnits(int a2, void * Block, int a4, short a5, int a6, int a7, unsigned int * a8)
{
{
    *a8 = 0;
    if ( this->MPCooperative_field_0x40 )
  {
    if ( Block )
    {
    if ( HIBYTE(a5) )
    __3_YAXPAX_Z(Block);
    }
    return 1;
  }
    else
  {
    if ( Block && HIBYTE(a5) )
    __3_YAXPAX_Z(Block);
    return 0;
  }
}
}

// ==== BACKFILL 0x005C4EE0  MPCooperative::assignResources  cls=MPCooperative  sig=csp  renamed_refs=0 ====
char MPCooperative::assignResources()
{
return 1;
}

// ==== BACKFILL 0x005C4EF0  MPCooperative::setUpAlliances  cls=MPCooperative  sig=csp  renamed_refs=0 ====
char MPCooperative::setUpAlliances()
{
return 1;
}

// ==== BACKFILL 0x005C4F00  MPCooperative::initTurnOrder  cls=MPCooperative  sig=csp  renamed_refs=0 ====
char MPCooperative::initTurnOrder()
{
return 0;
}

// ==== BACKFILL 0x005C4FC0  MPCooperative::saveGameState  cls=DynamicVector  sig=csp  renamed_refs=0 ====
DynamicVector * MPCooperative::saveGameState(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_MPlayerScoreType;
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
}

// ==== BACKFILL 0x005C5010  MPCooperative::loadGameState  cls=DynamicVector  sig=csp  renamed_refs=0 ====
void MPCooperative::loadGameState()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MPCooperative_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MPCooperative_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MPCooperative_field_0x8 = 0;
}
}

// ==== BACKFILL 0x005C5040  MPCooperative::syncPlayers  cls=DynamicVector  sig=csp  renamed_refs=0 ====
unsigned int MPCooperative::syncPlayers(int a2)
{
{
    if ( (unsigned char)this->MPCooperative_field_0xC )
    return (unsigned int)(a2 - this->MPCooperative_field_0x4) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x005C50D0  MPCooperative::processPlayerInput  cls=DynamicVector  sig=csp  renamed_refs=0 ====
void MPCooperative::processPlayerInput()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MPCooperative_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MPCooperative_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MPCooperative_field_0x8 = 0;
}
}

// ==== BACKFILL 0x005C5100  MPCooperative::updateGameClock  cls=DynamicVector  sig=csp  renamed_refs=0 ====
unsigned int MPCooperative::updateGameClock(int a2)
{
{
    if ( (unsigned char)this->MPCooperative_field_0xC )
    return (unsigned int)(a2 - this->MPCooperative_field_0x4) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x005C5170  MPCooperative::Release  cls=VectorClass  sig=csp  renamed_refs=0 ====
char MPCooperative::Release(int a2, unsigned int * a3)
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
    if ( this->MPCooperative_field_0x4 )
      {
    v6 = this->MPCooperative_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->MPCooperative_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MPCooperative_field_0x4 = 0;
        }
      }
    this->MPCooperative_field_0x4 = v4;
    this->MPCooperative_field_0x8 = a2;
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
    this->StubReturnFalse3();
    return 1;
  }
}
}

// ==== BACKFILL 0x005C5220  MPCooperative::ddtor  cls=VectorClass  sig=csp  renamed_refs=0 ====
void MPCooperative::ddtor()
{
{
    if ( this->MPCooperative_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->MPCooperative_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MPCooperative_field_0x8 = 0;
}
}

// ==== BACKFILL 0x005C5250  MPCooperative::checkTimeout  cls=VectorClass  sig=csp  renamed_refs=0 ====
int MPCooperative::checkTimeout(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->MPCooperative_field_0xC )
    return 0;
    v3 = this->MPCooperative_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}

// ==== BACKFILL 0x005C5290  MPCooperative::handleDisconnect  cls=VectorClass  sig=csp  renamed_refs=0 ====
unsigned int MPCooperative::handleDisconnect(int a2)
{
{
    if ( (unsigned char)this->MPCooperative_field_0xC )
    return (unsigned int)(a2 - this->MPCooperative_field_0x4) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x005C52B0  MPCooperative::migrateHost  cls=DynamicVector  sig=csp  renamed_refs=2 ====
char MPCooperative::migrateHost(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->__pad_00C = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->__pad_00C = 1;
    if ( !v4 )
    return 0;
    if ( this->MPCooperative_field_0x4 )
    {
    v5 = this->MPCooperative_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->MPCooperative_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MPCooperative_field_0x4 = 0;
      }
    }
    this->MPCooperative_field_0x4 = v4;
    this->MPCooperative_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->StubReturnFalse3();
  }
    v7 = this->MPCooperative_field_0x8;
    if ( v7 < this->MPCooperative_field_0x10 )
    this->MPCooperative_field_0x10 = v7;
    return 1;
}
}

// ==== BACKFILL 0x005C5360  MPCooperative::validatePlayerAction  cls=DynamicVector  sig=csp  renamed_refs=2 ====
int MPCooperative::validatePlayerAction(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->DynamicVector_field_0x10;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->q004; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

// ==== BACKFILL 0x005C53D0  MPCooperative::processTeamChat  cls=VectorClass  sig=csp  renamed_refs=0 ====
char MPCooperative::processTeamChat(int a2, unsigned int * a3)
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
    if ( this->MPCooperative_field_0x4 )
      {
    v6 = this->MPCooperative_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->MPCooperative_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MPCooperative_field_0x4 = 0;
        }
      }
    this->MPCooperative_field_0x4 = v4;
    this->MPCooperative_field_0x8 = a2;
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
    this->StubReturnFalse3();
    return 1;
  }
}
}

// ==== BACKFILL 0x005C5480  MPCooperative::updateScoreBoard  cls=VectorClass  sig=csp  renamed_refs=0 ====
void MPCooperative::updateScoreBoard()
{
{
    if ( this->MPCooperative_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->MPCooperative_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MPCooperative_field_0x8 = 0;
}
}

// ==== BACKFILL 0x005C54B0  MPCooperative::processAITurn  cls=VectorClass  sig=csp  renamed_refs=0 ====
int MPCooperative::processAITurn(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->MPCooperative_field_0xC )
    return 0;
    v3 = this->MPCooperative_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}

// ==== BACKFILL 0x005C54F0  MPCooperative::evaluateAIStrategy  cls=VectorClass  sig=csp  renamed_refs=0 ====
unsigned int MPCooperative::evaluateAIStrategy(int a2)
{
{
    if ( (unsigned char)this->MPCooperative_field_0xC )
    return (unsigned int)(a2 - this->MPCooperative_field_0x4) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x005C5770  MPCooperative::broadcastMessage  cls=DynamicVector  sig=csp  renamed_refs=2 ====
char MPCooperative::broadcastMessage(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->__pad_00C = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->__pad_00C = 1;
    if ( !v4 )
    return 0;
    if ( this->MPCooperative_field_0x4 )
    {
    v5 = this->MPCooperative_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->MPCooperative_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MPCooperative_field_0x4 = 0;
      }
    }
    this->MPCooperative_field_0x4 = v4;
    this->MPCooperative_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->StubReturnFalse3();
  }
    v7 = this->MPCooperative_field_0x8;
    if ( v7 < this->MPCooperative_field_0x10 )
    this->MPCooperative_field_0x10 = v7;
    return 1;
}
}

// ==== BACKFILL 0x005C5820  MPCooperative::handlePlayerReady  cls=DynamicVector  sig=csp  renamed_refs=2 ====
int MPCooperative::handlePlayerReady(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->DynamicVector_field_0x10;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->q004; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

// ==== BACKFILL 0x005C5850  MPCooperative::verifyGameIntegrity  cls=VectorClass  sig=csp  renamed_refs=0 ====
VectorClass * MPCooperative::verifyGameIntegrity(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_MPlayerScoreType;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}

// ==== BACKFILL 0x005C58A0  MPCooperative::processVote  cls=VectorClass  sig=csp  renamed_refs=0 ====
VectorClass * MPCooperative::processVote(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_NodeNameType;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}

// ==== BACKFILL 0x005C5990  MPCooperative::tallyVotes  cls=DynamicVector  sig=csp  renamed_refs=0 ====
DynamicVector * MPCooperative::tallyVotes(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_CoopCampaignClass;
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
}

// ==== BACKFILL 0x005C59E0  MPCooperative::applyVoteResult  cls=MPCooperative  sig=csp  renamed_refs=5 ====
unsigned int * MPCooperative::applyVoteResult(int a2, int a3)
{
{
    this->MPCooperative_field_0x4 = 0;
    this->MPCooperative_field_0x8 = a2;
    this->MPCooperative_field_0xC = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_MPlayerScoreType;
    if ( a2 )
  {
    if ( a3 )
    {
    this->MPCooperative_field_0x4 = a3;
    return this;
    }
    this->MPCooperative_field_0x4 = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x005C5A30  AbstractClass::updateAnimationState  cls=AbstractClass  sig=csp  renamed_refs=5 ====
namespace ra2 { namespace game { void* AbstractClass::updateAnimationState(int aP1, int aP2) {
{
    this->vtable2 = 0;
    this->vtable3 = aP1;
    this->vtable4 = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_NodeNameType;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->vtable2 = aP2;
    return this;
    }
    this->vtable2 = __2_YAPAXI_Z(4 * (int)aP1);
    this->IsAllocated = 1;
  }
    return this;
}
} } }

// ==== BACKFILL 0x005C5A80  CoopCampaignVector::Construct  cls=CoopCampaignVector  sig=csp  renamed_refs=5 ====
unsigned int * CoopCampaignVector::Construct(MultiplayerGameMode * aP1, MultiplayerGameMode * aP2)
{
{
    this->CoopCampaignVector_field_0x04 = 0;
    this->CoopCampaignVector_field_0x08 = aP1;
    this->CoopCampaignVector_field_0x0C = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_CoopCampaignClass;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->CoopCampaignVector_field_0x04 = aP2;
    return this;
    }
    this->CoopCampaignVector_field_0x04 = __2_YAPAXI_Z(4 * (int)aP1);
    this->IsAllocated = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x005C5CE0  MPBattleClass::MPFreeForAllClass  cls=MPBattleClass  sig=csp  renamed_refs=0 ====
unsigned int * MPBattleClass::MPFreeForAllClass(const wchar_t ** a1, FreeForAll * aP2, const char ** a3, FreeForAll * aP4, char aP5, FreeForAll * aP6)
{
{
    MultiplayerGameMode::Construct( this, (MultiplayerGameMode *)a1, (MultiplayerGameMode *)aP2, (MultiplayerGameMode *)a3, (MultiplayerGameMode *)aP4, (MultiplayerGameMode *)aP5, (MultiplayerGameMode *)aP6);
    this->vfptr = &vt_FreeForAll;
    return &this->vfptr;
}
}

// ==== BACKFILL 0x005C5D20  sub_5C5D20  cls=FreeForAll  sig=csp  renamed_refs=0 ====
void E4Recv_5C5D20::sub_5C5D20()
{
{
    this->vfptr = &vt_FreeForAll;
    MultiplayerGameMode::Dtor(this);
}
}

// ==== BACKFILL 0x005C5E30  ScenarioClass::processTriggerEvents  cls=FreeForAll  sig=csp  renamed_refs=0 ====
char ScenarioClass::processTriggerEvents()
{
return 1;
}

// ==== BACKFILL 0x005C5E40  ScenarioClass::executeTriggerActions  cls=FreeForAll  sig=csp  renamed_refs=0 ====
namespace gamemd { void* ScenarioClass::executeTriggerActions(int a2) {
{
    this->vfptr = &vt_FreeForAll;
    MultiplayerGameMode::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return &this->vfptr;
}
} }

// ==== BACKFILL 0x005C6080  sub_5C6080  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_5C6080(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
{
    int result;
    result = BaseDialogProc(hWnd, a2, a3, a4);
    if ( !result )
  {
    if ( a2 == 273 )
    *(int *)GetWindowLongA(hWnd, 8) = (unsigned short)a3;
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x005C6150  MPBattleClass::MPManBattleClass  cls=MPBattleClass  sig=csp  renamed_refs=0 ====
unsigned int * MPBattleClass::MPManBattleClass(const wchar_t ** a1, MultiplayerManBattle * aP2, const char ** a3, MultiplayerManBattle * aP4, char aP5, MultiplayerManBattle * aP6)
{
{
    MultiplayerGameMode::Construct( this, (MultiplayerGameMode *)a1, (MultiplayerGameMode *)aP2, (MultiplayerGameMode *)a3, (MultiplayerGameMode *)aP4, (MultiplayerGameMode *)aP5, (MultiplayerGameMode *)aP6);
    *(void**)this = &vt_MultiplayerManBattle;
    return this;
}
}

// ==== BACKFILL 0x005C6190  sub_5C6190  cls=MultiplayerManBattle  sig=csp  renamed_refs=0 ====
void E4Recv_5C6190::sub_5C6190()
{
{
    *(void**)this = vt_MultiplayerManBattle;
    MultiplayerGameMode::Dtor(this);
}
}

// ==== BACKFILL 0x005C61A0  MultiplayerManBattle::QueryInterface  cls=MultiplayerManBattle  sig=csp  renamed_refs=0 ====
MultiplayerManBattle * MultiplayerManBattle::QueryInterface(char a2)
{
{
    *(void**)this = &vt_MultiplayerManBattle;
    MultiplayerGameMode::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MultiplayerManBattle *)this;
}
}

// ==== BACKFILL 0x005C61E0  Hash_Check_5C61E0  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_5C61E0()
{
return 3511;
}

// ==== BACKFILL 0x005C62B0  EncodeVarInt  cls=unknown  sig=csp  renamed_refs=0 ====
int VarInt_Encode(int a1, unsigned char * a2, int a3)
{
{
    unsigned int v4;
    int v5;
    char v6;
    int i;
    int v8;
    int j;
    int v10;
    unsigned int v11;
    char v13[260];
    v4 = EncodeVarInt_Helper(a3);
    *a2 = 2;
    if ( v4 > 0x7F )
  {
    v6 = 4;
    for ( i = 24; i != -8; i -= 8 )
    {
    if ( v4 >> i )
    break;
    --v6;
    }
    v8 = 4;
    *((int*)(a2) + 1) = v6 | 0x80;
    v5 = 1;
    for ( j = 24; j != -8; j -= 8 )
    {
    if ( v4 >> j )
    break;
    --v8;
    }
    if ( v8 )
    {
    v10 = 8 * v8 - 8;
    do
      {
    v11 = v4 >> v10;
    ++v5;
    v10 -= 8;
    --v8;
    a2[v5] = v11;
      }
    while ( v8 );
    }
  }
    else
  {
    *((int*)(a2) + 1) = v4;
    v5 = 1;
  }
    qmemcpy(&a2[v5 + 1], v13, v4);
    return v4 + v5 + 1;
}
}

// ==== BACKFILL 0x005C6490  EncodeVarInt_Helper  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_5C6490(unsigned char * a1, char * a2, int a3)
{
{
    char *v4;
    char i;
    int v6;
    int j;
    char v8;
    v4 = &a2[a3 - 1];
    for ( i = -(*(int *)&a2[4 * a3 - 4] < 0); v4 > a2; --v4 )
  {
    if ( *v4 != i )
    break;
  }
    v6 = 0;
    if ( *v4 < 0 && *(int *)&a2[4 * a3 - 4] >= 0 || (*v4 & 0x80) == 0 && *(int *)&a2[4 * a3 - 4] < 0 )
  {
    *a1 = i;
    v6 = 1;
  }
    a1[v6] = *v4;
    for ( j = v6 + 1; v4 != a2; ++j )
  {
    v8 = *--v4;
    a1[j] = v8;
  }
    return j;
}
}

// ==== BACKFILL 0x005C65B0  BigInt_Helper  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_5C65B0(int * a1, int a2)
{
{
    int result;
    result = *a1 + 1;
    for ( *a1 = result; !result; *a1 = result )
  {
    ++a1;
    if ( !--a2 )
    break;
    result = *a1 + 1;
  }
    return result;
}
}

// ==== BACKFILL 0x005C6940  InitArrayWithValue  cls=unknown  sig=csp  renamed_refs=0 ====
int InitArrayWithValue(unsigned int * a0, int a2, AbstractClass * aP2)
{
{
    memset(a0, 0, 4 * (int)aP2);
    *a0 = a2;
    return 0;
}
}

// ==== BACKFILL 0x005C69E0  CompareBigIntLE  cls=unknown  sig=csp  renamed_refs=0 ====
int CompareBigIntLE(int a1, int a2, int a3)
{
{
    int v3;
    unsigned int v4;
    int *v5;
    unsigned int v6;
    int *v7;
    bool v8;
    v3 = a3;
    v4 = *(int *)(a1 + 4 * a3 - 4);
    v5 = (int *)(a1 + 4 * a3 - 4);
    v6 = *(int *)(a2 + 4 * a3 - 4);
    v7 = (int *)(a2 + 4 * a3 - 4);
    v8 = v4 <= v6;
    if ( v4 < v6 )
    return -1;
    while ( 1 )
  {
    if ( !v8 )
    return 1;
    --v5;
    --v7;
    if ( !--v3 )
    break;
    v8 = *v5 <= *v7;
    if ( *v5 < *v7 )
    return -1;
  }
    return 0;
}
}

// ==== BACKFILL 0x005C6A30  Crypto_Helper  cls=unknown  sig=csp  renamed_refs=0 ====
bool Crypto_Helper(unsigned int * a0, unsigned int * a1, unsigned int * a2, Crypto * aP3, int a5)
{
{
    bool result;
    unsigned int v7;
    unsigned int v8;
    if ( !a5 )
    return (char)aP3;
    result = (char)aP3;
    do
  {
    v7 = *a1 + *a2;
    v8 = v7 + (unsigned char)aP3;
    result = v7 < *a1 || result && !v8;
    *a0 = v8;
    ++a2;
    ++a1;
    ++a0;
    LOBYTE(aP3) = result;
    --a5;
  }
    while ( a5 );
    return result;
}
}

// ==== BACKFILL 0x005C6AA0  sub_5C6AA0  cls=unknown  sig=csp  renamed_refs=0 ====
bool sub_5C6AA0(unsigned int * a1, unsigned int * a2, int a3, bool a4, int a5)
{
{
    int v6;
    bool result;
    unsigned int v8;
    unsigned int v9;
    if ( !a5 )
    return a4;
    v6 = a5;
    result = a4;
    do
  {
    v8 = *a2 + a3;
    v9 = v8 + a4;
    result = v8 < *a2 || result && !v9;
    *a1 = v9;
    a3 = 0;
    ++a2;
    ++a1;
    --v6;
    a4 = result;
  }
    while ( v6 );
    return result;
}
}

// ==== BACKFILL 0x005C6B60  DecodeAudioSampleWord  cls=unknown  sig=csp  renamed_refs=0 ====
unsigned char DecodeAudioSampleWord(int a1, unsigned short * a2, unsigned short a3, unsigned char a4, int a5)
{
{
    int v6;
    unsigned short v7;
    int v8;
    unsigned char result;
    if ( !(2 * a5) )
    return a4;
    v6 = 2 * a5;
    do
  {
    v7 = *a2++;
    a1 += 2;
    v8 = v7 - a3 - a4;
    a3 = 0;
    *(short *)(a1 - 2) = v8;
    result = BYTE2(v8) & 1;
    --v6;
    a4 = BYTE2(v8) & 1;
  }
    while ( v6 );
    return result;
}
}

// ==== BACKFILL 0x005C6D90  sub_5C6D90  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_5C6D90(int a1, unsigned short * a2, short a3, int a4)
{
{
    unsigned int v4;
    int v5;
    int v6;
    unsigned short v7;
    unsigned int v8;
    v4 = 0;
    if ( 2 * a4 <= 0 )
    return 0;
    v5 = a1 - (int)a2;
    v6 = 2 * a4;
    do
  {
    v7 = *a2++;
    v8 = v4 + a3 * v7;
    *(unsigned short *)((char *)(a2) + v5 - 2) = v8;
    --v6;
    v4 = HIWORD(v8);
  }
    while ( v6 );
    return 0;
}
}

// ==== BACKFILL 0x005C7DB0  Math_Compute  cls=unknown  sig=csp  renamed_refs=0 ====
void sub_5C7DB0(unsigned short * a1, unsigned short * a2, unsigned short a3, int a4)
{
{
    int v4;
    unsigned int v5;
    unsigned short v6;
    unsigned int v7;
    unsigned int v8;
    v4 = a4;
    v5 = 0;
    if ( a4 <= 0 )
  {
    *a1 = *a1;
  }
    else
  {
    do
    {
    v6 = *a2++;
    v7 = v5 + (unsigned short)*a1 + a3 * v6;
    *a1++ = v7;
    v8 = HIWORD(v7);
    --v4;
    v5 = v8;
    }
    while ( v4 );
    *a1 += v8;
  }
}
}

// ==== BACKFILL 0x005C8470  sub_5C8470  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int E4Recv_5C8470::sub_5C8470()
{
{
    unsigned int result;
    result = ((((((unsigned short)DataGlobal_ABF5A0 * (unsigned int)(unsigned short)~*(void**)this) >> 1) + (((((unsigned short)DataGlobal_ABF6B4 * ((unsigned int)(unsigned short)~*(this - 2) + 1)) >> 1) + (((unsigned short)~*(this - 1) * (unsigned int)(unsigned short)DataGlobal_ABF5A0 + 0x10000) >> 1) + 1) >> 16) + (((unsigned short)~*(this - 1) * (unsigned int)(unsigned short)DataGlobal_ABF6B4) >> 1) + 1) >> 14) + 2 * (unsigned short)DataGlobal_ABF6B4 * (unsigned short)~*(void**)this) >> DataGlobal_ABF8C4;
    if ( result >= 0xFFFF )
    return 0xFFFF;
    return result;
}
}

// ==== BACKFILL 0x005C8DD0  ValidateRSAKey_Helper  cls=unknown  sig=csp  renamed_refs=0 ====
char sub_5C8DD0(unsigned int * a1, int a2, int a3, int a4)
{
{
    int v5;
    char result;
    v5 = a3;
    if ( a3 >= 32 * a4 )
    v5 = 32 * a4;
    memset(a1, 0, 4 * a4);
    *a1 = 0;
    (*(void (__thiscall **)(int, int *, int))(*(int *)(a2) + 8))(a2, a1, v5 / 8 + 1);
    result = ~(-1 << (v5 % 8)) & *((char *)(a1) + v5 / 8);
    *((char *)(a1) + v5 / 8) = result;
    return result;
}
}

// ==== BACKFILL 0x005C93E0  MPBattleClass::MPMegawealthClass  cls=MPBattleClass  sig=csp  renamed_refs=0 ====
unsigned int * MPBattleClass::MPMegawealthClass(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, MPCooperative * aP4, char aP5, int aP6)
{
{
    MultiplayerGameMode::Construct( this, (MultiplayerGameMode *)a1, (MultiplayerGameMode *)a2, (MultiplayerGameMode *)a3, (MultiplayerGameMode *)aP4, (MultiplayerGameMode *)aP5, (MultiplayerGameMode *)aP6);
    *(void**)this = &vt_Megawealth;
    return this;
}
}

// ==== BACKFILL 0x005C9420  sub_5C9420  cls=Megawealth  sig=csp  renamed_refs=0 ====
void E4Recv_5C9420::sub_5C9420()
{
{
    *(void**)this = vt_Megawealth;
    MultiplayerGameMode::Dtor(this);
}
}

// ==== BACKFILL 0x005C9700  Scenario::ResetDisplayArrays  cls=Scenario  sig=csp  renamed_refs=0 ====
void * Scenario::ResetDisplayArrays()
{
{
    DataGlobal_ABF9F4 = 0;
    memset(DataGlobal_ABF958, 0, sizeof(DataGlobal_ABF958));
    DataGlobal_ABF9F8 = 0;
    return this;
}
}

// ==== BACKFILL 0x005CA630  MPBattleClass::MPSiegeClass  cls=MPBattleClass  sig=csp  renamed_refs=0 ====
unsigned int * MPBattleClass::MPSiegeClass(const wchar_t ** a1, MultiplayerSiege * aP2, const char ** a3, MultiplayerSiege * aP4, char aP5, MultiplayerSiege * aP6)
{
{
    MultiplayerGameMode::Construct( this, (MultiplayerGameMode *)a1, (MultiplayerGameMode *)aP2, (MultiplayerGameMode *)a3, (MultiplayerGameMode *)aP4, (MultiplayerGameMode *)aP5, (MultiplayerGameMode *)aP6);
    *(void**)this = &vt_MultiplayerSiege;
    return this;
}
}

// ==== BACKFILL 0x005CA670  sub_5CA670  cls=MultiplayerSiege  sig=csp  renamed_refs=0 ====
void E4Recv_5CA670::sub_5CA670()
{
{
    *(void**)this = vt_MultiplayerSiege;
    MultiplayerGameMode::Dtor(this);
}
}

// ==== BACKFILL 0x005CA7D0  MPBattleClass::vt_entry_18  cls=MultiplayerSiege  sig=csp  renamed_refs=0 ====
int MPBattleClass::vt_entry_18()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
bool __thiscall MPBattleClass::vt_entry_18(std::codecvt_base *this)
{
  return ScenarioClass::createStartingForces(this);
}
}

// ==== BACKFILL 0x005CA7E0  MultiplayerSiege::StubReturnFalse  cls=MultiplayerSiege  sig=csp  renamed_refs=0 ====
char MultiplayerSiege::StubReturnFalse()
{
return 0;
}

// ==== BACKFILL 0x005CA9B0  MultiplayerSiege::CheckStatus  cls=MultiplayerSiege  sig=csp  renamed_refs=0 ====
char MultiplayerSiege::CheckStatus(int a1)
{
{
    wchar_t **v1;
    wchar_t **v2;
    int v3;
    int v4;
    int v5;
    int v6;
    wchar_t **v7;
    wchar_t **v8;
    int v9;
    int v10;
    int v11;
    int v12;
    wchar_t **v13;
    wchar_t **v14;
    int v15;
    int v16;
    int v17;
    v1 = (wchar_t **)__2_YAPAXI_Z(0xCu);
    if ( v1 )
    v2 = MPCombatTeam::Constructor(v1);
    else
    v2 = 0;
    v3 = *(int *)(a1 + 8);
    if ( *(int *)(a1 + 16) < v3 || (*(char *)(a1 + 13) || !v3) && (v4 = *(int *)(a1 + 20), v4 > 0) && (*(unsigned char (__thiscall **)(int, int, int))(*(int *)(a1) + 8))(a1, v3 + v4, 0) )
  {
    v5 = *(int *)(a1 + 16);
    v6 = *(int *)(a1 + 4);
    *(int *)(a1 + 16) = v5 + 1;
    *(int *)(v6 + 4 * v5) = v2;
  }
    v7 = (wchar_t **)__2_YAPAXI_Z(0xCu);
    if ( v7 )
    v8 = MPCombatTeam::MPTeam(v7);
    else
    v8 = 0;
    v9 = *(int *)(a1 + 8);
    if ( *(int *)(a1 + 16) < v9 || (*(char *)(a1 + 13) || !v9) && (v10 = *(int *)(a1 + 20), v10 > 0) && (*(unsigned char (__thiscall **)(int, int, int))(*(int *)(a1) + 8))(a1, v9 + v10, 0) )
  {
    v11 = *(int *)(a1 + 16);
    v12 = *(int *)(a1 + 4);
    *(int *)(a1 + 16) = v11 + 1;
    *(int *)(v12 + 4 * v11) = v8;
  }
    v13 = (wchar_t **)__2_YAPAXI_Z(0xCu);
    if ( v13 )
    v14 = MPCombatTeam::Constructor2(v13);
    else
    v14 = 0;
    v15 = *(int *)(a1 + 8);
    if ( *(int *)(a1 + 16) < v15 || ((LOBYTE(v16) = *(char *)(a1 + 13), (char)v16) || !v15) && (v16 = *(int *)(a1 + 20), v16 > 0) && (LOBYTE(v16) = (*(int (__thiscall **)(int, int, int))(*(int *)(a1) + 8))(a1, v15 + v16, 0), (char)v16) )
  {
    v16 = *(int *)(a1 + 16);
    v17 = *(int *)(a1 + 4);
    *(int *)(a1 + 16) = v16 + 1;
    *(int *)(v17 + 4 * v16) = v14;
  }
    return v16;
}
}

// ==== BACKFILL 0x005CAAC0  MultiplayerSiege::GetResult  cls=MultiplayerSiege  sig=csp  renamed_refs=0 ====
char MultiplayerSiege::GetResult(unsigned int * ppv, int a2)
{
{
    int v2;
    int v3;
    int *BuildableFromArray;
    void *v6;
    int *v7;
    int *v8;
    int v9;
    int *StartCoords;
    short *CurrentOption;
    int v12[3];
    v2 = 0;
    if ( Game_PlayerCount > 0 )
  {
    v3 = Game_PlayerInfoArray;
    do
    {
    if ( *(int *)(*(int *)(v3) + 111) == ppv[12] )
    break;
    ++v2;
    v3 += 4;
    }
    while ( v2 < Game_PlayerCount );
  }
    if ( v2 >= Game_PlayerCount )
  {
    AI::CreateMCV(ppv, a2);
    return 0;
  }
    if ( *(int *)(*(int *)(Game_PlayerInfoArray + 4 * v2) + 107) != 1 )
    return AI::CreateMCV(ppv, a2);
    BuildableFromArray = HouseClass::FirstBuildableFromArray(ppv, (int)&g_RulesClass_Instance->IvanWarhead[1]);
    if ( !BuildableFromArray )
    return 0;
    v6 = __2_YAPAXI_Z(0x720u);
    if ( !v6 )
    return 0;
    v7 = (int *)BuildingClass::Construct((int)v6, (int)BuildableFromArray, (int)ppv);
    v8 = v7;
    if ( !v7 )
    return 0;
    v9 = *v7;
    StartCoords = HouseClass::GetStartCoords(ppv, v12);
    if ( (*(unsigned char (__thiscall **)(int *, int *, int))(v9 + 216))(v8, StartCoords, 0) )
    return 1;
    CurrentOption = (short *)HouseClass::GetCurrentOption(ppv, &a2);
    if ( FindInfantryDeployPosition(v8, CurrentOption, 1) )
    return 1;
    (*(void (__thiscall **)(int *, int))(*v8 + 32))(v8, 1);
    return 0;
}
}

// ==== BACKFILL 0x005CABD0  MultiplayerSiege::QueryInterface  cls=MultiplayerSiege  sig=csp  renamed_refs=0 ====
MultiplayerSiege * MultiplayerSiege::QueryInterface(char a2)
{
{
    *(void**)this = &vt_MultiplayerSiege;
    MultiplayerGameMode::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MultiplayerSiege *)this;
}
}

// ==== BACKFILL 0x005CAE60  sub_5CAE60  cls=MultiplayerSiegeDefenderTeam  sig=csp  renamed_refs=0 ====
void E4Recv_5CAE60::sub_5CAE60()
{
{
    *(void**)this = &vt_MultiplayerSiegeDefenderTeam;
    MultiplayerTeam::Destructor(this);
}
}

// ==== BACKFILL 0x005CAF00  sub_5CAF00  cls=MultiplayerSiegeAttackerTeam  sig=csp  renamed_refs=0 ====
void E4Recv_5CAF00::sub_5CAF00()
{
{
    *(void**)this = &vt_MultiplayerSiegeAttackerTeam;
    MultiplayerTeam::Destructor(this);
}
}

// ==== BACKFILL 0x005CAF70  sub_5CAF70  cls=ObjectClass  sig=csp  renamed_refs=0 ====
DWORD E4Recv_5CAF70::sub_5CAF70()
{
{
    DWORD result;
    LARGE_INTEGER Frequency;
    if ( QueryPerformanceFrequency(&Frequency) )
  {
    result = Frequency.LowPart;
    *(void**)this = Frequency.HighPart;
  }
    else
  {
    *(void**)this = 0;
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x005CB3A0  MPBattleClass::MPUnholyAllianceClass  cls=MPBattleClass  sig=csp  renamed_refs=0 ====
unsigned int * MPBattleClass::MPUnholyAllianceClass(const wchar_t ** a1, UnholyAlliance * aP2, const char ** a3, UnholyAlliance * aP4, char aP5, UnholyAlliance * aP6)
{
{
    MultiplayerGameMode::Construct( this, (MultiplayerGameMode *)a1, (MultiplayerGameMode *)aP2, (MultiplayerGameMode *)a3, (MultiplayerGameMode *)aP4, (MultiplayerGameMode *)aP5, (MultiplayerGameMode *)aP6);
    *(void**)this = &vt_UnholyAlliance;
    return this;
}
}

// ==== BACKFILL 0x005CB3E0  sub_5CB3E0  cls=UnholyAlliance  sig=csp  renamed_refs=0 ====
void E4Recv_5CB3E0::sub_5CB3E0()
{
{
    *(void**)this = vt_UnholyAlliance;
    MultiplayerGameMode::Dtor(this);
}
}

// ==== BACKFILL 0x005CB3F0  UnholyAlliance::Read  cls=UnholyAlliance  sig=csp  renamed_refs=0 ====
char UnholyAlliance::Read()
{
{
    Bases = 1;
    return 1;
}
}

// ==== BACKFILL 0x005CB400  UnholyAlliance::Write  cls=UnholyAlliance  sig=csp  renamed_refs=0 ====
BOOL UnholyAlliance::Write(MPCooperative * aP0)
{
{
    return HouseClass_Player.__pad_5568[8100] && ScenarioClass::MissionStubReturnZero2(aP0);
}
}

// ==== BACKFILL 0x005CB430  UnholyAlliance::Seek  cls=UnholyAlliance  sig=csp  renamed_refs=0 ====
char UnholyAlliance::Seek()
{
{
    Bases = 1;
    return 1;
}
}

// ==== BACKFILL 0x005CB6C0  VtableStub::5CB6C0  cls=VtableStub  sig=csp  renamed_refs=0 ====
int VtableStub::5CB6C0()
{
{
    *(void**)this = &vt_MSAnim;
}
}

// ==== BACKFILL 0x005CC550  ScenarioClass::DrawPlacementPreview  cls=MSOverlayAnim  sig=csp  renamed_refs=0 ====
namespace gamemd { void ScenarioClass::DrawPlacementPreview(int a1, void* a2) {
{
      char v4;
      int *FoundationSize;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int *v11;
      int v12;
      unsigned int v13;
      int v14;
      int v15;
      int *v16;
      int v17;
      int v18[4];
      int v19;
      int v20;
      int v21;
      int v22;
      char v23[16];

      v19 = 0;
      v4 = this->q00C;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      if ( v4 )
      {
        FoundationSize = Building::GetFoundationSize(v18, this->q028);
        v6 = this->Items;
        v19 = *FoundationSize;
        v7 = v6 + v19;
        v20 = FoundationSize[1];
        v21 = FoundationSize[2];
        v8 = this->Capacity + v20;
        v22 = FoundationSize[3];
        v9 = this->q038;
        v19 += v6;
        v20 = v8;
        if ( (v9 & 0x200) != 0 )
        {
          v10 = this->q01C;
          v19 = *(__int16 *)(v10 + 2) / -2 + v7;
          v20 = *(__int16 *)(v10 + 4) / -2 + v8;
        }
        if ( !a3
          || (v11 = ClipRectIntersection(v18, a3, &v19, 0, 0),
              v19 = *v11,
              v20 = v11[1],
              v21 = v11[2],
              v12 = v11[3],
              v22 = v12,
              v21 > 0)
          && v12 > 0 )
        {
          v13 = this->q040;
          if ( v13 >= 3 )
            v13 = 3;
          v14 = DataGlobal_830078[v13];
          v18[0] = this->Items;
          v15 = this->q038;
          v18[1] = this->Capacity;
          v17 = v15 | v14;
          v16 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 120))(a2, v23);
          DrawToSurfaceSHP(
            a2,
            this->q020,
            this->q01C,
            this->q028,
            v18,
            v16,
            v17,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
        }
      }
}
} }

// ==== BACKFILL 0x005CC6C0  ScenarioClass::DrawSHPFrameToSurface  cls=MSOverlayAnim  sig=csp  renamed_refs=0 ====
namespace gamemd { void ScenarioClass::DrawSHPFrameToSurface(int a1) {
{
      unsigned int v3;
      int v4;
      int v5;
      int *v6;
      int v7;
      int v8[2];
      _BYTE v9[16];

      v3 = this->q040;
      if ( v3 >= 3 )
        v3 = 3;
      if ( this->q00C )
      {
        v4 = DataGlobal_830078[v3];
        v5 = this->q038;
        v8[0] = this->Items;
        v8[1] = this->Capacity;
        v7 = v5 | v4;
        v6 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)DSurface_Alternate + 120))(DSurface_Alternate, v9);
        DrawToSurfaceSHP(
          DSurface_Alternate,
          this->q020,
          this->q01C,
          this->q028,
          v8,
          v6,
          v7,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
      }
}
} }

// ==== BACKFILL 0x005CC740  ScenarioClass::updateTiberiumGrowth  cls=MSOverlayAnim  sig=csp  renamed_refs=0 ====
namespace gamemd { bool ScenarioClass::updateTiberiumGrowth() {
{
      return !this->q00C || this->q040 >= 4u;
}
} }

// ==== BACKFILL 0x005CCA10  nullsub_189  cls=MSBinkAnim  sig=csp  renamed_refs=0 ====
void nullsub_189(int a1)
{
  ;
}

// ==== BACKFILL 0x005CD320  MSVQAnim::Stub  cls=MSVQAnim  sig=csp  renamed_refs=0 ====
char MSVQAnim::Stub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MSVQAnim::_vt07(_BYTE *this)
{
  return *(this + 45); /*0x5cd323*/
}
}

// ==== BACKFILL 0x005CD570  sub_5CD570  cls=MSAnim  sig=csp  renamed_refs=0 ====
int E4Recv_5CD570::sub_5CD570(const wchar_t ** a2, int a3, int a4, int a5, int * a6, int a7, int a8, char a9, char a10)
{
{
    size_t v11;
    int v12;
    int v13;
    int v15;
    int v16;
    int v17;
    this->M8 = a4;
    this->M4 = a3;
    this->M12 = 1;
    v11 = 0;
    this->M16 = Timer::GetTicks();
    this->M24 = 0;
    *(int *)this = &vt_MSAnim;
    WideString::AssignFromPtr((wchar_t **)(this + 28), a2);
    this->M44 = a8;
    this->M48 = a9;
    this->M32 = 0;
    this->M36 = a7;
    this->M40 = 0;
    this->M52 = a5;
    this->M72 = 0;
    this->M73 = a10;
    this->M76 = 0;
    *(int *)this = &vt_MSPrintAnim;
    this->M16 = Timer::GetTicks();
    this->M20 = v15;
    this->M24 = a7;
    sub_5CD690(this, a6);
    if ( a10 )
  {
    v17 = 0;
    v16 = *(int *)(this->M52 + 4);
    if ( WideString::GetChar((const wchar_t **)(this + 28), 0) )
    {
    do
      {
    if ( WideString::GetChar((const wchar_t **)(this + 28), v11) == 10 )
    break;
    v12 = **(int **)(this + 52);
    LOWORD(v13) = WideString::GetChar((const wchar_t **)(this + 28), v11++);
    v17 += (*(int (__thiscall **)(int, int))(v12 + 4))(this->M52, v13);
      }
    while ( WideString::GetChar((const wchar_t **)(this + 28), v11) );
    }
    this->M76 = (this->M64 - v17 - v16) / 2;
  }
    return this;
}
}

// ==== BACKFILL 0x005CE330  sub_5CE330  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_5CE330::sub_5CE330(const wchar_t ** a2)
{
{
    int v3;
    size_t v4;
    int v5;
    int v6;
    int i;
    v3 = 0;
    v4 = 0;
    for ( i = 0; WideString::GetChar(a2, v4); i = v3 )
  {
    if ( WideString::GetChar(a2, v4) == 10 )
    break;
    v5 = *(void**)this->M52;
    LOWORD(v6) = WideString::GetChar(a2, v4);
    v3 = (*(int (__thiscall **)(int, int))(v5 + 4))(this->M52, v6) + i;
    ++v4;
  }
    return v3;
}
}

// ==== BACKFILL 0x005CE3A0  sub_5CE3A0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_5CE3A0::sub_5CE3A0(int a2, int * a3)
{
{
    int *v4;
    int result;
    int v6;
    int v7;
    int v8;
    size_t v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    size_t i;
    int v17[4];
    int v18;
    if ( !a3 || (v4 = ClipRectIntersection(v17, a3, (int *)(this + 56), 0, 0), result = v4[2], v6 = v4[3], result > 0) && v6 > 0 )
  {
    result = this->M32;
    v7 = this->M8;
    v8 = this->M4;
    v9 = 0;
    v18 = v7;
    for ( i = result; v9 < i; ++v9 )
    {
    if ( WideString::GetChar((const wchar_t **)(this + 28), v9) == 10 )
      {
    v8 = this->M4;
    v7 += *(int *)(this->M52 + 8);
    v14 = *(int *)(this->M52 + 8);
    v18 = v7;
    result = (*(int (__thiscall **)(int))(*(int *)(a2) + 128))(a2);
    if ( v7 + v14 >= result )
    return result;
      }
    else
      {
    v15 = **(int **)(this + 52);
    LOWORD(v10) = WideString::GetChar((const wchar_t **)(this + 28), v9);
    (*(void (__thiscall **)(int, int, int, int, int, int, int))(v15 + 16))( this->M52, a2, v10, v8, v7, 2, 1);
    v11 = **(int **)(this + 52);
    LOWORD(v12) = WideString::GetChar((const wchar_t **)(this + 28), v9);
    v13 = (*(int (__thiscall **)(int, int))(v11 + 4))(this->M52, v12);
    v7 = v18;
    v8 += v13;
      }
    result = i;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x005CEAB0  MSPCXAnim::Stub  cls=MSPCXAnim  sig=csp  renamed_refs=0 ====
char MSPCXAnim::Stub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MSPCXAnim::_vt07(_BYTE *this)
{
  return *(this + 41); /*0x5ceab3*/
}
}

// ==== BACKFILL 0x005CEB40  AbstractClass::COMStub_Return0_7  cls=MSAnim  sig=csp  renamed_refs=0 ====
char AbstractClass::COMStub_Return0_7()
{
return 0;
}

// ==== BACKFILL 0x005CEB50  MSOverlayAnim::StubReturnFalse  cls=MSAnim  sig=csp  renamed_refs=0 ====
void MSOverlayAnim::StubReturnFalse(int a1)
{
{
    ;
}
}

// ==== BACKFILL 0x005CEB60  ScenarioClass::checkWinningConditions  cls=MSAnim  sig=csp  renamed_refs=0 ====
MSAnim * ScenarioClass::checkWinningConditions(char a2)
{
{
    *(void**)this = &vt_MSAnim;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MSAnim *)this;
}
}

// ==== BACKFILL 0x005CEB80  MSOverlayAnim::QueryInterface  cls=MSShapeAnim  sig=csp  renamed_refs=0 ====
MSShapeAnim * MSOverlayAnim::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 7);
    *(void**)this = &vt_MSShapeAnim;
    if ( v3 && *((char *)(this) + 60) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 7) = 0;
    *((char *)(this) + 60) = 0;
  }
    *(void**)this = &vt_MSAnim;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MSShapeAnim *)this;
}
}

// ==== BACKFILL 0x005CEC20  ScenarioClass::processCrates  cls=MSOverlayAnim  sig=csp  renamed_refs=0 ====
namespace gamemd { void* ScenarioClass::processCrates(int a2) {
{
    void *v3;
    v3 = (void *)*(this + 7);
    *(void**)this = &vt_MSShapeAnim;
    if ( v3 && *((char *)(this) + 60) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 7) = 0;
    *((char *)(this) + 60) = 0;
  }
    *(void**)this = &vt_MSAnim;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MSOverlayAnim *)this;
}
} }

// ==== BACKFILL 0x005CECB0  MSVQAnim::QueryInterface  cls=MSVQAnim  sig=csp  renamed_refs=0 ====
MSVQAnim * MSVQAnim::QueryInterface(char a2)
{
{
    void (__thiscall ***v3)(int, int);
    int **v4;
    ObjectClass *v5;
    v3 = (void (__thiscall ***)(int, int))*(this + 10);
    *(void**)this = (ObjectClass *)&vt_MSVQAnim;
    if ( v3 )
    (**v3)(v3, 1);
    v4 = (int **)*(this + 7);
    if ( v4 )
  {
    MovieContext::Cleanup(v4);
    v5 = *(this + 7);
    if ( v5 )
    {
    BinkMovie::Cleanup(*(this + 7));
    __3_YAXPAX_Z(v5);
    }
  }
    *(void**)this = (ObjectClass *)&vt_MSAnim;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MSVQAnim *)this;
}
}

// ==== BACKFILL 0x005CED10  MSBitPrintAnim::QueryInterface  cls=MSBitPrintAnim  sig=csp  renamed_refs=0 ====
MSBitPrintAnim * MSBitPrintAnim::QueryInterface(char a2)
{
{
    *(void**)this = &vt_MSBitPrintAnim;
    DeleteAndZero::Alt(this + 7);
    *(void**)this = &vt_MSAnim;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MSBitPrintAnim *)this;
}
}

// ==== BACKFILL 0x005CED70  MSPCXAnim::QueryInterface  cls=MSPCXAnim  sig=csp  renamed_refs=0 ====
MSPCXAnim * MSPCXAnim::QueryInterface(char a2)
{
{
    void (__thiscall ***v3)(int, int);
    v3 = (void (__thiscall ***)(int, int))*(this + 9);
    *(void**)this = &vt_MSPCXAnim;
    if ( v3 )
    (**v3)(v3, 1);
    *(void**)this = &vt_MSAnim;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MSPCXAnim *)this;
}
}

// ==== BACKFILL 0x005CF760  CampaignClass::DeleteAndZero  cls=CampaignClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int CampaignClass::DeleteAndZero(void* aP1) {
{
    ObjectClass *v2;
    int v4;
    int v6;
    void *v7;
    v2 = (ObjectClass *)aP1;
    if ( !String::NotEquals((const char **)aP1, 0) )
    return 0;
    v4 = 0;
    if ( this->uniqueId <= 0 )
    return 0;
    while ( 1 )
  {
    String::AssignFromPtr((char **)&v7, (const char **)v2);
    String::ToLower((const char **)&v7);
    String::AssignFromPtr((char **)&aP1, (const char **)(*(int *)(this->scenario[512] + 4 * v4) + 4));
    String::ToLower((const char **)&aP1);
    if ( String::Compare((const char **)&v7, (const char **)&aP1) )
    break;
    DeleteAndZero((void **)&aP1);
    DeleteAndZero(&v7);
    if ( ++v4 >= this->uniqueId )
    return 0;
  }
    v6 = *(int *)(this->scenario[512] + 4 * v4);
    DeleteAndZero((void **)&aP1);
    DeleteAndZero(&v7);
    return v6;
}
} }

// ==== BACKFILL 0x005CF810  CampaignClass::Check  cls=CampaignClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int CampaignClass::Check(int a2) {
{
    if ( this->uniqueId > (int)a2 )
    return *(int *)(this->scenario[512] + 4 * a2);
    else
    return 0;
}
} }

// ==== BACKFILL 0x005CF840  sub_5CF840  cls=ObjectClass  sig=csp  renamed_refs=0 ====
const char ** E4Recv_5CF840::sub_5CF840(MapSelect * aP1)
{
{
    int v3;
    const char **v4;
    ObjectClass *v5;
    void *v7;
    if ( !Audio::IsSoundEnabled() )
    return 0;
    v3 = 0;
    if ( (int)this->M84 <= 0 )
    return 0;
    v4 = (const char **)aP1;
    while ( 1 )
  {
    v5 = *(ObjectClass **)(this->M72 + 4 * v3);
    String::AssignFromPtr((char **)&v7, (const char **)v5);
    String::ToLower((const char **)&v7);
    String::AssignFromPtr((char **)&aP1, v4);
    String::ToLower((const char **)&aP1);
    if ( String::Compare((const char **)&v7, (const char **)&aP1) )
    break;
    DeleteAndZero((void **)&aP1);
    DeleteAndZero(&v7);
    if ( ++v3 >= this->M84 )
    return 0;
  }
    DeleteAndZero((void **)&aP1);
    DeleteAndZero(&v7);
    return (const char **)v5;
}
}
