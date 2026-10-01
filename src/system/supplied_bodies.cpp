// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "misc/misc_ext.hpp"
#include "e4/classes/FilePipe_38_e4.hpp"
#include "system/buffer_io_file.hpp"
#include "system/cell.hpp"
#include "system/file_class.hpp"
#include "system/game_systems.hpp"
#include "system/ini_class.hpp"
#include "system/mix_file.hpp"
#include "system/radar.hpp"
#include "system/scenario.hpp"
#include "system/tactical.hpp"

// 0x41C150
namespace gamemd {
unsigned int * TacticalClass::ProcessTick2(unsigned int *a2) {
    *a2 = this->lastJumpjetMapCoords[0]; /*0x41c15a*/
    return a2; /*0x41c15c*/
}
} // namespace gamemd

// 0x478220
namespace gamemd {
unsigned int * INIClass::parseKeyValue(unsigned int *a2) {
    int v3; // edi
    int v4; // eax
    unsigned char *v5; // ecx
    int v6; // edx
    int v7; // eax
    int v8; // ecx
    int v9; // eax
    int v10; // edx
    int v11; // edi

    this->headNode[0] = 0; /*0x47822e*/
    this->headNode[1] = 0; /*0x478231*/
    IDA_LOBYTE(this->headNode[2]) = 1; /*0x478234*/
    IDA_BYTE1(this->headNode[2]) = 0; /*0x478238*/
    *(unsigned int *)this->__pad_0 = &VectorClass<RGBClass>::`vftable'; /*0x47823b*/
    if ( this == (INIClass *)a2 ) /*0x478241*/
      return this->__pad_0; /*0x478241*/
    FilePipe_38::ddtor((int)this); /*0x478247*/
    v3 = a2[2]; /*0x47824d*/
    this->headNode[1] = v3; /*0x478252*/
    if ( !v3 ) /*0x478255*/
    {
      this->headNode[0] = 0; /*0x4782c6*/
      IDA_BYTE1(this->headNode[2]) = 0; /*0x4782c9*/
      return this->__pad_0; /*0x4782cc*/
    }
    v4 = RA2_OPNEW(3 * v3); /*0x47825b*/
    if ( v4 ) /*0x478265*/
    {
      if ( v3 - 1 >= 0 ) /*0x47826c*/
      {
        v5 = (unsigned char *)(v4 + 2); /*0x47826e*/
        v6 = v3; /*0x478271*/
        do /*0x47827e*/
        {
          *(v5 - 2) = 0; /*0x478272*/
          *(v5 - 1) = 0; /*0x478275*/
          *v5 = 0; /*0x478278*/
          v5 += 3; /*0x47827a*/
          --v6; /*0x47827d*/
        }
        while ( v6 ); /*0x47827e*/
      }
    }
    else
    {
      v4 = 0; /*0x478282*/
    }
    this->headNode[0] = v4; /*0x478286*/
    if ( !v4 ) /*0x478289*/
      return this->__pad_0; /*0x478289*/
    v7 = this->headNode[1]; /*0x47828b*/
    v8 = 0; /*0x47828e*/
    IDA_BYTE1(this->headNode[2]) = 1; /*0x478292*/
    if ( v7 <= 0 ) /*0x478296*/
      return this->__pad_0; /*0x478296*/
    v9 = 0; /*0x478298*/
    do /*0x4782bb*/
    {
      v10 = v9 + a2[1]; /*0x4782a0*/
      v11 = this->headNode[0] + v9; /*0x4782a4*/
      ++v8; /*0x4782a6*/
      v9 += 3; /*0x4782aa*/
      *(unsigned short *)v11 = *(unsigned short *)v10; /*0x4782ad*/
      *(unsigned char *)(v11 + 2) = *(unsigned char *)(v10 + 2); /*0x4782b3*/
    }
    while ( v8 < this->headNode[1] ); /*0x4782bb*/
    return this->__pad_0; /*0x4782bf*/
}
} // namespace gamemd

// 0x487950
namespace gamemd {
int CellClass::QuickPassable() {
    int v1; // esi
    int v2; // edi
    int inited; // eax
    unsigned int v5[2]; // [esp+8h] [ebp-14h] BYREF
    unsigned int v6[3]; // [esp+10h] [ebp-Ch] BYREF

    v1 = ((int16_t)this->smudgeTypeIndex << 8) + 128; /*0x48796f*/
    v2 = ((int16_t)IDA_HIWORD(this->smudgeTypeIndex) << 8) + 128; /*0x487971*/
    v5[0] = 128; /*0x487973*/
    v5[1] = 128; /*0x487977*/
    inited = Isometric::InitTables((int)this, v5); /*0x487980*/
    v6[0] = v1; /*0x487989*/
    v6[1] = v2; /*0x487993*/
    v6[2] = inited; /*0x487997*/
    return Cell::IsPassable(v6); /*0x4879a0*/
}
} // namespace gamemd

// 0x52AF50
namespace gamemd {
unsigned int * INIClass::sectionExists() {
    unsigned int *result; // eax
    int *sectionHead; // edx
    int v3; // ebx
    int v4; // edi
    int v5; // edi
    int v6; // edi

    result = this->__pad_0; /*0x52af50*/
    sectionHead = this->sectionHead; /*0x52af59*/
    this->headNode[1] = 0; /*0x52af5f*/
    this->headNode[2] = 0; /*0x52af62*/
    this->headNode[0] = (int)&GenericNode::`vftable'; /*0x52af65*/
    this->sectionHead[1] = 0; /*0x52af6b*/
    this->sectionHead[2] = 0; /*0x52af6e*/
    this->sectionHead[0] = (int)&GenericNode::`vftable'; /*0x52af71*/
    *(unsigned int *)this->__pad_0 = &GenericList::`vftable'; /*0x52af77*/
    if ( this != (INIClass *)-16 ) /*0x52af7d*/
    {
      v3 = this->sectionHead[1]; /*0x52af7f*/
      if ( v3 ) /*0x52af84*/
      {
        v4 = this->sectionHead[2]; /*0x52af86*/
        if ( v4 ) /*0x52af8b*/
        {
          *(unsigned int *)(v4 + 4) = v3; /*0x52af8d*/
          *(unsigned int *)(this->sectionHead[1] + 8) = this->sectionHead[2]; /*0x52af96*/
          this->sectionHead[2] = 0; /*0x52af99*/
          this->sectionHead[1] = 0; /*0x52af9c*/
        }
      }
    }
    v5 = this->headNode[1]; /*0x52af9f*/
    this->sectionHead[2] = (int)this->headNode; /*0x52afa2*/
    this->sectionHead[1] = v5; /*0x52afa5*/
    v6 = this->headNode[1]; /*0x52afa8*/
    if ( v6 ) /*0x52afad*/
      *(unsigned int *)(v6 + 8) = sectionHead; /*0x52afaf*/
    this->headNode[1] = (int)sectionHead; /*0x52afb2*/
    *(unsigned int *)this->__pad_0 = &List<INIClass::INIEntry *>::`vftable'; /*0x52afb7*/
    return result; /*0x52afb5*/
}
} // namespace gamemd

// 0x5C0AD0
namespace gamemd {
char TacticalClass::CompareVector(int a2) {
    int v2; // esi
    int v3; // edx
    unsigned int *v4; // eax
    int v5; // ecx

    v2 = *((unsigned int *)this + 2); /*0x5c0ad2*/
    if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x5c0add*/
    {
      v3 = 0; /*0x5c0adf*/
      if ( v2 <= 0 ) /*0x5c0ae3*/
        return 1; /*0x5c0b03*/
      v4 = *(unsigned int **)&this->m_1[3]; /*0x5c0ae5*/
      v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5c0aeb*/
      while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5c0af4*/
      {
        ++v3; /*0x5c0af6*/
        ++v4; /*0x5c0af7*/
        if ( v3 >= v2 ) /*0x5c0afc*/
          return 1; /*0x5c0afc*/
      }
    }
    return 0; /*0x5c0afe*/
}
} // namespace gamemd

// 0x5C0FE0
namespace gamemd {
unsigned int * ScenarioClass::initAI(char a2) {
    this->m_0 = (int)&MultiplayerBattle::`vftable'; /*0x5c0fe3*/
    MultiplayerGameMode::Dtor((MultiplayerGameMode *)this); /*0x5c0fe9*/
    if ( (a2 & 1) != 0 ) /*0x5c0ff3*/
      RA2_OPDEL(this); /*0x5c0ff6*/
    return &this->m_0; /*0x5c1000*/
}
} // namespace gamemd

