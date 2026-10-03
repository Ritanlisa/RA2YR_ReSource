// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Control_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CoopCampaignVector_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"

// 0x48E620
namespace gamemd {
int Control::DispatchClick(int aP1)
{

  int v3; // ecx

  v3 = *((unsigned int *)this + 10); /*0x48e623*/
  if ( v3 ) /*0x48e628*/
    (*(void (**)(int, unsigned int))(*(unsigned int *)v3 + 108))(v3, 0); /*0x48e62e*/
  return ((GadgetClass *)(ShpButtonClass *)this)->ClearState(aP1); /*0x48e63d*/

}
} // namespace gamemd
// 0x60B950
namespace gamemd {
int Control::RepositionControlsDialog(HWND hWnd)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x60B950)
}
} // namespace gamemd
// 0x60C540
namespace gamemd {
int Control::CheckControlTypeDialog()
{

  int result; // eax
  int v2; // ecx
  Control *v3; // [esp+4h] [ebp-4h] BYREF

  result = *(unsigned int *)&g_DialogPool.__pad_208[60]; /*0x60c541*/
  v3 = this; /*0x60c549*/
  if ( !*(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x60c54d*/
    goto LABEL_7; /*0x60c54d*/
  result = *(unsigned int *)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x60c570*/
                     + 4
                     * ((*(int (**)(Control **))&g_DialogPool.__pad_208[80])(&v3)
                      & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !result ) /*0x60c575*/
    goto LABEL_7; /*0x60c575*/
  while ( *(Control **)result != v3 ) /*0x60c57d*/
  {
    result = *(unsigned int *)(result + 516); /*0x60c57f*/
    if ( !result ) /*0x60c587*/
    {
      LOBYTE(result) = 0; /*0x60c589*/
      return result; /*0x60c58d*/
    }
  }
  v2 = result + 4; /*0x60c592*/
  if ( result != -4 ) /*0x60c597*/
  {
    result = *(unsigned int *)(result + 112); /*0x60c59e*/
    if ( result == 268 /*0x60c7b0*/
      || result == 148
      || result == 182
      || result == 163
      || result == 115
      || result == 216
      || result == 3003
      || result == 245
      || result == 261
      || result == 213
      || result == 226
      || result == 693
      || result == 183
      || result == 692
      || result == 257
      || result == 297
      || result == 3014
      || result == 3015
      || result == 267
      || result == 215
      || result == 264
      || result == 188
      || result == 189
      || result == 187
      || result == 181
      || result == 3002
      || result == 255
      || result == 234
      || result == 107
      || result == 256
      || result == 258
      || result == 184
      || result == 214
      || result == 259
      || result == 212
      || result == 293
      || result == 290
      || result == 274
      || result == 231
      || result == 278
      || result == 194
      || result == 201
      || result == 275
      || result == 254
      || result == 271
      || result == 285
      || result == 284
      || result == 279
      || result == 276
      || result == 230
      || result == 243
      || result == 244
      || result == 700
      || result == 270
      || result == 251 )
    {
      LOBYTE(result) = 1; /*0x60c7b7*/
      *(unsigned int *)(v2 + 176) = 1; /*0x60c7b9*/
      *(unsigned char *)(v2 + 189) = 1; /*0x60c7bf*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x60c7b2*/
    }
  }
  else
  {
LABEL_7:
    LOBYTE(result) = 0; /*0x60c599*/
  }
  return result; /*0x60c58b*/

}
} // namespace gamemd