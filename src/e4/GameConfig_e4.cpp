// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5E84D0
namespace gamemd {
char * GameConfig::ComputeCRC()
{
{
    unsigned int v0;
    int *v1;
    int v2;
    unsigned int v3;
    int v4;
    int v5;
    int *v6;
    int v7;
    char *v8;
    int *v10;
    char v11[256];
    v0 = 0;
    qmemcpy(v11, &DataGlobal_ABE050, sizeof(v11));
    v1 = &DataGlobal_ABE010;
    v10 = &DataGlobal_ABE010;
    v2 = 320;
    memset(&DataGlobal_ABE050, 0, 0x100u);
    do
  {
    v3 = v0 >> 31;
    if ( v2 < 4 )
    {
    v5 = 0;
    v6 = v1;
    v7 = v2;
    v2 = 0;
    do
      {
    v5 = *(unsigned char *)v6 | (v5 << 8);
    v6 = (int *)((char *)(v6) + 1);
    --v7;
      }
    while ( v7 );
    v1 = v10;
    v0 = v3 + v5 + 2 * v0;
    }
    else
    {
    v4 = *v1++;
    v10 = v1;
    v0 = v3 + v4 + 2 * v0;
    v2 -= 4;
    }
  }
    while ( v2 > 0 );
    v8 = (char *)__2_YAPAXI_Z(0xCu);
    sprintf(v8, Format, v0);
    qmemcpy(&DataGlobal_ABE050, v11, 0x100u);
    return v8;
}
}
} // namespace gamemd

// 0x679D90
namespace gamemd {
int GameConfig::ComputeHash()
{
{
    int v0;
    int v1;
    int i;
    int v3;
    int v4;
    void *v6[3];
    int v7[10];
    char v8;
    int v9;
    int v10;
    char v11;
    int v12[22];
    char v13[12];
    int v14;
    v0 = Hash::ComputeHashSHA1(DataGlobal_887048);
    v1 = MultiplayerGameMode::ListGet();
    for ( i = 1; i <= v1; ++i )
  {
    v3 = MultiplayerGameMode::Find((void *)i);
    if ( v3 )
    {
    v4 = GameConfig::Constructor(v3);
    v0 += Hash::ComputeHashSHA1(v4);
    }
  }
    if ( DataGlobal_B053B8 )
    return DataGlobal_B053B4 + v0;
    v6[1] = 0;
    v6[2] = 0;
    GenericList::Constructor(v7);
    v7[0] = &vt_List_INIClass_INISection;
    memset(&v7[7], 0, 12);
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v6[0] = &CCINIClass_Vtable;
    CCFileClass::Construct(v12, aCoopcampmdIni);
    if ( CCINIClass::Load(v6, (int)v12, 0, 0) )
    DataGlobal_B053B4 = Hash::ComputeHashSHA1((int)v6);
    DataGlobal_B053B8 = 1;
    v12[0] = &vt_CCFileClass;
    v14 = 0;
    Vector::Clear((int)v13);
    v12[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v12);
    HashTable::DestroyHashTableINIClass(v6);
    return DataGlobal_B053B4 + v0;
}
}
} // namespace gamemd