// 0x653F50
namespace gamemd {
void CellClass::DrawWrapper(unsigned int *a2, int jj, char a4, char a5) {
    CellClass::UpdateTerrainAndWaypoints((MapClass *)this, a2, jj, a4, a5); /*0x653f64*/
}
} // namespace gamemd

// 0x68BCC0
namespace gamemd {
unsigned int * ScenarioClass::Get_Waypoint_Location(unsigned int *a2, int a3) {
    *a2 = *(unsigned int *)(this + 4 * a3 + 1586); /*0x68bccf*/
    return a2; /*0x68bcd1*/
}
} // namespace gamemd

// 0x68BCE0
namespace gamemd {
void * ScenarioClass::GetCellFromArray(int a2) {
    return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&this->waypoints[4 * a2]); /*0x68bcf6*/
}
} // namespace gamemd

// 0x722AB0
namespace gamemd {
int CellClass::ClearCrateStateForAll() {
    int result; // eax
    int i; // ecx

    result = Cell::PosToIndex((Cell *)this); /*0x722ab0*/
    for ( i = 0; /*0x722abf*/
          i < g_BuildingLoadQueue_Array.?[0];
          *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(g_BuildingLoadQueue_Array.?[2] + 4 * i - 4) + 248) + result) = 0 )
    {
      ++i; /*0x722ac7*/
    }
    return result; /*0x722ae0*/
}
} // namespace gamemd

