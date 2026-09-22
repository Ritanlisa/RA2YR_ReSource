// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BuildingType_e4.hpp"

// 0x4E3560
namespace gamemd {
int BuildingType::FindDefault()
{
{
    int result;
    result = 0;
    if ( this == (void *)-2 )
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&DataGlobal_830620[83144], 0);
    if ( !this )
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&DataGlobal_830620[83152], 0);
    if ( this == (void *)1 )
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&DataGlobal_830620[83156], 0);
    if ( this == (void *)2 )
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&DataGlobal_830620[83160], 0);
    if ( this == (void *)3 )
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&DataGlobal_830620[83164], 0);
    if ( this == (void *)4 )
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&DataGlobal_830620[83168], 0);
    if ( this == (void *)5 )
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&DataGlobal_830620[83172], 0);
    if ( this == (void *)6 )
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&DataGlobal_830620[83176], 0);
    if ( this == (void *)7 )
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&DataGlobal_830620[83180], 0);
    if ( this == (void *)8 )
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&DataGlobal_830620[83184], 0);
    if ( this == (void *)-3 )
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&DataGlobal_830620[83148], 0);
    if ( this == (void *)9 )
    return HashTable::Find(&g_MatrixTransformState + 5774, *(const char **)&DataGlobal_830620[83188], 0);
    return result;
}
}
} // namespace gamemd

// 0x510ED0
namespace gamemd {
int BuildingType::FindOwnerHouse()
{
{
    int v1;
    if ( this == (void *)4475 )
  {
    v1 = BuildingType::Init(0);
  }
    else if ( this == (void *)4476 )
  {
    v1 = BuildingType::Init(1);
  }
    else if ( this == (void *)4477 )
  {
    v1 = BuildingType::Init(2);
  }
    else if ( this == (void *)4478 )
  {
    v1 = BuildingType::Init(3);
  }
    else if ( this == (void *)4479 )
  {
    v1 = BuildingType::Init(4);
  }
    else if ( this == (void *)4480 )
  {
    v1 = BuildingType::Init(5);
  }
    else if ( this == (void *)4481 )
  {
    v1 = BuildingType::Init(6);
  }
    else
  {
    if ( this != (void *)4482 )
    return 0;
    v1 = BuildingType::Init(7);
  }
    if ( v1 >= 0 && v1 < HouseClass_Count )
    return *((int *)(HouseClass_Array) + v1);
    return 0;
}
}
} // namespace gamemd

// 0x510F60
namespace gamemd {
bool BuildingType::IsSpecialType()
{
{
    return this == (void *)4475 || this == (void *)4476 || this == (void *)4477 || this == (void *)4478 || this == (void *)4479 || this == (void *)4480 || this == (void *)4481 || this == (void *)4482;
}
}
} // namespace gamemd

// 0x68C030
namespace gamemd {
int BuildingType::Init(unsigned int a2)
{
{
    if ( a2 >= 0x10 )
    return -1;
    else
    return *(this + a2 + 1120);
}
}
} // namespace gamemd
