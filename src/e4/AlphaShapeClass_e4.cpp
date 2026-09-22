// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x420DA0
int AlphaShapeClass::SD_vt13(int a2)
{
{
  AbstractClass::ProcessPower((#378 *)this); /*0x420da9*/
  Power::TimerProcess(this->q028); /*0x420db4*/
  Power::TimerProcess(this->q02C); /*0x420dbf*/
  Power::TimerProcess(this->q030); /*0x420dca*/
  return Power::TimerProcess(*(_DWORD *)(this + 52)); /*0x420dda*/
}

// 0x420E40
int AlphaShapeClass::SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
  int Prefix; // eax

  Prefix = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x420e4f*/
  return Prefix >= 0 ? 0 : Prefix;
}

// 0x420E70
int AlphaShapeClass::SD_vt10(int a2, int a3)
{
{
  int result; // eax

  result = a2; /*0x420e70*/
  if ( a2 == this->AlphaShapeClass_field_0x24 ) /*0x420e79*/
    this->q03C = 1; /*0x420e7b*/
  return result; /*0x420e7f*/
}

// 0x421730
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
}

// 0x420DE0
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
    aP0[1].abstractFlags = 0;
  }
    return (int)Prefix_0->__pad_0;
}
}