// 0x432610
namespace gamemd {
unsigned int * BufferIOFileClass::QueryInterface(char a2) {
    void *FileBaseOffset; // eax

    FileBaseOffset = (void *)this->FileBaseOffset; /*0x432616*/
    this->FileClass = (FileClass)&BufferIOFileClass::`vftable'; /*0x432619*/
    if ( FileBaseOffset ) /*0x432621*/
    {
      if ( IDA_LOBYTE(this->BufferOffset) ) /*0x432623*/
      {
        RA2_OPDEL(FileBaseOffset); /*0x432629*/
        IDA_LOBYTE(this->BufferOffset) = 0; /*0x432631*/
      }
      this->FileBaseOffset = 0; /*0x432634*/
    }
    this->BufferReadSize = 0; /*0x432639*/
    IDA_BYTE1(this->BufferOffset) = 0; /*0x43263c*/
    IDA_HIBYTE(this->BufferOffset) = 0; /*0x43263f*/
    IDA_LOBYTE(this->BufferSize) = 0; /*0x432642*/
    IDA_BYTE1(this->BufferSize) = 0; /*0x432645*/
    RawFileClass::Dtor(this); /*0x432648*/
    if ( (a2 & 1) != 0 ) /*0x432652*/
      RA2_OPDEL(this); /*0x432655*/
    return &this->FileClass; /*0x43265f*/
}
} // namespace gamemd

// 0x434A40
namespace gamemd {
void *** BufferIOFileClass::Constructor_BitFont(char a2) {
    void *FileSize; // eax
    void **FilePointer; // esi

    FileSize = (void *)this->?; /*0x434a43*/
    *(unsigned int *)this->RawFileClass = &BitFont::`vftable'; /*0x434a46*/
    if ( FileSize ) /*0x434a4e*/
      free(FileSize); /*0x434a51*/
    FilePointer = (void **)this->?; /*0x434a5a*/
    if ( FilePointer ) /*0x434a5f*/
    {
      if ( FilePointer[6] ) /*0x434a61*/
        RA2_OPDEL(FilePointer[6]); /*0x434a69*/
      if ( FilePointer[7] ) /*0x434a71*/
        RA2_OPDEL(FilePointer[7]); /*0x434a79*/
      RA2_OPDEL(FilePointer); /*0x434a82*/
    }
    if ( (a2 & 1) != 0 ) /*0x434a91*/
      RA2_OPDEL(this); /*0x434a94*/
    return (void ***)this; /*0x434a9e*/
}
} // namespace gamemd

