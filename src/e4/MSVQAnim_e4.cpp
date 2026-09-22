// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BinkMovie_e4.hpp"

// 0x5CD290
void * MSVQAnim::GetFrameRect(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( (DataGlobal_ABFB98 & 1) == 0 ) /*0x5cd2a0*/
  {
    DataGlobal_ABFBA0 = 0; /*0x5cd2ab*/
    DataGlobal_ABFB98 |= 1u; /*0x5cd2b1*/
    DataGlobal_ABFBA4 = 0; /*0x5cd2b7*/
    DataGlobal_ABFBA8 = 0; /*0x5cd2bd*/
    DataGlobal_ABFBAC = 0; /*0x5cd2c3*/
    atexit(nullsub_190); /*0x5cd2c9*/
  }
  int v3 = this->q01C; /*0x5cd2d1*/
  int * v4 = (int *)(v3 + 52); /*0x5cd2d6*/
  if ( !v3 ) /*0x5cd2d9*/
    v4 = &DataGlobal_ABFBA0; /*0x5cd2db*/
  *a2 = *v4; /*0x5cd2e9*/
  a2[1] = v4[1]; /*0x5cd2ee*/
  a2[2] = v4[2]; /*0x5cd2f4*/
  a2[3] = v4[3]; /*0x5cd2fb*/
  return a2; /*0x5cd2e8*/
}
}

// 0x5CD320
int MSVQAnim::Stub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return *(this + 45); /*0x5cd323*/
}
}

// 0x5CECB0
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
