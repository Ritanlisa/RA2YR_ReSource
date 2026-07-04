#include "blowstraw_29_.hpp"

char * BlowStraw_29_::_vt04(char *Block, char a2)
{
    char *v3; // esi
    int v4; // edi
    v3 = Block + 21484;
    v4 = 4;
    do
    v3 -= 3988;
    Array::ForEachReverse((int)v3, 52, 75, (int (__thiscall *)(int))nullsub_56);
    --v4;
    while ( v4 );
    RadarClass::Destruct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  BlowStraw_29_::_vt10(int *this, int *a2, uint32_t *a3)
{
    int v4; // edx
    int v5; // eax
    int v6; // eax
    int v7; // edx
    int v8; // eax
    int v9; // eax
    int v10; // eax
    unsigned int v11; // eax
    char *v12; // eax
    char *v13; // edi
    int i; // edi
    char *FontClassEntry; // eax
    int v16; // edx
    int v17; // eax
    int v18; // eax
    int v19; // eax
    v4 = *(this + 5454);
    v5 = *(this + 5456);
    if ( v4 != -1 )
    if ( (int)CurrentFrame - v4 >= v5 )
    goto LABEL_6;
    v5 -= (int)CurrentFrame - v4;
    if ( v5 == 1 )
    v6 = *this;
    *((uint8_t *)this + 21829) = 1;
    (*(void (__thiscall **)(int *, uint32_t))(v6 + 56))(this, 0);
    LABEL_6:
    v7 = *((uint32_t *)dword_B0FC58 + 1);
    if ( *a3 >= *(uint32_t *)dword_B0FC58 && *a3 < *(uint32_t *)dword_B0FC58 + g_Map_VisibleRectOffset )
    v8 = a3[1];
    if ( v8 >= v7 && v8 < v7 + 30 )
    Mouse::SetCursor((int)&MapClass_Instance, 0, 0);
    v9 = *a2;
    if ( *a2 < 32982 || v9 >= 33007 )
    if ( v9 == 33008 )
    PlayVocClass(RulesClass_Instance->DefaultChronoSound, 0x2000, 1.0, 0);
    if ( *((uint8_t *)this + 21828) )
    SidebarUpdateAll(this);
    (*(void (__thiscall **)(int *, uint32_t *))(*this + 52))(this, dword_B0CCB0);
    for ( i = 0; i < 25; ++i )
    FontClassEntry = GetFontClassEntry(i);
    if ( FontClassEntry )
    HashTable::Remove((int *)g_TacticalRender, *((uint32_t *)FontClassEntry + 9));
    HashTable::Remove((int *)g_TacticalRender, 240);
    v16 = *this;
    *((uint8_t *)this + 21828) = 0;
    (*(void (__thiscall **)(int *, uint32_t *))(v16 + 48))(this, dword_B0CC40);
    PushCommandClass::Execute(dword_B0CC40, (int)g_Str_Tip_ThumbClosed);
    v17 = *this;
    *((uint8_t *)this + 21829) = 1;
    (*(void (__thiscall **)(int *, uint32_t))(v17 + 56))(this, 0);
    else if ( v9 == 33009 )
    if ( !MuteSWLaunches )
    PlayVocClass(RulesClass_Instance->PlaceBeaconSound, 0x2000, 1.0, 0);
    if ( !*((uint8_t *)this + 21828) )
    (*(void (__thiscall **)(int *, uint32_t *))(*this + 52))(this, dword_B0CC40);
    HashTable::Remove((int *)g_TacticalRender, 241);
    *((uint8_t *)this + 21828) = 1;
    CommandClass::BuildBar(this);
    v18 = *this;
    *((uint8_t *)this + 21829) = 1;
    (*(void (__thiscall **)(int *, uint32_t))(v18 + 56))(this, 0);
    else if ( v9 >= 49366 && v9 < 49391 )
    BYTE1(v9) &= 0x3Fu;
    v19 = v9 - 214;
    if ( v19 >= dword_B0CC20 && v19 <= dword_B0CD28 )
    SidebarClearReferences((char *)(v19 - dword_B0CC20 + 1));
    else
    BYTE1(v9) &= ~0x80u;
    v10 = v9 - 214;
    if ( v10 == dword_B0CD24 )
    sub_731AF0();
    else if ( v10 == dword_B0CB3C )
    sub_731A30();
    else if ( v10 == dword_B0C1B8 )
    sub_730F30();
    else if ( v10 == dword_B0CB20 )
    ProcessSelectionExperience();
    else if ( v10 == dword_B0CB68 )
    GetFactoryData();
    else if ( v10 == dword_B0CC1C )
    v11 = g_ObjectTrackingPool[dword_B0CC1C];
    if ( v11 > 0x18 )
    v12 = 0;
    else
    v12 = (char *)&unk_B0C1C0 + 96 * v11;
    if ( v12[45] )
    sub_731A50(1);
    else
    sub_731A70(1);
    else if ( v10 == dword_B0CB6C )
    sub_730EA0();
    else if ( v10 < dword_B0CC20 || v10 > dword_B0CD28 )
    if ( v10 == dword_B0CB38 )
    SelectAllOfType();
    else
    v13 = (char *)(v10 - dword_B0CC20 + 1);
    if ( SidebarCountAvailableUnits(v13) )
    if ( SidebarHasAvailableUnit(v13) )
    TacticalClass::ResetView(v13);
    else
    TacticalClass::SetObserverView(v13);
    else
    CreateTeamCommand::performAction_246(v13);
    CountdownTimer::UpdateDisplay(this + 5447, 0);
    return SidebarClass::UpdateStrips((char *)this, a2, a3);
}