// 0x435560
namespace gamemd {
unsigned int * BufferIOFileClass::Constructor_BitText(char a2) {
    Text *v3; // esi

    *(unsigned int *)this->RawFileClass = &BitText::`vftable'; /*0x435564*/
    v3 = g_FogOfWarState; /*0x43556a*/
    if ( g_FogOfWarState ) /*0x435572*/
      (*(void (__thiscall **)(Text *, int))g_FogOfWarState->Text_field_00)(g_FogOfWarState, 1); /*0x43557a*/
    if ( v3 == g_FogOfWarState ) /*0x435582*/
      g_FogOfWarState = 0; /*0x435584*/
    if ( (a2 & 1) != 0 ) /*0x435593*/
      RA2_OPDEL(this); /*0x435596*/
    return this->RawFileClass; /*0x4355a0*/
}
} // namespace gamemd

// 0x477F40
namespace gamemd {
unsigned int * INIClass::parseSection(unsigned int *a2) {
    int v3; // eax
    int v4; // eax
    int v5; // ecx
    int v6; // eax

    this->headNode[0] = 0; /*0x477f4d*/
    this->headNode[1] = 0; /*0x477f50*/
    IDA_LOBYTE(this->headNode[2]) = 1; /*0x477f53*/
    IDA_BYTE1(this->headNode[2]) = 0; /*0x477f57*/
    *(unsigned int *)this->__pad_0 = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x477f5a*/
    if ( this == (INIClass *)a2 ) /*0x477f60*/
      return this->__pad_0; /*0x477f60*/
    TypeList_TechnoType::ddtor((_VectorClass_PAVTechnoTypeClass *)this); /*0x477f62*/
    v3 = a2[2]; /*0x477f68*/
    this->headNode[1] = v3; /*0x477f6d*/
    if ( !v3 ) /*0x477f70*/
    {
      this->headNode[0] = 0; /*0x477fae*/
      IDA_BYTE1(this->headNode[2]) = 0; /*0x477fb1*/
      return this->__pad_0; /*0x477fb4*/
    }
    v4 = RA2_OPNEW(4 * v3); /*0x477f76*/
    this->headNode[0] = v4; /*0x477f80*/
    if ( !v4 ) /*0x477f83*/
      return this->__pad_0; /*0x477f83*/
    v5 = this->headNode[1]; /*0x477f85*/
    v6 = 0; /*0x477f88*/
    IDA_BYTE1(this->headNode[2]) = 1; /*0x477f8c*/
    if ( v5 <= 0 ) /*0x477f90*/
      return this->__pad_0; /*0x477f90*/
    do /*0x477fa4*/
    {
      *(unsigned int *)(this->headNode[0] + 4 * v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x477f9b*/
      ++v6; /*0x477fa1*/
    }
    while ( v6 < this->headNode[1] ); /*0x477fa4*/
    return this->__pad_0; /*0x477fa8*/
}
} // namespace gamemd

// 0x47FF80
namespace gamemd {
int * CellClass::GetScreenRect(int *a2) {
    int v3; // kr04_4
    int v4; // kr00_4
    int v5; // eax
    int v6; // ebp
    int v7; // ebx
    int v8; // edi
    int v9; // eax
    int height; // esi
    unsigned int *v12; // eax
    int v13; // ecx
    int v14; // eax
    int v15; // [esp+10h] [ebp-18h] BYREF
    int v16; // [esp+14h] [ebp-14h]
    int v17; // [esp+18h] [ebp-10h] BYREF
    int v18; // [esp+1Ch] [ebp-Ch]
    int v19; // [esp+20h] [ebp-8h]
    int v20; // [esp+24h] [ebp-4h]

    v3 = (SLOWORD(this->smudgeTypeIndex) << 8) + 128; /*0x47ffab*/
    v4 = (IDA_SHIWORD(this->smudgeTypeIndex) << 8) + 128; /*0x47ffb8*/
    v19 = 0; /*0x47ffba*/
    v18 = (v4 / 256) << 8; /*0x47ffc4*/
    v17 = (v3 / 256) << 8; /*0x47ffde*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v17, &v15); /*0x47ffe2*/
    v5 = 3 * this->level; /*0x47fff8*/
    v15 -= 30; /*0x47fffe*/
    v6 = v15; /*0x480002*/
    v7 = 30; /*0x480014*/
    v16 += (int)DSurface_ViewBounds.field_4 - 5 * v5; /*0x480019*/
    v8 = v16; /*0x48001d*/
    v9 = *(unsigned int *)&this->__pad_28[16]; /*0x48001f*/
    if ( v9 == 0xFFFF ) /*0x480027*/
    {
      *a2 = v15; /*0x48002f*/
      a2[1] = v8; /*0x480031*/
      a2[2] = 60; /*0x480037*/
      a2[3] = 30; /*0x48003a*/
      return a2; /*0x480041*/
    }
    if ( v9 < 0 || v9 >= *(int *)&stru_A8EB00.?[340] )
    {
      Debug::Log(); /*0x4800e0*/
    }
    else
    {
      height = (uint8_t)this->height; /*0x480065*/
      v12 = (unsigned int *)(*(int (__thiscall **)(unsigned int))(**(unsigned int **)(*(unsigned int *)&stru_A8EB00.?[328] + 4 * v9) + 156))(*(unsigned int *)(*(unsigned int *)&stru_A8EB00.?[328] + 4 * v9)); /*0x48006b*/
      if ( !v12 ) /*0x480073*/
      {
        *a2 = v17; /*0x480082*/
        a2[1] = v18; /*0x480089*/
        a2[2] = v19; /*0x480090*/
        a2[3] = v20; /*0x480097*/
        return a2; /*0x48009d*/
      }
      if ( height >= *v12 * v12[1] - 1 ) /*0x4800a9*/
        height = *v12 * v12[1] - 1; /*0x4800ab*/
      v13 = v12[height + 4]; /*0x4800ad*/
      if ( (*(unsigned char *)(v13 + 36) & 1) != 0 )
      {
        v14 = *(unsigned int *)(v13 + 4) - *(unsigned int *)(v13 + 24) < 0 ? 0 : *(unsigned int *)(v13 + 4) - *(unsigned int *)(v13 + 24);
        v8 -= v14; /*0x4800ca*/
        v7 = v14 + 30; /*0x4800cc*/
      }
    }
    *a2 = v6; /*0x4800f3*/
    a2[1] = v8; /*0x4800f5*/
    a2[2] = 60; /*0x4800fb*/
    a2[3] = v7; /*0x4800fe*/
    return a2; /*0x480034*/
}
} // namespace gamemd

// 0x52ACE0
namespace gamemd {
unsigned int * GenericList::Constructor() {
    unsigned int *result; // eax
    GenericList *v2; // edx
    int v3; // ebx
    int v4; // edi
    int v5; // edi
    int v6; // edi

    result = &this->vtable; /*0x52ace0*/
    v2 = this + 4; /*0x52ace9*/
    *((unsigned int *)this + 2) = 0; /*0x52acef*/
    *((unsigned int *)this + 3) = 0; /*0x52acf2*/
    *((unsigned int *)this + 1) = &GenericNode::`vftable'; /*0x52acf5*/
    *((unsigned int *)this + 5) = 0; /*0x52acfb*/
    *((unsigned int *)this + 6) = 0; /*0x52acfe*/
    *((unsigned int *)this + 4) = &GenericNode::`vftable'; /*0x52ad01*/
    this->vtable = &GenericList::`vftable'; /*0x52ad07*/
    if ( this != (GenericList *)-16 ) /*0x52ad0d*/
    {
      v3 = *((unsigned int *)this + 5); /*0x52ad0f*/
      if ( v3 ) /*0x52ad14*/
      {
        v4 = *((unsigned int *)this + 6); /*0x52ad16*/
        if ( v4 ) /*0x52ad1b*/
        {
          *(unsigned int *)(v4 + 4) = v3; /*0x52ad1d*/
          *(GenericList *)(*((unsigned int *)this + 5) + 8) = *(this + 6); /*0x52ad26*/
          *((unsigned int *)this + 6) = 0; /*0x52ad29*/
          *((unsigned int *)this + 5) = 0; /*0x52ad2c*/
        }
      }
    }
    v5 = *((unsigned int *)this + 2); /*0x52ad2f*/
    *((unsigned int *)this + 6) = this + 1; /*0x52ad32*/
    *((unsigned int *)this + 5) = v5; /*0x52ad35*/
    v6 = *((unsigned int *)this + 2); /*0x52ad38*/
    if ( v6 ) /*0x52ad3d*/
      *(unsigned int *)(v6 + 8) = v2; /*0x52ad3f*/
    *((unsigned int *)this + 2) = v2; /*0x52ad42*/
    return result; /*0x52ad45*/
}
} // namespace gamemd

// 0x52AF00
namespace gamemd {
unsigned int * INIClass::findSection(int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    this->headNode[0] = 0; /*0x52af08*/
    this->headNode[1] = 0; /*0x52af0b*/
    this->sectionHead[0] = a3; /*0x52af12*/
    this->headNode[2] = a2; /*0x52af19*/
    this->sectionHead[2] = a5; /*0x52af20*/
    this->sectionHead[1] = a4; /*0x52af27*/
    *(unsigned int *)this->__pad_20 = a8; /*0x52af2e*/
    this->sectionCount = a7; /*0x52af31*/
    *(unsigned int *)&this->__pad_20[4] = a6; /*0x52af38*/
    *(unsigned int *)this->__pad_0 = &INIClass::INIEntry::`vftable'; /*0x52af3b*/
    return this->__pad_0; /*0x52af41*/
}
} // namespace gamemd

// 0x557830
namespace gamemd {
int CellClass::DrawWithFlags(int a2, unsigned int *a3, int a4) {
    int v4; // ebx
    int v7; // eax

    v4 = a2; /*0x557831*/
    if ( (a2 & 4) != 0 ) /*0x55783b*/
    {
      *a3 = 0; /*0x557848*/
      CellClass::Draw((ControlClass *)this, a2 & 0xFFFFFFFB, a3, 0); /*0x55784e*/
      return 1; /*0x557854*/
    }
    else if ( (a2 & 0x100) != 0 ) /*0x557865*/
    {
      if ( *a3 == 38 ) /*0x55786c*/
      {
        (*(void (__thiscall **)(ListClass *, int))(*(unsigned int *)this->__pad_0 + 164))(this, -1); /*0x557874*/
        *a3 = 0; /*0x557880*/
        return CellClass::Draw((ControlClass *)this, a2, a3, 0); /*0x557886*/
      }
      else if ( *a3 == 40 ) /*0x557894*/
      {
        (*(void (__thiscall **)(ListClass *, int))(*(unsigned int *)this->__pad_0 + 164))(this, 1); /*0x55789c*/
        *a3 = 0; /*0x5578a8*/
        return CellClass::Draw((ControlClass *)this, a2, a3, 0); /*0x5578ae*/
      }
      else
      {
        IDA_BYTE1(v4) = IDA_BYTE1(a2) & 0xFE; /*0x5578b9*/
        return CellClass::Draw((ControlClass *)this, v4, a3, 0); /*0x5578c2*/
      }
    }
    else
    {
      v7 = *((unsigned int *)this + 92) /*0x5578e8*/
         + ((*(int (__thiscall **)(void *))(*(unsigned int *)stru_887598.lineTrailer + 48))(stru_887598.lineTrailer)
          - this->ListClass_field_0x10
          - 1)
         / *((unsigned int *)this + 19);
      *((unsigned int *)this + 91) = v7; /*0x5578ea*/
      if ( v7 >= *((unsigned int *)this + 17) - 1 ) /*0x5578f6*/
        v7 = *((unsigned int *)this + 17) - 1; /*0x5578f8*/
      *((unsigned int *)this + 91) = v7; /*0x5578fd*/
      if ( v7 == -1 ) /*0x557903*/
        *((unsigned int *)this + 91) = 0; /*0x557905*/
      return CellClass::Draw((ControlClass *)this, a2, a3, 0); /*0x557915*/
    }
}
} // namespace gamemd

// 0x588C40
namespace gamemd {
unsigned short * CellClass::initCellData(unsigned short *a2) {
    IDA_LOWORD(this->mapCoords[0]) += *a2; /*0x588c49*/
    IDA_HIWORD(this->mapCoords[0]) += a2[1]; /*0x588c50*/
    return this; /*0x588c54*/
}
} // namespace gamemd

// 0x589E20
namespace gamemd {
char RadarClass::updateRadarCells(int a2, unsigned int *a3) {
    unsigned int *RadarClass_field_0x0; // ecx
    int v4; // edx
    char *v5; // esi
    unsigned int *v6; // ecx
    int v7; // eax
    int v8; // ecx
    int v9; // eax
    int v10; // eax
    int v11; // ecx
    int v12; // edx
    int v13; // eax
    unsigned int *v14; // ecx

    RadarClass_field_0x0 = this->RadarClass_field_0x0; /*0x589e24*/
    v4 = RadarClass_field_0x0[6 * a2 + 4]; /*0x589e30*/
    v5 = (char *)&RadarClass_field_0x0[6 * a2]; /*0x589e34*/
    v6 = (unsigned int *)*((unsigned int *)v5 + 1); /*0x589e37*/
    v7 = v4 - 1; /*0x589e3b*/
    if ( v4 - 1 < 0 ) /*0x589e40*/
    {
  LABEL_4:
      v8 = *((unsigned int *)v5 + 2); /*0x589e4e*/
      if ( v4 < v8 /*0x589e70*/
        || (v5[13] || !v8)
        && (v9 = *((unsigned int *)v5 + 5), v9 > 0)
        && (*(uint8_t (__thiscall **)(char *, int, unsigned int))(*(unsigned int *)v5 + 8))(v5, v8 + v9, 0) )
      {
        v10 = *((unsigned int *)v5 + 4); /*0x589e77*/
        v11 = v10 + 1; /*0x589e7a*/
        v12 = 3 * v10; /*0x589e7d*/
        v13 = *((unsigned int *)v5 + 1); /*0x589e80*/
        *((unsigned int *)v5 + 4) = v11; /*0x589e83*/
        v14 = (unsigned int *)(v13 + 4 * v12); /*0x589e86*/
        *v14 = *a3; /*0x589e8b*/
        v14[1] = a3[1]; /*0x589e90*/
        v14[2] = a3[2]; /*0x589e96*/
      }
      return 1; /*0x589e9b*/
    }
    else
    {
      while ( *a3 != *v6 ) /*0x589e46*/
      {
        v6 += 3; /*0x589e48*/
        if ( --v7 < 0 ) /*0x589e4c*/
          goto LABEL_4; /*0x589e4c*/
      }
      return 0; /*0x589ea3*/
    }
}
} // namespace gamemd

// 0x5C0AC0
namespace gamemd {
int TacticalClass::ProbeCalling2(int a2) {
    return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5c0aca*/
}
} // namespace gamemd

// 0x5C0D80
namespace gamemd {
unsigned int * TacticalClass::DestroyVector(unsigned int *Block, char a2) {
    void *v3; // eax

    v3 = (void *)*(Block + 1); /*0x5c0d83*/
    *Block = &VectorClass<char const *>::`vftable'; /*0x5c0d86*/
    if ( v3 && *((unsigned char *)Block + 13) ) /*0x5c0d90*/
    {
      RA2_OPDEL(v3); /*0x5c0d98*/
      *(Block + 1) = 0; /*0x5c0da0*/
    }
    *((unsigned char *)Block + 13) = 0; /*0x5c0dab*/
    *(Block + 2) = 0; /*0x5c0db1*/
    if ( (a2 & 1) != 0 ) /*0x5c0db8*/
      RA2_OPDEL(Block); /*0x5c0dbb*/
    return Block; /*0x5c0dc5*/
}
} // namespace gamemd

// 0x5D8160
namespace gamemd {
int ScenarioClass::loadTheater(int a2) {
    return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5d816a*/
}
} // namespace gamemd

// 0x653760
namespace gamemd {
unsigned int * TacticalClass::PixelToCellCheck(int *a2) {
    int v2; // edx
    unsigned int *v3; // eax
    void *v4; // edx
    int v6[2]; // [esp+4h] [ebp-14h] BYREF
    unsigned int v7[3]; // [esp+Ch] [ebp-Ch] BYREF

    v2 = a2[1]; /*0x65376a*/
    v6[0] = *a2; /*0x65376d*/
    v6[1] = v2; /*0x653781*/
    v3 = TacticalClass::TransformPixel((TacticalClass *)g_TacticalClass_Instance, v7, v6); /*0x653785*/
    if ( *v3 == dword_B04900 && v3[1] == dword_B04904 && v3[2] == dword_B04908 ) /*0x6537ad*/
    {
      this->RadarClass_field_0x0 = (void *)dword_B048C0; /*0x653803*/
      return &this->RadarClass_field_0x0; /*0x6537f9*/
    }
    else
    {
      v4 = (void *)*Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, &a2, v6); /*0x6537cd*/
      this->RadarClass_field_0x0 = v4; /*0x6537d3*/
      return &this->RadarClass_field_0x0; /*0x6537cf*/
    }
}
} // namespace gamemd

// 0x6D2280
namespace gamemd {
unsigned int * TacticalClass::TransformPixel(unsigned int *a2, unsigned int *a3) {
    int v3; // esi
    int v4; // esi
    float *v5; // eax
    int v6; // eax
    int v7; // esi
    int v8; // eax
    float v10[3]; // [esp+8h] [ebp-18h] BYREF
    float v11; // [esp+14h] [ebp-Ch] BYREF
    float v12; // [esp+18h] [ebp-8h]
    int v13; // [esp+1Ch] [ebp-4h]

    if ( *a3 >= dword_B0CE30 || (v3 = a3[1], v3 >= dword_B0CE34 + dword_B0CE2C) ) /*0x6d22ab*/
    {
      *a2 = dword_B0CE08; /*0x6d2345*/
      a2[1] = dword_B0CE0C; /*0x6d234d*/
      a2[2] = dword_B0CE10; /*0x6d2356*/
      return a2; /*0x6d2337*/
    }
    else
    {
      v4 = this->visibleArea[1] + v3; /*0x6d22bf*/
      IDA_LODWORD(v10[0]) = this->visibleArea[0] + *a3; /*0x6d22c1*/
      IDA_LODWORD(v10[1]) = v4; /*0x6d22c5*/
      v11 = (float)IDA_SLODWORD(v10[0]); /*0x6d22dc*/
      v13 = 0; /*0x6d22e4*/
      v12 = (float)v4; /*0x6d22ec*/
      v5 = TransformMatrix3x4Point(v10, (float *)this->TacticalClass_field_DE4, &v11); /*0x6d22f0*/
      v11 = *v5; /*0x6d22f7*/
      v12 = v5[1]; /*0x6d2302*/
      v13 = *((unsigned int *)v5 + 2); /*0x6d2309*/
      IDA_LOWORD(v6) = Math::RoundToInt(v11); /*0x6d230d*/
      v7 = v6; /*0x6d2316*/
      IDA_LOWORD(v8) = Math::RoundToInt(v12); /*0x6d2318*/
      *a2 = v7; /*0x6d2325*/
      a2[1] = v8; /*0x6d2327*/
      a2[2] = 0; /*0x6d232c*/
      return a2; /*0x6d232a*/
    }
}
} // namespace gamemd

// 0x720940
namespace gamemd {
char * ScenarioClass::processEndgame(unsigned int a2) {
    if ( a2 >= this->nextScenario[9] ) /*0x720949*/
      return aNoTheme; /*0x720954*/
    else
      return *(char **)(this->nextScenario[6] + 4 * a2); /*0x72094e*/
}
} // namespace gamemd

