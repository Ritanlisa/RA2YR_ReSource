// GENERATED C2039/C3861 stubs (fix_c2039_c3861.py)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"

namespace gamemd {

// 0x53cb10
double ActionQueue::PushEntry(...) { return 0; }

  int v5; // eax

  *this = a2; /*0x53cb1d*/
  *(this + 1) = a3; /*0x53cb23*/
  *(this + 3) = 0; /*0x53cb28*/
  *(this + 4) = 0; /*0x53cb2b*/
  *(this + 2) = a4; /*0x53cb2e*/
  if ( unk_AA0128 < unk_AA0120 /*0x53cb63*/
    || (unk_AA0125 || !unk_AA0120)
    && unk_AA012C > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_AA0118 + 8))(
         &dword_AA0118,
         unk_AA0120 + unk_AA012C,
         0) )
  {
    v5 = unk_AA0128++; /*0x53cb70*/
    *((unsigned int *)unk_AA011C + v5) = this; /*0x53cb7f*/
  }
  return this; /*0x53cb84*/

}
  int v5; // eax

  *this = a2; /*0x53cb1d*/
  *(this + 1) = a3; /*0x53cb23*/
  *(this + 3) = 0; /*0x53cb28*/
  *(this + 4) = 0; /*0x53cb2b*/
  *(this + 2) = a4; /*0x53cb2e*/
  if ( unk_AA0128 < unk_AA0120 /*0x53cb63*/
    || (unk_AA0125 || !unk_AA0120)
    && unk_AA012C > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_AA0118 + 8))(
         &dword_AA0118,
         unk_AA0120 + unk_AA012C,
         0) )
  {
    v5 = unk_AA0128++; /*0x53cb70*/
    *((unsigned int *)unk_AA011C + v5) = this; /*0x53cb7f*/
  }
  return this; /*0x53cb84*/

}
double AircraftTrackerClass::FillCurrentVector(...) { return 0; }

  unsigned int *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // esi
  int v14; // ebx
  int v15; // edi
  unsigned int *v16; // ebp
  int v17; // edi
  int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  int i; // esi
  int v23; // edi
  int v24; // ebp
  int v25; // edx
  int v26; // eax
  int v27; // esi
  __int16 v28; // ax
  int v29; // esi
  int v30; // edi
  int v31; // eax
  int v32; // esi
  int v33; // eax
  int v34; // eax
  int j; // esi
  int v36; // edi
  int v37; // ebp
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // eax
  __int16 v42; // ax
  int v43; // esi
  int v44; // edi
  int v45; // eax
  int v46; // esi
  int v47; // eax
  int v48; // eax
  int k; // esi
  int v50; // edi
  int v51; // ebp
  int v52; // ecx
  int v53; // edx
  int v54; // eax
  int v55; // eax
  int v56; // esi
  int v57; // edi
  int v58; // eax
  int v59; // esi
  int v60; // eax
  int v61; // eax
  int m; // esi
  int v63; // edi
  int v64; // ebp
  int v65; // edx
  int v66; // eax
  int v67; // esi
  int v68; // eax
  int v69; // esi
  int v70; // edx
  int v71; // eax
  int v72; // esi
  int v73; // eax
  int v74; // eax
  int v75; // edi
  int v76; // ebp
  int v77; // ebp
  int v78; // edx
  int v79; // eax
  int v80; // ecx
  int v81; // eax
  int v82; // eax
  int v83; // esi
  int v84; // ecx
  int v85; // ebx
  int v86; // edi
  int v87; // eax
  int v88; // ecx
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // ecx
  int v93; // ebp
  int v94; // edi
  char *v95; // esi
  int v96; // ebx
  int v97; // eax
  int v98; // eax
  int result; // eax
  int v100; // ebp
  int v101; // ebx
  int v102; // eax
  int v103; // eax
  int v104; // ebp
  int v105; // ebx
  int v106; // eax
  int v107; // eax
  int v109; // [esp+24h] [ebp-30h] BYREF
  int v110; // [esp+28h] [ebp-2Ch]
  int v111; // [esp+2Ch] [ebp-28h]
  int v112; // [esp+30h] [ebp-24h]
  int v113; // [esp+34h] [ebp-20h] BYREF
  int v114; // [esp+38h] [ebp-1Ch]
  int v115; // [esp+40h] [ebp-14h] BYREF
  int v116; // [esp+44h] [ebp-10h]
  unsigned int v117[3]; // [esp+48h] [ebp-Ch] BYREF
  int aP1a; // [esp+58h] [ebp+4h]

  if ( a3 <= 1 ) /*0x412b58*/
    a3 = 1; /*0x412b5a*/
  v4 = (unsigned int *)(*(int (**)(VectorClass *, unsigned int *))(*(unsigned int *)aP1->vtable0 + 72))(aP1, v117); /*0x412b6e*/
  v5 = *Coord::ToCell(v4, (IUnknown *)&v115); /*0x412b78*/
  v114 = v5; /*0x412b7d*/
  if ( (v5 & 0x8000u) == 0 ) /*0x412b81*/
    v6 = (__int16)v5; /*0x412b87*/
  else
    v6 = 0; /*0x412b83*/
  if ( v114 >= 0 ) /*0x412b91*/
    v7 = SHIWORD(v114); /*0x412b97*/
  else
    v7 = 0; /*0x412b93*/
  v8 = v6; /*0x412ba7*/
  v9 = 19; /*0x412bae*/
  v10 = v8 / (*(unsigned int *)&MEMORY[0x87F8E4].field_2D[3] / 20); /*0x412bb9*/
  if ( v10 <= 19 ) /*0x412bbe*/
    v9 = v10; /*0x412bc0*/
  v11 = v7 / (*(unsigned int *)&MEMORY[0x87F8E4].__pad_31[3] / 20); /*0x412bdc*/
  if ( v11 > 19 ) /*0x412be1*/
    v11 = 19; /*0x412be3*/
  v12 = v9 + 20 * v11; /*0x412beb*/
  v13 = 0; /*0x412bee*/
  aP1a = v12; /*0x412bf0*/
  v14 = *(unsigned int *)(this + 24 * v12 + 16); /*0x412bf7*/
  v15 = this + 24 * v12; /*0x412bfb*/
  if ( v14 > 0 ) /*0x412c01*/
  {
    v16 = (unsigned int *)(this + 9600); /*0x412c03*/
    do /*0x412c24*/
    {
      v113 = (*(int (**)(int, int))(*(unsigned int *)v15 + 24))(v15, v13); /*0x412c15*/
      DynamicVector::AddItem(v16, (VectorClass *)&v113); /*0x412c1c*/
      ++v13; /*0x412c21*/
    }
    while ( v13 < v14 ); /*0x412c24*/
  }
  v109 = v114; /*0x412c2e*/
  v17 = 0; /*0x412c32*/
  v111 = 0; /*0x412c36*/
  v113 = 0; /*0x412c3d*/
  v112 = 0; /*0x412c41*/
  v110 = 0; /*0x412c45*/
  if ( (__int16)(a3 + v114) >= 0 ) /*0x412c49*/
    v18 = (__int16)(a3 + v114); /*0x412c4f*/
  else
    v18 = 0; /*0x412c4b*/
  if ( v109 >= 0 ) /*0x412c5a*/
    v17 = SHIWORD(v109); /*0x412c5c*/
  v19 = v18 / (*(unsigned int *)&MEMORY[0x87F8E4].field_2D[3] / 20); /*0x412c79*/
  v20 = 19; /*0x412c7b*/
  if ( v19 <= 19 ) /*0x412c83*/
    v20 = v19; /*0x412c85*/
  v21 = v17 / (*(unsigned int *)&MEMORY[0x87F8E4].__pad_31[3] / 20); /*0x412ca1*/
  if ( v21 > 19 ) /*0x412ca6*/
    v21 = 19; /*0x412ca8*/
  for ( i = v20 + 20 * v21; i != aP1a; i = v27 + 20 * v25 )
  {
    v23 = 0; /*0x412cc8*/
    ++v112; /*0x412cca*/
    v24 = *(unsigned int *)(this + 24 * i + 16); /*0x412cd1*/
    if ( v24 > 0 ) /*0x412cda*/
    {
      do /*0x412cff*/
      {
        v109 = (*(int (**)(int, int))(*(unsigned int *)(this + 24 * i) + 24))(this + 24 * i, v23); /*0x412ced*/
        DynamicVector::AddItem((unsigned int *)(this + 9600), (VectorClass *)&v109); /*0x412cf7*/
        ++v23; /*0x412cfc*/
      }
      while ( v23 < v24 ); /*0x412cff*/
    }
    v25 = i / 20; /*0x412d1c*/
    v26 = i % 20 - 1; /*0x412d1e*/
    if ( v26 < 20 )
      v27 = v26 < 0 ? 0 : v26;
    else
      v27 = 19; /*0x412d2a*/
    if ( v25 < 0 ) /*0x412d3f*/
    {
      v25 = 0; /*0x412d4d*/
    }
    else if ( v25 > 19 ) /*0x412d44*/
    {
      v25 = 19; /*0x412d46*/
    }
  }
  v109 = v114; /*0x412d69*/
  v28 = HIWORD(v114) - a3; /*0x412d76*/
  if ( (v114 & 0x8000u) == 0 ) /*0x412d7b*/
    v29 = (__int16)v114; /*0x412d81*/
  else
    v29 = 0; /*0x412d7d*/
  if ( v28 >= 0 ) /*0x412d87*/
    v30 = v28; /*0x412d8d*/
  else
    v30 = 0; /*0x412d89*/
  v31 = v29; /*0x412d9d*/
  v32 = 19; /*0x412da4*/
  v33 = v31 / (*(unsigned int *)&MEMORY[0x87F8E4].field_2D[3] / 20); /*0x412daf*/
  if ( v33 <= 19 ) /*0x412db4*/
    v32 = v33; /*0x412db6*/
  v34 = v30 / (*(unsigned int *)&MEMORY[0x87F8E4].__pad_31[3] / 20); /*0x412dd2*/
  if ( v34 > 19 ) /*0x412dd7*/
    v34 = 19; /*0x412dd9*/
  for ( j = v32 + 20 * v34; j != aP1a; j = v38 + 20 * v41 )
  {
    v36 = 0; /*0x412dfc*/
    ++v111; /*0x412dfe*/
    v37 = *(unsigned int *)(this + 24 * j + 16); /*0x412e02*/
    if ( v37 > 0 ) /*0x412e0b*/
    {
      do /*0x412e30*/
      {
        v109 = (*(int (**)(int, int))(*(unsigned int *)(this + 24 * j) + 24))(this + 24 * j, v36); /*0x412e19*/
        DynamicVector::AddItem((unsigned int *)(this + 9600), (VectorClass *)&v109); /*0x412e28*/
        ++v36; /*0x412e2d*/
      }
      while ( v36 < v37 ); /*0x412e30*/
    }
    v38 = j % 20; /*0x412e41*/
    v39 = j / 20; /*0x412e4d*/
    if ( j % 20 < 0 ) /*0x412e51*/
    {
      v38 = 0; /*0x412e5f*/
    }
    else if ( v38 > 19 ) /*0x412e56*/
    {
      v38 = 19; /*0x412e58*/
    }
    v40 = v39 + 1; /*0x412e61*/
    if ( v39 + 1 < 0 || v40 <= 19 )
      v41 = v40 < 0 ? 0 : v40;
    else
      v41 = 19; /*0x412e6d*/
  }
  v42 = a3 + HIWORD(v114); /*0x412e9c*/
  v109 = v114; /*0x412ea1*/
  if ( (v114 & 0x8000u) == 0 ) /*0x412ea5*/
    v43 = (__int16)v114; /*0x412eab*/
  else
    v43 = 0; /*0x412ea7*/
  if ( v42 >= 0 ) /*0x412eb1*/
    v44 = v42; /*0x412eb7*/
  else
    v44 = 0; /*0x412eb3*/
  v45 = v43; /*0x412ec7*/
  v46 = 19; /*0x412ece*/
  v47 = v45 / (*(unsigned int *)&MEMORY[0x87F8E4].field_2D[3] / 20); /*0x412ed9*/
  if ( v47 <= 19 ) /*0x412ede*/
    v46 = v47; /*0x412ee0*/
  v48 = v44 / (*(unsigned int *)&MEMORY[0x87F8E4].__pad_31[3] / 20); /*0x412efc*/
  if ( v48 > 19 ) /*0x412f01*/
    v48 = 19; /*0x412f03*/
  for ( k = v46 + 20 * v48; k != aP1a; k = v52 + 20 * v55 )
  {
    v50 = 0; /*0x412f26*/
    ++v113; /*0x412f28*/
    v51 = *(unsigned int *)(this + 24 * k + 16); /*0x412f2c*/
    if ( v51 > 0 ) /*0x412f35*/
    {
      do /*0x412f5a*/
      {
        v109 = (*(int (**)(int, int))(*(unsigned int *)(this + 24 * k) + 24))(this + 24 * k, v50); /*0x412f43*/
        DynamicVector::AddItem((unsigned int *)(this + 9600), (VectorClass *)&v109); /*0x412f52*/
        ++v50; /*0x412f57*/
      }
      while ( v50 < v51 ); /*0x412f5a*/
    }
    v52 = k % 20; /*0x412f6b*/
    v53 = k / 20; /*0x412f77*/
    if ( k % 20 < 0 ) /*0x412f7b*/
    {
      v52 = 0; /*0x412f89*/
    }
    else if ( v52 > 19 ) /*0x412f80*/
    {
      v52 = 19; /*0x412f82*/
    }
    v54 = v53 - 1; /*0x412f8b*/
    if ( v53 - 1 < 0 || v54 <= 19 )
      v55 = v54 < 0 ? 0 : v54;
    else
      v55 = 19; /*0x412f97*/
  }
  v109 = v114; /*0x412fc2*/
  if ( (__int16)(v114 - a3) >= 0 ) /*0x412fcb*/
    v56 = (__int16)(v114 - a3); /*0x412fd1*/
  else
    v56 = 0; /*0x412fcd*/
  if ( v109 >= 0 ) /*0x412fdc*/
    v57 = SHIWORD(v109); /*0x412fe2*/
  else
    v57 = 0; /*0x412fde*/
  v58 = v56; /*0x412ff2*/
  v59 = 19; /*0x412ff9*/
  v60 = v58 / (*(unsigned int *)&MEMORY[0x87F8E4].field_2D[3] / 20); /*0x413004*/
  if ( v60 <= 19 ) /*0x413009*/
    v59 = v60; /*0x41300b*/
  v61 = v57 / (*(unsigned int *)&MEMORY[0x87F8E4].__pad_31[3] / 20); /*0x413027*/
  if ( v61 > 19 ) /*0x41302c*/
    v61 = 19; /*0x41302e*/
  for ( m = v59 + 20 * v61; m != aP1a; m = v67 + 20 * v65 )
  {
    v63 = 0; /*0x413051*/
    ++v110; /*0x413053*/
    v64 = *(unsigned int *)(this + 24 * m + 16); /*0x413057*/
    if ( v64 > 0 ) /*0x413060*/
    {
      do /*0x413085*/
      {
        a3 = (*(int (**)(int, int))(*(unsigned int *)(this + 24 * m) + 24))(this + 24 * m, v63); /*0x41306e*/
        DynamicVector::AddItem((unsigned int *)(this + 9600), (VectorClass *)&a3); /*0x41307d*/
        ++v63; /*0x413082*/
      }
      while ( v63 < v64 ); /*0x413085*/
    }
    v65 = m / 20; /*0x4130a2*/
    v66 = m % 20 + 1; /*0x4130a4*/
    if ( v66 < 20 )
      v67 = v66 < 0 ? 0 : v66;
    else
      v67 = 19; /*0x4130b0*/
    if ( v65 < 0 ) /*0x4130c5*/
    {
      v65 = 0; /*0x4130d3*/
    }
    else if ( v65 > 19 ) /*0x4130ca*/
    {
      v65 = 19; /*0x4130cc*/
    }
  }
  if ( v111 )
  {
    v68 = v110; /*0x4130f3*/
    if ( v110 )
    {
      if ( v111 < v110 ) /*0x413105*/
        v68 = v111; /*0x413107*/
      v69 = aP1a; /*0x413109*/
      if ( v68 > 0 )
      {
        a3 = v68; /*0x413115*/
        do
        {
          v70 = v69 / 20; /*0x413134*/
          v71 = v69 % 20 - 1; /*0x413136*/
          if ( v71 < 20 )
            v72 = v71 < 0 ? 0 : v71;
          else
            v72 = 19; /*0x413142*/
          v73 = v70 - 1; /*0x413155*/
          if ( v70 - 1 < 0 || v73 <= 19 )
            v74 = v73 < 0 ? 0 : v73;
          else
            v74 = 19; /*0x413161*/
          v75 = 0; /*0x413179*/
          v69 = v72 + 20 * v74; /*0x41317b*/
          v76 = *(unsigned int *)(this + 24 * v69 + 16); /*0x413181*/
          if ( v76 > 0 ) /*0x41318a*/
          {
            do /*0x4131af*/
            {
              v109 = (*(int (**)(int, int))(*(unsigned int *)(this + 24 * v69) + 24))(this + 24 * v69, v75); /*0x41319d*/
              DynamicVector::AddItem((unsigned int *)(this + 9600), (VectorClass *)&v109); /*0x4131a7*/
              ++v75; /*0x4131ac*/
            }
            while ( v75 < v76 ); /*0x4131af*/
          }
          --a3; /*0x4131b6*/
        }
        while ( a3 );
      }
      if ( v111 >= 2 && v110 >= 2 )
      {
        v77 = aP1a % 20; /*0x4131ee*/
        v109 = aP1a % 20; /*0x4131f7*/
        v78 = aP1a / 20; /*0x4131fe*/
        v79 = aP1a % 20 - 2; /*0x413200*/
        v114 = aP1a / 20; /*0x413205*/
        if ( v79 < 20 )
          v80 = v79 < 0 ? 0 : v79;
        else
          v80 = 19; /*0x413210*/
        v81 = v78 - 1; /*0x413221*/
        if ( v78 - 1 < 0 || v81 <= 19 )
          v82 = v81 < 0 ? 0 : v81;
        else
          v82 = 19; /*0x41322d*/
        v83 = 0; /*0x413241*/
        v84 = 3 * (v80 + 20 * v82); /*0x413246*/
        v85 = *(unsigned int *)(this + 8 * v84 + 16); /*0x41324d*/
        v86 = this + 8 * v84; /*0x413251*/
        if ( v85 > 0 ) /*0x413256*/
        {
          do /*0x41327b*/
          {
            a3 = (*(int (**)(int, int))(*(unsigned int *)v86 + 24))(v86, v83); /*0x413268*/
            DynamicVector::AddItem((unsigned int *)(this + 9600), (VectorClass *)&a3); /*0x413273*/
            ++v83; /*0x413278*/
          }
          while ( v83 < v85 ); /*0x41327b*/
          v77 = v109; /*0x41327d*/
          v78 = v114; /*0x413281*/
        }
        v87 = v77 - 1; /*0x413285*/
        if ( v77 - 1 < 0 || v87 <= 19 )
          v88 = v87 < 0 ? 0 : v87;
        else
          v88 = 19; /*0x413291*/
        v89 = v78 - 2; /*0x4132a2*/
        if ( v78 - 2 < 0 || v89 <= 19 )
          v90 = v89 < 0 ? 0 : v89;
        else
          v90 = 19; /*0x4132ae*/
        DynamicArray::AddFromList((char *)this, v88 + 20 * v90); /*0x4132ca*/
      }
    }
  }
  v91 = v113; /*0x4132cf*/
  if ( v113 && (v92 = v110) != 0 ) /*0x4132e1*/
  {
    v93 = v113; /*0x4132e5*/
    if ( v113 >= v110 ) /*0x4132e7*/
      v93 = v110; /*0x4132e9*/
    v94 = aP1a; /*0x4132eb*/
    v95 = (char *)this; /*0x4132ef*/
    v96 = aP1a; /*0x4132f5*/
    if ( v93 > 0 ) /*0x4132f7*/
    {
      do /*0x413316*/
      {
        v96 = Slider::CalcPosition(v96, -1, 1); /*0x41330b*/
        DynamicArray::AddFromList((char *)this, v96); /*0x413310*/
        --v93; /*0x413315*/
      }
      while ( v93 ); /*0x413316*/
      v91 = v113; /*0x413318*/
      v92 = v110; /*0x41331c*/
    }
    if ( v91 >= 2 && v92 >= 2 ) /*0x413328*/
    {
      v97 = Slider::CalcPosition(aP1a, -2, 1); /*0x413339*/
      DynamicArray::AddFromList((char *)this, v97); /*0x413341*/
      v98 = Slider::CalcPosition(aP1a, -1, 2); /*0x413353*/
      DynamicArray::AddFromList((char *)this, v98); /*0x41335b*/
    }
  }
  else
  {
    v95 = (char *)this; /*0x413362*/
    v94 = aP1a; /*0x413366*/
  }
  result = v111; /*0x41336a*/
  if ( v111 ) /*0x413370*/
  {
    v100 = v112; /*0x413372*/
    if ( v112 ) /*0x413378*/
    {
      if ( v111 < v112 ) /*0x41337c*/
        v100 = v111; /*0x41337e*/
      v101 = v94; /*0x413382*/
      if ( v100 > 0 ) /*0x413384*/
      {
        do /*0x4133a3*/
        {
          v101 = Slider::CalcPosition(v101, 1, -1); /*0x413398*/
          DynamicArray::AddFromList(v95, v101); /*0x41339d*/
          --v100; /*0x4133a2*/
        }
        while ( v100 ); /*0x4133a3*/
        result = v111; /*0x4133a5*/
      }
      if ( result >= 2 && v112 >= 2 ) /*0x4133b3*/
      {
        v102 = Slider::CalcPosition(v94, 2, -1); /*0x4133c2*/
        DynamicArray::AddFromList(v95, v102); /*0x4133ca*/
        v103 = Slider::CalcPosition(v94, 1, -2); /*0x4133de*/
        result = DynamicArray::AddFromList(v95, v103); /*0x4133e6*/
      }
    }
  }
  v104 = v113; /*0x4133eb*/
  if ( v113 ) /*0x4133f1*/
  {
    result = v112; /*0x4133f7*/
    if ( v112 ) /*0x4133fd*/
    {
      if ( v113 >= v112 ) /*0x413401*/
        v104 = v112; /*0x413403*/
      v105 = v94; /*0x413407*/
      if ( v104 > 0 ) /*0x413409*/
      {
        v116 = 1; /*0x41340b*/
        do /*0x413431*/
        {
          v105 = Slider::CalcPosition(v105, 1, v116); /*0x413426*/
          DynamicArray::AddFromList(v95, v105); /*0x41342b*/
          --v104; /*0x413430*/
        }
        while ( v104 ); /*0x413431*/
        result = v112; /*0x413433*/
      }
      if ( v113 >= 2 && result >= 2 ) /*0x413441*/
      {
        v106 = Slider::CalcPosition(v94, 2, 1); /*0x413452*/
        DynamicArray::AddFromList(v95, v106); /*0x41345a*/
        v107 = Slider::CalcPosition(v94, 1, 2); /*0x41346e*/
        return DynamicArray::AddFromList(v95, v107); /*0x413476*/
      }
    }
  }
  return result; /*0x41347b*/

}
double AircraftTypeVector::Constructor(...) { return 0; }

  *(this + 1) = 0; /*0x51399b*/
  *(this + 2) = a2; /*0x51399e*/
  *((unsigned char *)this + 12) = 1; /*0x5139a1*/
  *((unsigned char *)this + 13) = 0; /*0x5139a5*/
  *this = &vt_VectorClass_AircraftTypeClass_const; /*0x5139a8*/
  if ( a2 ) /*0x5139ae*/
  {
    if ( a3 ) /*0x5139b6*/
    {
      *(this + 1) = a3; /*0x5139b8*/
      return this; /*0x5139be*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x5139cd*/
    *((unsigned char *)this + 13) = 1; /*0x5139d0*/
  }
  return this; /*0x5139bd*/

}
double AllocCallback::Dispatch(...) { return 0; }

  unsigned int *result; // eax

  switch ( a2 ) /*0x7be5df*/
  {
    case 2: /*0x7be5df*/
      result = malloc(Size); /*0x7be5eb*/
      break; /*0x7be5f6*/
    case 3: /*0x7be5df*/
      free(Block); /*0x7be5fc*/
      result = 0; /*0x7be604*/
      break; /*0x7be607*/
    case 4: /*0x7be5df*/
    case 5: /*0x7be5df*/
      result = Block; /*0x7be60c*/
      break; /*0x7be60f*/
    case 6: /*0x7be5df*/
      *Block = -1; /*0x7be614*/
      goto LABEL_6; /*0x7be614*/
    default:
LABEL_6:
      result = 0; /*0x7be61a*/
      break; /*0x7be61a*/
  }
  return result; /*0x7be5f5*/

}
double AnimTypeVector::Constructor(...) { return 0; }

  *(this + 1) = 0; /*0x52568b*/
  *(this + 2) = aP1; /*0x52568e*/
  *((unsigned char *)this + 12) = 1; /*0x525691*/
  *((unsigned char *)this + 13) = 0; /*0x525695*/
  *this = &vt_VectorClass_AnimTypeClass_const; /*0x525698*/
  if ( aP1 ) /*0x52569e*/
  {
    if ( aP2 ) /*0x5256a6*/
    {
      *(this + 1) = aP2; /*0x5256a8*/
      return this; /*0x5256ae*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * (unsigned int)aP1); /*0x5256bd*/
    *((unsigned char *)this + 13) = 1; /*0x5256c0*/
  }
  return this; /*0x5256ad*/

}
double AudioChannel::DeactivatePlay(...) { return 0; }

  int v2; // eax

  (*(void (**)(void))(*((unsigned int *)this + 53) + 40))(); /*0x402609*/
  if ( (*(unsigned char *)((unsigned int *)this + 41) & 1) != 0 ) /*0x402613*/
  {
    *((unsigned int *)this + 41) &= ~1u; /*0x40261e*/
    (*(void (**)(unsigned int *))(*((unsigned int *)this + 53) + 20))(this); /*0x40262c*/
    v2 = *((unsigned int *)this + 41); /*0x40262f*/
    LOBYTE(v2) = v2 | 4; /*0x402635*/
    *((unsigned int *)this + 41) = v2; /*0x402637*/
  }
  return (*(int (**)(unsigned int *))(*((unsigned int *)this + 53) + 44))(this);

}
double AudioConfig::InitDefault(...) { return 0; }

  qmemcpy(this, &flt_B44318, 0x30u); /*0x754bf0*/
  return this; /*0x754bf2*/

}
double AudioFile::GetCallback(...) { return 0; }

  return (*(int (**)(void))(*((unsigned int *)this + 53) + 40))();

}
double AudioFileClass::Release(...) { return 0; }

  unsigned int *result; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // ebx
  unsigned int *v5; // edi

  result = this; /*0x405c01*/
  if ( MEMORY[0x87E2A0] ) /*0x405c13*/
  {
    if ( (int *)*((unsigned int *)this + 3) == &MEMORY[0x87E294] ) /*0x405c20*/
    {
      v2 = *this; /*0x405c26*/
      if ( *this ) /*0x405c26*/
      {
        if ( *((unsigned int *)this + 2) == *(unsigned int *)(v2 + 36) /*0x405c53*/
          && *((unsigned int *)this + 1) == *(unsigned int *)(v2 + 312)
          && (*(unsigned char *)(v2 + 24) & 1) == 0 )
        {
          v3 = *(unsigned int *)(v2 + 176); /*0x405c59*/
          if ( v3 && v2 == *(unsigned int *)(v3 + 192) ) /*0x405c69*/
          {
            if ( (*(unsigned char *)(v2 + 24) & 2) != 0 ) /*0x405c6f*/
              Voice::Stop(v3); /*0x405c71*/
            AudioStream::ReleaseChannel(*(unsigned int *)(v2 + 176)); /*0x405c7c*/
            *(unsigned int *)(*(unsigned int *)(v2 + 176) + 192) = 0; /*0x405c87*/
            *(unsigned int *)(*(unsigned int *)(v2 + 176) + 188) = 0; /*0x405c93*/
            *(unsigned int *)(*(unsigned int *)(v2 + 176) + 180) = 0; /*0x405c9f*/
            *(unsigned int *)(*(unsigned int *)(v2 + 176) + 184) = 0; /*0x405cab*/
            *(unsigned int *)(*(unsigned int *)(v2 + 176) + 144) = 0; /*0x405cb7*/
            *(unsigned int *)(*(unsigned int *)(v2 + 176) + 152) = 0; /*0x405cc3*/
            *(unsigned int *)(*(unsigned int *)(v2 + 176) + 156) = 0; /*0x405ccf*/
            result = this; /*0x405cd5*/
            *(unsigned int *)(v2 + 176) = 0; /*0x405cd9*/
          }
          v4 = 0; /*0x405ce6*/
          if ( *(int *)(v2 + 168) > 0 ) /*0x405cea*/
          {
            v5 = (unsigned int *)(v2 + 40); /*0x405ced*/
            do /*0x405d05*/
            {
              RefCount::Decrement(*v5); /*0x405cf2*/
              *v5 = 0; /*0x405cf7*/
              ++v4; /*0x405cff*/
              ++v5; /*0x405d00*/
            }
            while ( v4 < *(unsigned int *)(v2 + 168) ); /*0x405d05*/
            result = this; /*0x405d07*/
          }
          *(unsigned int *)(v2 + 168) = 0; /*0x405d0c*/
          *(unsigned int *)(v2 + 28) = 4; /*0x405d12*/
          *(unsigned int *)(v2 + 312) = 0; /*0x405d19*/
          *(unsigned int *)(v2 + 632) = 0; /*0x405d1f*/
          *(unsigned int *)(v2 + 24) |= 1u; /*0x405d2b*/
        }
        *result = 0; /*0x405d2f*/
      }
    }
  }
  result[2] = 0; /*0x405d31*/
  result[3] = 0; /*0x405d34*/
  return result; /*0x405d37*/

}
double AudioPool::ProcessQueue(...) { return 0; }

  unsigned int *v1; // ebx
  int *v2; // esi
  void **v3; // esi
  void **v4; // edi
  int v5; // eax

  v1 = this; /*0x40519a*/
  if ( !dword_816108 || !MEMORY[0x87E2A4] || !*((unsigned int *)this + 3) ) /*0x4051b6*/
    return 0; /*0x4051b6*/
  v2 = LinkedList::Next((int **)MEMORY[0x87E2A8]); /*0x4051ca*/
  if ( !v2 ) /*0x4051ce*/
  {
    if ( MEMORY[0x87E2A0] ) /*0x4051d6*/
    {
      v3 = (void **)MEMORY[0x87E180]; /*0x4051d8*/
      if ( MEMORY[0x87E180] != &MEMORY[0x87E180] ) /*0x4051e4*/
      {
        do /*0x40522b*/
        {
          v4 = (void **)*v3; /*0x4051e8*/
          if ( ((unsigned char)v3[6] & 1) != 0 ) /*0x4051ef*/
          {
            LinkedList::Init((unsigned int **)v3); /*0x4051f3*/
            v3[78] = 0; /*0x4051f8*/
            if ( ((unsigned char)v3[6] & 0x80) != 0 ) /*0x405203*/
              __3_YAXPAX_Z(v3); /*0x405206*/
            else
              PushFrontLinkedListAlt(MEMORY[0x87E2A8], (int)v3); /*0x405218*/
            --MEMORY[0x87E28C]; /*0x40521d*/
          }
          v3 = v4; /*0x405229*/
        }
        while ( v4 != &MEMORY[0x87E180] ); /*0x40522b*/
        v1 = this; /*0x40522d*/
      }
    }
    v2 = LinkedList::Next((int **)MEMORY[0x87E2A8]); /*0x40523c*/
    if ( !v2 ) /*0x405240*/
      return 0; /*0x4052ce*/
  }
  v5 = ++MEMORY[0x87E28C]; /*0x405251*/
  if ( MEMORY[0x87E28C] > MEMORY[0x87E290] ) /*0x405259*/
    MEMORY[0x87E290] = v5; /*0x40525b*/
  memset(v2, 0, 0x280u); /*0x405269*/
  v2[9] = (int)v1; /*0x40526d*/
  DListNode::InitEmpty(v2); /*0x405270*/
  v2[7] = 0; /*0x405275*/
  v2[85] = 0; /*0x40527e*/
  v2[154] = 0; /*0x405284*/
  v2[120] = 0; /*0x40528a*/
  v2[42] = 0; /*0x405290*/
  AudioMixer::Init(v2 + 46); /*0x405296*/
  v2[86] = 0; /*0x40529b*/
  InsertAfterDListNode((int)&MEMORY[0x87E180], v2); /*0x4052a8*/
  v2[78] = dword_81610C++; /*0x4052b2*/
  return v2; /*0x4052be*/

}
double AudioSample::Destructor(...) { return 0; }

  unsigned int *v2; // ecx
  unsigned int *v3; // ecx
  unsigned int *v4; // ecx
  unsigned int *v5; // ecx
  void (***v6)(unsigned int, int); // ecx

  if ( *((void **)Block + 1) != Block ) /*0x407aa4*/
  {
    EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x407aab*/
    LinkedList::Init((unsigned int **)Block); /*0x407aaf*/
    LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x407ab9*/
  }
  if ( !*((unsigned int *)Block + 34) && *((unsigned int *)Block + 5) ) /*0x407ac5*/
  {
    EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x407ad1*/
    Voice::Stop(*((unsigned int *)Block + 5)); /*0x407ad6*/
    LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x407ae0*/
  }
  v2 = (unsigned int *)*((unsigned int *)Block + 13); /*0x407ae2*/
  if ( v2 ) /*0x407ae7*/
  {
    Count::DecrementRefCountsAudio(v2); /*0x407ae9*/
    *((unsigned int *)Block + 13) = 0; /*0x407aee*/
  }
  v3 = (unsigned int *)*((unsigned int *)Block + 14); /*0x407af5*/
  if ( v3 ) /*0x407afa*/
  {
    Count::DecrementRefCountsAudio(v3); /*0x407afc*/
    *((unsigned int *)Block + 14) = 0; /*0x407b01*/
  }
  v4 = (unsigned int *)*((unsigned int *)Block + 12); /*0x407b08*/
  if ( v4 ) /*0x407b0d*/
    AudioSample::InitLinkedList(v4); /*0x407b0f*/
  v5 = (unsigned int *)*((unsigned int *)Block + 5); /*0x407b14*/
  if ( v5 ) /*0x407b19*/
    AudioSample::ResetState(v5); /*0x407b1b*/
  v6 = (void (***)(unsigned int, int))*((unsigned int *)Block + 31); /*0x407b20*/
  if ( v6 ) /*0x407b25*/
    (**v6)(v6, 1); /*0x407b2b*/
  __3_YAXPAX_Z(Block); /*0x407b2e*/

}
double AudioSample::IsBuffering(...) { return 0; }

  return (*((unsigned char *)this + 12) & 1) != 0 /*0x4080e8*/
      && *(unsigned int *)(*((unsigned int *)this + 5) + 20) != *(unsigned int *)(*((unsigned int *)this + 5) + 24);

}
double AudioSource::Get(...) { return 0; }

  int *result; // eax

  if ( !MEMORY[0x87E2A0] || *((unsigned int *)this + 3) != &MEMORY[0x87E294] ) /*0x406140*/
    return 0; /*0x406166*/
  result = *this; /*0x406142*/
  if ( *this && (*((unsigned int *)this + 2) != (int *)result[9] || *((unsigned int *)this + 1) != (int *)result[78]) ) /*0x40615e*/
  {
    result = 0; /*0x406160*/
    *this = 0; /*0x406162*/
  }
  return result; /*0x406165*/

}
double AudioTimer::DecrementAll(...) { return 0; }

  int *result; // eax
  int v1; // ecx

  result = (int *)MEMORY[0x87E81C]; /*0x408230*/
  if ( MEMORY[0x87E81C] ) /*0x408237*/
  {
    for ( result = (int *)AudioQueue::GetNext(MEMORY[0x87E810]); result; result = (int *)AudioQueue::GetNextAlt(result) ) /*0x408245*/
    {
      v1 = result[34] - 1; /*0x40824d*/
      result[34] = v1; /*0x408250*/
      if ( v1 < 0 ) /*0x408256*/
        result[34] = 0; /*0x408258*/
    }
  }
  return result; /*0x40826d*/

}
double BTree::DeleteSubtree(...) { return 0; }

  void *v2; // esi
  int v3; // eax
  int v4; // eax

  if ( *(unsigned short *)this == 0xFFFF && *((unsigned char *)this + 16) ) /*0x69e109*/
  {
    v2 = (void *)*((unsigned int *)this + 3); /*0x69e111*/
    if ( v2 ) /*0x69e116*/
    {
      if ( *(unsigned short *)v2 == 0xFFFF ) /*0x69e11c*/
      {
        BTree::DeleteSubtree(*((unsigned int *)this + 3)); /*0x69e120*/
        v3 = *((unsigned int *)v2 + 6); /*0x69e125*/
        if ( v3 ) /*0x69e12a*/
          *(unsigned int *)(v3 + 28) = *((unsigned int *)v2 + 7); /*0x69e12f*/
        v4 = *((unsigned int *)v2 + 7); /*0x69e132*/
        if ( v4 ) /*0x69e137*/
          *(unsigned int *)(v4 + 24) = *((unsigned int *)v2 + 6); /*0x69e13c*/
        else
          MEMORY[0xB077B0] = (void *)*((unsigned int *)v2 + 6); /*0x69e144*/
        if ( *((unsigned int *)v2 + 2) ) /*0x69e149*/
        {
          free(*((void **)v2 + 2)); /*0x69e151*/
          *((unsigned int *)v2 + 2) = 0; /*0x69e159*/
        }
      }
      __3_YAXPAX_Z(v2); /*0x69e161*/
    }
    *((unsigned int *)this + 3) = 0; /*0x69e169*/
    *((unsigned char *)this + 16) = 0; /*0x69e170*/
  }

}
double BaseNodeClass::Vector_Constructor(...) { return 0; }

  void *v5; // eax

  *(this + 1) = 0; /*0x42fc4a*/
  *(this + 2) = a2; /*0x42fc51*/
  *((unsigned char *)this + 12) = 1; /*0x42fc54*/
  *((unsigned char *)this + 13) = 0; /*0x42fc58*/
  *this = &VectorClass<BaseNodeClass>::`vftable'; /*0x42fc5c*/
  if ( a2 ) /*0x42fc62*/
  {
    if ( a3 ) /*0x42fc6a*/
    {
      *(this + 1) = a3; /*0x42fc6d*/
      return this; /*0x42fc78*/
    }
    v5 = __2_YAPAXI_Z(16 * a2); /*0x42fc81*/
    if ( v5 ) /*0x42fc8b*/
    {
      *(this + 1) = v5; /*0x42fc8e*/
      *((unsigned char *)this + 13) = 1; /*0x42fc95*/
      return this; /*0x42fc9d*/
    }
    *((unsigned char *)this + 13) = 1; /*0x42fca2*/
    *(this + 1) = 0; /*0x42fca6*/
  }
  return this; /*0x42fc76*/

}
double BigInt::DecryptBlock(...) { return 0; }

  int v6; // eax
  int v7; // edx
  Pipe *v9; // [esp-10h] [ebp-218h]
  int v10; // [esp+4h] [ebp-204h]
  unsigned int a0[64]; // [esp+8h] [ebp-200h] BYREF
  unsigned int v12[64]; // [esp+108h] [ebp-100h] BYREF

  v10 = 0; /*0x632751*/
  if ( (int)aP2 < (*(unsigned int *)(this + 512) - 1) / 8 ) /*0x632768*/
    return 0; /*0x632863*/
  do /*0x63284e*/
  {
    InitArrayWithValue(a0, 0, (AbstractClass *)0x40); /*0x632780*/
    memcpy(a0, (AbstractClass *)aP1, (*(unsigned int *)(this + 512) - 1) / 8); /*0x6327a3*/
    InitArrayWithValue(v12, 0, (AbstractClass *)0x40); /*0x6327b6*/
    *(unsigned int *)&HouseClass_Player.__pad_5568[26180] = ModBigIntExp( /*0x6327d5*/
                                                        v12,
                                                        (AbstractClass *)a0,
                                                        (char *)(this + 256),
                                                        (char *)this,
                                                        64);
    v9 = (Pipe *)((*(unsigned int *)(this + 512) - 1) / 8 + 1); /*0x6327ff*/
    qmemcpy(a0, v12, sizeof(a0)); /*0x632801*/
    memcpy(aP3, (AbstractClass *)a0, (size_t)v9); /*0x632804*/
    v6 = (*(unsigned int *)(this + 512) - 1) / 8; /*0x63282b*/
    v7 = v10 + v6 + 1; /*0x632832*/
    aP2 = (Pipe *)((char *)aP2 - v6); /*0x632838*/
    aP1 = (Pipe *)((char *)aP1 + v6); /*0x63283f*/
    aP3 = (Pipe *)((char *)aP3 + v6 + 1); /*0x632846*/
    v10 = v7; /*0x63284a*/
  }
  while ( (int)aP2 >= v6 ); /*0x63284e*/
  return v7; /*0x632859*/

}
double BigInt::RSAOperation(...) { return 0; }

  int v6; // kr00_4
  int v7; // kr08_4
  int v8; // edx
  int v9; // esi
  bool v10; // cc
  size_t v12; // [esp-Ch] [ebp-318h]
  int v13; // [esp+8h] [ebp-304h]
  unsigned int a0[64]; // [esp+Ch] [ebp-300h] BYREF
  unsigned int v15[64]; // [esp+10Ch] [ebp-200h] BYREF
  unsigned int v16[64]; // [esp+20Ch] [ebp-100h] BYREF

  v13 = 0; /*0x632884*/
  InitArrayWithValue(a0, 0, (AbstractClass *)0x40); /*0x632888*/
  if ( a3 < (*(unsigned int *)(this + 512) - 1) / 8 + 1 ) /*0x6328a7*/
    return 0; /*0x6329b3*/
  do /*0x63299e*/
  {
    InitArrayWithValue(v16, 0, (AbstractClass *)0x40); /*0x6328c1*/
    v12 = (*(unsigned int *)(this + 512) - 1) / 8 + 1; /*0x6328e7*/
    qmemcpy(a0, v16, sizeof(a0)); /*0x6328ee*/
    memcpy(a0, Src, v12); /*0x6328f0*/
    InitArrayWithValue(v15, 0, (AbstractClass *)0x40); /*0x632903*/
    *(unsigned int *)&HouseClass_Player.__pad_5568[26180] = ModBigIntExp( /*0x632922*/
                                                        v15,
                                                        (AbstractClass *)a0,
                                                        (char *)(this + 256),
                                                        (char *)this,
                                                        64);
    v6 = *(unsigned int *)(this + 512) - 1; /*0x632942*/
    qmemcpy(a0, v15, sizeof(a0)); /*0x632944*/
    memcpy(a4, (AbstractClass *)a0, v6 / 8); /*0x632957*/
    v7 = *(unsigned int *)(this + 512) - 1; /*0x632971*/
    v8 = -1 - v7 / 8; /*0x63297b*/
    a4 += v7 / 8; /*0x63297d*/
    Src = (AbstractClass *)((char *)Src + v7 / 8 + 1); /*0x63298a*/
    v9 = v7 / 8 + v13; /*0x63298e*/
    v10 = v8 + a3 < v7 / 8 + 1; /*0x632991*/
    a3 += v8; /*0x632993*/
    v13 = v9; /*0x63299a*/
  }
  while ( !v10 ); /*0x63299e*/
  return v9; /*0x6329a8*/

}
double BitArray::TestBit(...) { return 0; }

  return (*(unsigned char *)(a2 / 8 + a1) & (unsigned __int8)(1 << (a2 % 8))) != 0; /*0x54a975*/

}
double BufferIO::Cleanup(...) { return 0; }

  (*(void (**)(AbstractClass *))(*(unsigned int *)aP1->__pad_0 + 96))(aP1); /*0x434999*/
  *(this + 3) = 0; /*0x43499e*/
  *(this + 4) = 0; /*0x4349a1*/
  return 0; /*0x4349a4*/

}
double BufferIO::Flush(...) { return 0; }

  int v2; // eax
  AnimClass *v3; // edi

  if ( !*((unsigned char *)this + 41) || !*((unsigned char *)this + 40) ) /*0x431dde*/
    return 0; /*0x431e70*/
  v2 = *((unsigned int *)this + 16); /*0x431de9*/
  v3 = (AnimClass *)(*((unsigned int *)this + 17) - v2); /*0x431df3*/
  if ( *((unsigned char *)this + 38) ) /*0x431dec*/
  {
    FileClass::Seek((int *)this, v2 + *((unsigned int *)this + 20) + *((unsigned int *)this + 15), 0); /*0x431e08*/
    FileClass::Write2((int *)this, *(LPCVOID *)((char *)this + 48), (IUnknown *)v3); /*0x431e14*/
    FileClass::Seek((int *)this, *((unsigned int *)this + 20) + *((unsigned int *)this + 19), 0); /*0x431e26*/
  }
  else
  {
    FileClass::Open2((const CHAR **)this, (const CHAR *)1); /*0x431e38*/
    FileClass::Seek((int *)this, *((unsigned int *)this + 16) + *((unsigned int *)this + 15) + *((unsigned int *)this + 20), 0); /*0x431e4f*/
    FileClass::Write2((int *)this, *(LPCVOID *)((char *)this + 48), (IUnknown *)v3); /*0x431e5b*/
    FileClass::CloseHandle((HANDLE *)this); /*0x431e62*/
  }
  *((unsigned char *)this + 40) = 0; /*0x431e2b*/
  return 1; /*0x431e32*/

}
double BuildingLightQueue::RemoveEntry(...) { return 0; }

  int result; // eax
  void *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this; /*0x5ff2db*/
  result = (*(int (**)(int *, void **))(MEMORY[0xAC1678] + 16))(&MEMORY[0xAC1678], &v2); /*0x5ff2e5*/
  if ( result != -1 && result < MEMORY[0xAC1688] && result < --MEMORY[0xAC1688] ) /*0x5ff300*/
  {
    do /*0x5ff318*/
    {
      ++result; /*0x5ff308*/
      *((unsigned int *)MEMORY[0xAC167C] + result - 1) = *((unsigned int *)MEMORY[0xAC167C] + result); /*0x5ff30c*/
    }
    while ( result < MEMORY[0xAC1688] ); /*0x5ff318*/
  }
  return result; /*0x5ff31b*/

}
double BuildingLoadQueue::Find(...) { return 0; }

  int v2; // ecx
  int v3; // edx
  int v4; // ebx
  unsigned int *v5; // edi
  int v6; // esi

  if ( *((unsigned char *)this + 4) != 52 ) /*0x6e6f27*/
    return 0; /*0x6e6fe0*/
  v2 = MEMORY[0xB0E844]; /*0x6e6f2d*/
  if ( !MEMORY[0xB0E844] ) /*0x6e6f37*/
    return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6f37*/
  v3 = MEMORY[0xB0E850]; /*0x6e6f39*/
  if ( MEMORY[0xB0E850] && *(unsigned int *)MEMORY[0xB0E850] == *(unsigned int *)this ) /*0x6e6f49*/
    return AbstractClass::IsTechnoType(*(void **)(v3 + 4)); /*0x6e6fdf*/
  if ( !MEMORY[0xB0E84C] ) /*0x6e6f56*/
  {
    qsort(MEMORY[0xB0E840], MEMORY[0xB0E844], 8u, CompareFunction); /*0x6e6f67*/
    v2 = MEMORY[0xB0E844]; /*0x6e6f6c*/
    MEMORY[0xB0E850] = 0; /*0x6e6f75*/
    MEMORY[0xB0E84C] = 1; /*0x6e6f7f*/
  }
  v4 = *(unsigned int *)this; /*0x6e6f86*/
  v5 = MEMORY[0xB0E840]; /*0x6e6f88*/
  if ( v2 <= 0 ) /*0x6e6f90*/
    return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6f90*/
  while ( 1 ) /*0x6e6f99*/
  {
    v6 = v5[2 * (v2 / 2)]; /*0x6e6f99*/
    v3 = (int)&v5[2 * (v2 / 2)]; /*0x6e6f9c*/
    if ( v6 <= v4 ) /*0x6e6fa1*/
      break; /*0x6e6fa1*/
    v2 /= 2; /*0x6e6fa3*/
LABEL_12:
    if ( v2 <= 0 ) /*0x6e6fb5*/
      return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6fb5*/
  }
  if ( v6 != v4 ) /*0x6e6fa7*/
  {
    v5 = (unsigned int *)(v3 + 8); /*0x6e6fa9*/
    v2 += -1 - v2 / 2; /*0x6e6fb1*/
    goto LABEL_12; /*0x6e6fb1*/
  }
  if ( v3 ) /*0x6e6fc9*/
  {
    MEMORY[0xB0E850] = (int)&v5[2 * (v2 / 2)]; /*0x6e6fcb*/
    return AbstractClass::IsTechnoType(*(void **)(v3 + 4)); /*0x6e6fcb*/
  }
  return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6fc5*/

}
double BuildingLoadQueue::FindBuilding(...) { return 0; }

  int v2; // ecx
  int v3; // edx
  int v4; // ebx
  unsigned int *v5; // edi
  int v6; // esi
  void ***v7; // eax

  if ( *((unsigned char *)this + 4) != 52 ) /*0x6e7a87*/
    return 0; /*0x6e7b48*/
  v2 = MEMORY[0xB0E844]; /*0x6e7a8d*/
  if ( !MEMORY[0xB0E844] ) /*0x6e7a97*/
    goto LABEL_13; /*0x6e7a97*/
  v3 = MEMORY[0xB0E850]; /*0x6e7a99*/
  if ( MEMORY[0xB0E850] && *(unsigned int *)MEMORY[0xB0E850] == *(unsigned int *)this ) /*0x6e7aa9*/
  {
LABEL_17:
    v7 = (void ***)(v3 + 4); /*0x6e7b43*/
    return __RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &BuildingClass `RTTI Type Descriptor', 0); /*0x6e7b46*/
  }
  if ( !MEMORY[0xB0E84C] ) /*0x6e7ab6*/
  {
    qsort(MEMORY[0xB0E840], MEMORY[0xB0E844], 8u, CompareFunction); /*0x6e7ac7*/
    v2 = MEMORY[0xB0E844]; /*0x6e7acc*/
    MEMORY[0xB0E850] = 0; /*0x6e7ad5*/
    MEMORY[0xB0E84C] = 1; /*0x6e7adf*/
  }
  v4 = *(unsigned int *)this; /*0x6e7ae6*/
  v5 = MEMORY[0xB0E840]; /*0x6e7ae8*/
  if ( v2 <= 0 ) /*0x6e7af0*/
    goto LABEL_13; /*0x6e7af0*/
  while ( 1 ) /*0x6e7af9*/
  {
    v6 = v5[2 * (v2 / 2)]; /*0x6e7af9*/
    v3 = (int)&v5[2 * (v2 / 2)]; /*0x6e7afc*/
    if ( v6 <= v4 ) /*0x6e7b01*/
      break; /*0x6e7b01*/
    v2 /= 2; /*0x6e7b03*/
LABEL_12:
    if ( v2 <= 0 ) /*0x6e7b15*/
      goto LABEL_13; /*0x6e7b15*/
  }
  if ( v6 != v4 ) /*0x6e7b07*/
  {
    v5 = (unsigned int *)(v3 + 8); /*0x6e7b09*/
    v2 += -1 - v2 / 2; /*0x6e7b11*/
    goto LABEL_12; /*0x6e7b11*/
  }
  if ( v3 ) /*0x6e7b3b*/
  {
    MEMORY[0xB0E850] = (int)&v5[2 * (v2 / 2)]; /*0x6e7b3d*/
    goto LABEL_17; /*0x6e7b3d*/
  }
LABEL_13:
  v7 = (void ***)&unk_B78828; /*0x6e7b17*/
  return __RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &BuildingClass `RTTI Type Descriptor', 0); /*0x6e7b37*/

}
double BuildingLoadQueue::GetNext(...) { return 0; }

  char v2; // al
  int v3; // eax
  void ***v4; // eax
  int v6; // ecx
  __int16 v7[4]; // [esp+4h] [ebp-8h] BYREF

  v2 = *((unsigned char *)this + 4); /*0x6e6e26*/
  if ( v2 == 52 ) /*0x6e6e2b*/
  {
    if ( MEMORY[0xB0E844] ) /*0x6e6e39*/
    {
      v3 = MEMORY[0xB0E850]; /*0x6e6e3b*/
      if ( MEMORY[0xB0E850] && *(unsigned int *)MEMORY[0xB0E850] == *(unsigned int *)this ) /*0x6e6e4c*/
        goto LABEL_10; /*0x6e6e4c*/
      if ( MEMORY[0xB0E844] ) /*0x6e6e50*/
      {
        if ( !MEMORY[0xB0E84C] ) /*0x6e6e59*/
        {
          qsort(MEMORY[0xB0E840], MEMORY[0xB0E844], 8u, CompareFunction); /*0x6e6e6a*/
          MEMORY[0xB0E850] = 0; /*0x6e6e78*/
          MEMORY[0xB0E84C] = 1; /*0x6e6e82*/
        }
        *(unsigned int *)v7 = *(unsigned int *)this; /*0x6e6e96*/
        v3 = BinaryArraySearch(v7); /*0x6e6e9a*/
        if ( v3 ) /*0x6e6ea1*/
        {
          MEMORY[0xB0E850] = v3; /*0x6e6ea3*/
LABEL_10:
          v4 = (void ***)(v3 + 4); /*0x6e6ea8*/
          return (void *)__RTDynamicCast( /*0x6e6ecf*/
                           *v4,
                           0,
                           &AbstractClass `RTTI Type Descriptor',
                           &AbstractClass `RTTI Type Descriptor',
                           0);
        }
      }
    }
    v4 = (void ***)&unk_B78828; /*0x6e6ead*/
    return (void *)__RTDynamicCast( /*0x6e6ead*/
                     *v4,
                     0,
                     &AbstractClass `RTTI Type Descriptor',
                     &AbstractClass `RTTI Type Descriptor',
                     0);
  }
  if ( v2 != 11 ) /*0x6e6ed2*/
    return 0; /*0x6e6f0f*/
  v6 = *(unsigned int *)this; /*0x6e6ed4*/
  v7[0] = v6 % 1000; /*0x6e6ee5*/
  v7[1] = v6 / 1000; /*0x6e6f00*/
  return CellCoord::To_CellObj(&MEMORY[0x87F7E8], v7); /*0x6e6ecb*/

}
double ButtonClass::SetState(...) { return 0; }

  *(this + 92) = (unsigned char)aP1; /*0x69dea4*/
  return (char)aP1; /*0x69dea7*/

}
double CDTimerClass::TimeRemaining(...) { return 0; }

  int v1; // edx
  int result; // eax

  v1 = *this; /*0x426630*/
  result = *((char *)this + 2); /*0x426632*/
  if ( *this != -1 ) /*0x426638*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 >= result ) /*0x426644*/
      return 0; /*0x426649*/
    else
      result -= (int)MEMORY[0xA8ED84] - v1; /*0x426646*/
  }
  return result; /*0x426648*/

}
double CaptureManager::FreeAll(...) { return 0; }
// 0x433c90
double Char::Swap(...) { return 0; }

  char result; // al

  result = *(this + 65); /*0x433c94*/
  *(this + 65) = (unsigned char)aP1; /*0x433c97*/
  return result; /*0x433c9a*/

}
  char result; // al

  result = *(this + 65); /*0x433c94*/
  *(this + 65) = (unsigned char)aP1; /*0x433c97*/
  return result; /*0x433c9a*/

}
double ChatEvent::ProcessStrings(...) { return 0; }

  unsigned int *v6; // eax
  int v7; // ecx
  unsigned int *v8; // ebx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // edx
  unsigned __int8 *v16; // esi
  unsigned int *v17; // edi
  int v18; // eax
  unsigned __int8 *v19; // esi
  int v20; // edx
  int v21; // edx
  unsigned int *v22; // eax
  unsigned int *v23; // esi
  unsigned int *v24; // edi
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // esi
  int v31; // ecx
  int v32; // edx
  int v33; // edx
  int v34; // eax
  char **v35; // ebx
  int v36; // esi
  const void *v37; // esi
  int v38; // eax
  int v39; // edx
  int v40; // esi
  int v41; // edi
  unsigned int *v42; // edi
  int v43; // ebx
  double v44; // st7
  bool v45; // c0
  bool v46; // c3
  int v47; // esi
  char **v48; // eax
  char **v49; // esi
  char ***v50; // edx
  char *v51; // eax
  int v52; // esi
  int v53; // eax
  double v54; // st7
  int *v55; // ebx
  int v56; // edi
  void *v57; // edi
  unsigned int v58; // edx
  int *v59; // edi
  int v60; // ebx
  int v61; // esi
  int v62; // edx
  int v63; // ecx
  int v64; // eax
  char *v66; // [esp+10h] [ebp-65Ch]
  void *v67; // [esp+14h] [ebp-658h] BYREF
  void *Block; // [esp+18h] [ebp-654h]
  __int64 v69; // [esp+1Ch] [ebp-650h]
  unsigned char v70[6]; // [esp+24h] [ebp-648h]
  float v71; // [esp+2Ch] [ebp-640h]
  unsigned int *v72; // [esp+30h] [ebp-63Ch]
  int v73; // [esp+34h] [ebp-638h]
  unsigned int v74[10]; // [esp+38h] [ebp-634h] BYREF
  int v75; // [esp+60h] [ebp-60Ch]
  unsigned int v76[193]; // [esp+64h] [ebp-608h] BYREF
  unsigned int v77[193]; // [esp+368h] [ebp-304h] BYREF

  v69 = *(unsigned long long *)a3; /*0x6b975c*/
  *(unsigned int *)v70 = *(unsigned int *)(a3 + 8); /*0x6b9775*/
  *(unsigned short *)&v70[4] = *(unsigned short *)(a3 + 12); /*0x6b9782*/
  qmemcpy(v74, (const void *)(a3 + 14), sizeof(v74)); /*0x6b978c*/
  v6 = __2_YAPAXI_Z(4 * (1 << SBYTE2(v74[3])) + 40); /*0x6b979c*/
  v7 = v74[0]; /*0x6b97a1*/
  v8 = v6; /*0x6b97a5*/
  v9 = v74[1]; /*0x6b97ab*/
  v6[2] = v74[2]; /*0x6b97af*/
  v10 = v74[4]; /*0x6b97b2*/
  *v8 = v7; /*0x6b97b6*/
  LOWORD(v7) = v74[3]; /*0x6b97b8*/
  v8[4] = v10; /*0x6b97bd*/
  v11 = v74[7]; /*0x6b97c0*/
  *((unsigned short *)v8 + 6) = v7; /*0x6b97c4*/
  v12 = v74[5]; /*0x6b97c8*/
  v8[7] = v11; /*0x6b97cc*/
  v13 = v74[8]; /*0x6b97cf*/
  v8[1] = v9; /*0x6b97d3*/
  LOWORD(v9) = HIWORD(v74[3]); /*0x6b97d6*/
  v8[5] = v12; /*0x6b97db*/
  v14 = v74[9]; /*0x6b97de*/
  v8[8] = v13; /*0x6b97e6*/
  *((unsigned short *)v8 + 7) = v9; /*0x6b97e9*/
  v15 = v74[6]; /*0x6b97ed*/
  v13 *= 4; /*0x6b97f1*/
  v8[9] = v14; /*0x6b97f4*/
  v8[6] = v15; /*0x6b97f9*/
  qmemcpy(v8 + 10, (const void *)(a3 + 54), v13); /*0x6b9807*/
  Block = (void *)256; /*0x6b980b*/
  v16 = (unsigned __int8 *)(v8 + 10); /*0x6b981c*/
  v17 = v76; /*0x6b9821*/
  v66 = (char *)(v13 + a3 + 54); /*0x6b9825*/
  do /*0x6b9881*/
  {
    v18 = *v16; /*0x6b9831*/
    v19 = v16 + 1; /*0x6b9833*/
    v20 = *v19; /*0x6b983e*/
    v16 = v19 + 3; /*0x6b9841*/
    v17 = (unsigned int *)((char *)v17 + 2); /*0x6b9844*/
    v21 = v20 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0]; /*0x6b9857*/
    LOWORD(v18) = v21 | (v18 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]); /*0x6b985f*/
    LOWORD(v21) = (unsigned __int8)(*(v16 - 2) >> MEMORY[0x8A0DD4]); /*0x6b986c*/
    *((unsigned short *)v17 - 1) = (v21 << MEMORY[0x8A0DD0]) | v18; /*0x6b9874*/
    Block = (char *)Block - 1; /*0x6b987d*/
  }
  while ( Block ); /*0x6b9881*/
  Block = __2_YAPAXI_Z(*(unsigned int *)((char *)&v69 + 2) - *(unsigned int *)&v70[2]); /*0x6b9899*/
  qmemcpy(Block, v66, *(unsigned int *)((char *)&v69 + 2) - *(unsigned int *)&v70[2]); /*0x6b98a6*/
  v22 = __2_YAPAXI_Z(0x20u); /*0x6b98af*/
  v23 = v22; /*0x6b98b4*/
  v24 = 0; /*0x6b98b6*/
  if ( v22 ) /*0x6b98bd*/
  {
    v25 = v74[2]; /*0x6b98bf*/
    v26 = v74[1]; /*0x6b98c3*/
    v22[2] = v74[2]; /*0x6b98c7*/
    v22[1] = v26; /*0x6b98d4*/
    v22[3] = 0; /*0x6b98df*/
    *v22 = &XSurface_Vtable; /*0x6b98e2*/
    v22[4] = a5; /*0x6b98e8*/
    Buffer::Init(v22 + 5, 0, a5 * v26 * v25); /*0x6b98eb*/
    v24 = v23; /*0x6b98f0*/
    *v23 = &BSurface_Vtable; /*0x6b98f2*/
    v72 = v23; /*0x6b98f8*/
  }
  else
  {
    v72 = 0; /*0x6b98fe*/
  }
  v73 = (*(int (**)(unsigned int *, unsigned int, unsigned int))(*v24 + 92))(v24, 0, 0); /*0x6b990f*/
  v27 = (*(int (**)(unsigned int *))(*v24 + 116))(v24) / 2; /*0x6b992c*/
  v28 = v74[1] - (v74[1] & 3) + 4; /*0x6b992e*/
  LODWORD(v69) = v27; /*0x6b9931*/
  if ( v74[2] > 0 ) /*0x6b9937*/
  {
    v66 = 0; /*0x6b993f*/
    v29 = -v28; /*0x6b9947*/
    v75 = -v28; /*0x6b994a*/
    v30 = v28 * (v74[2] - 1); /*0x6b994e*/
    v71 = *(float *)&v74[2]; /*0x6b9955*/
    do /*0x6b99cf*/
    {
      v31 = 0; /*0x6b9959*/
      if ( v74[1] > 0 ) /*0x6b995f*/
      {
        do /*0x6b99ac*/
        {
          v32 = v30 + v31; /*0x6b9968*/
          if ( a5 == 2 ) /*0x6b996e*/
            *(unsigned short *)(v73 + 2 * (unsigned int)&v66[v31]) = *((unsigned short *)v76 + *((unsigned __int8 *)Block + v32)); /*0x6b9988*/
          else
            *(unsigned short *)(v73 + 2 * (unsigned int)&v66[v31]) = *((unsigned __int8 *)Block + v32); /*0x6b99a1*/
          ++v31; /*0x6b99a9*/
        }
        while ( v31 < v74[1] ); /*0x6b99ac*/
        v29 = v75; /*0x6b99ae*/
        v24 = v72; /*0x6b99b2*/
        v27 = v69; /*0x6b99b6*/
      }
      v30 += v29; /*0x6b99be*/
      v66 += v27; /*0x6b99c2*/
      --LODWORD(v71); /*0x6b99cb*/
    }
    while ( v71 != 0.0 ); /*0x6b99cf*/
  }
  if ( a5 == 1 ) /*0x6b99d9*/
  {
    qmemcpy(&v77[1], v8 + 10, 0x300u); /*0x6b99ea*/
    v24 = v72; /*0x6b99ec*/
  }
  v33 = *v24; /*0x6b99f0*/
  v77[0] = v24; /*0x6b99f4*/
  (*(void (**)(unsigned int *))(v33 + 96))(v24); /*0x6b99fb*/
  __3_YAXPAX_Z(v8); /*0x6b99ff*/
  __3_YAXPAX_Z(Block); /*0x6b9a09*/
  String::Assign((char **)&v67, a2); /*0x6b9a1d*/
  String::ToLower((const char **)&v67); /*0x6b9a26*/
  v34 = *(unsigned int *)(this + 4); /*0x6b9a2b*/
  v35 = 0; /*0x6b9a2e*/
  v76[0] = 0; /*0x6b9a32*/
  if ( v34 ) /*0x6b9a36*/
  {
    v36 = *(unsigned int *)(*(unsigned int *)this /*0x6b9a53*/
                    + 4 * ((*(int (**)(void **))(this + 24))(&v67) & ((1 << *(unsigned int *)(this + 12)) - 1)));
    if ( v36 ) /*0x6b9a58*/
    {
      while ( !String::Compare((const char **)v36, (const char **)&v67) ) /*0x6b9a6c*/
      {
        v36 = *(unsigned int *)(v36 + 776); /*0x6b9a6e*/
        if ( !v36 ) /*0x6b9a76*/
          goto LABEL_40; /*0x6b9a76*/
      }
      v37 = (const void *)(v36 + 4); /*0x6b9a85*/
      if ( v37 ) /*0x6b9a8a*/
        qmemcpy(v76, v37, sizeof(v76)); /*0x6b9a95*/
      v38 = *(unsigned int *)(this + 4); /*0x6b9a97*/
      if ( !v38 ) /*0x6b9a9e*/
        goto LABEL_38; /*0x6b9a9e*/
      v39 = *(unsigned int *)(this + 8); /*0x6b9aa4*/
      v69 = (unsigned int)v39; /*0x6b9ab4*/
      v71 = (double)(unsigned int)(v38 - 1) / (double)v39; /*0x6b9ac4*/
      v40 = (*(int (**)(void **))(this + 24))(&v67) & ((1 << *(unsigned int *)(this + 12)) - 1); /*0x6b9ad6*/
      v41 = *(unsigned int *)(*(unsigned int *)this + 4 * v40); /*0x6b9adb*/
      if ( !v41 ) /*0x6b9ae0*/
        goto LABEL_38; /*0x6b9ae0*/
      if ( String::Compare((const char **)v41, (const char **)&v67) ) /*0x6b9aed*/
      {
        v42 = *(unsigned int **)(*(unsigned int *)this + 4 * v40); /*0x6b9af9*/
        v43 = v42[194]; /*0x6b9afe*/
        if ( v42 ) /*0x6b9b04*/
        {
          DeleteAndZero(*(void ***)(*(unsigned int *)this + 4 * v40)); /*0x6b9b08*/
          __3_YAXPAX_Z(v42); /*0x6b9b0e*/
        }
        v44 = v71; /*0x6b9b19*/
        *(unsigned int *)(*(unsigned int *)this + 4 * v40) = v43; /*0x6b9b1d*/
        v45 = v44 < *(double *)(this + 32); /*0x6b9b23*/
        v46 = v44 == *(double *)(this + 32); /*0x6b9b23*/
        --*(unsigned int *)(this + 4); /*0x6b9b27*/
        if ( !v45 && !v46 ) /*0x6b9b2c*/
          goto LABEL_38; /*0x6b9b2f*/
      }
      else
      {
        v47 = *(unsigned int *)(v41 + 776); /*0x6b9b33*/
        if ( v47 ) /*0x6b9b3b*/
        {
          while ( !String::Compare((const char **)v47, (const char **)&v67) ) /*0x6b9b4b*/
          {
            v41 = v47; /*0x6b9b4d*/
            v47 = *(unsigned int *)(v47 + 776); /*0x6b9b4f*/
            if ( !v47 ) /*0x6b9b57*/
              goto LABEL_36; /*0x6b9b57*/
          }
          *(unsigned int *)(v41 + 776) = *(unsigned int *)(v47 + 776); /*0x6b9b61*/
          --*(unsigned int *)(this + 4); /*0x6b9b6d*/
          DeleteAndZero((void **)v47); /*0x6b9b74*/
          __3_YAXPAX_Z((void *)v47); /*0x6b9b7a*/
        }
LABEL_36:
        if ( v71 > *(double *)(this + 32) ) /*0x6b9b8e*/
          goto LABEL_38; /*0x6b9b8e*/
      }
      HashTable::RebuildEx((unsigned int *)this); /*0x6b9b92*/
LABEL_38:
      v35 = 0; /*0x6b9b97*/
      if ( v76[0] ) /*0x6b9b9f*/
        (**(void (***)(unsigned int, int))v76[0])(v76[0], 1); /*0x6b9ba5*/
    }
  }
LABEL_40:
  v48 = (char **)__2_YAPAXI_Z(0x30Cu); /*0x6b9ba7*/
  v49 = v48; /*0x6b9bb1*/
  if ( v48 ) /*0x6b9bb8*/
  {
    unknown_libname_73(v48); /*0x6b9bbc*/
    v49[1] = 0; /*0x6b9bc1*/
    v35 = v49; /*0x6b9bc4*/
  }
  String::Reassign(v35, (const char **)&v67); /*0x6b9bcd*/
  qmemcpy(v35 + 1, v77, 0x304u); /*0x6b9be1*/
  v35[194] = 0; /*0x6b9be9*/
  v50 = (char ***)(*(unsigned int *)this /*0x6b9c02*/
                 + 4 * ((*(int (**)(void **))(this + 24))(&v67) & ((1 << *(unsigned int *)(this + 12)) - 1)));
  v51 = (char *)*v50; /*0x6b9c05*/
  *v50 = v35; /*0x6b9c07*/
  if ( v51 ) /*0x6b9c0b*/
    v35[194] = v51; /*0x6b9c0d*/
  v52 = *(unsigned int *)(this + 8); /*0x6b9c16*/
  v53 = *(unsigned int *)(this + 4) + 1; /*0x6b9c19*/
  v69 = (unsigned int)v53; /*0x6b9c1e*/
  *(unsigned int *)(this + 4) = v53; /*0x6b9c22*/
  v54 = (double)v69; /*0x6b9c25*/
  v69 = (unsigned int)v52; /*0x6b9c29*/
  if ( v54 / (double)v52 >= *(double *)(this + 40) && *(unsigned char *)(this + 20) != 1 ) /*0x6b9c47*/
  {
    v55 = *(int **)this; /*0x6b9c50*/
    v56 = *(unsigned int *)(this + 12) + 1; /*0x6b9c56*/
    LODWORD(v69) = *(unsigned int *)this; /*0x6b9c57*/
    *(unsigned int *)(this + 8) = 2 * v52; /*0x6b9c5b*/
    *(unsigned int *)(this + 12) = v56; /*0x6b9c65*/
    v57 = __2_YAPAXI_Z(8 * v52); /*0x6b9c71*/
    v58 = 4 * *(unsigned int *)(this + 8); /*0x6b9c76*/
    *(unsigned int *)this = v57; /*0x6b9c7d*/
    memset(v57, 0, v58); /*0x6b9c83*/
    if ( v52 > 0 ) /*0x6b9c8e*/
    {
      v59 = v55; /*0x6b9c90*/
      v60 = v52; /*0x6b9c92*/
      do /*0x6b9ccd*/
      {
        v61 = *v59; /*0x6b9c94*/
        if ( *v59 ) /*0x6b9c94*/
        {
          do /*0x6b9cc7*/
          {
            v62 = (*(int (**)(int))(this + 24))(v61) & ((1 << *(unsigned int *)(this + 12)) - 1); /*0x6b9caa*/
            v63 = *(unsigned int *)(*(unsigned int *)this + 4 * v62); /*0x6b9caf*/
            *(unsigned int *)(*(unsigned int *)this + 4 * v62) = v61; /*0x6b9cb5*/
            v64 = *(unsigned int *)(v61 + 776); /*0x6b9cb7*/
            *(unsigned int *)(v61 + 776) = v63; /*0x6b9cbd*/
            v61 = v64; /*0x6b9cc3*/
          }
          while ( v64 ); /*0x6b9cc7*/
        }
        ++v59; /*0x6b9cc9*/
        --v60; /*0x6b9ccc*/
      }
      while ( v60 ); /*0x6b9ccd*/
      v55 = (int *)v69; /*0x6b9ccf*/
    }
    __3_YAXPAX_Z(v55); /*0x6b9cd4*/
  }
  DeleteAndZero(&v67); /*0x6b9ce0*/
  return 1; /*0x6b9ce5*/

}
double Checksum::AddString(...) { return 0; }

  int result; // eax

  if ( aP1 ) /*0x4a1db9*/
    return Checksummer::Add_Buffer(this, (unsigned __int8 *)aP1, (IUnknown *)strlen(aP1->__pad_0)); /*0x4a1dcc*/
  return result; /*0x4a1dd2*/

}
double Checksummer::Add_Buffer(...) { return 0; }

  unsigned __int8 *v3; // ebp
  int v5; // edi
  INILinkNode *v6; // eax
  unsigned int v7; // ecx
  unsigned int i; // eax
  unsigned __int8 *v9; // ecx
  unsigned int v10; // eax
  int v11; // edi
  INILinkNode *v12; // eax
  unsigned __int8 v13; // cl
  int v14; // edi
  INILinkNode *v15; // eax
  unsigned int j; // eax
  unsigned int v17; // eax
  IUnknown **p_aP2; // ecx
  unsigned int v19; // eax
  INILinkNode *v20; // eax
  unsigned int k; // eax
  unsigned __int8 *v22; // eax
  unsigned int v23; // esi
  Pipe *v24; // eax
  unsigned int v25; // esi
  int v26; // ecx
  unsigned int v28; // [esp-4h] [ebp-14h]

  v3 = a1; /*0x4a1de2*/
  if ( a1 ) /*0x4a1dee*/
  {
    v5 = (int)aP2; /*0x4a1df4*/
    if ( (int)aP2 > 0 ) /*0x4a1dfa*/
    {
      do /*0x4a1e59*/
      {
        v6 = (INILinkNode *)*(this + 1); /*0x4a1e00*/
        if ( !v6 || (unsigned int)v6 >= 4 ) /*0x4a1e0e*/
          break; /*0x4a1e0e*/
        *((unsigned char *)this + (unsigned int)v6 + 8) = *v3; /*0x4a1e13*/
        v7 = *(this + 1) + 1; /*0x4a1e1a*/
        *(this + 1) = v7; /*0x4a1e1d*/
        if ( v7 == 4 ) /*0x4a1e22*/
        {
          *((unsigned char *)this + 12) = 4; /*0x4a1e26*/
          for ( i = *(this + 1) + 1; i < 4; ++i ) /*0x4a1e2f*/
            *((unsigned char *)this + i + 8) = *((unsigned char *)this + 8); /*0x4a1e34*/
          v28 = *this; /*0x4a1e42*/
          a1 = (unsigned __int8 *)*(this + 2); /*0x4a1e47*/
          *this = CRC32::Compute((unsigned __int8 *)&a1, 4, v28); /*0x4a1e50*/
          *(this + 1) = 0; /*0x4a1e52*/
        }
        ++v3; /*0x4a1e55*/
        --v5; /*0x4a1e56*/
      }
      while ( v5 > 0 ); /*0x4a1e59*/
      if ( (unsigned int)v5 >> 2 ) /*0x4a1e60*/
      {
        a1 = (unsigned __int8 *)((unsigned int)v5 >> 2); /*0x4a1e68*/
        aP2 = (IUnknown *)(v5 - 4 * ((unsigned int)v5 >> 2)); /*0x4a1e71*/
        do /*0x4a1eae*/
        {
          v9 = v3; /*0x4a1e77*/
          v10 = ~*this; /*0x4a1e79*/
          v11 = 4; /*0x4a1e7b*/
          do /*0x4a1e9c*/
          {
            v10 = CRC32_Table[*v9++ ^ (unsigned __int8)v10] ^ (v10 >> 8); /*0x4a1e98*/
            --v11; /*0x4a1e9b*/
          }
          while ( v11 ); /*0x4a1e9c*/
          *this = ~v10; /*0x4a1ea0*/
          v3 += 4; /*0x4a1ea6*/
          --a1; /*0x4a1eaa*/
        }
        while ( a1 ); /*0x4a1eae*/
        v5 = (int)aP2; /*0x4a1eb0*/
      }
      if ( v5 > 0 ) /*0x4a1eb8*/
      {
        a1 = (unsigned __int8 *)v5; /*0x4a1ebe*/
        do /*0x4a1f3e*/
        {
          v12 = (INILinkNode *)*(this + 1); /*0x4a1ec2*/
          v13 = *v3; /*0x4a1ec5*/
          if ( !v12 ) /*0x4a1eca*/
            *(this + 2) = 0; /*0x4a1ecc*/
          *((unsigned char *)this + (unsigned int)v12 + 8) = v13; /*0x4a1ecf*/
          v14 = 4; /*0x4a1ed7*/
          v15 = (INILinkNode *)(*(this + 1) + 1); /*0x4a1edc*/
          *(this + 1) = (unsigned int)v15; /*0x4a1ede*/
          if ( v15 == (INILinkNode *)4 ) /*0x4a1ee3*/
          {
            *((unsigned char *)this + 12) = 4; /*0x4a1ee7*/
            for ( j = *(this + 1) + 1; j < 4; ++j ) /*0x4a1ef0*/
              *((unsigned char *)this + j + 8) = *((unsigned char *)this + 8); /*0x4a1ef5*/
            v17 = *this; /*0x4a1f01*/
            aP2 = (IUnknown *)*(this + 2); /*0x4a1f03*/
            p_aP2 = &aP2; /*0x4a1f07*/
            v19 = ~v17; /*0x4a1f0b*/
            do /*0x4a1f29*/
            {
              v19 = CRC32_Table[*(unsigned __int8 *)p_aP2 ^ (unsigned __int8)v19] ^ (v19 >> 8); /*0x4a1f25*/
              p_aP2 = (IUnknown **)((char *)p_aP2 + 1); /*0x4a1f27*/
              --v14; /*0x4a1f28*/
            }
            while ( v14 ); /*0x4a1f29*/
            *this = ~v19; /*0x4a1f2f*/
            *(this + 1) = 0; /*0x4a1f31*/
          }
          ++v3; /*0x4a1f38*/
          --a1; /*0x4a1f3a*/
        }
        while ( a1 ); /*0x4a1f3e*/
      }
    }
  }
  v20 = (INILinkNode *)*(this + 1); /*0x4a1f40*/
  if ( !v20 ) /*0x4a1f45*/
    return *this; /*0x4a1fa0*/
  *((unsigned char *)this + (unsigned int)v20 + 8) = (unsigned char)v20; /*0x4a1f49*/
  for ( k = *(this + 1) + 1; k < 4; ++k ) /*0x4a1f54*/
    *((unsigned char *)this + k + 8) = *((unsigned char *)this + 8); /*0x4a1f59*/
  v22 = (unsigned __int8 *)*(this + 2); /*0x4a1f63*/
  v23 = *this; /*0x4a1f66*/
  a1 = v22; /*0x4a1f68*/
  v24 = (Pipe *)&a1; /*0x4a1f6c*/
  v25 = ~v23; /*0x4a1f70*/
  v26 = 4; /*0x4a1f72*/
  do /*0x4a1f93*/
  {
    v25 = CRC32_Table[(unsigned __int8)v24->__pad_0[0] ^ (unsigned __int8)v25] ^ (v25 >> 8); /*0x4a1f8f*/
    v24 = (Pipe *)((char *)v24 + 1); /*0x4a1f91*/
    --v26; /*0x4a1f92*/
  }
  while ( v26 ); /*0x4a1f93*/
  return ~v25; /*0x4a1f99*/

}
double Checksummer::Add_double(...) { return 0; }

  return Checksummer::Add_Buffer((unsigned int *)this, (unsigned __int8 *)&aP1, (IUnknown *)8); /*0x4a1dac*/

}
double Checksummer::Add_float(...) { return 0; }

  return Checksummer::Add_Buffer(this, (unsigned __int8 *)&aP1, (IUnknown *)4); /*0x4a1d84*/

}
double Cliff::ProcessTransitions(...) { return 0; }

  MapClass *v2; // ebp
  char AdjacencyFlags; // al
  char v4; // bl
  int v5; // edi
  unsigned int v6; // eax
  MouseClass *v7; // eax
  unsigned int v8; // eax
  MouseClass *v9; // eax
  unsigned int v10; // eax
  MouseClass *v11; // eax
  unsigned int v12; // eax
  MouseClass *v13; // eax
  BombClass *TileDataField14; // eax
  ObjectClass *v15; // edi
  ObjectClass *v17; // edx
  signed int i; // esi
  MapClass *NeighbourContent; // eax
  MapClass *v20; // [esp-4h] [ebp-24h]
  bool v21; // [esp+13h] [ebp-Dh]
  MouseClass *v22; // [esp+14h] [ebp-Ch]
  MouseClass *v23; // [esp+14h] [ebp-Ch]
  MouseClass *v24; // [esp+14h] [ebp-Ch]
  MouseClass *v25; // [esp+14h] [ebp-Ch]

  v2 = aP0; /*0x579015*/
  v21 = 0; /*0x579022*/
  AdjacencyFlags = Cell::GetAdjacencyFlags((MouseClass *)aP0); /*0x579027*/
  v4 = AdjacencyFlags; /*0x57902c*/
  v5 = AdjacencyFlags & 0xA0; /*0x579030*/
  if ( v5 == 160 ) /*0x57903c*/
    v21 = (AdjacencyFlags & 0x11) == 17; /*0x579045*/
  if ( (AdjacencyFlags & 0x20) != 0 ) /*0x57904d*/
  {
    v22 = *(MouseClass **)&v2->__pad_18[12]; /*0x579052*/
    HIWORD(aP0) = HIWORD(v22); /*0x57905e*/
    LOWORD(aP0) = (unsigned short)v22 + 1; /*0x579063*/
    v6 = (__int16)((unsigned short)v22 + 1) + (SHIWORD(v22) << 9); /*0x579071*/
    if ( v6 >= 0x40000 || (v7 = *(MouseClass **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v6)) == 0 ) /*0x579087*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x57908d*/
      v7 = (MouseClass *)g_CellClassArray; /*0x579092*/
    }
    if ( (Cell::GetAdjacencyFlags(v7) & 2) != 0 ) /*0x5790a1*/
      v21 = 1; /*0x5790a3*/
  }
  if ( (v4 & 2) != 0 ) /*0x5790ab*/
  {
    v23 = *(MouseClass **)&v2->__pad_18[12]; /*0x5790b0*/
    HIWORD(aP0) = HIWORD(v23); /*0x5790bc*/
    LOWORD(aP0) = (unsigned short)v23 - 1; /*0x5790c1*/
    v8 = (__int16)((unsigned short)v23 - 1) + (SHIWORD(v23) << 9); /*0x5790cf*/
    if ( v8 >= 0x40000 || (v9 = *(MouseClass **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v8)) == 0 ) /*0x5790e5*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x5790eb*/
      v9 = (MouseClass *)g_CellClassArray; /*0x5790f0*/
    }
    if ( (Cell::GetAdjacencyFlags(v9) & 0x20) != 0 ) /*0x5790ff*/
      v21 = 1; /*0x579101*/
  }
  if ( (v4 & 8) != 0 ) /*0x579109*/
  {
    v24 = *(MouseClass **)&v2->__pad_18[12]; /*0x57910e*/
    aP0 = (MapClass *)&v24[-1].__pad_5568[2728]; /*0x57911e*/
    v10 = (__int16)v24 + ((__int16)(HIWORD(v24) - 1) << 9); /*0x57912c*/
    if ( v10 >= 0x40000 || (v11 = *(MouseClass **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v10)) == 0 ) /*0x579142*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x579148*/
      v11 = (MouseClass *)g_CellClassArray; /*0x57914d*/
    }
    if ( (Cell::GetAdjacencyFlags(v11) & 0x80u) != 0 ) /*0x57915c*/
      v21 = 1; /*0x57915e*/
  }
  if ( v4 < 0 ) /*0x579166*/
  {
    v25 = *(MouseClass **)&v2->__pad_18[12]; /*0x57916b*/
    aP0 = (MapClass *)&v25->__pad_5568[43672]; /*0x57917b*/
    v12 = (__int16)v25 + ((__int16)(HIWORD(v25) + 1) << 9); /*0x579189*/
    if ( v12 >= 0x40000 || (v13 = *(MouseClass **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v12)) == 0 ) /*0x57919f*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x5791a5*/
      v13 = (MouseClass *)g_CellClassArray; /*0x5791aa*/
    }
    if ( (Cell::GetAdjacencyFlags(v13) & 8) != 0 ) /*0x5791b9*/
      v21 = 1; /*0x5791bb*/
  }
  if ( (v4 & 0x11) == 0x11 && ((v4 & 0xA) != 0xA || (v4 & 0xE0) != 0) && (v5 != 160 || (v4 & 0xE) != 0) ) /*0x5791e4*/
    v21 = 1; /*0x5791e6*/
  if ( (v4 & 0x44) == 0x44 && ((v4 & 0x28) != 0x28 || (v4 & 0x83) != 0) && ((v4 & 0x82) != 0x82 || (v4 & 0x38) != 0) ) /*0x579213*/
    v21 = 1; /*0x579215*/
  if ( (v4 & 0x2C) == 0x24 /*0x57926f*/
    || (v4 & 0xA1) == 0x21
    || (v4 & 0x1A) == 0x12
    || (v4 & 0xC2) == 0x42
    || (v4 & 0xB) == 9
    || (v4 & 0x68) == 0x48
    || (v4 & 0x86) == 0x84
    || (v4 & 0xB0) == 0x90 )
  {
    v21 = 1; /*0x579271*/
  }
  if ( (v4 & 0x88) == 0x88 || (v4 & 0x22) == 0x22 || v21 ) /*0x579291*/
  {
    aP0 = *(MapClass **)&v2->__pad_18[12]; /*0x5792a0*/
    TileDataField14 = (BombClass *)MapClass::GetTileDataField14((MapResourceClass *)&aP0); /*0x5792a4*/
    v15 = (ObjectClass *)aP1; /*0x5792a9*/
    if ( (int)TileDataField14 > 0 && TileDataField14 != aP1 && aP1 != (BombClass *)-1 ) /*0x5792b8*/
      return 0; /*0x5792c3*/
    v17 = *(ObjectClass **)&v2->__pad_18[12]; /*0x5792cc*/
    v20 = (MapClass *)aP1; /*0x5792d6*/
    v2->__pad_10C[15] += 4; /*0x5792dd*/
    aP0 = (MapClass *)v17; /*0x5792e3*/
    MapClass::SetObstruction((__int16 *)&aP0, v20); /*0x5792e7*/
    for ( i = 0; i < 8; ++i ) /*0x5792ec*/
    {
      NeighbourContent = (MapClass *)Cell::GetNeighbourContent(v2, i); /*0x5792f2*/
      Cliff::ProcessTransitions(NeighbourContent, (BombClass *)v15); /*0x5792fc*/
    }
  }
  return 1; /*0x5792ba*/

}
double Conditions::CheckResult(...) { return 0; }

  unsigned int *v2; // ecx

  return DisplayClass::UpdateCellPassability(v2, (__int16 *)a1, aP1) != 0; /*0x653824*/

}
double Conflict::GetOwnerHouse(...) { return 0; }

  int v1; // eax

  v1 = *((unsigned int *)this + 3); /*0x76bfe0*/
  if ( v1 ) /*0x76bfe5*/
    return *(unsigned int *)(v1 + 36) - 1; /*0x76bfea*/
  else
    return 0; /*0x76bfec*/

}
double Coord2D::Add(...) { return 0; }

  int v3; // esi

  v3 = *(this + 1) + *(unsigned int *)&aP2->__pad_0[4]; /*0x437f21*/
  *(unsigned int *)aP1->__pad_0 = *this + *(unsigned int *)aP2->__pad_0; /*0x437f27*/
  *(unsigned int *)&aP1->__pad_0[4] = v3; /*0x437f29*/
  return aP1->__pad_0; /*0x437f2c*/

}
// 0x487f20
double Coord2D::Sub(...) { return 0; }

  int v3; // edx
  int v5; // ecx

  v3 = *this; /*0x487f24*/
  v5 = *(this + 1) - aP2->field_4; /*0x487f35*/
  *(unsigned int *)aP1->__pad_0 = v3 - aP2->field_0; /*0x487f38*/
  *(unsigned int *)&aP1->__pad_0[4] = v5; /*0x487f3a*/
  return (int *)aP1->__pad_0; /*0x487f37*/

}
  int v3; // edx
  int v5; // ecx

  v3 = *this; /*0x487f24*/
  v5 = *(this + 1) - aP2->field_4; /*0x487f35*/
  *(unsigned int *)aP1->__pad_0 = v3 - aP2->field_0; /*0x487f38*/
  *(unsigned int *)&aP1->__pad_0[4] = v5; /*0x487f3a*/
  return (int *)aP1->__pad_0; /*0x487f37*/

}
// 0x4a94f0
double CoordList::GetBounds(...) { return 0; }

  __int16 *v2; // edx
  int v3; // ebx
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  __int16 v7; // ax
  int v8; // ecx
  int v9; // esi
  int v10; // edi
  int v12; // [esp+10h] [ebp-4h]

  v2 = a1; /*0x4a94f1*/
  v3 = 512; /*0x4a94fa*/
  v4 = -512; /*0x4a94ff*/
  v5 = 512; /*0x4a9507*/
  v6 = -512; /*0x4a9509*/
  v12 = 0; /*0x4a950b*/
  if ( !a1 ) /*0x4a9515*/
    goto LABEL_17; /*0x4a9515*/
  while ( 1 ) /*0x4a9517*/
  {
    v7 = *v2; /*0x4a9517*/
    if ( *v2 == 0x7FFF && v2[1] == 0x7FFF ) /*0x4a9524*/
      break; /*0x4a9524*/
    v8 = v2[1]; /*0x4a9526*/
    if ( v4 <= v7 ) /*0x4a952f*/
      v4 = v7; /*0x4a9531*/
    if ( v3 >= v7 ) /*0x4a9535*/
      v3 = v7; /*0x4a9537*/
    if ( v6 <= v8 ) /*0x4a953b*/
      v6 = v2[1]; /*0x4a953d*/
    if ( v5 >= v8 ) /*0x4a9541*/
      v5 = v2[1]; /*0x4a9543*/
    v2 += 2; /*0x4a9545*/
  }
  v9 = v4 - v3; /*0x4a954a*/
  LOWORD(v12) = 1; /*0x4a9551*/
  if ( v9 + 1 >= 1 ) /*0x4a955b*/
    LOWORD(v12) = v9 + 1; /*0x4a955d*/
  v10 = v6 - v5; /*0x4a9562*/
  if ( v10 + 1 < 1 ) /*0x4a9569*/
  {
    HIWORD(v12) = 1; /*0x4a956b*/
LABEL_17:
    aP0->field_0 = v12; /*0x4a9570*/
    return &aP0->field_0; /*0x4a957f*/
  }
  HIWORD(v12) = v10 + 1; /*0x4a9582*/
  aP0->field_0 = v12; /*0x4a9592*/
  return &aP0->field_0; /*0x4a9578*/

}
  __int16 *v2; // edx
  int v3; // ebx
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  __int16 v7; // ax
  int v8; // ecx
  int v9; // esi
  int v10; // edi
  int v12; // [esp+10h] [ebp-4h]

  v2 = a1; /*0x4a94f1*/
  v3 = 512; /*0x4a94fa*/
  v4 = -512; /*0x4a94ff*/
  v5 = 512; /*0x4a9507*/
  v6 = -512; /*0x4a9509*/
  v12 = 0; /*0x4a950b*/
  if ( !a1 ) /*0x4a9515*/
    goto LABEL_17; /*0x4a9515*/
  while ( 1 ) /*0x4a9517*/
  {
    v7 = *v2; /*0x4a9517*/
    if ( *v2 == 0x7FFF && v2[1] == 0x7FFF ) /*0x4a9524*/
      break; /*0x4a9524*/
    v8 = v2[1]; /*0x4a9526*/
    if ( v4 <= v7 ) /*0x4a952f*/
      v4 = v7; /*0x4a9531*/
    if ( v3 >= v7 ) /*0x4a9535*/
      v3 = v7; /*0x4a9537*/
    if ( v6 <= v8 ) /*0x4a953b*/
      v6 = v2[1]; /*0x4a953d*/
    if ( v5 >= v8 ) /*0x4a9541*/
      v5 = v2[1]; /*0x4a9543*/
    v2 += 2; /*0x4a9545*/
  }
  v9 = v4 - v3; /*0x4a954a*/
  LOWORD(v12) = 1; /*0x4a9551*/
  if ( v9 + 1 >= 1 ) /*0x4a955b*/
    LOWORD(v12) = v9 + 1; /*0x4a955d*/
  v10 = v6 - v5; /*0x4a9562*/
  if ( v10 + 1 < 1 ) /*0x4a9569*/
  {
    HIWORD(v12) = 1; /*0x4a956b*/
LABEL_17:
    aP0->field_0 = v12; /*0x4a9570*/
    return &aP0->field_0; /*0x4a957f*/
  }
  HIWORD(v12) = v10 + 1; /*0x4a9582*/
  aP0->field_0 = v12; /*0x4a9592*/
  return &aP0->field_0; /*0x4a9578*/

}
double CountryCombo::IDToIndex(...) { return 0; }

  int v2; // eax

  if ( this == (void *)1697 ) /*0x4e3837*/
    return 0; /*0x4e3839*/
  if ( this == (void *)1296 ) /*0x4e3841*/
    return 1; /*0x4e3843*/
  if ( this == (void *)1299 ) /*0x4e384e*/
    return 2; /*0x4e3850*/
  if ( this == (void *)1310 ) /*0x4e385b*/
    return 3; /*0x4e385d*/
  if ( this == (void *)1300 ) /*0x4e3868*/
    return 4; /*0x4e386a*/
  if ( this == (void *)1311 ) /*0x4e3875*/
    return 5; /*0x4e3877*/
  if ( this == (void *)1312 ) /*0x4e3882*/
    return 6; /*0x4e3884*/
  v2 = -(this != (void *)1313); /*0x4e3891*/
  LOBYTE(v2) = v2 & 0xF8; /*0x4e3893*/
  return v2 + 7; /*0x4e383b*/

}
double CrateClass::ProcessPickup(...) { return 0; }

  int v3; // eax
  IUnknown *v4; // eax
  int *v5; // ecx
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // edi
  int *v10; // ecx
  int v11; // ebx
  int v12; // edx
  int ecx20; // ecx
  ObjectClass *v13; // edi
  AbstractClass *v14; // edi
  int v16; // eax
  __int64 v17; // st7
  ObjectClass *v18; // ebx
  IUnknown *v19; // eax
  int edx70; // edx
  IUnknown *v21; // edi
  TechnoClass *eax70a; // eax
  int edi70; // edi
  bool v24; // cf
  IUnknown *v20; // eax
  TechnoClass *v26; // eax
  TechnoTypeClass *v22; // edi
  ObjectClass *v23; // ecx
  ObjectClass *v29; // ebx
  IUnknown *v30; // eax
  int *v31; // eax
  void *v32; // eax
  unsigned char *edi84; // edi
  AbstractClass *v27; // ebx
  int v35; // eax
  int ecx96; // ecx
  unsigned int *v37; // edx
  char v38; // bl
  char IsCurrentPlayer; // al
  ObjectClass *v33; // edi
  char *inited; // eax
  char *v42; // eax
  BuildingTypeClass *v36; // eax
  int v44; // edi
  int v45; // ebx
  int v46; // eax
  AbstractClass *v41; // edi
  int v49; // eax
  int v50; // edi
  int v51; // ebx
  int v52; // eax
  int *v53; // eax
  CoordStruct *WarheadVersusMultiplier; // ebx
  AnimClass *v48; // edi
  void *eax131; // eax
  int v57; // eax
  int edi134; // edi
  int v59; // ebx
  unsigned int *v60; // eax
  int v61; // edi
  int v62; // ecx
  AnimClass *v56; // eax
  void **v64; // eax
  AnimClass *v58; // edi
  int v66; // edx
  int v67; // edi
  int v68; // ebx
  unsigned int *v69; // eax
  int v70; // edx
  double st7_141; // st7
  unsigned int *v72; // eax
  int v73; // edx
  double v74; // st7
  int v75; // ebx
  HouseClass *v71; // edi
  int v77; // edi
  int v78; // ebx
  int edi164; // edi
  int v80; // ebx
  int i; // ebx
  int v82; // edi
  int v83; // eax
  BuildingTypeClass *v79; // edx
  int FirstOfAction; // ebx
  int v86; // eax
  int v87; // edx
  int v88; // ecx
  int v89; // edi
  unsigned int *v90; // eax
  int v91; // edx
  double v92; // st7
  int v93; // edx
  #375 *v94; // eax
  int v95; // edi
  int v96; // ebx
  unsigned int *eax197; // eax
  int v98; // edx
  double v99; // st7
  ObjectClass *v97; // eax
  int v101; // edi
  int v102; // ebx
  unsigned int *v103; // eax
  int v104; // edx
  double v105; // st7
  int v106; // edx
  #375 *v107; // eax
  int v108; // edi
  int v109; // ebx
  int v110; // edi
  int v111; // ebx
  int eax222a; // eax
  void **v113; // eax
  int v114; // [esp-4h] [ebp-19Ch]
  BuildingTypeClass *v112; // [esp+8h] [ebp-190h]
  char v116; // [esp+23h] [ebp-175h]
  BuildingTypeClass *v121; // [esp+24h] [ebp-174h] BYREF
  IUnknown *v118[2]; // [esp+28h] [ebp-170h]
  __int64 v119; // [esp+30h] [ebp-168h] BYREF
  int v120; // [esp+3Ch] [ebp-15Ch]
  BuildingTypeClass *v132; // [esp+40h] [ebp-158h] BYREF
  int aP2_4; // [esp+44h] [ebp-154h]
  char *aP2_8; // [esp+48h] [ebp-150h]
  int v124; // [esp+4Ch] [ebp-14Ch] BYREF
  int v125; // [esp+50h] [ebp-148h]
  int v126; // [esp+54h] [ebp-144h] BYREF
  int v127; // [esp+58h] [ebp-140h]
  AbstractClass *v139; // [esp+5Ch] [ebp-13Ch]
  int v129; // [esp+60h] [ebp-138h] BYREF
  CoordStruct v130; // [esp+64h] [ebp-134h] BYREF
  int v131; // [esp+78h] [ebp-120h]
  int var11C; // [esp+7Ch] [ebp-11Ch] BYREF
  CoordStruct v133; // [esp+80h] [ebp-118h] BYREF
  unsigned int v134[3]; // [esp+8Ch] [ebp-10Ch] BYREF
  unsigned int v135[3]; // [esp+98h] [ebp-100h] BYREF
  unsigned int v136[3]; // [esp+A4h] [ebp-F4h] BYREF
  int v137[3]; // [esp+B0h] [ebp-E8h] BYREF
  int v138[3]; // [esp+BCh] [ebp-DCh] BYREF
  unsigned int varD0[3]; // [esp+C8h] [ebp-D0h] BYREF
  unsigned int v140[3]; // [esp+D4h] [ebp-C4h] BYREF
  unsigned int v141[3]; // [esp+E0h] [ebp-B8h] BYREF
  unsigned int v142[3]; // [esp+ECh] [ebp-ACh] BYREF
  unsigned int v143[3]; // [esp+F8h] [ebp-A0h] BYREF
  unsigned int v144[3]; // [esp+104h] [ebp-94h] BYREF
  int v145; // [esp+110h] [ebp-88h] BYREF
  char v146[12]; // [esp+114h] [ebp-84h] BYREF
  char v147[12]; // [esp+120h] [ebp-78h] BYREF
  char v148[12]; // [esp+12Ch] [ebp-6Ch] BYREF
  char v149[12]; // [esp+138h] [ebp-60h] BYREF
  char v150[12]; // [esp+144h] [ebp-54h] BYREF
  int v151[3]; // [esp+150h] [ebp-48h] BYREF
  char v152[12]; // [esp+15Ch] [ebp-3Ch] BYREF
  int a0[3]; // [esp+168h] [ebp-30h] BYREF
  char v154[12]; // [esp+174h] [ebp-24h] BYREF
  char v155[12]; // [esp+180h] [ebp-18h] BYREF
  char v156[12]; // [esp+18Ch] [ebp-Ch] BYREF

  if ( aP1 )
  {
    v3 = *(this + 17);
    if ( v3 != -1 )
    {
      if ( *(unsigned char *)(*(unsigned int *)(HouseClass_Player.field_38 + 4 * v3) + 682) )
      {
        v116 = 0;
        v121 = 0;
        if ( !*(unsigned int *)&HouseClass_Player.__pad_5568[8068]
          || !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)aP1[15].__pad_0 + 52) + 422) )
        {
          if ( *(unsigned char *)(*(unsigned int *)(HouseClass_Player.field_38 + 4 * v3) + 683) )
          {
            if ( aP1[1].uniqueId )
            {
              Debug::Log();
              TeamClass::Update_0((void **)aP1[1].uniqueId, 49, aP1, *(IUnknown **)&stru_89E138.__pad_524[236], 0, 0);
              if ( !aP1[4].__pad_0[0] )
                return 0;
            }
            *(unsigned char *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13502) = 1;
          }
          if ( *((unsigned char *)this + 286) < 0x13u )
          {
            v11 = *((unsigned __int8 *)this + 286);
          }
          else
          {
            v4 = 0;
            v5 = dword_81DA8C;
            do
            {
              v6 = *v5++;
              v4 = (IUnknown *)((char *)v4 + v6);
            }
            while ( (int)v5 < (int)dword_81DAD8 );
            v7 = Random::Range((unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536), (IUnknown *)1, v4);
            v8 = 0;
            v9 = 0;
            v10 = dword_81DA8C;
            do
            {
              v8 += *v10;
              if ( v7 <= v8 )
                break;
              ++v10;
              ++v9;
            }
            while ( (int)v10 < (int)dword_81DAD8 );
            v11 = v9;
          }
          v120 = v11;
          if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068] )
          {
            v13 = *(ObjectClass **)aP1[15].__pad_0;
            v129 = BuildingClass::FindBySWType(v13, (AbstractClass *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2848));
            if ( !v13[4].ambientSoundController[1]
              && (*(int (**)(int *))(v13->objectTypeFlags + 24))(&v13->objectTypeFlags) > 1500
              && !DynamicVector::GetOrGrow(&v13[126].health, *(DynamicVector **)(v129 + 3576))
              && HouseClass_Player.__pad_5568[8100] )
            {
              v11 = 1;
              v120 = 1;
              v116 = 1;
            }
            switch ( v11 )
            {
              case 1:
                v14 = aP1;
                if ( *(int *)(*(unsigned int *)aP1[15].__pad_0 + 744) <= 50 )
                  goto LABEL_36;
                goto LABEL_35;
              case 3:
                v14 = aP1;
                if ( aP1[27].__pad_0[6] )
                {
                  v11 = 0;
                  v120 = 0;
                }
                break;
              case 6:
                v14 = aP1;
                if ( *(int *)(*(unsigned int *)aP1[15].__pad_0 + 756) > 100 )
                {
LABEL_35:
                  v11 = 0;
                  v120 = 0;
                }
LABEL_36:
                v16 = *(this + 59);
                if ( v16 == 2 || v16 == 6 )
                {
                  v11 = 0;
                  v120 = 0;
                }
                break;
              case 9:
                v14 = aP1;
                if ( aP1[9].abstractFlags || aP1[9].nextArrayIndex != 1072693248 )
                {
                  v11 = 0;
                  v120 = 0;
                }
                break;
              case 10:
                v14 = aP1;
                if ( *(unsigned int *)&aP1[39].__pad_0[4]
                  || *(unsigned int *)&aP1[39].__pad_0[8] != 1072693248
                  || (*(int (**)(AbstractClass *))(*(unsigned int *)aP1->__pad_0 + 44))(aP1) == 2 )
                {
                  v11 = 0;
                  v120 = 0;
                }
                break;
              case 11:
                v14 = aP1;
                if ( aP1[9].referenceCount
                  || aP1[9].NeedsSaveOrLink != (void *)1072693248
                  || !(*(unsigned __int8 (**)(AbstractClass *))(*(unsigned int *)aP1->__pad_0 + 684))(aP1) )
                {
                  v11 = 0;
                  v120 = 0;
                }
                break;
              case 14:
                v14 = aP1;
                if ( (aP1->abstractFlags & 1) != 0 )
                {
                  if ( *(unsigned char *)((*(int (**)(AbstractClass *))(*(unsigned int *)aP1->__pad_0 + 132))(aP1) + 3214) )
                  {
                    if ( (aP1->abstractFlags & 1) != 0 && VeterancyStruct::IsElite((float *)&aP1[9].__pad_0[12]) )
                    {
                      v11 = 0;
                      v120 = 0;
                    }
                  }
                  else
                  {
                    v11 = 0;
                    v120 = 0;
                  }
                }
                break;
              default:
                v14 = aP1;
                break;
            }
            if ( *(this + 59) == 2 && !stru_89E138.__pad_71C[v11 + 1132] )
            {
              v11 = 0;
              v120 = 0;
            }
            if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068] == 4 )
              HouseClass::IncrementStat((unsigned int *)(*(unsigned int *)v14[15].__pad_0 + 19312), v11);
          }
          else if ( !*((unsigned char *)this + 286) )
          {
            v12 = *(this + 17);
            v121 = *(BuildingTypeClass **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 4416);
            ecx20 = *(unsigned int *)(HouseClass_Player.field_38 + 4 * v12);
            if ( ecx20 == *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 252) )
            {
              v11 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 5220);
              v120 = v11;
            }
            if ( ecx20 == *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 248) )
            {
              v11 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 5224);
              v120 = v11;
            }
            if ( ecx20 == *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 256) )
            {
              v11 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 5228);
              v120 = v11;
            }
          }
          v129 = *(this + 9);
          CellClass::CreateBuildingCrater((__int16 *)&stru_87C374.__pad_14B0[8132], (MouseClass *)&v129);
          if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068] && HouseClass_Player.__pad_5568[8109] )
            CrateClass::FindPlacement(&stru_87C374.__pad_14B0[8132]);
          if ( v11 == 6 )
          {
            v11 = 0;
            v120 = 0;
          }
          v17 = *(__int64 *)&stru_89E138.__pad_71C[8 * v11 + 980];
          HIBYTE(v118[0]) = 0;
          v119 = v17;
          switch ( v11 )
          {
            case 0:
              goto LABEL_121;
            case 1:
              Debug::Log();
              edi84 = 0;
              if ( v116 )
              {
                v27 = aP1;
                edi84 = (unsigned char *)BuildingClass::FindBySWType(
                                   *(unsigned int **)aP1[15].__pad_0,
                                   (AbstractClass *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2848));
                if ( edi84 )
                  goto LABEL_93;
              }
              else
              {
                v27 = aP1;
              }
              if ( (DynamicVector::GetOrGrow(
                      (unsigned int *)(*(unsigned int *)v27[15].__pad_0 + 21760),
                      *(DynamicVector **)(**(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2280) + 3576)) > 0
                 || DynamicVector::GetOrGrow(
                      (unsigned int *)(*(unsigned int *)v27[15].__pad_0 + 21760),
                      *(DynamicVector **)(*(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2280) + 4)
                                        + 3576)) > 0)
                && !DynamicVector::GetOrGrow(
                      (unsigned int *)(*(unsigned int *)v27[15].__pad_0 + 21780),
                      *(DynamicVector **)(**(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2880) + 3576))
                && !DynamicVector::GetOrGrow(
                      (unsigned int *)(*(unsigned int *)v27[15].__pad_0 + 21780),
                      *(DynamicVector **)(*(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2880) + 4)
                                        + 3576)) )
              {
                edi84 = (unsigned char *)BuildingClass::FindBySWType(
                                   *(unsigned int **)v27[15].__pad_0,
                                   (AbstractClass *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2876));
              }
LABEL_93:
              if ( *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 4424) )
                edi84 = *(unsigned char **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 4424);
              if ( edi84 )
                goto LABEL_111;
              do
              {
                while ( 1 )
                {
                  do
                  {
                    edi84 = *(unsigned char **)&g_UnitTypeCount2->__pad_0[4
                                                                * Random::Range(
                                                                    (unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060]
                                                                             + 536),
                                                                    0,
                                                                    (IUnknown *)((char *)&g_CrateCount[-1].NeedsSaveOrLink
                                                                               + 3))];
                    v35 = 0;
                    ecx96 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2864);
                    if ( ecx96 <= 0 )
                    {
LABEL_100:
                      v38 = 0;
                    }
                    else
                    {
                      v37 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2852);
                      while ( (unsigned char *)*v37 != edi84 )
                      {
                        ++v35;
                        ++v37;
                        if ( v35 >= ecx96 )
                          goto LABEL_100;
                      }
                      v38 = 1;
                    }
                    IsCurrentPlayer = House::IsCurrentPlayer(*(#375 **)aP1[15].__pad_0);
                  }
                  while ( !edi84[3597] );
                  if ( HouseClass_Player.__pad_5568[8100] )
                    break;
                  if ( !v38 )
                    goto LABEL_109;
                }
              }
              while ( v38 && !IsCurrentPlayer && !v116 );
LABEL_109:
              if ( !edi84 )
                goto LABEL_221;
              v27 = aP1;
LABEL_111:
              v33 = (ObjectClass *)(*(int (**)(unsigned char *, unsigned int))(*(unsigned int *)edi84 + 140))(
                                     edi84,
                                     *(unsigned int *)v27[15].__pad_0);
              if ( !v33 )
                goto LABEL_221;
              v126 = *(this + 9);
              Coord::Subtract(
                &v132,
                (IUnknown *)(((__int16)v126 << 8) + 128),
                (IUnknown *)((SHIWORD(v126) << 8) + 128),
                0);
              v124 = 128;
              v125 = 128;
              inited = (char *)Isometric::InitTables((int)this, (IUnknown *)&v124);
              v135[0] = v132;
              aP2_8 = inited;
              v135[1] = aP2_4;
              v135[2] = inited;
              if ( (*(unsigned __int8 (**)(ObjectClass *, unsigned int *, unsigned int))(*(unsigned int *)v33->__pad_0 + 216))(
                     v33,
                     v135,
                     0) )
              {
                if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0) )
                {
                  v126 = *(this + 9);
                  Coord::Subtract(
                    &v132,
                    (IUnknown *)(((__int16)v126 << 8) + 128),
                    (IUnknown *)((SHIWORD(v126) << 8) + 128),
                    0);
                  v119 = 0x8000000080LL;
                  v42 = (char *)Isometric::InitTables((int)this, (IUnknown *)&v119);
                  v143[1] = aP2_4;
                  aP2_8 = v42;
                  v143[0] = v132;
                  v143[2] = v42;
                  StartAudioControllerAt(
                    *(AudioController **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 504),
                    (int)v143,
                    0);
                }
                return 0;
              }
              var11C = *(this + 9);
              v129 = 0;
              v36 = (BuildingTypeClass *)*LayerClass::Pathfinding_Find(
                                            (IUnknown *)&stru_87C374.__pad_14B0[8132],
                                            (IUnknown *)&var11C,
                                            (IUnknown *)&v145,
                                            (IUnknown *)&var11C,
                                            *(IUnknown **)(*(unsigned int *)&v33[10].__pad_0[12] + 1660),
                                            (IUnknown *)0xFFFFFFFF,
                                            0,
                                            0,
                                            (IUnknown *)1,
                                            (IUnknown *)1,
                                            0,
                                            0,
                                            0,
                                            (IUnknown *)1,
                                            (IUnknown *)&v129,
                                            0,
                                            0);
              v126 = (int)v36;
              if ( v36 != *(BuildingTypeClass **)&stru_89E138.__pad_524[236] )
              {
                v142[1] = (SHIWORD(v36) << 8) + 128;
                v142[0] = ((__int16)v36 << 8) + 128;
                v142[2] = 0;
                if ( (*(unsigned __int8 (**)(ObjectClass *, unsigned int *, unsigned int))(*(unsigned int *)v33->__pad_0 + 216))(
                       v33,
                       v142,
                       0) )
                {
                  if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0) )
                  {
                    v126 = *(this + 9);
                    v44 = ((__int16)v126 << 8) + 128;
                    v45 = (SHIWORD(v126) << 8) + 128;
                    v119 = 0x8000000080LL;
                    v46 = Isometric::InitTables((int)this, (IUnknown *)&v119);
                    v138[0] = v44;
                    v138[1] = v45;
                    v138[2] = v46;
                    StartAudioControllerAt(
                      *(AudioController **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 504),
                      (int)v138,
                      0);
                  }
                  return 0;
                }
              }
              (*(void (**)(ObjectClass *, int))(*(unsigned int *)v33->__pad_0 + 32))(v33, 1);
              v120 = 0;
LABEL_121:
              Debug::Log();
              v41 = (AbstractClass *)v121;
              if ( !v121 )
              {
                v49 = Math::RoundToInt(*(double *)&v119);
                v41 = (AbstractClass *)Random::Range(
                                         (unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536),
                                         (IUnknown *)v49,
                                         (IUnknown *)(v49 + 900));
              }
              if ( !(unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0)
                || *(unsigned int *)&HouseClass_Player.__pad_5568[8068] )
              {
                HouseClass::AddPower(*(unsigned int **)aP1[15].__pad_0, (IUnknown *)v41);
              }
              else
              {
                HouseClass::AddPower(HouseClass_Player.field_0, (IUnknown *)v41);
              }
              if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0) )
              {
                v126 = *(this + 9);
                Coord::Subtract(
                  &v132,
                  (IUnknown *)(((__int16)v126 << 8) + 128),
                  (IUnknown *)((SHIWORD(v126) << 8) + 128),
                  0);
                v119 = 0x8000000080LL;
                aP2_8 = (char *)Isometric::InitTables((int)this, (IUnknown *)&v119);
                v134[2] = aP2_8;
                v134[0] = v132;
                v134[1] = aP2_4;
                StartAudioControllerAt(
                  *(AudioController **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 484),
                  (int)v134,
                  0);
              }
              goto LABEL_221;
            case 2:
              Debug::Log();
              if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0) )
              {
                v124 = *(this + 9);
                edi164 = ((__int16)v124 << 8) + 128;
                v80 = (SHIWORD(v124) << 8) + 128;
                v119 = 0x8000000080LL;
                v137[2] = Isometric::InitTables((int)this, (IUnknown *)&v119);
                v137[0] = edi164;
                v137[1] = v80;
                StartAudioControllerAt(
                  *(AudioController **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 1816),
                  (int)v137,
                  0);
              }
              for ( i = 0; i < *(int *)&stru_87C374.__pad_14B0[8036]; ++i )
              {
                v82 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_14B0[8024] + 4 * i);
                if ( v82
                  && (aP1->abstractFlags & 1) != 0
                  && *(unsigned int *)aP1[15].__pad_0 == (*(int (**)(int))(*(unsigned int *)v82 + 60))(v82) )
                {
                  v83 = (*(int (**)(int))(*(unsigned int *)v82 + 136))(v82);
                  v79 = *(BuildingTypeClass **)v82;
                  v124 = *(unsigned int *)(v82 + 108) - *(unsigned int *)(v83 + 160);
                  (*(void (**)(int, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))&v79->__pad_14D[31])(
                    v82,
                    &v124,
                    0,
                    *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 4008),
                    0,
                    1,
                    1,
                    0);
                }
              }
              goto LABEL_221;
            case 3:
              Debug::Log();
              for ( v121 = 0;
                    (int)v121 < *(int *)&stru_89E138.__pad_14B0[3512];
                    v121 = (BuildingTypeClass *)((char *)v121 + 1) )
              {
                v118[1] = *(IUnknown **)(*(unsigned int *)&stru_89E138.__pad_14B0[3500] + 4 * (unsigned int)v121);
                if ( v118[1] )
                {
                  if ( v118[1]->__pad_68[12] )
                  {
                    if ( (v118[1]->__pad_10[4] & 1) != 0 )
                    {
                      v124 = *(this + 9);
                      v67 = ((__int16)v124 << 8) + 128;
                      v68 = (SHIWORD(v124) << 8) + 128;
                      v119 = 0x8000000080LL;
                      v139 = (AbstractClass *)Isometric::InitTables((int)this, (IUnknown *)&v119);
                      v69 = (unsigned int *)(*(int (**)(IUnknown *, char *))(v118[1]->field_0 + 72))(v118[1], v148);
                      v70 = v69[2];
                      v132 = (BuildingTypeClass *)(v67 - *v69);
                      aP2_4 = v68 - v69[1];
                      aP2_8 = &v139->__pad_0[-v70];
                      st7_141 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                              (double)(int)&v139->__pad_0[-v70]
                                                            * (double)(int)&v139->__pad_0[-v70]
                                                            + (double)aP2_4 * (double)aP2_4
                                                            + (double)(int)v132 * (double)(int)v132));
                      if ( (int)Math::RoundToInt(st7_141) < *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 5932) )
                        v118[1]->__pad_3BC[22] = 1;
                    }
                  }
                }
              }
              goto LABEL_221;
            case 4:
              Debug::Log();
              v126 = Math::RoundToInt(*(double *)&v119);
              v114 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 4008);
              v118[1] = (IUnknown *)v126;
              (*(void (**)(AbstractClass *, int *, unsigned int, int, unsigned int, int, unsigned int, unsigned int))(*(unsigned int *)aP1->__pad_0 + 364))(
                aP1,
                &v126,
                0,
                v114,
                0,
                1,
                0,
                0);
              v121 = (BuildingTypeClass *)5;
              do
              {
                v124 = Random::Range(
                         (unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536),
                         0,
                         (IUnknown *)0x200);
                v126 = *(this + 9);
                v50 = ((__int16)v126 << 8) + 128;
                v51 = (SHIWORD(v126) << 8) + 128;
                v119 = 0x8000000080LL;
                v52 = Isometric::InitTables((int)this, (IUnknown *)&v119);
                v140[0] = v50;
                v140[1] = v51;
                v140[2] = v52;
                v53 = RandomCoordScatter(v151, (IUnknown *)v140, v124, 0);
                v132 = (BuildingTypeClass *)*v53;
                aP2_4 = v53[1];
                aP2_8 = (char *)v53[2];
                PlaySoundEffectAt(
                  (TechnoClass *)&v132,
                  v118[1],
                  0,
                  *(ObjectClass **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 4008),
                  1,
                  0);
                WarheadVersusMultiplier = (CoordStruct *)GetWarheadVersusMultiplier(
                                                           (CoordStruct *)v118[1],
                                                           *(BuildingTypeClass **)(*(unsigned int *)&stru_87C374.__pad_579C[22224]
                                                                                 + 4008),
                                                           0,
                                                           (BulletClass *)&v132);
                v48 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
                if ( v48 )
                {
                  eax131 = (void *)Return::HRESULT_Fail((BulletClass *)v132, aP2_4, (int)aP2_8);
                  AnimClass::ctor(
                    (void **)v48,
                    WarheadVersusMultiplier,
                    (CoordStruct *)&v132,
                    0,
                    (CoordStruct *)1,
                    (void *)0x2600,
                    eax131,
                    0);
                }
                CreateSmokeEffectAt(
                  (int)v118[1],
                  *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 4008),
                  (int)v132,
                  aP2_4,
                  (int)aP2_8,
                  0,
                  0);
                v121 = (BuildingTypeClass *)((char *)v121 - 1);
              }
              while ( v121 );
              goto LABEL_221;
            case 5:
              Debug::Log();
              v57 = *(this + 9);
              edi134 = ((__int16)v57 << 8) + 128;
              v59 = (SHIWORD(v57) << 8) + 128;
              v124 = 128;
              v125 = 128;
              aP2_8 = (char *)Isometric::InitTables((int)this, (IUnknown *)&v124);
              v60 = (unsigned int *)(*(int (**)(AbstractClass *, char *))(*(unsigned int *)aP1->__pad_0 + 72))(aP1, v147);
              v61 = *v60 + edi134;
              v62 = v59 + v60[1];
              v56 = (AnimClass *)((int)&aP2_8[v60[2]] / 2);
              v133.X = v61 / 2;
              v133.Y = v62 / 2;
              v133.Z = (int)v56;
              v64 = (void **)__2_YAPAXI_Z(0x1C8u);
              if ( v64 )
                AnimClass::ctor(
                  v64,
                  **(CoordStruct ***)&stru_89E138.__pad_1600D[15],
                  &v133,
                  0,
                  (CoordStruct *)1,
                  (void *)0x600,
                  0,
                  0);
              v58 = (AnimClass *)Math::RoundToInt(*(double *)&v119);
              v66 = *(unsigned int *)aP1->__pad_0;
              v124 = (int)v58;
              (*(void (**)(AbstractClass *, int *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(v66 + 364))(
                aP1,
                &v124,
                0,
                *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 3972),
                0,
                1,
                0,
                0);
              PlaySoundEffectAt(
                (TechnoClass *)&v133,
                (IUnknown *)v58,
                0,
                *(ObjectClass **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 3972),
                1,
                0);
              goto LABEL_221;
            case 7:
              Debug::Log();
              ShroudClass::Reset(&stru_87C374.__pad_14B0[8132], *(IUnknown **)aP1[15].__pad_0);
              goto LABEL_221;
            case 8:
              Debug::Log();
              LayerClass::Reveal(&stru_87C374.__pad_14B0[8132], *(unsigned int *)aP1[15].__pad_0);
              v126 = *(this + 9);
              Coord::Subtract(
                &v132,
                (IUnknown *)(((__int16)v126 << 8) + 128),
                (IUnknown *)((SHIWORD(v126) << 8) + 128),
                0);
              v119 = 0x8000000080LL;
              aP2_8 = (char *)Isometric::InitTables((int)this, (IUnknown *)&v119);
              v144[2] = aP2_8;
              v144[0] = v132;
              v144[1] = aP2_4;
              StartAudioControllerAt(
                *(AudioController **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 488),
                (int)v144,
                0);
              goto LABEL_221;
            case 9:
              Debug::Log();
              v118[1] = 0;
              if ( *(int *)&stru_89E138.__pad_14B0[3512] > 0 )
              {
                do
                {
                  v121 = *(BuildingTypeClass **)(*(unsigned int *)&stru_89E138.__pad_14B0[3500] + 4 * (int)v118[1]);
                  if ( v121 )
                  {
                    if ( (v121->abstractFlags & 1) != 0 )
                    {
                      v124 = *(this + 9);
                      v126 = 128;
                      v127 = 128;
                      v131 = Isometric::InitTables((int)this, (IUnknown *)&v126);
                      v90 = (unsigned int *)(*(int (**)(BuildingTypeClass *, char *))(*(unsigned int *)v121->vtable0 + 72))(
                                        v121,
                                        v152);
                      v91 = v90[2];
                      v132 = (BuildingTypeClass *)(((__int16)v124 << 8) + 128 - *v90);
                      aP2_4 = (SHIWORD(v124) << 8) + 128 - v90[1];
                      aP2_8 = (char *)(v131 - v91);
                      v92 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                          (double)(v131 - v91) * (double)(v131 - v91)
                                                        + (double)aP2_4 * (double)aP2_4
                                                        + (double)(int)v132 * (double)(int)v132));
                      if ( (int)Math::RoundToInt(v92) < *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 5932)
                        && !*(unsigned int *)&v121->__pad_14D[11]
                        && *(unsigned int *)&v121->__pad_14D[15] == 1072693248 )
                      {
                        v93 = *(unsigned int *)v121->vtable0;
                        *(double *)&v121->__pad_14D[11] = *(double *)&v119 * *(double *)&v121->__pad_14D[11];
                        v94 = (#375 *)(*(int (**)(void))(v93 + 60))();
                        if ( (unsigned __int8)House::IsHumanPlayer(v94) )
                          HIBYTE(v118[0]) = 1;
                      }
                    }
                  }
                  ++v118[1];
                }
                while ( (int)v118[1] < *(int *)&stru_89E138.__pad_14B0[3512] );
                if ( HIBYTE(v118[0]) )
                  VoxClass::FindAndPlay(aEvaUnitarmorup, -1, -1);
              }
              if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0) )
              {
                v124 = *(this + 9);
                v95 = ((__int16)v124 << 8) + 128;
                v96 = (SHIWORD(v124) << 8) + 128;
                v119 = 0x8000000080LL;
                varD0[2] = Isometric::InitTables((int)this, (IUnknown *)&v119);
                varD0[0] = v95;
                varD0[1] = v96;
                StartAudioControllerAt(
                  *(AudioController **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 496),
                  (int)varD0,
                  0);
              }
              goto LABEL_221;
            case 10:
              Debug::Log();
              v118[1] = 0;
              if ( *(int *)&stru_89E138.__pad_14B0[3512] > 0 )
              {
                do
                {
                  v121 = *(BuildingTypeClass **)(*(unsigned int *)&stru_89E138.__pad_14B0[3500] + 4 * (int)v118[1]);
                  if ( v121 )
                  {
                    if ( (v121->abstractFlags & 4) != 0 )
                    {
                      v124 = *(this + 9);
                      v126 = 128;
                      v127 = 128;
                      v131 = Isometric::InitTables((int)this, (IUnknown *)&v126);
                      eax197 = (unsigned int *)(*(int (**)(BuildingTypeClass *, char *))(*(unsigned int *)v121->vtable0
                                                                                            + 72))(
                                           v121,
                                           v154);
                      v98 = eax197[2];
                      v132 = (BuildingTypeClass *)(((__int16)v124 << 8) + 128 - *eax197);
                      aP2_4 = (SHIWORD(v124) << 8) + 128 - eax197[1];
                      aP2_8 = (char *)(v131 - v98);
                      v99 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                          (double)(v131 - v98) * (double)(v131 - v98)
                                                        + (double)aP2_4 * (double)aP2_4
                                                        + (double)(int)v132 * (double)(int)v132));
                      if ( (int)Math::RoundToInt(v99) < *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 5932)
                        && !*(unsigned int *)&v121->DebrisTypes[620]
                        && *(unsigned int *)&v121->DebrisTypes[624] == 1072693248
                        && (*(int (**)(BuildingTypeClass *))(*(unsigned int *)v121->vtable0 + 44))(v121) != 2 )
                      {
                        v97 = *(ObjectClass **)&v121->AlphaImageFile[9];
                        *(double *)&v121->DebrisTypes[620] = *(double *)&v119 * *(double *)&v121->DebrisTypes[620];
                        if ( BYTE1(v97[2].lastLayer) )
                          HIBYTE(v118[0]) = 1;
                      }
                    }
                  }
                  ++v118[1];
                }
                while ( (int)v118[1] < *(int *)&stru_89E138.__pad_14B0[3512] );
                if ( HIBYTE(v118[0]) )
                  VoxClass::FindAndPlay(aEvaUnitspeedup, -1, -1);
              }
              if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0) )
              {
                v124 = *(this + 9);
                v101 = ((__int16)v124 << 8) + 128;
                v102 = (SHIWORD(v124) << 8) + 128;
                v119 = 0x8000000080LL;
                v141[2] = Isometric::InitTables((int)this, (IUnknown *)&v119);
                v141[0] = v101;
                v141[1] = v102;
                StartAudioControllerAt(
                  *(AudioController **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 500),
                  (int)v141,
                  0);
              }
              goto LABEL_221;
            case 11:
              Debug::Log();
              v118[1] = 0;
              if ( *(int *)&stru_89E138.__pad_14B0[3512] > 0 )
              {
                do
                {
                  v121 = *(BuildingTypeClass **)(*(unsigned int *)&stru_89E138.__pad_14B0[3500] + 4 * (int)v118[1]);
                  if ( v121 )
                  {
                    if ( (v121->abstractFlags & 1) != 0 )
                    {
                      v124 = *(this + 9);
                      v126 = 128;
                      v127 = 128;
                      v131 = Isometric::InitTables((int)this, (IUnknown *)&v126);
                      v103 = (unsigned int *)(*(int (**)(BuildingTypeClass *, char *))(*(unsigned int *)v121->vtable0 + 72))(
                                         v121,
                                         v156);
                      v104 = v103[2];
                      v132 = (BuildingTypeClass *)(((__int16)v124 << 8) + 128 - *v103);
                      aP2_4 = (SHIWORD(v124) << 8) + 128 - v103[1];
                      aP2_8 = (char *)(v131 - v104);
                      v105 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                           (double)(int)v132 * (double)(int)v132
                                                         + (double)(v131 - v104) * (double)(v131 - v104)
                                                         + (double)aP2_4 * (double)aP2_4));
                      if ( (int)Math::RoundToInt(v105) < *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 5932)
                        && !*(unsigned int *)&v121->__pad_14D[19]
                        && *(unsigned int *)&v121->__pad_14D[23] == 1072693248 )
                      {
                        v106 = *(unsigned int *)v121->vtable0;
                        *(double *)&v121->__pad_14D[19] = *(double *)&v119 * *(double *)&v121->__pad_14D[19];
                        v107 = (#375 *)(*(int (**)(void))(v106 + 60))();
                        if ( (unsigned __int8)House::IsHumanPlayer(v107) )
                          HIBYTE(v118[0]) = 1;
                      }
                    }
                  }
                  ++v118[1];
                }
                while ( (int)v118[1] < *(int *)&stru_89E138.__pad_14B0[3512] );
                if ( HIBYTE(v118[0]) )
                  VoxClass::FindAndPlay(aEvaUnitfirepow, -1, -1);
              }
              if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0) )
              {
                v124 = *(this + 9);
                v108 = ((__int16)v124 << 8) + 128;
                v109 = (SHIWORD(v124) << 8) + 128;
                v119 = 0x8000000080LL;
                v130.Z = Isometric::InitTables((int)this, (IUnknown *)&v119);
                v130.X = v108;
                v130.Y = v109;
                StartAudioControllerAt(
                  *(AudioController **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 492),
                  (int)&v130,
                  0);
              }
              goto LABEL_221;
            case 12:
              Debug::Log();
              FirstOfAction = SuperWeaponTypeClass::FindFirstOfAction((void *)0x14);
              v86 = 0;
              v87 = *(unsigned int *)aP1[15].__pad_0;
              v88 = *(unsigned int *)(v87 + 612);
              if ( v88 <= 0 )
                goto LABEL_221;
              v124 = *(unsigned int *)(v87 + 600);
              v89 = v124;
              break;
            case 14:
              Debug::Log();
              for ( v121 = 0;
                    (int)v121 < *(int *)&stru_89E138.__pad_14B0[3512];
                    v121 = (BuildingTypeClass *)((char *)v121 + 1) )
              {
                v118[1] = *(IUnknown **)(*(unsigned int *)&stru_89E138.__pad_14B0[3500] + 4 * (unsigned int)v121);
                if ( v118[1] )
                {
                  if ( v118[1]->__pad_68[12] )
                  {
                    if ( (v118[1]->__pad_10[4] & 1) != 0 )
                    {
                      v124 = *(this + 9);
                      v126 = 128;
                      v127 = 128;
                      v131 = Isometric::InitTables((int)this, (IUnknown *)&v126);
                      v72 = (unsigned int *)(*(int (**)(IUnknown *, char *))(v118[1]->field_0 + 72))(v118[1], v150);
                      v73 = v72[2];
                      v132 = (BuildingTypeClass *)(((__int16)v124 << 8) + 128 - *v72);
                      aP2_4 = (SHIWORD(v124) << 8) + 128 - v72[1];
                      aP2_8 = (char *)(v131 - v73);
                      v74 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                          (double)(v131 - v73) * (double)(v131 - v73)
                                                        + (double)aP2_4 * (double)aP2_4
                                                        + (double)(int)v132 * (double)(int)v132));
                      if ( (int)Math::RoundToInt(v74) < *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 5932) )
                      {
                        if ( *(unsigned char *)((*(int (**)(IUnknown *))(v118[1]->field_0 + 132))(v118[1]) + 3214) )
                        {
                          v75 = 0;
                          if ( *(double *)&v119 > 0.0 )
                          {
                            v71 = (HouseClass *)&v118[1]->field_150;
                            do
                            {
                              if ( VeterancyStruct::IsVeteran((float *)v71->__pad_0) )
                                Timer::SetFlag(v71, 1);
                              if ( VeterancyStruct::IsRookie((float *)v71->__pad_0) )
                                Power::ChangedHouse(v71, 1);
                              if ( VeinholeClass::GetState((float *)v71->__pad_0) )
                                Crate::processCratePickup(v71, 1);
                              v124 = ++v75;
                            }
                            while ( (double)v75 < *(double *)&v119 );
                          }
                        }
                      }
                    }
                  }
                }
              }
              if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0) )
              {
                v124 = *(this + 9);
                v77 = ((__int16)v124 << 8) + 128;
                v78 = (SHIWORD(v124) << 8) + 128;
                v119 = 0x8000000080LL;
                v136[2] = Isometric::InitTables((int)this, (IUnknown *)&v119);
                v136[0] = v77;
                v136[1] = v78;
                StartAudioControllerAt(
                  *(AudioController **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 508),
                  (int)v136,
                  0);
              }
              goto LABEL_221;
            case 16:
              Debug::Log();
              v18 = (ObjectClass *)Crate::applyCrateEffect(&off_81D07C);
              v19 = (IUnknown *)Math::RoundToInt(*(double *)&v119);
              edx70 = *this;
              v21 = v19;
              v118[1] = v19;
              eax70a = (TechnoClass *)(*(int (**)(unsigned int *, char *))(edx70 + 72))(this, v146);
              PlaySoundEffectAt(eax70a, v21, 0, v18, 0, 0);
              edi70 = 0;
              v24 = 1;
              do
              {
                if ( v24 )
                {
                  v121 = (BuildingTypeClass *)*(this + 9);
                  v126 = *NeighborCoord(&v124, &v121, edi70);
                  v20 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v126);
                }
                else
                {
                  v20 = (IUnknown *)this;
                }
                v26 = (TechnoClass *)(*(int (**)(IUnknown *, char *))(v20->field_0 + 72))(v20, v155);
                PlaySoundEffectAt(v26, v118[1], 0, v18, 0, 0);
                v24 = (unsigned int)++edi70 < 8;
              }
              while ( edi70 < 8 );
              goto LABEL_221;
            case 17:
              Debug::Log();
              v22 = (TechnoTypeClass *)Random::Range(
                                         (unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536),
                                         0,
                                         (IUnknown *)(*(unsigned int *)&stru_B05488.__pad_579C[18644] - 1));
              if ( v22 == (TechnoTypeClass *)1 )
                v22 = 0;
              Crate::FindPlacement((int)this, (IUnknown *)v22, 1);
              v23 = (ObjectClass *)Random::Range(
                                     (unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536),
                                     (IUnknown *)0xA,
                                     (IUnknown *)0x14);
              if ( v23 )
              {
                v29 = v23;
                do
                {
                  v112 = (BuildingTypeClass *)Random::Range(
                                                (unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536),
                                                0,
                                                (IUnknown *)0x300);
                  v30 = (IUnknown *)(*(int (**)(unsigned int *, char *))(*this + 72))(this, v149);
                  v31 = RandomCoordScatter(a0, v30, (int)v112, (ScenarioClass *)1);
                  v132 = (BuildingTypeClass *)*v31;
                  aP2_4 = v31[1];
                  aP2_8 = (char *)v31[2];
                  v32 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v132);
                  Crate::FindPlacement((int)v32, (IUnknown *)v22, 1);
                  v29 = (ObjectClass *)((char *)v29 - 1);
                }
                while ( v29 );
              }
              goto LABEL_221;
            default:
              goto LABEL_221;
          }
          while ( *(unsigned int *)(*(unsigned int *)(*(unsigned int *)v89 + 40) + 180) )
          {
            ++v86;
            v89 += 4;
            if ( v86 >= v88 )
              goto LABEL_221;
          }
          if ( v86 != -1
            && SuperClass::StartTimer(*(unsigned int *)(v124 + 4 * *(unsigned int *)(FirstOfAction + 152)), (IUnknown *)1, 0, 0)
            && aP1[29].__pad_0[6] )
          {
            SidebarClass::AddCameo((int *)&stru_87C374.__pad_14B0[8132], 31, *(AnimClass **)(FirstOfAction + 152));
          }
LABEL_221:
          if ( dword_81DAD8[v120] != -1 )
          {
            v124 = *(this + 9);
            v110 = ((__int16)v124 << 8) + 128;
            v111 = (SHIWORD(v124) << 8) + 128;
            v119 = 0x8000000080LL;
            eax222a = Isometric::InitTables((int)this, (IUnknown *)&v119);
            v130.X = v110;
            v130.Y = v111;
            v130.Z = eax222a + 200;
            v113 = (void **)__2_YAPAXI_Z(0x1C8u);
            if ( v113 )
              AnimClass::ctor(
                v113,
                *(CoordStruct **)(*(unsigned int *)&stru_89E138.__pad_1600D[15] + 4 * dword_81DAD8[v120]),
                &v130,
                0,
                (CoordStruct *)1,
                (void *)0x600,
                0,
                0);
          }
        }
      }
    }
  }
  return 1;

}
// 0x4072c0
double DListNode::Init(...) { return 0; }

  *this = this; /*0x4072c0*/
  *((unsigned int *)this + 1) = this; /*0x4072c2*/
  *((unsigned int *)this + 2) = this; /*0x4072c5*/

}
  *this = this; /*0x4072c0*/
  *((unsigned int *)this + 1) = this; /*0x4072c2*/
  *((unsigned int *)this + 2) = this; /*0x4072c5*/

}
double DListNode::InitEmpty(...) { return 0; }

  *this = this; /*0x4072d0*/
  *((unsigned int *)this + 1) = this; /*0x4072d2*/
  *((unsigned int *)this + 2) = 0; /*0x4072d5*/

}
// 0x7b6760
double DeleteAndZero::Alt(...) { return 0; }

  if ( *this ) /*0x7b6763*/
    __3_YAXPAX_Z(*this); /*0x7b676a*/
  *this = 0; /*0x7b6772*/

}
  if ( *this ) /*0x7b6763*/
    __3_YAXPAX_Z(*this); /*0x7b676a*/
  *this = 0; /*0x7b6772*/

}
double DeleteAndZero::Alt2(...) { return 0; }

  if ( *this ) /*0x7b5343*/
    __3_YAXPAX_Z(*this); /*0x7b534a*/
  *this = 0; /*0x7b5352*/

}
double DeleteAndZero::DeleteAndZero_field_0x08(...) { return 0; }
double DeleteAndZero::NeedsSaveOrLink(...) { return 0; }
// 0x624480
double DeleteAndZero::OrFree(...) { return 0; }

  DeleteAndZero::Alt(Block); /*0x624483*/
  if ( (a2 & 1) != 0 ) /*0x62448d*/
    __3_YAXPAX_Z(Block); /*0x624490*/
  return Block; /*0x62449a*/

}
  DeleteAndZero::Alt(Block); /*0x624483*/
  if ( (a2 & 1) != 0 ) /*0x62448d*/
    __3_YAXPAX_Z(Block); /*0x624490*/
  return Block; /*0x62449a*/

}
// 0x48dd50
double DiskSpace::CheckAvailable(...) { return 0; }

  HMODULE ModuleHandleA; // eax
  FARPROC ProcAddress; // esi
  int v2; // esi
  DWORD v4; // esi
  DWORD SectorsPerCluster; // [esp+4h] [ebp-28h] BYREF
  DWORD BytesPerSector; // [esp+8h] [ebp-24h] BYREF
  DWORD NumberOfFreeClusters; // [esp+Ch] [ebp-20h] BYREF
  DWORD TotalNumberOfClusters; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v9[2]; // [esp+14h] [ebp-18h] BYREF
  unsigned char v10[8]; // [esp+1Ch] [ebp-10h] BYREF
  unsigned char v11[8]; // [esp+24h] [ebp-8h] BYREF

  Debug::Log(); /*0x48dd59*/
  ModuleHandleA = GetModuleHandleA(ModuleName); /*0x48dd66*/
  if ( ModuleHandleA ) /*0x48dd6e*/
  {
    ProcAddress = GetProcAddress(ModuleHandleA, ProcName); /*0x48dd80*/
    if ( ProcAddress ) /*0x48dd84*/
    {
      Debug::Log(); /*0x48dd8b*/
      if ( ((unsigned __int8 (*)(unsigned int, unsigned int *, unsigned char *, unsigned char *))ProcAddress)(0, v9, v11, v10) ) /*0x48dda4*/
      {
        v2 = Math::RoundToInt(((double)v9[1] * 4294967296.0 + (double)v9[0]) * 0.0009765625); /*0x48dddb*/
        Debug::Log(); /*0x48dde6*/
        return v2; /*0x48ddf4*/
      }
      GetLastError(); /*0x48ddac*/
      Debug::Log(); /*0x48ddb8*/
    }
    else
    {
      GetLastError(); /*0x48ddf7*/
      Debug::Log(); /*0x48de03*/
    }
  }
  else
  {
    Debug::Log(); /*0x48de12*/
  }
  if ( !GetDiskFreeSpaceA(0, &SectorsPerCluster, &BytesPerSector, &NumberOfFreeClusters, &TotalNumberOfClusters) ) /*0x48de30*/
    return 0; /*0x48de65*/
  v4 = NumberOfFreeClusters * ((BytesPerSector * SectorsPerCluster) >> 10); /*0x48de46*/
  Debug::Log(); /*0x48de56*/
  return v4; /*0x48ddf0*/

}
  HMODULE ModuleHandleA; // eax
  FARPROC ProcAddress; // esi
  int v2; // esi
  DWORD v4; // esi
  DWORD SectorsPerCluster; // [esp+4h] [ebp-28h] BYREF
  DWORD BytesPerSector; // [esp+8h] [ebp-24h] BYREF
  DWORD NumberOfFreeClusters; // [esp+Ch] [ebp-20h] BYREF
  DWORD TotalNumberOfClusters; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v9[2]; // [esp+14h] [ebp-18h] BYREF
  unsigned char v10[8]; // [esp+1Ch] [ebp-10h] BYREF
  unsigned char v11[8]; // [esp+24h] [ebp-8h] BYREF

  Debug::Log(); /*0x48dd59*/
  ModuleHandleA = GetModuleHandleA(ModuleName); /*0x48dd66*/
  if ( ModuleHandleA ) /*0x48dd6e*/
  {
    ProcAddress = GetProcAddress(ModuleHandleA, ProcName); /*0x48dd80*/
    if ( ProcAddress ) /*0x48dd84*/
    {
      Debug::Log(); /*0x48dd8b*/
      if ( ((unsigned __int8 (*)(unsigned int, unsigned int *, unsigned char *, unsigned char *))ProcAddress)(0, v9, v11, v10) ) /*0x48dda4*/
      {
        v2 = Math::RoundToInt(((double)v9[1] * 4294967296.0 + (double)v9[0]) * 0.0009765625); /*0x48dddb*/
        Debug::Log(); /*0x48dde6*/
        return v2; /*0x48ddf4*/
      }
      GetLastError(); /*0x48ddac*/
      Debug::Log(); /*0x48ddb8*/
    }
    else
    {
      GetLastError(); /*0x48ddf7*/
      Debug::Log(); /*0x48de03*/
    }
  }
  else
  {
    Debug::Log(); /*0x48de12*/
  }
  if ( !GetDiskFreeSpaceA(0, &SectorsPerCluster, &BytesPerSector, &NumberOfFreeClusters, &TotalNumberOfClusters) ) /*0x48de30*/
    return 0; /*0x48de65*/
  v4 = NumberOfFreeClusters * ((BytesPerSector * SectorsPerCluster) >> 10); /*0x48de46*/
  Debug::Log(); /*0x48de56*/
  return v4; /*0x48ddf0*/

}
double DynamicArray::Remove(...) { return 0; }

  int v3; // eax
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // ebp
  void *v9; // eax
  const void *v10; // esi
  void *v11; // [esp+8h] [ebp+4h]

  v3 = *(unsigned int *)this; /*0x7acd63*/
  if ( !*(unsigned int *)this ) /*0x7acd63*/
    return 0; /*0x7acd69*/
  v5 = a2; /*0x7acd71*/
  if ( a2 < 0 ) /*0x7acd78*/
    v5 = 0; /*0x7acd7a*/
  if ( v5 >= v3 ) /*0x7acd7e*/
    v5 = v3 - 1; /*0x7acd80*/
  DeleteAndZero((void **)(4 * v5 + *((unsigned int *)this + 2))); /*0x7acd8f*/
  memcpy( /*0x7acdb0*/
    (void *)(*((unsigned int *)this + 2) + 4 * v5),
    (const void *)(*((unsigned int *)this + 2) + 4 * (v5 + 1)),
    4 * (*(unsigned int *)this + 0x3FFFFFFF * (v5 + 1)));
  v6 = *(unsigned int *)this - 1; /*0x7acdbb*/
  *(unsigned int *)this = v6; /*0x7acdbd*/
  v7 = *((unsigned int *)this + 1); /*0x7acdbf*/
  if ( 3 * v6 <= v7 ) /*0x7acdc7*/
  {
    v8 = v7 / 2; /*0x7acdd0*/
    if ( v7 / 2 < 10 ) /*0x7acdd5*/
      v8 = 10; /*0x7acdd7*/
    if ( v8 < v7 ) /*0x7acdde*/
    {
      v9 = __2_YAPAXI_Z(4 * v8); /*0x7acde8*/
      v10 = (const void *)*((unsigned int *)this + 2); /*0x7acded*/
      v11 = v9; /*0x7acdf5*/
      if ( v10 ) /*0x7acdf9*/
        qmemcpy(v9, v10, 4 * *(unsigned int *)this); /*0x7ace07*/
      __3_YAXPAX_Z(*((void **)this + 2)); /*0x7ace14*/
      *((unsigned int *)this + 2) = v11; /*0x7ace20*/
      *((unsigned int *)this + 1) = v8; /*0x7ace23*/
    }
  }
  return 1; /*0x7acd6b*/

}
double DynamicArray::Resize(...) { return 0; }

  int v4; // eax
  int v6; // edi
  unsigned int *v7; // ecx
  int v8; // ebp
  int v9; // ebp
  bool v10; // c0
  bool v11; // c3
  unsigned int v12; // ebp
  int v13; // edi
  AbstractClass *v14; // ebx
  AbstractClass *v15; // edi
  unsigned int v16; // edx
  int v17; // edi
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  unsigned int *v21; // eax
  unsigned int v22; // ebp
  int v23; // edi
  AbstractClass *v24; // ebx
  AbstractClass *v25; // edi
  unsigned int v26; // edx
  int v27; // edi
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  unsigned int *v31; // [esp-4h] [ebp-1Ch]
  float v32; // [esp+10h] [ebp-8h]
  char a1a; // [esp+1Ch] [ebp+4h]
  AbstractClass *aP2a; // [esp+20h] [ebp+8h]
  AbstractClass *aP2b; // [esp+20h] [ebp+8h]

  v4 = *(this + 1); /*0x6249ab*/
  if ( !v4 ) /*0x6249b0*/
    return 0; /*0x6249b5*/
  v32 = (double)(unsigned int)(v4 - 1) / (double)(int)*(this + 2); /*0x6249e0*/
  v6 = ((int (*)(int *))*(this + 6))(a1) & ((1 << *(this + 3)) - 1); /*0x6249f4*/
  v7 = *(unsigned int **)(*this + 4 * v6); /*0x6249f6*/
  if ( !v7 ) /*0x6249fb*/
    return 0; /*0x624a00*/
  v8 = *a1; /*0x624a09*/
  if ( *v7 == *a1 ) /*0x624a10*/
  {
    *(unsigned int *)aP2->__pad_0 = v7[1]; /*0x624a1d*/
    v31 = *(unsigned int **)(*this + 4 * v6); /*0x624a24*/
    v9 = v31[2]; /*0x624a25*/
    __3_YAXPAX_Z(v31); /*0x624a28*/
    *(unsigned int *)(*this + 4 * v6) = v9; /*0x624a36*/
    v10 = v32 < *((double *)this + 4); /*0x624a3c*/
    v11 = v32 == *((double *)this + 4); /*0x624a3c*/
    --*(this + 1); /*0x624a40*/
    if ( v10 || v11 ) /*0x624a45*/
    {
      v12 = *(this + 2); /*0x624a4e*/
      if ( v12 > *(this + 12) && *((unsigned char *)this + 20) != 1 ) /*0x624a60*/
      {
        v13 = *(this + 3); /*0x624a62*/
        v14 = (AbstractClass *)*this; /*0x624a65*/
        aP2a = (AbstractClass *)*this; /*0x624a69*/
        *(this + 2) = v12 >> 1; /*0x624a6f*/
        *(this + 3) = v13 - 1; /*0x624a77*/
        v15 = (AbstractClass *)__2_YAPAXI_Z(4 * (v12 >> 1)); /*0x624a82*/
        v16 = 4 * *(this + 2); /*0x624a87*/
        *this = v15; /*0x624a8e*/
        memset(v15, 0, v16); /*0x624a93*/
        if ( (int)v12 > 0 ) /*0x624a9e*/
        {
          do /*0x624ad2*/
          {
            v17 = *(unsigned int *)v14->__pad_0; /*0x624aa0*/
            if ( *(unsigned int *)v14->__pad_0 ) /*0x624aa0*/
            {
              do /*0x624acc*/
              {
                v18 = ((int (*)(int))*(this + 6))(v17) & ((1 << *(this + 3)) - 1); /*0x624ab6*/
                v19 = *(unsigned int *)(*this + 4 * v18); /*0x624aba*/
                *(unsigned int *)(*this + 4 * v18) = v17; /*0x624ac0*/
                v20 = *(unsigned int *)(v17 + 8); /*0x624ac2*/
                *(unsigned int *)(v17 + 8) = v19; /*0x624ac5*/
                v17 = v20; /*0x624ac8*/
              }
              while ( v20 ); /*0x624acc*/
            }
            v14 = (AbstractClass *)((char *)v14 + 4); /*0x624ace*/
            --v12; /*0x624ad1*/
          }
          while ( v12 ); /*0x624ad2*/
          v14 = aP2a; /*0x624ad4*/
        }
        __3_YAXPAX_Z(v14); /*0x624ad9*/
      }
    }
    return 1; /*0x624ae4*/
  }
  else
  {
    v21 = (unsigned int *)v7[2]; /*0x624aed*/
    a1a = 0; /*0x624af0*/
    if ( v21 ) /*0x624af7*/
    {
      while ( *v21 != v8 ) /*0x624afb*/
      {
        v7 = v21; /*0x624afd*/
        v21 = (unsigned int *)v21[2]; /*0x624aff*/
        if ( !v21 ) /*0x624b04*/
          goto LABEL_21; /*0x624b04*/
      }
      *(unsigned int *)aP2->__pad_0 = v21[1]; /*0x624b10*/
      v7[2] = v21[2]; /*0x624b15*/
      --*(this + 1); /*0x624b1c*/
      __3_YAXPAX_Z(v21); /*0x624b1f*/
      a1a = 1; /*0x624b27*/
    }
LABEL_21:
    if ( v32 <= *((double *)this + 4) ) /*0x624b38*/
    {
      v22 = *(this + 2); /*0x624b3e*/
      if ( v22 > *(this + 12) && *((unsigned char *)this + 20) != 1 ) /*0x624b50*/
      {
        v23 = *(this + 3); /*0x624b52*/
        v24 = (AbstractClass *)*this; /*0x624b55*/
        aP2b = (AbstractClass *)*this; /*0x624b59*/
        *(this + 2) = v22 >> 1; /*0x624b5f*/
        *(this + 3) = v23 - 1; /*0x624b67*/
        v25 = (AbstractClass *)__2_YAPAXI_Z(4 * (v22 >> 1)); /*0x624b72*/
        v26 = 4 * *(this + 2); /*0x624b77*/
        *this = v25; /*0x624b7e*/
        memset(v25, 0, v26); /*0x624b83*/
        if ( (int)v22 > 0 ) /*0x624b8e*/
        {
          do /*0x624bc2*/
          {
            v27 = *(unsigned int *)v24->__pad_0; /*0x624b90*/
            if ( *(unsigned int *)v24->__pad_0 ) /*0x624b90*/
            {
              do /*0x624bbc*/
              {
                v28 = ((int (*)(int))*(this + 6))(v27) & ((1 << *(this + 3)) - 1); /*0x624ba6*/
                v29 = *(unsigned int *)(*this + 4 * v28); /*0x624baa*/
                *(unsigned int *)(*this + 4 * v28) = v27; /*0x624bb0*/
                v30 = *(unsigned int *)(v27 + 8); /*0x624bb2*/
                *(unsigned int *)(v27 + 8) = v29; /*0x624bb5*/
                v27 = v30; /*0x624bb8*/
              }
              while ( v30 ); /*0x624bbc*/
            }
            v24 = (AbstractClass *)((char *)v24 + 4); /*0x624bbe*/
            --v22; /*0x624bc1*/
          }
          while ( v22 ); /*0x624bc2*/
          v24 = aP2b; /*0x624bc4*/
        }
        __3_YAXPAX_Z(v24); /*0x624bc9*/
      }
    }
    return a1a; /*0x624bd1*/
  }

}
double DynamicVectorArray::Constructor(...) { return 0; }

  int v4; // ebx
  int *v6; // eax
  int v7; // ecx
  unsigned int *v8; // ebp
  unsigned int *v9; // eax
  int v10; // edx
  unsigned int *v11; // eax
  int v12; // edx
  int v13; // eax

  v4 = a2; /*0x62807b*/
  *(this + 1) = a4; /*0x628084*/
  *(this + 2) = a3; /*0x628087*/
  *(this + 3) = a2; /*0x628091*/
  v6 = (int *)__2_YAPAXI_Z(24 * a3 + 4); /*0x628095*/
  v7 = 0; /*0x62809a*/
  if ( v6 ) /*0x6280a1*/
  {
    v8 = v6 + 1; /*0x6280a7*/
    *v6 = a3; /*0x6280aa*/
    v9 = v6 + 1; /*0x6280ae*/
    if ( a3 - 1 >= 0 ) /*0x6280b0*/
    {
      v10 = a3; /*0x6280b2*/
      do /*0x6280dc*/
      {
        v9[1] = 0; /*0x6280ba*/
        v9[2] = 0; /*0x6280bd*/
        *((unsigned char *)v9 + 12) = 1; /*0x6280c0*/
        *((unsigned char *)v9 + 13) = 0; /*0x6280c3*/
        *v9 = &vt_VectorClass_HashObject_HashString_SchemeNode; /*0x6280c6*/
        *v9 = &vt_DynamicVectorClass_HashObject_HashString_SchemeNode; /*0x6280cc*/
        v9[5] = 10; /*0x6280d2*/
        v9[4] = 0; /*0x6280d5*/
        v9 += 6; /*0x6280d8*/
        --v10; /*0x6280db*/
      }
      while ( v10 ); /*0x6280dc*/
      v4 = a2; /*0x6280de*/
    }
    v11 = v8; /*0x6280e2*/
  }
  else
  {
    v11 = 0; /*0x6280e7*/
  }
  v12 = *(this + 2); /*0x6280e9*/
  *this = (int)v11; /*0x6280ec*/
  v13 = 0; /*0x6280ee*/
  if ( v12 > 0 ) /*0x6280f2*/
  {
    do /*0x628103*/
    {
      ++v13; /*0x6280f6*/
      *(unsigned int *)(v7 + *this + 20) = v4; /*0x6280f7*/
      v7 += 24; /*0x6280fe*/
    }
    while ( v13 < *(this + 2) ); /*0x628103*/
  }
  return this; /*0x628107*/

}
double FacingClass::Set_SyncLog(...) { return 0; }

  TerrainTypeClass *v3; // ebx
  int v4; // eax
  int TimeLeft; // edx
  int v6; // ebx
  __int16 v7; // cx
  unsigned int v8; // ecx
  CDTimerClass *p_RotationTimer; // esi
  char result; // al
  unsigned int v11; // [esp+8h] [ebp-10h]
  int v12; // [esp+10h] [ebp-8h]

  if ( SLOWORD(this->ROT) > 0 ) /*0x4c930c*/
  {
    v3 = (TerrainTypeClass *)&this->RotationTimer; /*0x4c930e*/
    if ( CDTimerClass::TimeRemaining(&this->RotationTimer.StartTime) ) /*0x4c9313*/
    {
      v4 = abs16(LOWORD(this->DesiredFacing) - LOWORD(this->StartFacing)) / SLOWORD(this->ROT); /*0x4c9333*/
      v11 = this->DesiredFacing; /*0x4c9337*/
      if ( (__int16)v4 <= 0 ) /*0x4c933e*/
      {
LABEL_9:
        LOWORD(v8) = v11; /*0x4c936a*/
        goto LABEL_12; /*0x4c936f*/
      }
      TimeLeft = this->RotationTimer.TimeLeft; /*0x4c9340*/
      v6 = *(unsigned int *)v3->__pad_0; /*0x4c9343*/
      if ( v6 != -1 ) /*0x4c9348*/
      {
        if ( *(unsigned int *)&HouseClass_Player.__pad_5568[23248] - v6 >= TimeLeft ) /*0x4c9354*/
        {
          v7 = 0; /*0x4c9371*/
          goto LABEL_8; /*0x4c9373*/
        }
        LOWORD(TimeLeft) = TimeLeft - (*(unsigned short *)&HouseClass_Player.__pad_5568[23248] - v6); /*0x4c9356*/
      }
      v7 = TimeLeft; /*0x4c9358*/
LABEL_8:
      LOWORD(v11) = v11 - v7 * ((__int16)(LOWORD(this->DesiredFacing) - LOWORD(this->StartFacing)) / (__int16)v4); /*0x4c935a*/
      goto LABEL_9; /*0x4c9365*/
    }
  }
  v8 = this->DesiredFacing; /*0x4c9375*/
LABEL_12:
  if ( (unsigned short)v8 == desiredFacing->Value ) /*0x4c937e*/
  {
    p_RotationTimer = &this->RotationTimer; /*0x4c93b3*/
    result = 0; /*0x4c93b6*/
    p_RotationTimer->StartTime = *(unsigned int *)&HouseClass_Player.__pad_5568[23248]; /*0x4c93b8*/
    p_RotationTimer->pad_04 = v12; /*0x4c93ba*/
  }
  else
  {
    this->DesiredFacing = (unsigned int)*desiredFacing; /*0x4c9382*/
    this->StartFacing = (unsigned int)*desiredFacing; /*0x4c9386*/
    p_RotationTimer = &this->RotationTimer; /*0x4c9390*/
    p_RotationTimer->StartTime = *(unsigned int *)&HouseClass_Player.__pad_5568[23248]; /*0x4c9393*/
    p_RotationTimer->pad_04 = v12; /*0x4c9399*/
    result = 1; /*0x4c939c*/
  }
  p_RotationTimer->TimeLeft = 0; /*0x4c939e*/
  return result; /*0x4c93a1*/

}
double FacingClass::Update(...) { return 0; }

  __int16 v2; // ax
  __int16 ROT; // bp
  int StartTime; // edi
  int TimeLeft; // edx
  int v6; // esi
  int v7; // eax
  int v8; // edi
  int v9; // edx
  __int16 v10; // di
  IUnknown *v11; // eax
  DirStruct v12; // edx
  int v13; // eax
  CDTimerClass *p_RotationTimer; // ecx
  IUnknown *v16; // [esp+0h] [ebp-10h]
  int v17; // [esp+8h] [ebp-8h]

  v2 = this->DesiredFacing; /*0x4c9224*/
  if ( LOWORD(this->DesiredFacing) == desiredFacing->Value ) /*0x4c922d*/
    return 0; /*0x4c92f7*/
  ROT = this->ROT; /*0x4c9235*/
  if ( ROT <= 0 ) /*0x4c923e*/
    goto LABEL_15; /*0x4c923e*/
  StartTime = this->RotationTimer.StartTime; /*0x4c9240*/
  TimeLeft = this->RotationTimer.TimeLeft; /*0x4c9243*/
  if ( StartTime != -1 ) /*0x4c924f*/
  {
    if ( *(unsigned int *)&HouseClass_Player.__pad_5568[23248] - StartTime >= TimeLeft ) /*0x4c9257*/
    {
LABEL_15:
      v11 = (IUnknown *)this->DesiredFacing; /*0x4c92af*/
      goto LABEL_16; /*0x4c92af*/
    }
    TimeLeft -= *(unsigned int *)&HouseClass_Player.__pad_5568[23248] - StartTime; /*0x4c9259*/
  }
  if ( !TimeLeft ) /*0x4c925d*/
    goto LABEL_15; /*0x4c925d*/
  v6 = (__int16)(v2 - LOWORD(this->StartFacing)); /*0x4c9266*/
  v7 = abs16(v2 - LOWORD(this->StartFacing)) / ROT; /*0x4c9271*/
  v16 = (IUnknown *)this->DesiredFacing; /*0x4c9275*/
  if ( (__int16)v7 > 0 ) /*0x4c927c*/
  {
    v8 = this->RotationTimer.StartTime; /*0x4c927e*/
    v9 = this->RotationTimer.TimeLeft; /*0x4c9281*/
    if ( v8 != -1 ) /*0x4c9287*/
    {
      if ( *(unsigned int *)&HouseClass_Player.__pad_5568[23248] - v8 >= v9 ) /*0x4c928f*/
      {
        v10 = 0; /*0x4c92ab*/
        goto LABEL_12; /*0x4c92ad*/
      }
      LOWORD(v9) = v9 - (*(unsigned short *)&HouseClass_Player.__pad_5568[23248] - v8); /*0x4c9291*/
    }
    v10 = v9; /*0x4c9293*/
LABEL_12:
    LOWORD(v16) = (unsigned short)v16 - v10 * (v6 / (__int16)v7); /*0x4c9295*/
  }
  v11 = v16; /*0x4c92a5*/
LABEL_16:
  this->StartFacing = (unsigned int)v11; /*0x4c92b1*/
  v12 = *desiredFacing; /*0x4c92bb*/
  this->DesiredFacing = (unsigned int)*desiredFacing; /*0x4c92bd*/
  if ( ROT > 0 ) /*0x4c92bf*/
  {
    v13 = abs16(v12.Value - LOWORD(this->StartFacing)) / ROT; /*0x4c92da*/
    p_RotationTimer = &this->RotationTimer; /*0x4c92e0*/
    p_RotationTimer->StartTime = *(unsigned int *)&HouseClass_Player.__pad_5568[23248]; /*0x4c92e3*/
    p_RotationTimer->pad_04 = v17; /*0x4c92e5*/
    p_RotationTimer->TimeLeft = v13; /*0x4c92e8*/
  }
  return 1; /*0x4c92f1*/

}
double Field::Int_Set(...) { return 0; }

  *(this + 8) = aP1; /*0x434114*/
  return (int)aP1->__pad_0; /*0x434117*/

}
double FileExtension::Constructor(...) { return 0; }

  unsigned char *v4; // eax
  int v5; // ecx
  char *v6; // eax
  unsigned char *v7; // ecx
  int v8; // edx

  *(this + 1) = 0; /*0x62824d*/
  *(this + 2) = a2; /*0x628250*/
  *((unsigned char *)this + 12) = 1; /*0x628253*/
  *((unsigned char *)this + 13) = 0; /*0x628257*/
  *this = &vt_VectorClass_HSVClass; /*0x62825a*/
  if ( a2 ) /*0x628260*/
  {
    if ( a3 ) /*0x628268*/
    {
      if ( a2 - 1 >= 0 ) /*0x62826f*/
      {
        v4 = (unsigned char *)(a3 + 2); /*0x628271*/
        v5 = a2; /*0x628274*/
        do /*0x628281*/
        {
          *(v4 - 2) = 0; /*0x628275*/
          *(v4 - 1) = 0; /*0x628278*/
          *v4 = 0; /*0x62827b*/
          v4 += 3; /*0x62827d*/
          --v5; /*0x628280*/
        }
        while ( v5 ); /*0x628281*/
      }
      *(this + 1) = a3; /*0x628283*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(3 * a2); /*0x62828c*/
      if ( v6 ) /*0x628296*/
      {
        if ( a2 - 1 >= 0 ) /*0x62829d*/
        {
          v7 = v6 + 2; /*0x62829f*/
          v8 = a2; /*0x6282a2*/
          do /*0x6282af*/
          {
            *(v7 - 2) = 0; /*0x6282a3*/
            *(v7 - 1) = 0; /*0x6282a6*/
            *v7 = 0; /*0x6282a9*/
            v7 += 3; /*0x6282ab*/
            --v8; /*0x6282ae*/
          }
          while ( v8 ); /*0x6282af*/
        }
      }
      else
      {
        v6 = 0; /*0x6282b3*/
      }
      *(this + 1) = v6; /*0x6282b5*/
      *((unsigned char *)this + 13) = 1; /*0x6282b8*/
    }
  }
  *this = &vt_DynamicVectorClass_HSVClass; /*0x6282bc*/
  *(this + 5) = 10; /*0x6282c2*/
  *(this + 4) = 0; /*0x6282c9*/
  return this; /*0x6282ce*/

}
double FileExtension::MapHandler(...) { return 0; }

  CoordStruct *v1; // edi
  CoordStruct *v3; // eax
  VectorClass *v4; // eax
  VectorClass *v5; // esi
  unsigned int *eax6; // eax
  VectorClass *v6; // eax
  int *v8; // eax
  int X; // esi
  int v10; // ebp
  int v11; // esi
  int v12; // ebx
  int v13; // edi
  int result; // eax
  int v15; // ebp
  unsigned int *v16; // ebx
  int v17; // edx
  int v18; // esi
  unsigned int *v19; // ebp
  int v20; // esi
  int v21; // edi
  ObjectClass *v22; // eax
  int v23; // esi
  int v24; // esi
  int v25; // ebp
  int v26; // esi
  int i; // ebx
  int v28; // edi
  int v30; // [esp+14h] [ebp-208h] BYREF
  ObjectClass String; // [esp+18h] [ebp-204h] BYREF
  unsigned char v32[260]; // [esp+118h] [ebp-104h] BYREF

  v1 = *(&g_MatrixTransformState + 5816); /*0x6263da*/
  if ( !*(&g_MatrixTransformState + 5816) ) /*0x6263e8*/
  {
    v3 = (CoordStruct *)__2_YAPAXI_Z(0x10u); /*0x6263f0*/
    v1 = v3; /*0x6263f5*/
    if ( v3 ) /*0x6263fc*/
    {
      v3->X = -1; /*0x626404*/
      v4 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x62640a*/
      v5 = v4; /*0x62640f*/
      if ( v4 ) /*0x626416*/
      {
        StringVector::Construct(v4, 0, 0); /*0x62641e*/
        v5->vtable0 = &vt_DynamicVectorClass_char; /*0x626423*/
        v5[1].Items = (void *)10; /*0x626429*/
        v5[1].vtable0 = 0; /*0x626430*/
      }
      else
      {
        v5 = 0; /*0x626439*/
      }
      v1->Y = (int)v5; /*0x62643d*/
      eax6 = (unsigned int *)__2_YAPAXI_Z(0x18u); /*0x626440*/
      if ( eax6 ) /*0x62644a*/
        v6 = (VectorClass *)FileExtension::Constructor(eax6, 0, 0); /*0x626452*/
      else
        v6 = 0; /*0x626459*/
      v1->Z = (int)v6; /*0x62645d*/
      v8 = (int *)__2_YAPAXI_Z(0x10u); /*0x626460*/
      if ( v8 ) /*0x62646a*/
        v1[1].X = (int)DynamicVectorArray::Constructor(v8, 10, 31, (int)HashStringMod31); /*0x62647c*/
      else
        v1[1].X = 0; /*0x626483*/
    }
    else
    {
      v1 = 0; /*0x626488*/
    }
    *(&g_MatrixTransformState + 5816) = v1; /*0x62648a*/
  }
  String::CopyUpper(String.__pad_0, this); /*0x626495*/
  X = v1[1].X; /*0x62649a*/
  v10 = *(unsigned int *)X + 24 * ((*(int (**)(ObjectClass *))(X + 4))(&String) % *(unsigned int *)(X + 8)); /*0x6264b1*/
  v11 = *(unsigned int *)(v10 + 16) - 1; /*0x6264b4*/
  if ( v11 < 0 ) /*0x6264b5*/
    goto LABEL_21; /*0x6264b5*/
  v12 = 260 * v11; /*0x6264be*/
  while ( 1 ) /*0x6264c6*/
  {
    v13 = *(unsigned int *)(v10 + 4) + v12; /*0x6264c6*/
    if ( String::Equals((const char *)v13, &String) ) /*0x6264cf*/
      break; /*0x6264cf*/
    --v11; /*0x6264d8*/
    v12 -= 260; /*0x6264d9*/
    if ( v11 < 0 ) /*0x6264e1*/
      goto LABEL_21; /*0x6264e1*/
  }
  if ( v13 == -256 || (result = *(unsigned int *)(*(unsigned int *)(v13 + 256) + 256)) == 0 ) /*0x6264f9*/
  {
LABEL_21:
    v15 = (int)*(&g_MatrixTransformState + 5816); /*0x6264ff*/
    v16 = MIXFile::Load(*(&g_MatrixTransformState + 5816), this); /*0x626511*/
    v17 = __2_YAPAXI_Z(0x104u); /*0x62651d*/
    if ( v17 ) /*0x626524*/
    {
      strcpy((char *)v17, this->__pad_0); /*0x62653e*/
      *(unsigned int *)(v17 + 256) = v16; /*0x626547*/
      v30 = v17; /*0x62654d*/
    }
    else
    {
      v30 = 0; /*0x626553*/
    }
    String::CopyUpper(String.__pad_0, this); /*0x626564*/
    v18 = *(unsigned int *)(v15 + 12); /*0x626569*/
    v19 = (unsigned int *)(*(unsigned int *)v18 /*0x626580*/
                   + 24 * ((*(int (**)(ObjectClass *))(v18 + 4))(&String) % *(unsigned int *)(v18 + 8)));
    v20 = v19[4] - 1; /*0x626583*/
    if ( v20 < 0 ) /*0x626584*/
    {
LABEL_28:
      v22 = (ObjectClass *)FileExtension::Check((int)v32, String.__pad_0, &v30); /*0x6265ae*/
      FileExtension::CheckExtensionMatch(v19, v22); /*0x6265c7*/
    }
    else
    {
      v21 = 260 * v20; /*0x62658d*/
      while ( !String::Equals((const char *)(v21 + v19[1]), &String) ) /*0x6265a1*/
      {
        --v20; /*0x6265a3*/
        v21 -= 260; /*0x6265a4*/
        if ( v20 < 0 ) /*0x6265ac*/
          goto LABEL_28; /*0x6265ac*/
      }
    }
    v23 = (int)*(&g_MatrixTransformState + 5816); /*0x6265cc*/
    String::CopyUpper(String.__pad_0, this); /*0x6265d7*/
    v24 = *(unsigned int *)(v23 + 12); /*0x6265dc*/
    v25 = *(unsigned int *)v24 + 24 * ((*(int (**)(ObjectClass *))(v24 + 4))(&String) % *(unsigned int *)(v24 + 8)); /*0x6265f3*/
    v26 = *(unsigned int *)(v25 + 16) - 1; /*0x6265f6*/
    if ( v26 < 0 ) /*0x6265f7*/
      return 0; /*0x6265f7*/
    for ( i = 260 * v26; ; i -= 260 ) /*0x626600*/
    {
      v28 = i + *(unsigned int *)(v25 + 4); /*0x62660a*/
      if ( String::Equals((const char *)v28, &String) ) /*0x62660f*/
        break; /*0x62660f*/
      if ( --v26 < 0 ) /*0x626621*/
        return 0; /*0x62662f*/
    }
    if ( v28 == -256 ) /*0x626638*/
      return 0; /*0x62663d*/
    else
      return *(unsigned int *)(*(unsigned int *)(v28 + 256) + 256); /*0x626649*/
  }
  return result; /*0x626623*/

}
double FileFind::Close(...) { return 0; }

  FileFind::ReleaseAllHandles(this); /*0x5bbed0*/

}
double FileFind::CloseHandle(...) { return 0; }

  HANDLE result; // eax

  result = hFindFile; /*0x47b130*/
  if ( hFindFile != (HANDLE)-1 ) /*0x47b138*/
  {
    result = (HANDLE)FindClose(hFindFile); /*0x47b13b*/
    hFindFile = (HANDLE)-1; /*0x47b141*/
  }
  return result; /*0x47b14b*/

}
double FileFind::Next(...) { return 0; }

  struct _WIN32_FIND_DATAA FindFileData; // [esp+4h] [ebp-140h] BYREF

  if ( this ) /*0x47b0cb*/
  {
    if ( hFindFile != (HANDLE)-1 && FindNextFileA(hFindFile, &FindFileData) ) /*0x47b0dd*/
    {
      strcpy(this, FindFileData.cFileName); /*0x47b104*/
      return 1; /*0x47b116*/
    }
    *this = 0; /*0x47b117*/
  }
  return 0; /*0x47b10f*/

}
double FileStraw::Destructor(...) { return 0; }

  int v2; // ecx

  v2 = *((unsigned int *)this + 3); /*0x7ba593*/
  *(unsigned int *)this = &vt_FileStraw; /*0x7ba596*/
  if ( v2 && *((unsigned char *)this + 16) ) /*0x7ba5a0*/
  {
    (*(void (**)(int))(*(unsigned int *)v2 + 52))(v2); /*0x7ba5a9*/
    *((unsigned char *)this + 16) = 0; /*0x7ba5ac*/
    *((unsigned int *)this + 3) = 0; /*0x7ba5b0*/
  }
  return Straw::Dtor((int *)this); /*0x7ba5be*/

}
double FileStraw::Open(...) { return 0; }

  int v3; // esi
  unsigned int v5[4]; // [esp+4h] [ebp-14h] BYREF
  char v6; // [esp+14h] [ebp-4h]

  *(this + 1) = 0; /*0x525a19*/
  *(this + 2) = 0; /*0x525a1c*/
  v5[1] = 0; /*0x525a1f*/
  v5[2] = 0; /*0x525a23*/
  v6 = 0; /*0x525a27*/
  v5[3] = a2; /*0x525a2f*/
  v5[0] = &vt_FileStraw; /*0x525a3a*/
  v3 = INIClass::LoadFile(v5, a3); /*0x525a4b*/
  FileStraw::Destructor(v5); /*0x525a4d*/
  return v3; /*0x525a54*/

}
double FileTree::CleanupAll(...) { return 0; }

  void *v0; // esi
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi
  void *v4; // esi
  void *v5; // esi
  void *v6; // esi
  void *v7; // esi
  void *v8; // esi
  void *v9; // esi
  void *v10; // esi
  void *v11; // esi
  void *v12; // esi
  void *v13; // esi
  void *v14; // esi
  void *v15; // esi

  if ( MEMORY[0xB0FC9F] ) /*0x73010b*/
  {
    v0 = MEMORY[0xB0F9EC]; /*0x73010d*/
    if ( MEMORY[0xB0F9EC] ) /*0x730115*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0F9EC]); /*0x730119*/
      __3_YAXPAX_Z(v0); /*0x73011f*/
    }
    MEMORY[0xB0FC9F] = 0; /*0x730127*/
  }
  MEMORY[0xB0F9EC] = 0; /*0x730132*/
  if ( MEMORY[0xB0FCA0] ) /*0x73013a*/
  {
    v1 = MEMORY[0xB0FAD4]; /*0x73013c*/
    if ( MEMORY[0xB0FAD4] ) /*0x730144*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FAD4]); /*0x730148*/
      __3_YAXPAX_Z(v1); /*0x73014e*/
    }
    MEMORY[0xB0FCA0] = 0; /*0x730156*/
  }
  MEMORY[0xB0FAD4] = 0; /*0x730161*/
  if ( MEMORY[0xB0FCA1] ) /*0x730169*/
  {
    v2 = MEMORY[0xB0FAC8]; /*0x73016b*/
    if ( MEMORY[0xB0FAC8] ) /*0x730173*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FAC8]); /*0x730177*/
      __3_YAXPAX_Z(v2); /*0x73017d*/
    }
    MEMORY[0xB0FCA1] = 0; /*0x730185*/
  }
  MEMORY[0xB0FAC8] = 0; /*0x730190*/
  if ( MEMORY[0xB0FCA2] ) /*0x730198*/
  {
    v3 = MEMORY[0xB0FA50]; /*0x73019a*/
    if ( MEMORY[0xB0FA50] ) /*0x7301a2*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA50]); /*0x7301a6*/
      __3_YAXPAX_Z(v3); /*0x7301ac*/
    }
    MEMORY[0xB0FCA2] = 0; /*0x7301b4*/
  }
  MEMORY[0xB0FA50] = 0; /*0x7301bf*/
  if ( MEMORY[0xB0FCA3] ) /*0x7301c7*/
  {
    v4 = MEMORY[0xB0FB08]; /*0x7301c9*/
    if ( MEMORY[0xB0FB08] ) /*0x7301d1*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FB08]); /*0x7301d5*/
      __3_YAXPAX_Z(v4); /*0x7301db*/
    }
    MEMORY[0xB0FCA3] = 0; /*0x7301e3*/
  }
  MEMORY[0xB0FB08] = 0; /*0x7301ee*/
  if ( MEMORY[0xB0FCA4] ) /*0x7301f6*/
  {
    v5 = MEMORY[0xB0F9E0]; /*0x7301f8*/
    if ( MEMORY[0xB0F9E0] ) /*0x730200*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0F9E0]); /*0x730204*/
      __3_YAXPAX_Z(v5); /*0x73020a*/
    }
    MEMORY[0xB0FCA4] = 0; /*0x730212*/
  }
  MEMORY[0xB0F9E0] = 0; /*0x73021d*/
  if ( MEMORY[0xB0FCA5] ) /*0x730225*/
  {
    v6 = MEMORY[0xB0FA68]; /*0x730227*/
    if ( MEMORY[0xB0FA68] ) /*0x73022f*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA68]); /*0x730233*/
      __3_YAXPAX_Z(v6); /*0x730239*/
    }
    MEMORY[0xB0FCA5] = 0; /*0x730241*/
  }
  MEMORY[0xB0FA68] = 0; /*0x73024c*/
  if ( MEMORY[0xB0FCA6] ) /*0x730254*/
  {
    v7 = MEMORY[0xB0FA70]; /*0x730256*/
    if ( MEMORY[0xB0FA70] ) /*0x73025e*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA70]); /*0x730262*/
      __3_YAXPAX_Z(v7); /*0x730268*/
    }
    MEMORY[0xB0FCA6] = 0; /*0x730270*/
  }
  MEMORY[0xB0FA70] = 0; /*0x73027b*/
  if ( MEMORY[0xB0FCA7] ) /*0x730283*/
  {
    v8 = MEMORY[0xB0FAFC]; /*0x730285*/
    if ( MEMORY[0xB0FAFC] ) /*0x73028d*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FAFC]); /*0x730291*/
      __3_YAXPAX_Z(v8); /*0x730297*/
    }
    MEMORY[0xB0FCA7] = 0; /*0x73029f*/
  }
  MEMORY[0xB0FAFC] = 0; /*0x7302aa*/
  if ( MEMORY[0xB0FCA8] ) /*0x7302b2*/
  {
    v9 = MEMORY[0xB0FA00]; /*0x7302b4*/
    if ( MEMORY[0xB0FA00] ) /*0x7302bc*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA00]); /*0x7302c0*/
      __3_YAXPAX_Z(v9); /*0x7302c6*/
    }
    MEMORY[0xB0FCA8] = 0; /*0x7302ce*/
  }
  MEMORY[0xB0FA00] = 0; /*0x7302d9*/
  if ( MEMORY[0xB0FCA9] ) /*0x7302e1*/
  {
    v10 = MEMORY[0xB0FA8C]; /*0x7302e3*/
    if ( MEMORY[0xB0FA8C] ) /*0x7302eb*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA8C]); /*0x7302ef*/
      __3_YAXPAX_Z(v10); /*0x7302f5*/
    }
    MEMORY[0xB0FCA9] = 0; /*0x7302fd*/
  }
  MEMORY[0xB0FA8C] = 0; /*0x730308*/
  if ( MEMORY[0xB0FCAA] ) /*0x730310*/
  {
    v11 = MEMORY[0xB0FA48]; /*0x730312*/
    if ( MEMORY[0xB0FA48] ) /*0x73031a*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA48]); /*0x73031e*/
      __3_YAXPAX_Z(v11); /*0x730324*/
    }
    MEMORY[0xB0FCAA] = 0; /*0x73032c*/
  }
  MEMORY[0xB0FA48] = 0; /*0x730337*/
  if ( MEMORY[0xB0FCAB] ) /*0x73033f*/
  {
    v12 = MEMORY[0xB0FA3C]; /*0x730341*/
    if ( MEMORY[0xB0FA3C] ) /*0x730349*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA3C]); /*0x73034d*/
      __3_YAXPAX_Z(v12); /*0x730353*/
    }
    MEMORY[0xB0FCAB] = 0; /*0x73035b*/
  }
  MEMORY[0xB0FA3C] = 0; /*0x730366*/
  if ( MEMORY[0xB0FCAC] ) /*0x73036e*/
  {
    v13 = MEMORY[0xB0FA90]; /*0x730370*/
    if ( MEMORY[0xB0FA90] ) /*0x730378*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA90]); /*0x73037c*/
      __3_YAXPAX_Z(v13); /*0x730382*/
    }
    MEMORY[0xB0FCAC] = 0; /*0x73038a*/
  }
  MEMORY[0xB0FA90] = 0; /*0x730395*/
  if ( MEMORY[0xB0FCAD] ) /*0x73039d*/
  {
    v14 = MEMORY[0xB0FAA8]; /*0x73039f*/
    if ( MEMORY[0xB0FAA8] ) /*0x7303a7*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FAA8]); /*0x7303ab*/
      __3_YAXPAX_Z(v14); /*0x7303b1*/
    }
    MEMORY[0xB0FCAD] = 0; /*0x7303b9*/
  }
  MEMORY[0xB0FAA8] = 0; /*0x7303c4*/
  if ( MEMORY[0xB0FCAE] ) /*0x7303cc*/
  {
    v15 = MEMORY[0xB0FABC]; /*0x7303ce*/
    if ( MEMORY[0xB0FABC] ) /*0x7303d6*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FABC]); /*0x7303da*/
      __3_YAXPAX_Z(v15); /*0x7303e0*/
    }
    MEMORY[0xB0FCAE] = 0; /*0x7303e8*/
  }
  MEMORY[0xB0FABC] = 0; /*0x7303ee*/

}
double FileTreeNode::Destroy(...) { return 0; }

  void *v2; // edi
  int v3; // eax
  int v4; // eax

  if ( *(unsigned short *)this == 0xFFFF ) /*0x69e507*/
  {
    if ( *((unsigned char *)this + 16) ) /*0x69e509*/
    {
      v2 = (void *)*((unsigned int *)this + 3); /*0x69e511*/
      if ( v2 ) /*0x69e516*/
      {
        FileTreeNode::Destroy(*((unsigned int *)this + 3)); /*0x69e51a*/
        __3_YAXPAX_Z(v2); /*0x69e520*/
      }
      *((unsigned int *)this + 3) = 0; /*0x69e528*/
      *((unsigned char *)this + 16) = 0; /*0x69e52f*/
    }
    v3 = *((unsigned int *)this + 6); /*0x69e534*/
    if ( v3 ) /*0x69e539*/
      *(unsigned int *)(v3 + 28) = *((unsigned int *)this + 7); /*0x69e53e*/
    v4 = *((unsigned int *)this + 7); /*0x69e541*/
    if ( v4 ) /*0x69e546*/
      *(unsigned int *)(v4 + 24) = *((unsigned int *)this + 6); /*0x69e54b*/
    else
      MEMORY[0xB077B0] = (void *)*((unsigned int *)this + 6); /*0x69e553*/
    if ( *((unsigned int *)this + 2) ) /*0x69e558*/
    {
      free(*((void **)this + 2)); /*0x69e560*/
      *((unsigned int *)this + 2) = 0; /*0x69e568*/
    }
  }

}
double Flag::Flag_field_0x08(...) { return 0; }
// 0x5176b0
double Flag::IsNot2(...) { return 0; }

  return (~(unsigned __int8)*this & 2) != 0; /*0x5176b8*/

}
  return (~(unsigned __int8)*this & 2) != 0; /*0x5176b8*/

}
double Flag::IsZero(...) { return 0; }

  return *this == 0; /*0x4f4ca9*/

}
// 0x645d20
double Float4::Copy(...) { return 0; }

  *this = *(float *)&aP2->field_0; /*0x645d27*/
  *(this + 1) = *(float *)&aP2->field_4; /*0x645d2c*/
  *(this + 2) = *(float *)&aP2->field_8; /*0x645d32*/
  *(this + 3) = *(float *)&aP2->field_C; /*0x645d3c*/
  aP1->field_0 = *(int *)this; /*0x645d43*/
  aP1->field_4 = *(int *)(this + 1); /*0x645d48*/
  aP1->field_8 = *(int *)(this + 2); /*0x645d4e*/
  aP1->field_C = *(int *)(this + 3); /*0x645d55*/
  return &aP1->field_0; /*0x645d54*/

}
  *this = *(float *)&aP2->field_0; /*0x645d27*/
  *(this + 1) = *(float *)&aP2->field_4; /*0x645d2c*/
  *(this + 2) = *(float *)&aP2->field_8; /*0x645d32*/
  *(this + 3) = *(float *)&aP2->field_C; /*0x645d3c*/
  aP1->field_0 = *(int *)this; /*0x645d43*/
  aP1->field_4 = *(int *)(this + 1); /*0x645d48*/
  aP1->field_8 = *(int *)(this + 2); /*0x645d4e*/
  aP1->field_C = *(int *)(this + 3); /*0x645d55*/
  return &aP1->field_0; /*0x645d54*/

}
double FontClass::InitMetrics(...) { return 0; }

  int v8; // ecx
  char *v9; // eax
  int v10; // eax

  v8 = 256; /*0x68c715*/
  v9 = this + 4; /*0x68c71f*/
  do /*0x68c72d*/
  {
    *v9 = 0; /*0x68c721*/
    v9[1] = 0; /*0x68c723*/
    v9[2] = 0; /*0x68c726*/
    v9 += 3; /*0x68c729*/
    --v8; /*0x68c72c*/
  }
  while ( v8 ); /*0x68c72d*/
  *((unsigned int *)this + 193) = _strdup(Source); /*0x68c744*/
  *((unsigned short *)this + 388) = *(unsigned short *)aP2->__pad_0; /*0x68c752*/
  *(this + 778) = aP2->__pad_0[2]; /*0x68c75d*/
  *((unsigned int *)this + 195) = 0; /*0x68c778*/
  *((unsigned int *)this + 196) = a6; /*0x68c77e*/
  *((unsigned int *)this + 197) = 16; /*0x68c784*/
  *((unsigned int *)this + 198) = 15; /*0x68c78a*/
  *((unsigned int *)this + 199) = 25; /*0x68c794*/
  *((unsigned int *)this + 200) = 24; /*0x68c79e*/
  *((unsigned int *)this + 201) = 22; /*0x68c7a8*/
  *((unsigned int *)this + 202) = 16; /*0x68c7b2*/
  *((unsigned int *)this + 203) = 19; /*0x68c7b8*/
  *((unsigned int *)this + 204) = 16; /*0x68c7c2*/
  *((unsigned int *)this + 205) = 16; /*0x68c7c8*/
  *((unsigned int *)this + 206) = 21; /*0x68c7d2*/
  *((unsigned int *)this + 195) = FontClass::CreateGlyphColor( /*0x68c7ee*/
                              this + 776,
                              aP3,
                              a5,
                              this + 4,
                              *(int *)&MEMORY[0x87F8E4].__pad_5568[9404],
                              a6,
                              1000,
                              1000,
                              1000,
                              (int)&stru_830620.__pad_579C[33776]);
  if ( a7 ) /*0x68c7fb*/
  {
    if ( MEMORY[0xB054E0] < MEMORY[0xB054D8] /*0x68c830*/
      || (MEMORY[0xB054DD] || !MEMORY[0xB054D8])
      && MEMORY[0xB054E4] > 0
      && ((unsigned __int8 (*)(DynamicVector **, int, unsigned int))MEMORY[0xB054D0]->field_8)(
           &MEMORY[0xB054D0],
           MEMORY[0xB054D8] + MEMORY[0xB054E4],
           0) )
    {
      v10 = MEMORY[0xB054E0]++; /*0x68c83d*/
      *((unsigned int *)MEMORY[0xB054D4] + v10) = this; /*0x68c84c*/
    }
    *(unsigned int *)this = MEMORY[0xB054E0]; /*0x68c855*/
  }
  return this; /*0x68c859*/

}
double FontClass::RenderGlyph(...) { return 0; }

  unsigned __int16 v5; // di
  unsigned int *v8; // ecx
  unsigned __int8 *v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // ebp
  LONG v13; // ebx
  AbstractClass *v14; // edx
  unsigned __int8 *v15; // ebp
  LONG v16; // edi
  char *v17; // eax
  int v18; // esi
  unsigned short *v19; // esi
  int v20; // ecx
  AbstractClass *v21; // eax
  char v22; // dl
  bool v23; // zf
  __int16 v24; // bp
  unsigned short *v25; // esi
  char *v26; // eax
  int v27; // ecx
  unsigned short *v28; // esi
  char *v29; // eax
  int v30; // ecx
  unsigned short *v31; // esi
  LONG v32; // eax
  int v33; // ecx
  unsigned short *v34; // esi
  LONG v35; // eax
  int v36; // ecx
  unsigned short *v37; // esi
  LONG v38; // eax
  int v39; // ecx
  unsigned short *v40; // esi
  LONG v41; // eax
  int v42; // ecx
  unsigned short *v43; // esi
  LONG v44; // eax
  int v45; // ecx
  int v46; // ecx
  int v47; // eax
  int v48; // edi
  int v49; // ebp
  unsigned __int8 *v50; // edi
  int v51; // eax
  char *v52; // ebx
  unsigned short *v53; // ecx
  char v54; // dl
  unsigned short *v55; // ecx
  int v56; // eax
  unsigned short *v57; // ecx
  int v58; // eax
  unsigned short *v59; // ecx
  int v60; // eax
  unsigned short *v61; // ecx
  int v62; // eax
  unsigned short *v63; // ecx
  int v64; // eax
  unsigned short *v65; // ecx
  int v66; // eax
  unsigned short *v67; // ecx
  int v68; // eax
  int v69; // [esp+0h] [ebp-40h] BYREF
  int v70; // [esp+10h] [ebp-30h]
  unsigned __int8 *v71; // [esp+14h] [ebp-2Ch]
  unsigned short *v72; // [esp+18h] [ebp-28h]
  int v73; // [esp+1Ch] [ebp-24h]
  struct tagRECT rc; // [esp+20h] [ebp-20h] BYREF
  LONG v75; // [esp+30h] [ebp-10h] BYREF
  LONG v76; // [esp+34h] [ebp-Ch]
  LONG v77; // [esp+38h] [ebp-8h]
  LONG v78; // [esp+3Ch] [ebp-4h]
  __int16 aP1a; // [esp+44h] [ebp+4h]
  char *yTop; // [esp+4Ch] [ebp+Ch]
  int yTopa; // [esp+4Ch] [ebp+Ch]
  int aP4a; // [esp+50h] [ebp+10h]

  v5 = (unsigned __int16)aP1; /*0x434127*/
  v70 = this; /*0x434131*/
  if ( (unsigned short)aP1 == 9 ) /*0x434135*/
    return (int)&aP2->__pad_0[*(unsigned int *)(this + 40) /*0x434155*/
                            - (int)&aP2->__pad_0[*(unsigned int *)(this + 40) - *(unsigned int *)(this + 32)]
                            % *(unsigned int *)(this + 40)];
  aP1a = *(unsigned short *)(this + 36); /*0x43415c*/
  if ( aP4 != (AbstractClass *)-1 ) /*0x434168*/
    aP1a = (__int16)aP4; /*0x43416a*/
  v8 = *(unsigned int **)(this + 4); /*0x43416e*/
  v9 = 0; /*0x434171*/
  if ( v8 ) /*0x434175*/
  {
    v10 = *(unsigned __int16 *)(v8[6] + 2 * v5); /*0x434182*/
    if ( (unsigned short)v10 ) /*0x434188*/
      v9 = (unsigned __int8 *)(v8[7] + (v10 - 1) * v8[5]); /*0x434191*/
  }
  if ( !v9 ) /*0x434196*/
  {
    if ( &v69 != (int *)-68 ) /*0x43419e*/
      aP1a ^= 0x5555u; /*0x4341a0*/
    v9 = *(unsigned __int8 **)(this + 8); /*0x4341a8*/
    if ( !v9 ) /*0x4341ad*/
      return (int)aP2->__pad_0; /*0x4341ba*/
  }
  if ( !*(unsigned int *)(this + 12) ) /*0x4341bd*/
    return (int)aP2->__pad_0; /*0x4341cf*/
  v11 = v8[2]; /*0x4341d5*/
  v71 = v9 + 1; /*0x4341d8*/
  aP4a = *v9; /*0x4341e7*/
  if ( !*(unsigned char *)(this + 65) ) /*0x4341e0*/
    goto LABEL_71; /*0x4341e0*/
  SetRect(&rc, (int)aP2, (int)aP3, (int)&aP2->__pad_0[*v9 - 1], (int)&aP3->__pad_0[v11 - 1]); /*0x43420a*/
  v12 = v70; /*0x434210*/
  if ( !sub_434840(&v75, &rc, (unsigned int *)(v70 + 48)) ) /*0x434224*/
    return (int)&aP2->__pad_0[aP4a + *(unsigned int *)(v12 + 44)]; /*0x43423f*/
  v13 = v75; /*0x434242*/
  if ( rc.left >= v75 && rc.right <= v77 && rc.top >= v76 && rc.bottom <= v78 ) /*0x43426c*/
  {
LABEL_71:
    v47 = v11; /*0x434409*/
    v48 = v11 - 1; /*0x43440d*/
    v49 = *(unsigned int *)(v70 + 12) + 2 * ((unsigned int)aP2 + (unsigned int)aP3 * *(unsigned int *)(v70 + 16)); /*0x434410*/
    if ( !v47 ) /*0x434413*/
    {
LABEL_102:
      v14 = (AbstractClass *)v70; /*0x4344e0*/
      return (int)&aP2->__pad_0[aP4a + *(unsigned int *)&v14[1].__pad_0[8]]; /*0x4344e0*/
    }
    yTopa = v48 + 1; /*0x43441e*/
    v50 = v71; /*0x434422*/
LABEL_73:
    v51 = aP4a; /*0x434426*/
    v52 = (char *)v50; /*0x43442a*/
    v53 = (unsigned short *)v49; /*0x43442c*/
    while ( 1 ) /*0x43442e*/
    {
      v54 = *v52++; /*0x43442e*/
      if ( v54 ) /*0x434433*/
      {
        if ( v54 < 0 ) /*0x434440*/
          *v53 = aP1a; /*0x434442*/
        v55 = v53 + 1; /*0x434445*/
        v56 = v51 - 1; /*0x434448*/
        if ( v56 <= 0 ) /*0x43444b*/
          goto LABEL_101; /*0x43444b*/
        if ( (v54 & 0x40) != 0 ) /*0x434450*/
          *v55 = aP1a; /*0x434452*/
        v57 = v55 + 1; /*0x434455*/
        v58 = v56 - 1; /*0x434458*/
        if ( v58 <= 0 ) /*0x43445b*/
          goto LABEL_101; /*0x43445b*/
        if ( (v54 & 0x20) != 0 ) /*0x434460*/
          *v57 = aP1a; /*0x434462*/
        v59 = v57 + 1; /*0x434465*/
        v60 = v58 - 1; /*0x434468*/
        if ( v60 <= 0 ) /*0x43446b*/
          goto LABEL_101; /*0x43446b*/
        if ( (v54 & 0x10) != 0 ) /*0x434470*/
          *v59 = aP1a; /*0x434472*/
        v61 = v59 + 1; /*0x434475*/
        v62 = v60 - 1; /*0x434478*/
        if ( v62 <= 0 ) /*0x43447b*/
          goto LABEL_101; /*0x43447b*/
        if ( (v54 & 8) != 0 ) /*0x434480*/
          *v61 = aP1a; /*0x434482*/
        v63 = v61 + 1; /*0x434485*/
        v64 = v62 - 1; /*0x434488*/
        if ( v64 <= 0 ) /*0x43448b*/
          goto LABEL_101; /*0x43448b*/
        if ( (v54 & 4) != 0 ) /*0x434490*/
          *v63 = aP1a; /*0x434492*/
        v65 = v63 + 1; /*0x434495*/
        v66 = v64 - 1; /*0x434498*/
        if ( v66 <= 0 ) /*0x43449b*/
          goto LABEL_101; /*0x43449b*/
        if ( (v54 & 2) != 0 ) /*0x4344a0*/
          *v65 = aP1a; /*0x4344a2*/
        v67 = v65 + 1; /*0x4344a5*/
        v68 = v66 - 1; /*0x4344a8*/
        if ( v68 <= 0 ) /*0x4344ab*/
        {
LABEL_101:
          v50 += *(unsigned int *)(v70 + 24); /*0x4344c1*/
          v23 = yTopa == 1; /*0x4344d1*/
          v49 += 2 * *(unsigned int *)(v70 + 16); /*0x4344d2*/
          --yTopa; /*0x4344d6*/
          if ( v23 ) /*0x4344da*/
            goto LABEL_102; /*0x4344da*/
          goto LABEL_73; /*0x4344da*/
        }
        if ( (v54 & 1) != 0 ) /*0x4344b0*/
          *v67 = aP1a; /*0x4344b2*/
        v53 = v67 + 1; /*0x4344b5*/
        v51 = v68 - 1; /*0x4344b8*/
      }
      else
      {
        v53 += 8; /*0x434435*/
        v51 -= 8; /*0x434438*/
      }
      if ( v51 <= 0 ) /*0x4344bb*/
        goto LABEL_101; /*0x4344bb*/
    }
  }
  v14 = (AbstractClass *)v70; /*0x434276*/
  v15 = &v71[(v76 - rc.top) * *(unsigned int *)(v70 + 24)]; /*0x43428c*/
  v16 = v77; /*0x434295*/
  v17 = &aP2->__pad_0[((unsigned int)aP3 + v76 - rc.top) * *(unsigned int *)(v70 + 16)]; /*0x434299*/
  v18 = *(unsigned int *)(v70 + 12); /*0x43429b*/
  v71 = v15; /*0x43429e*/
  v19 = (unsigned short *)(v18 + 2 * (unsigned int)v17); /*0x4342a2*/
  v72 = v19; /*0x4342a8*/
  if ( v78 - v76 == -1 ) /*0x4342ae*/
    return (int)&aP2->__pad_0[aP4a + *(unsigned int *)&v14[1].__pad_0[8]]; /*0x4342ae*/
  v73 = v78 - v76 + 1; /*0x4342b5*/
  do /*0x4343ed*/
  {
    v20 = aP4a; /*0x4342b9*/
    v21 = aP2; /*0x4342bd*/
    yTop = (char *)v15; /*0x4342c1*/
    while ( 1 ) /*0x4342c9*/
    {
      v22 = *yTop; /*0x4342c9*/
      v23 = *yTop++ == 0; /*0x4342cd*/
      if ( !v23 ) /*0x4342d3*/
        break; /*0x4342d3*/
      v19 += 8; /*0x4342d5*/
      v20 -= 8; /*0x4342d8*/
      v21 = (AbstractClass *)((char *)v21 + 8); /*0x4342db*/
LABEL_68:
      if ( v20 <= 0 ) /*0x4343bf*/
        goto LABEL_69; /*0x4343bf*/
    }
    if ( (int)v21 < v13 || (int)v21 > v16 || v22 >= 0 ) /*0x4342ee*/
    {
      v24 = aP1a; /*0x4342f9*/
    }
    else
    {
      v24 = aP1a; /*0x4342f0*/
      *v19 = aP1a; /*0x4342f4*/
    }
    v25 = v19 + 1; /*0x4342fd*/
    v26 = &v21->__pad_0[1]; /*0x434300*/
    v27 = v20 - 1; /*0x434301*/
    if ( v27 > 0 ) /*0x434304*/
    {
      if ( (int)v26 >= v13 && (int)v26 <= v16 && (v22 & 0x40) != 0 ) /*0x434315*/
        *v25 = v24; /*0x434317*/
      v28 = v25 + 1; /*0x43431a*/
      v29 = v26 + 1; /*0x43431d*/
      v30 = v27 - 1; /*0x43431e*/
      if ( v30 > 0 ) /*0x434321*/
      {
        if ( (int)v29 >= v13 && (int)v29 <= v16 && (v22 & 0x20) != 0 ) /*0x434332*/
          *v28 = v24; /*0x434334*/
        v31 = v28 + 1; /*0x434337*/
        v32 = (LONG)(v29 + 1); /*0x43433a*/
        v33 = v30 - 1; /*0x43433b*/
        if ( v33 > 0 ) /*0x43433e*/
        {
          if ( v32 >= v13 && v32 <= v16 && (v22 & 0x10) != 0 ) /*0x43434f*/
            *v31 = v24; /*0x434351*/
          v34 = v31 + 1; /*0x434354*/
          v35 = v32 + 1; /*0x434357*/
          v36 = v33 - 1; /*0x434358*/
          if ( v36 > 0 ) /*0x43435b*/
          {
            if ( v35 >= v13 && v35 <= v16 && (v22 & 8) != 0 ) /*0x434368*/
              *v34 = v24; /*0x43436a*/
            v37 = v34 + 1; /*0x43436d*/
            v38 = v35 + 1; /*0x434370*/
            v39 = v36 - 1; /*0x434371*/
            if ( v39 > 0 ) /*0x434374*/
            {
              if ( v38 >= v13 && v38 <= v16 && (v22 & 4) != 0 ) /*0x434381*/
                *v37 = v24; /*0x434383*/
              v40 = v37 + 1; /*0x434386*/
              v41 = v38 + 1; /*0x434389*/
              v42 = v39 - 1; /*0x43438a*/
              if ( v42 > 0 ) /*0x43438d*/
              {
                if ( v41 >= v13 && v41 <= v16 && (v22 & 2) != 0 ) /*0x43439a*/
                  *v40 = v24; /*0x43439c*/
                v43 = v40 + 1; /*0x43439f*/
                v44 = v41 + 1; /*0x4343a2*/
                v45 = v42 - 1; /*0x4343a3*/
                if ( v45 > 0 ) /*0x4343a6*/
                {
                  if ( v44 >= v13 && v44 <= v16 && (v22 & 1) != 0 ) /*0x4343b3*/
                    *v43 = v24; /*0x4343b5*/
                  v19 = v43 + 1; /*0x4343b8*/
                  v21 = (AbstractClass *)(v44 + 1); /*0x4343bb*/
                  v20 = v45 - 1; /*0x4343bc*/
                  goto LABEL_68; /*0x4343bc*/
                }
              }
            }
          }
        }
      }
    }
LABEL_69:
    v14 = (AbstractClass *)v70; /*0x4343c5*/
    v15 = &v71[*(unsigned int *)(v70 + 24)]; /*0x4343d4*/
    v46 = *(unsigned int *)(v70 + 16); /*0x4343d6*/
    v71 = v15; /*0x4343d9*/
    v19 = &v72[v46]; /*0x4343dd*/
    v23 = v73 == 1; /*0x4343e4*/
    v72 = v19; /*0x4343e5*/
    --v73; /*0x4343e9*/
  }
  while ( !v23 ); /*0x4343ed*/
  return (int)&aP2->__pad_0[aP4a + *(unsigned int *)&v14[1].__pad_0[8]]; /*0x43414c*/

}
// 0x4348f0
double FontRenderer::InitContext(...) { return 0; }

  int v3; // edx
  int v4; // eax
  int v5; // edx
  int result; // eax
  int v7; // edi
  int v8; // edx
  int v9; // edx
  int v10; // [esp+8h] [ebp-10h] BYREF
  int v11; // [esp+Ch] [ebp-Ch]
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  *(this + 3) = (*(int (**)(int *, unsigned int, unsigned int))(*a2 + 92))(a2, 0, 0); /*0x434908*/
  *(this + 4) = (unsigned int)(*(int (**)(int *))(*a2 + 116))(a2) >> 1; /*0x434914*/
  v3 = *a2; /*0x434917*/
  v10 = 0; /*0x43491b*/
  v11 = 0; /*0x434923*/
  v12 = (*(int (**)(int *))(v3 + 124))(a2) - 1; /*0x434931*/
  v4 = (*(int (**)(int *))(*a2 + 128))(a2); /*0x434937*/
  v5 = *(this + 13) | *(this + 15) | *(this + 14); /*0x43494b*/
  result = v4 - 1; /*0x43494d*/
  v7 = *(this + 12); /*0x43494e*/
  v13 = result; /*0x434950*/
  if ( v7 | v5 ) /*0x434954*/
    return sub_434840(this + 12, this + 12, &v10); /*0x434980*/
  v8 = v10; /*0x434958*/
  *(this + 15) = result; /*0x43495c*/
  *(this + 12) = v8; /*0x43495f*/
  v9 = v12; /*0x434965*/
  *(this + 13) = v11; /*0x434969*/
  *(this + 14) = v9; /*0x43496c*/
  return result; /*0x43496f*/

}
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int result; // eax
  int v7; // edi
  int v8; // edx
  int v9; // edx
  int v10; // [esp+8h] [ebp-10h] BYREF
  int v11; // [esp+Ch] [ebp-Ch]
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  *(this + 3) = (*(int (**)(int *, unsigned int, unsigned int))(*a2 + 92))(a2, 0, 0); /*0x434908*/
  *(this + 4) = (unsigned int)(*(int (**)(int *))(*a2 + 116))(a2) >> 1; /*0x434914*/
  v3 = *a2; /*0x434917*/
  v10 = 0; /*0x43491b*/
  v11 = 0; /*0x434923*/
  v12 = (*(int (**)(int *))(v3 + 124))(a2) - 1; /*0x434931*/
  v4 = (*(int (**)(int *))(*a2 + 128))(a2); /*0x434937*/
  v5 = *(this + 13) | *(this + 15) | *(this + 14); /*0x43494b*/
  result = v4 - 1; /*0x43494d*/
  v7 = *(this + 12); /*0x43494e*/
  v13 = result; /*0x434950*/
  if ( v7 | v5 ) /*0x434954*/
    return sub_434840(this + 12, this + 12, &v10); /*0x434980*/
  v8 = v10; /*0x434958*/
  *(this + 15) = result; /*0x43495c*/
  *(this + 12) = v8; /*0x43495f*/
  v9 = v12; /*0x434965*/
  *(this + 13) = v11; /*0x434969*/
  *(this + 14) = v9; /*0x43496c*/
  return result; /*0x43496f*/

}
// 0x4c91c0
double FrameSnapshot::Init(...) { return 0; }

  wchar_t *v2; // edx

  *this = 0; /*0x4c91c4*/
  *((unsigned short *)this + 2) = 0; /*0x4c91c7*/
  v2 = MEMORY[0xA8ED84]; /*0x4c91cb*/
  *((unsigned int *)this + 4) = 0; /*0x4c91d1*/
  *((unsigned int *)this + 2) = v2; /*0x4c91d4*/
  *((unsigned short *)this + 10) = 0; /*0x4c91d7*/
  return this; /*0x4c91db*/

}
  wchar_t *v2; // edx

  *this = 0; /*0x4c91c4*/
  *((unsigned short *)this + 2) = 0; /*0x4c91c7*/
  v2 = MEMORY[0xA8ED84]; /*0x4c91cb*/
  *((unsigned int *)this + 4) = 0; /*0x4c91d1*/
  *((unsigned int *)this + 2) = v2; /*0x4c91d4*/
  *((unsigned short *)this + 10) = 0; /*0x4c91d7*/
  return this; /*0x4c91db*/

}
double FrameSnapshot::InitMax(...) { return 0; }

  unsigned short *result; // eax
  wchar_t *v3; // edx
  char v4; // cl
  __int16 v5; // dx

  result = this; /*0x4c91e0*/
  *this = 0; /*0x4c91e4*/
  *(this + 2) = 0; /*0x4c91e7*/
  v3 = MEMORY[0xA8ED84]; /*0x4c91eb*/
  *((unsigned int *)this + 4) = 0; /*0x4c91f1*/
  *((unsigned int *)this + 2) = v3; /*0x4c91f4*/
  *(this + 10) = 0; /*0x4c91f7*/
  v4 = a2; /*0x4c91fb*/
  if ( a2 >= 127 ) /*0x4c9202*/
    v4 = 127; /*0x4c9204*/
  LOBYTE(v5) = 0; /*0x4c9209*/
  HIBYTE(v5) = v4; /*0x4c920b*/
  result[10] = v5; /*0x4c920d*/
  return result; /*0x4c9211*/

}
double Function::Method_424CA0(...) { return 0; }

  *(this + 96) = a2; /*0x424ca4*/
  return a2; /*0x424caa*/

}
double GameOptions::SaveLoad(...) { return 0; }

  int v2; // edi
  int (**v5)(int, void *, int **); // eax
  int String; // ebx
  int v7; // ebp
  int v8; // ebp
  int Bool; // esi

  v2 = (int)a2; /*0x6812e4*/
  if ( !a2 ) /*0x6812ec*/
    return -2147467261; /*0x6812f7*/
  v5 = (int (**)(int, void *, int **))*a2; /*0x6812fa*/
  a2 = 0; /*0x681307*/
  if ( (*v5)(v2, &unk_7F7D00, &a2) >= 0 ) /*0x681313*/
  {
    String = GameOptions_Load_6829A0(a2, 2, this + 8); /*0x68132b*/
    if ( String < 0 ) /*0x68132f*/
    {
      if ( a2 ) /*0x681337*/
        goto LABEL_77; /*0x681337*/
      return String; /*0x681337*/
    }
    String = GameOptions_Load_6829A0(a2, 3, this + 264); /*0x681361*/
    if ( String < 0 ) /*0x681365*/
    {
      if ( a2 ) /*0x68136d*/
        goto LABEL_77; /*0x68136d*/
      return String; /*0x68136d*/
    }
    String = PropertyBagReadCOM(a2, 9, *(unsigned int *)(this + 4)); /*0x681394*/
    if ( String < 0 ) /*0x681398*/
    {
      if ( a2 ) /*0x6813a0*/
        goto LABEL_77; /*0x6813a0*/
      return String; /*0x6813a0*/
    }
    String = PropertyBagReadCOM(a2, 16, *(unsigned int *)this); /*0x6813c6*/
    if ( String < 0 ) /*0x6813ca*/
    {
      if ( a2 ) /*0x6813d2*/
        goto LABEL_77; /*0x6813d2*/
      return String; /*0x6813d2*/
    }
    String = SetBufferParamsCOM(a2, 12, (int *)(this + 984)); /*0x6813fc*/
    if ( String < 0 ) /*0x681400*/
    {
      if ( a2 ) /*0x681408*/
        goto LABEL_77; /*0x681408*/
      return String; /*0x681408*/
    }
    String = SetBufferParamsCOM(a2, 13, (int *)(this + 1000)); /*0x681432*/
    if ( String < 0 ) /*0x681436*/
    {
      if ( a2 ) /*0x68143e*/
        goto LABEL_77; /*0x68143e*/
      return String; /*0x68143e*/
    }
    String = SetBufferParamsCOM(a2, 10, (int *)(this + 992)); /*0x681468*/
    if ( String < 0 ) /*0x68146c*/
    {
      if ( a2 ) /*0x681474*/
        goto LABEL_77; /*0x681474*/
      return String; /*0x681474*/
    }
    String = ReadStringCOM(a2, 18, (LPCCH)(this + 724)); /*0x68149e*/
    if ( String < 0 ) /*0x6814a2*/
    {
      if ( a2 ) /*0x6814aa*/
        goto LABEL_77; /*0x6814aa*/
      return String; /*0x6814aa*/
    }
    v7 = ReadStringCOM(a2, 4, (LPCCH)(this + 660)); /*0x6814d4*/
    if ( v7 < 0 ) /*0x6814d8*/
    {
      if ( a2 ) /*0x6814e0*/
        (*(void (**)(int *))(*a2 + 8))(a2); /*0x6814e5*/
      return v7; /*0x6814ee*/
    }
    String = ReadStringCOM(a2, 8, (LPCCH)(this + 660)); /*0x681500*/
    if ( String < 0 ) /*0x681504*/
    {
      if ( a2 ) /*0x68150c*/
        goto LABEL_77; /*0x68150c*/
      return String; /*0x68150c*/
    }
    String = PropertyBagReadCOM(a2, 100, *(unsigned int *)(this + 396)); /*0x681536*/
    if ( String < 0 ) /*0x68153a*/
    {
      if ( a2 ) /*0x681542*/
        goto LABEL_77; /*0x681542*/
      return String; /*0x681542*/
    }
    String = PropertyBagReadCOM(a2, 101, *(unsigned int *)(this + 392)); /*0x68156c*/
    if ( String < 0 ) /*0x681570*/
    {
      if ( a2 ) /*0x681578*/
        goto LABEL_77; /*0x681578*/
      return String; /*0x681578*/
    }
    String = PropertyBagReadCOM(a2, 102, *(unsigned int *)(this + 1008)); /*0x6815a2*/
    if ( String < 0 ) /*0x6815a6*/
    {
      if ( a2 ) /*0x6815ae*/
        goto LABEL_77; /*0x6815ae*/
      return String; /*0x6815ae*/
    }
  }
  String = GameOptions_Load(v2, 2, (wchar_t *)(this + 8)); /*0x6815d1*/
  if ( String < 0 ) /*0x6815d5*/
  {
    if ( a2 ) /*0x6815dd*/
      goto LABEL_77; /*0x6815dd*/
    return String; /*0x6815dd*/
  }
  String = GameOptions_Load(v2, 3, (wchar_t *)(this + 264)); /*0x681603*/
  if ( String < 0 ) /*0x681607*/
  {
    if ( a2 ) /*0x68160f*/
      goto LABEL_77; /*0x68160f*/
    return String; /*0x68160f*/
  }
  String = PropertyReadBoolCOM(v2, 9, *(unsigned int *)(this + 4)); /*0x681632*/
  if ( String < 0 ) /*0x681636*/
  {
    if ( a2 ) /*0x68163e*/
      goto LABEL_77; /*0x68163e*/
    return String; /*0x68163e*/
  }
  String = PropertyReadBoolCOM(v2, 16, *(unsigned int *)this); /*0x681660*/
  if ( String < 0 ) /*0x681664*/
  {
    if ( a2 ) /*0x68166c*/
      goto LABEL_77; /*0x68166c*/
    return String; /*0x68166c*/
  }
  String = WriteIntCOM(v2, 12, this + 984); /*0x681692*/
  if ( String < 0 ) /*0x681696*/
  {
    if ( a2 ) /*0x68169e*/
      goto LABEL_77; /*0x68169e*/
    return String; /*0x68169e*/
  }
  String = WriteIntCOM(v2, 13, this + 1000); /*0x6816c4*/
  if ( String < 0 ) /*0x6816c8*/
  {
    if ( a2 ) /*0x6816d0*/
      goto LABEL_77; /*0x6816d0*/
    return String; /*0x6816d0*/
  }
  String = WriteIntCOM(v2, 10, this + 992); /*0x6816f6*/
  if ( String < 0 ) /*0x6816fa*/
  {
    if ( a2 ) /*0x681702*/
      goto LABEL_77; /*0x681702*/
    return String; /*0x681702*/
  }
  String = WriteStringCOM(v2, 18, (LPCCH)(this + 724)); /*0x681728*/
  if ( String < 0 ) /*0x68172c*/
  {
    if ( a2 ) /*0x681734*/
      goto LABEL_77; /*0x681734*/
    return String; /*0x681734*/
  }
  v8 = WriteStringCOM(v2, 4, (LPCCH)(this + 660)); /*0x68175a*/
  if ( v8 < 0 ) /*0x68175e*/
  {
    if ( a2 ) /*0x681766*/
      (*(void (**)(int *))(*a2 + 8))(a2); /*0x68176b*/
    return v8; /*0x681774*/
  }
  String = WriteStringCOM(v2, 8, (LPCCH)(this + 660)); /*0x681782*/
  if ( String < 0 ) /*0x681786*/
  {
    if ( a2 ) /*0x68178e*/
      goto LABEL_77; /*0x68178e*/
    return String; /*0x68178e*/
  }
  String = PropertyReadBoolCOM(v2, 100, *(unsigned int *)(this + 396)); /*0x6817b0*/
  if ( String < 0 ) /*0x6817b4*/
  {
    if ( a2 ) /*0x6817bc*/
    {
LABEL_77:
      (*(void (**)(int *))(*a2 + 8))(a2); /*0x6817be*/
      return String; /*0x6817ca*/
    }
    return String; /*0x6817bc*/
  }
  String = PropertyReadBoolCOM(v2, 101, *(unsigned int *)(this + 392)); /*0x6817de*/
  if ( String < 0 ) /*0x6817e2*/
  {
    if ( a2 ) /*0x6817ea*/
      (*(void (**)(int *))(*a2 + 8))(a2); /*0x6817ef*/
    return String; /*0x6817f8*/
  }
  Bool = PropertyReadBoolCOM(v2, 102, *(unsigned int *)(this + 1008)); /*0x68180c*/
  if ( Bool >= 0 ) /*0x681814*/
  {
    if ( a2 ) /*0x68182b*/
      (*(void (**)(int *))(*a2 + 8))(a2); /*0x681830*/
    return 0; /*0x681836*/
  }
  else
  {
    if ( a2 ) /*0x681818*/
      (*(void (**)(int *))(*a2 + 8))(a2); /*0x68181d*/
    return Bool; /*0x681820*/
  }

}
double GameScreen::DlgProc(...) { return 0; }

  HWND Parent; // eax
  int v9; // edx
  int v10; // ebp
  int v11; // eax
  HWND result; // eax
  int v13; // ecx
  UINT v14; // ecx
  LRESULT v15; // esi
  LRESULT v16; // ecx
  HWND v17; // esi
  HWND v18; // eax
  int v19; // ecx
  UINT v20; // ecx
  UINT v21; // ecx
  LONG v22; // edx
  int v23; // ecx
  unsigned int *v24; // esi
  LONG v25; // eax
  LONG v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // edi
  int v30; // eax
  __int16 *v31; // esi
  __int16 v32; // cx
  bool v33; // zf
  int v34; // eax
  int v35; // eax
  int v36; // esi
  LONG v37; // ebp
  LONG v38; // esi
  HWND v39; // ecx
  LRESULT (*v40)(HWND, UINT, WPARAM, LPARAM); // ebx
  int v41; // eax
  int v42; // eax
  LRESULT (**v43)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v44; // eax
  int v45; // eax
  unsigned int v46; // edx
  LONG v47; // edi
  int v48; // ebx
  char v49; // cl
  int v50; // eax
  unsigned int *v51; // ebp
  size_t v52; // esi
  int v53; // eax
  unsigned short *v54; // edi
  bool v55; // cc
  HWND v56; // eax
  UINT v57; // ecx
  UINT v58; // ecx
  LRESULT v59; // esi
  HWND Capture; // esi
  UINT v61; // ecx
  UINT v62; // ecx
  LRESULT v63; // eax
  LPARAM v64; // esi
  HWND v65; // ebp
  HWND v66; // ebx
  wchar_t *v67; // eax
  HWND v68; // esi
  HWND v69; // ebp
  wchar_t *v70; // eax
  int v71; // ebx
  LRESULT v72; // esi
  LRESULT v73; // eax
  int v74; // eax
  int v75; // esi
  LONG v76; // ebx
  LONG v77; // esi
  LRESULT v78; // ebx
  LRESULT v79; // ecx
  int v80; // eax
  signed int v81; // eax
  int v82; // ecx
  unsigned __int16 v83; // si
  UINT v84; // ecx
  UINT v85; // ecx
  HWND *v86; // esi
  LONG v87; // ebp
  LONG v88; // ebx
  HWND Window; // eax
  int v90; // edx
  int v91; // ecx
  HWND *v92; // eax
  unsigned char *v93; // eax
  int v94; // ecx
  LONG v95; // ecx
  double v96; // st7
  int v97; // esi
  HWND *v98; // ecx
  HWND v99; // edi
  double v100; // st7
  unsigned int v101; // eax
  int *v102; // ebp
  int v103; // esi
  int *v104; // edi
  int v105; // ebp
  int v106; // esi
  int v107; // edx
  int v108; // ecx
  int v109; // eax
  HWND *v110; // eax
  int v111; // esi
  int *v112; // edi
  int v113; // ebp
  int v114; // esi
  int v115; // edx
  int v116; // ecx
  int v117; // eax
  void *v118; // eax
  void *v119; // eax
  int v120; // ebx
  char *v121; // ebp
  void *v122; // eax
  void *v123; // edx
  char *v124; // ebp
  int v125; // edi
  int v126; // ebp
  unsigned int *i; // eax
  void **v128; // ecx
  double v129; // st7
  int *v130; // ebp
  int v131; // esi
  int *v132; // edi
  int v133; // ebx
  int v134; // esi
  int v135; // eax
  int v136; // edx
  int v137; // eax
  char *v138; // ebx
  void *v139; // edx
  unsigned int *v140; // ecx
  unsigned int *v141; // edx
  unsigned int *v142; // eax
  void *v143; // esi
  double v144; // st7
  int v145; // esi
  HWND *v146; // ecx
  HWND v147; // edi
  double v148; // st7
  unsigned int v149; // eax
  int *v150; // ebp
  int v151; // esi
  int *v152; // edi
  int v153; // ebp
  int v154; // esi
  int v155; // edx
  int v156; // ecx
  int v157; // eax
  HWND *v158; // eax
  unsigned int v159; // eax
  int v160; // esi
  int *v161; // edi
  int v162; // ebp
  int v163; // esi
  int v164; // edx
  int v165; // ecx
  int v166; // eax
  void *WindowLongA; // eax
  int v168; // eax
  int v169; // esi
  LONG v170; // ebx
  int v171; // ecx
  LRESULT v172; // esi
  LRESULT v173; // ecx
  int v174; // eax
  int v175; // ecx
  HWND v176; // [esp+18h] [ebp-39Ch]
  wchar_t *v177; // [esp+24h] [ebp-390h]
  HWND v181; // [esp+38h] [ebp-37Ch] BYREF
  void *Block; // [esp+3Ch] [ebp-378h] BYREF
  int v183; // [esp+40h] [ebp-374h]
  HWND hDlg; // [esp+44h] [ebp-370h] BYREF
  LPARAM Y[2]; // [esp+48h] [ebp-36Ch] BYREF
  HWND v186; // [esp+50h] [ebp-364h] BYREF
  int nWidth; // [esp+54h] [ebp-360h]
  int v188; // [esp+58h] [ebp-35Ch]
  int v189; // [esp+5Ch] [ebp-358h]
  HWND DlgItem; // [esp+60h] [ebp-354h]
  struct tagRECT Rect; // [esp+64h] [ebp-350h] BYREF
  int v192; // [esp+74h] [ebp-340h]
  void *v193; // [esp+78h] [ebp-33Ch] BYREF
  struct tagRECT v194; // [esp+7Ch] [ebp-338h] BYREF
  LONG v195; // [esp+8Ch] [ebp-328h]
  struct tagRECT v196; // [esp+90h] [ebp-324h] BYREF
  void *v197; // [esp+A0h] [ebp-314h]
  int v198; // [esp+A4h] [ebp-310h] BYREF
  int v199; // [esp+A8h] [ebp-30Ch]
  LONG v200; // [esp+ACh] [ebp-308h]
  LONG v201; // [esp+B0h] [ebp-304h]
  RECT v202; // [esp+B4h] [ebp-300h] BYREF
  int v203[4]; // [esp+C4h] [ebp-2F0h] BYREF
  struct tagRECT v204; // [esp+D4h] [ebp-2E0h] BYREF
  struct tagRECT lParam; // [esp+E4h] [ebp-2D0h] BYREF
  int v206; // [esp+F8h] [ebp-2BCh]
  int v207; // [esp+100h] [ebp-2B4h]
  struct tagRECT v208; // [esp+104h] [ebp-2B0h] BYREF
  LPARAM v209[4]; // [esp+114h] [ebp-2A0h] BYREF
  LONG v210; // [esp+124h] [ebp-290h] BYREF
  LONG left; // [esp+128h] [ebp-28Ch]
  LONG top; // [esp+12Ch] [ebp-288h]
  LONG v213; // [esp+130h] [ebp-284h]
  LONG v214; // [esp+140h] [ebp-274h] BYREF
  LONG v215; // [esp+144h] [ebp-270h]
  LONG right; // [esp+148h] [ebp-26Ch]
  LONG bottom; // [esp+14Ch] [ebp-268h]
  void *v218[128]; // [esp+150h] [ebp-264h] BYREF
  char Buffer[100]; // [esp+350h] [ebp-64h] BYREF

  if ( (MEMORY[0xAC1B9C] & 1) == 0 )
  {
    MEMORY[0xAC1B9C] |= 1u;
    MEMORY[0xAC18A0] = (int)CreateSolidBrush(0x306030u);
  }
  ScreenDialogToClient(hWnd, &v204);
  GetClientRect(hWnd, &Rect);
  memset(&v208, 0, sizeof(v208));
  nWidth = 2 * MEMORY[0xAC1DF0] + 18;
  Parent = 0;
  v183 = -1;
  DlgItem = 0;
  hDlg = 0;
  if ( MEMORY[0xAC48D0] )
  {
    Parent = GetParent(MEMORY[0xAC48D0]);
    hDlg = Parent;
  }
  v189 = 0;
  if ( Parent )
  {
    if ( MEMORY[0xAC1B04] )
    {
      v9 = *((unsigned int *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hDlg) & ((1 << MEMORY[0xAC1B0C]) - 1)));
      Parent = hDlg;
      if ( v9 )
      {
        while ( *(HWND *)v9 != hDlg )
        {
          v9 = *(unsigned int *)(v9 + 516);
          if ( !v9 )
            goto LABEL_12;
        }
        v189 = v9 + 4;
      }
    }
LABEL_12:
    ScreenDialogToClient(Parent, &v208);
    Parent = hDlg;
  }
  MEMORY[0xAC48C4] = (int)Parent;
  v10 = 0;
  MEMORY[0xAC48C0] = hWnd;
  v188 = 0;
  if ( !MEMORY[0xAC1B04] )
    goto LABEL_19;
  v11 = *((unsigned int *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1)));
  if ( !v11 )
    goto LABEL_19;
  while ( *(HWND *)v11 != hWnd )
  {
    v11 = *(unsigned int *)(v11 + 516);
    if ( !v11 )
      goto LABEL_19;
  }
  v10 = v11 + 4;
  v188 = v11 + 4;
  if ( v11 == -4 )
LABEL_19:
    Debug::Log(MEMORY[0x8357E0]);
  result = MEMORY[0xAC48D0];
  v181 = 0;
  if ( MEMORY[0xAC48D0] )
  {
    if ( MEMORY[0xAC1B04] )
    {
      v13 = *((unsigned int *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&MEMORY[0xAC48D0]) & ((1 << MEMORY[0xAC1B0C]) - 1)));
      result = MEMORY[0xAC48D0];
      if ( v13 )
      {
        while ( *(HWND *)v13 != MEMORY[0xAC48D0] )
        {
          v13 = *(unsigned int *)(v13 + 516);
          if ( !v13 )
            goto LABEL_27;
        }
        v181 = (HWND)(v13 + 4);
      }
    }
  }
LABEL_27:
  v14 = Msg;
  if ( Msg != 326 && Msg != 340 && Msg != 277 )
  {
    v15 = SendMessageA(result, 0x146u, 0, 0);
    v16 = SendMessageA(MEMORY[0xAC48D0], 0x154u, 0, 0);
    if ( v16 <= 1 )
      v16 = 1;
    v183 = v15 * v16 > Rect.bottom - Rect.top;
    v17 = (HWND)(v15 - (Rect.bottom - Rect.top) / v16);
    DlgItem = v17;
    if ( v10 )
    {
      v18 = *(HWND *)(v10 + 12);
      if ( (unsigned int)v18 > 1 )
      {
        v19 = *(unsigned int *)(v10 + 240);
        lParam.top = 5;
        lParam.right = 0;
        lParam.bottom = (LONG)v17;
        v206 = v19;
        lParam.left = 28;
        SendMessageA(v18, 0xE9u, 0, (LPARAM)&lParam);
      }
      if ( *(unsigned int *)(v10 + 12) )
        BringWindowToTop(*(HWND *)(v10 + 12));
    }
    result = MEMORY[0xAC48D0];
    v14 = Msg;
  }
  if ( v14 <= 0x15B )
  {
    if ( v14 == 347 )
    {
      if ( v10 )
        return *(HWND *)(v10 + 240);
    }
    else if ( v14 > 0x14 )
    {
      v57 = v14 - 130;
      if ( v57 )
      {
        v58 = v57 - 145;
        if ( v58 )
        {
          if ( v58 == 2 )
          {
            v59 = SendMessageA(*(HWND *)(v10 + 12), 0xE1u, 0, 0);
            if ( v59 != SendMessageA(hWnd, 0x15Bu, 0, 0) )
              SendMessageA(hWnd, 0x15Cu, v59, 0);
          }
        }
        else
        {
          Capture = GetCapture();
          if ( Capture == hWnd )
          {
            ReleaseCapture();
            Sleep(0);
            SetCapture(Capture);
          }
        }
      }
      else
      {
        MEMORY[0xAC48C0] = 0;
        MEMORY[0xAC48C4] = 0;
        ReleaseCapture();
        KillTimer(hWnd, 0);
      }
    }
    else
    {
      if ( v14 == 20 )
        return 0;
      v20 = v14 - 1;
      if ( !v20 )
      {
        SetCapture(hWnd);
        MEMORY[0xAC48D0] = *(HWND *)a8;
        v56 = GetParent(MEMORY[0xAC48D0]);
        sprintf(Buffer, MEMORY[0x8357BC], hWnd, MEMORY[0xAC48D0], v56);
        Debug::Log(Buffer);
        SetTimer(hWnd, 0, 0x14u, 0);
        return 0;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 == 13 )
        {
          Y[0] = *(unsigned int *)(v189 + 100);
          DlgItem = (HWND)SendMessageA(result, 0x146u, 0, 0);
          v188 = SendMessageA(MEMORY[0xAC48D0], 0x154u, 0, 0);
          v207 = Rect.bottom - Rect.top;
          v194.bottom = Rect.bottom - Rect.top;
          v197 = *(void **)(v10 + 232);
          v194.left = v204.left;
          v22 = v204.right - v204.left;
          v194.top = v204.top;
          v215 = v204.top - v208.top;
          v23 = *(unsigned int *)(v10 + 16);
          v214 = v204.left - v208.left;
          v194.right = v204.right - v204.left;
          right = Rect.right;
          bottom = Rect.bottom;
          if ( !v23 )
          {
            v198 = 0;
            v199 = 0;
            v200 = Rect.right;
            v201 = Rect.bottom;
            v24 = __2_YAPAXI_Z(0x20u);
            if ( v24 )
            {
              v25 = Rect.right;
              v26 = Rect.bottom;
              v24[1] = Rect.right;
              v24[2] = v26;
              v24[3] = 0;
              *v24 = &XSurface_Vtable;
              v24[4] = 2;
              Buffer::Init(v24 + 5, 0, 2 * v26 * v25);
              *v24 = &BSurface_Vtable;
            }
            else
            {
              v24 = 0;
            }
            v27 = v189;
            *(unsigned int *)(v10 + 16) = v24;
            v195 = (LONG)v24;
            ++MEMORY[0xAC48B4];
            if ( v27 )
            {
              v28 = *(unsigned int *)(v27 + 16);
              if ( v28 )
                (*(void (**)(unsigned int *, int *, int, LONG *, unsigned int, int))(*v24 + 8))(
                  v24,
                  &v198,
                  v28,
                  &v214,
                  0,
                  1);
            }
            v29 = Rect.bottom * Rect.right;
            v30 = (*(int (**)(unsigned int *, unsigned int, unsigned int))(*v24 + 92))(v24, 0, 0);
            if ( v29 > 0 )
            {
              v31 = (__int16 *)v30;
              v192 = v29;
              do
              {
                v32 = *v31;
                LOBYTE(v189) = *(unsigned char *)(v10 + 200);
                g_GameScreenFlags = (unsigned __int8)v189;
                g_GameScreenConfig = 255 - (unsigned __int8)v189;
                ++v31;
                v34 = v192 - 1;
                v33 = v192 == 1;
                *(v31 - 1) = ((g_GameScreenConfig * (unsigned int)(unsigned __int16)(v32 & MEMORY[0xAC48BC])) >> 8)
                           | MEMORY[0xAC48B8]
                           & ((g_GameScreenConfig * (unsigned int)(unsigned __int16)(v32 & MEMORY[0xAC48B8])) >> 8)
                           | HIWORD(MEMORY[0xAC48B8])
                           & ((g_GameScreenConfig * (unsigned int)(unsigned __int16)(v32 & HIWORD(MEMORY[0xAC48B8]))) >> 8);
                v192 = v34;
              }
              while ( !v33 );
              v24 = (unsigned int *)v195;
            }
            (*(void (**)(unsigned int *))(*v24 + 96))(v24);
            v22 = v194.right;
          }
          v35 = *(unsigned int *)(v10 + 16);
          v201 = v194.bottom;
          v198 = 0;
          v199 = 0;
          v200 = v22;
          (*(void (**)(int, struct tagRECT *, int, int *, unsigned int, int, int, int, int, int))(*(unsigned int *)MEMORY[0x887310] + 8))(
            MEMORY[0x887310],
            &v194,
            v35,
            &v198,
            0,
            1,
            a3,
            a4,
            a2,
            a1);
          top = v196.top;
          v210 = v195;
          left = v196.left;
          v213 = v196.right;
          if ( MEMORY[0xAC4624] == -1 )
            v36 = -1;
          else
            v36 = ((int)(unsigned __int8)MEMORY[0xAC4624] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0])
                | (BYTE1(MEMORY[0xAC4624]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                | (BYTE2(MEMORY[0xAC4624]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
          if ( Y[0] && *(unsigned char *)(Y[0] + 205) )
          {
            if ( MEMORY[0xAC1DD8] == -1 )
              v36 = -1;
            else
              v36 = ((int)(unsigned __int8)MEMORY[0xAC1DD8] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0])
                  | (BYTE1(MEMORY[0xAC1DD8]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                  | (BYTE2(MEMORY[0xAC1DD8]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
          }
          DrawDialogGradient((int *)MEMORY[0x887310], &v210, 2, v36);
          if ( v186 && v10 && *(unsigned int *)(v10 + 12) )
          {
            v204.left = v195;
            v204.top = v196.left;
            v204.bottom = v196.right;
            v204.right = Rect.left + v196.top;
            DrawDialogGradient((int *)MEMORY[0x887310], &v204.left, 2, v36);
          }
          v37 = *(unsigned int *)(v10 + 240);
          Rect.left = v37;
          if ( v37 < Rect.bottom )
          {
            v196.bottom = Rect.top * v37;
            Rect.right = Rect.top * v37;
            v194.right = Y[0] + 4 * v37 + 272;
            while ( 1 )
            {
              v204.left = lParam.left;
              v38 = lParam.right - lParam.left;
              v204.top = lParam.top + Rect.right - v196.bottom;
              if ( Rect.top + Rect.right - v196.bottom > v208.bottom )
                goto LABEL_111;
              v39 = MEMORY[0xAC48D0];
              v40 = 0;
              v186 = MEMORY[0xAC48D0];
              if ( MEMORY[0xAC1B4C] )
              {
                v41 = MEMORY[0xAC1B60](&v186);
                v39 = v186;
                v42 = *((unsigned int *)MEMORY[0xAC1B48] + (v41 & ((1 << MEMORY[0xAC1B54]) - 1)));
                if ( v42 )
                {
                  while ( *(HWND *)v42 != v186 )
                  {
                    v42 = *(unsigned int *)(v42 + 8);
                    if ( !v42 )
                      goto LABEL_79;
                  }
                  v43 = (LRESULT (**)(HWND, UINT, WPARAM, LPARAM))(v42 + 4);
                  if ( v43 )
                    v40 = *v43;
                }
              }
LABEL_79:
              LOWORD(v218[4]) = 0;
              v44 = CallWindowProcA(v40, v39, 0x199u, Rect.left, 0);
              if ( v44 == -1 || !v44 )
                v44 = CallWindowProcA(v40, v186, 0x150u, Rect.left, 0);
              if ( v44 != -1 && v44 )
              {
                wcsncpy((wchar_t *)&v218[4], *(const wchar_t **)(v44 + 8), 0x80u);
                HIWORD(v218[67]) = 0;
                wcslen((const wchar_t *)&v218[4]);
              }
              if ( Rect.left == v201 )
                break;
LABEL_94:
              v47 = Rect.top;
              v48 = MEMORY[0xAC18A4];
              v203[2] = v38 + v204.left;
              v203[1] = v204.top;
              v203[0] = v204.left + 3;
              v203[3] = Rect.top + v204.top;
              if ( Y[0] && *(unsigned char *)(Y[0] + 205) )
                v48 = MEMORY[0xAC1CB0];
              if ( Rect.left < 50 )
              {
                if ( Y[0] )
                {
                  if ( *(int *)v194.right >= 0 )
                  {
                    v48 = *(unsigned int *)v194.right;
                    v49 = *(unsigned char *)(Y[0] + 204);
                    v186 = *(HWND *)v194.right;
                    if ( v49 )
                    {
                      v202.left = v204.left;
                      v202.top = v204.top;
                      v202.right = v38;
                      v202.bottom = Rect.top;
                      Rect::Inflate(&v202, 2);
                      if ( v48 == -1 )
                        v50 = -1;
                      else
                        v50 = ((int)(unsigned __int8)v48 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0])
                            | (BYTE1(v48) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                            | (BYTE2(v186) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
                      (*(void (**)(int, RECT *, int))(*(unsigned int *)MEMORY[0x887310] + 20))(
                        MEMORY[0x887310],
                        &v202,
                        v50);
                    }
                  }
                }
              }
              v186 = (HWND)(v194.left - 20);
              v51 = (unsigned int *)v188;
              v52 = wcslen((const wchar_t *)&v218[4]);
              v53 = Text::MeasureWidth((int)&v218[4], 0);
              if ( v52 )
              {
                v54 = (unsigned short *)&v218[4] + v52;
                do
                {
                  if ( v53 <= (int)v186 )
                    break;
                  --v54;
                  --v52;
                  *v54 = 0;
                  wcscat((wchar_t *)&v218[4], MEMORY[0x8357D8]);
                  v53 = Text::MeasureWidth((int)&v218[4], 0);
                }
                while ( v52 );
                v47 = Rect.top;
              }
              PrintFontLayout(MEMORY[0x887310], (unsigned __int16 *)&v218[4], v203, v51, v48, 4, 12, 0, 0, 0);
              v55 = ++Rect.left < Rect.bottom;
              Rect.right += v47;
              v194.right += 4;
              if ( !v55 )
                goto LABEL_111;
            }
            v214 = v204.left;
            v215 = v204.top;
            right = v38;
            bottom = Rect.top;
            if ( Y[0] && *(unsigned char *)(Y[0] + 205) )
            {
              v45 = MEMORY[0xAC4880];
              if ( MEMORY[0xAC4880] != -1 )
              {
                v46 = BYTE2(MEMORY[0xAC4880]);
LABEL_92:
                v45 = (BYTE1(v45) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                    | (v46 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8])
                    | ((int)(unsigned __int8)v45 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              }
            }
            else
            {
              v45 = MEMORY[0xAC4604];
              if ( MEMORY[0xAC4604] != -1 )
              {
                v46 = BYTE2(MEMORY[0xAC4604]);
                goto LABEL_92;
              }
            }
            (*(void (**)(int, LONG *, int))(*(unsigned int *)MEMORY[0x887310] + 20))(MEMORY[0x887310], &v214, v45);
            goto LABEL_94;
          }
LABEL_111:
          (*(void (**)(int, unsigned int, unsigned int))(*(unsigned int *)MEMORY[0x887310] + 92))(MEMORY[0x887310], 0, 0);
          (*(void (**)(int, unsigned int, unsigned int))(*(unsigned int *)MEMORY[0x887308] + 92))(MEMORY[0x887308], 0, 0);
          v196 = v194;
          GetWindowRect(hWnd, &lParam);
          v196.left += lParam.left - v204.left;
          v196.top += lParam.top - v204.top;
          (*(void (**)(int, struct tagRECT *, int, struct tagRECT *, unsigned int, int))(*(unsigned int *)MEMORY[0x887308]
                                                                                            + 8))(
            MEMORY[0x887308],
            &v196,
            MEMORY[0x887310],
            &v194,
            0,
            1);
          (*(void (**)(int))(*(unsigned int *)MEMORY[0x887308] + 96))(MEMORY[0x887308]);
          (*(void (**)(int))(*(unsigned int *)MEMORY[0x887310] + 96))(MEMORY[0x887310]);
          ValidateRect(hWnd, 0);
          return 0;
        }
      }
      else
      {
        Object::RemoveObjectArray(hWnd);
      }
    }
    goto LABEL_172;
  }
  if ( v14 > 0x203 )
  {
    v84 = v14 - 1256;
    if ( v84 )
    {
      v85 = v84 - 2;
      if ( !v85 )
        return result;
      if ( v85 != 766 )
      {
LABEL_172:
        if ( v183 == 1 )
        {
          if ( v10 )
          {
            v86 = (HWND *)(v10 + 12);
            if ( !*(unsigned int *)(v10 + 12) )
            {
              *v86 = (HWND)1;
              GetWindowLongA(hWnd, -12);
              hDlg = GetParent(hWnd);
              ScreenDialogToClient(hDlg, &lParam);
              ScreenDialogToClient(hWnd, &v196);
              v87 = v196.left - lParam.left;
              v88 = v196.top - lParam.top;
              LOBYTE(v193) = 0;
              Y[0] = v196.top - lParam.top + Rect.top;
              if ( v181 )
                LOBYTE(v193) = *((unsigned char *)v181 + 205);
              Window = CreateWindowExA(
                         0,
                         MEMORY[0x8357B0],
                         0,
                         0x50010001u,
                         Rect.right + v196.left - lParam.left - nWidth,
                         Y[0],
                         nWidth,
                         v196.bottom - v196.top,
                         hDlg,
                         0,
                         g_hInstance,
                         0);
              v90 = v188;
              v91 = nWidth;
              *v86 = Window;
              *(unsigned int *)(v90 + 4) = v91;
              Dialog::InitializeControls(Window, 0);
              *(float *)&Block = 0.0;
              if ( MEMORY[0xAC1B04] )
              {
                v92 = (HWND *)*((unsigned int *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](v86) & ((1 << MEMORY[0xAC1B0C]) - 1)));
                if ( v92 )
                {
                  while ( *v92 != *v86 )
                  {
                    v92 = (HWND *)v92[129];
                    if ( !v92 )
                      goto LABEL_183;
                  }
                  Block = v92 + 1;
                }
              }
LABEL_183:
              v93 = Block;
              *((unsigned int *)Block + 2) = hWnd;
              v94 = v188;
              v93[205] = *(unsigned char *)(v188 + 205);
              v95 = *(unsigned int *)(v94 + 240);
              v209[3] = (LPARAM)DlgItem;
              v176 = *v86;
              v209[1] = 5;
              v209[2] = 0;
              left = v95;
              v209[0] = 28;
              SendMessageA(v176, 0xE9u, 0, (LPARAM)v209);
              SendMessageA(*v86, 0x4F1u, 0, (unsigned __int8)v193);
              SetWindowPos(hWnd, 0, 0, 0, v196.right - v196.left - nWidth, v196.bottom - v196.top, 2u);
              ShowWindow(*v86, 5);
              BringWindowToTop(*v86);
              InvalidateRect(*v86, 0, 0);
              UpdateWindow(*v86);
              SendMessageA(*v86, 0x4A9u, (WPARAM)*v86, 1);
              SendMessageA(*v86, 0x4D2u, 0, 1);
              v202.left = v87;
              v202.top = v88;
              v202.right = Rect.right + v87 + 1;
              v202.bottom = v88 + Rect.bottom + 1;
              ValidateRect(hDlg, &v202);
            }
          }
          return (HWND)DefWindowProcA(hWnd, Msg, wParam, a8);
        }
        if ( v183 || !v10 || !*(unsigned int *)(v10 + 12) || *(unsigned int *)(v10 + 32) )
          return (HWND)DefWindowProcA(hWnd, Msg, wParam, a8);
        DestroyWindow(*(HWND *)(v10 + 12));
        v181 = *(HWND *)(v10 + 12);
        if ( MEMORY[0xAC1B4C] )
        {
          *(unsigned long long *)Y = (unsigned int)(MEMORY[0xAC1B4C] - 1);
          v96 = (double)*(__int64 *)Y;
          Y[0] = MEMORY[0xAC1B50];
          *(float *)&Block = v96 / (double)MEMORY[0xAC1B50];
          v97 = MEMORY[0xAC1B60](&v181) & ((1 << MEMORY[0xAC1B54]) - 1);
          v98 = (HWND *)*((unsigned int *)MEMORY[0xAC1B48] + v97);
          if ( v98 )
          {
            if ( *v98 == v181 )
            {
              v99 = v98[2];
              __3_YAXPAX_Z(*((void **)MEMORY[0xAC1B48] + v97));
              v100 = *(float *)&Block;
              *((unsigned int *)MEMORY[0xAC1B48] + v97) = v99;
              --MEMORY[0xAC1B4C];
              if ( v100 <= MEMORY[0xAC1B68] )
              {
                v101 = MEMORY[0xAC1B50];
                if ( MEMORY[0xAC1B50] > (unsigned int)MEMORY[0xAC1B78] && MEMORY[0xAC1B5C] != 1 )
                {
                  v102 = (int *)MEMORY[0xAC1B48];
                  v103 = MEMORY[0xAC1B50];
                  Y[0] = (LPARAM)MEMORY[0xAC1B48];
                  MEMORY[0xAC1B50] = (unsigned int)MEMORY[0xAC1B50] >> 1;
                  --MEMORY[0xAC1B54];
                  MEMORY[0xAC1B48] = __2_YAPAXI_Z(4 * (v101 >> 1));
                  memset(MEMORY[0xAC1B48], 0, 4 * MEMORY[0xAC1B50]);
                  if ( v103 > 0 )
                  {
                    v104 = v102;
                    v105 = v103;
                    do
                    {
                      v106 = *v104;
                      if ( *v104 )
                      {
                        do
                        {
                          v107 = MEMORY[0xAC1B60](v106) & ((1 << MEMORY[0xAC1B54]) - 1);
                          v108 = *((unsigned int *)MEMORY[0xAC1B48] + v107);
                          *((unsigned int *)MEMORY[0xAC1B48] + v107) = v106;
                          v109 = *(unsigned int *)(v106 + 8);
                          *(unsigned int *)(v106 + 8) = v108;
                          v106 = v109;
                        }
                        while ( v109 );
                      }
                      ++v104;
                      --v105;
                    }
                    while ( v105 );
                    v102 = (int *)Y[0];
                  }
                  __3_YAXPAX_Z(v102);
                }
              }
            }
            else
            {
              v110 = (HWND *)v98[2];
              if ( v110 )
              {
                while ( *v110 != v181 )
                {
                  v98 = v110;
                  v110 = (HWND *)v110[2];
                  if ( !v110 )
                    goto LABEL_206;
                }
                v98[2] = v110[2];
                --MEMORY[0xAC1B4C];
                __3_YAXPAX_Z(v110);
              }
LABEL_206:
              if ( *(float *)&Block <= MEMORY[0xAC1B68]
                && MEMORY[0xAC1B50] > (unsigned int)MEMORY[0xAC1B78]
                && MEMORY[0xAC1B5C] != 1 )
              {
                v111 = MEMORY[0xAC1B50];
                Block = MEMORY[0xAC1B48];
                MEMORY[0xAC1B50] = (unsigned int)MEMORY[0xAC1B50] >> 1;
                --MEMORY[0xAC1B54];
                MEMORY[0xAC1B48] = __2_YAPAXI_Z(4 * MEMORY[0xAC1B50]);
                memset(MEMORY[0xAC1B48], 0, 4 * MEMORY[0xAC1B50]);
                if ( v111 > 0 )
                {
                  v112 = (int *)Block;
                  v113 = v111;
                  do
                  {
                    v114 = *v112;
                    if ( *v112 )
                    {
                      do
                      {
                        v115 = MEMORY[0xAC1B60](v114) & ((1 << MEMORY[0xAC1B54]) - 1);
                        v116 = *((unsigned int *)MEMORY[0xAC1B48] + v115);
                        *((unsigned int *)MEMORY[0xAC1B48] + v115) = v114;
                        v117 = *(unsigned int *)(v114 + 8);
                        *(unsigned int *)(v114 + 8) = v116;
                        v114 = v117;
                      }
                      while ( v117 );
                    }
                    ++v112;
                    --v113;
                  }
                  while ( v113 );
                }
                __3_YAXPAX_Z(Block);
              }
            }
          }
        }
        memset(v218, 0, sizeof(v218));
        v218[26] = (void *)11;
        v218[25] = (void *)aP0;
        v118 = __2_YAPAXI_Z(4u);
        if ( v118 )
          v119 = (void *)unknown_libname_74(v118);
        else
          v119 = 0;
        v218[15] = v119;
        v218[16] = 0;
        v218[23] = 0;
        v218[36] = (void *)-1;
        if ( MEMORY[0xAC1B04] )
        {
          *(unsigned long long *)Y = (unsigned int)(MEMORY[0xAC1B04] - 1);
          Y[0] = MEMORY[0xAC1B08];
          *(float *)&Block = (double)(unsigned int)(MEMORY[0xAC1B04] - 1) / (double)MEMORY[0xAC1B08];
          v120 = MEMORY[0xAC1B18](&v181) & ((1 << MEMORY[0xAC1B0C]) - 1);
          v121 = (char *)*((unsigned int *)MEMORY[0xAC1B00] + v120);
          if ( v121 )
          {
            if ( *(HWND *)v121 == v181 )
            {
              v122 = v218[13];
              v123 = v218[10];
              Y[0] = (LPARAM)v218[15];
              v124 = v121 + 4;
              if ( v218 != (void **)v124 )
              {
                qmemcpy(v218, v124, sizeof(v218));
                v218[10] = v123;
                v218[15] = (void *)Y[0];
                v218[13] = v122;
                GadgetClass::SetTooltip(v218, *((wchar_t **)v124 + 10));
                SymbolTable::Rebuild(*((unsigned int *)v124 + 13));
              }
              v125 = *((unsigned int *)MEMORY[0xAC1B00] + v120);
              v126 = *(unsigned int *)(v125 + 516);
              if ( v125 )
              {
                GadgetClass::SetTooltip((void **)(v125 + 4), 0);
                for ( i = *(unsigned int **)(v125 + 56); i; i = *(unsigned int **)(v125 + 56) )
                  LinkedList::Remove((unsigned int *)(v125 + 4), i);
                v128 = *(void ***)(v125 + 64);
                if ( v128 )
                  DeleteAndZero::OrFree(v128, 1);
                __3_YAXPAX_Z((void *)v125);
              }
              v129 = *(float *)&Block;
              *((unsigned int *)MEMORY[0xAC1B00] + v120) = v126;
              --MEMORY[0xAC1B04];
              if ( v129 <= MEMORY[0xAC1B20]
                && MEMORY[0xAC1B08] > (unsigned int)MEMORY[0xAC1B30]
                && MEMORY[0xAC1B14] != 1 )
              {
                v130 = (int *)MEMORY[0xAC1B00];
                v131 = MEMORY[0xAC1B08];
                MEMORY[0xAC1B08] = (unsigned int)MEMORY[0xAC1B08] >> 1;
                --MEMORY[0xAC1B0C];
                MEMORY[0xAC1B00] = __2_YAPAXI_Z(4 * MEMORY[0xAC1B08]);
                memset(MEMORY[0xAC1B00], 0, 4 * MEMORY[0xAC1B08]);
                if ( v131 > 0 )
                {
                  v132 = v130;
                  v133 = v131;
                  do
                  {
                    v134 = *v132;
                    if ( *v132 )
                    {
                      do
                      {
                        v135 = HashTable::ComputeHash((int)&MEMORY[0xAC1B00], v134);
                        v136 = *((unsigned int *)MEMORY[0xAC1B00] + v135);
                        *((unsigned int *)MEMORY[0xAC1B00] + v135) = v134;
                        v137 = *(unsigned int *)(v134 + 516);
                        *(unsigned int *)(v134 + 516) = v136;
                        v134 = v137;
                      }
                      while ( v137 );
                    }
                    ++v132;
                    --v133;
                  }
                  while ( v133 );
                }
                __3_YAXPAX_Z(v130);
              }
            }
            else
            {
              v138 = (char *)*((unsigned int *)v121 + 129);
              if ( v138 )
              {
                while ( *(HWND *)v138 != v181 )
                {
                  v121 = v138;
                  v138 = (char *)*((unsigned int *)v138 + 129);
                  if ( !v138 )
                    goto LABEL_245;
                }
                v139 = v218[13];
                Y[0] = (LPARAM)v218[10];
                v197 = v218[15];
                if ( v218 != (void **)(v138 + 4) )
                {
                  qmemcpy(v218, v138 + 4, sizeof(v218));
                  v218[13] = v139;
                  v218[10] = (void *)Y[0];
                  v218[15] = v197;
                  GadgetClass::SetTooltip(v218, *((wchar_t **)v138 + 11));
                  SymbolTable::Rebuild(*((unsigned int *)v138 + 14));
                }
                *((unsigned int *)v121 + 129) = *((unsigned int *)v138 + 129);
                --MEMORY[0xAC1B04];
                Dialog::CleanupTree(v138 + 4);
                __3_YAXPAX_Z(v138);
              }
LABEL_245:
              if ( *(float *)&Block <= MEMORY[0xAC1B20] )
                HashTable::Rebuild2(&MEMORY[0xAC1B00]);
            }
          }
        }
        if ( v218[10] )
        {
          __3_YAXPAX_Z(v218[10]);
          v218[10] = 0;
        }
        v140 = v218[13];
        if ( v218[13] )
        {
          do
          {
            v141 = 0;
            v142 = v140;
            if ( !v140 )
              break;
            while ( v140 != v142 )
            {
              v141 = v142;
              v142 = (unsigned int *)*v142;
              if ( !v142 )
                goto LABEL_259;
            }
            if ( v142 )
            {
              if ( v141 )
                *v141 = *v142;
              else
                v218[13] = *(void **)v142;
              __3_YAXPAX_Z(v142);
              v140 = v218[13];
            }
LABEL_259:
            ;
          }
          while ( v140 );
        }
        v143 = v218[15];
        if ( v218[15] )
        {
          DeleteAndZero::Alt((void **)v218[15]);
          __3_YAXPAX_Z(v143);
        }
        if ( MEMORY[0xAC18C4] )
        {
          *(unsigned long long *)Y = (unsigned int)(MEMORY[0xAC18C4] - 1);
          v144 = (double)*(__int64 *)Y;
          Y[0] = MEMORY[0xAC18C8];
          *(float *)&Block = v144 / (double)MEMORY[0xAC18C8];
          v145 = MEMORY[0xAC18D8](&v181) & ((1 << MEMORY[0xAC18CC]) - 1);
          v146 = (HWND *)*((unsigned int *)MEMORY[0xAC18C0] + v145);
          if ( v146 )
          {
            if ( *v146 == v181 )
            {
              v147 = v146[2];
              __3_YAXPAX_Z(*((void **)MEMORY[0xAC18C0] + v145));
              v148 = *(float *)&Block;
              *((unsigned int *)MEMORY[0xAC18C0] + v145) = v147;
              --MEMORY[0xAC18C4];
              if ( v148 > MEMORY[0xAC18E0] )
                goto LABEL_290;
              v149 = MEMORY[0xAC18C8];
              if ( MEMORY[0xAC18C8] <= (unsigned int)MEMORY[0xAC18F0] || MEMORY[0xAC18D4] == 1 )
                goto LABEL_290;
              v150 = (int *)MEMORY[0xAC18C0];
              v151 = MEMORY[0xAC18C8];
              Y[0] = (LPARAM)MEMORY[0xAC18C0];
              MEMORY[0xAC18C8] = (unsigned int)MEMORY[0xAC18C8] >> 1;
              --MEMORY[0xAC18CC];
              MEMORY[0xAC18C0] = __2_YAPAXI_Z(4 * (v149 >> 1));
              memset(MEMORY[0xAC18C0], 0, 4 * MEMORY[0xAC18C8]);
              if ( v151 > 0 )
              {
                v152 = v150;
                v153 = v151;
                do
                {
                  v154 = *v152;
                  if ( *v152 )
                  {
                    do
                    {
                      v155 = MEMORY[0xAC18D8](v154) & ((1 << MEMORY[0xAC18CC]) - 1);
                      v156 = *((unsigned int *)MEMORY[0xAC18C0] + v155);
                      *((unsigned int *)MEMORY[0xAC18C0] + v155) = v154;
                      v157 = *(unsigned int *)(v154 + 8);
                      *(unsigned int *)(v154 + 8) = v156;
                      v154 = v157;
                    }
                    while ( v157 );
                  }
                  ++v152;
                  --v153;
                }
                while ( v153 );
                v150 = (int *)Y[0];
              }
            }
            else
            {
              v158 = (HWND *)v146[2];
              if ( v158 )
              {
                while ( *v158 != v181 )
                {
                  v146 = v158;
                  v158 = (HWND *)v158[2];
                  if ( !v158 )
                    goto LABEL_280;
                }
                v146[2] = v158[2];
                --MEMORY[0xAC18C4];
                __3_YAXPAX_Z(v158);
              }
LABEL_280:
              if ( *(float *)&Block > MEMORY[0xAC18E0] )
                goto LABEL_290;
              v159 = MEMORY[0xAC18C8];
              if ( MEMORY[0xAC18C8] <= (unsigned int)MEMORY[0xAC18F0] || MEMORY[0xAC18D4] == 1 )
                goto LABEL_290;
              v150 = (int *)MEMORY[0xAC18C0];
              v160 = MEMORY[0xAC18C8];
              Y[0] = (LPARAM)MEMORY[0xAC18C0];
              MEMORY[0xAC18C8] = (unsigned int)MEMORY[0xAC18C8] >> 1;
              --MEMORY[0xAC18CC];
              MEMORY[0xAC18C0] = __2_YAPAXI_Z(4 * (v159 >> 1));
              memset(MEMORY[0xAC18C0], 0, 4 * MEMORY[0xAC18C8]);
              if ( v160 > 0 )
              {
                v161 = v150;
                v162 = v160;
                do
                {
                  v163 = *v161;
                  if ( *v161 )
                  {
                    do
                    {
                      v164 = MEMORY[0xAC18D8](v163) & ((1 << MEMORY[0xAC18CC]) - 1);
                      v165 = *((unsigned int *)MEMORY[0xAC18C0] + v164);
                      *((unsigned int *)MEMORY[0xAC18C0] + v164) = v163;
                      v166 = *(unsigned int *)(v163 + 8);
                      *(unsigned int *)(v163 + 8) = v165;
                      v163 = v166;
                    }
                    while ( v166 );
                  }
                  ++v161;
                  --v162;
                }
                while ( v162 );
                v150 = (int *)Y[0];
              }
            }
            __3_YAXPAX_Z(v150);
          }
        }
LABEL_290:
        WindowLongA = (void *)GetWindowLongA(v181, -21);
        if ( WindowLongA )
          __3_YAXPAX_Z(WindowLongA);
        SetWindowLongA(v181, -21, 0);
        Object::RemoveObjectArray(v181);
        v168 = v188;
        v169 = nWidth;
        *(unsigned int *)(v188 + 12) = 0;
        *(unsigned int *)(v168 + 4) = 0;
        SetWindowPos(hWnd, 0, 0, 0, v169 + Rect.right - Rect.left, Rect.bottom - Rect.top, 2u);
        hDlg = GetParent(hWnd);
        ScreenDialogToClient(hDlg, &lParam);
        v202.left = v204.left - lParam.left;
        v202.right = v169 + Rect.right + v204.left - lParam.left;
        v202.top = v204.top - lParam.top;
        v202.bottom = v204.top - lParam.top + Rect.bottom + 1;
        ValidateRect(hDlg, &v202);
        return (HWND)DefWindowProcA(hWnd, Msg, wParam, a8);
      }
      *(unsigned int *)(v10 + 232) = SendMessageA(result, 0x147u, 0, 0);
      return 0;
    }
    else
    {
      v170 = HIWORD(a8);
      v171 = -1;
      if ( (unsigned __int16)a8 < Rect.right && v170 < Rect.bottom )
      {
        v172 = SendMessageA(result, 0x154u, 0, 0);
        v173 = SendMessageA(MEMORY[0xAC48D0], 0x146u, 0, 0);
        v174 = *(unsigned int *)(v10 + 240) + v170 / v172 < 0 ? 0 : *(unsigned int *)(v10 + 240) + v170 / v172;
        v175 = v173 - 1;
        if ( v175 < v174 )
          return (HWND)v175;
        return (HWND)v174;
      }
      return (HWND)v171;
    }
  }
  else
  {
    if ( v14 == 515 )
    {
LABEL_151:
      v76 = (unsigned __int16)a8;
      v77 = HIWORD(a8);
      if ( (unsigned __int16)a8 > Rect.right
        && (unsigned __int16)a8 < Rect.right + *(unsigned int *)(v10 + 4)
        && HIWORD(a8)
        && v77 < Rect.bottom )
      {
        SendMessageA(*(HWND *)(v10 + 12), Msg, wParam, a8);
        goto LABEL_172;
      }
      PlayVocClass(*((unsigned int *)MEMORY[0x8871E0] + 106), 0x2000, 1.0, 0);
      if ( v77 < 0 || v76 > Rect.right || v77 > Rect.bottom )
      {
        if ( v183 )
          DestroyWindow(*(HWND *)(v10 + 12));
        ReleaseCapture();
        SendMessageA(MEMORY[0xAC48D0], 0x14Fu, 0, 0);
        return 0;
      }
      else
      {
        v78 = SendMessageA(MEMORY[0xAC48D0], 0x154u, 0, 0);
        v79 = SendMessageA(MEMORY[0xAC48D0], 0x146u, 0, 0);
        v80 = v77 / v78;
        if ( v10 )
          v80 += *(unsigned int *)(v10 + 240);
        v81 = v80 < 0 ? 0 : v80;
        v82 = v79 - 1;
        if ( v82 < v81 )
          v81 = v82;
        SendMessageA(MEMORY[0xAC48D0], 0x14Eu, v81, 0);
        v83 = GetWindowLongA(MEMORY[0xAC48D0], -12);
        if ( v183 )
          DestroyWindow(*(HWND *)(v10 + 12));
        ReleaseCapture();
        SendMessageA(MEMORY[0xAC48D0], 0x14Fu, 0, 0);
        PostMessageA(hDlg, 0x111u, v83 | 0x10000, (LPARAM)MEMORY[0xAC48D0]);
        return 0;
      }
    }
    v61 = v14 - 348;
    if ( v61 )
    {
      v62 = v61 - 164;
      if ( !v62 )
      {
        v63 = SendMessageA(hWnd, 0x4E8u, 0, (unsigned __int16)a8 | (HIWORD(a8) << 16));
        v64 = v63;
        if ( v63 != -1 )
        {
          if ( *(unsigned int *)(v10 + 232) != v63 )
            InvalidateRect(hWnd, 0, 0);
          *(unsigned int *)(v10 + 232) = v64;
          DlgItem = GetDlgItem(hDlg, 1685);
          if ( DlgItem )
          {
            unknown_libname_74(&v181);
            v65 = MEMORY[0xAC48D0];
            v66 = hDlg;
            unknown_libname_74(&v186);
            Y[0] = (LPARAM)v65;
            Y[1] = v64;
            SendMessageA(v66, 0x4E9u, 0, (LPARAM)Y);
            WideString::AssignFromPtr((wchar_t **)&v193, (const wchar_t **)&v186);
            DeleteAndZero::Alt((void **)&v186);
            WideString::Reassign_Alt((void **)&v181, (const wchar_t **)&v193);
            DeleteAndZero::Alt(&v193);
            v67 = WideString::GetOrEmpty((wchar_t **)&v181);
            if ( wcscmp(v67, &MEMORY[0x887734]) )
              goto LABEL_137;
            v68 = MEMORY[0xAC48D0];
            v69 = hDlg;
            unknown_libname_74(&v186);
            Y[0] = (LPARAM)v68;
            Y[1] = -1;
            SendMessageA(v69, 0x4E9u, 0, (LPARAM)Y);
            WideString::AssignFromPtr((wchar_t **)&Block, (const wchar_t **)&v186);
            DeleteAndZero::Alt((void **)&v186);
            WideString::Reassign_Alt((void **)&v181, (const wchar_t **)&Block);
            DeleteAndZero::Alt(&Block);
            v70 = WideString::GetOrEmpty((wchar_t **)&v181);
            if ( wcscmp(v70, &MEMORY[0x887734]) )
            {
LABEL_137:
              v177 = WideString::GetOrEmpty_Alt((wchar_t **)&v181);
              SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v177);
            }
            DeleteAndZero::Alt((void **)&v181);
          }
        }
        return 0;
      }
      if ( v62 != 1 )
        goto LABEL_172;
      goto LABEL_151;
    }
    v71 = wParam;
    v72 = SendMessageA(result, 0x146u, 0, 0);
    v73 = SendMessageA(MEMORY[0xAC48D0], 0x154u, 0, 0);
    if ( !v72 || !v73 )
      goto LABEL_172;
    v74 = (Rect.bottom - Rect.top) / v73;
    if ( v71 < 0 )
      v71 = 0;
    v75 = v72 - v74;
    if ( v75 <= 0 )
    {
      v71 = 0;
    }
    else if ( v71 > v75 )
    {
      v71 = v75;
    }
    if ( v71 != *(unsigned int *)(v10 + 240) )
    {
      *(unsigned int *)(v10 + 240) = v71;
      InvalidateRect(hWnd, 0, 0);
    }
    return 0;
  }

}
double GameState::Reset(...) { return 0; }

  *this = 0; /*0x680ff4*/
  *((unsigned int *)this + 1) = 0; /*0x680ff6*/
  *((unsigned int *)this + 98) = -1; /*0x680ff9*/
  *((unsigned int *)this + 99) = 0; /*0x681003*/
  *((unsigned int *)this + 252) = 0; /*0x681009*/
  *((unsigned short *)this + 4) = 0; /*0x68100f*/
  *((unsigned short *)this + 132) = 0; /*0x681013*/
  *((unsigned char *)this + 400) = 0; /*0x68101a*/
  *((unsigned char *)this + 660) = 0; /*0x681020*/
  *((unsigned char *)this + 724) = 0; /*0x681026*/
  *((unsigned int *)this + 246) = 0; /*0x68102c*/
  *((unsigned int *)this + 247) = 0; /*0x681032*/
  *((unsigned int *)this + 248) = 0; /*0x681038*/
  *((unsigned int *)this + 249) = 0; /*0x68103e*/
  *((unsigned int *)this + 250) = 0; /*0x681044*/
  *((unsigned int *)this + 251) = 0; /*0x68104a*/
  return this; /*0x681050*/

}
double GenericList::Constructor(...) { return 0; }

  unsigned int *result; // eax
  unsigned int *v2; // edx
  int v3; // ebx
  int v4; // edi
  int v5; // edi
  int v6; // edi

  result = this; /*0x52ace0*/
  v2 = (unsigned int *)this + 4; /*0x52ace9*/
  *((unsigned int *)this + 2) = 0; /*0x52acef*/
  *((unsigned int *)this + 3) = 0; /*0x52acf2*/
  *((unsigned int *)this + 1) = &vt_GenericNode; /*0x52acf5*/
  *((unsigned int *)this + 5) = 0; /*0x52acfb*/
  *((unsigned int *)this + 6) = 0; /*0x52acfe*/
  *((unsigned int *)this + 4) = &vt_GenericNode; /*0x52ad01*/
  *this = &vt_GenericList; /*0x52ad07*/
  if ( this != (unsigned int *)-16 ) /*0x52ad0d*/
  {
    v3 = *((unsigned int *)this + 5); /*0x52ad0f*/
    if ( v3 ) /*0x52ad14*/
    {
      v4 = *((unsigned int *)this + 6); /*0x52ad16*/
      if ( v4 ) /*0x52ad1b*/
      {
        *(unsigned int *)(v4 + 4) = v3; /*0x52ad1d*/
        *(unsigned int *)(*((unsigned int *)this + 5) + 8) = *((unsigned int *)this + 6); /*0x52ad26*/
        *((unsigned int *)this + 6) = 0; /*0x52ad29*/
        *((unsigned int *)this + 5) = 0; /*0x52ad2c*/
      }
    }
  }
  v5 = *((unsigned int *)this + 2); /*0x52ad2f*/
  *((unsigned int *)this + 6) = (unsigned int *)this + 1; /*0x52ad32*/
  *((unsigned int *)this + 5) = v5; /*0x52ad35*/
  v6 = *((unsigned int *)this + 2); /*0x52ad38*/
  if ( v6 ) /*0x52ad3d*/
    *(unsigned int *)(v6 + 8) = v2; /*0x52ad3f*/
  *((unsigned int *)this + 2) = v2; /*0x52ad42*/
  return result; /*0x52ad45*/

}
double Hash::ComputeHashSHA1(...) { return 0; }

  unsigned int v3[3]; // [esp+8h] [ebp-8Ch] BYREF
  int v4[3]; // [esp+14h] [ebp-80h] BYREF
  char v5; // [esp+20h] [ebp-74h]
  int v6; // [esp+38h] [ebp-5Ch]
  int v7; // [esp+3Ch] [ebp-58h]
  int v8; // [esp+40h] [ebp-54h]
  int v9; // [esp+44h] [ebp-50h]
  int v10; // [esp+48h] [ebp-4Ch]
  int v11; // [esp+4Ch] [ebp-48h]
  int v12; // [esp+50h] [ebp-44h]

  if ( !*((unsigned char *)this + 64) ) /*0x476d8c*/
  {
    v4[1] = 0; /*0x476d95*/
    v4[2] = 0; /*0x476d9a*/
    v5 = 0; /*0x476d9e*/
    v11 = 0; /*0x476da2*/
    v12 = 0; /*0x476da6*/
    v6 = 1732584193; /*0x476daa*/
    v7 = -271733879; /*0x476db2*/
    v8 = -1732584194; /*0x476dba*/
    v9 = 271733878; /*0x476dc2*/
    v10 = -1009589776; /*0x476dca*/
    v4[0] = (int)&vt_SHAPipe; /*0x476dd2*/
    INIClass::WriteToString((unsigned int *)this, (int)v4); /*0x476dda*/
    SHA1::ComputeThunk((char *)this + 65); /*0x476de7*/
    *((unsigned char *)this + 64) = 1; /*0x476df0*/
    Pipe::Dtor(v4); /*0x476df4*/
  }
  memset(v3, 0, sizeof(v3)); /*0x476e03*/
  return Checksummer::Add_Buffer(v3, (unsigned __int8 *)((char *)this + 65), 20); /*0x476e14*/

}
double Hash::InsertOrdered(...) { return 0; }

  if ( (*(unsigned __int8 (**)(void *, int))(*(unsigned int *)this + 44))(this, a2) ) /*0x4f4418*/
    return 0; /*0x4f441f*/
  if ( MEMORY[0xA8EF54] ) /*0x4f442c*/
    (*(void (**)(int, int))(*(unsigned int *)a2 + 16))(a2, MEMORY[0xA8EF54]); /*0x4f4433*/
  else
    MEMORY[0xA8EF54] = a2; /*0x4f443c*/
  return 1; /*0x4f4421*/

}
double Hash::Reset(...) { return 0; }

  *((unsigned int *)this + 1) = 0; /*0x5565f2*/
  *((unsigned int *)this + 2) = 0; /*0x5565f5*/
  return 0; /*0x5565f8*/

}
double HashMap::Shrink(...) { return 0; }

  unsigned int v2; // esi
  int *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  v2 = *((unsigned int *)this + 2); /*0x7ae465*/
  if ( v2 > *((unsigned int *)this + 12) && *((unsigned char *)this + 20) != 1 ) /*0x7ae477*/
  {
    v3 = (int *)*this; /*0x7ae480*/
    v4 = *((unsigned int *)this + 3); /*0x7ae483*/
    v13 = (int *)*this; /*0x7ae486*/
    *((unsigned int *)this + 2) = v2 >> 1; /*0x7ae48c*/
    *((unsigned int *)this + 3) = v4 - 1; /*0x7ae494*/
    v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x7ae49f*/
    v6 = 4 * *((unsigned int *)this + 2); /*0x7ae4a4*/
    *this = v5; /*0x7ae4ab*/
    memset(v5, 0, v6); /*0x7ae4b0*/
    if ( (int)v2 > 0 ) /*0x7ae4bb*/
    {
      v7 = v3; /*0x7ae4bd*/
      v8 = v2; /*0x7ae4bf*/
      do /*0x7ae4f3*/
      {
        v9 = *v7; /*0x7ae4c1*/
        if ( *v7 ) /*0x7ae4c1*/
        {
          do /*0x7ae4ed*/
          {
            v10 = ((int (*)(int))*((unsigned int *)this + 6))(v9) & ((1 << *((unsigned int *)this + 3)) - 1); /*0x7ae4d7*/
            v11 = *(unsigned int *)(*(unsigned int *)this + 4 * v10); /*0x7ae4db*/
            *(unsigned int *)(*(unsigned int *)this + 4 * v10) = v9; /*0x7ae4e1*/
            v12 = *(unsigned int *)(v9 + 8); /*0x7ae4e3*/
            *(unsigned int *)(v9 + 8) = v11; /*0x7ae4e6*/
            v9 = v12; /*0x7ae4e9*/
          }
          while ( v12 ); /*0x7ae4ed*/
        }
        ++v7; /*0x7ae4ef*/
        --v8; /*0x7ae4f2*/
      }
      while ( v8 ); /*0x7ae4f3*/
      v3 = v13; /*0x7ae4f5*/
    }
    __3_YAXPAX_Z(v3); /*0x7ae4fa*/
  }

}
double HashTree::MarkEntry(...) { return 0; }

  int result; // eax
  unsigned int *v2; // ecx
  int v3; // edx
  bool v4; // cc
  unsigned int v5[3]; // [esp+8h] [ebp-110h] BYREF
  char String[260]; // [esp+14h] [ebp-104h] BYREF

  strcpy(String, this); /*0x5b4292*/
  _strupr(String); /*0x5b42a0*/
  memset(v5, 0, sizeof(v5)); /*0x5b42bc*/
  result = Checksummer::Add_Buffer(v5, (unsigned __int8 *)String, strlen(String)); /*0x5b42ce*/
  v2 = MEMORY[0xABF00C]; /*0x5b42d3*/
  if ( MEMORY[0xABF00C] ) /*0x5b42db*/
  {
    do /*0x5b42dd*/
    {
      v3 = v2[2]; /*0x5b42dd*/
      v4 = v3 < result; /*0x5b42e0*/
      if ( v3 == result ) /*0x5b42e2*/
      {
        if ( v2[3] ) /*0x5b42e4*/
        {
          v2[3] = 0; /*0x5b4301*/
          return result; /*0x5b4301*/
        }
        v4 = v3 < result; /*0x5b42e9*/
      }
      if ( v4 ) /*0x5b42eb*/
        v2 = (unsigned int *)v2[1]; /*0x5b42ed*/
      else
        v2 = (unsigned int *)*v2; /*0x5b42f2*/
    }
    while ( v2 ); /*0x5b42dd*/
  }
  return result; /*0x5b42f8*/

}
double Heap::SiftDown(...) { return 0; }

  int v2; // esi
  int v3; // edx
  int v4; // edi
  int v5; // eax
  int v6; // ebp
  int v7; // edi

  v2 = a2; /*0x5ad875*/
  v3 = 2 * a2; /*0x5ad87a*/
  v4 = 2 * a2 + 1; /*0x5ad87d*/
  if ( 2 * a2 > *this /*0x5ad89b*/
    || *(float *)(*(unsigned int *)(*(this + 2) + 4 * a2) + 4) <= (double)*(float *)(*(unsigned int *)(*(this + 2) + 8 * a2) + 4) )
  {
    v3 = a2; /*0x5ad89d*/
  }
  if ( v4 <= *this /*0x5ad8b9*/
    && *(float *)(*(unsigned int *)(*(this + 2) + 4 * v3) + 4) > (double)*(float *)(*(unsigned int *)(*(this + 2) + 4 * v4) + 4) )
  {
    v3 = 2 * a2 + 1; /*0x5ad8bb*/
  }
  if ( v3 != a2 ) /*0x5ad8bf*/
  {
    do /*0x5ad91f*/
    {
      v5 = *(this + 2); /*0x5ad8c1*/
      v6 = 2 * v3 + 1; /*0x5ad8c4*/
      v7 = *(unsigned int *)(v5 + 4 * v2); /*0x5ad8cb*/
      *(unsigned int *)(v5 + 4 * v2) = *(unsigned int *)(v5 + 4 * v3); /*0x5ad8ce*/
      v2 = v3; /*0x5ad8d4*/
      *(unsigned int *)(*(this + 2) + 4 * v3) = v7; /*0x5ad8d6*/
      if ( 2 * v3 <= *this /*0x5ad8fb*/
        && *(float *)(*(unsigned int *)(*(this + 2) + 4 * v3) + 4) > (double)*(float *)(*(unsigned int *)(*(this + 2) + 8 * v3) + 4) )
      {
        v3 *= 2; /*0x5ad8fd*/
      }
      if ( v6 <= *this /*0x5ad919*/
        && *(float *)(*(unsigned int *)(*(this + 2) + 4 * v3) + 4) > (double)*(float *)(*(unsigned int *)(*(this + 2) + 4 * v6) + 4) )
      {
        v3 = v6; /*0x5ad91b*/
      }
    }
    while ( v3 != v2 ); /*0x5ad91f*/
  }

}
double INISectionList::Constructor(...) { return 0; }

  unsigned int *result; // eax
  unsigned int *v2; // edx
  int v3; // ebx
  int v4; // edi
  int v5; // edi
  int v6; // edi

  result = this; /*0x49e8e0*/
  v2 = (unsigned int *)this + 4; /*0x49e8e9*/
  *((unsigned int *)this + 2) = 0; /*0x49e8ef*/
  *((unsigned int *)this + 3) = 0; /*0x49e8f2*/
  *((unsigned int *)this + 1) = &vt_GenericNode; /*0x49e8f5*/
  *((unsigned int *)this + 5) = 0; /*0x49e8fb*/
  *((unsigned int *)this + 6) = 0; /*0x49e8fe*/
  *((unsigned int *)this + 4) = &vt_GenericNode; /*0x49e901*/
  *this = &vt_GenericList; /*0x49e907*/
  if ( this != (unsigned int *)-16 ) /*0x49e90d*/
  {
    v3 = *((unsigned int *)this + 5); /*0x49e90f*/
    if ( v3 ) /*0x49e914*/
    {
      v4 = *((unsigned int *)this + 6); /*0x49e916*/
      if ( v4 ) /*0x49e91b*/
      {
        *(unsigned int *)(v4 + 4) = v3; /*0x49e91d*/
        *(unsigned int *)(*((unsigned int *)this + 5) + 8) = *((unsigned int *)this + 6); /*0x49e926*/
        *((unsigned int *)this + 6) = 0; /*0x49e929*/
        *((unsigned int *)this + 5) = 0; /*0x49e92c*/
      }
    }
  }
  v5 = *((unsigned int *)this + 2); /*0x49e92f*/
  *((unsigned int *)this + 6) = (unsigned int *)this + 1; /*0x49e932*/
  *((unsigned int *)this + 5) = v5; /*0x49e935*/
  v6 = *((unsigned int *)this + 2); /*0x49e938*/
  if ( v6 ) /*0x49e93d*/
    *(unsigned int *)(v6 + 8) = v2; /*0x49e93f*/
  *((unsigned int *)this + 2) = v2; /*0x49e942*/
  *this = &vt_List_INIClass_INISection; /*0x49e947*/
  return result; /*0x49e945*/

}
double InputManager_ProcessEvents::Vtable(...) { return 0; }

  ObjectClass *v5; // ebx
  MouseClass *v6; // esi
  int v7; // eax
  int v8; // eax
  unsigned int v10[2]; // [esp+Ch] [ebp-8h] BYREF

  aP2->field_0 = (*(int (**)(unsigned int))(**(unsigned int **)&MEMORY[0x87F8E4].__pad_5568[10228] + 44))(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[10228]); /*0x4f4337*/
  *a3 = (*(int (**)(unsigned int))(**(unsigned int **)&MEMORY[0x87F8E4].__pad_5568[10228] + 48))(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[10228]); /*0x4f4349*/
  if ( *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[1128] ) /*0x4f4353*/
  {
    if ( (*(int (**)(unsigned int))(**(unsigned int **)&MEMORY[0xA8D63C].__pad_14B0[1128] + 92))(*(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[1128]) ) /*0x4f4357*/
      (*(void (**)(int *, unsigned int))(*this + 56))(this, 0); /*0x4f4364*/
    v5 = *(ObjectClass **)&MEMORY[0x87F8E4].__pad_5568[9416]; /*0x4f436e*/
    *(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9416] = *(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9408]; /*0x4f4374*/
    v6 = aP1; /*0x4f4385*/
    aP1->field_0 = (*(int (**)(unsigned int))(**(unsigned int **)&MEMORY[0xA8D63C].__pad_14B0[1128] + 40))(*(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[1128]); /*0x4f4389*/
    *(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9416] = v5; /*0x4f438b*/
  }
  else
  {
    v6 = aP1; /*0x4f439f*/
    v7 = (unsigned __int16)EventQueue::Process(MEMORY[0x87F770]); /*0x4f43a3*/
    aP1->field_0 = v7; /*0x4f43a8*/
    if ( v7 ) /*0x4f43aa*/
      aP1->field_0 = (unsigned __int16)EventQueue::Read(MEMORY[0x87F770]); /*0x4f43bc*/
  }
  v10[0] = aP2->field_0; /*0x4f43c5*/
  v8 = *this; /*0x4f43c9*/
  v10[1] = *a3; /*0x4f43d5*/
  return (*(int (**)(int *, MouseClass *, unsigned int *))(v8 + 40))(this, v6, v10); /*0x4f43dc*/

}
double Int4::Set(...) { return 0; }

  *this = aP1; /*0x645c3a*/
  *(this + 1) = aP2; /*0x645c40*/
  *(this + 2) = aP3; /*0x645c47*/
  *(this + 3) = a5; /*0x645c4a*/
  return this; /*0x645c4d*/

}
double Int4::Set2(...) { return 0; }

  *this = a2; /*0x645c58*/
  *(this + 1) = a3; /*0x645c5e*/
  *(this + 2) = a4; /*0x645c65*/
  *(this + 3) = a5; /*0x645c68*/
  return a4; /*0x645c6b*/

}
// 0x717bd0
double IntDynamicVector::Construct(...) { return 0; }

  *this = &vt_DynamicVectorClass_int; /*0x717bd2*/
  return this; /*0x717bd8*/

}
  *this = &vt_DynamicVectorClass_int; /*0x717bd2*/
  return this; /*0x717bd8*/

}
double IsRandMap::Sed(...) { return 0; }

  return _strcmpi((const void *)((char *)this + 88), aRandmapSed) == 0; /*0x69ae06*/

}
double IsRandMap::Sed2(...) { return 0; }

  return _strcmpi((const void *)((char *)this + 1704), aRandmapSed) == 0; /*0x69ae89*/

}
double KeyValuePair::Init(...) { return 0; }

  *this = aP1; /*0x52aec6*/
  *(this + 1) = 0; /*0x52aeca*/
  *(this + 2) = 0; /*0x52aecd*/
  return this; /*0x52aed0*/

}
double KeywordType::FindOrCreate2(...) { return 0; }

  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x524ccc*/
    return 0; /*0x524d2f*/
  v2 = 0; /*0x524cdd*/
  if ( *(int *)&HouseClass_Player.__pad_5568[20644] <= 0 ) /*0x524ce1*/
  {
LABEL_6:
    v3 = __2_YAPAXI_Z(0xED0u); /*0x524d06*/
    if ( v3 ) /*0x524d15*/
      return (InfantryTypeClass *)InfantryTypeClass::Constructor(v3, Source); /*0x524d21*/
    return 0; /*0x524d15*/
  }
  while ( _strcmpi((const void *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20632] + 4 * v2) + 36), Source) ) /*0x524cfa*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[20644] ) /*0x524d04*/
      goto LABEL_6; /*0x524d04*/
  }
  return *(InfantryTypeClass **)(*(unsigned int *)&HouseClass_Player.__pad_5568[20632] + 4 * v2); /*0x524d1f*/

}
double Lightning::Draw(...) { return 0; }

  unsigned char *v8; // esi
  int v9; // edi
  int *v10; // eax
  double v11; // st7
  int result; // eax
  int v13; // ebx
  int i; // ecx
  int v15; // esi
  int v16; // edx
  int v17; // esi
  int v18; // edx
  int v19; // esi
  unsigned int *v20; // edi
  double v21; // st7
  unsigned int *v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // esi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // edi
  unsigned int *v33; // esi
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // edi
  unsigned int *v38; // esi
  int v39; // eax
  int v40; // edx
  unsigned int *v41; // eax
  unsigned int *v42; // ecx
  unsigned int *v43; // edx
  unsigned int *v44; // esi
  int v45; // edi
  int v46; // edx
  int v47; // eax
  int v48; // edi
  int v49; // esi
  int v50; // ebx
  int v51; // eax
  int v52; // edx
  char v53; // [esp+53h] [ebp-3F5h]
  int v54; // [esp+54h] [ebp-3F4h]
  int v55; // [esp+54h] [ebp-3F4h]
  int v56; // [esp+54h] [ebp-3F4h]
  int v57; // [esp+58h] [ebp-3F0h]
  int v58; // [esp+5Ch] [ebp-3ECh]
  unsigned int *v59; // [esp+60h] [ebp-3E8h]
  int v60; // [esp+60h] [ebp-3E8h]
  int v61; // [esp+64h] [ebp-3E4h]
  int v62; // [esp+68h] [ebp-3E0h]
  int v63; // [esp+6Ch] [ebp-3DCh]
  int v64; // [esp+70h] [ebp-3D8h]
  char *v65; // [esp+74h] [ebp-3D4h]
  int v66; // [esp+78h] [ebp-3D0h]
  int v67; // [esp+78h] [ebp-3D0h]
  int v69; // [esp+84h] [ebp-3C4h] BYREF
  int v70; // [esp+88h] [ebp-3C0h]
  int v71; // [esp+8Ch] [ebp-3BCh]
  unsigned int v72[9]; // [esp+90h] [ebp-3B8h] BYREF
  unsigned int v73[9]; // [esp+B4h] [ebp-394h] BYREF
  int v74; // [esp+D8h] [ebp-370h]
  unsigned int v75[9]; // [esp+DCh] [ebp-36Ch] BYREF
  unsigned int v76[2]; // [esp+100h] [ebp-348h] BYREF
  int v77; // [esp+108h] [ebp-340h]
  unsigned int v78[2]; // [esp+10Ch] [ebp-33Ch] BYREF
  int v79; // [esp+114h] [ebp-334h]
  unsigned int v80[2]; // [esp+118h] [ebp-330h] BYREF
  int v81; // [esp+120h] [ebp-328h]
  unsigned int v82[2]; // [esp+124h] [ebp-324h] BYREF
  int v83; // [esp+12Ch] [ebp-31Ch]
  unsigned int v84[2]; // [esp+130h] [ebp-318h] BYREF
  int v85; // [esp+138h] [ebp-310h]
  unsigned int v86[2]; // [esp+13Ch] [ebp-30Ch] BYREF
  int v87; // [esp+144h] [ebp-304h]
  unsigned int v88[6]; // [esp+148h] [ebp-300h] BYREF
  int v89[2]; // [esp+160h] [ebp-2E8h] BYREF
  int v90[2]; // [esp+168h] [ebp-2E0h] BYREF
  int v91[2]; // [esp+170h] [ebp-2D8h] BYREF
  int v92[2]; // [esp+178h] [ebp-2D0h] BYREF
  int v93[2]; // [esp+180h] [ebp-2C8h] BYREF
  unsigned char v94[36]; // [esp+188h] [ebp-2C0h] BYREF
  char v95; // [esp+1ACh] [ebp-29Ch] BYREF

  v8 = v94; /*0x4c1f33*/
  v9 = 8; /*0x4c1f3a*/
  do /*0x4c1f64*/
  {
    Array::ForEach((int)v8, 12, 3, (int (*)(int))__0Iostream_init_QAE_XZ_3); /*0x4c1f49*/
    Array::ForEach((int)(v8 + 36), 12, 3, (int (*)(int))__0Iostream_init_QAE_XZ_3); /*0x4c1f5b*/
    v8 += 88; /*0x4c1f60*/
    --v9; /*0x4c1f63*/
  }
  while ( v9 ); /*0x4c1f64*/
  v53 = 1; /*0x4c1f88*/
  v62 = 0; /*0x4c1f8d*/
  v10 = Coord::Subtract(v76, a2 - a5, a3 - a6, a4 - a7); /*0x4c1f95*/
  v69 = *v10; /*0x4c1f9f*/
  v70 = v10[1]; /*0x4c1fa6*/
  v71 = v10[2]; /*0x4c1fb1*/
  v11 = Math::Sqrt((double)v69 * (double)v69 + (double)v71 * (double)v71 + (double)v70 * (double)v70); /*0x4c1fd6*/
  result = Math::RoundToInt(v11); /*0x4c1fde*/
  v58 = result; /*0x4c1fe5*/
  if ( result )
  {
    v73[1] = a6; /*0x4c1ff1*/
    v73[2] = a7; /*0x4c1ffa*/
    v74 = (102 * result) >> 8; /*0x4c2014*/
    v57 = *(this + 6); /*0x4c202c*/
    v59 = v94; /*0x4c2033*/
    v73[0] = a5; /*0x4c203c*/
    qmemcpy(&v73[3], v73, 0x18u); /*0x4c2043*/
    v75[1] = a3; /*0x4c2048*/
    v75[0] = a2; /*0x4c204f*/
    v75[2] = a4; /*0x4c2059*/
    qmemcpy(&v75[3], v75, 0x18u); /*0x4c207c*/
    v65 = &v95; /*0x4c207e*/
    v64 = 0; /*0x4c208d*/
    v61 = (char *)v73 - v94; /*0x4c209e*/
    v13 = (23 * result) >> 8; /*0x4c20a6*/
    v54 = v13; /*0x4c20ab*/
    v63 = (char *)v72 - v94; /*0x4c20af*/
    while ( 1 )
    {
      while ( result > 64 && v62 < 8 ) /*0x4c20c1*/
      {
        for ( i = 0; i < 9; v72[i - 1] = v18 >> 1 ) /*0x4c20c7*/
        {
          v15 = v75[i + 1]; /*0x4c20d6*/
          v72[i] = (v75[i] + v73[i]) >> 1; /*0x4c20df*/
          v16 = v15 + v73[i + 1]; /*0x4c20e7*/
          v17 = v75[i + 2]; /*0x4c20e9*/
          v72[i + 1] = v16 >> 1; /*0x4c20f2*/
          v18 = v17 + v73[i + 2]; /*0x4c20fa*/
          i += 3; /*0x4c20fc*/
        }
        if ( v53 ) /*0x4c2110*/
        {
          v53 = 0; /*0x4c211a*/
          v19 = 0; /*0x4c211f*/
          v20 = v88; /*0x4c2121*/
          do /*0x4c2166*/
          {
            v21 = Math::SinCos((double)(int)*(this + 7) * 3.141592653589793 / (double)(v19 + 7)); /*0x4c214c*/
            *v20 = Math::RoundToInt(v21 * (double)v54); /*0x4c215d*/
            ++v19; /*0x4c215f*/
            ++v20; /*0x4c2160*/
          }
          while ( v19 < 6 ); /*0x4c2166*/
          v22 = &v72[1]; /*0x4c216f*/
          v23 = 3; /*0x4c217f*/
          v24 = (v88[2] + v88[4] + 2 * v13) >> 1; /*0x4c2184*/
          do /*0x4c21c0*/
          {
            v25 = v88[5]; /*0x4c219b*/
            *(v22 - 1) += v88[0] + v88[3]; /*0x4c21a2*/
            *v22 += v88[1] + v25; /*0x4c21b2*/
            v22[1] += v24; /*0x4c21b9*/
            v22 += 3; /*0x4c21bc*/
            --v23; /*0x4c21bf*/
          }
          while ( v23 ); /*0x4c21c0*/
          result = v58; /*0x4c21c2*/
        }
        if ( result > 128 ) /*0x4c21cb*/
        {
          v29 = Random::Range(MEMORY[0x886B88], -v13, v13); /*0x4c222e*/
          v72[0] += v29; /*0x4c223b*/
          v30 = Random::Range(MEMORY[0x886B88], -v13, v13); /*0x4c2244*/
          v72[1] += v30; /*0x4c2251*/
          v31 = Random::Range(MEMORY[0x886B88], -v13, v13); /*0x4c225a*/
          v72[2] += v31; /*0x4c225f*/
        }
        else
        {
          v26 = Random::Range(MEMORY[0x886B88], -1, 1); /*0x4c21d6*/
          v72[0] += 2 * v13 * v26; /*0x4c21ee*/
          v27 = Random::Range(MEMORY[0x886B88], -1, 1); /*0x4c21f2*/
          v72[1] += 2 * v13 * v27; /*0x4c220a*/
          v28 = Random::Range(MEMORY[0x886B88], -1, 1); /*0x4c220e*/
          v72[2] += 2 * v13 * v28; /*0x4c221d*/
        }
        if ( v58 <= v74 ) /*0x4c2272*/
        {
          v37 = -v13; /*0x4c22d6*/
          v38 = &v72[4]; /*0x4c22d8*/
          v56 = 2; /*0x4c22dc*/
          do /*0x4c232a*/
          {
            *(v38 - 1) += Random::Range(MEMORY[0x886B88], v37, v13); /*0x4c22fc*/
            *v38 += Random::Range(MEMORY[0x886B88], v37, v13); /*0x4c230f*/
            v39 = Random::Range(MEMORY[0x886B88], v37, v13); /*0x4c2311*/
            v40 = v38[1]; /*0x4c2316*/
            v38 += 3; /*0x4c2319*/
            *(v38 - 2) = v39 + v40; /*0x4c2322*/
            --v56; /*0x4c2326*/
          }
          while ( v56 ); /*0x4c232a*/
        }
        else
        {
          v32 = -v13; /*0x4c2274*/
          v33 = &v72[4]; /*0x4c2276*/
          v55 = 2; /*0x4c227a*/
          do /*0x4c22d2*/
          {
            v34 = Random::Range(MEMORY[0x886B88], v32, v13); /*0x4c2289*/
            *(v33 - 1) = v72[0] + (v34 >> 1); /*0x4c229d*/
            v35 = Random::Range(MEMORY[0x886B88], v32, v13); /*0x4c22a0*/
            *v33 = v72[1] + (v35 >> 1); /*0x4c22b4*/
            v36 = Random::Range(MEMORY[0x886B88], v32, v13); /*0x4c22b6*/
            v33 += 3; /*0x4c22bf*/
            *(v33 - 2) = v72[2] + (v36 >> 1); /*0x4c22c6*/
            --v55; /*0x4c22ce*/
          }
          while ( v55 ); /*0x4c22d2*/
        }
        v13 >>= 1; /*0x4c233d*/
        v41 = v59; /*0x4c2345*/
        v58 >>= 1; /*0x4c2349*/
        v54 = v13; /*0x4c234d*/
        v42 = v59; /*0x4c2351*/
        v60 = 3; /*0x4c2353*/
        do /*0x4c2398*/
        {
          *v42 = *(unsigned int *)((char *)v42 + v63); /*0x4c2365*/
          v42[1] = *(unsigned int *)((char *)v42 + v63 + 4); /*0x4c236a*/
          v42[2] = *(unsigned int *)((char *)v42 + v63 + 8); /*0x4c2370*/
          v43 = (unsigned int *)((char *)v42 + v61); /*0x4c2377*/
          v44 = v42 + 9; /*0x4c2379*/
          v42 += 3; /*0x4c237c*/
          *v44 = *v43; /*0x4c2381*/
          v44[1] = v43[1]; /*0x4c2386*/
          v44[2] = v43[2]; /*0x4c238c*/
          --v60; /*0x4c2394*/
        }
        while ( v60 ); /*0x4c2398*/
        v41[18] = v58; /*0x4c23a2*/
        v41[21] = v64; /*0x4c23a9*/
        v41[19] = v13; /*0x4c23b9*/
        v41[20] = (v64 + v57) >> 1; /*0x4c23bc*/
        v59 = v41 + 22; /*0x4c23c3*/
        v63 -= 88; /*0x4c23cf*/
        v61 -= 88; /*0x4c23d7*/
        v65 += 88; /*0x4c23db*/
        ++v62; /*0x4c23ed*/
        result = v58; /*0x4c23f1*/
        qmemcpy(v73, v72, sizeof(v73)); /*0x4c23f5*/
        v64 = (v64 + v57) >> 1; /*0x4c23f7*/
      }
      v82[0] = v73[3]; /*0x4c2415*/
      v82[1] = v73[4]; /*0x4c2423*/
      v83 = v73[5]; /*0x4c2431*/
      v84[0] = v75[3]; /*0x4c243f*/
      v84[1] = v75[4]; /*0x4c2446*/
      v85 = v75[5]; /*0x4c245b*/
      Coord::To_Screen(MEMORY[0x887324], v84, v89); /*0x4c246a*/
      Coord::To_Screen(MEMORY[0x887324], v82, v93); /*0x4c2485*/
      v45 = v57 - ZCoordToScreenY(v85) - 2; /*0x4c24a5*/
      v66 = v64 - ZCoordToScreenY(v83) - 2; /*0x4c24ba*/
      v46 = *(unsigned int *)(MEMORY[0x87F6C4] + 372); /*0x4c24c6*/
      v47 = *(unsigned int *)(MEMORY[0x87F6C4] + 4) == 1
          ? *(unsigned __int8 *)(v46 + a8)
          : *(unsigned __int16 *)(v46 + 2 * a8);
      (*(void (**)(int, int *, int *, int *, int, int, int, unsigned int))(*(unsigned int *)MEMORY[0x88731C] + 52))( /*0x4c2512*/
        MEMORY[0x88731C],
        &MEMORY[0x886FA0],
        v89,
        v93,
        v47,
        v45,
        v66,
        0);
      v86[0] = v73[6]; /*0x4c252a*/
      v86[1] = v73[7]; /*0x4c2538*/
      v80[0] = v75[6]; /*0x4c2546*/
      v80[1] = v75[7]; /*0x4c254d*/
      v87 = v73[8]; /*0x4c255b*/
      v81 = v75[8]; /*0x4c2578*/
      Coord::To_Screen(MEMORY[0x887324], v80, v92); /*0x4c257f*/
      Coord::To_Screen(MEMORY[0x887324], v86, v90); /*0x4c259a*/
      v48 = v57 - ZCoordToScreenY(v81) - 2; /*0x4c25b6*/
      v67 = v64 - ZCoordToScreenY(v87) - 2; /*0x4c25c7*/
      if ( *(unsigned int *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x4c25d4*/
        (*(void (**)(int, int *, int *, int *, unsigned int, int, int, unsigned int))(*(unsigned int *)MEMORY[0x88731C] + 52))( /*0x4c25e8*/
          MEMORY[0x88731C],
          &MEMORY[0x886FA0],
          v92,
          v90,
          *(unsigned __int8 *)(*(unsigned int *)(MEMORY[0x87F6C4] + 372) + a8),
          v48,
          v67,
          0);
      else
        (*(void (**)(int, int *, int *, int *, unsigned int, int, int, unsigned int))(*(unsigned int *)MEMORY[0x88731C] + 52))( /*0x4c2627*/
          MEMORY[0x88731C],
          &MEMORY[0x886FA0],
          v92,
          v90,
          *(unsigned __int16 *)(*(unsigned int *)(MEMORY[0x87F6C4] + 372) + 2 * a8),
          v48,
          v67,
          0);
      v76[0] = v73[0]; /*0x4c2636*/
      v76[1] = v73[1]; /*0x4c2644*/
      v78[0] = v75[0]; /*0x4c2652*/
      v78[1] = v75[1]; /*0x4c2659*/
      v77 = v73[2]; /*0x4c266b*/
      v79 = v75[2]; /*0x4c2681*/
      Coord::To_Screen(MEMORY[0x887324], v78, &v69); /*0x4c2688*/
      Coord::To_Screen(MEMORY[0x887324], v76, v91); /*0x4c26a3*/
      v49 = v57 - ZCoordToScreenY(v79) - 2; /*0x4c26bd*/
      v50 = v64 - ZCoordToScreenY(v77) - 2; /*0x4c26cc*/
      v51 = *(unsigned int *)(MEMORY[0x87F6C4] + 4) == 1
          ? *(unsigned __int8 *)(*(unsigned int *)(MEMORY[0x87F6C4] + 372) + 15)
          : *(unsigned __int16 *)(*(unsigned int *)(MEMORY[0x87F6C4] + 372) + 30);
      (*(void (**)(int, int *, int *, int *, int, int, int, unsigned int))(*(unsigned int *)MEMORY[0x88731C] + 52))( /*0x4c270d*/
        MEMORY[0x88731C],
        &MEMORY[0x886FA0],
        &v69,
        v91,
        v51,
        v49,
        v50,
        0);
      result = --v62; /*0x4c2714*/
      if ( v62 < 0 ) /*0x4c2719*/
        break; /*0x4c2719*/
      v61 += 88; /*0x4c2730*/
      v63 += 88; /*0x4c273a*/
      v13 = *(v59 - 3); /*0x4c2749*/
      v52 = *(v59 - 2); /*0x4c274c*/
      v65 -= 88; /*0x4c274f*/
      qmemcpy(v73, v65, sizeof(v73)); /*0x4c2753*/
      v59 -= 22; /*0x4c2763*/
      qmemcpy(v75, v59, sizeof(v75)); /*0x4c2767*/
      v64 = v59[21]; /*0x4c276f*/
      v58 = v59[18]; /*0x4c2773*/
      v54 = v13; /*0x4c2777*/
      v57 = v52; /*0x4c277b*/
      result = v58; /*0x4c277f*/
    }
  }
  return result; /*0x4c2786*/

}
double ListClass::Destruct(...) { return 0; }

  char v2; // al
  int v3; // edx
  void *v4; // eax

  v2 = *((unsigned char *)this + 84); /*0x557606*/
  *this = &vt_ListClass; /*0x557609*/
  if ( v2 ) /*0x557611*/
  {
    v3 = *((unsigned int *)this + 70); /*0x55761c*/
    *((unsigned int *)this + 5) += *((unsigned int *)this + 75); /*0x557624*/
    *((unsigned char *)this + 84) = 0; /*0x55762d*/
    (*(void (**)(unsigned int *))(v3 + 36))((unsigned int *)this + 70); /*0x557630*/
    (*(void (**)(unsigned int *))(*((unsigned int *)this + 22) + 36))((unsigned int *)this + 22); /*0x557639*/
    (*(void (**)(unsigned int *))(*((unsigned int *)this + 46) + 36))((unsigned int *)this + 46); /*0x557648*/
    (*(void (**)(unsigned int *))(*(unsigned int *)this + 72))(this); /*0x55764f*/
  }
  SliderClass::Destructor((unsigned int *)this + 70); /*0x557658*/
  ShapeButtonClass::Destructor((int)((unsigned int *)this + 46)); /*0x557663*/
  ShapeButtonClass::Destructor((int)((unsigned int *)this + 22)); /*0x55766b*/
  v4 = (void *)*((unsigned int *)this + 14); /*0x557670*/
  *((unsigned int *)this + 13) = &vt_VectorClass_unsigned_short_const; /*0x557673*/
  if ( v4 && *((unsigned char *)this + 65) ) /*0x55767e*/
  {
    __3_YAXPAX_Z(v4); /*0x557684*/
    *((unsigned int *)this + 14) = 0; /*0x55768c*/
  }
  *((unsigned char *)this + 65) = 0; /*0x557691*/
  *((unsigned int *)this + 15) = 0; /*0x557694*/
  return GadgetClass::Dtor(this); /*0x55769c*/

}
double ListClass::ListClass_field_0x10(...) { return 0; }
double ListClass::__pad_0(...) { return 0; }
double Locomotor::GetSpeed(...) { return 0; }
// 0x5c9470
double MPCombatTeam::Constructor(...) { return 0; }

  wchar_t *StringCSF; // eax
  wchar_t *v4; // [esp+4h] [ebp-4h] BYREF

  StringCSF = GetStringCSF(aMpObserverteam, 0, aDRa2mdpostMpob, 5); /*0x5c9482*/
  WideString::Assign(&v4, (CampaignScore *)StringCSF); /*0x5c948c*/
  MultiplayerTeam::Constructor(this, (MPCooperative *)&v4, (wchar_t *)0xFFFFFFFF); /*0x5c949a*/
  DeleteAndZero::Alt((void **)&v4); /*0x5c94a3*/
  *this = (wchar_t *)&MultiplayerObserverTeam::`vftable'; /*0x5c94a8*/
  return (MultiplayerObserverTeam *)this; /*0x5c94b0*/

}
  wchar_t *StringCSF; // eax
  wchar_t *v4; // [esp+4h] [ebp-4h] BYREF

  StringCSF = GetStringCSF(aMpObserverteam, 0, aDRa2mdpostMpob, 5); /*0x5c9482*/
  WideString::Assign(&v4, (CampaignScore *)StringCSF); /*0x5c948c*/
  MultiplayerTeam::Constructor(this, (MPCooperative *)&v4, (wchar_t *)0xFFFFFFFF); /*0x5c949a*/
  DeleteAndZero::Alt((void **)&v4); /*0x5c94a3*/
  *this = (wchar_t *)&MultiplayerObserverTeam::`vftable'; /*0x5c94a8*/
  return (MultiplayerObserverTeam *)this; /*0x5c94b0*/

}
double MPCombatTeam::Constructor2(...) { return 0; }

  wchar_t *StringCSF; // eax
  wchar_t *v4; // [esp+4h] [ebp-4h] BYREF

  StringCSF = GetStringCSF(aMpAttackerteam, 0, aDRa2mdpostMpsi_0, 22); /*0x5caec2*/
  WideString::Assign(&v4, (CampaignScore *)StringCSF); /*0x5caecc*/
  MultiplayerTeam::Constructor(this, (MPCooperative *)&v4, (wchar_t *)1); /*0x5caeda*/
  DeleteAndZero::Alt((void **)&v4); /*0x5caee3*/
  *this = (wchar_t *)&vt_MultiplayerSiegeAttackerTeam; /*0x5caee8*/
  return (MultiplayerSiegeAttackerTeam *)this; /*0x5caef0*/

}
double MPCombatTeam::MPTeam(...) { return 0; }

  wchar_t *StringCSF; // eax
  wchar_t *v4; // [esp+4h] [ebp-4h] BYREF

  StringCSF = GetStringCSF(aMpDefenderteam, 0, aDRa2mdpostMpsi_0, 6); /*0x5cae22*/
  WideString::Assign(&v4, (CampaignScore *)StringCSF); /*0x5cae2c*/
  MultiplayerTeam::Constructor(this, (MPCooperative *)&v4, (wchar_t *)1); /*0x5cae3a*/
  DeleteAndZero::Alt((void **)&v4); /*0x5cae43*/
  *this = (wchar_t *)&vt_MultiplayerSiegeDefenderTeam; /*0x5cae48*/
  return (MultiplayerSiegeDefenderTeam *)this; /*0x5cae50*/

}
double MSAnim::GetField(...) { return 0; }

  int v2; // eax
  unsigned int result; // eax

  v2 = *(this + 7); /*0x5cb844*/
  *(this + 11) = a2; /*0x5cb847*/
  result = *(__int16 *)(v2 + 6); /*0x5cb84a*/
  if ( a2 >= result ) /*0x5cb850*/
    *(this + 11) = --result; /*0x5cb853*/
  return result; /*0x5cb856*/

}
double MSAnim::SetField(...) { return 0; }

  int v2; // eax
  unsigned int result; // eax

  v2 = *(this + 7); /*0x5cb864*/
  *(this + 12) = a2; /*0x5cb867*/
  result = *(__int16 *)(v2 + 6); /*0x5cb86a*/
  if ( a2 >= result ) /*0x5cb870*/
    *(this + 12) = --result; /*0x5cb873*/
  return result; /*0x5cb876*/

}
double MSShapeAnim::Constructor(...) { return 0; }

  int FileClassToBuffer; // eax

  *((unsigned int *)this + 2) = a4; /*0x5cb6db*/
  *((unsigned int *)this + 1) = aP2; /*0x5cb6e1*/
  *((unsigned char *)this + 12) = 1; /*0x5cb6e4*/
  *((unsigned int *)this + 4) = Timer::GetTicks(); /*0x5cb6f5*/
  *((unsigned int *)this + 6) = 0; /*0x5cb6fc*/
  *((unsigned int *)this + 8) = aP4; /*0x5cb703*/
  *((unsigned char *)this + 52) = (unsigned char)aP6; /*0x5cb70a*/
  *((unsigned int *)this + 14) = aP7; /*0x5cb711*/
  *((unsigned int *)this + 9) = a6; /*0x5cb717*/
  *((unsigned int *)this + 10) = 0; /*0x5cb71a*/
  *(unsigned int *)this = &vt_MSShapeAnim; /*0x5cb721*/
  *((unsigned char *)this + 60) = 0; /*0x5cb727*/
  FileClassToBuffer = LoadFileClassToBuffer((char **)aP1, (bool *)this + 60); /*0x5cb72a*/
  *((unsigned int *)this + 7) = FileClassToBuffer; /*0x5cb72f*/
  *((unsigned int *)this + 11) = 0; /*0x5cb732*/
  *((unsigned int *)this + 12) = *(__int16 *)(FileClassToBuffer + 6) - 1; /*0x5cb73e*/
  return this; /*0x5cb743*/

}
// 0x5ae5e0
double Matrix::Copy12Float(...) { return 0; }

  unsigned int *result; // eax
  unsigned int *v3; // edx
  int v4; // edi

  result = this; /*0x5ae5e5*/
  v3 = this; /*0x5ae5e8*/
  v4 = 12; /*0x5ae5ec*/
  do /*0x5ae5fa*/
  {
    *v3 = *(unsigned int *)((char *)v3 + a2 - (unsigned int)this); /*0x5ae5f4*/
    ++v3; /*0x5ae5f6*/
    --v4; /*0x5ae5f9*/
  }
  while ( v4 ); /*0x5ae5fa*/
  return result; /*0x5ae5fc*/

}
  unsigned int *result; // eax
  unsigned int *v3; // edx
  int v4; // edi

  result = this; /*0x5ae5e5*/
  v3 = this; /*0x5ae5e8*/
  v4 = 12; /*0x5ae5ec*/
  do /*0x5ae5fa*/
  {
    *v3 = *(unsigned int *)((char *)v3 + a2 - (unsigned int)this); /*0x5ae5f4*/
    ++v3; /*0x5ae5f6*/
    --v4; /*0x5ae5f9*/
  }
  while ( v4 ); /*0x5ae5fa*/
  return result; /*0x5ae5fc*/

}
double Matrix::Scale(...) { return 0; }

  unsigned int result; // eax
  unsigned int i; // esi
  unsigned int v4; // eax
  unsigned int j; // edx
  int v6; // eax
  int v7; // eax

  result = *(this + 2); /*0x5bd730*/
  for ( i = 0; i < result; ++i ) /*0x5bd738*/
  {
    v4 = *(this + 1); /*0x5bd73b*/
    for ( j = 0; j < v4; v4 = *(this + 1) ) /*0x5bd742*/
    {
      *(float *)(48 * (j + i * v4) + *(this + 3) + 12) = a2 * *(float *)(48 * (j + i * v4) + *(this + 3) + 12); /*0x5bd75e*/
      v6 = 48 * (j + *(this + 1) * i); /*0x5bd772*/
      *(float *)(v6 + *(this + 3) + 28) = a2 * *(float *)(v6 + *(this + 3) + 28); /*0x5bd77d*/
      v7 = 48 * (j + *(this + 1) * i); /*0x5bd791*/
      ++j; /*0x5bd794*/
      *(float *)(v7 + *(this + 3) + 44) = a2 * *(float *)(v7 + *(this + 3) + 44); /*0x5bd79d*/
    }
    result = *(this + 2); /*0x5bd7a6*/
  }
  return result; /*0x5bd7af*/

}
double Matrix2D::Rotate(...) { return 0; }

  double v2; // kr00_8
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st6
  double v8; // st5
  double v9; // st6
  double v10; // st5
  float aP1a; // [esp+Ch] [ebp+4h]

  v2 = *(float *)&aP1; /*0x5af1b2*/
  aP1a = Math::ArcTan2((IUnknown *)COERCE_UNSIGNED_INT64(*(float *)&aP1)); /*0x5af1bf*/
  v4 = Math::SinCos((IUnknown *)LODWORD(v2)); /*0x5af1c5*/
  v5 = *this; /*0x5af1ca*/
  v6 = *(this + 1); /*0x5af1cc*/
  *this = v6 * v4 + v5 * aP1a; /*0x5af1df*/
  *(this + 1) = v6 * aP1a - v5 * v4; /*0x5af1eb*/
  v7 = *(this + 4); /*0x5af1ee*/
  v8 = *(this + 5); /*0x5af1f1*/
  *(this + 4) = v8 * v4 + v7 * aP1a; /*0x5af200*/
  *(this + 5) = v8 * aP1a - v7 * v4; /*0x5af20d*/
  v9 = *(this + 8); /*0x5af210*/
  v10 = *(this + 9); /*0x5af213*/
  *(this + 8) = v10 * v4 + v9 * aP1a; /*0x5af222*/
  *(this + 9) = v10 * aP1a - v9 * v4; /*0x5af22f*/

}
double Matrix3x3::Multiply(...) { return 0; }

  float *result; // eax
  double v3; // st7
  double v4; // st7
  double v5; // st6
  double v6; // st7
  double v7; // st6
  float v8; // [esp+0h] [ebp-4h]
  float v9; // [esp+0h] [ebp-4h]
  float v10; // [esp+8h] [ebp+4h]
  float v11; // [esp+8h] [ebp+4h]

  result = a2; /*0x5ae8f1*/
  v3 = *a2; /*0x5ae8f5*/
  v10 = v3 * *this + *(this + 3); /*0x5ae8fe*/
  *(this + 3) = v10; /*0x5ae902*/
  v8 = v3 * *(this + 4) + *(this + 7); /*0x5ae90d*/
  *(this + 7) = v8; /*0x5ae911*/
  v4 = v3 * *(this + 8) + *(this + 11); /*0x5ae917*/
  *(this + 11) = v4; /*0x5ae91a*/
  v5 = result[1]; /*0x5ae91d*/
  v11 = v5 * *(this + 1) + v10; /*0x5ae929*/
  *(this + 3) = v11; /*0x5ae92d*/
  v9 = v5 * *(this + 5) + v8; /*0x5ae939*/
  *(this + 7) = v9; /*0x5ae93d*/
  v6 = v4 + v5 * *(this + 9); /*0x5ae943*/
  *(this + 11) = v6; /*0x5ae945*/
  v7 = result[2]; /*0x5ae948*/
  *(this + 3) = v7 * *(this + 2) + v11; /*0x5ae954*/
  *(this + 7) = v7 * *(this + 6) + v9; /*0x5ae960*/
  *(this + 11) = v7 * *(this + 10) + v6; /*0x5ae968*/
  return result; /*0x5ae96e*/

}
double Matrix3x3::TransformPoint(...) { return 0; }

  double v3; // st7
  double v4; // st6
  int varC; // [esp+0h] [ebp-Ch]
  IUnknown *v6; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  *(float *)&varC = *(this + 1) * a2[1] + *(this + 2) * a2[2] + *a2 * *this; /*0x5af4eb*/
  *(float *)&v6 = *(this + 5) * a2[1] + *(this + 4) * *a2 + *(this + 6) * a2[2]; /*0x5af508*/
  v3 = *(this + 9) * a2[1] + *(this + 8) * *a2; /*0x5af517*/
  v4 = *(this + 10) * a2[2]; /*0x5af51c*/
  aP1->field_0 = varC; /*0x5af527*/
  *(float *)&v8 = v3 + v4; /*0x5af52d*/
  aP1->field_4 = (int)v6; /*0x5af531*/
  aP1->field_8 = v8; /*0x5af538*/
  return (float *)&aP1->field_0; /*0x5af53b*/

}
double MessageListClass::AddMessage(...) { return 0; }

  AbstractClass *Instance; // edi
  ObjectClass *v11; // ebx
  int v12; // ebp
  signed int v13; // eax
  signed int v14; // edi
  int v15; // eax
  int v16; // eax
  int i; // edi
  unsigned int *v18; // edi
  unsigned short *v19; // eax
  unsigned int *v20; // ecx
  int v21; // edx
  TextLabelClass *v22; // eax
  IUnknown *ecx26; // ecx
  TextLabelClass *v23; // ebx
  int v25; // edi
  int v26; // eax
  unsigned short *j; // ecx
  unsigned int *v28; // ebp
  int v29; // edi
  int *v30; // eax
  int v31; // edx
  char *v32; // eax
  unsigned __int16 k; // cx
  signed int v34; // [esp+10h] [ebp-14Ch]
  signed int v35; // [esp+14h] [ebp-148h]
  wchar_t String[162]; // [esp+18h] [ebp-144h] BYREF

  Instance = TextRenderer::GetInstance(); /*0x5d3bb8*/
  if ( !aP3 ) /*0x5d3bc3*/
    return 0; /*0x5d3bd1*/
  if ( !Instance ) /*0x5d3bd6*/
    return 0; /*0x5d3be4*/
  String[0] = 0; /*0x5d3bee*/
  if ( aP1 ) /*0x5d3bf7*/
  {
    wcscpy(String, (const wchar_t *)aP1); /*0x5d3bff*/
    wcscat(String, (const wchar_t *)&stru_830620.__pad_68[28]); /*0x5d3c0e*/
  }
  v11 = (ObjectClass *)wcslen(String); /*0x5d3c23*/
  v12 = Text::MeasureWidth((int)String, 0); /*0x5d3c3a*/
  v34 = wcslen((const wchar_t *)aP3); /*0x5d3c42*/
  if ( *(this + 177) - v12 - 8 <= 0 ) /*0x5d3c56*/
    return 0; /*0x5d3c64*/
  v13 = MessageListClass::CountCharsInWidth(Instance, aP3, *(this + 177) - v12 - 8, 111, 1); /*0x5d3c76*/
  v14 = v13; /*0x5d3c7b*/
  v35 = v13; /*0x5d3c7f*/
  if ( v13 < 0 ) /*0x5d3c83*/
    return 0; /*0x5d3c91*/
  wcsncat(String, (const wchar_t *)aP3, v13); /*0x5d3c9b*/
  v15 = *(this + 3); /*0x5d3ca0*/
  String[(unsigned int)v11 + v14] = 0; /*0x5d3caa*/
  if ( v15 > 0 ) /*0x5d3cb1*/
  {
    v16 = *this; /*0x5d3cb3*/
    for ( i = 0; v16; v16 = (*(int (**)(int))(*(unsigned int *)v16 + 4))(v16) ) /*0x5d3cb3*/
      ++i; /*0x5d3cbf*/
    if ( *((unsigned char *)this + 25) && *((unsigned char *)this + 26) ) /*0x5d3cce*/
      ++i; /*0x5d3cd5*/
    if ( i + 1 > *(this + 3) ) /*0x5d3cdc*/
    {
      v18 = (unsigned int *)*this; /*0x5d3cde*/
      if ( !*this ) /*0x5d3cde*/
        return 0; /*0x5d3cf0*/
      *this = (*(int (**)(unsigned int))(*v18 + 36))(*this); /*0x5d3cfa*/
      v19 = this + 1312; /*0x5d3cfc*/
      v20 = this + 178; /*0x5d3d02*/
      v21 = 14; /*0x5d3d08*/
      do /*0x5d3d21*/
      {
        if ( (unsigned int *)v18[12] == v20 ) /*0x5d3d10*/
          *v19 = 1; /*0x5d3d12*/
        ++v19; /*0x5d3d17*/
        v20 += 81; /*0x5d3d1a*/
        --v21; /*0x5d3d20*/
      }
      while ( v21 ); /*0x5d3d21*/
      (*(void (**)(unsigned int *, int))*v18)(v18, 1); /*0x5d3d29*/
    }
  }
  v22 = (TextLabelClass *)__2_YAPAXI_Z(0x4Cu); /*0x5d3d2d*/
  if ( v22 ) /*0x5d3d37*/
  {
    ecx26 = aP5; /*0x5d3d39*/
    BYTE1(ecx26) = BYTE1(aP5) | 0x80; /*0x5d3d47*/
    v23 = (TextLabelClass *)MessageListClass::clearMessages(v22, (int)String, *(this + 1), *(this + 2), a5, (int)ecx26); /*0x5d3d60*/
  }
  else
  {
    v23 = 0; /*0x5d3d64*/
  }
  if ( MEMORY[0xA8B238] == (CellStruct *)4 ) /*0x5d3d6e*/
  {
    if ( !a8 && MEMORY[0xA8D1F9] ) /*0x5d3d82*/
    {
      v23->__pad_40[1] = 1; /*0x5d3d89*/
      goto LABEL_38; /*0x5d3d8c*/
    }
    goto LABEL_32; /*0x5d3d82*/
  }
  if ( MEMORY[0xA8B238] == (CellStruct *)3 ) /*0x5d3d9f*/
  {
    if ( a8 || !MEMORY[0xA8D1F8] ) /*0x5d3dac*/
    {
LABEL_32:
      v23->__pad_40[1] = 0; /*0x5d3d8e*/
      goto LABEL_38; /*0x5d3d93*/
    }
    v23->__pad_40[1] = 1; /*0x5d3db3*/
  }
  else
  {
    v23->__pad_40[1] = a8 == 0; /*0x5d3dbd*/
  }
LABEL_38:
  if ( a7 == -1 ) /*0x5d3dca*/
  {
    v23->field_24 = 0; /*0x5d3dcc*/
  }
  else
  {
    v25 = *(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9460]; /*0x5d3dda*/
    if ( *(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9452] != -1 ) /*0x5d3de3*/
      v25 += Timer::GetTicks() - *(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9452]; /*0x5d3df5*/
    v23->field_24 = a7 + v25; /*0x5d3df9*/
  }
  v23->field_28 = (int)aP2; /*0x5d3e03*/
  *(unsigned int *)&v23->__pad_2C[12] = *(this + 177); /*0x5d3e0c*/
  v26 = 0; /*0x5d3e0f*/
  for ( j = this + 1312; !*j; ++j ) /*0x5d3e11*/
  {
    if ( ++v26 >= 14 ) /*0x5d3e24*/
    {
      if ( v23 ) /*0x5d3e28*/
        (**(void (***)(TextLabelClass *, int))v23->__pad_0)(v23, 1); /*0x5d3e30*/
      return 0; /*0x5d3e3e*/
    }
  }
  *((unsigned short *)this + v26 + 2624) = 0; /*0x5d3e41*/
  v28 = this + 81 * v26 + 178; /*0x5d3e58*/
  memset(v28, 0, 0xA0u); /*0x5d3e61*/
  *((unsigned short *)this + 162 * v26 + 436) = 0; /*0x5d3e63*/
  wcscpy((wchar_t *)v28, String); /*0x5d3e6b*/
  *(unsigned int *)&v23->__pad_2C[4] = v28; /*0x5d3e7c*/
  if ( !a8 ) /*0x5d3e7f*/
    PlayVocClass(*(unsigned int *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1708), 0x2000, 1.0, 0); /*0x5d3e98*/
  if ( *this ) /*0x5d3e9d*/
    (*(void (**)(TextLabelClass *, unsigned int))(*(unsigned int *)v23->__pad_0 + 16))(v23, *this); /*0x5d3ea8*/
  else
    *this = v23; /*0x5d3ead*/
  if ( *((unsigned char *)this + 25) && *((unsigned char *)this + 26) ) /*0x5d3eb6*/
    v29 = *(this + 2) + *(this + 5); /*0x5d3ec3*/
  else
    v29 = *(this + 2); /*0x5d3ec7*/
  v30 = (int *)*this; /*0x5d3eca*/
  if ( *this ) /*0x5d3eca*/
  {
    do /*0x5d3edf*/
    {
      v31 = *v30; /*0x5d3ed0*/
      v30[4] = v29; /*0x5d3ed4*/
      v30 = (int *)(*(int (**)(int *))(v31 + 4))(v30); /*0x5d3ed7*/
      v29 += *(this + 5); /*0x5d3eda*/
    }
    while ( v30 ); /*0x5d3edf*/
  }
  if ( v35 < v34 ) /*0x5d3eeb*/
  {
    v32 = (char *)aP3 + 2 * v35; /*0x5d3ef4*/
    for ( k = *(unsigned short *)v32; k; v32 += 2 ) /*0x5d3ef7*/
    {
      if ( k >= 0x20u ) /*0x5d3f03*/
        break; /*0x5d3f03*/
      k = *((unsigned short *)v32 + 1); /*0x5d3f05*/
    }
    if ( *(unsigned short *)v32 ) /*0x5d3f11*/
      MessageListClass::AddMessage(this, aP1, aP2, (CellStruct *)v32, a5, aP5, a7, 1); /*0x5d3f44*/
  }
  return (int)v23->__pad_0; /*0x5d3bc5*/

}
double MessageListClass::clearMessages(...) { return 0; }

  GadgetClass::Construct(this, (GadgetClass *)aP1, (GadgetClass *)aP3, (GadgetClass *)1, (ControlClass *)1, 0, 0); /*0x72a458*/
  *(unsigned int *)&this->__pad_2C[4] = a2; /*0x72a469*/
  this->field_24 = 0; /*0x72a46c*/
  this->field_28 = 0; /*0x72a46f*/
  *(unsigned int *)this->__pad_2C = aP5; /*0x72a472*/
  *(unsigned int *)&this->__pad_2C[8] = a5; /*0x72a475*/
  *(unsigned int *)&this->__pad_2C[12] = -1; /*0x72a478*/
  this->field_3C = 0; /*0x72a47f*/
  this->__pad_40[0] = 0; /*0x72a482*/
  this->__pad_40[1] = 0; /*0x72a485*/
  this->field_44 = 0; /*0x72a488*/
  this->field_48 = 0; /*0x72a48b*/
  *(unsigned int *)this->__pad_0 = &TextLabelClass::`vftable'; /*0x72a48e*/
  return (int)this->__pad_0; /*0x72a496*/

}
double Miles::DriverGet(...) { return 0; }

  return (BSurface *)&stru_B1D188.__pad_579C[45060]; /*0x753c75*/

}
double ModemGame::AdvanceTauntCommand(...) { return 0; }

  HWND result; // eax
  HWND v3; // ebx
  WPARAM v4; // esi
  int v5; // eax

  result = GetDlgItem(*(HWND *)this, 1029); /*0x5b59be*/
  v3 = result; /*0x5b59c4*/
  if ( result ) /*0x5b59c8*/
  {
    result = (HWND)SendMessageA(result, 0x147u, 0, 0); /*0x5b59da*/
    v4 = (WPARAM)result; /*0x5b59dc*/
    if ( result != HWND_MESSAGE|0x2 ) /*0x5b59e1*/
    {
      v5 = *((unsigned int *)this + 18); /*0x5b59e3*/
      if ( v4 == v5 ) /*0x5b59e8*/
      {
        v4 = v5 + 1; /*0x5b59ea*/
        if ( v5 + 1 > 7 ) /*0x5b59f0*/
          v4 = 0; /*0x5b59f2*/
        SendMessageA(v3, 0x14Eu, v4, 0); /*0x5b59fd*/
      }
      MEMORY[0xA8B394] = v4; /*0x5b5a01*/
      *((unsigned char *)this + 9) = 1; /*0x5b5a09*/
      *((unsigned char *)this + 8) = 1; /*0x5b5a0c*/
      if ( v4 >= 8 ) /*0x5b5a0f*/
        return (HWND)SendMessageA(v3, 0x498u, 0, (LPARAM)Math::InitDegToRad); /*0x5b5a3c*/
      else
        return (HWND)SendMessageA(v3, 0x498u, 0, MEMORY[0x8316A8][v4]); /*0x5b5a26*/
    }
  }
  return result; /*0x5b5a28*/

}
double MovieContext::Cleanup(...) { return 0; }

  int v2; // ecx
  void *v3; // edi
  void *v4; // edi

  if ( this ) /*0x5bff05*/
  {
    v2 = (int)*this; /*0x5bff07*/
    if ( v2 ) /*0x5bff0c*/
    {
      DSurface::FlipIfNeeded(v2); /*0x5bff0e*/
      v3 = *this; /*0x5bff13*/
      if ( *this ) /*0x5bff13*/
      {
        CCFileClass::Cleanup(*this); /*0x5bff1b*/
        __3_YAXPAX_Z(v3); /*0x5bff21*/
      }
      *this = 0; /*0x5bff29*/
    }
    v4 = *((unsigned int *)this + 18); /*0x5bff2f*/
    if ( v4 ) /*0x5bff34*/
    {
      BinkMovie::FreeSurfaceTracker(*((unsigned int *)this + 18)); /*0x5bff38*/
      __3_YAXPAX_Z(v4); /*0x5bff3e*/
      *((unsigned int *)this + 18) = 0; /*0x5bff46*/
    }
    *((unsigned char *)this + 69) = 0; /*0x5bff4d*/
  }

}
// 0x64dea0
double Multiplay::LogToSYNC_NOMPDEBUG(...) { return 0; }

  FILE *v1; // eax
  MouseClass *v2; // esi
  char *ModuleVersion; // eax
  char *ModuleInternalVersion; // eax
  CellStruct *v5; // eax
  char *Name; // eax
  unsigned int v7; // eax
  int i; // edi
  unsigned int *v9; // eax
  char *v10; // edi
  CellStruct *v11; // ebp
  int *v12; // edi
  IUnknown *v14; // eax
  int j; // ebp
  int v15; // edi
  char *v16; // eax
  char *v17; // ecx
  int v18; // ebp
  int v19; // eax
  unsigned int *v20; // edi
  int v21; // ebp
  unsigned int *Value; // eax
  int *v23; // ebp
  CellStruct **v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // edx
  void *v28; // eax
  int *v29; // ebp
  ParticleSystemClass *v30; // edx
  int v31; // eax
  char *v32; // edx
  int v33; // eax
  void *v34; // eax
  unsigned int *v35; // eax
  int v36; // ebx
  int v37; // ebp
  int v38; // eax
  int v39; // eax
  CellStruct **v40; // eax
  char *v41; // ecx
  int v42; // ebp
  int v43; // eax
  unsigned int *v44; // edi
  int v45; // ebp
  int *v46; // ebp
  ParticleSystemClass **v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // edx
  void *v51; // eax
  int *v52; // ebp
  CellStruct *v54; // edx
  int eax35; // eax
  void *v55; // eax
  int v56; // ebp
  int v57; // ebx
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  CellStruct **v63; // eax
  char *v64; // ecx
  int v65; // ebp
  int v66; // eax
  unsigned int *v67; // edi
  int v68; // ebp
  int v69; // ecx
  int *v70; // ebp
  CellStruct **v71; // eax
  int v72; // edx
  void *v73; // eax
  int v74; // ebp
  int v75; // eax
  int v76; // eax
  CellStruct **v77; // eax
  char *v78; // ecx
  int v79; // ebp
  int v80; // eax
  unsigned int *v81; // edi
  int v82; // ebp
  int v83; // ecx
  int *v84; // ebp
  CellStruct **v85; // eax
  int v86; // edx
  void *v87; // eax
  int v88; // ebp
  int v89; // eax
  int v90; // eax
  CellStruct **v91; // eax
  char *v92; // ebp
  unsigned int *v93; // edi
  int v94; // ebx
  int v95; // edx
  int v96; // eax
  int v97; // ebx
  int v98; // eax
  int v99; // eax
  void *v100; // eax
  char *v101; // eax
  void *v102; // eax
  char *v103; // eax
  int v104; // eax
  IUnknown *v105; // ecx
  char *v106; // eax
  unsigned int *v107; // edi
  CellStruct *v109; // ebx
  int edx78; // edx
  int v110; // eax
  int v111; // ebx
  int v112; // eax
  int v113; // ebx
  int v114; // eax
  int v115; // ebx
  int v116; // eax
  int v117; // ebx
  int v118; // eax
  int v119; // ebx
  int v120; // eax
  int v121; // ebx
  int v122; // eax
  int v123; // ebx
  int v124; // eax
  int v125; // ebx
  int v126; // eax
  int v127; // ebx
  int v128; // eax
  int v129; // eax
  IUnknown *v130; // ecx
  unsigned __int8 *v131; // edi
  unsigned int *v132; // eax
  void *v133; // ebp
  CellStruct *mm; // edi
  unsigned int *v135; // eax
  void *v136; // ebp
  CellStruct *nn; // edi
  unsigned int *v138; // eax
  void *v139; // ebp
  CellStruct *i1; // edi
  unsigned int *v141; // eax
  void *v142; // ebp
  CellStruct *i2; // edi
  unsigned int *v144; // eax
  void *v145; // ebp
  CellStruct *i3; // edi
  unsigned int *v147; // eax
  void *v148; // ebp
  CellStruct *i4; // edi
  unsigned int *v150; // eax
  void *v151; // ebp
  CellStruct *i5; // edi
  unsigned int *v153; // eax
  void *v154; // ebp
  CellStruct *i6; // edi
  unsigned int *v156; // eax
  void *v157; // ebp
  CellStruct *i7; // edi
  unsigned int *v159; // eax
  void *v160; // ebp
  CellStruct *i8; // edi
  unsigned int *v162; // eax
  void *v163; // ebp
  CellStruct *i9; // ebx
  unsigned int *v165; // edi
  unsigned int *v166; // eax
  void *v167; // ebp
  CellStruct *i10; // edi
  unsigned int *v169; // eax
  void *v170; // ebp
  CellStruct *i11; // edi
  unsigned int *v172; // eax
  void *v173; // ebp
  CellStruct *i12; // edi
  unsigned int *v175; // eax
  void *v176; // ebp
  CellStruct *i13; // edi
  unsigned int *v178; // eax
  void *v179; // ebp
  CellStruct *i14; // edi
  unsigned int *v181; // eax
  void *v182; // ebp
  CellStruct *i15; // edi
  unsigned int *v184; // eax
  void *v185; // ebp
  CellStruct *i16; // edi
  unsigned int *v187; // eax
  void *v188; // ebp
  CellStruct *i17; // edi
  unsigned int *v190; // eax
  void *v191; // ebp
  CellStruct *i18; // edi
  unsigned int *v193; // eax
  void *v194; // ebp
  CellStruct *i19; // edi
  unsigned int *v196; // eax
  void *v197; // ebp
  CellStruct *i20; // edi
  unsigned int *v199; // eax
  void *v200; // ebp
  CellStruct *i21; // edi
  unsigned int *v202; // eax
  void *v203; // ebp
  CellStruct *i22; // edi
  unsigned int *v205; // eax
  void *v206; // ebp
  CellStruct *i23; // edi
  unsigned int *v208; // eax
  void *v209; // ebp
  CellStruct *i24; // edi
  unsigned int *v211; // eax
  void *v212; // ebp
  CellStruct *i25; // edi
  unsigned int *v214; // eax
  void *v215; // ebp
  CellStruct *i26; // edi
  unsigned int *v217; // eax
  void *v218; // ebp
  CellStruct *i27; // edi
  unsigned int *v220; // eax
  void *v221; // ebp
  CellStruct *i28; // edi
  unsigned int *v223; // eax
  void *v224; // ebp
  CellStruct *i29; // edi
  unsigned int *v226; // eax
  void *v227; // ebp
  CellStruct *i30; // edi
  unsigned int *v229; // eax
  void *v230; // ebp
  CellStruct *i31; // edi
  unsigned int *v232; // eax
  void *v233; // ebp
  CellStruct *i32; // edi
  unsigned int *v235; // eax
  void *v236; // ebp
  CellStruct *i33; // edi
  unsigned int *v238; // eax
  void *v239; // ebp
  CellStruct *i34; // edi
  unsigned int *v241; // eax
  void *v242; // ebp
  CellStruct *i35; // edi
  unsigned int *v244; // eax
  void *v245; // ebp
  CellStruct *i36; // edi
  unsigned int *v247; // eax
  void *v248; // ebp
  CellStruct *i37; // edi
  unsigned int *v250; // eax
  void *v251; // ebp
  CellStruct *i38; // edi
  unsigned int *v253; // eax
  void *v254; // ebp
  CellStruct *i39; // edi
  unsigned int *v256; // eax
  void *v257; // ebp
  CellStruct *i40; // edi
  unsigned int *v259; // eax
  void *v260; // ebp
  CellStruct *i41; // edi
  CellStruct *v262; // [esp+48h] [ebp-450h]
  CellStruct *v263; // [esp+48h] [ebp-450h]
  CellStruct *v264; // [esp+48h] [ebp-450h]
  CellStruct *v265; // [esp+48h] [ebp-450h]
  CellStruct *v266; // [esp+48h] [ebp-450h]
  CellStruct *v267; // [esp+48h] [ebp-450h]
  CellStruct *v268; // [esp+48h] [ebp-450h]
  CellStruct *v269; // [esp+48h] [ebp-450h]
  CellStruct *v270; // [esp+48h] [ebp-450h]
  CellStruct *v271; // [esp+48h] [ebp-450h]
  CellStruct *v272; // [esp+48h] [ebp-450h]
  CellStruct *v273; // [esp+48h] [ebp-450h]
  CellStruct *v274; // [esp+48h] [ebp-450h]
  CellStruct *v275; // [esp+48h] [ebp-450h]
  CellStruct *v276; // [esp+48h] [ebp-450h]
  CellStruct *v277; // [esp+48h] [ebp-450h]
  CellStruct *v278; // [esp+48h] [ebp-450h]
  CellStruct *v279; // [esp+48h] [ebp-450h]
  CellStruct *v280; // [esp+48h] [ebp-450h]
  CellStruct *v281; // [esp+48h] [ebp-450h]
  CellStruct *v282; // [esp+48h] [ebp-450h]
  CellStruct *v283; // [esp+48h] [ebp-450h]
  CellStruct *v284; // [esp+48h] [ebp-450h]
  CellStruct *v285; // [esp+48h] [ebp-450h]
  CellStruct *v286; // [esp+48h] [ebp-450h]
  CellStruct *v287; // [esp+48h] [ebp-450h]
  CellStruct *v288; // [esp+48h] [ebp-450h]
  CellStruct *v289; // [esp+48h] [ebp-450h]
  CellStruct *v290; // [esp+48h] [ebp-450h]
  CellStruct *v291; // [esp+48h] [ebp-450h]
  CellStruct *v292; // [esp+48h] [ebp-450h]
  CellStruct *v293; // [esp+48h] [ebp-450h]
  CellStruct *v294; // [esp+48h] [ebp-450h]
  CellStruct *v295; // [esp+48h] [ebp-450h]
  CellStruct *v296; // [esp+48h] [ebp-450h]
  CellStruct *v297; // [esp+48h] [ebp-450h]
  CellStruct *v298; // [esp+48h] [ebp-450h]
  CellStruct *v299; // [esp+48h] [ebp-450h]
  CellStruct *v300; // [esp+48h] [ebp-450h]
  CellStruct *v301; // [esp+48h] [ebp-450h]
  CellStruct *v302; // [esp+48h] [ebp-450h]
  CellStruct *v303; // [esp+48h] [ebp-450h]
  CellStruct *v304; // [esp+48h] [ebp-450h]
  IUnknown *v305; // [esp+4Ch] [ebp-44Ch]
  CellStruct *v306; // [esp+50h] [ebp-448h]
  CellStruct *v307; // [esp+50h] [ebp-448h]
  CellStruct *v308; // [esp+50h] [ebp-448h]
  CellStruct *v309; // [esp+50h] [ebp-448h]
  CellStruct *v310; // [esp+50h] [ebp-448h]
  CellStruct *v311; // [esp+50h] [ebp-448h]
  CellStruct *v312; // [esp+50h] [ebp-448h]
  CellStruct *v313; // [esp+50h] [ebp-448h]
  CellStruct *v314; // [esp+50h] [ebp-448h]
  CellStruct *v315; // [esp+50h] [ebp-448h]
  CellStruct *v316; // [esp+50h] [ebp-448h]
  CellStruct *v317; // [esp+50h] [ebp-448h]
  CellStruct *v318; // [esp+50h] [ebp-448h]
  CellStruct *v319; // [esp+50h] [ebp-448h]
  CellStruct *v320; // [esp+50h] [ebp-448h]
  CellStruct *v321; // [esp+50h] [ebp-448h]
  CellStruct *v322; // [esp+50h] [ebp-448h]
  CellStruct *v323; // [esp+50h] [ebp-448h]
  CellStruct *v324; // [esp+50h] [ebp-448h]
  CellStruct *v325; // [esp+50h] [ebp-448h]
  CellStruct *v326; // [esp+50h] [ebp-448h]
  CellStruct *v327; // [esp+50h] [ebp-448h]
  CellStruct *v328; // [esp+50h] [ebp-448h]
  CellStruct *v329; // [esp+50h] [ebp-448h]
  CellStruct *v330; // [esp+50h] [ebp-448h]
  CellStruct *v331; // [esp+50h] [ebp-448h]
  CellStruct *v332; // [esp+50h] [ebp-448h]
  CellStruct *v333; // [esp+50h] [ebp-448h]
  CellStruct *v334; // [esp+50h] [ebp-448h]
  CellStruct *v335; // [esp+50h] [ebp-448h]
  CellStruct *v336; // [esp+50h] [ebp-448h]
  CellStruct *v337; // [esp+50h] [ebp-448h]
  CellStruct *v338; // [esp+50h] [ebp-448h]
  CellStruct *v339; // [esp+50h] [ebp-448h]
  CellStruct *v340; // [esp+50h] [ebp-448h]
  CellStruct *v341; // [esp+50h] [ebp-448h]
  CellStruct *v342; // [esp+50h] [ebp-448h]
  CellStruct *v343; // [esp+50h] [ebp-448h]
  CellStruct *v344; // [esp+50h] [ebp-448h]
  CellStruct *_50bm; // [esp+50h] [ebp-448h]
  CellStruct *_50bn; // [esp+50h] [ebp-448h]
  CellStruct *v347; // [esp+50h] [ebp-448h]
  CellStruct *v348; // [esp+50h] [ebp-448h]
  CellStruct *v349; // [esp+50h] [ebp-448h]
  CellStruct *v350; // [esp+50h] [ebp-448h]
  CellStruct *v351; // [esp+50h] [ebp-448h]
  CellStruct *v352; // [esp+50h] [ebp-448h]
  CellStruct *v353; // [esp+50h] [ebp-448h]
  CellStruct *v354; // [esp+50h] [ebp-448h]
  CellStruct *v355; // [esp+50h] [ebp-448h]
  CellStruct *v356; // [esp+50h] [ebp-448h]
  CellStruct *v357; // [esp+50h] [ebp-448h]
  CellStruct *v358; // [esp+54h] [ebp-444h]
  CellStruct *v359; // [esp+58h] [ebp-440h]
  CellStruct *v360; // [esp+58h] [ebp-440h]
  CellStruct *v361; // [esp+58h] [ebp-440h]
  CellStruct *v362; // [esp+58h] [ebp-440h]
  CellStruct *v363; // [esp+58h] [ebp-440h]
  CellStruct *v364; // [esp+58h] [ebp-440h]
  CellStruct *v365; // [esp+58h] [ebp-440h]
  CellStruct *v366; // [esp+58h] [ebp-440h]
  CellStruct *v367; // [esp+58h] [ebp-440h]
  CellStruct *v368; // [esp+58h] [ebp-440h]
  CellStruct *v369; // [esp+58h] [ebp-440h]
  CellStruct *v370; // [esp+58h] [ebp-440h]
  CellStruct *v371; // [esp+58h] [ebp-440h]
  CellStruct *v372; // [esp+58h] [ebp-440h]
  CellStruct *v373; // [esp+58h] [ebp-440h]
  CellStruct *v374; // [esp+58h] [ebp-440h]
  CellStruct *v375; // [esp+58h] [ebp-440h]
  CellStruct *v376; // [esp+58h] [ebp-440h]
  CellStruct *v377; // [esp+58h] [ebp-440h]
  CellStruct *v378; // [esp+58h] [ebp-440h]
  CellStruct *v379; // [esp+58h] [ebp-440h]
  CellStruct *v380; // [esp+58h] [ebp-440h]
  CellStruct *v381; // [esp+58h] [ebp-440h]
  CellStruct *v382; // [esp+58h] [ebp-440h]
  CellStruct *v383; // [esp+58h] [ebp-440h]
  CellStruct *v384; // [esp+58h] [ebp-440h]
  CellStruct *v385; // [esp+58h] [ebp-440h]
  CellStruct *v386; // [esp+58h] [ebp-440h]
  CellStruct *v387; // [esp+58h] [ebp-440h]
  CellStruct *v388; // [esp+58h] [ebp-440h]
  CellStruct *v389; // [esp+58h] [ebp-440h]
  CellStruct *v390; // [esp+58h] [ebp-440h]
  CellStruct *v391; // [esp+58h] [ebp-440h]
  CellStruct *v392; // [esp+58h] [ebp-440h]
  CellStruct *v393; // [esp+58h] [ebp-440h]
  CellStruct *v394; // [esp+58h] [ebp-440h]
  CellStruct *v395; // [esp+58h] [ebp-440h]
  CellStruct *v396; // [esp+58h] [ebp-440h]
  CellStruct *v397; // [esp+58h] [ebp-440h]
  CellStruct *v398; // [esp+58h] [ebp-440h]
  CellStruct *v399; // [esp+58h] [ebp-440h]
  CellStruct *v400; // [esp+58h] [ebp-440h]
  CellStruct *v401; // [esp+58h] [ebp-440h]
  CellStruct *v402; // [esp+58h] [ebp-440h]
  CellStruct *v403; // [esp+58h] [ebp-440h]
  CellStruct *aP2; // [esp+68h] [ebp-430h]
  CellStruct *aP2a; // [esp+68h] [ebp-430h]
  CellStruct *aP2b; // [esp+68h] [ebp-430h]
  CellStruct *aP2c; // [esp+68h] [ebp-430h]
  CellStruct *aP2d; // [esp+68h] [ebp-430h]
  CellStruct *aP2e; // [esp+68h] [ebp-430h]
  CellStruct *v410; // [esp+6Ch] [ebp-42Ch]
  CellStruct *v411; // [esp+6Ch] [ebp-42Ch]
  CellStruct *v412; // [esp+6Ch] [ebp-42Ch]
  CellStruct *v413; // [esp+6Ch] [ebp-42Ch]
  CellStruct *k; // [esp+6Ch] [ebp-42Ch]
  char v415; // [esp+77h] [ebp-421h] BYREF
  char *v416; // [esp+78h] [ebp-420h]
  CellStruct *v417; // [esp+7Ch] [ebp-41Ch]
  char *v418; // [esp+80h] [ebp-418h]
  int v419; // [esp+84h] [ebp-414h] BYREF
  IUnknown *TextBufferEntry; // [esp+88h] [ebp-410h]
  int v421; // [esp+8Ch] [ebp-40Ch]
  int v422; // [esp+90h] [ebp-408h]
  int v423; // [esp+94h] [ebp-404h]
  int v424; // [esp+98h] [ebp-400h]
  char *v425; // [esp+9Ch] [ebp-3FCh]
  ParticleSystemClass *v345; // [esp+A0h] [ebp-3F8h]
  ParticleSystemClass *v346; // [esp+A4h] [ebp-3F4h] BYREF
  int v428; // [esp+A8h] [ebp-3F0h] BYREF
  unsigned int v429[3]; // [esp+ACh] [ebp-3ECh] BYREF
  int v430; // [esp+B8h] [ebp-3E0h]
  int v431; // [esp+BCh] [ebp-3DCh]
  int v432; // [esp+C0h] [ebp-3D8h] BYREF
  unsigned __int8 *v433; // [esp+C4h] [ebp-3D4h]
  char v434[4]; // [esp+C8h] [ebp-3D0h] BYREF
  char v435[4]; // [esp+CCh] [ebp-3CCh] BYREF
  int v436; // [esp+D0h] [ebp-3C8h]
  char v437[4]; // [esp+D4h] [ebp-3C4h] BYREF
  char v438[8]; // [esp+D8h] [ebp-3C0h] BYREF
  char v439[4]; // [esp+E0h] [ebp-3B8h] BYREF
  char v440[8]; // [esp+E4h] [ebp-3B4h] BYREF
  char v441[8]; // [esp+ECh] [ebp-3ACh] BYREF
  char v442[4]; // [esp+F4h] [ebp-3A4h] BYREF
  int v443; // [esp+F8h] [ebp-3A0h] BYREF
  int v444; // [esp+FCh] [ebp-39Ch] BYREF
  char v445[8]; // [esp+100h] [ebp-398h] BYREF
  char v446[4]; // [esp+108h] [ebp-390h] BYREF
  char v447[12]; // [esp+10Ch] [ebp-38Ch] BYREF
  char v448[128]; // [esp+118h] [ebp-380h] BYREF
  char Destination[128]; // [esp+198h] [ebp-300h] BYREF
  char v450[128]; // [esp+218h] [ebp-280h] BYREF
  char Buffer[512]; // [esp+298h] [ebp-200h] BYREF

  v433 = this;
  sprintf(Buffer, (ObjectClass *)&stru_830620.__pad_579C[12532], *(INIClass **)(HouseClass_Player.field_0 + 48));
  Debug::Log();
  TextBufferEntry = (IUnknown *)GetTextBufferEntry(4);
  TextBuffer::Init(TextBufferEntry);
  Network::validateConnection(TextBufferEntry, 0, 0);
  v1 = fopen(Buffer, Mode);
  v2 = (MouseClass *)v1;
  if ( v1 )
  {
    fprintf((MouseClass *)v1, &stru_830620.__pad_579C[12420], v359);
    ModuleVersion = GetModuleVersion();
    fprintf(v2, &stru_830620.__pad_579C[12404], (CellStruct *)ModuleVersion);
    ModuleInternalVersion = GetModuleInternalVersion((int)&HouseClass_Player.__pad_5568[23084]);
    fprintf(v2, &stru_830620.__pad_579C[12380], (CellStruct *)ModuleInternalVersion);
    v448[0] = 0;
    Time::FormatDate(v448);
    String::CopyConstant(Destination);
    v5 = (CellStruct *)String::FormatDword(v450);
    fprintf(v2, (const char *const)stru_821F08.headNode, v5);
    v432 = 5;
    v415 = 0;
    GetVersionString(&v432, &v415, 0, 0);
    Name = PlayerType::GetName();
    fprintf(v2, g_Str_Trace_CPU__s__MMX__s__Vendor_, (CellStruct *)Name);
    fprintf(v2, g_Str_Trace_Frames_, *(CellStruct **)&HouseClass_Player.__pad_5568[23248]);
    if ( g_FrameCounter_Samples )
      v7 = g_FrameCounter_Total / (unsigned int)g_FrameCounter_Samples;
    else
      v7 = 0;
    fprintf(v2, g_Str_Trace_Average_FPS_, (CellStruct *)v7);
    fprintf(v2, g_Str_Trace_Max_MaxAhead_, *(CellStruct **)&HouseClass_Player.__pad_5568[8884]);
    fprintf(v2, g_Str_Trace_Latency_setting_, *(CellStruct **)&HouseClass_Player.__pad_5568[18664]);
    fprintf(v2, g_Str_Trace_Game_speed_setting_, *(CellStruct **)&HouseClass_Player.__pad_5568[22700]);
    fprintf(v2, &stru_830620.__pad_579C[12360], *(CellStruct **)&HouseClass_Player.__pad_5568[8864]);
    if ( *(unsigned int *)&stru_87C374.__pad_579C[23320] )
    {
      for ( i = 0;
            i < (*(int (**)(unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[23320] + 72))(*(unsigned int *)&stru_87C374.__pad_579C[23320]);
            ++i )
      {
        v9 = (unsigned int *)(*(int (**)(unsigned int, int))(**(unsigned int **)&stru_87C374.__pad_579C[23320] + 76))(
                         *(unsigned int *)&stru_87C374.__pad_579C[23320],
                         i);
        if ( v9 )
          fprintf(v2, g_Str_Trace_Local_address___d__d__d, (CellStruct *)(unsigned __int8)*v9);
      }
    }
    v10 = &HouseClass_Player.__pad_5568[8976];
    do
    {
      if ( *(v10 - 80) )
      {
        Network::CopyAddress((unsigned int *)v10 + 3, &v419, (int)v429);
        fprintf(v2, g_Str_Trace_Name_, (CellStruct *)(v10 - 80));
        fprintf(v2, &stru_830620.__pad_579C[12336], (CellStruct *)LOBYTE(v429[0]));
        fprintf(v2, g_Str_Trace_Max_avg_round_trip_, *(CellStruct **)v10);
        fprintf(v2, g_Str_Trace_Max_round_trip_, *((CellStruct **)v10 - 4));
        fprintf(v2, g_Str_Trace_Resends_, *((CellStruct **)v10 - 3));
        fprintf(v2, g_Str_Trace_Frame_sync_stalls_, *((CellStruct **)v10 + 1));
        fprintf(v2, g_Str_Trace_Command_cound_stalls_, *((CellStruct **)v10 + 2));
        fprintf(v2, g_Str_Trace_Lost_, *((CellStruct **)v10 - 2));
        fprintf(v2, g_Str_Trace_Percent_lost_, *((CellStruct **)v10 - 1));
      }
      v10 += 104;
    }
    while ( (int)v10 < (int)&HouseClass_Player.__pad_5568[9808] );
    v11 = 0;
    v12 = dword_B04474;
    do
    {
      fprintf(v2, &stru_830620.__pad_579C[12324], v11);
      ++v12;
      v11 = (CellStruct *)((char *)v11 + 1);
    }
    while ( (int)v12 < (int)&dword_B04874 );
    fprintf(v2, &stru_830620.__pad_579C[12300], v360);
    v14 = HouseClass_Count;
    for ( j = 0; j < (int)HouseClass_Count; ++j )
    {
      *(&g_MatrixTransformState + 6395) = 0;
      v15 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * j];
      v16 = ToWideStringChar((IUnknown *)(v15 + 90154));
      fprintf(v2, &stru_830620.__pad_579C[12184], (CellStruct *)v16);
      Debug::Printf((IUnknown *)(*(unsigned int *)(v15 + 52) + 36));
      v14 = HouseClass_Count;
    }
    v17 = 0;
    v410 = 0;
    if ( (int)v14 > 0 )
    {
      do
      {
        v18 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * (unsigned int)v17];
        *(&g_MatrixTransformState + 6395) = 0;
        v424 = v18;
        fprintf(v2, &stru_830620.__pad_579C[12108], (CellStruct *)(*(unsigned int *)(v18 + 52) + 36));
        v19 = 0;
        for ( aP2 = 0; v19 < *(int *)&HouseClass_Player.__pad_74[56]; aP2 = (CellStruct *)v19 )
        {
          v20 = *(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_74[44] + 4 * v19);
          if ( v20[135] == v18 )
          {
            v21 = v20[39];
            v422 = v20[40];
            v423 = v20[41];
            Value = ProgressTimer::GetValue((unsigned short *)v20 + 452, (IUnknown *)&v419);
            *(&g_MatrixTransformState + 6395) = (CoordStruct *)(v21 / 10
                                                              + ((v422 / 10) << 16)
                                                              + (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1)
                                                              + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                              + 2 * (unsigned int)*(&g_MatrixTransformState + 6395));
            v23 = (int *)v20[173];
            v417 = 0;
            v416 = 0;
            if ( v23 )
            {
              v24 = (CellStruct **)(*(int (**)(int *, unsigned int *))(*v23 + 72))(v23, v429);
              v25 = *v23;
              v417 = *v24;
              v26 = (*(int (**)(int *, char *))(v25 + 72))(v23, v445);
              v27 = *v23;
              v416 = *(char **)(v26 + 4);
              v28 = (void *)(*(int (**)(int *))(v27 + 44))(v23);
              AbstractType::FindName(v28);
            }
            v29 = (int *)v20[361];
            v345 = 0;
            v418 = 0;
            v425 = &stru_830620.__pad_579C[5608];
            if ( v29 )
            {
              v30 = *(ParticleSystemClass **)(*(int (**)(int *, char *))(*v29 + 72))(v29, v447);
              v31 = *v29;
              v345 = v30;
              v32 = *(char **)((*(int (**)(int *, char *))(v31 + 72))(v29, v437) + 4);
              v33 = *v29;
              v418 = v32;
              v34 = (void *)(*(int (**)(int *))(v33 + 44))(v29);
              v425 = AbstractType::FindName(v34);
            }
            v35 = ProgressTimer::GetValue((unsigned short *)v20 + 452, (IUnknown *)&v428);
            v36 = v20[432];
            v37 = (unsigned __int8)((unsigned int)((*v35 >> 7) + 1) >> 1);
            Math::RoundToInt(*((double *)v20 + 175) * 256.0);
            v38 = (*(int (**)(unsigned int *, unsigned int, int))(*v20 + 388))(v20, *(unsigned int *)(v36 + 3576), v36 + 36);
            v39 = (*(int (**)(unsigned int *, char *, int, int))(*v20 + 72))(v20, v442, v37, v38);
            v40 = (CellStruct **)(*(int (**)(unsigned int *, char *, unsigned int))(*v20 + 72))(
                                   v20,
                                   v440,
                                   *(unsigned int *)(v39 + 4));
            fprintf(v2, &stru_830620.__pad_579C[12012], *v40);
            v18 = v424;
            v19 = (int)aP2;
          }
          ++v19;
        }
        Debug::Printf((IUnknown *)(*(unsigned int *)(v18 + 52) + 36));
        v14 = HouseClass_Count;
        v17 = (char *)&v410->field_0 + 1;
        v410 = (CellStruct *)((char *)v410 + 1);
      }
      while ( (int)v410 < (int)HouseClass_Count );
    }
    v41 = 0;
    v411 = 0;
    if ( (int)v14 > 0 )
    {
      do
      {
        v42 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * (unsigned int)v41];
        *(&g_MatrixTransformState + 6395) = 0;
        v419 = v42;
        fprintf(v2, &stru_830620.__pad_579C[11940], (CellStruct *)(*(unsigned int *)(v42 + 52) + 36));
        v43 = 0;
        for ( aP2a = 0; v43 < *(int *)&stru_89E138.__pad_579C[67652]; aP2a = (CellStruct *)v43 )
        {
          v44 = *(unsigned int **)(*(unsigned int *)&stru_89E138.__pad_579C[67640] + 4 * v43);
          if ( v44[135] == v42 )
          {
            v421 = v44[39];
            v422 = v44[40];
            v423 = v44[41];
            v45 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v44 + 452, (IUnknown *)&v443) >> 7)
                                                 + 1) >> 1);
            v424 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v44 + 464, (IUnknown *)&v444) >> 7)
                                                  + 1) >> 1);
            v418 = &stru_830620.__pad_579C[5608];
            v345 = 0;
            *(&g_MatrixTransformState + 6395) = (CoordStruct *)(v424
                                                              + v45
                                                              + ((v422 / 10) << 16)
                                                              + v421 / 10
                                                              + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                              + 2 * (unsigned int)*(&g_MatrixTransformState + 6395));
            v46 = (int *)v44[173];
            v425 = 0;
            if ( v46 )
            {
              v47 = (ParticleSystemClass **)(*(int (**)(int *, char *))(*v46 + 72))(v46, v439);
              v48 = *v46;
              v345 = *v47;
              v49 = (*(int (**)(int *, char *))(v48 + 72))(v46, v441);
              v50 = *v46;
              v425 = *(char **)(v49 + 4);
              v51 = (void *)(*(int (**)(int *))(v50 + 44))(v46);
              v418 = AbstractType::FindName(v51);
            }
            v52 = (int *)v44[361];
            v417 = 0;
            v416 = &stru_830620.__pad_579C[5608];
            if ( v52 )
            {
              v54 = *(CellStruct **)(*(int (**)(int *, char *))(*v52 + 72))(v52, v437);
              eax35 = *v52;
              v417 = v54;
              (*(int (**)(int *, char *))(eax35 + 72))(v52, v447);
              v55 = (void *)(*(int (**)(int *))(*v52 + 44))(v52);
              v416 = AbstractType::FindName(v55);
            }
            if ( !v44[413] )
              WinAPI::Wrapper(-2147467261);
            v424 = v44[413];
            if ( !v424 )
              WinAPI::Wrapper(-2147467261);
            v430 = v44[413];
            if ( !v430 )
              WinAPI::Wrapper(-2147467261);
            v431 = v44[413];
            v428 = v44[433] + 36;
            v56 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v44 + 464, (IUnknown *)&v346) >> 7)
                                                 + 1) >> 1);
            v57 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v44 + 452, (IUnknown *)v429) >> 7)
                                                 + 1) >> 1);
            v58 = (*(int (**)(int))(*(unsigned int *)v424 + 196))(v424);
            v59 = (*(int (**)(int, int))(*(unsigned int *)v430 + 192))(v430, v58);
            v60 = (*(int (**)(int, int))(*(unsigned int *)v432 + 188))(v432, v59);
            v61 = (*(int (**)(unsigned int *, unsigned int, unsigned int, IUnknown *, int, ParticleSystemClass *, char *, int, char *, int))(*v44 + 388))(
                    v44,
                    *(unsigned int *)(v44[433] + 3576),
                    v429[1],
                    TextBufferEntry,
                    v428,
                    v346,
                    v418,
                    v419,
                    v416,
                    v60);
            v62 = (*(int (**)(unsigned int *, char *, int, int, int))(*v44 + 72))(v44, v446, v57, v56, v61);
            v63 = (CellStruct **)(*(int (**)(unsigned int *, char *, unsigned int))(*v44 + 72))(
                                   v44,
                                   v435,
                                   *(unsigned int *)(v62 + 4));
            fprintf(v2, &stru_830620.__pad_579C[11808], *v63);
            v42 = v419;
            v43 = (int)aP2a;
          }
          ++v43;
        }
        Debug::Printf((IUnknown *)(*(unsigned int *)(v42 + 52) + 36));
        v14 = HouseClass_Count;
        v41 = (char *)&v411->field_0 + 1;
        v411 = (CellStruct *)((char *)v411 + 1);
      }
      while ( (int)v411 < (int)HouseClass_Count );
    }
    v64 = 0;
    v412 = 0;
    if ( (int)v14 > 0 )
    {
      do
      {
        v65 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * (unsigned int)v64];
        *(&g_MatrixTransformState + 6395) = 0;
        v419 = v65;
        fprintf(v2, &stru_830620.__pad_579C[11732], (CellStruct *)(*(unsigned int *)(v65 + 52) + 36));
        v66 = 0;
        for ( aP2b = 0; v66 < *(int *)&HouseClass_Player.__pad_5568[22684]; aP2b = (CellStruct *)v66 )
        {
          v67 = *(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22672] + 4 * v66);
          if ( v67[135] == v65 )
          {
            v68 = v67[39];
            v422 = v67[40];
            v423 = v67[41];
            v69 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v67 + 452, (IUnknown *)v429) >> 7)
                                                 + 1) >> 1);
            v416 = &stru_830620.__pad_579C[5608];
            *(&g_MatrixTransformState + 6395) = (CoordStruct *)(v68 / 10
                                                              + ((v422 / 10) << 16)
                                                              + v69
                                                              + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                              + 2 * (unsigned int)*(&g_MatrixTransformState + 6395));
            v70 = (int *)v67[173];
            v417 = 0;
            if ( v70 )
            {
              v71 = (CellStruct **)(*(int (**)(int *, char *))(*v70 + 72))(v70, v434);
              v72 = *v70;
              v417 = *v71;
              (*(int (**)(int *, char *))(v72 + 72))(v70, v439);
              v73 = (void *)(*(int (**)(int *))(*v70 + 44))(v70);
              v416 = AbstractType::FindName(v73);
            }
            v74 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v67 + 452, (IUnknown *)&v346) >> 7)
                                                 + 1) >> 1);
            v75 = (*(int (**)(unsigned int *, unsigned int, int))(*v67 + 388))(
                    v67,
                    *(unsigned int *)(v67[328] + 3576),
                    v67[328] + 36);
            v76 = (*(int (**)(unsigned int *, char *, int, int))(*v67 + 72))(v67, v442, v74, v75);
            v77 = (CellStruct **)(*(int (**)(unsigned int *, char *, unsigned int))(*v67 + 72))(
                                   v67,
                                   v438,
                                   *(unsigned int *)(v76 + 4));
            fprintf(v2, &stru_830620.__pad_579C[11664], *v77);
            v65 = v419;
            v66 = (int)aP2b;
          }
          ++v66;
        }
        Debug::Printf((IUnknown *)(*(unsigned int *)(v65 + 52) + 36));
        v14 = HouseClass_Count;
        v64 = (char *)&v412->field_0 + 1;
        v412 = (CellStruct *)((char *)v412 + 1);
      }
      while ( (int)v412 < (int)HouseClass_Count );
    }
    v78 = 0;
    v413 = 0;
    if ( (int)v14 > 0 )
    {
      do
      {
        v79 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * (unsigned int)v78];
        *(&g_MatrixTransformState + 6395) = 0;
        v419 = v79;
        fprintf(v2, &stru_830620.__pad_579C[11584], (CellStruct *)(*(unsigned int *)(v79 + 52) + 36));
        v80 = 0;
        for ( aP2c = 0; v80 < *(int *)&HouseClass_Player.__pad_5568[20716]; aP2c = (CellStruct *)v80 )
        {
          v81 = *(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[20704] + 4 * v80);
          if ( v81[135] == v79 )
          {
            v82 = v81[39];
            v422 = v81[40];
            v423 = v81[41];
            v83 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v81 + 452, (IUnknown *)v429) >> 7)
                                                 + 1) >> 1);
            v416 = &stru_830620.__pad_579C[5608];
            *(&g_MatrixTransformState + 6395) = (CoordStruct *)(v82 / 10
                                                              + ((v422 / 10) << 16)
                                                              + v83
                                                              + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                              + 2 * (unsigned int)*(&g_MatrixTransformState + 6395));
            v84 = (int *)v81[173];
            v417 = 0;
            if ( v84 )
            {
              v85 = (CellStruct **)(*(int (**)(int *, char *))(*v84 + 72))(v84, v434);
              v86 = *v84;
              v417 = *v85;
              (*(int (**)(int *, char *))(v86 + 72))(v84, v439);
              v87 = (void *)(*(int (**)(int *))(*v84 + 44))(v84);
              v416 = AbstractType::FindName(v87);
            }
            v88 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v81 + 452, (IUnknown *)&v346) >> 7)
                                                 + 1) >> 1);
            v89 = (*(int (**)(unsigned int *, unsigned int, int))(*v81 + 388))(
                    v81,
                    *(unsigned int *)(v81[433] + 3576),
                    v81[433] + 36);
            v90 = (*(int (**)(unsigned int *, char *, int, int))(*v81 + 72))(v81, v442, v88, v89);
            v91 = (CellStruct **)(*(int (**)(unsigned int *, char *, unsigned int))(*v81 + 72))(
                                   v81,
                                   v438,
                                   *(unsigned int *)(v90 + 4));
            fprintf(v2, &stru_830620.__pad_579C[11664], *v91);
            v79 = v419;
            v80 = (int)aP2c;
          }
          ++v80;
        }
        Debug::Printf((IUnknown *)(*(unsigned int *)(v79 + 52) + 36));
        v78 = (char *)&v413->field_0 + 1;
        v413 = (CellStruct *)((char *)v413 + 1);
      }
      while ( (int)v413 < (int)HouseClass_Count );
    }
    v92 = &stru_89E138.__pad_14B0[3464];
    *(&g_MatrixTransformState + 6395) = 0;
    aP2d = 0;
    v418 = &stru_89E138.__pad_14B0[3464];
    do
    {
      fprintf(v2, &stru_830620.__pad_579C[11544], aP2d);
      for ( k = 0; (int)k < *(unsigned int *)v92; k = (CellStruct *)((char *)k + 1) )
      {
        v93 = *(unsigned int **)(*((unsigned int *)v92 - 3) + 4 * (unsigned int)k);
        if ( (*(int (**)(unsigned int *))(*v93 + 44))(v93) != 4
          || (*(int (**)(unsigned int *))(v93[1] + 16))(v93 + 1) != -2 )
        {
          v94 = v93[39];
          v422 = v93[40];
          v95 = *v93;
          v423 = v93[41];
          v96 = (*(int (**)(unsigned int *))(v95 + 44))(v93);
          *(&g_MatrixTransformState + 6395) = (CoordStruct *)(v94 / 10
                                                            + ((v422 / 10) << 16)
                                                            + v96
                                                            + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                            + 2 * (unsigned int)*(&g_MatrixTransformState + 6395));
          v436 = v93[41];
          fprintf(v2, &stru_830620.__pad_579C[11528], k);
          if ( (*(int (**)(unsigned int *))(*v93 + 44))(v93) == 43
            || (*(int (**)(unsigned int *))(*v93 + 44))(v93) == 19 )
          {
            v102 = (void *)(*(int (**)(unsigned int *, unsigned int))(*v93 + 44))(v93, 0);
            v103 = AbstractType::FindName(v102);
            fprintf(v2, &stru_830620.__pad_579C[11492], (CellStruct *)v103);
          }
          else
          {
            v97 = (*(int (**)(unsigned int *))(*v93 + 136))(v93) + 36;
            v98 = (*(int (**)(unsigned int *))(*v93 + 136))(v93);
            v99 = (*(int (**)(int, int))(*(unsigned int *)v98 + 64))(v98, v97);
            v100 = (void *)(*(int (**)(unsigned int *, int))(*v93 + 44))(v93, v99);
            v101 = AbstractType::FindName(v100);
            fprintf(v2, &stru_830620.__pad_579C[11508], (CellStruct *)v101);
          }
          v104 = (*(int (**)(unsigned int *))(*v93 + 60))(v93);
          if ( v104 )
            fprintf(v2, &stru_830620.__pad_579C[11476], (CellStruct *)(*(unsigned int *)(v104 + 52) + 36));
          else
            fprintf(v2, &stru_830620.__pad_579C[11460], v361);
          v92 = v418;
        }
      }
      v92 += 24;
      aP2d = (CellStruct *)((char *)aP2d + 1);
      v418 = v92;
    }
    while ( (int)v92 < (int)&stru_89E138.__pad_14B0[3584] );
    v305 = TextBufferEntry;
    Debug::Printf(TextBufferEntry);
    *(&g_MatrixTransformState + 6395) = 0;
    fprintf(v2, &stru_830620.__pad_579C[11416], (CellStruct *)v305);
    v105 = *(IUnknown **)&stru_87C374.__pad_14B0[8036];
    v106 = 0;
    for ( aP2e = 0; (int)aP2e < *(int *)&stru_87C374.__pad_14B0[8036]; aP2e = (CellStruct *)((char *)aP2e + 1) )
    {
      v107 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8024] + 4 * (unsigned int)v106);
      if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) != 4
        || (*(int (**)(unsigned int *))(v107[1] + 16))(v107 + 1) != -2 )
      {
        v109 = (CellStruct *)v107[39];
        v422 = v107[40];
        edx78 = *v107;
        v423 = v107[41];
        v110 = (*(int (**)(unsigned int *))(edx78 + 44))(v107);
        *(&g_MatrixTransformState + 6395) = (CoordStruct *)((int)v109 / 10
                                                          + ((v422 / 10) << 16)
                                                          + v110
                                                          + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                          + 2 * (unsigned int)*(&g_MatrixTransformState + 6395));
        v436 = v107[41];
        fprintf(v2, &stru_830620.__pad_579C[11528], aP2e);
        if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 2 )
        {
          v111 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v112 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v306 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v112 + 64))(v112, v111);
          fprintf(v2, &stru_830620.__pad_579C[11388], v306);
        }
        else if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 4 )
        {
          v113 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v114 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v307 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v114 + 64))(v114, v113);
          fprintf(v2, &stru_830620.__pad_579C[11360], v307);
        }
        else if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 6 )
        {
          v115 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v116 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v308 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v116 + 64))(v116, v115);
          fprintf(v2, &stru_830620.__pad_579C[11332], v308);
        }
        else if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 8 )
        {
          v117 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v118 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v309 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v118 + 64))(v118, v117);
          fprintf(v2, &stru_830620.__pad_579C[11304], v309);
        }
        else if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 15 )
        {
          v119 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v120 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v310 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v120 + 64))(v120, v119);
          fprintf(v2, &stru_830620.__pad_579C[11276], v310);
        }
        else if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 20 )
        {
          v121 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v122 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v311 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v122 + 64))(v122, v121);
          fprintf(v2, &stru_830620.__pad_579C[11248], v311);
        }
        else if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 29 )
        {
          v123 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v124 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v312 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v124 + 64))(v124, v123);
          fprintf(v2, &stru_830620.__pad_579C[11220], v312);
        }
        else if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 36 )
        {
          v125 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v126 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v313 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v126 + 64))(v126, v125);
          fprintf(v2, &stru_830620.__pad_579C[11192], v313);
        }
        else if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 1 )
        {
          v127 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v128 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v314 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v128 + 64))(v128, v127);
          fprintf(v2, &stru_830620.__pad_579C[11164], v314);
        }
        v129 = (*(int (**)(unsigned int *))(*v107 + 60))(v107);
        if ( v129 )
          fprintf(v2, &stru_830620.__pad_579C[11152], (CellStruct *)(*(unsigned int *)(v129 + 52) + 36));
        else
          fprintf(v2, &stru_830620.__pad_579C[11460], v361);
      }
      v105 = *(IUnknown **)&stru_87C374.__pad_14B0[8036];
      v106 = (char *)&aP2e->field_0 + 1;
    }
    Debug::Printf(v105);
    v358 = (CellStruct *)Random::State((unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536));
    Debug::Printf(v130);
    fprintf(v2, &stru_830620.__pad_579C[11100], v358);
    Debug::Printf(*(IUnknown **)&HouseClass_Player.__pad_5568[23248]);
    fprintf(v2, &stru_830620.__pad_579C[11068], *(CellStruct **)&HouseClass_Player.__pad_5568[23248]);
    v131 = v433;
    if ( v433 )
    {
      fprintf(v2, &stru_830620.__pad_579C[11048], v361);
      fprintf(v2, &stru_830620.__pad_579C[11028], (CellStruct *)*v131);
      fprintf(v2, &stru_830620.__pad_579C[11008], *(CellStruct **)(v131 + 3));
      fprintf(v2, &stru_830620.__pad_579C[10988], (CellStruct *)(char)v131[2]);
      fprintf(v2, &stru_830620.__pad_579C[10968], *(CellStruct **)(v131 + 7));
      fprintf(v2, &stru_830620.__pad_579C[10948], (CellStruct *)*(unsigned __int16 *)(v131 + 11));
      fprintf(v2, &stru_830620.__pad_579C[10928], (CellStruct *)v131[13]);
    }
    v132 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v132 )
    {
      *v132 = 0;
      v132[1] = 0;
      v132[2] = 0;
      v133 = v132;
    }
    else
    {
      v133 = 0;
    }
    fprintf(v2, &stru_830620.__pad_579C[10876], v361);
    fprintf(v2, &stru_830620.__pad_579C[10860], v315);
    fprintf(v2, &stru_830620.__pad_579C[10812], v262);
    for ( mm = 0; (int)mm < g_SuperWeaponTypeArray; mm = (CellStruct *)((char *)mm + 1) )
    {
      (*(void (**)(unsigned int, void *))(**((unsigned int **)g_SuperWeaponTypeCount + (unsigned int)mm) + 52))(
        *((unsigned int *)g_SuperWeaponTypeCount + (unsigned int)mm),
        v133);
      fprintf(v2, &stru_830620.__pad_579C[10796], mm);
    }
    fprintf(v2, &stru_830620.__pad_579C[10744], v362);
    fprintf(v2, &stru_830620.__pad_579C[10860], v316);
    fprintf(v2, &stru_830620.__pad_579C[10812], v263);
    __3_YAXPAX_Z(v133);
    v135 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v135 )
    {
      *v135 = 0;
      v135[1] = 0;
      v135[2] = 0;
      v136 = v135;
    }
    else
    {
      v136 = 0;
    }
    for ( nn = 0; (int)nn < (int)HouseClass_Count; nn = (CellStruct *)((char *)nn + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)&HouseClass_Array->__pad_0[4 * (unsigned int)nn] + 52))(
        *(unsigned int *)&HouseClass_Array->__pad_0[4 * (unsigned int)nn],
        v136);
      fprintf(v2, &stru_830620.__pad_579C[10796], nn);
    }
    fprintf(v2, &stru_830620.__pad_579C[10692], v363);
    fprintf(v2, &stru_830620.__pad_579C[10860], v317);
    fprintf(v2, &stru_830620.__pad_579C[10812], v264);
    __3_YAXPAX_Z(v136);
    v138 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v138 )
    {
      *v138 = 0;
      v138[1] = 0;
      v138[2] = 0;
      v139 = v138;
    }
    else
    {
      v139 = 0;
    }
    for ( i1 = 0; (int)i1 < (int)g_CrateCount; i1 = (CellStruct *)((char *)i1 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)&g_UnitTypeCount2->__pad_0[4 * (unsigned int)i1] + 52))(
        *(unsigned int *)&g_UnitTypeCount2->__pad_0[4 * (unsigned int)i1],
        v139);
      fprintf(v2, &stru_830620.__pad_579C[10796], i1);
    }
    fprintf(v2, &stru_830620.__pad_579C[10648], v364);
    fprintf(v2, &stru_830620.__pad_579C[10860], v318);
    fprintf(v2, &stru_830620.__pad_579C[10812], v265);
    __3_YAXPAX_Z(v139);
    v141 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v141 )
    {
      *v141 = 0;
      v141[1] = 0;
      v141[2] = 0;
      v142 = v141;
    }
    else
    {
      v142 = 0;
    }
    for ( i2 = 0; (int)i2 < *(int *)&stru_89E138.__pad_579C[67652]; i2 = (CellStruct *)((char *)i2 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_89E138.__pad_579C[67640] + 4 * (unsigned int)i2)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_579C[67640] + 4 * (unsigned int)i2),
        v142);
      fprintf(v2, &stru_830620.__pad_579C[10796], i2);
    }
    fprintf(v2, &stru_830620.__pad_579C[10592], v365);
    fprintf(v2, &stru_830620.__pad_579C[10860], v319);
    fprintf(v2, &stru_830620.__pad_579C[10812], v266);
    __3_YAXPAX_Z(v142);
    v144 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v144 )
    {
      *v144 = 0;
      v144[1] = 0;
      v144[2] = 0;
      v145 = v144;
    }
    else
    {
      v145 = 0;
    }
    for ( i3 = 0; (int)i3 < *(int *)&HouseClass_Player.__pad_5568[20644]; i3 = (CellStruct *)((char *)i3 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[20632]
                                                           + 4 * (unsigned int)i3)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20632] + 4 * (unsigned int)i3),
        v145);
      fprintf(v2, &stru_830620.__pad_579C[10796], i3);
    }
    fprintf(v2, &stru_830620.__pad_579C[10544], v366);
    fprintf(v2, &stru_830620.__pad_579C[10860], v320);
    fprintf(v2, &stru_830620.__pad_579C[10812], v267);
    __3_YAXPAX_Z(v145);
    v147 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v147 )
    {
      *v147 = 0;
      v147[1] = 0;
      v147[2] = 0;
      v148 = v147;
    }
    else
    {
      v148 = 0;
    }
    for ( i4 = 0; (int)i4 < *(int *)&HouseClass_Player.__pad_74[56]; i4 = (CellStruct *)((char *)i4 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_74[44] + 4 * (unsigned int)i4)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_74[44] + 4 * (unsigned int)i4),
        v148);
      fprintf(v2, &stru_830620.__pad_579C[10796], i4);
    }
    fprintf(v2, &stru_830620.__pad_579C[10492], v367);
    fprintf(v2, &stru_830620.__pad_579C[10860], v321);
    fprintf(v2, &stru_830620.__pad_579C[10812], v268);
    __3_YAXPAX_Z(v148);
    v150 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v150 )
    {
      *v150 = 0;
      v150[1] = 0;
      v150[2] = 0;
      v151 = v150;
    }
    else
    {
      v151 = 0;
    }
    for ( i5 = 0; (int)i5 < (int)g_TriggerClassCount; i5 = (CellStruct *)((char *)i5 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**((unsigned int **)g_TriggerTypeCount + (unsigned int)i5) + 52))(
        *((unsigned int *)g_TriggerTypeCount + (unsigned int)i5),
        v151);
      fprintf(v2, &stru_830620.__pad_579C[10796], i5);
    }
    fprintf(v2, &stru_830620.__pad_579C[10444], v368);
    fprintf(v2, &stru_830620.__pad_579C[10860], v322);
    fprintf(v2, &stru_830620.__pad_579C[10812], v269);
    __3_YAXPAX_Z(v151);
    v153 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v153 )
    {
      *v153 = 0;
      v153[1] = 0;
      v153[2] = 0;
      v154 = v153;
    }
    else
    {
      v154 = 0;
    }
    for ( i6 = 0; (int)i6 < *(int *)&HouseClass_Player.__pad_5568[22684]; i6 = (CellStruct *)((char *)i6 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22672]
                                                           + 4 * (unsigned int)i6)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22672] + 4 * (unsigned int)i6),
        v154);
      fprintf(v2, &stru_830620.__pad_579C[10796], i6);
    }
    fprintf(v2, &stru_830620.__pad_579C[10388], v369);
    fprintf(v2, &stru_830620.__pad_579C[10860], v323);
    fprintf(v2, &stru_830620.__pad_579C[10812], v270);
    __3_YAXPAX_Z(v154);
    v156 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v156 )
    {
      *v156 = 0;
      v156[1] = 0;
      v156[2] = 0;
      v157 = v156;
    }
    else
    {
      v157 = 0;
    }
    for ( i7 = 0; (int)i7 < *(int *)&HouseClass_Player.__pad_5568[8052]; i7 = (CellStruct *)((char *)i7 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[8040]
                                                           + 4 * (unsigned int)i7)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8040] + 4 * (unsigned int)i7),
        v157);
      fprintf(v2, &stru_830620.__pad_579C[10796], i7);
    }
    fprintf(v2, &stru_830620.__pad_579C[10340], v370);
    fprintf(v2, &stru_830620.__pad_579C[10860], v324);
    fprintf(v2, &stru_830620.__pad_579C[10812], v271);
    __3_YAXPAX_Z(v157);
    v159 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v159 )
    {
      *v159 = 0;
      v159[1] = 0;
      v159[2] = 0;
      v160 = v159;
    }
    else
    {
      v160 = 0;
    }
    for ( i8 = 0; (int)i8 < *(int *)&HouseClass_Player.__pad_5568[20716]; i8 = (CellStruct *)((char *)i8 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[20704]
                                                           + 4 * (unsigned int)i8)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20704] + 4 * (unsigned int)i8),
        v160);
      fprintf(v2, &stru_830620.__pad_579C[10796], i8);
    }
    fprintf(v2, &stru_830620.__pad_579C[10296], v371);
    fprintf(v2, &stru_830620.__pad_579C[10860], v325);
    fprintf(v2, &stru_830620.__pad_579C[10812], v272);
    __3_YAXPAX_Z(v160);
    v162 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v162 )
    {
      *v162 = 0;
      v162[1] = 0;
      v162[2] = 0;
      v163 = v162;
    }
    else
    {
      v163 = 0;
    }
    for ( i9 = 0; (int)i9 < *(int *)&HouseClass_Player.__pad_5568[22276]; i9 = (CellStruct *)((char *)i9 + 1) )
    {
      v165 = *(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22264] + 4 * (unsigned int)i9);
      if ( (*(int (**)(unsigned int *))(v165[1] + 16))(v165 + 1) != -2 )
      {
        (*(void (**)(unsigned int *, void *))(*v165 + 52))(v165, v163);
        fprintf(v2, &stru_830620.__pad_579C[10796], i9);
      }
    }
    fprintf(v2, &stru_830620.__pad_579C[10244], v372);
    fprintf(v2, &stru_830620.__pad_579C[10860], v326);
    fprintf(v2, &stru_830620.__pad_579C[10812], v273);
    __3_YAXPAX_Z(v163);
    v166 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    v167 = 0;
    if ( v166 )
    {
      *v166 = 0;
      v166[1] = 0;
      v166[2] = 0;
      v167 = v166;
    }
    for ( i10 = 0; (int)i10 < *(int *)&stru_89E138.__pad_1600D[27]; i10 = (CellStruct *)((char *)i10 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_89E138.__pad_1600D[15] + 4 * (unsigned int)i10)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_1600D[15] + 4 * (unsigned int)i10),
        v167);
      fprintf(v2, &stru_830620.__pad_579C[10796], i10);
    }
    fprintf(v2, &stru_830620.__pad_579C[10192], v373);
    fprintf(v2, &stru_830620.__pad_579C[10860], v327);
    fprintf(v2, &stru_830620.__pad_579C[10812], v274);
    __3_YAXPAX_Z(v167);
    v169 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v169 )
    {
      *v169 = 0;
      v169[1] = 0;
      v169[2] = 0;
      v170 = v169;
    }
    else
    {
      v170 = 0;
    }
    for ( i11 = 0; (int)i11 < *(int *)&HouseClass_Player.__pad_5568[22060]; i11 = (CellStruct *)((char *)i11 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22048]
                                                           + 4 * (unsigned int)i11)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22048] + 4 * (unsigned int)i11),
        v170);
      fprintf(v2, &stru_830620.__pad_579C[10796], i11);
    }
    fprintf(v2, &stru_830620.__pad_579C[10140], v374);
    fprintf(v2, &stru_830620.__pad_579C[10860], v328);
    fprintf(v2, &stru_830620.__pad_579C[10812], v275);
    __3_YAXPAX_Z(v170);
    v172 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v172 )
    {
      *v172 = 0;
      v172[1] = 0;
      v172[2] = 0;
      v173 = v172;
    }
    else
    {
      v173 = 0;
    }
    for ( i12 = 0; (int)i12 < *(int *)&HouseClass_Player.__pad_5568[23036]; i12 = (CellStruct *)((char *)i12 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[23024]
                                                           + 4 * (unsigned int)i12)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[23024] + 4 * (unsigned int)i12),
        v173);
      fprintf(v2, &stru_830620.__pad_579C[10796], i12);
    }
    fprintf(v2, &stru_830620.__pad_579C[10096], v375);
    fprintf(v2, &stru_830620.__pad_579C[10860], v329);
    fprintf(v2, &stru_830620.__pad_579C[10812], v276);
    __3_YAXPAX_Z(v173);
    v175 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v175 )
    {
      *v175 = 0;
      v175[1] = 0;
      v175[2] = 0;
      v176 = v175;
    }
    else
    {
      v176 = 0;
    }
    for ( i13 = 0; (int)i13 < *(int *)&stru_89E138.__pad_579C[67620]; i13 = (CellStruct *)((char *)i13 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_89E138.__pad_579C[67608] + 4 * (unsigned int)i13)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_579C[67608] + 4 * (unsigned int)i13),
        v176);
      fprintf(v2, &stru_830620.__pad_579C[10796], i13);
    }
    fprintf(v2, &stru_830620.__pad_579C[10044], v376);
    fprintf(v2, &stru_830620.__pad_579C[10860], v330);
    fprintf(v2, &stru_830620.__pad_579C[10812], v277);
    __3_YAXPAX_Z(v176);
    v178 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v178 )
    {
      *v178 = 0;
      v178[1] = 0;
      v178[2] = 0;
      v179 = v178;
    }
    else
    {
      v179 = 0;
    }
    for ( i14 = 0; (int)i14 < dword_8B41D8; i14 = (CellStruct *)((char *)i14 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**((unsigned int **)unk_8B41CC + (unsigned int)i14) + 52))(
        *((unsigned int *)unk_8B41CC + (unsigned int)i14),
        v179);
      fprintf(v2, &stru_830620.__pad_579C[10796], i14);
    }
    fprintf(v2, &stru_830620.__pad_579C[9996], v377);
    fprintf(v2, &stru_830620.__pad_579C[10860], v331);
    fprintf(v2, &stru_830620.__pad_579C[10812], v278);
    __3_YAXPAX_Z(v179);
    v181 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v181 )
    {
      *v181 = 0;
      v181[1] = 0;
      v181[2] = 0;
      v182 = v181;
    }
    else
    {
      v182 = 0;
    }
    for ( i15 = 0; (int)i15 < *(int *)&stru_87C374.__pad_579C[22448]; i15 = (CellStruct *)((char *)i15 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[22436] + 4 * (unsigned int)i15)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22436] + 4 * (unsigned int)i15),
        v182);
      fprintf(v2, &stru_830620.__pad_579C[10796], i15);
    }
    fprintf(v2, &stru_830620.__pad_579C[9948], v378);
    fprintf(v2, &stru_830620.__pad_579C[10860], v332);
    fprintf(v2, &stru_830620.__pad_579C[10812], v279);
    __3_YAXPAX_Z(v182);
    v184 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v184 )
    {
      *v184 = 0;
      v184[1] = 0;
      v184[2] = 0;
      v185 = v184;
    }
    else
    {
      v185 = 0;
    }
    for ( i16 = 0; (int)i16 < *(int *)&stru_B05488.__pad_579C[15212]; i16 = (CellStruct *)((char *)i16 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_B05488.__pad_579C[15200] + 4 * (unsigned int)i16)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[15200] + 4 * (unsigned int)i16),
        v185);
      fprintf(v2, &stru_830620.__pad_579C[10796], i16);
    }
    fprintf(v2, &stru_830620.__pad_579C[9904], v379);
    fprintf(v2, &stru_830620.__pad_579C[10860], v333);
    fprintf(v2, &stru_830620.__pad_579C[10812], v280);
    __3_YAXPAX_Z(v185);
    v187 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v187 )
    {
      *v187 = 0;
      v187[1] = 0;
      v187[2] = 0;
      v188 = v187;
    }
    else
    {
      v188 = 0;
    }
    for ( i17 = 0; (int)i17 < *(int *)&stru_B05488.__pad_579C[15116]; i17 = (CellStruct *)((char *)i17 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_B05488.__pad_579C[15104] + 4 * (unsigned int)i17)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[15104] + 4 * (unsigned int)i17),
        v188);
      fprintf(v2, &stru_830620.__pad_579C[10796], i17);
    }
    fprintf(v2, &stru_830620.__pad_579C[9852], v380);
    fprintf(v2, &stru_830620.__pad_579C[10860], v334);
    fprintf(v2, &stru_830620.__pad_579C[10812], v281);
    __3_YAXPAX_Z(v188);
    v190 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v190 )
    {
      *v190 = 0;
      v190[1] = 0;
      v190[2] = 0;
      v191 = v190;
    }
    else
    {
      v191 = 0;
    }
    for ( i18 = 0; (int)i18 < dword_8B4188; i18 = (CellStruct *)((char *)i18 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**((unsigned int **)unk_8B417C + (unsigned int)i18) + 52))(
        *((unsigned int *)unk_8B417C + (unsigned int)i18),
        v191);
      fprintf(v2, &stru_830620.__pad_579C[10796], i18);
    }
    fprintf(v2, &stru_830620.__pad_579C[9804], v381);
    fprintf(v2, &stru_830620.__pad_579C[10860], v335);
    fprintf(v2, &stru_830620.__pad_579C[10812], v282);
    __3_YAXPAX_Z(v191);
    v193 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v193 )
    {
      *v193 = 0;
      v193[1] = 0;
      v193[2] = 0;
      v194 = v193;
    }
    else
    {
      v194 = 0;
    }
    for ( i19 = 0; (int)i19 < *(int *)&HouseClass_Player.__pad_5568[22596]; i19 = (CellStruct *)((char *)i19 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22584]
                                                           + 4 * (unsigned int)i19)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22584] + 4 * (unsigned int)i19),
        v194);
      fprintf(v2, &stru_830620.__pad_579C[10796], i19);
    }
    fprintf(v2, &stru_830620.__pad_579C[9756], v382);
    fprintf(v2, &stru_830620.__pad_579C[10860], v336);
    fprintf(v2, &stru_830620.__pad_579C[10812], v283);
    __3_YAXPAX_Z(v194);
    v196 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v196 )
    {
      *v196 = 0;
      v196[1] = 0;
      v196[2] = 0;
      v197 = v196;
    }
    else
    {
      v197 = 0;
    }
    for ( i20 = 0; (int)i20 < *(int *)&stru_B05488.__pad_579C[14916]; i20 = (CellStruct *)((char *)i20 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_B05488.__pad_579C[14904] + 4 * (unsigned int)i20)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[14904] + 4 * (unsigned int)i20),
        v197);
      fprintf(v2, &stru_830620.__pad_579C[10796], i20);
    }
    fprintf(v2, &stru_830620.__pad_579C[9708], v383);
    fprintf(v2, &stru_830620.__pad_579C[10860], v337);
    fprintf(v2, &stru_830620.__pad_579C[10812], v284);
    __3_YAXPAX_Z(v197);
    v199 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v199 )
    {
      *v199 = 0;
      v199[1] = 0;
      v199[2] = 0;
      v200 = v199;
    }
    else
    {
      v200 = 0;
    }
    for ( i21 = 0; (int)i21 < *(int *)&stru_B05488.__pad_579C[17804]; i21 = (CellStruct *)((char *)i21 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_B05488.__pad_579C[17792] + 4 * (unsigned int)i21)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[17792] + 4 * (unsigned int)i21),
        v200);
      fprintf(v2, &stru_830620.__pad_579C[10796], i21);
    }
    fprintf(v2, &stru_830620.__pad_579C[9660], v384);
    fprintf(v2, &stru_830620.__pad_579C[10860], v338);
    fprintf(v2, &stru_830620.__pad_579C[10812], v285);
    __3_YAXPAX_Z(v200);
    v202 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v202 )
    {
      *v202 = 0;
      v202[1] = 0;
      v202[2] = 0;
      v203 = v202;
    }
    else
    {
      v203 = 0;
    }
    for ( i22 = 0; (int)i22 < *(int *)&HouseClass_Player.__pad_74[128]; i22 = (CellStruct *)((char *)i22 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_74[116]
                                                           + 4 * (unsigned int)i22)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_74[116] + 4 * (unsigned int)i22),
        v203);
      fprintf(v2, &stru_830620.__pad_579C[10796], i22);
    }
    fprintf(v2, &stru_830620.__pad_579C[9604], v385);
    fprintf(v2, &stru_830620.__pad_579C[10860], v339);
    fprintf(v2, &stru_830620.__pad_579C[10812], v286);
    __3_YAXPAX_Z(v203);
    v205 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v205 )
    {
      *v205 = 0;
      v205[1] = 0;
      v205[2] = 0;
      v206 = v205;
    }
    else
    {
      v206 = 0;
    }
    for ( i23 = 0; (int)i23 < *(int *)&HouseClass_Player.__pad_5568[22660]; i23 = (CellStruct *)((char *)i23 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22648]
                                                           + 4 * (unsigned int)i23)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22648] + 4 * (unsigned int)i23),
        v206);
      fprintf(v2, &stru_830620.__pad_579C[10796], i23);
    }
    fprintf(v2, &stru_830620.__pad_579C[9552], v386);
    fprintf(v2, &stru_830620.__pad_579C[10860], v340);
    fprintf(v2, &stru_830620.__pad_579C[10812], v287);
    __3_YAXPAX_Z(v206);
    v208 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v208 )
    {
      *v208 = 0;
      v208[1] = 0;
      v208[2] = 0;
      v209 = v208;
    }
    else
    {
      v209 = 0;
    }
    for ( i24 = 0; (int)i24 < *(int *)&stru_87C374.__pad_579C[22664]; i24 = (CellStruct *)((char *)i24 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[22652] + 4 * (unsigned int)i24)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22652] + 4 * (unsigned int)i24),
        v209);
      fprintf(v2, &stru_830620.__pad_579C[10796], i24);
    }
    fprintf(v2, &stru_830620.__pad_579C[9504], v387);
    fprintf(v2, &stru_830620.__pad_579C[10860], v341);
    fprintf(v2, &stru_830620.__pad_579C[10812], v288);
    __3_YAXPAX_Z(v209);
    v211 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v211 )
    {
      *v211 = 0;
      v211[1] = 0;
      v211[2] = 0;
      v212 = v211;
    }
    else
    {
      v212 = 0;
    }
    for ( i25 = 0; (int)i25 < *(int *)&stru_87C374.__pad_579C[22976]; i25 = (CellStruct *)((char *)i25 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[22964] + 4 * (unsigned int)i25)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22964] + 4 * (unsigned int)i25),
        v212);
      fprintf(v2, &stru_830620.__pad_579C[10796], i25);
    }
    fprintf(v2, &stru_830620.__pad_579C[9456], v388);
    fprintf(v2, &stru_830620.__pad_579C[10860], v342);
    fprintf(v2, &stru_830620.__pad_579C[10812], v289);
    __3_YAXPAX_Z(v212);
    v214 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v214 )
    {
      *v214 = 0;
      v214[1] = 0;
      v214[2] = 0;
      v215 = v214;
    }
    else
    {
      v215 = 0;
    }
    for ( i26 = 0; (int)i26 < *(int *)&stru_87C374.__pad_579C[23144]; i26 = (CellStruct *)((char *)i26 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[23132] + 4 * (unsigned int)i26)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[23132] + 4 * (unsigned int)i26),
        v215);
      fprintf(v2, &stru_830620.__pad_579C[10796], i26);
    }
    fprintf(v2, &stru_830620.__pad_579C[9400], v389);
    fprintf(v2, &stru_830620.__pad_579C[10860], v343);
    fprintf(v2, &stru_830620.__pad_579C[10812], v290);
    __3_YAXPAX_Z(v215);
    v217 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v217 )
    {
      *v217 = 0;
      v217[1] = 0;
      v217[2] = 0;
      v218 = v217;
    }
    else
    {
      v218 = 0;
    }
    for ( i27 = 0; (int)i27 < *(int *)&HouseClass_Player.__pad_3C[32]; i27 = (CellStruct *)((char *)i27 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_3C[20] + 4 * (unsigned int)i27)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_3C[20] + 4 * (unsigned int)i27),
        v218);
      fprintf(v2, &stru_830620.__pad_579C[10796], i27);
    }
    fprintf(v2, &stru_830620.__pad_579C[9352], v390);
    fprintf(v2, &stru_830620.__pad_579C[10860], v344);
    fprintf(v2, &stru_830620.__pad_579C[10812], v291);
    __3_YAXPAX_Z(v218);
    v220 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v220 )
    {
      *v220 = 0;
      v220[1] = 0;
      v220[2] = 0;
      v221 = v220;
    }
    else
    {
      v221 = 0;
    }
    for ( i28 = 0; (int)i28 < *(int *)&HouseClass_Player.__pad_74[24]; i28 = (CellStruct *)((char *)i28 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_74[12] + 4 * (unsigned int)i28)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_74[12] + 4 * (unsigned int)i28),
        v221);
      fprintf(v2, &stru_830620.__pad_579C[10796], i28);
    }
    fprintf(v2, &stru_830620.__pad_579C[9296], v391);
    fprintf(v2, &stru_830620.__pad_579C[10860], _50bm);
    fprintf(v2, &stru_830620.__pad_579C[10812], v292);
    __3_YAXPAX_Z(v221);
    v223 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v223 )
    {
      *v223 = 0;
      v223[1] = 0;
      v223[2] = 0;
      v224 = v223;
    }
    else
    {
      v224 = 0;
    }
    for ( i29 = 0; (int)i29 < g_GameCleanupState; i29 = (CellStruct *)((char *)i29 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)&dword_A8020C->__pad_0[4 * (unsigned int)i29] + 52))(
        *(unsigned int *)&dword_A8020C->__pad_0[4 * (unsigned int)i29],
        v224);
      fprintf(v2, &stru_830620.__pad_579C[10796], i29);
    }
    fprintf(v2, &stru_830620.__pad_579C[9236], v392);
    fprintf(v2, &stru_830620.__pad_579C[10860], _50bn);
    fprintf(v2, &stru_830620.__pad_579C[10812], v293);
    __3_YAXPAX_Z(v224);
    v226 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v226 )
    {
      *v226 = 0;
      v226[1] = 0;
      v226[2] = 0;
      v227 = v226;
    }
    else
    {
      v227 = 0;
    }
    for ( i30 = 0; (int)i30 < *(int *)HouseClass_Player.__pad_2C; i30 = (CellStruct *)((char *)i30 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_18[8] + 4 * (unsigned int)i30)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_18[8] + 4 * (unsigned int)i30),
        v227);
      fprintf(v2, &stru_830620.__pad_579C[10796], i30);
    }
    fprintf(v2, &stru_830620.__pad_579C[9188], v393);
    fprintf(v2, &stru_830620.__pad_579C[10860], v347);
    fprintf(v2, &stru_830620.__pad_579C[10812], v294);
    __3_YAXPAX_Z(v227);
    v229 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v229 )
    {
      *v229 = 0;
      v229[1] = 0;
      v229[2] = 0;
      v230 = v229;
    }
    else
    {
      v230 = 0;
    }
    for ( i31 = 0; (int)i31 < (int)g_BulletTypeInitState; i31 = (CellStruct *)((char *)i31 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)&dword_A83C84->__pad_0[4 * (unsigned int)i31] + 52))(
        *(unsigned int *)&dword_A83C84->__pad_0[4 * (unsigned int)i31],
        v230);
      fprintf(v2, &stru_830620.__pad_579C[10796], i31);
    }
    fprintf(v2, &stru_830620.__pad_579C[9140], v394);
    fprintf(v2, &stru_830620.__pad_579C[10860], v348);
    fprintf(v2, &stru_830620.__pad_579C[10812], v295);
    __3_YAXPAX_Z(v230);
    v232 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v232 )
    {
      *v232 = 0;
      v232[1] = 0;
      v232[2] = 0;
      v233 = v232;
    }
    else
    {
      v233 = 0;
    }
    for ( i32 = 0; (int)i32 < *(int *)&HouseClass_Player.__pad_5568[23196]; i32 = (CellStruct *)((char *)i32 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[23184]
                                                           + 4 * (unsigned int)i32)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[23184] + 4 * (unsigned int)i32),
        v233);
      fprintf(v2, &stru_830620.__pad_579C[10796], i32);
    }
    fprintf(v2, &stru_830620.__pad_579C[9084], v395);
    fprintf(v2, &stru_830620.__pad_579C[10860], v349);
    fprintf(v2, &stru_830620.__pad_579C[10812], v296);
    __3_YAXPAX_Z(v233);
    v235 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v235 )
    {
      *v235 = 0;
      v235[1] = 0;
      v235[2] = 0;
      v236 = v235;
    }
    else
    {
      v236 = 0;
    }
    for ( i33 = 0; (int)i33 < dword_B72618; i33 = (CellStruct *)((char *)i33 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)&dword_B7260C->__pad_0[4 * (unsigned int)i33] + 52))(
        *(unsigned int *)&dword_B7260C->__pad_0[4 * (unsigned int)i33],
        v236);
      fprintf(v2, &stru_830620.__pad_579C[10796], i33);
    }
    fprintf(v2, &stru_830620.__pad_579C[9032], v396);
    fprintf(v2, &stru_830620.__pad_579C[10860], v350);
    fprintf(v2, &stru_830620.__pad_579C[10812], v297);
    __3_YAXPAX_Z(v236);
    v238 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v238 )
    {
      *v238 = 0;
      v238[1] = 0;
      v238[2] = 0;
      v239 = v238;
    }
    else
    {
      v239 = 0;
    }
    for ( i34 = 0; (int)i34 < *(int *)&HouseClass_Player.__pad_5568[22900]; i34 = (CellStruct *)((char *)i34 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22888]
                                                           + 4 * (unsigned int)i34)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22888] + 4 * (unsigned int)i34),
        v239);
      fprintf(v2, &stru_830620.__pad_579C[10796], i34);
    }
    fprintf(v2, &stru_830620.__pad_579C[8980], v397);
    fprintf(v2, &stru_830620.__pad_579C[10860], v351);
    fprintf(v2, &stru_830620.__pad_579C[10812], v298);
    __3_YAXPAX_Z(v239);
    v241 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v241 )
    {
      *v241 = 0;
      v241[1] = 0;
      v241[2] = 0;
      v242 = v241;
    }
    else
    {
      v242 = 0;
    }
    for ( i35 = 0; (int)i35 < *(int *)&HouseClass_Player.__pad_3C[8]; i35 = (CellStruct *)((char *)i35 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(HouseClass_Player.field_38 + 4 * (unsigned int)i35) + 52))(
        *(unsigned int *)(HouseClass_Player.field_38 + 4 * (unsigned int)i35),
        v242);
      fprintf(v2, &stru_830620.__pad_579C[10796], i35);
    }
    fprintf(v2, &stru_830620.__pad_579C[8928], v398);
    fprintf(v2, &stru_830620.__pad_579C[10860], v352);
    fprintf(v2, &stru_830620.__pad_579C[10812], v299);
    __3_YAXPAX_Z(v242);
    v244 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v244 )
    {
      *v244 = 0;
      v244[1] = 0;
      v244[2] = 0;
      v245 = v244;
    }
    else
    {
      v245 = 0;
    }
    for ( i36 = 0; (int)i36 < g_BridgeCellPool; i36 = (CellStruct *)((char *)i36 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)&dword_ABCA14->__pad_0[4 * (unsigned int)i36] + 52))(
        *(unsigned int *)&dword_ABCA14->__pad_0[4 * (unsigned int)i36],
        v245);
      fprintf(v2, &stru_830620.__pad_579C[10796], i36);
    }
    fprintf(v2, &stru_830620.__pad_579C[8872], v399);
    fprintf(v2, &stru_830620.__pad_579C[10860], v353);
    fprintf(v2, &stru_830620.__pad_579C[10812], v300);
    __3_YAXPAX_Z(v245);
    v247 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v247 )
    {
      *v247 = 0;
      v247[1] = 0;
      v247[2] = 0;
      v248 = v247;
    }
    else
    {
      v248 = 0;
    }
    for ( i37 = 0; (int)i37 < dword_8B41A0; i37 = (CellStruct *)((char *)i37 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**((unsigned int **)unk_8B4194 + (unsigned int)i37) + 52))(
        *((unsigned int *)unk_8B4194 + (unsigned int)i37),
        v248);
      fprintf(v2, &stru_830620.__pad_579C[10796], i37);
    }
    fprintf(v2, &stru_830620.__pad_579C[8828], v400);
    fprintf(v2, &stru_830620.__pad_579C[10860], v354);
    fprintf(v2, &stru_830620.__pad_579C[10812], v301);
    __3_YAXPAX_Z(v248);
    v250 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v250 )
    {
      *v250 = 0;
      v250[1] = 0;
      v250[2] = 0;
      v251 = v250;
    }
    else
    {
      v251 = 0;
    }
    for ( i38 = 0; (int)i38 < *(int *)&stru_89E138.__pad_1600D[3]; i38 = (CellStruct *)((char *)i38 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_89E138.__pad_15FF8[12] + 4 * (unsigned int)i38)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_15FF8[12] + 4 * (unsigned int)i38),
        v251);
      fprintf(v2, &stru_830620.__pad_579C[10796], i38);
    }
    fprintf(v2, &stru_830620.__pad_579C[8780], v401);
    fprintf(v2, &stru_830620.__pad_579C[10860], v355);
    fprintf(v2, &stru_830620.__pad_579C[10812], v302);
    __3_YAXPAX_Z(v251);
    v253 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v253 )
    {
      *v253 = 0;
      v253[1] = 0;
      v253[2] = 0;
      v254 = v253;
    }
    else
    {
      v254 = 0;
    }
    for ( i39 = 0; (int)i39 < *(int *)stru_89E138.__pad_15FF8; i39 = (CellStruct *)((char *)i39 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_89E138.__pad_579C[67664] + 4 * (unsigned int)i39)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_579C[67664] + 4 * (unsigned int)i39),
        v254);
      fprintf(v2, &stru_830620.__pad_579C[10796], i39);
    }
    fprintf(v2, &stru_830620.__pad_579C[8732], v402);
    fprintf(v2, &stru_830620.__pad_579C[10860], v356);
    fprintf(v2, &stru_830620.__pad_579C[10812], v303);
    __3_YAXPAX_Z(v254);
    v256 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v256 )
    {
      *v256 = 0;
      v256[1] = 0;
      v256[2] = 0;
      v257 = v256;
    }
    else
    {
      v257 = 0;
    }
    for ( i40 = 0; (int)i40 < *(int *)&stru_B05488.__pad_579C[18644]; i40 = (CellStruct *)((char *)i40 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_B05488.__pad_579C[18632] + 4 * (unsigned int)i40)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[18632] + 4 * (unsigned int)i40),
        v257);
      fprintf(v2, &stru_830620.__pad_579C[10796], i40);
    }
    fprintf(v2, &stru_830620.__pad_579C[8684], v403);
    fprintf(v2, &stru_830620.__pad_579C[10860], v357);
    fprintf(v2, &stru_830620.__pad_579C[10812], v304);
    __3_YAXPAX_Z(v257);
    v259 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v259 )
    {
      *v259 = 0;
      v259[1] = 0;
      v259[2] = 0;
      v260 = v259;
    }
    else
    {
      v260 = 0;
    }
    for ( i41 = 0; (int)i41 < *(int *)&stru_89E138.__pad_566C[220]; i41 = (CellStruct *)((char *)i41 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_89E138.__pad_566C[208] + 4 * (unsigned int)i41)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_566C[208] + 4 * (unsigned int)i41),
        v260);
      fprintf(v2, &stru_830620.__pad_579C[10796], i41);
    }
    __3_YAXPAX_Z(v260);
    fclose(v2);
  }
  else
  {
    GetLastError();
    Debug::Log();
  }

}
  FILE *v1; // eax
  MouseClass *v2; // esi
  char *ModuleVersion; // eax
  char *ModuleInternalVersion; // eax
  CellStruct *v5; // eax
  char *Name; // eax
  unsigned int v7; // eax
  int i; // edi
  unsigned int *v9; // eax
  char *v10; // edi
  CellStruct *v11; // ebp
  int *v12; // edi
  IUnknown *v14; // eax
  int j; // ebp
  int v15; // edi
  char *v16; // eax
  char *v17; // ecx
  int v18; // ebp
  int v19; // eax
  unsigned int *v20; // edi
  int v21; // ebp
  unsigned int *Value; // eax
  int *v23; // ebp
  CellStruct **v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // edx
  void *v28; // eax
  int *v29; // ebp
  ParticleSystemClass *v30; // edx
  int v31; // eax
  char *v32; // edx
  int v33; // eax
  void *v34; // eax
  unsigned int *v35; // eax
  int v36; // ebx
  int v37; // ebp
  int v38; // eax
  int v39; // eax
  CellStruct **v40; // eax
  char *v41; // ecx
  int v42; // ebp
  int v43; // eax
  unsigned int *v44; // edi
  int v45; // ebp
  int *v46; // ebp
  ParticleSystemClass **v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // edx
  void *v51; // eax
  int *v52; // ebp
  CellStruct *v54; // edx
  int eax35; // eax
  void *v55; // eax
  int v56; // ebp
  int v57; // ebx
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  CellStruct **v63; // eax
  char *v64; // ecx
  int v65; // ebp
  int v66; // eax
  unsigned int *v67; // edi
  int v68; // ebp
  int v69; // ecx
  int *v70; // ebp
  CellStruct **v71; // eax
  int v72; // edx
  void *v73; // eax
  int v74; // ebp
  int v75; // eax
  int v76; // eax
  CellStruct **v77; // eax
  char *v78; // ecx
  int v79; // ebp
  int v80; // eax
  unsigned int *v81; // edi
  int v82; // ebp
  int v83; // ecx
  int *v84; // ebp
  CellStruct **v85; // eax
  int v86; // edx
  void *v87; // eax
  int v88; // ebp
  int v89; // eax
  int v90; // eax
  CellStruct **v91; // eax
  char *v92; // ebp
  unsigned int *v93; // edi
  int v94; // ebx
  int v95; // edx
  int v96; // eax
  int v97; // ebx
  int v98; // eax
  int v99; // eax
  void *v100; // eax
  char *v101; // eax
  void *v102; // eax
  char *v103; // eax
  int v104; // eax
  IUnknown *v105; // ecx
  char *v106; // eax
  unsigned int *v107; // edi
  CellStruct *v109; // ebx
  int edx78; // edx
  int v110; // eax
  int v111; // ebx
  int v112; // eax
  int v113; // ebx
  int v114; // eax
  int v115; // ebx
  int v116; // eax
  int v117; // ebx
  int v118; // eax
  int v119; // ebx
  int v120; // eax
  int v121; // ebx
  int v122; // eax
  int v123; // ebx
  int v124; // eax
  int v125; // ebx
  int v126; // eax
  int v127; // ebx
  int v128; // eax
  int v129; // eax
  IUnknown *v130; // ecx
  unsigned __int8 *v131; // edi
  unsigned int *v132; // eax
  void *v133; // ebp
  CellStruct *mm; // edi
  unsigned int *v135; // eax
  void *v136; // ebp
  CellStruct *nn; // edi
  unsigned int *v138; // eax
  void *v139; // ebp
  CellStruct *i1; // edi
  unsigned int *v141; // eax
  void *v142; // ebp
  CellStruct *i2; // edi
  unsigned int *v144; // eax
  void *v145; // ebp
  CellStruct *i3; // edi
  unsigned int *v147; // eax
  void *v148; // ebp
  CellStruct *i4; // edi
  unsigned int *v150; // eax
  void *v151; // ebp
  CellStruct *i5; // edi
  unsigned int *v153; // eax
  void *v154; // ebp
  CellStruct *i6; // edi
  unsigned int *v156; // eax
  void *v157; // ebp
  CellStruct *i7; // edi
  unsigned int *v159; // eax
  void *v160; // ebp
  CellStruct *i8; // edi
  unsigned int *v162; // eax
  void *v163; // ebp
  CellStruct *i9; // ebx
  unsigned int *v165; // edi
  unsigned int *v166; // eax
  void *v167; // ebp
  CellStruct *i10; // edi
  unsigned int *v169; // eax
  void *v170; // ebp
  CellStruct *i11; // edi
  unsigned int *v172; // eax
  void *v173; // ebp
  CellStruct *i12; // edi
  unsigned int *v175; // eax
  void *v176; // ebp
  CellStruct *i13; // edi
  unsigned int *v178; // eax
  void *v179; // ebp
  CellStruct *i14; // edi
  unsigned int *v181; // eax
  void *v182; // ebp
  CellStruct *i15; // edi
  unsigned int *v184; // eax
  void *v185; // ebp
  CellStruct *i16; // edi
  unsigned int *v187; // eax
  void *v188; // ebp
  CellStruct *i17; // edi
  unsigned int *v190; // eax
  void *v191; // ebp
  CellStruct *i18; // edi
  unsigned int *v193; // eax
  void *v194; // ebp
  CellStruct *i19; // edi
  unsigned int *v196; // eax
  void *v197; // ebp
  CellStruct *i20; // edi
  unsigned int *v199; // eax
  void *v200; // ebp
  CellStruct *i21; // edi
  unsigned int *v202; // eax
  void *v203; // ebp
  CellStruct *i22; // edi
  unsigned int *v205; // eax
  void *v206; // ebp
  CellStruct *i23; // edi
  unsigned int *v208; // eax
  void *v209; // ebp
  CellStruct *i24; // edi
  unsigned int *v211; // eax
  void *v212; // ebp
  CellStruct *i25; // edi
  unsigned int *v214; // eax
  void *v215; // ebp
  CellStruct *i26; // edi
  unsigned int *v217; // eax
  void *v218; // ebp
  CellStruct *i27; // edi
  unsigned int *v220; // eax
  void *v221; // ebp
  CellStruct *i28; // edi
  unsigned int *v223; // eax
  void *v224; // ebp
  CellStruct *i29; // edi
  unsigned int *v226; // eax
  void *v227; // ebp
  CellStruct *i30; // edi
  unsigned int *v229; // eax
  void *v230; // ebp
  CellStruct *i31; // edi
  unsigned int *v232; // eax
  void *v233; // ebp
  CellStruct *i32; // edi
  unsigned int *v235; // eax
  void *v236; // ebp
  CellStruct *i33; // edi
  unsigned int *v238; // eax
  void *v239; // ebp
  CellStruct *i34; // edi
  unsigned int *v241; // eax
  void *v242; // ebp
  CellStruct *i35; // edi
  unsigned int *v244; // eax
  void *v245; // ebp
  CellStruct *i36; // edi
  unsigned int *v247; // eax
  void *v248; // ebp
  CellStruct *i37; // edi
  unsigned int *v250; // eax
  void *v251; // ebp
  CellStruct *i38; // edi
  unsigned int *v253; // eax
  void *v254; // ebp
  CellStruct *i39; // edi
  unsigned int *v256; // eax
  void *v257; // ebp
  CellStruct *i40; // edi
  unsigned int *v259; // eax
  void *v260; // ebp
  CellStruct *i41; // edi
  CellStruct *v262; // [esp+48h] [ebp-450h]
  CellStruct *v263; // [esp+48h] [ebp-450h]
  CellStruct *v264; // [esp+48h] [ebp-450h]
  CellStruct *v265; // [esp+48h] [ebp-450h]
  CellStruct *v266; // [esp+48h] [ebp-450h]
  CellStruct *v267; // [esp+48h] [ebp-450h]
  CellStruct *v268; // [esp+48h] [ebp-450h]
  CellStruct *v269; // [esp+48h] [ebp-450h]
  CellStruct *v270; // [esp+48h] [ebp-450h]
  CellStruct *v271; // [esp+48h] [ebp-450h]
  CellStruct *v272; // [esp+48h] [ebp-450h]
  CellStruct *v273; // [esp+48h] [ebp-450h]
  CellStruct *v274; // [esp+48h] [ebp-450h]
  CellStruct *v275; // [esp+48h] [ebp-450h]
  CellStruct *v276; // [esp+48h] [ebp-450h]
  CellStruct *v277; // [esp+48h] [ebp-450h]
  CellStruct *v278; // [esp+48h] [ebp-450h]
  CellStruct *v279; // [esp+48h] [ebp-450h]
  CellStruct *v280; // [esp+48h] [ebp-450h]
  CellStruct *v281; // [esp+48h] [ebp-450h]
  CellStruct *v282; // [esp+48h] [ebp-450h]
  CellStruct *v283; // [esp+48h] [ebp-450h]
  CellStruct *v284; // [esp+48h] [ebp-450h]
  CellStruct *v285; // [esp+48h] [ebp-450h]
  CellStruct *v286; // [esp+48h] [ebp-450h]
  CellStruct *v287; // [esp+48h] [ebp-450h]
  CellStruct *v288; // [esp+48h] [ebp-450h]
  CellStruct *v289; // [esp+48h] [ebp-450h]
  CellStruct *v290; // [esp+48h] [ebp-450h]
  CellStruct *v291; // [esp+48h] [ebp-450h]
  CellStruct *v292; // [esp+48h] [ebp-450h]
  CellStruct *v293; // [esp+48h] [ebp-450h]
  CellStruct *v294; // [esp+48h] [ebp-450h]
  CellStruct *v295; // [esp+48h] [ebp-450h]
  CellStruct *v296; // [esp+48h] [ebp-450h]
  CellStruct *v297; // [esp+48h] [ebp-450h]
  CellStruct *v298; // [esp+48h] [ebp-450h]
  CellStruct *v299; // [esp+48h] [ebp-450h]
  CellStruct *v300; // [esp+48h] [ebp-450h]
  CellStruct *v301; // [esp+48h] [ebp-450h]
  CellStruct *v302; // [esp+48h] [ebp-450h]
  CellStruct *v303; // [esp+48h] [ebp-450h]
  CellStruct *v304; // [esp+48h] [ebp-450h]
  IUnknown *v305; // [esp+4Ch] [ebp-44Ch]
  CellStruct *v306; // [esp+50h] [ebp-448h]
  CellStruct *v307; // [esp+50h] [ebp-448h]
  CellStruct *v308; // [esp+50h] [ebp-448h]
  CellStruct *v309; // [esp+50h] [ebp-448h]
  CellStruct *v310; // [esp+50h] [ebp-448h]
  CellStruct *v311; // [esp+50h] [ebp-448h]
  CellStruct *v312; // [esp+50h] [ebp-448h]
  CellStruct *v313; // [esp+50h] [ebp-448h]
  CellStruct *v314; // [esp+50h] [ebp-448h]
  CellStruct *v315; // [esp+50h] [ebp-448h]
  CellStruct *v316; // [esp+50h] [ebp-448h]
  CellStruct *v317; // [esp+50h] [ebp-448h]
  CellStruct *v318; // [esp+50h] [ebp-448h]
  CellStruct *v319; // [esp+50h] [ebp-448h]
  CellStruct *v320; // [esp+50h] [ebp-448h]
  CellStruct *v321; // [esp+50h] [ebp-448h]
  CellStruct *v322; // [esp+50h] [ebp-448h]
  CellStruct *v323; // [esp+50h] [ebp-448h]
  CellStruct *v324; // [esp+50h] [ebp-448h]
  CellStruct *v325; // [esp+50h] [ebp-448h]
  CellStruct *v326; // [esp+50h] [ebp-448h]
  CellStruct *v327; // [esp+50h] [ebp-448h]
  CellStruct *v328; // [esp+50h] [ebp-448h]
  CellStruct *v329; // [esp+50h] [ebp-448h]
  CellStruct *v330; // [esp+50h] [ebp-448h]
  CellStruct *v331; // [esp+50h] [ebp-448h]
  CellStruct *v332; // [esp+50h] [ebp-448h]
  CellStruct *v333; // [esp+50h] [ebp-448h]
  CellStruct *v334; // [esp+50h] [ebp-448h]
  CellStruct *v335; // [esp+50h] [ebp-448h]
  CellStruct *v336; // [esp+50h] [ebp-448h]
  CellStruct *v337; // [esp+50h] [ebp-448h]
  CellStruct *v338; // [esp+50h] [ebp-448h]
  CellStruct *v339; // [esp+50h] [ebp-448h]
  CellStruct *v340; // [esp+50h] [ebp-448h]
  CellStruct *v341; // [esp+50h] [ebp-448h]
  CellStruct *v342; // [esp+50h] [ebp-448h]
  CellStruct *v343; // [esp+50h] [ebp-448h]
  CellStruct *v344; // [esp+50h] [ebp-448h]
  CellStruct *_50bm; // [esp+50h] [ebp-448h]
  CellStruct *_50bn; // [esp+50h] [ebp-448h]
  CellStruct *v347; // [esp+50h] [ebp-448h]
  CellStruct *v348; // [esp+50h] [ebp-448h]
  CellStruct *v349; // [esp+50h] [ebp-448h]
  CellStruct *v350; // [esp+50h] [ebp-448h]
  CellStruct *v351; // [esp+50h] [ebp-448h]
  CellStruct *v352; // [esp+50h] [ebp-448h]
  CellStruct *v353; // [esp+50h] [ebp-448h]
  CellStruct *v354; // [esp+50h] [ebp-448h]
  CellStruct *v355; // [esp+50h] [ebp-448h]
  CellStruct *v356; // [esp+50h] [ebp-448h]
  CellStruct *v357; // [esp+50h] [ebp-448h]
  CellStruct *v358; // [esp+54h] [ebp-444h]
  CellStruct *v359; // [esp+58h] [ebp-440h]
  CellStruct *v360; // [esp+58h] [ebp-440h]
  CellStruct *v361; // [esp+58h] [ebp-440h]
  CellStruct *v362; // [esp+58h] [ebp-440h]
  CellStruct *v363; // [esp+58h] [ebp-440h]
  CellStruct *v364; // [esp+58h] [ebp-440h]
  CellStruct *v365; // [esp+58h] [ebp-440h]
  CellStruct *v366; // [esp+58h] [ebp-440h]
  CellStruct *v367; // [esp+58h] [ebp-440h]
  CellStruct *v368; // [esp+58h] [ebp-440h]
  CellStruct *v369; // [esp+58h] [ebp-440h]
  CellStruct *v370; // [esp+58h] [ebp-440h]
  CellStruct *v371; // [esp+58h] [ebp-440h]
  CellStruct *v372; // [esp+58h] [ebp-440h]
  CellStruct *v373; // [esp+58h] [ebp-440h]
  CellStruct *v374; // [esp+58h] [ebp-440h]
  CellStruct *v375; // [esp+58h] [ebp-440h]
  CellStruct *v376; // [esp+58h] [ebp-440h]
  CellStruct *v377; // [esp+58h] [ebp-440h]
  CellStruct *v378; // [esp+58h] [ebp-440h]
  CellStruct *v379; // [esp+58h] [ebp-440h]
  CellStruct *v380; // [esp+58h] [ebp-440h]
  CellStruct *v381; // [esp+58h] [ebp-440h]
  CellStruct *v382; // [esp+58h] [ebp-440h]
  CellStruct *v383; // [esp+58h] [ebp-440h]
  CellStruct *v384; // [esp+58h] [ebp-440h]
  CellStruct *v385; // [esp+58h] [ebp-440h]
  CellStruct *v386; // [esp+58h] [ebp-440h]
  CellStruct *v387; // [esp+58h] [ebp-440h]
  CellStruct *v388; // [esp+58h] [ebp-440h]
  CellStruct *v389; // [esp+58h] [ebp-440h]
  CellStruct *v390; // [esp+58h] [ebp-440h]
  CellStruct *v391; // [esp+58h] [ebp-440h]
  CellStruct *v392; // [esp+58h] [ebp-440h]
  CellStruct *v393; // [esp+58h] [ebp-440h]
  CellStruct *v394; // [esp+58h] [ebp-440h]
  CellStruct *v395; // [esp+58h] [ebp-440h]
  CellStruct *v396; // [esp+58h] [ebp-440h]
  CellStruct *v397; // [esp+58h] [ebp-440h]
  CellStruct *v398; // [esp+58h] [ebp-440h]
  CellStruct *v399; // [esp+58h] [ebp-440h]
  CellStruct *v400; // [esp+58h] [ebp-440h]
  CellStruct *v401; // [esp+58h] [ebp-440h]
  CellStruct *v402; // [esp+58h] [ebp-440h]
  CellStruct *v403; // [esp+58h] [ebp-440h]
  CellStruct *aP2; // [esp+68h] [ebp-430h]
  CellStruct *aP2a; // [esp+68h] [ebp-430h]
  CellStruct *aP2b; // [esp+68h] [ebp-430h]
  CellStruct *aP2c; // [esp+68h] [ebp-430h]
  CellStruct *aP2d; // [esp+68h] [ebp-430h]
  CellStruct *aP2e; // [esp+68h] [ebp-430h]
  CellStruct *v410; // [esp+6Ch] [ebp-42Ch]
  CellStruct *v411; // [esp+6Ch] [ebp-42Ch]
  CellStruct *v412; // [esp+6Ch] [ebp-42Ch]
  CellStruct *v413; // [esp+6Ch] [ebp-42Ch]
  CellStruct *k; // [esp+6Ch] [ebp-42Ch]
  char v415; // [esp+77h] [ebp-421h] BYREF
  char *v416; // [esp+78h] [ebp-420h]
  CellStruct *v417; // [esp+7Ch] [ebp-41Ch]
  char *v418; // [esp+80h] [ebp-418h]
  int v419; // [esp+84h] [ebp-414h] BYREF
  IUnknown *TextBufferEntry; // [esp+88h] [ebp-410h]
  int v421; // [esp+8Ch] [ebp-40Ch]
  int v422; // [esp+90h] [ebp-408h]
  int v423; // [esp+94h] [ebp-404h]
  int v424; // [esp+98h] [ebp-400h]
  char *v425; // [esp+9Ch] [ebp-3FCh]
  ParticleSystemClass *v345; // [esp+A0h] [ebp-3F8h]
  ParticleSystemClass *v346; // [esp+A4h] [ebp-3F4h] BYREF
  int v428; // [esp+A8h] [ebp-3F0h] BYREF
  unsigned int v429[3]; // [esp+ACh] [ebp-3ECh] BYREF
  int v430; // [esp+B8h] [ebp-3E0h]
  int v431; // [esp+BCh] [ebp-3DCh]
  int v432; // [esp+C0h] [ebp-3D8h] BYREF
  unsigned __int8 *v433; // [esp+C4h] [ebp-3D4h]
  char v434[4]; // [esp+C8h] [ebp-3D0h] BYREF
  char v435[4]; // [esp+CCh] [ebp-3CCh] BYREF
  int v436; // [esp+D0h] [ebp-3C8h]
  char v437[4]; // [esp+D4h] [ebp-3C4h] BYREF
  char v438[8]; // [esp+D8h] [ebp-3C0h] BYREF
  char v439[4]; // [esp+E0h] [ebp-3B8h] BYREF
  char v440[8]; // [esp+E4h] [ebp-3B4h] BYREF
  char v441[8]; // [esp+ECh] [ebp-3ACh] BYREF
  char v442[4]; // [esp+F4h] [ebp-3A4h] BYREF
  int v443; // [esp+F8h] [ebp-3A0h] BYREF
  int v444; // [esp+FCh] [ebp-39Ch] BYREF
  char v445[8]; // [esp+100h] [ebp-398h] BYREF
  char v446[4]; // [esp+108h] [ebp-390h] BYREF
  char v447[12]; // [esp+10Ch] [ebp-38Ch] BYREF
  char v448[128]; // [esp+118h] [ebp-380h] BYREF
  char Destination[128]; // [esp+198h] [ebp-300h] BYREF
  char v450[128]; // [esp+218h] [ebp-280h] BYREF
  char Buffer[512]; // [esp+298h] [ebp-200h] BYREF

  v433 = this;
  sprintf(Buffer, (ObjectClass *)&stru_830620.__pad_579C[12532], *(INIClass **)(HouseClass_Player.field_0 + 48));
  Debug::Log();
  TextBufferEntry = (IUnknown *)GetTextBufferEntry(4);
  TextBuffer::Init(TextBufferEntry);
  Network::validateConnection(TextBufferEntry, 0, 0);
  v1 = fopen(Buffer, Mode);
  v2 = (MouseClass *)v1;
  if ( v1 )
  {
    fprintf((MouseClass *)v1, &stru_830620.__pad_579C[12420], v359);
    ModuleVersion = GetModuleVersion();
    fprintf(v2, &stru_830620.__pad_579C[12404], (CellStruct *)ModuleVersion);
    ModuleInternalVersion = GetModuleInternalVersion((int)&HouseClass_Player.__pad_5568[23084]);
    fprintf(v2, &stru_830620.__pad_579C[12380], (CellStruct *)ModuleInternalVersion);
    v448[0] = 0;
    Time::FormatDate(v448);
    String::CopyConstant(Destination);
    v5 = (CellStruct *)String::FormatDword(v450);
    fprintf(v2, (const char *const)stru_821F08.headNode, v5);
    v432 = 5;
    v415 = 0;
    GetVersionString(&v432, &v415, 0, 0);
    Name = PlayerType::GetName();
    fprintf(v2, g_Str_Trace_CPU__s__MMX__s__Vendor_, (CellStruct *)Name);
    fprintf(v2, g_Str_Trace_Frames_, *(CellStruct **)&HouseClass_Player.__pad_5568[23248]);
    if ( g_FrameCounter_Samples )
      v7 = g_FrameCounter_Total / (unsigned int)g_FrameCounter_Samples;
    else
      v7 = 0;
    fprintf(v2, g_Str_Trace_Average_FPS_, (CellStruct *)v7);
    fprintf(v2, g_Str_Trace_Max_MaxAhead_, *(CellStruct **)&HouseClass_Player.__pad_5568[8884]);
    fprintf(v2, g_Str_Trace_Latency_setting_, *(CellStruct **)&HouseClass_Player.__pad_5568[18664]);
    fprintf(v2, g_Str_Trace_Game_speed_setting_, *(CellStruct **)&HouseClass_Player.__pad_5568[22700]);
    fprintf(v2, &stru_830620.__pad_579C[12360], *(CellStruct **)&HouseClass_Player.__pad_5568[8864]);
    if ( *(unsigned int *)&stru_87C374.__pad_579C[23320] )
    {
      for ( i = 0;
            i < (*(int (**)(unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[23320] + 72))(*(unsigned int *)&stru_87C374.__pad_579C[23320]);
            ++i )
      {
        v9 = (unsigned int *)(*(int (**)(unsigned int, int))(**(unsigned int **)&stru_87C374.__pad_579C[23320] + 76))(
                         *(unsigned int *)&stru_87C374.__pad_579C[23320],
                         i);
        if ( v9 )
          fprintf(v2, g_Str_Trace_Local_address___d__d__d, (CellStruct *)(unsigned __int8)*v9);
      }
    }
    v10 = &HouseClass_Player.__pad_5568[8976];
    do
    {
      if ( *(v10 - 80) )
      {
        Network::CopyAddress((unsigned int *)v10 + 3, &v419, (int)v429);
        fprintf(v2, g_Str_Trace_Name_, (CellStruct *)(v10 - 80));
        fprintf(v2, &stru_830620.__pad_579C[12336], (CellStruct *)LOBYTE(v429[0]));
        fprintf(v2, g_Str_Trace_Max_avg_round_trip_, *(CellStruct **)v10);
        fprintf(v2, g_Str_Trace_Max_round_trip_, *((CellStruct **)v10 - 4));
        fprintf(v2, g_Str_Trace_Resends_, *((CellStruct **)v10 - 3));
        fprintf(v2, g_Str_Trace_Frame_sync_stalls_, *((CellStruct **)v10 + 1));
        fprintf(v2, g_Str_Trace_Command_cound_stalls_, *((CellStruct **)v10 + 2));
        fprintf(v2, g_Str_Trace_Lost_, *((CellStruct **)v10 - 2));
        fprintf(v2, g_Str_Trace_Percent_lost_, *((CellStruct **)v10 - 1));
      }
      v10 += 104;
    }
    while ( (int)v10 < (int)&HouseClass_Player.__pad_5568[9808] );
    v11 = 0;
    v12 = dword_B04474;
    do
    {
      fprintf(v2, &stru_830620.__pad_579C[12324], v11);
      ++v12;
      v11 = (CellStruct *)((char *)v11 + 1);
    }
    while ( (int)v12 < (int)&dword_B04874 );
    fprintf(v2, &stru_830620.__pad_579C[12300], v360);
    v14 = HouseClass_Count;
    for ( j = 0; j < (int)HouseClass_Count; ++j )
    {
      *(&g_MatrixTransformState + 6395) = 0;
      v15 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * j];
      v16 = ToWideStringChar((IUnknown *)(v15 + 90154));
      fprintf(v2, &stru_830620.__pad_579C[12184], (CellStruct *)v16);
      Debug::Printf((IUnknown *)(*(unsigned int *)(v15 + 52) + 36));
      v14 = HouseClass_Count;
    }
    v17 = 0;
    v410 = 0;
    if ( (int)v14 > 0 )
    {
      do
      {
        v18 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * (unsigned int)v17];
        *(&g_MatrixTransformState + 6395) = 0;
        v424 = v18;
        fprintf(v2, &stru_830620.__pad_579C[12108], (CellStruct *)(*(unsigned int *)(v18 + 52) + 36));
        v19 = 0;
        for ( aP2 = 0; v19 < *(int *)&HouseClass_Player.__pad_74[56]; aP2 = (CellStruct *)v19 )
        {
          v20 = *(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_74[44] + 4 * v19);
          if ( v20[135] == v18 )
          {
            v21 = v20[39];
            v422 = v20[40];
            v423 = v20[41];
            Value = ProgressTimer::GetValue((unsigned short *)v20 + 452, (IUnknown *)&v419);
            *(&g_MatrixTransformState + 6395) = (CoordStruct *)(v21 / 10
                                                              + ((v422 / 10) << 16)
                                                              + (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1)
                                                              + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                              + 2 * (unsigned int)*(&g_MatrixTransformState + 6395));
            v23 = (int *)v20[173];
            v417 = 0;
            v416 = 0;
            if ( v23 )
            {
              v24 = (CellStruct **)(*(int (**)(int *, unsigned int *))(*v23 + 72))(v23, v429);
              v25 = *v23;
              v417 = *v24;
              v26 = (*(int (**)(int *, char *))(v25 + 72))(v23, v445);
              v27 = *v23;
              v416 = *(char **)(v26 + 4);
              v28 = (void *)(*(int (**)(int *))(v27 + 44))(v23);
              AbstractType::FindName(v28);
            }
            v29 = (int *)v20[361];
            v345 = 0;
            v418 = 0;
            v425 = &stru_830620.__pad_579C[5608];
            if ( v29 )
            {
              v30 = *(ParticleSystemClass **)(*(int (**)(int *, char *))(*v29 + 72))(v29, v447);
              v31 = *v29;
              v345 = v30;
              v32 = *(char **)((*(int (**)(int *, char *))(v31 + 72))(v29, v437) + 4);
              v33 = *v29;
              v418 = v32;
              v34 = (void *)(*(int (**)(int *))(v33 + 44))(v29);
              v425 = AbstractType::FindName(v34);
            }
            v35 = ProgressTimer::GetValue((unsigned short *)v20 + 452, (IUnknown *)&v428);
            v36 = v20[432];
            v37 = (unsigned __int8)((unsigned int)((*v35 >> 7) + 1) >> 1);
            Math::RoundToInt(*((double *)v20 + 175) * 256.0);
            v38 = (*(int (**)(unsigned int *, unsigned int, int))(*v20 + 388))(v20, *(unsigned int *)(v36 + 3576), v36 + 36);
            v39 = (*(int (**)(unsigned int *, char *, int, int))(*v20 + 72))(v20, v442, v37, v38);
            v40 = (CellStruct **)(*(int (**)(unsigned int *, char *, unsigned int))(*v20 + 72))(
                                   v20,
                                   v440,
                                   *(unsigned int *)(v39 + 4));
            fprintf(v2, &stru_830620.__pad_579C[12012], *v40);
            v18 = v424;
            v19 = (int)aP2;
          }
          ++v19;
        }
        Debug::Printf((IUnknown *)(*(unsigned int *)(v18 + 52) + 36));
        v14 = HouseClass_Count;
        v17 = (char *)&v410->field_0 + 1;
        v410 = (CellStruct *)((char *)v410 + 1);
      }
      while ( (int)v410 < (int)HouseClass_Count );
    }
    v41 = 0;
    v411 = 0;
    if ( (int)v14 > 0 )
    {
      do
      {
        v42 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * (unsigned int)v41];
        *(&g_MatrixTransformState + 6395) = 0;
        v419 = v42;
        fprintf(v2, &stru_830620.__pad_579C[11940], (CellStruct *)(*(unsigned int *)(v42 + 52) + 36));
        v43 = 0;
        for ( aP2a = 0; v43 < *(int *)&stru_89E138.__pad_579C[67652]; aP2a = (CellStruct *)v43 )
        {
          v44 = *(unsigned int **)(*(unsigned int *)&stru_89E138.__pad_579C[67640] + 4 * v43);
          if ( v44[135] == v42 )
          {
            v421 = v44[39];
            v422 = v44[40];
            v423 = v44[41];
            v45 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v44 + 452, (IUnknown *)&v443) >> 7)
                                                 + 1) >> 1);
            v424 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v44 + 464, (IUnknown *)&v444) >> 7)
                                                  + 1) >> 1);
            v418 = &stru_830620.__pad_579C[5608];
            v345 = 0;
            *(&g_MatrixTransformState + 6395) = (CoordStruct *)(v424
                                                              + v45
                                                              + ((v422 / 10) << 16)
                                                              + v421 / 10
                                                              + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                              + 2 * (unsigned int)*(&g_MatrixTransformState + 6395));
            v46 = (int *)v44[173];
            v425 = 0;
            if ( v46 )
            {
              v47 = (ParticleSystemClass **)(*(int (**)(int *, char *))(*v46 + 72))(v46, v439);
              v48 = *v46;
              v345 = *v47;
              v49 = (*(int (**)(int *, char *))(v48 + 72))(v46, v441);
              v50 = *v46;
              v425 = *(char **)(v49 + 4);
              v51 = (void *)(*(int (**)(int *))(v50 + 44))(v46);
              v418 = AbstractType::FindName(v51);
            }
            v52 = (int *)v44[361];
            v417 = 0;
            v416 = &stru_830620.__pad_579C[5608];
            if ( v52 )
            {
              v54 = *(CellStruct **)(*(int (**)(int *, char *))(*v52 + 72))(v52, v437);
              eax35 = *v52;
              v417 = v54;
              (*(int (**)(int *, char *))(eax35 + 72))(v52, v447);
              v55 = (void *)(*(int (**)(int *))(*v52 + 44))(v52);
              v416 = AbstractType::FindName(v55);
            }
            if ( !v44[413] )
              WinAPI::Wrapper(-2147467261);
            v424 = v44[413];
            if ( !v424 )
              WinAPI::Wrapper(-2147467261);
            v430 = v44[413];
            if ( !v430 )
              WinAPI::Wrapper(-2147467261);
            v431 = v44[413];
            v428 = v44[433] + 36;
            v56 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v44 + 464, (IUnknown *)&v346) >> 7)
                                                 + 1) >> 1);
            v57 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v44 + 452, (IUnknown *)v429) >> 7)
                                                 + 1) >> 1);
            v58 = (*(int (**)(int))(*(unsigned int *)v424 + 196))(v424);
            v59 = (*(int (**)(int, int))(*(unsigned int *)v430 + 192))(v430, v58);
            v60 = (*(int (**)(int, int))(*(unsigned int *)v432 + 188))(v432, v59);
            v61 = (*(int (**)(unsigned int *, unsigned int, unsigned int, IUnknown *, int, ParticleSystemClass *, char *, int, char *, int))(*v44 + 388))(
                    v44,
                    *(unsigned int *)(v44[433] + 3576),
                    v429[1],
                    TextBufferEntry,
                    v428,
                    v346,
                    v418,
                    v419,
                    v416,
                    v60);
            v62 = (*(int (**)(unsigned int *, char *, int, int, int))(*v44 + 72))(v44, v446, v57, v56, v61);
            v63 = (CellStruct **)(*(int (**)(unsigned int *, char *, unsigned int))(*v44 + 72))(
                                   v44,
                                   v435,
                                   *(unsigned int *)(v62 + 4));
            fprintf(v2, &stru_830620.__pad_579C[11808], *v63);
            v42 = v419;
            v43 = (int)aP2a;
          }
          ++v43;
        }
        Debug::Printf((IUnknown *)(*(unsigned int *)(v42 + 52) + 36));
        v14 = HouseClass_Count;
        v41 = (char *)&v411->field_0 + 1;
        v411 = (CellStruct *)((char *)v411 + 1);
      }
      while ( (int)v411 < (int)HouseClass_Count );
    }
    v64 = 0;
    v412 = 0;
    if ( (int)v14 > 0 )
    {
      do
      {
        v65 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * (unsigned int)v64];
        *(&g_MatrixTransformState + 6395) = 0;
        v419 = v65;
        fprintf(v2, &stru_830620.__pad_579C[11732], (CellStruct *)(*(unsigned int *)(v65 + 52) + 36));
        v66 = 0;
        for ( aP2b = 0; v66 < *(int *)&HouseClass_Player.__pad_5568[22684]; aP2b = (CellStruct *)v66 )
        {
          v67 = *(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22672] + 4 * v66);
          if ( v67[135] == v65 )
          {
            v68 = v67[39];
            v422 = v67[40];
            v423 = v67[41];
            v69 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v67 + 452, (IUnknown *)v429) >> 7)
                                                 + 1) >> 1);
            v416 = &stru_830620.__pad_579C[5608];
            *(&g_MatrixTransformState + 6395) = (CoordStruct *)(v68 / 10
                                                              + ((v422 / 10) << 16)
                                                              + v69
                                                              + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                              + 2 * (unsigned int)*(&g_MatrixTransformState + 6395));
            v70 = (int *)v67[173];
            v417 = 0;
            if ( v70 )
            {
              v71 = (CellStruct **)(*(int (**)(int *, char *))(*v70 + 72))(v70, v434);
              v72 = *v70;
              v417 = *v71;
              (*(int (**)(int *, char *))(v72 + 72))(v70, v439);
              v73 = (void *)(*(int (**)(int *))(*v70 + 44))(v70);
              v416 = AbstractType::FindName(v73);
            }
            v74 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v67 + 452, (IUnknown *)&v346) >> 7)
                                                 + 1) >> 1);
            v75 = (*(int (**)(unsigned int *, unsigned int, int))(*v67 + 388))(
                    v67,
                    *(unsigned int *)(v67[328] + 3576),
                    v67[328] + 36);
            v76 = (*(int (**)(unsigned int *, char *, int, int))(*v67 + 72))(v67, v442, v74, v75);
            v77 = (CellStruct **)(*(int (**)(unsigned int *, char *, unsigned int))(*v67 + 72))(
                                   v67,
                                   v438,
                                   *(unsigned int *)(v76 + 4));
            fprintf(v2, &stru_830620.__pad_579C[11664], *v77);
            v65 = v419;
            v66 = (int)aP2b;
          }
          ++v66;
        }
        Debug::Printf((IUnknown *)(*(unsigned int *)(v65 + 52) + 36));
        v14 = HouseClass_Count;
        v64 = (char *)&v412->field_0 + 1;
        v412 = (CellStruct *)((char *)v412 + 1);
      }
      while ( (int)v412 < (int)HouseClass_Count );
    }
    v78 = 0;
    v413 = 0;
    if ( (int)v14 > 0 )
    {
      do
      {
        v79 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * (unsigned int)v78];
        *(&g_MatrixTransformState + 6395) = 0;
        v419 = v79;
        fprintf(v2, &stru_830620.__pad_579C[11584], (CellStruct *)(*(unsigned int *)(v79 + 52) + 36));
        v80 = 0;
        for ( aP2c = 0; v80 < *(int *)&HouseClass_Player.__pad_5568[20716]; aP2c = (CellStruct *)v80 )
        {
          v81 = *(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[20704] + 4 * v80);
          if ( v81[135] == v79 )
          {
            v82 = v81[39];
            v422 = v81[40];
            v423 = v81[41];
            v83 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v81 + 452, (IUnknown *)v429) >> 7)
                                                 + 1) >> 1);
            v416 = &stru_830620.__pad_579C[5608];
            *(&g_MatrixTransformState + 6395) = (CoordStruct *)(v82 / 10
                                                              + ((v422 / 10) << 16)
                                                              + v83
                                                              + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                              + 2 * (unsigned int)*(&g_MatrixTransformState + 6395));
            v84 = (int *)v81[173];
            v417 = 0;
            if ( v84 )
            {
              v85 = (CellStruct **)(*(int (**)(int *, char *))(*v84 + 72))(v84, v434);
              v86 = *v84;
              v417 = *v85;
              (*(int (**)(int *, char *))(v86 + 72))(v84, v439);
              v87 = (void *)(*(int (**)(int *))(*v84 + 44))(v84);
              v416 = AbstractType::FindName(v87);
            }
            v88 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v81 + 452, (IUnknown *)&v346) >> 7)
                                                 + 1) >> 1);
            v89 = (*(int (**)(unsigned int *, unsigned int, int))(*v81 + 388))(
                    v81,
                    *(unsigned int *)(v81[433] + 3576),
                    v81[433] + 36);
            v90 = (*(int (**)(unsigned int *, char *, int, int))(*v81 + 72))(v81, v442, v88, v89);
            v91 = (CellStruct **)(*(int (**)(unsigned int *, char *, unsigned int))(*v81 + 72))(
                                   v81,
                                   v438,
                                   *(unsigned int *)(v90 + 4));
            fprintf(v2, &stru_830620.__pad_579C[11664], *v91);
            v79 = v419;
            v80 = (int)aP2c;
          }
          ++v80;
        }
        Debug::Printf((IUnknown *)(*(unsigned int *)(v79 + 52) + 36));
        v78 = (char *)&v413->field_0 + 1;
        v413 = (CellStruct *)((char *)v413 + 1);
      }
      while ( (int)v413 < (int)HouseClass_Count );
    }
    v92 = &stru_89E138.__pad_14B0[3464];
    *(&g_MatrixTransformState + 6395) = 0;
    aP2d = 0;
    v418 = &stru_89E138.__pad_14B0[3464];
    do
    {
      fprintf(v2, &stru_830620.__pad_579C[11544], aP2d);
      for ( k = 0; (int)k < *(unsigned int *)v92; k = (CellStruct *)((char *)k + 1) )
      {
        v93 = *(unsigned int **)(*((unsigned int *)v92 - 3) + 4 * (unsigned int)k);
        if ( (*(int (**)(unsigned int *))(*v93 + 44))(v93) != 4
          || (*(int (**)(unsigned int *))(v93[1] + 16))(v93 + 1) != -2 )
        {
          v94 = v93[39];
          v422 = v93[40];
          v95 = *v93;
          v423 = v93[41];
          v96 = (*(int (**)(unsigned int *))(v95 + 44))(v93);
          *(&g_MatrixTransformState + 6395) = (CoordStruct *)(v94 / 10
                                                            + ((v422 / 10) << 16)
                                                            + v96
                                                            + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                            + 2 * (unsigned int)*(&g_MatrixTransformState + 6395));
          v436 = v93[41];
          fprintf(v2, &stru_830620.__pad_579C[11528], k);
          if ( (*(int (**)(unsigned int *))(*v93 + 44))(v93) == 43
            || (*(int (**)(unsigned int *))(*v93 + 44))(v93) == 19 )
          {
            v102 = (void *)(*(int (**)(unsigned int *, unsigned int))(*v93 + 44))(v93, 0);
            v103 = AbstractType::FindName(v102);
            fprintf(v2, &stru_830620.__pad_579C[11492], (CellStruct *)v103);
          }
          else
          {
            v97 = (*(int (**)(unsigned int *))(*v93 + 136))(v93) + 36;
            v98 = (*(int (**)(unsigned int *))(*v93 + 136))(v93);
            v99 = (*(int (**)(int, int))(*(unsigned int *)v98 + 64))(v98, v97);
            v100 = (void *)(*(int (**)(unsigned int *, int))(*v93 + 44))(v93, v99);
            v101 = AbstractType::FindName(v100);
            fprintf(v2, &stru_830620.__pad_579C[11508], (CellStruct *)v101);
          }
          v104 = (*(int (**)(unsigned int *))(*v93 + 60))(v93);
          if ( v104 )
            fprintf(v2, &stru_830620.__pad_579C[11476], (CellStruct *)(*(unsigned int *)(v104 + 52) + 36));
          else
            fprintf(v2, &stru_830620.__pad_579C[11460], v361);
          v92 = v418;
        }
      }
      v92 += 24;
      aP2d = (CellStruct *)((char *)aP2d + 1);
      v418 = v92;
    }
    while ( (int)v92 < (int)&stru_89E138.__pad_14B0[3584] );
    v305 = TextBufferEntry;
    Debug::Printf(TextBufferEntry);
    *(&g_MatrixTransformState + 6395) = 0;
    fprintf(v2, &stru_830620.__pad_579C[11416], (CellStruct *)v305);
    v105 = *(IUnknown **)&stru_87C374.__pad_14B0[8036];
    v106 = 0;
    for ( aP2e = 0; (int)aP2e < *(int *)&stru_87C374.__pad_14B0[8036]; aP2e = (CellStruct *)((char *)aP2e + 1) )
    {
      v107 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8024] + 4 * (unsigned int)v106);
      if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) != 4
        || (*(int (**)(unsigned int *))(v107[1] + 16))(v107 + 1) != -2 )
      {
        v109 = (CellStruct *)v107[39];
        v422 = v107[40];
        edx78 = *v107;
        v423 = v107[41];
        v110 = (*(int (**)(unsigned int *))(edx78 + 44))(v107);
        *(&g_MatrixTransformState + 6395) = (CoordStruct *)((int)v109 / 10
                                                          + ((v422 / 10) << 16)
                                                          + v110
                                                          + ((unsigned int)*(&g_MatrixTransformState + 6395) >> 31)
                                                          + 2 * (unsigned int)*(&g_MatrixTransformState + 6395));
        v436 = v107[41];
        fprintf(v2, &stru_830620.__pad_579C[11528], aP2e);
        if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 2 )
        {
          v111 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v112 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v306 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v112 + 64))(v112, v111);
          fprintf(v2, &stru_830620.__pad_579C[11388], v306);
        }
        else if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 4 )
        {
          v113 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v114 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v307 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v114 + 64))(v114, v113);
          fprintf(v2, &stru_830620.__pad_579C[11360], v307);
        }
        else if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 6 )
        {
          v115 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v116 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v308 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v116 + 64))(v116, v115);
          fprintf(v2, &stru_830620.__pad_579C[11332], v308);
        }
        else if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 8 )
        {
          v117 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v118 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v309 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v118 + 64))(v118, v117);
          fprintf(v2, &stru_830620.__pad_579C[11304], v309);
        }
        else if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 15 )
        {
          v119 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v120 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v310 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v120 + 64))(v120, v119);
          fprintf(v2, &stru_830620.__pad_579C[11276], v310);
        }
        else if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 20 )
        {
          v121 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v122 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v311 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v122 + 64))(v122, v121);
          fprintf(v2, &stru_830620.__pad_579C[11248], v311);
        }
        else if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 29 )
        {
          v123 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v124 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v312 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v124 + 64))(v124, v123);
          fprintf(v2, &stru_830620.__pad_579C[11220], v312);
        }
        else if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 36 )
        {
          v125 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v126 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v313 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v126 + 64))(v126, v125);
          fprintf(v2, &stru_830620.__pad_579C[11192], v313);
        }
        else if ( (*(int (**)(unsigned int *))(*v107 + 44))(v107) == 1 )
        {
          v127 = (*(int (**)(unsigned int *))(*v107 + 136))(v107) + 36;
          v128 = (*(int (**)(unsigned int *))(*v107 + 136))(v107);
          v314 = (CellStruct *)(*(int (**)(int, int))(*(unsigned int *)v128 + 64))(v128, v127);
          fprintf(v2, &stru_830620.__pad_579C[11164], v314);
        }
        v129 = (*(int (**)(unsigned int *))(*v107 + 60))(v107);
        if ( v129 )
          fprintf(v2, &stru_830620.__pad_579C[11152], (CellStruct *)(*(unsigned int *)(v129 + 52) + 36));
        else
          fprintf(v2, &stru_830620.__pad_579C[11460], v361);
      }
      v105 = *(IUnknown **)&stru_87C374.__pad_14B0[8036];
      v106 = (char *)&aP2e->field_0 + 1;
    }
    Debug::Printf(v105);
    v358 = (CellStruct *)Random::State((unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536));
    Debug::Printf(v130);
    fprintf(v2, &stru_830620.__pad_579C[11100], v358);
    Debug::Printf(*(IUnknown **)&HouseClass_Player.__pad_5568[23248]);
    fprintf(v2, &stru_830620.__pad_579C[11068], *(CellStruct **)&HouseClass_Player.__pad_5568[23248]);
    v131 = v433;
    if ( v433 )
    {
      fprintf(v2, &stru_830620.__pad_579C[11048], v361);
      fprintf(v2, &stru_830620.__pad_579C[11028], (CellStruct *)*v131);
      fprintf(v2, &stru_830620.__pad_579C[11008], *(CellStruct **)(v131 + 3));
      fprintf(v2, &stru_830620.__pad_579C[10988], (CellStruct *)(char)v131[2]);
      fprintf(v2, &stru_830620.__pad_579C[10968], *(CellStruct **)(v131 + 7));
      fprintf(v2, &stru_830620.__pad_579C[10948], (CellStruct *)*(unsigned __int16 *)(v131 + 11));
      fprintf(v2, &stru_830620.__pad_579C[10928], (CellStruct *)v131[13]);
    }
    v132 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v132 )
    {
      *v132 = 0;
      v132[1] = 0;
      v132[2] = 0;
      v133 = v132;
    }
    else
    {
      v133 = 0;
    }
    fprintf(v2, &stru_830620.__pad_579C[10876], v361);
    fprintf(v2, &stru_830620.__pad_579C[10860], v315);
    fprintf(v2, &stru_830620.__pad_579C[10812], v262);
    for ( mm = 0; (int)mm < g_SuperWeaponTypeArray; mm = (CellStruct *)((char *)mm + 1) )
    {
      (*(void (**)(unsigned int, void *))(**((unsigned int **)g_SuperWeaponTypeCount + (unsigned int)mm) + 52))(
        *((unsigned int *)g_SuperWeaponTypeCount + (unsigned int)mm),
        v133);
      fprintf(v2, &stru_830620.__pad_579C[10796], mm);
    }
    fprintf(v2, &stru_830620.__pad_579C[10744], v362);
    fprintf(v2, &stru_830620.__pad_579C[10860], v316);
    fprintf(v2, &stru_830620.__pad_579C[10812], v263);
    __3_YAXPAX_Z(v133);
    v135 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v135 )
    {
      *v135 = 0;
      v135[1] = 0;
      v135[2] = 0;
      v136 = v135;
    }
    else
    {
      v136 = 0;
    }
    for ( nn = 0; (int)nn < (int)HouseClass_Count; nn = (CellStruct *)((char *)nn + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)&HouseClass_Array->__pad_0[4 * (unsigned int)nn] + 52))(
        *(unsigned int *)&HouseClass_Array->__pad_0[4 * (unsigned int)nn],
        v136);
      fprintf(v2, &stru_830620.__pad_579C[10796], nn);
    }
    fprintf(v2, &stru_830620.__pad_579C[10692], v363);
    fprintf(v2, &stru_830620.__pad_579C[10860], v317);
    fprintf(v2, &stru_830620.__pad_579C[10812], v264);
    __3_YAXPAX_Z(v136);
    v138 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v138 )
    {
      *v138 = 0;
      v138[1] = 0;
      v138[2] = 0;
      v139 = v138;
    }
    else
    {
      v139 = 0;
    }
    for ( i1 = 0; (int)i1 < (int)g_CrateCount; i1 = (CellStruct *)((char *)i1 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)&g_UnitTypeCount2->__pad_0[4 * (unsigned int)i1] + 52))(
        *(unsigned int *)&g_UnitTypeCount2->__pad_0[4 * (unsigned int)i1],
        v139);
      fprintf(v2, &stru_830620.__pad_579C[10796], i1);
    }
    fprintf(v2, &stru_830620.__pad_579C[10648], v364);
    fprintf(v2, &stru_830620.__pad_579C[10860], v318);
    fprintf(v2, &stru_830620.__pad_579C[10812], v265);
    __3_YAXPAX_Z(v139);
    v141 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v141 )
    {
      *v141 = 0;
      v141[1] = 0;
      v141[2] = 0;
      v142 = v141;
    }
    else
    {
      v142 = 0;
    }
    for ( i2 = 0; (int)i2 < *(int *)&stru_89E138.__pad_579C[67652]; i2 = (CellStruct *)((char *)i2 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_89E138.__pad_579C[67640] + 4 * (unsigned int)i2)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_579C[67640] + 4 * (unsigned int)i2),
        v142);
      fprintf(v2, &stru_830620.__pad_579C[10796], i2);
    }
    fprintf(v2, &stru_830620.__pad_579C[10592], v365);
    fprintf(v2, &stru_830620.__pad_579C[10860], v319);
    fprintf(v2, &stru_830620.__pad_579C[10812], v266);
    __3_YAXPAX_Z(v142);
    v144 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v144 )
    {
      *v144 = 0;
      v144[1] = 0;
      v144[2] = 0;
      v145 = v144;
    }
    else
    {
      v145 = 0;
    }
    for ( i3 = 0; (int)i3 < *(int *)&HouseClass_Player.__pad_5568[20644]; i3 = (CellStruct *)((char *)i3 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[20632]
                                                           + 4 * (unsigned int)i3)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20632] + 4 * (unsigned int)i3),
        v145);
      fprintf(v2, &stru_830620.__pad_579C[10796], i3);
    }
    fprintf(v2, &stru_830620.__pad_579C[10544], v366);
    fprintf(v2, &stru_830620.__pad_579C[10860], v320);
    fprintf(v2, &stru_830620.__pad_579C[10812], v267);
    __3_YAXPAX_Z(v145);
    v147 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v147 )
    {
      *v147 = 0;
      v147[1] = 0;
      v147[2] = 0;
      v148 = v147;
    }
    else
    {
      v148 = 0;
    }
    for ( i4 = 0; (int)i4 < *(int *)&HouseClass_Player.__pad_74[56]; i4 = (CellStruct *)((char *)i4 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_74[44] + 4 * (unsigned int)i4)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_74[44] + 4 * (unsigned int)i4),
        v148);
      fprintf(v2, &stru_830620.__pad_579C[10796], i4);
    }
    fprintf(v2, &stru_830620.__pad_579C[10492], v367);
    fprintf(v2, &stru_830620.__pad_579C[10860], v321);
    fprintf(v2, &stru_830620.__pad_579C[10812], v268);
    __3_YAXPAX_Z(v148);
    v150 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v150 )
    {
      *v150 = 0;
      v150[1] = 0;
      v150[2] = 0;
      v151 = v150;
    }
    else
    {
      v151 = 0;
    }
    for ( i5 = 0; (int)i5 < (int)g_TriggerClassCount; i5 = (CellStruct *)((char *)i5 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**((unsigned int **)g_TriggerTypeCount + (unsigned int)i5) + 52))(
        *((unsigned int *)g_TriggerTypeCount + (unsigned int)i5),
        v151);
      fprintf(v2, &stru_830620.__pad_579C[10796], i5);
    }
    fprintf(v2, &stru_830620.__pad_579C[10444], v368);
    fprintf(v2, &stru_830620.__pad_579C[10860], v322);
    fprintf(v2, &stru_830620.__pad_579C[10812], v269);
    __3_YAXPAX_Z(v151);
    v153 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v153 )
    {
      *v153 = 0;
      v153[1] = 0;
      v153[2] = 0;
      v154 = v153;
    }
    else
    {
      v154 = 0;
    }
    for ( i6 = 0; (int)i6 < *(int *)&HouseClass_Player.__pad_5568[22684]; i6 = (CellStruct *)((char *)i6 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22672]
                                                           + 4 * (unsigned int)i6)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22672] + 4 * (unsigned int)i6),
        v154);
      fprintf(v2, &stru_830620.__pad_579C[10796], i6);
    }
    fprintf(v2, &stru_830620.__pad_579C[10388], v369);
    fprintf(v2, &stru_830620.__pad_579C[10860], v323);
    fprintf(v2, &stru_830620.__pad_579C[10812], v270);
    __3_YAXPAX_Z(v154);
    v156 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v156 )
    {
      *v156 = 0;
      v156[1] = 0;
      v156[2] = 0;
      v157 = v156;
    }
    else
    {
      v157 = 0;
    }
    for ( i7 = 0; (int)i7 < *(int *)&HouseClass_Player.__pad_5568[8052]; i7 = (CellStruct *)((char *)i7 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[8040]
                                                           + 4 * (unsigned int)i7)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8040] + 4 * (unsigned int)i7),
        v157);
      fprintf(v2, &stru_830620.__pad_579C[10796], i7);
    }
    fprintf(v2, &stru_830620.__pad_579C[10340], v370);
    fprintf(v2, &stru_830620.__pad_579C[10860], v324);
    fprintf(v2, &stru_830620.__pad_579C[10812], v271);
    __3_YAXPAX_Z(v157);
    v159 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v159 )
    {
      *v159 = 0;
      v159[1] = 0;
      v159[2] = 0;
      v160 = v159;
    }
    else
    {
      v160 = 0;
    }
    for ( i8 = 0; (int)i8 < *(int *)&HouseClass_Player.__pad_5568[20716]; i8 = (CellStruct *)((char *)i8 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[20704]
                                                           + 4 * (unsigned int)i8)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20704] + 4 * (unsigned int)i8),
        v160);
      fprintf(v2, &stru_830620.__pad_579C[10796], i8);
    }
    fprintf(v2, &stru_830620.__pad_579C[10296], v371);
    fprintf(v2, &stru_830620.__pad_579C[10860], v325);
    fprintf(v2, &stru_830620.__pad_579C[10812], v272);
    __3_YAXPAX_Z(v160);
    v162 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v162 )
    {
      *v162 = 0;
      v162[1] = 0;
      v162[2] = 0;
      v163 = v162;
    }
    else
    {
      v163 = 0;
    }
    for ( i9 = 0; (int)i9 < *(int *)&HouseClass_Player.__pad_5568[22276]; i9 = (CellStruct *)((char *)i9 + 1) )
    {
      v165 = *(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22264] + 4 * (unsigned int)i9);
      if ( (*(int (**)(unsigned int *))(v165[1] + 16))(v165 + 1) != -2 )
      {
        (*(void (**)(unsigned int *, void *))(*v165 + 52))(v165, v163);
        fprintf(v2, &stru_830620.__pad_579C[10796], i9);
      }
    }
    fprintf(v2, &stru_830620.__pad_579C[10244], v372);
    fprintf(v2, &stru_830620.__pad_579C[10860], v326);
    fprintf(v2, &stru_830620.__pad_579C[10812], v273);
    __3_YAXPAX_Z(v163);
    v166 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    v167 = 0;
    if ( v166 )
    {
      *v166 = 0;
      v166[1] = 0;
      v166[2] = 0;
      v167 = v166;
    }
    for ( i10 = 0; (int)i10 < *(int *)&stru_89E138.__pad_1600D[27]; i10 = (CellStruct *)((char *)i10 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_89E138.__pad_1600D[15] + 4 * (unsigned int)i10)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_1600D[15] + 4 * (unsigned int)i10),
        v167);
      fprintf(v2, &stru_830620.__pad_579C[10796], i10);
    }
    fprintf(v2, &stru_830620.__pad_579C[10192], v373);
    fprintf(v2, &stru_830620.__pad_579C[10860], v327);
    fprintf(v2, &stru_830620.__pad_579C[10812], v274);
    __3_YAXPAX_Z(v167);
    v169 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v169 )
    {
      *v169 = 0;
      v169[1] = 0;
      v169[2] = 0;
      v170 = v169;
    }
    else
    {
      v170 = 0;
    }
    for ( i11 = 0; (int)i11 < *(int *)&HouseClass_Player.__pad_5568[22060]; i11 = (CellStruct *)((char *)i11 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22048]
                                                           + 4 * (unsigned int)i11)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22048] + 4 * (unsigned int)i11),
        v170);
      fprintf(v2, &stru_830620.__pad_579C[10796], i11);
    }
    fprintf(v2, &stru_830620.__pad_579C[10140], v374);
    fprintf(v2, &stru_830620.__pad_579C[10860], v328);
    fprintf(v2, &stru_830620.__pad_579C[10812], v275);
    __3_YAXPAX_Z(v170);
    v172 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v172 )
    {
      *v172 = 0;
      v172[1] = 0;
      v172[2] = 0;
      v173 = v172;
    }
    else
    {
      v173 = 0;
    }
    for ( i12 = 0; (int)i12 < *(int *)&HouseClass_Player.__pad_5568[23036]; i12 = (CellStruct *)((char *)i12 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[23024]
                                                           + 4 * (unsigned int)i12)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[23024] + 4 * (unsigned int)i12),
        v173);
      fprintf(v2, &stru_830620.__pad_579C[10796], i12);
    }
    fprintf(v2, &stru_830620.__pad_579C[10096], v375);
    fprintf(v2, &stru_830620.__pad_579C[10860], v329);
    fprintf(v2, &stru_830620.__pad_579C[10812], v276);
    __3_YAXPAX_Z(v173);
    v175 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v175 )
    {
      *v175 = 0;
      v175[1] = 0;
      v175[2] = 0;
      v176 = v175;
    }
    else
    {
      v176 = 0;
    }
    for ( i13 = 0; (int)i13 < *(int *)&stru_89E138.__pad_579C[67620]; i13 = (CellStruct *)((char *)i13 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_89E138.__pad_579C[67608] + 4 * (unsigned int)i13)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_579C[67608] + 4 * (unsigned int)i13),
        v176);
      fprintf(v2, &stru_830620.__pad_579C[10796], i13);
    }
    fprintf(v2, &stru_830620.__pad_579C[10044], v376);
    fprintf(v2, &stru_830620.__pad_579C[10860], v330);
    fprintf(v2, &stru_830620.__pad_579C[10812], v277);
    __3_YAXPAX_Z(v176);
    v178 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v178 )
    {
      *v178 = 0;
      v178[1] = 0;
      v178[2] = 0;
      v179 = v178;
    }
    else
    {
      v179 = 0;
    }
    for ( i14 = 0; (int)i14 < dword_8B41D8; i14 = (CellStruct *)((char *)i14 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**((unsigned int **)unk_8B41CC + (unsigned int)i14) + 52))(
        *((unsigned int *)unk_8B41CC + (unsigned int)i14),
        v179);
      fprintf(v2, &stru_830620.__pad_579C[10796], i14);
    }
    fprintf(v2, &stru_830620.__pad_579C[9996], v377);
    fprintf(v2, &stru_830620.__pad_579C[10860], v331);
    fprintf(v2, &stru_830620.__pad_579C[10812], v278);
    __3_YAXPAX_Z(v179);
    v181 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v181 )
    {
      *v181 = 0;
      v181[1] = 0;
      v181[2] = 0;
      v182 = v181;
    }
    else
    {
      v182 = 0;
    }
    for ( i15 = 0; (int)i15 < *(int *)&stru_87C374.__pad_579C[22448]; i15 = (CellStruct *)((char *)i15 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[22436] + 4 * (unsigned int)i15)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22436] + 4 * (unsigned int)i15),
        v182);
      fprintf(v2, &stru_830620.__pad_579C[10796], i15);
    }
    fprintf(v2, &stru_830620.__pad_579C[9948], v378);
    fprintf(v2, &stru_830620.__pad_579C[10860], v332);
    fprintf(v2, &stru_830620.__pad_579C[10812], v279);
    __3_YAXPAX_Z(v182);
    v184 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v184 )
    {
      *v184 = 0;
      v184[1] = 0;
      v184[2] = 0;
      v185 = v184;
    }
    else
    {
      v185 = 0;
    }
    for ( i16 = 0; (int)i16 < *(int *)&stru_B05488.__pad_579C[15212]; i16 = (CellStruct *)((char *)i16 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_B05488.__pad_579C[15200] + 4 * (unsigned int)i16)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[15200] + 4 * (unsigned int)i16),
        v185);
      fprintf(v2, &stru_830620.__pad_579C[10796], i16);
    }
    fprintf(v2, &stru_830620.__pad_579C[9904], v379);
    fprintf(v2, &stru_830620.__pad_579C[10860], v333);
    fprintf(v2, &stru_830620.__pad_579C[10812], v280);
    __3_YAXPAX_Z(v185);
    v187 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v187 )
    {
      *v187 = 0;
      v187[1] = 0;
      v187[2] = 0;
      v188 = v187;
    }
    else
    {
      v188 = 0;
    }
    for ( i17 = 0; (int)i17 < *(int *)&stru_B05488.__pad_579C[15116]; i17 = (CellStruct *)((char *)i17 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_B05488.__pad_579C[15104] + 4 * (unsigned int)i17)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[15104] + 4 * (unsigned int)i17),
        v188);
      fprintf(v2, &stru_830620.__pad_579C[10796], i17);
    }
    fprintf(v2, &stru_830620.__pad_579C[9852], v380);
    fprintf(v2, &stru_830620.__pad_579C[10860], v334);
    fprintf(v2, &stru_830620.__pad_579C[10812], v281);
    __3_YAXPAX_Z(v188);
    v190 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v190 )
    {
      *v190 = 0;
      v190[1] = 0;
      v190[2] = 0;
      v191 = v190;
    }
    else
    {
      v191 = 0;
    }
    for ( i18 = 0; (int)i18 < dword_8B4188; i18 = (CellStruct *)((char *)i18 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**((unsigned int **)unk_8B417C + (unsigned int)i18) + 52))(
        *((unsigned int *)unk_8B417C + (unsigned int)i18),
        v191);
      fprintf(v2, &stru_830620.__pad_579C[10796], i18);
    }
    fprintf(v2, &stru_830620.__pad_579C[9804], v381);
    fprintf(v2, &stru_830620.__pad_579C[10860], v335);
    fprintf(v2, &stru_830620.__pad_579C[10812], v282);
    __3_YAXPAX_Z(v191);
    v193 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v193 )
    {
      *v193 = 0;
      v193[1] = 0;
      v193[2] = 0;
      v194 = v193;
    }
    else
    {
      v194 = 0;
    }
    for ( i19 = 0; (int)i19 < *(int *)&HouseClass_Player.__pad_5568[22596]; i19 = (CellStruct *)((char *)i19 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22584]
                                                           + 4 * (unsigned int)i19)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22584] + 4 * (unsigned int)i19),
        v194);
      fprintf(v2, &stru_830620.__pad_579C[10796], i19);
    }
    fprintf(v2, &stru_830620.__pad_579C[9756], v382);
    fprintf(v2, &stru_830620.__pad_579C[10860], v336);
    fprintf(v2, &stru_830620.__pad_579C[10812], v283);
    __3_YAXPAX_Z(v194);
    v196 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v196 )
    {
      *v196 = 0;
      v196[1] = 0;
      v196[2] = 0;
      v197 = v196;
    }
    else
    {
      v197 = 0;
    }
    for ( i20 = 0; (int)i20 < *(int *)&stru_B05488.__pad_579C[14916]; i20 = (CellStruct *)((char *)i20 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_B05488.__pad_579C[14904] + 4 * (unsigned int)i20)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[14904] + 4 * (unsigned int)i20),
        v197);
      fprintf(v2, &stru_830620.__pad_579C[10796], i20);
    }
    fprintf(v2, &stru_830620.__pad_579C[9708], v383);
    fprintf(v2, &stru_830620.__pad_579C[10860], v337);
    fprintf(v2, &stru_830620.__pad_579C[10812], v284);
    __3_YAXPAX_Z(v197);
    v199 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v199 )
    {
      *v199 = 0;
      v199[1] = 0;
      v199[2] = 0;
      v200 = v199;
    }
    else
    {
      v200 = 0;
    }
    for ( i21 = 0; (int)i21 < *(int *)&stru_B05488.__pad_579C[17804]; i21 = (CellStruct *)((char *)i21 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_B05488.__pad_579C[17792] + 4 * (unsigned int)i21)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[17792] + 4 * (unsigned int)i21),
        v200);
      fprintf(v2, &stru_830620.__pad_579C[10796], i21);
    }
    fprintf(v2, &stru_830620.__pad_579C[9660], v384);
    fprintf(v2, &stru_830620.__pad_579C[10860], v338);
    fprintf(v2, &stru_830620.__pad_579C[10812], v285);
    __3_YAXPAX_Z(v200);
    v202 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v202 )
    {
      *v202 = 0;
      v202[1] = 0;
      v202[2] = 0;
      v203 = v202;
    }
    else
    {
      v203 = 0;
    }
    for ( i22 = 0; (int)i22 < *(int *)&HouseClass_Player.__pad_74[128]; i22 = (CellStruct *)((char *)i22 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_74[116]
                                                           + 4 * (unsigned int)i22)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_74[116] + 4 * (unsigned int)i22),
        v203);
      fprintf(v2, &stru_830620.__pad_579C[10796], i22);
    }
    fprintf(v2, &stru_830620.__pad_579C[9604], v385);
    fprintf(v2, &stru_830620.__pad_579C[10860], v339);
    fprintf(v2, &stru_830620.__pad_579C[10812], v286);
    __3_YAXPAX_Z(v203);
    v205 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v205 )
    {
      *v205 = 0;
      v205[1] = 0;
      v205[2] = 0;
      v206 = v205;
    }
    else
    {
      v206 = 0;
    }
    for ( i23 = 0; (int)i23 < *(int *)&HouseClass_Player.__pad_5568[22660]; i23 = (CellStruct *)((char *)i23 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22648]
                                                           + 4 * (unsigned int)i23)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22648] + 4 * (unsigned int)i23),
        v206);
      fprintf(v2, &stru_830620.__pad_579C[10796], i23);
    }
    fprintf(v2, &stru_830620.__pad_579C[9552], v386);
    fprintf(v2, &stru_830620.__pad_579C[10860], v340);
    fprintf(v2, &stru_830620.__pad_579C[10812], v287);
    __3_YAXPAX_Z(v206);
    v208 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v208 )
    {
      *v208 = 0;
      v208[1] = 0;
      v208[2] = 0;
      v209 = v208;
    }
    else
    {
      v209 = 0;
    }
    for ( i24 = 0; (int)i24 < *(int *)&stru_87C374.__pad_579C[22664]; i24 = (CellStruct *)((char *)i24 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[22652] + 4 * (unsigned int)i24)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22652] + 4 * (unsigned int)i24),
        v209);
      fprintf(v2, &stru_830620.__pad_579C[10796], i24);
    }
    fprintf(v2, &stru_830620.__pad_579C[9504], v387);
    fprintf(v2, &stru_830620.__pad_579C[10860], v341);
    fprintf(v2, &stru_830620.__pad_579C[10812], v288);
    __3_YAXPAX_Z(v209);
    v211 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v211 )
    {
      *v211 = 0;
      v211[1] = 0;
      v211[2] = 0;
      v212 = v211;
    }
    else
    {
      v212 = 0;
    }
    for ( i25 = 0; (int)i25 < *(int *)&stru_87C374.__pad_579C[22976]; i25 = (CellStruct *)((char *)i25 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[22964] + 4 * (unsigned int)i25)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22964] + 4 * (unsigned int)i25),
        v212);
      fprintf(v2, &stru_830620.__pad_579C[10796], i25);
    }
    fprintf(v2, &stru_830620.__pad_579C[9456], v388);
    fprintf(v2, &stru_830620.__pad_579C[10860], v342);
    fprintf(v2, &stru_830620.__pad_579C[10812], v289);
    __3_YAXPAX_Z(v212);
    v214 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v214 )
    {
      *v214 = 0;
      v214[1] = 0;
      v214[2] = 0;
      v215 = v214;
    }
    else
    {
      v215 = 0;
    }
    for ( i26 = 0; (int)i26 < *(int *)&stru_87C374.__pad_579C[23144]; i26 = (CellStruct *)((char *)i26 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[23132] + 4 * (unsigned int)i26)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[23132] + 4 * (unsigned int)i26),
        v215);
      fprintf(v2, &stru_830620.__pad_579C[10796], i26);
    }
    fprintf(v2, &stru_830620.__pad_579C[9400], v389);
    fprintf(v2, &stru_830620.__pad_579C[10860], v343);
    fprintf(v2, &stru_830620.__pad_579C[10812], v290);
    __3_YAXPAX_Z(v215);
    v217 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v217 )
    {
      *v217 = 0;
      v217[1] = 0;
      v217[2] = 0;
      v218 = v217;
    }
    else
    {
      v218 = 0;
    }
    for ( i27 = 0; (int)i27 < *(int *)&HouseClass_Player.__pad_3C[32]; i27 = (CellStruct *)((char *)i27 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_3C[20] + 4 * (unsigned int)i27)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_3C[20] + 4 * (unsigned int)i27),
        v218);
      fprintf(v2, &stru_830620.__pad_579C[10796], i27);
    }
    fprintf(v2, &stru_830620.__pad_579C[9352], v390);
    fprintf(v2, &stru_830620.__pad_579C[10860], v344);
    fprintf(v2, &stru_830620.__pad_579C[10812], v291);
    __3_YAXPAX_Z(v218);
    v220 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v220 )
    {
      *v220 = 0;
      v220[1] = 0;
      v220[2] = 0;
      v221 = v220;
    }
    else
    {
      v221 = 0;
    }
    for ( i28 = 0; (int)i28 < *(int *)&HouseClass_Player.__pad_74[24]; i28 = (CellStruct *)((char *)i28 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_74[12] + 4 * (unsigned int)i28)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_74[12] + 4 * (unsigned int)i28),
        v221);
      fprintf(v2, &stru_830620.__pad_579C[10796], i28);
    }
    fprintf(v2, &stru_830620.__pad_579C[9296], v391);
    fprintf(v2, &stru_830620.__pad_579C[10860], _50bm);
    fprintf(v2, &stru_830620.__pad_579C[10812], v292);
    __3_YAXPAX_Z(v221);
    v223 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v223 )
    {
      *v223 = 0;
      v223[1] = 0;
      v223[2] = 0;
      v224 = v223;
    }
    else
    {
      v224 = 0;
    }
    for ( i29 = 0; (int)i29 < g_GameCleanupState; i29 = (CellStruct *)((char *)i29 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)&dword_A8020C->__pad_0[4 * (unsigned int)i29] + 52))(
        *(unsigned int *)&dword_A8020C->__pad_0[4 * (unsigned int)i29],
        v224);
      fprintf(v2, &stru_830620.__pad_579C[10796], i29);
    }
    fprintf(v2, &stru_830620.__pad_579C[9236], v392);
    fprintf(v2, &stru_830620.__pad_579C[10860], _50bn);
    fprintf(v2, &stru_830620.__pad_579C[10812], v293);
    __3_YAXPAX_Z(v224);
    v226 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v226 )
    {
      *v226 = 0;
      v226[1] = 0;
      v226[2] = 0;
      v227 = v226;
    }
    else
    {
      v227 = 0;
    }
    for ( i30 = 0; (int)i30 < *(int *)HouseClass_Player.__pad_2C; i30 = (CellStruct *)((char *)i30 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_18[8] + 4 * (unsigned int)i30)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_18[8] + 4 * (unsigned int)i30),
        v227);
      fprintf(v2, &stru_830620.__pad_579C[10796], i30);
    }
    fprintf(v2, &stru_830620.__pad_579C[9188], v393);
    fprintf(v2, &stru_830620.__pad_579C[10860], v347);
    fprintf(v2, &stru_830620.__pad_579C[10812], v294);
    __3_YAXPAX_Z(v227);
    v229 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v229 )
    {
      *v229 = 0;
      v229[1] = 0;
      v229[2] = 0;
      v230 = v229;
    }
    else
    {
      v230 = 0;
    }
    for ( i31 = 0; (int)i31 < (int)g_BulletTypeInitState; i31 = (CellStruct *)((char *)i31 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)&dword_A83C84->__pad_0[4 * (unsigned int)i31] + 52))(
        *(unsigned int *)&dword_A83C84->__pad_0[4 * (unsigned int)i31],
        v230);
      fprintf(v2, &stru_830620.__pad_579C[10796], i31);
    }
    fprintf(v2, &stru_830620.__pad_579C[9140], v394);
    fprintf(v2, &stru_830620.__pad_579C[10860], v348);
    fprintf(v2, &stru_830620.__pad_579C[10812], v295);
    __3_YAXPAX_Z(v230);
    v232 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v232 )
    {
      *v232 = 0;
      v232[1] = 0;
      v232[2] = 0;
      v233 = v232;
    }
    else
    {
      v233 = 0;
    }
    for ( i32 = 0; (int)i32 < *(int *)&HouseClass_Player.__pad_5568[23196]; i32 = (CellStruct *)((char *)i32 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[23184]
                                                           + 4 * (unsigned int)i32)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[23184] + 4 * (unsigned int)i32),
        v233);
      fprintf(v2, &stru_830620.__pad_579C[10796], i32);
    }
    fprintf(v2, &stru_830620.__pad_579C[9084], v395);
    fprintf(v2, &stru_830620.__pad_579C[10860], v349);
    fprintf(v2, &stru_830620.__pad_579C[10812], v296);
    __3_YAXPAX_Z(v233);
    v235 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v235 )
    {
      *v235 = 0;
      v235[1] = 0;
      v235[2] = 0;
      v236 = v235;
    }
    else
    {
      v236 = 0;
    }
    for ( i33 = 0; (int)i33 < dword_B72618; i33 = (CellStruct *)((char *)i33 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)&dword_B7260C->__pad_0[4 * (unsigned int)i33] + 52))(
        *(unsigned int *)&dword_B7260C->__pad_0[4 * (unsigned int)i33],
        v236);
      fprintf(v2, &stru_830620.__pad_579C[10796], i33);
    }
    fprintf(v2, &stru_830620.__pad_579C[9032], v396);
    fprintf(v2, &stru_830620.__pad_579C[10860], v350);
    fprintf(v2, &stru_830620.__pad_579C[10812], v297);
    __3_YAXPAX_Z(v236);
    v238 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v238 )
    {
      *v238 = 0;
      v238[1] = 0;
      v238[2] = 0;
      v239 = v238;
    }
    else
    {
      v239 = 0;
    }
    for ( i34 = 0; (int)i34 < *(int *)&HouseClass_Player.__pad_5568[22900]; i34 = (CellStruct *)((char *)i34 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22888]
                                                           + 4 * (unsigned int)i34)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22888] + 4 * (unsigned int)i34),
        v239);
      fprintf(v2, &stru_830620.__pad_579C[10796], i34);
    }
    fprintf(v2, &stru_830620.__pad_579C[8980], v397);
    fprintf(v2, &stru_830620.__pad_579C[10860], v351);
    fprintf(v2, &stru_830620.__pad_579C[10812], v298);
    __3_YAXPAX_Z(v239);
    v241 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v241 )
    {
      *v241 = 0;
      v241[1] = 0;
      v241[2] = 0;
      v242 = v241;
    }
    else
    {
      v242 = 0;
    }
    for ( i35 = 0; (int)i35 < *(int *)&HouseClass_Player.__pad_3C[8]; i35 = (CellStruct *)((char *)i35 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(HouseClass_Player.field_38 + 4 * (unsigned int)i35) + 52))(
        *(unsigned int *)(HouseClass_Player.field_38 + 4 * (unsigned int)i35),
        v242);
      fprintf(v2, &stru_830620.__pad_579C[10796], i35);
    }
    fprintf(v2, &stru_830620.__pad_579C[8928], v398);
    fprintf(v2, &stru_830620.__pad_579C[10860], v352);
    fprintf(v2, &stru_830620.__pad_579C[10812], v299);
    __3_YAXPAX_Z(v242);
    v244 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v244 )
    {
      *v244 = 0;
      v244[1] = 0;
      v244[2] = 0;
      v245 = v244;
    }
    else
    {
      v245 = 0;
    }
    for ( i36 = 0; (int)i36 < g_BridgeCellPool; i36 = (CellStruct *)((char *)i36 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)&dword_ABCA14->__pad_0[4 * (unsigned int)i36] + 52))(
        *(unsigned int *)&dword_ABCA14->__pad_0[4 * (unsigned int)i36],
        v245);
      fprintf(v2, &stru_830620.__pad_579C[10796], i36);
    }
    fprintf(v2, &stru_830620.__pad_579C[8872], v399);
    fprintf(v2, &stru_830620.__pad_579C[10860], v353);
    fprintf(v2, &stru_830620.__pad_579C[10812], v300);
    __3_YAXPAX_Z(v245);
    v247 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v247 )
    {
      *v247 = 0;
      v247[1] = 0;
      v247[2] = 0;
      v248 = v247;
    }
    else
    {
      v248 = 0;
    }
    for ( i37 = 0; (int)i37 < dword_8B41A0; i37 = (CellStruct *)((char *)i37 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**((unsigned int **)unk_8B4194 + (unsigned int)i37) + 52))(
        *((unsigned int *)unk_8B4194 + (unsigned int)i37),
        v248);
      fprintf(v2, &stru_830620.__pad_579C[10796], i37);
    }
    fprintf(v2, &stru_830620.__pad_579C[8828], v400);
    fprintf(v2, &stru_830620.__pad_579C[10860], v354);
    fprintf(v2, &stru_830620.__pad_579C[10812], v301);
    __3_YAXPAX_Z(v248);
    v250 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v250 )
    {
      *v250 = 0;
      v250[1] = 0;
      v250[2] = 0;
      v251 = v250;
    }
    else
    {
      v251 = 0;
    }
    for ( i38 = 0; (int)i38 < *(int *)&stru_89E138.__pad_1600D[3]; i38 = (CellStruct *)((char *)i38 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_89E138.__pad_15FF8[12] + 4 * (unsigned int)i38)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_15FF8[12] + 4 * (unsigned int)i38),
        v251);
      fprintf(v2, &stru_830620.__pad_579C[10796], i38);
    }
    fprintf(v2, &stru_830620.__pad_579C[8780], v401);
    fprintf(v2, &stru_830620.__pad_579C[10860], v355);
    fprintf(v2, &stru_830620.__pad_579C[10812], v302);
    __3_YAXPAX_Z(v251);
    v253 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v253 )
    {
      *v253 = 0;
      v253[1] = 0;
      v253[2] = 0;
      v254 = v253;
    }
    else
    {
      v254 = 0;
    }
    for ( i39 = 0; (int)i39 < *(int *)stru_89E138.__pad_15FF8; i39 = (CellStruct *)((char *)i39 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_89E138.__pad_579C[67664] + 4 * (unsigned int)i39)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_579C[67664] + 4 * (unsigned int)i39),
        v254);
      fprintf(v2, &stru_830620.__pad_579C[10796], i39);
    }
    fprintf(v2, &stru_830620.__pad_579C[8732], v402);
    fprintf(v2, &stru_830620.__pad_579C[10860], v356);
    fprintf(v2, &stru_830620.__pad_579C[10812], v303);
    __3_YAXPAX_Z(v254);
    v256 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v256 )
    {
      *v256 = 0;
      v256[1] = 0;
      v256[2] = 0;
      v257 = v256;
    }
    else
    {
      v257 = 0;
    }
    for ( i40 = 0; (int)i40 < *(int *)&stru_B05488.__pad_579C[18644]; i40 = (CellStruct *)((char *)i40 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_B05488.__pad_579C[18632] + 4 * (unsigned int)i40)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[18632] + 4 * (unsigned int)i40),
        v257);
      fprintf(v2, &stru_830620.__pad_579C[10796], i40);
    }
    fprintf(v2, &stru_830620.__pad_579C[8684], v403);
    fprintf(v2, &stru_830620.__pad_579C[10860], v357);
    fprintf(v2, &stru_830620.__pad_579C[10812], v304);
    __3_YAXPAX_Z(v257);
    v259 = (unsigned int *)__2_YAPAXI_Z(0xCu);
    if ( v259 )
    {
      *v259 = 0;
      v259[1] = 0;
      v259[2] = 0;
      v260 = v259;
    }
    else
    {
      v260 = 0;
    }
    for ( i41 = 0; (int)i41 < *(int *)&stru_89E138.__pad_566C[220]; i41 = (CellStruct *)((char *)i41 + 1) )
    {
      (*(void (**)(unsigned int, void *))(**(unsigned int **)(*(unsigned int *)&stru_89E138.__pad_566C[208] + 4 * (unsigned int)i41)
                                             + 52))(
        *(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_566C[208] + 4 * (unsigned int)i41),
        v260);
      fprintf(v2, &stru_830620.__pad_579C[10796], i41);
    }
    __3_YAXPAX_Z(v260);
    fclose(v2);
  }
  else
  {
    GetLastError();
    Debug::Log();
  }

}
double MultiplayerConfig::Cleanup(...) { return 0; }

  MEMORY[0xABFDA0] = (int)&vt_VectorClass_MultiplayerGameMode; /*0x5d5b28*/
  if ( MEMORY[0xABFDA4] && MEMORY[0xABFDAD] ) /*0x5d5b3c*/
  {
    __3_YAXPAX_Z(MEMORY[0xABFDA4]); /*0x5d5b3f*/
    MEMORY[0xABFDA4] = 0; /*0x5d5b47*/
  }
  MEMORY[0xABFDAD] = 0; /*0x5d5b4d*/
  MEMORY[0xABFDA8] = 0; /*0x5d5b53*/

}
double NetworkEventQueueClass::WaitForResponse(...) { return 0; }

  int i; // eax
  int v3; // esi
  DWORD Ticks; // [esp+8h] [ebp-16Ch]
  unsigned char v6[340]; // [esp+20h] [ebp-154h] BYREF

  memset(v6, 0, 338); /*0x664545*/
  Timer::GetTicks(); /*0x664551*/
  LOBYTE(i) = *((unsigned char *)this + 24); /*0x66455a*/
  if ( (unsigned char)i ) /*0x664567*/
  {
    i = *((unsigned int *)this + 7); /*0x66456d*/
    if ( i ) /*0x664572*/
    {
      v6[0] = 3; /*0x664589*/
      Network::SendPacket(v6, 338, 1); /*0x66458e*/
      Ticks = Timer::GetTicks(); /*0x6645ae*/
      for ( i = HouseClass::GetUpgradeValue((int)MEMORY[0xA8E9C0]); /*0x6645bd*/
            i > 0;
            i = HouseClass::GetUpgradeValue((int)MEMORY[0xA8E9C0]) )
      {
        LOBYTE(i) = Ticks; /*0x6645c2*/
        v3 = 900; /*0x6645c6*/
        if ( Ticks != -1 ) /*0x6645cc*/
        {
          i = Timer::GetTicks() - Ticks; /*0x6645d7*/
          if ( i >= 900 ) /*0x6645dd*/
            return i; /*0x6645dd*/
          v3 = 900 - i; /*0x6645df*/
        }
        if ( !v3 ) /*0x6645e3*/
          break; /*0x6645e3*/
        Event::Dispatch(); /*0x6645e5*/
      }
    }
  }
  return i; /*0x6645f8*/

}
double NetworkID::Assign(...) { return 0; }

  *(this + 1) = *(unsigned int *)a3; /*0x53ed2a*/
  *((unsigned short *)this + 4) = *(unsigned short *)(a3 + 4); /*0x53ed31*/
  if ( dword_828140 == 1 ) /*0x53ed3d*/
  {
    *this = aP1->Socket; /*0x53ed45*/
    return (__int16)aP1; /*0x53ed3f*/
  }
  else
  {
    *this = 0; /*0x53ed4f*/
    *(unsigned short *)this = (unsigned short)aP3; /*0x53ed55*/
    return (__int16)aP3; /*0x53ed4a*/
  }

}
double NetworkID::Compare(...) { return 0; }

  return memcmp((const void *)(this + 4), (const void *)(a2 + 4), dword_828140 != 2 ? 6 : 4) == 0;

}
double NetworkSettings::DlgProc(...) { return 0; }

  int result; // eax
  WPARAM v5; // ebx
  int v6; // esi
  WPARAM v7; // edi
  LRESULT v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  LPARAM *v11; // eax
  __int16 v12; // cx
  HWND v13; // eax
  HWND v14; // eax
  int v15; // esi
  HWND v16; // eax
  unsigned int v18; // edi
  int v19; // esi
  wchar_t *String; // ebx
  HWND v21; // eax
  char *v22; // eax
  char *v23; // edi
  HWND DlgItem; // eax
  char *v25; // eax
  char *v26; // edi
  char *v27; // eax
  int v28; // eax
  char *v29; // eax
  char *v30; // edi
  int v31; // eax
  HWND v32; // eax
  POINT v33; // [esp-Ch] [ebp-54h]
  struct tagRECT Rect; // [esp+10h] [ebp-38h] BYREF
  char lParam[40]; // [esp+20h] [ebp-28h] BYREF
  HWND hWnda; // [esp+4Ch] [ebp+4h]

  if ( a2 > 0x200 ) /*0x5ddbe0*/
  {
    switch ( a2 ) /*0x5de05c*/
    {
      case 0x497u: /*0x5de05c*/
        MEMORY[0xAC0260] = 0; /*0x5de0a7*/
        MEMORY[0x831274] = 1; /*0x5de0ad*/
        Dialog::RefreshDialogsGame(hWnd); /*0x5de0b4*/
        SendDlgItemMessageA(hWnd, 1345, 0xC5u, 0x10u, 0); /*0x5de0cd*/
        SendDlgItemMessageA(hWnd, 1345, 0x4EBu, 0, (LPARAM)MEMORY[0x8304FC]); /*0x5de0e0*/
        SendDlgItemMessageA(hWnd, 1345, 0x4D1u, 1u, 0); /*0x5de0f0*/
        v23 = CharToWideString(MEMORY[0xA8B380]); /*0x5de108*/
        DlgItem = GetDlgItem(hWnd, 1345); /*0x5de10a*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v23); /*0x5de114*/
        HIWORD(MEMORY[0xA8B320]) = 0; /*0x5de12a*/
        MEMORY[0xA8B394] = MEMORY[0xA8B3B4]; /*0x5de131*/
        MEMORY[0xA8B398] = MEMORY[0xA8B3B8]; /*0x5de137*/
        PtrVector::Destroy(&MEMORY[0xA8DA5C]); /*0x5de13c*/
        PtrVector::Destroy(&MEMORY[0xA8DA74]); /*0x5de146*/
        PtrVector::Destroy(&MEMORY[0xA8DA44]); /*0x5de150*/
        v25 = (char *)__2_YAPAXI_Z(0x85u); /*0x5de15a*/
        v26 = v25; /*0x5de15f*/
        if ( v25 ) /*0x5de166*/
          Waypoint::InitInvalid(v25 + 40); /*0x5de16b*/
        else
          v26 = 0; /*0x5de172*/
        v27 = CharToWideString(MEMORY[0xA8B380]); /*0x5de179*/
        wcscpy((wchar_t *)v26, (const wchar_t *)v27); /*0x5de180*/
        *((unsigned int *)v26 + 13) = 0; /*0x5de185*/
        v26[56] = 0; /*0x5de188*/
        *(unsigned int *)(v26 + 57) = *((unsigned int *)&MEMORY[0xA8D667] + 1); /*0x5de195*/
        if ( MEMORY[0xA8DA54] < MEMORY[0xA8DA4C] /*0x5de1cc*/
          || (MEMORY[0xA8DA51] || !MEMORY[0xA8DA4C])
          && MEMORY[0xA8DA58] > 0
          && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xA8DA44] + 8))(
               &MEMORY[0xA8DA44],
               MEMORY[0xA8DA4C] + MEMORY[0xA8DA58],
               0) )
        {
          v28 = MEMORY[0xA8DA54]++; /*0x5de1d9*/
          *(unsigned int *)(MEMORY[0xA8DA48] + 4 * v28) = v26; /*0x5de1e8*/
        }
        v29 = (char *)__2_YAPAXI_Z(0x85u); /*0x5de1f0*/
        v30 = v29; /*0x5de1f5*/
        if ( v29 ) /*0x5de1fc*/
          Waypoint::InitInvalid(v29 + 40); /*0x5de201*/
        else
          v30 = 0; /*0x5de208*/
        wcscpy((wchar_t *)v30, &MEMORY[0x887734]); /*0x5de210*/
        v30[52] = 0; /*0x5de215*/
        *(unsigned int *)(v30 + 53) = 0; /*0x5de219*/
        if ( MEMORY[0xA8DA6C] < MEMORY[0xA8DA64] /*0x5de255*/
          || (MEMORY[0xA8DA69] || !MEMORY[0xA8DA64])
          && MEMORY[0xA8DA70] > 0
          && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xA8DA5C] + 8))(
               &MEMORY[0xA8DA5C],
               MEMORY[0xA8DA64] + MEMORY[0xA8DA70],
               0) )
        {
          v31 = MEMORY[0xA8DA6C]++; /*0x5de262*/
          *(unsigned int *)(MEMORY[0xA8DA60] + 4 * v31) = v30; /*0x5de271*/
        }
        SendNetworkHeartbeat(1, 0, 1, 1); /*0x5de27f*/
        NetworkLobby::UpdatePlayerList(); /*0x5de284*/
        GameSetup::DisplayPlayers(); /*0x5de28b*/
        Dialog::DrawBackground(hWnd); /*0x5de292*/
        v32 = GetDlgItem(hWnd, 1344); /*0x5de29d*/
        SetFocus(v32); /*0x5de2a0*/
        break;
      case 0x4DBu: /*0x5de05c*/
        NavigateDialogTab(hCtl, a3 != 0); /*0x5de08e*/
        return 0; /*0x5de09c*/
      case 0x4ECu: /*0x5de05c*/
        Dialog::EnumAndCleanup(hWnd); /*0x5de070*/
        return 0; /*0x5de07e*/
    }
    return 0; /*0x5de066*/
  }
  if ( a2 == 512 ) /*0x5ddbe6*/
  {
    hWnda = GetDlgItem(hWnd, 1685); /*0x5ddfcf*/
    if ( !hWnda ) /*0x5ddfd3*/
      return 0; /*0x5ddfd3*/
    v18 = (unsigned int)hCtl >> 16; /*0x5ddfe2*/
    v19 = (unsigned __int16)hCtl; /*0x5ddfea*/
    GetWindowRect(hWnd, &Rect); /*0x5ddff0*/
    String = &MEMORY[0x887734]; /*0x5de004*/
    v33.y = v18 - Rect.top; /*0x5de009*/
    v33.x = v19 - Rect.left; /*0x5de00a*/
    v21 = ChildWindowFromPointEx(hWnd, v33, 1u); /*0x5de00c*/
    if ( v21 ) /*0x5de014*/
    {
      v22 = DlgSkirmishMenuProc(hWnd, v21); /*0x5de01a*/
      if ( v22 ) /*0x5de021*/
        String = GetStringCSF((wchar_t *)v22, 0, MEMORY[0x831288], 2439); /*0x5de036*/
    }
    SendMessageA(hWnda, 0x4B2u, 0, (LPARAM)String); /*0x5de045*/
    return 0; /*0x5de04e*/
  }
  else
  {
    if ( a2 <= 0x2B ) /*0x5ddbef*/
    {
      switch ( a2 ) /*0x5ddbf1*/
      {
        case 0x2Bu: /*0x5ddbf1*/
          Dialog::Resize((char *)hCtl); /*0x5ddc3b*/
          return 1; /*0x5ddc4c*/
        case 0xFu: /*0x5ddbf1*/
          Dialog::DrawBackground(hWnd); /*0x5ddc16*/
          Dialog::StopBink(hWnd); /*0x5ddc1d*/
          ValidateRect(hWnd, 0); /*0x5ddc25*/
          return 0; /*0x5ddc34*/
        case 0x14u: /*0x5ddbf1*/
          return 1; /*0x5ddc0d*/
      }
      return 0; /*0x5ddbfb*/
    }
    if ( a2 != 273 ) /*0x5ddc54*/
      return 0; /*0x5ddc54*/
    v5 = a3; /*0x5ddc5a*/
    v6 = (unsigned __int16)a3; /*0x5ddc60*/
    if ( (unsigned __int16)a3 <= 0x5C0u ) /*0x5ddc6c*/
    {
      switch ( (unsigned __int16)a3 ) /*0x5ddc72*/
      {
        case 0x5C0u: /*0x5ddc72*/
          MEMORY[0xAC025C] = 1472; /*0x5ddedb*/
          Config::SaveObserverMode(); /*0x5ddee5*/
          return 0; /*0x5ddef3*/
        case 0x540u: /*0x5ddc72*/
          ReadChatMessage((wchar_t **)&a3, hCtl); /*0x5dde9c*/
          DeleteAndZero::Alt((void **)&a3); /*0x5ddea5*/
          if ( HIWORD(v5) == 1281 ) /*0x5ddeb3*/
          {
            SendNetworkLobbyChatMessage(hWnd, 61680); /*0x5ddeca*/
            return 0; /*0x5dded8*/
          }
          return 0; /*0x5ddeb3*/
        case 0x541u: /*0x5ddc72*/
          if ( IsWindowEnabled(hWnd) && !MEMORY[0xAC025C] ) /*0x5ddd90*/
          {
            *(unsigned short *)lParam = 0; /*0x5ddda2*/
            v10 = GetDlgItem(hWnd, 1345); /*0x5ddda7*/
            SendMessageA(v10, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5dddbc*/
            v11 = (LPARAM *)lParam; /*0x5dddbe*/
            if ( *(unsigned short *)lParam ) /*0x5dddca*/
            {
              v12 = *(unsigned short *)lParam; /*0x5dddcc*/
              do /*0x5ddde0*/
              {
                if ( v12 != 32 ) /*0x5dddd4*/
                  break; /*0x5dddd4*/
                v12 = *((unsigned short *)v11 + 1); /*0x5dddd6*/
                v11 = (LPARAM *)((char *)v11 + 2); /*0x5dddda*/
              }
              while ( v12 ); /*0x5ddde0*/
            }
            if ( !*(unsigned short *)v11 && *(unsigned short *)lParam ) /*0x5dddea*/
            {
              *(unsigned short *)lParam = 0; /*0x5dddf2*/
              v13 = GetDlgItem(hWnd, 1345); /*0x5dddf7*/
              SendMessageA(v13, 0x4B2u, 0, (LPARAM)lParam); /*0x5dde05*/
            }
            if ( strcmp(ToWideStringChar(lParam), MEMORY[0xA8B380]) ) /*0x5dde1d*/
            {
              strcpy(MEMORY[0xA8B380], ToWideStringChar(lParam)); /*0x5dde71*/
              SendNetworkHeartbeat(0, 0, 1, 0); /*0x5dde7c*/
              GameSetup::DisplayPlayers(); /*0x5dde83*/
              return 0; /*0x5dde91*/
            }
          }
          return 0; /*0x5dde44*/
      }
      if ( (unsigned __int16)a3 == 1353 && MEMORY[0xAC0264] <= 0 ) /*0x5ddc9b*/
      {
        v7 = MEMORY[0xAC0260]; /*0x5ddca5*/
        v8 = SendDlgItemMessageA(hWnd, 1353, 0x188u, 0, 0); /*0x5ddcba*/
        if ( v8 >= 0 && MEMORY[0x831274] ) /*0x5ddccc*/
        {
          MEMORY[0xAC0260] = v8; /*0x5ddcd4*/
          wcscpy(&MEMORY[0xA8D610], *(const wchar_t **)(MEMORY[0xA8DA60] + 4 * v8)); /*0x5ddce2*/
        }
        if ( HIWORD(v5) == 1 ) /*0x5ddcf3*/
        {
          PtrVector::Destroy(&MEMORY[0xA8DA74]); /*0x5ddcfa*/
          if ( v7 != MEMORY[0xAC0260] ) /*0x5ddd05*/
            SendNetworkHeartbeat(1, 1, 1, 0); /*0x5ddd12*/
          GameSetup::DisplayPlayers(); /*0x5ddd19*/
          return 0; /*0x5ddd27*/
        }
        if ( HIWORD(v5) == 2 ) /*0x5ddd2e*/
        {
          EnableWindow(hWnd, 0); /*0x5ddd3d*/
          v9 = GetDlgItem(hWnd, 1345); /*0x5ddd45*/
          if ( v9 ) /*0x5ddd4d*/
            EnableWindow(v9, 0); /*0x5ddd52*/
          MEMORY[0xAC025C] = 1742 - (MEMORY[0xAC10C8] != 1); /*0x5ddd67*/
          return 0; /*0x5ddd71*/
        }
      }
      return 0; /*0x5de2a9*/
    }
    switch ( (__int16)a3 ) /*0x5ddf0f*/
    {
      case 1740: /*0x5ddf0f*/
        MEMORY[0xAC025C] = (unsigned __int16)a3; /*0x5ddf1b*/
        MEMORY[0xAC0269] = MEMORY[0xAC10C8] == 1; /*0x5ddf29*/
        result = 0; /*0x5ddf2f*/
        break; /*0x5ddf35*/
      case 1741: /*0x5ddf0f*/
      case 1742: /*0x5ddf0f*/
        EnableWindow(hWnd, 0); /*0x5ddf45*/
        v14 = GetDlgItem(hWnd, 1345); /*0x5ddf4d*/
        if ( v14 ) /*0x5ddf55*/
          EnableWindow(v14, 0); /*0x5ddf5a*/
        MEMORY[0xAC025C] = v6; /*0x5ddf5c*/
        result = 0; /*0x5ddf65*/
        break; /*0x5ddf6b*/
      case 1887: /*0x5ddf0f*/
      case 1888: /*0x5ddf0f*/
        v15 = 0; /*0x5ddf78*/
        v16 = GetDlgItem(hWnd, 1888); /*0x5ddf7a*/
        if ( v16 ) /*0x5ddf82*/
          v15 = SendMessageA(v16, 0xF0u, 0, 0); /*0x5ddf92*/
        if ( (unsigned short)v5 == 1887 ) /*0x5ddf99*/
          v15 = v15 == 0; /*0x5ddfa2*/
        MEMORY[0xAC10C8] = v15; /*0x5ddfa6*/
        Dialog::RefreshDialogsGame(0); /*0x5ddfac*/
        result = 0; /*0x5ddfb4*/
        break; /*0x5ddfba*/
      default:
        return 0;
    }
  }
  return result; /*0x5ddc01*/

}
// 0x5f3db0
double ObjectClass::CalcTargetFacing(...) { return 0; }

  ObjectClass *v4; // edi
  int *v5; // eax
  double v6; // st7
  unsigned char v8[12]; // [esp+24h] [ebp-18h] BYREF
  unsigned char v9[12]; // [esp+30h] [ebp-Ch] BYREF
  ObjectClass *aP2a; // [esp+44h] [ebp+8h]

  v4 = (ObjectClass *)(*(int (**)(ObjectClass *, unsigned char *))(*(unsigned int *)aP2->__pad_0 + 72))(aP2, v8); /*0x5f3dc9*/
  v5 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)this + 72))(this, v9); /*0x5f3dd0*/
  aP2a = *(ObjectClass **)v4->__pad_0; /*0x5f3dd7*/
  v6 = Math::CalcAngle((double)v5[1] - (double)*(int *)&v4->__pad_0[4], (double)*(int *)v4->__pad_0 - (double)*v5); /*0x5f3dfa*/
  LOWORD(aP2a) = Math::RoundToInt((v6 - 1.570796326794897) * -10430.06004058427); /*0x5f3e13*/
  aP1->field_0 = (int)aP2a; /*0x5f3e21*/
  return &aP1->field_0; /*0x5f3e20*/

}
  ObjectClass *v4; // edi
  int *v5; // eax
  double v6; // st7
  unsigned char v8[12]; // [esp+24h] [ebp-18h] BYREF
  unsigned char v9[12]; // [esp+30h] [ebp-Ch] BYREF
  ObjectClass *aP2a; // [esp+44h] [ebp+8h]

  v4 = (ObjectClass *)(*(int (**)(ObjectClass *, unsigned char *))(*(unsigned int *)aP2->__pad_0 + 72))(aP2, v8); /*0x5f3dc9*/
  v5 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)this + 72))(this, v9); /*0x5f3dd0*/
  aP2a = *(ObjectClass **)v4->__pad_0; /*0x5f3dd7*/
  v6 = Math::CalcAngle((double)v5[1] - (double)*(int *)&v4->__pad_0[4], (double)*(int *)v4->__pad_0 - (double)*v5); /*0x5f3dfa*/
  LOWORD(aP2a) = Math::RoundToInt((v6 - 1.570796326794897) * -10430.06004058427); /*0x5f3e13*/
  aP1->field_0 = (int)aP2a; /*0x5f3e21*/
  return &aP1->field_0; /*0x5f3e20*/

}
double ObjectClass::Cleanup(...) { return 0; }

  int v2; // ebp
  int *v3; // edi
  unsigned int *v4; // edx
  unsigned int *v5; // edx
  unsigned int *v6; // edx
  unsigned int *v7; // edx
  int result; // eax
  unsigned int *v9; // edx

  v2 = *((char *)this + 43); /*0x402226*/
  v3 = (char *)this + 54; /*0x40222c*/
  AudioMixer::Init((char *)this + 54); /*0x402234*/
  EndFrameAudioMixer(v3, (char *)this + 4); /*0x402240*/
  ObjectClass::ClearFlags2((char *)this + 4); /*0x402247*/
  v4 = (unsigned int *)*((char *)this + 36); /*0x40224c*/
  if ( v4 ) /*0x402254*/
  {
    EndFrameAudioMixer(v3, v4); /*0x402258*/
    ObjectClass::ClearFlags2((unsigned int *)*((char *)this + 36)); /*0x402263*/
  }
  v5 = (unsigned int *)*((char *)this + 37); /*0x402268*/
  if ( v5 ) /*0x402270*/
    EndFrameAudioMixer(v3, v5); /*0x402274*/
  v6 = (unsigned int *)*((char *)this + 38); /*0x402279*/
  if ( v6 ) /*0x402281*/
    EndFrameAudioMixer(v3, v6); /*0x402285*/
  v7 = (unsigned int *)*((char *)this + 39); /*0x40228a*/
  if ( v7 ) /*0x402292*/
    EndFrameAudioMixer(v3, v7); /*0x402296*/
  result = EndFrameAudioMixer(v3, (unsigned int *)(v2 + 104)); /*0x4022a0*/
  v9 = *(unsigned int **)(v2 + 232); /*0x4022a5*/
  if ( v9 ) /*0x4022ad*/
    return EndFrameAudioMixer(v3, v9); /*0x4022b1*/
  return result; /*0x4022b6*/

}
double ObjectClass::FreeResources(...) { return 0; }

  void (***v2)(unsigned int, int); // ecx

  v2 = *(void (****)(unsigned int, int))((char *)this + 56); /*0x5f1966*/
  if ( v2 ) /*0x5f196b*/
  {
    (**v2)(v2, 1); /*0x5f1971*/
    *((unsigned int *)this + 14) = 0; /*0x5f1973*/
  }
  if ( *((unsigned int *)this + 20) ) /*0x5f1976*/
  {
    __3_YAXPAX_Z(*(void **)((char *)this + 80)); /*0x5f197e*/
    *((unsigned int *)this + 20) = 0; /*0x5f1986*/
  }
  if ( *((unsigned int *)this + 1) ) /*0x5f1989*/
  {
    __3_YAXPAX_Z(*(void **)((char *)this + 4)); /*0x5f1991*/
    *((unsigned int *)this + 1) = 0; /*0x5f1999*/
  }
  if ( *((unsigned int *)this + 3) ) /*0x5f199c*/
  {
    __3_YAXPAX_Z(*(void **)((char *)this + 12)); /*0x5f19a4*/
    *((unsigned int *)this + 3) = 0; /*0x5f19ac*/
  }
  *((unsigned int *)this + 15) = 0; /*0x5f19af*/
  return 1; /*0x5f19b2*/

}
double ObjectClass::GetLandHeight(...) { return 0; }

  return *(char *)((*(int (**)(unsigned char *))(*(unsigned int *)this + 444))(this) + 283) + (*((unsigned char *)this + 140) != 0 ? 4 : 0);

}
double ObjectClass::GetSizeMax(...) { return 0; }

  int v2; // [esp+8h] [ebp+4h]
  unsigned int *v3; // [esp+Ch] [ebp+8h]

  if ( !v3 ) /*0x4103e7*/
    return -2147467261; /*0x4103e9*/
  *v3 = (*(int (**)(int))(*(unsigned int *)v2 + 48))(v2) + 4; /*0x4103fe*/
  v3[1] = 0; /*0x410400*/
  return 0; /*0x4103ee*/

}
double ObjectClass::Init(...) { return 0; }

  AbstractClass::InitVtables(this, (int)aP1); /*0x5f3b58*/
  *this = &ObjectClass::`vftable'; /*0x5f3b5d*/
  *(this + 1) = &ObjectClass::`vftable'; /*0x5f3b63*/
  *(this + 2) = &ObjectClass::`vftable'; /*0x5f3b6a*/
  *(this + 3) = &vt_ObjectClass; /*0x5f3b71*/
  return this; /*0x5f3b7a*/

}
double ObjectClass::PreDraw(...) { return 0; }

  int v1; // eax

  v1 = *(unsigned int *)this; /*0x6d0f00*/
  *((unsigned char *)this + 21829) = 1; /*0x6d0f04*/
  return (*(int (**)(unsigned int))(v1 + 56))(0); /*0x6d0f0e*/

}
double ObjectClass::SetReference(...) { return 0; }

  int v2; // eax

  v2 = *(this + 13); /*0x5f5b50*/
  if ( v2 ) /*0x5f5b55*/
  {
    --*(unsigned int *)(v2 + 44); /*0x5f5b5b*/
    *(this + 13) = 0; /*0x5f5b5e*/
  }
  if ( !a2 ) /*0x5f5b6b*/
    return 0; /*0x5f5b7c*/
  *(this + 13) = a2; /*0x5f5b6d*/
  ++*(unsigned int *)(a2 + 44); /*0x5f5b74*/
  return 1; /*0x5f5b79*/

}
double ObjectClass::StepCleanup(...) { return 0; }

  (*(void (**)(void *))(*(unsigned int *)this + 136))(this); /*0x5f3e57*/
  return AbstractTypeClass::NameEquals(a2); /*0x5f3e64*/

}
// 0x5f3900
double ObjectClass::ctor(...) { return 0; }

  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  AbstractClass::Constructor((int)this); /*0x5f3904*/
  *((unsigned int *)this + 9) = 0; /*0x5f3910*/
  *((unsigned int *)this + 10) = 0; /*0x5f3913*/
  *((unsigned int *)this + 11) = 0; /*0x5f3916*/
  *((unsigned int *)this + 27) = 255; /*0x5f3919*/
  *((unsigned int *)this + 28) = 255; /*0x5f391c*/
  *((unsigned int *)this + 30) = 1; /*0x5f3927*/
  *((unsigned char *)this + 129) = 1; /*0x5f392a*/
  *((unsigned char *)this + 144) = 1; /*0x5f3930*/
  *((unsigned char *)this + 153) = 1; /*0x5f3936*/
  *((unsigned int *)this + 12) = 0; /*0x5f393c*/
  *((unsigned int *)this + 13) = 0; /*0x5f393f*/
  *((unsigned int *)this + 14) = 0; /*0x5f3942*/
  *((unsigned int *)this + 25) = -1; /*0x5f3945*/
  *((unsigned char *)this + 104) = 0; /*0x5f3948*/
  *((unsigned char *)this + 116) = 0; /*0x5f394b*/
  *((unsigned int *)this + 31) = 0; /*0x5f394e*/
  *((unsigned char *)this + 128) = 0; /*0x5f3951*/
  *((unsigned char *)this + 130) = 0; /*0x5f3957*/
  *((unsigned char *)this + 131) = 0; /*0x5f395d*/
  *((unsigned char *)this + 132) = 0; /*0x5f3963*/
  *((unsigned int *)this + 34) = 0; /*0x5f3969*/
  *((unsigned char *)this + 140) = 0; /*0x5f396f*/
  *((unsigned char *)this + 141) = 0; /*0x5f3975*/
  *((unsigned char *)this + 142) = 0; /*0x5f397b*/
  *((unsigned char *)this + 143) = 0; /*0x5f3981*/
  *((unsigned int *)this + 37) = -1; /*0x5f3987*/
  *((unsigned char *)this + 152) = 0; /*0x5f398d*/
  *((unsigned int *)this + 39) = MEMORY[0xAC1380]; /*0x5f399f*/
  *((unsigned int *)this + 40) = MEMORY[0xAC1384]; /*0x5f39ab*/
  v2 = MEMORY[0xAC1388]; /*0x5f39ae*/
  *((unsigned int *)this + 42) = 0; /*0x5f39b4*/
  *this = &ObjectClass::`vftable'; /*0x5f39ba*/
  *((unsigned int *)this + 41) = v2; /*0x5f39c0*/
  *((unsigned int *)this + 1) = &ObjectClass::`vftable'; /*0x5f39c6*/
  *((unsigned int *)this + 2) = &ObjectClass::`vftable'; /*0x5f39cd*/
  *((unsigned int *)this + 3) = &ObjectClass::`vftable'; /*0x5f39d4*/
  AudioController::Init((unsigned int *)this + 15); /*0x5f39db*/
  AudioController::Init((unsigned int *)this + 20); /*0x5f39e3*/
  if ( MEMORY[0xA8E370] < MEMORY[0xA8E368] /*0x5f3a1c*/
    || (MEMORY[0xA8E36D] || !MEMORY[0xA8E368])
    && MEMORY[0xA8E374] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xA8E360] + 8))(
         &MEMORY[0xA8E360],
         MEMORY[0xA8E368] + MEMORY[0xA8E374],
         0) )
  {
    v3 = MEMORY[0xA8E370]++; /*0x5f3a29*/
    *((unsigned int *)MEMORY[0xA8E364] + v3) = this; /*0x5f3a38*/
  }
  if ( MEMORY[0xB0F730] < MEMORY[0xB0F728] /*0x5f3a6f*/
    || (MEMORY[0xB0F72D] || !MEMORY[0xB0F728])
    && MEMORY[0xB0F734] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xB0F720] + 8))(
         &MEMORY[0xB0F720],
         MEMORY[0xB0F728] + MEMORY[0xB0F734],
         0) )
  {
    v4 = MEMORY[0xB0F730]++; /*0x5f3a7c*/
    *((unsigned int *)MEMORY[0xB0F724] + v4) = this; /*0x5f3a8b*/
  }
  if ( MEMORY[0xB0F680] < MEMORY[0xB0F678] /*0x5f3ac2*/
    || (MEMORY[0xB0F67D] || !MEMORY[0xB0F678])
    && MEMORY[0xB0F684] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xB0F670] + 8))(
         &MEMORY[0xB0F670],
         MEMORY[0xB0F678] + MEMORY[0xB0F684],
         0) )
  {
    v5 = MEMORY[0xB0F680]++; /*0x5f3acf*/
    *((unsigned int *)MEMORY[0xB0F674] + v5) = this; /*0x5f3ade*/
  }
  if ( MEMORY[0xB0F628] < MEMORY[0xB0F620] /*0x5f3b15*/
    || (MEMORY[0xB0F625] || !MEMORY[0xB0F620])
    && MEMORY[0xB0F62C] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xB0F618] + 8))(
         &MEMORY[0xB0F618],
         MEMORY[0xB0F620] + MEMORY[0xB0F62C],
         0) )
  {
    v6 = MEMORY[0xB0F628]++; /*0x5f3b22*/
    *((unsigned int *)MEMORY[0xB0F61C] + v6) = this; /*0x5f3b31*/
  }
  *((unsigned char *)this + 20) |= 2u; /*0x5f3b39*/
  return this; /*0x5f3b3e*/

}
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  AbstractClass::Constructor((int)this); /*0x5f3904*/
  *((unsigned int *)this + 9) = 0; /*0x5f3910*/
  *((unsigned int *)this + 10) = 0; /*0x5f3913*/
  *((unsigned int *)this + 11) = 0; /*0x5f3916*/
  *((unsigned int *)this + 27) = 255; /*0x5f3919*/
  *((unsigned int *)this + 28) = 255; /*0x5f391c*/
  *((unsigned int *)this + 30) = 1; /*0x5f3927*/
  *((unsigned char *)this + 129) = 1; /*0x5f392a*/
  *((unsigned char *)this + 144) = 1; /*0x5f3930*/
  *((unsigned char *)this + 153) = 1; /*0x5f3936*/
  *((unsigned int *)this + 12) = 0; /*0x5f393c*/
  *((unsigned int *)this + 13) = 0; /*0x5f393f*/
  *((unsigned int *)this + 14) = 0; /*0x5f3942*/
  *((unsigned int *)this + 25) = -1; /*0x5f3945*/
  *((unsigned char *)this + 104) = 0; /*0x5f3948*/
  *((unsigned char *)this + 116) = 0; /*0x5f394b*/
  *((unsigned int *)this + 31) = 0; /*0x5f394e*/
  *((unsigned char *)this + 128) = 0; /*0x5f3951*/
  *((unsigned char *)this + 130) = 0; /*0x5f3957*/
  *((unsigned char *)this + 131) = 0; /*0x5f395d*/
  *((unsigned char *)this + 132) = 0; /*0x5f3963*/
  *((unsigned int *)this + 34) = 0; /*0x5f3969*/
  *((unsigned char *)this + 140) = 0; /*0x5f396f*/
  *((unsigned char *)this + 141) = 0; /*0x5f3975*/
  *((unsigned char *)this + 142) = 0; /*0x5f397b*/
  *((unsigned char *)this + 143) = 0; /*0x5f3981*/
  *((unsigned int *)this + 37) = -1; /*0x5f3987*/
  *((unsigned char *)this + 152) = 0; /*0x5f398d*/
  *((unsigned int *)this + 39) = MEMORY[0xAC1380]; /*0x5f399f*/
  *((unsigned int *)this + 40) = MEMORY[0xAC1384]; /*0x5f39ab*/
  v2 = MEMORY[0xAC1388]; /*0x5f39ae*/
  *((unsigned int *)this + 42) = 0; /*0x5f39b4*/
  *this = &ObjectClass::`vftable'; /*0x5f39ba*/
  *((unsigned int *)this + 41) = v2; /*0x5f39c0*/
  *((unsigned int *)this + 1) = &ObjectClass::`vftable'; /*0x5f39c6*/
  *((unsigned int *)this + 2) = &ObjectClass::`vftable'; /*0x5f39cd*/
  *((unsigned int *)this + 3) = &ObjectClass::`vftable'; /*0x5f39d4*/
  AudioController::Init((unsigned int *)this + 15); /*0x5f39db*/
  AudioController::Init((unsigned int *)this + 20); /*0x5f39e3*/
  if ( MEMORY[0xA8E370] < MEMORY[0xA8E368] /*0x5f3a1c*/
    || (MEMORY[0xA8E36D] || !MEMORY[0xA8E368])
    && MEMORY[0xA8E374] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xA8E360] + 8))(
         &MEMORY[0xA8E360],
         MEMORY[0xA8E368] + MEMORY[0xA8E374],
         0) )
  {
    v3 = MEMORY[0xA8E370]++; /*0x5f3a29*/
    *((unsigned int *)MEMORY[0xA8E364] + v3) = this; /*0x5f3a38*/
  }
  if ( MEMORY[0xB0F730] < MEMORY[0xB0F728] /*0x5f3a6f*/
    || (MEMORY[0xB0F72D] || !MEMORY[0xB0F728])
    && MEMORY[0xB0F734] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xB0F720] + 8))(
         &MEMORY[0xB0F720],
         MEMORY[0xB0F728] + MEMORY[0xB0F734],
         0) )
  {
    v4 = MEMORY[0xB0F730]++; /*0x5f3a7c*/
    *((unsigned int *)MEMORY[0xB0F724] + v4) = this; /*0x5f3a8b*/
  }
  if ( MEMORY[0xB0F680] < MEMORY[0xB0F678] /*0x5f3ac2*/
    || (MEMORY[0xB0F67D] || !MEMORY[0xB0F678])
    && MEMORY[0xB0F684] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xB0F670] + 8))(
         &MEMORY[0xB0F670],
         MEMORY[0xB0F678] + MEMORY[0xB0F684],
         0) )
  {
    v5 = MEMORY[0xB0F680]++; /*0x5f3acf*/
    *((unsigned int *)MEMORY[0xB0F674] + v5) = this; /*0x5f3ade*/
  }
  if ( MEMORY[0xB0F628] < MEMORY[0xB0F620] /*0x5f3b15*/
    || (MEMORY[0xB0F625] || !MEMORY[0xB0F620])
    && MEMORY[0xB0F62C] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0xB0F618] + 8))(
         &MEMORY[0xB0F618],
         MEMORY[0xB0F620] + MEMORY[0xB0F62C],
         0) )
  {
    v6 = MEMORY[0xB0F628]++; /*0x5f3b22*/
    *((unsigned int *)MEMORY[0xB0F61C] + v6) = this; /*0x5f3b31*/
  }
  *((unsigned char *)this + 20) |= 2u; /*0x5f3b39*/
  return this; /*0x5f3b3e*/

}
double ObjectClass::q0E8(...) { return 0; }
double ObjectClass::q0EC(...) { return 0; }
double ObjectClass::q0ED(...) { return 0; }
double ObjectClass::q21C(...) { return 0; }
double ObjectClass::q6E0(...) { return 0; }
double ObjectClass::qD68(...) { return 0; }
double ObjectClass::vtable0(...) { return 0; }
// 0x481180
double ObjectPlacement::CalcPosition(...) { return 0; }

  int v7; // ecx
  int *v8; // eax
  double v9; // st7
  int v10; // edi
  unsigned int *v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  bool v18; // al
  unsigned int *v19; // eax
  unsigned int *v20; // eax
  bool v22; // zf
  unsigned __int8 *v23; // edi
  unsigned int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // esi
  int v29; // edi
  int GroundHeight; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // [esp+18h] [ebp-1Ch] BYREF
  int v34; // [esp+1Ch] [ebp-18h]
  unsigned int v35[2]; // [esp+20h] [ebp-14h] BYREF
  char v36[4]; // [esp+28h] [ebp-Ch] BYREF
  int v37; // [esp+2Ch] [ebp-8h]
  int v38; // [esp+30h] [ebp-4h]
  int v39; // [esp+48h] [ebp+14h]

  v7 = (unsigned __int8)aP2->field_4; /*0x48119b*/
  v33 = (unsigned __int8)aP2->field_0; /*0x4811a1*/
  v34 = v7; /*0x4811aa*/
  v35[0] = 128; /*0x4811b9*/
  v35[1] = 128; /*0x4811bd*/
  v8 = Coord2D::Sub(&v33, (AbstractClass *)v36, (IUnknown *)v35); /*0x4811c1*/
  v9 = Math::Sqrt((double)*v8 * (double)*v8 + (double)v8[1] * (double)v8[1]); /*0x4811df*/
  if ( (int)Math::RoundToInt(v9) >= 60 ) /*0x4811ef*/
  {
    v10 = v33 > 128; /*0x4811ff*/
    if ( v34 > 128 ) /*0x481208*/
      v10 |= 2u; /*0x48120a*/
    if ( v10 ) /*0x48120f*/
      ++v10; /*0x481211*/
  }
  else
  {
    v10 = 0; /*0x4811f1*/
  }
  if ( a6 ) /*0x481218*/
  {
    v11 = (unsigned int *)(*(int (**)(unsigned int *, char *))(*this + 72))(this, v36); /*0x481226*/
    v12 = v11[1]; /*0x48122c*/
    v13 = *v11 - (unsigned __int8)*v11; /*0x481235*/
    v14 = v11[2]; /*0x481239*/
    v15 = v12 - (unsigned __int8)v12; /*0x481242*/
  }
  else
  {
    v13 = aP2->field_0 - (unsigned __int8)aP2->field_0; /*0x481251*/
    v15 = aP2->field_4 - (unsigned __int8)aP2->field_4; /*0x48125e*/
    v14 = aP2->field_8; /*0x481260*/
  }
  v16 = v13; /*0x481263*/
  v37 = v15; /*0x48126b*/
  v38 = v14; /*0x48126f*/
  if ( a5 ) /*0x481273*/
    v17 = *(this + 74); /*0x481275*/
  else
    v17 = *(this + 73); /*0x48127d*/
  v18 = (v17 & 0x20) != 0; /*0x48128a*/
  if ( !a4 )
  {
    if ( v18 ) /*0x481296*/
      goto LABEL_22; /*0x481296*/
    if ( (*(unsigned char *)(this + 73) & 0x40) != 0 ) /*0x48129f*/
    {
      v19 = PlacementList::FindByID(this, 6, 0); /*0x4812a7*/
      if ( !v19 || !*(unsigned char *)(v19[328] + 5815) ) /*0x4812b6*/
        goto LABEL_22; /*0x4812b6*/
      v20 = PlacementList::FindByID(this, 6, 0); /*0x4812c6*/
      if ( v20 && !*(unsigned char *)(v20[328] + 5815) ) /*0x4812d5*/
        v20 = 0; /*0x4812df*/
      if ( !BuildingClass::IsPoweredOn(v20) ) /*0x4812e3*/
      {
LABEL_22:
        *a1 = MEMORY[0x89E778]; /*0x4812fb*/
        a1[1] = MEMORY[0x89E77C]; /*0x481304*/
        a1[2] = MEMORY[0x89E780]; /*0x48130d*/
        return a1; /*0x481313*/
      }
    }
    if ( !v10 ) /*0x481318*/
    {
      v23 = (unsigned __int8 *)(4 * Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)3) + 8506520); /*0x48139f*/
      goto LABEL_30; /*0x4813a6*/
    }
    if ( v10 == 1
      || (!a5
        ? (v22 = ((unsigned __int8)(1 << v10) & *(unsigned char *)(this + 73)) == 0)
        : (v22 = (*(unsigned char *)(this + 74) & (unsigned __int8)(1 << v10)) == 0),
          !v22) )
    {
      v23 = (unsigned __int8 *)(4 * v10 + 8506500); /*0x481356*/
LABEL_30:
      v39 = 0; /*0x48135d*/
      while ( 1 ) /*0x481367*/
      {
        v24 = *v23++; /*0x481367*/
        if ( v24 >= 2 ) /*0x48136c*/
        {
          if ( a5 ) /*0x481379*/
          {
            LOBYTE(v25) = *((unsigned char *)this + 296); /*0x48137b*/
            v26 = 1 << v24; /*0x481386*/
          }
          else
          {
            LOBYTE(v26) = *((unsigned char *)this + 292); /*0x4813a8*/
            v25 = 1 << v24; /*0x4813b3*/
          }
          if ( ((unsigned __int8)v25 & (unsigned __int8)v26) == 0 ) /*0x4813bc*/
            break; /*0x4813bc*/
        }
        if ( ++v39 >= 4 ) /*0x4813ca*/
        {
          *a1 = MEMORY[0x89E778]; /*0x4813db*/
          a1[1] = MEMORY[0x89E77C]; /*0x4813e4*/
          a1[2] = MEMORY[0x89E780]; /*0x4813ed*/
          return a1; /*0x4813f3*/
        }
      }
      v27 = 3 * v24; /*0x4813fa*/
      v28 = v16 + MEMORY[0x89E9F0][v27]; /*0x48141b*/
      v29 = v37 + MEMORY[0x89E9F4][v27]; /*0x481422*/
      v38 += MEMORY[0x89E9F8][v27]; /*0x481424*/
      GroundHeight = Cell::GetGroundHeight(aP2); /*0x481428*/
      if ( !a5 ) /*0x481433*/
        goto LABEL_43; /*0x481433*/
      goto LABEL_42; /*0x481433*/
    }
  }
  v31 = MEMORY[0x89E9F0][3 * v10]; /*0x481443*/
  v32 = MEMORY[0x89E9F8][3 * v10]; /*0x48145c*/
  v29 = v37 + MEMORY[0x89E9F4][3 * v10]; /*0x48145f*/
  v28 = v16 + v31; /*0x481463*/
  v38 += v32; /*0x48146a*/
  GroundHeight = Cell::GetGroundHeight(aP2); /*0x48146e*/
  if ( a5 ) /*0x481479*/
LABEL_42:
    GroundHeight += MEMORY[0x89E7B4]; /*0x48147b*/
LABEL_43:
  *a1 = v28; /*0x481481*/
  a1[1] = v29; /*0x481489*/
  a1[2] = GroundHeight; /*0x48148f*/
  return a1; /*0x4812f8*/

}
  int v7; // ecx
  int *v8; // eax
  double v9; // st7
  int v10; // edi
  unsigned int *v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  bool v18; // al
  unsigned int *v19; // eax
  unsigned int *v20; // eax
  bool v22; // zf
  unsigned __int8 *v23; // edi
  unsigned int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // esi
  int v29; // edi
  int GroundHeight; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // [esp+18h] [ebp-1Ch] BYREF
  int v34; // [esp+1Ch] [ebp-18h]
  unsigned int v35[2]; // [esp+20h] [ebp-14h] BYREF
  char v36[4]; // [esp+28h] [ebp-Ch] BYREF
  int v37; // [esp+2Ch] [ebp-8h]
  int v38; // [esp+30h] [ebp-4h]
  int v39; // [esp+48h] [ebp+14h]

  v7 = (unsigned __int8)aP2->field_4; /*0x48119b*/
  v33 = (unsigned __int8)aP2->field_0; /*0x4811a1*/
  v34 = v7; /*0x4811aa*/
  v35[0] = 128; /*0x4811b9*/
  v35[1] = 128; /*0x4811bd*/
  v8 = Coord2D::Sub(&v33, (AbstractClass *)v36, (IUnknown *)v35); /*0x4811c1*/
  v9 = Math::Sqrt((double)*v8 * (double)*v8 + (double)v8[1] * (double)v8[1]); /*0x4811df*/
  if ( (int)Math::RoundToInt(v9) >= 60 ) /*0x4811ef*/
  {
    v10 = v33 > 128; /*0x4811ff*/
    if ( v34 > 128 ) /*0x481208*/
      v10 |= 2u; /*0x48120a*/
    if ( v10 ) /*0x48120f*/
      ++v10; /*0x481211*/
  }
  else
  {
    v10 = 0; /*0x4811f1*/
  }
  if ( a6 ) /*0x481218*/
  {
    v11 = (unsigned int *)(*(int (**)(unsigned int *, char *))(*this + 72))(this, v36); /*0x481226*/
    v12 = v11[1]; /*0x48122c*/
    v13 = *v11 - (unsigned __int8)*v11; /*0x481235*/
    v14 = v11[2]; /*0x481239*/
    v15 = v12 - (unsigned __int8)v12; /*0x481242*/
  }
  else
  {
    v13 = aP2->field_0 - (unsigned __int8)aP2->field_0; /*0x481251*/
    v15 = aP2->field_4 - (unsigned __int8)aP2->field_4; /*0x48125e*/
    v14 = aP2->field_8; /*0x481260*/
  }
  v16 = v13; /*0x481263*/
  v37 = v15; /*0x48126b*/
  v38 = v14; /*0x48126f*/
  if ( a5 ) /*0x481273*/
    v17 = *(this + 74); /*0x481275*/
  else
    v17 = *(this + 73); /*0x48127d*/
  v18 = (v17 & 0x20) != 0; /*0x48128a*/
  if ( !a4 )
  {
    if ( v18 ) /*0x481296*/
      goto LABEL_22; /*0x481296*/
    if ( (*(unsigned char *)(this + 73) & 0x40) != 0 ) /*0x48129f*/
    {
      v19 = PlacementList::FindByID(this, 6, 0); /*0x4812a7*/
      if ( !v19 || !*(unsigned char *)(v19[328] + 5815) ) /*0x4812b6*/
        goto LABEL_22; /*0x4812b6*/
      v20 = PlacementList::FindByID(this, 6, 0); /*0x4812c6*/
      if ( v20 && !*(unsigned char *)(v20[328] + 5815) ) /*0x4812d5*/
        v20 = 0; /*0x4812df*/
      if ( !BuildingClass::IsPoweredOn(v20) ) /*0x4812e3*/
      {
LABEL_22:
        *a1 = MEMORY[0x89E778]; /*0x4812fb*/
        a1[1] = MEMORY[0x89E77C]; /*0x481304*/
        a1[2] = MEMORY[0x89E780]; /*0x48130d*/
        return a1; /*0x481313*/
      }
    }
    if ( !v10 ) /*0x481318*/
    {
      v23 = (unsigned __int8 *)(4 * Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)3) + 8506520); /*0x48139f*/
      goto LABEL_30; /*0x4813a6*/
    }
    if ( v10 == 1
      || (!a5
        ? (v22 = ((unsigned __int8)(1 << v10) & *(unsigned char *)(this + 73)) == 0)
        : (v22 = (*(unsigned char *)(this + 74) & (unsigned __int8)(1 << v10)) == 0),
          !v22) )
    {
      v23 = (unsigned __int8 *)(4 * v10 + 8506500); /*0x481356*/
LABEL_30:
      v39 = 0; /*0x48135d*/
      while ( 1 ) /*0x481367*/
      {
        v24 = *v23++; /*0x481367*/
        if ( v24 >= 2 ) /*0x48136c*/
        {
          if ( a5 ) /*0x481379*/
          {
            LOBYTE(v25) = *((unsigned char *)this + 296); /*0x48137b*/
            v26 = 1 << v24; /*0x481386*/
          }
          else
          {
            LOBYTE(v26) = *((unsigned char *)this + 292); /*0x4813a8*/
            v25 = 1 << v24; /*0x4813b3*/
          }
          if ( ((unsigned __int8)v25 & (unsigned __int8)v26) == 0 ) /*0x4813bc*/
            break; /*0x4813bc*/
        }
        if ( ++v39 >= 4 ) /*0x4813ca*/
        {
          *a1 = MEMORY[0x89E778]; /*0x4813db*/
          a1[1] = MEMORY[0x89E77C]; /*0x4813e4*/
          a1[2] = MEMORY[0x89E780]; /*0x4813ed*/
          return a1; /*0x4813f3*/
        }
      }
      v27 = 3 * v24; /*0x4813fa*/
      v28 = v16 + MEMORY[0x89E9F0][v27]; /*0x48141b*/
      v29 = v37 + MEMORY[0x89E9F4][v27]; /*0x481422*/
      v38 += MEMORY[0x89E9F8][v27]; /*0x481424*/
      GroundHeight = Cell::GetGroundHeight(aP2); /*0x481428*/
      if ( !a5 ) /*0x481433*/
        goto LABEL_43; /*0x481433*/
      goto LABEL_42; /*0x481433*/
    }
  }
  v31 = MEMORY[0x89E9F0][3 * v10]; /*0x481443*/
  v32 = MEMORY[0x89E9F8][3 * v10]; /*0x48145c*/
  v29 = v37 + MEMORY[0x89E9F4][3 * v10]; /*0x48145f*/
  v28 = v16 + v31; /*0x481463*/
  v38 += v32; /*0x48146a*/
  GroundHeight = Cell::GetGroundHeight(aP2); /*0x48146e*/
  if ( a5 ) /*0x481479*/
LABEL_42:
    GroundHeight += MEMORY[0x89E7B4]; /*0x48147b*/
LABEL_43:
  *a1 = v28; /*0x481481*/
  a1[1] = v29; /*0x481489*/
  a1[2] = GroundHeight; /*0x48148f*/
  return a1; /*0x4812f8*/

}
double ObjectPtr::RegisterForTracking(...) { return 0; }

  int v3; // ebx
  int SwizzleManagerClass_field_0x0C; // ecx
  int SwizzleManagerClass_field_0x18; // eax
  int SwizzleManagerClass_field_0x14; // eax
  int SwizzleManagerClass_field_0x08; // edx

  if ( !aP1 ) /*0x6cf248*/
    return -2147467261; /*0x6cf24b*/
  v3 = aP1->field_0; /*0x6cf254*/
  if ( !aP1->field_0 ) /*0x6cf254*/
    return 0; /*0x6cf25b*/
  SwizzleManagerClass_field_0x0C = aP0->SwizzleManagerClass_field_0x0C; /*0x6cf266*/
  if ( aP0->SwizzleManagerClass_field_0x14 < SwizzleManagerClass_field_0x0C /*0x6cf28e*/
    || (BYTE1(aP0->SwizzleManagerClass_field_0x10) || !SwizzleManagerClass_field_0x0C)
    && (SwizzleManagerClass_field_0x18 = aP0->SwizzleManagerClass_field_0x18, SwizzleManagerClass_field_0x18 > 0)
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(aP0->SwizzleManagerClass_field_0x04 + 8))(
         &aP0->SwizzleManagerClass_field_0x04,
         SwizzleManagerClass_field_0x0C + SwizzleManagerClass_field_0x18,
         0) )
  {
    SwizzleManagerClass_field_0x14 = aP0->SwizzleManagerClass_field_0x14; /*0x6cf295*/
    SwizzleManagerClass_field_0x08 = aP0->SwizzleManagerClass_field_0x08; /*0x6cf298*/
    aP0->SwizzleManagerClass_field_0x14 = SwizzleManagerClass_field_0x14 + 1; /*0x6cf29e*/
    *(unsigned int *)(SwizzleManagerClass_field_0x08 + 8 * SwizzleManagerClass_field_0x14) = v3; /*0x6cf2a1*/
    *(unsigned int *)(SwizzleManagerClass_field_0x08 + 8 * SwizzleManagerClass_field_0x14 + 4) = aP1; /*0x6cf2a4*/
  }
  aP1->field_0 = 0; /*0x6cf2a8*/
  return 0; /*0x6cf24a*/

}
double OptionQueue::PushEntry(...) { return 0; }

  int v3; // eax

  if ( *this >= 128 ) /*0x4f1aa9*/
    return 0; /*0x4f1af5*/
  qmemcpy((char *)this + 74 * *(this + 2) + 37 * *(this + 2) + 12, aP1, 0x6Fu); /*0x4f1ac6*/
  *(this + *(this + 2) + 3555) = timeGetTime(); /*0x4f1ad6*/
  v3 = *this + 1; /*0x4f1ae6*/
  *(this + 2) = ((unsigned __int8)*(this + 2) + 1) & 0x7F; /*0x4f1ae7*/
  *this = v3; /*0x4f1aea*/
  return 1; /*0x4f1af1*/

}
double OwnerDrawControl::InitVtable(...) { return 0; }

  this->vfptr = &OwnerDraw::DialogControl::`vftable'; /*0x624130*/

}
double PacketQueue::ExtractEntry(...) { return 0; }

  int v8; // esi
  int v9; // esi
  unsigned int *v10; // ecx
  int i; // ecx

  if ( !*(this + 10) ) /*0x48b576*/
    return 0; /*0x48b576*/
  v8 = *(this + 9) + 36 * *(unsigned int *)(*(this + 12) + 4 * a4); /*0x48b58f*/
  if ( (*(unsigned char *)v8 & 1) == 0 ) /*0x48b595*/
    return 0; /*0x48b712*/
  if ( a2 ) /*0x48b5a3*/
  {
    qmemcpy(a2, *(const void **)(v8 + 20), *(unsigned int *)(v8 + 16)); /*0x48b5b0*/
    *a3 = *(unsigned int *)(*(this + 9) + 36 * *(unsigned int *)(*(this + 12) + 4 * a4) + 16); /*0x48b5cd*/
  }
  if ( a5 && a6 ) /*0x48b5db*/
  {
    v9 = *(this + 9) + 36 * *(unsigned int *)(*(this + 12) + 4 * a4); /*0x48b5e9*/
    qmemcpy(a5, *(const void **)(v9 + 28), *(unsigned int *)(v9 + 24)); /*0x48b5f7*/
    *a6 = *(unsigned int *)(*(this + 9) + 36 * *(unsigned int *)(*(this + 12) + 4 * a4) + 24); /*0x48b614*/
  }
  if ( a7 ) /*0x48b61c*/
    *a7 = *(unsigned short *)(*(this + 9) + 36 * *(unsigned int *)(*(this + 12) + 4 * a4) + 32); /*0x48b62f*/
  *(unsigned int *)(*(this + 9) + 36 * *(unsigned int *)(*(this + 12) + 4 * a4)) &= ~1u; /*0x48b647*/
  *(unsigned int *)(*(this + 9) + 36 * *(unsigned int *)(*(this + 12) + 4 * a4)) &= ~2u; /*0x48b65e*/
  v10 = (unsigned int *)(*(this + 9) + 36 * *(unsigned int *)(*(this + 12) + 4 * a4)); /*0x48b66e*/
  *v10 &= ~4u; /*0x48b676*/
  *(unsigned int *)(*(this + 9) + 36 * *(unsigned int *)(*(this + 12) + 4 * a4) + 4) = 0; /*0x48b684*/
  *(unsigned int *)(*(this + 9) + 36 * *(unsigned int *)(*(this + 12) + 4 * a4) + 8) = 0; /*0x48b694*/
  *(unsigned int *)(*(this + 9) + 36 * *(unsigned int *)(*(this + 12) + 4 * a4) + 12) = 0; /*0x48b6a4*/
  *(unsigned int *)(*(this + 9) + 36 * *(unsigned int *)(*(this + 12) + 4 * a4) + 16) = 0; /*0x48b6b4*/
  *(unsigned int *)(*(this + 9) + 36 * *(unsigned int *)(*(this + 12) + 4 * a4) + 24) = 0; /*0x48b6c4*/
  *(unsigned short *)(*(this + 9) + 36 * *(unsigned int *)(*(this + 12) + 4 * a4) + 32) = 0; /*0x48b6d4*/
  for ( i = a4; i < *(this + 10) - 1; *(unsigned int *)(*(this + 12) + 4 * i - 4) = *(unsigned int *)(*(this + 12) + 4 * i) ) /*0x48b6e1*/
    ++i; /*0x48b6e6*/
  *(unsigned int *)(*(this + 12) + 4 * (*(this + 10))-- - 4) = 0; /*0x48b6fd*/
  return 1; /*0x48b6fc*/

}
double PacketQueue::ReleaseEntry(...) { return 0; }

  int v7; // esi
  int v8; // esi
  unsigned int *v9; // ecx
  AnimClass *i; // ecx

  if ( !*(this + 14) ) /*0x48b896*/
    return 0; /*0x48b896*/
  v7 = *(this + 13) + 24 * *(unsigned int *)(*(this + 16) + 4 * (unsigned int)aP3); /*0x48b8af*/
  if ( (*(unsigned char *)v7 & 1) == 0 ) /*0x48b8b5*/
    return 0; /*0x48b9d5*/
  if ( a1 ) /*0x48b8c3*/
  {
    qmemcpy(a1, *(const void **)(v7 + 12), *(unsigned int *)(v7 + 8)); /*0x48b8d0*/
    *a2 = *(unsigned int *)(*(this + 13) + 24 * *(unsigned int *)(*(this + 16) + 4 * (unsigned int)aP3) + 8); /*0x48b8ed*/
  }
  if ( a4 && a5 ) /*0x48b8fd*/
  {
    v8 = *(this + 13) + 24 * *(unsigned int *)(*(this + 16) + 4 * (unsigned int)aP3); /*0x48b90b*/
    qmemcpy(a4, *(const void **)(v8 + 20), *(unsigned int *)(v8 + 16)); /*0x48b919*/
    *a5 = *(unsigned int *)(*(this + 13) + 24 * *(unsigned int *)(*(this + 16) + 4 * (unsigned int)aP3) + 16); /*0x48b934*/
  }
  *(unsigned int *)(*(this + 13) + 24 * *(unsigned int *)(*(this + 16) + 4 * (unsigned int)aP3)) &= ~1u; /*0x48b94b*/
  *(unsigned int *)(*(this + 13) + 24 * *(unsigned int *)(*(this + 16) + 4 * (unsigned int)aP3)) &= ~2u; /*0x48b962*/
  v9 = (unsigned int *)(*(this + 13) + 24 * *(unsigned int *)(*(this + 16) + 4 * (unsigned int)aP3)); /*0x48b972*/
  *v9 &= ~4u; /*0x48b97a*/
  *(unsigned int *)(*(this + 13) + 24 * *(unsigned int *)(*(this + 16) + 4 * (unsigned int)aP3) + 8) = 0; /*0x48b988*/
  *(unsigned int *)(*(this + 13) + 24 * *(unsigned int *)(*(this + 16) + 4 * (unsigned int)aP3) + 16) = 0; /*0x48b998*/
  for ( i = aP3; /*0x48b9a4*/
        (int)i < *(this + 14) - 1;
        *(unsigned int *)(*(this + 16) + 4 * (unsigned int)i - 4) = *(unsigned int *)(*(this + 16) + 4 * (unsigned int)i) )
  {
    i = (AnimClass *)((char *)i + 1); /*0x48b9a9*/
  }
  *(unsigned int *)(*(this + 16) + 4 * (*(this + 14))-- - 4) = 0; /*0x48b9c0*/
  return 1; /*0x48b9bf*/

}
double PaletteManager::Load(...) { return 0; }

  int v1; // edx
  void (***v3)(unsigned int, int); // ecx
  int (***result)(unsigned int, int); // eax

  v1 = MEMORY[0xB0FD68]; /*0x72b530*/
  if ( MEMORY[0xB0FD68] == 1 ) /*0x72b53f*/
  {
    if ( !MEMORY[0xAC10C8] ) /*0x72b547*/
    {
      result = (int (***)(unsigned int, int))MEMORY[0xB0FB98]; /*0x72b64d*/
      goto LABEL_23; /*0x72b64d*/
    }
    v3 = (void (***)(unsigned int, int))MEMORY[0xB0FBA0]; /*0x72b54d*/
    if ( MEMORY[0xB0FBA0] ) /*0x72b555*/
    {
      (**(void (***)(int, int))MEMORY[0xB0FBA0])(MEMORY[0xB0FBA0], MEMORY[0xB0FD68]); /*0x72b55a*/
      v3 = 0; /*0x72b55c*/
      MEMORY[0xB0FBA0] = 0; /*0x72b55e*/
    }
    if ( MEMORY[0xB0FB9C] ) /*0x72b56b*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FB9C]); /*0x72b56e*/
      v3 = (void (***)(unsigned int, int))MEMORY[0xB0FBA0]; /*0x72b573*/
      MEMORY[0xB0FB9C] = 0; /*0x72b57c*/
    }
    if ( MEMORY[0xB0FB94] ) /*0x72b589*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FB94]); /*0x72b58c*/
      v3 = (void (***)(unsigned int, int))MEMORY[0xB0FBA0]; /*0x72b591*/
      MEMORY[0xB0FB94] = 0; /*0x72b59a*/
    }
    result = (int (***)(unsigned int, int))MEMORY[0xB0FB98]; /*0x72b5a0*/
    if ( MEMORY[0xB0FB98] ) /*0x72b5a7*/
    {
      (**(void (***)(int, int))MEMORY[0xB0FB98])(MEMORY[0xB0FB98], 1); /*0x72b5af*/
      v3 = (void (***)(unsigned int, int))MEMORY[0xB0FBA0]; /*0x72b5b1*/
      result = 0; /*0x72b5b7*/
      MEMORY[0xB0FB98] = 0; /*0x72b5b9*/
    }
  }
  else
  {
    result = (int (***)(unsigned int, int))MEMORY[0xB0FB98]; /*0x72b5c0*/
    v3 = (void (***)(unsigned int, int))MEMORY[0xB0FBA0]; /*0x72b5c5*/
  }
  v1 = MEMORY[0xB0FD68]; /*0x72b5cb*/
  if ( MEMORY[0xB0FD68] != 2 || MEMORY[0xAC10C8] ) /*0x72b5e0*/
  {
LABEL_23:
    if ( result ) /*0x72b654*/
    {
      if ( v1 ) /*0x72b660*/
        return result; /*0x72b660*/
      goto LABEL_26; /*0x72b660*/
    }
    goto LABEL_24; /*0x72b654*/
  }
  if ( v3 ) /*0x72b5e4*/
  {
    (**v3)(v3, 1); /*0x72b5ea*/
    result = (int (***)(unsigned int, int))MEMORY[0xB0FB98]; /*0x72b5ec*/
    MEMORY[0xB0FBA0] = 0; /*0x72b5f1*/
  }
  if ( MEMORY[0xB0FB9C] ) /*0x72b5ff*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB9C]); /*0x72b602*/
    result = (int (***)(unsigned int, int))MEMORY[0xB0FB98]; /*0x72b607*/
    MEMORY[0xB0FB9C] = 0; /*0x72b60f*/
  }
  if ( MEMORY[0xB0FB94] ) /*0x72b61d*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB94]); /*0x72b620*/
    result = (int (***)(unsigned int, int))MEMORY[0xB0FB98]; /*0x72b625*/
    MEMORY[0xB0FB94] = 0; /*0x72b62d*/
  }
  if ( result ) /*0x72b635*/
  {
    result = (int (***)(unsigned int, int))(**result)(result, 1); /*0x72b63d*/
    MEMORY[0xB0FB98] = 0; /*0x72b63f*/
    MEMORY[0xB0FD68] = 0; /*0x72b645*/
    goto LABEL_26; /*0x72b64b*/
  }
LABEL_24:
  MEMORY[0xB0FD68] = 0; /*0x72b656*/
LABEL_26:
  if ( MEMORY[0xAC10C8] ) /*0x72b66c*/
  {
    result = (int (***)(unsigned int, int))LoadPaletteSimple( /*0x72b67e*/
                                                  MEMORY[0x844BC4],
                                                  &MEMORY[0xB0FB94],
                                                  &MEMORY[0xB0FB98]);
    MEMORY[0xB0FD68] = 2; /*0x72b683*/
  }
  else if ( this ) /*0x72b692*/
  {
    if ( this == (void *)1 ) /*0x72b6b9*/
    {
      result = (int (***)(unsigned int, int))LoadPaletteSimple( /*0x72b6cb*/
                                                    MEMORY[0x844C1C],
                                                    &MEMORY[0xB0FB94],
                                                    &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b6d0*/
    }
    else if ( this == (void *)2 ) /*0x72b6dc*/
    {
      result = (int (***)(unsigned int, int))LoadPaletteSimple( /*0x72b6ee*/
                                                    MEMORY[0x844C10],
                                                    &MEMORY[0xB0FB94],
                                                    &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b6f3*/
    }
    else if ( this == (void *)3 ) /*0x72b703*/
    {
      result = (int (***)(unsigned int, int))LoadPaletteSimple( /*0x72b715*/
                                                    MEMORY[0x844C14],
                                                    &MEMORY[0xB0FB94],
                                                    &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b71a*/
    }
    else if ( this == (void *)4 ) /*0x72b72a*/
    {
      result = (int (***)(unsigned int, int))LoadPaletteSimple( /*0x72b73c*/
                                                    MEMORY[0x844C28],
                                                    &MEMORY[0xB0FB94],
                                                    &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b741*/
    }
    else if ( this == (void *)5 ) /*0x72b751*/
    {
      result = (int (***)(unsigned int, int))LoadPaletteSimple( /*0x72b763*/
                                                    MEMORY[0x844C20],
                                                    &MEMORY[0xB0FB94],
                                                    &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b768*/
    }
    else if ( this == (void *)6 ) /*0x72b778*/
    {
      result = (int (***)(unsigned int, int))LoadPaletteSimple( /*0x72b78a*/
                                                    MEMORY[0x844C18],
                                                    &MEMORY[0xB0FB94],
                                                    &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b78f*/
    }
    else if ( this == (void *)7 ) /*0x72b79f*/
    {
      result = (int (***)(unsigned int, int))LoadPaletteSimple( /*0x72b7b1*/
                                                    MEMORY[0x844C2C],
                                                    &MEMORY[0xB0FB94],
                                                    &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b7b6*/
    }
    else if ( this == (void *)8 ) /*0x72b7c6*/
    {
      result = (int (***)(unsigned int, int))LoadPaletteSimple( /*0x72b7d8*/
                                                    MEMORY[0x844C24],
                                                    &MEMORY[0xB0FB94],
                                                    &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b7dd*/
    }
    else
    {
      if ( this == (void *)9 ) /*0x72b7ed*/
        result = (int (***)(unsigned int, int))LoadPaletteSimple( /*0x72b7ff*/
                                                      MEMORY[0x844C30],
                                                      &MEMORY[0xB0FB94],
                                                      &MEMORY[0xB0FB98]);
      MEMORY[0xB0FD68] = 1; /*0x72b804*/
    }
  }
  else
  {
    result = (int (***)(unsigned int, int))LoadPaletteSimple( /*0x72b6a4*/
                                                  MEMORY[0x844C0C],
                                                  &MEMORY[0xB0FB94],
                                                  &MEMORY[0xB0FB98]);
    MEMORY[0xB0FD68] = 1; /*0x72b6a9*/
  }
  return result; /*0x72b68d*/

}
double Performance::Profile(...) { return 0; }

  int result; // eax
  int v1; // edi
  int v2; // esi
  int v3; // ebx
  const char *v4; // eax
  const char *v5; // eax
  SIZE_T v6; // esi
  unsigned int v7; // esi
  unsigned int v8; // eax
  int i; // edi
  unsigned int *v10; // eax
  unsigned int *v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // esi
  DWORD Time; // esi
  int v18; // eax
  int v19; // [esp+8Ch] [ebp-198h]
  int v20; // [esp+90h] [ebp-194h]
  int v21; // [esp+94h] [ebp-190h]
  unsigned int v22[2]; // [esp+98h] [ebp-18Ch] BYREF
  int v23; // [esp+A0h] [ebp-184h]
  int v24; // [esp+A4h] [ebp-180h]
  unsigned int v25[4]; // [esp+A8h] [ebp-17Ch] BYREF
  struct _MEMORYSTATUS Buffer; // [esp+B8h] [ebp-16Ch] BYREF
  unsigned char v27[16]; // [esp+D8h] [ebp-14Ch] BYREF
  int v28[15]; // [esp+E8h] [ebp-13Ch] BYREF
  unsigned int v29; // [esp+124h] [ebp-100h]
  unsigned int v30; // [esp+128h] [ebp-FCh]

  result = dword_825C8C; /*0x5355d0*/
  if ( dword_825C8C != -1 ) /*0x5355de*/
    return result; /*0x5355de*/
  MEMORY[0xA8F394] = 0; /*0x5355e7*/
  MEMORY[0xA8F314] = 0; /*0x5355ee*/
  MEMORY[0xA8F4A0] = 0; /*0x5355f5*/
  MEMORY[0xA8F420] = 0; /*0x5355fc*/
  MEMORY[0xA8F520] = 0; /*0x535603*/
  v1 = DetectProcessorType(); /*0x53560f*/
  v2 = Performance::MeasureTicks(); /*0x535616*/
  v3 = 5; /*0x53561b*/
  v21 = 5; /*0x535623*/
  switch ( v1 ) /*0x535629*/
  {
    case -1: /*0x535629*/
      break;
    case 3: /*0x535629*/
    case 5: /*0x535629*/
      v21 = v2 / 100 + 1; /*0x535643*/
      break; /*0x535647*/
    case 4: /*0x535629*/
    case 7: /*0x535629*/
      v21 = v2 / 100 + 2; /*0x53565c*/
      break; /*0x535660*/
    case 6: /*0x535629*/
      v21 = v2 / 100 + 3; /*0x535675*/
      break; /*0x535679*/
    default:
      v21 = 1; /*0x53567b*/
      break; /*0x53567b*/
  }
  v4 = (const char *)PlayerType::GetName(); /*0x535683*/
  Debug::Log(unk_827F5C, v21, v2, v4); /*0x535695*/
  v5 = (const char *)PlayerType::GetName(); /*0x53569d*/
  sprintf(&MEMORY[0xA8F314], MEMORY[0x827F4C], v2, v5); /*0x5356ae*/
  Buffer.dwLength = 32; /*0x5356ba*/
  GlobalMemoryStatus(&Buffer); /*0x5356c3*/
  v19 = 2; /*0x5356d2*/
  v6 = (Buffer.dwTotalPhys + 655360) >> 20; /*0x5356dc*/
  if ( v6 >= 0x40 ) /*0x5356e2*/
    v19 = 5; /*0x5356e4*/
  if ( v6 >= 0x80 ) /*0x5356ee*/
    v19 += 2; /*0x5356f0*/
  if ( v6 == 256 ) /*0x5356ff*/
  {
    v19 += 2; /*0x535701*/
  }
  else if ( v6 > 0x100 ) /*0x535707*/
  {
    v19 = 10; /*0x535709*/
  }
  Debug::Log(MEMORY[0x827F34], v19, (Buffer.dwTotalPhys + 655360) >> 20); /*0x535718*/
  sprintf(&MEMORY[0xA8F4A0], MEMORY[0x827F20], v6); /*0x535728*/
  v7 = 4; /*0x535737*/
  v20 = 5; /*0x53573c*/
  if ( MEMORY[0x8A0094] ) /*0x535740*/
  {
    v28[0] = 316; /*0x535746*/
    if ( !MEMORY[0x8A0094]->lpVtbl->GetCaps(MEMORY[0x8A0094], (LPDDCAPS)v28, 0) ) /*0x535754*/
    {
      v8 = v29; /*0x53575b*/
      if ( v29 <= v30 ) /*0x53576b*/
        v8 = v30; /*0x53576d*/
      v7 = (v8 + 0xFFFFF) >> 20; /*0x535775*/
      if ( v7 >= 0x20 ) /*0x53577b*/
      {
        v20 = 10; /*0x53577d*/
        Debug::Log(MEMORY[0x827F04], 10, v7); /*0x535781*/
        goto LABEL_30; /*0x535781*/
      }
      if ( v7 >= 0x10 ) /*0x535786*/
      {
        v20 = 9; /*0x535788*/
        Debug::Log(MEMORY[0x827F04], 9, v7); /*0x535790*/
        goto LABEL_30; /*0x535790*/
      }
      if ( v7 >= 8 ) /*0x535795*/
      {
        v20 = 7; /*0x535797*/
        Debug::Log(MEMORY[0x827F04], 7, v7); /*0x53579f*/
        goto LABEL_30; /*0x53579f*/
      }
      if ( v7 < 4 ) /*0x5357a4*/
      {
        if ( v7 <= 2 ) /*0x5357ae*/
          v20 = 3; /*0x5357b0*/
        Debug::Log(MEMORY[0x827F04], v20, v7); /*0x5357c3*/
        goto LABEL_30; /*0x5357c3*/
      }
    }
  }
  v20 = 5; /*0x5357a6*/
  Debug::Log(MEMORY[0x827F04], 5, v7); /*0x5357aa*/
LABEL_30:
  sprintf(&MEMORY[0xA8F420], MEMORY[0x827EEC], v7); /*0x5357c8*/
  i = 0; /*0x5357e1*/
  if ( MEMORY[0x8872FC] && *(unsigned char *)(MEMORY[0x8872FC] + 25) && !*(unsigned char *)(MEMORY[0x887310] + 25) ) /*0x5357fc*/
  {
    v10 = (unsigned int *)(*(int (**)(unsigned int *))(*(unsigned int *)MEMORY[0x8872FC] + 120))(v25); /*0x53580e*/
    v22[0] = *v10; /*0x535813*/
    v22[1] = v10[1]; /*0x53581a*/
    v23 = v10[2]; /*0x535821*/
    v24 = v10[3]; /*0x53582e*/
    v11 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)MEMORY[0x887310] + 120))(MEMORY[0x887310], v27); /*0x53583c*/
    v25[0] = *v11; /*0x535840*/
    v12 = v23; /*0x535844*/
    v25[1] = v11[1]; /*0x53584b*/
    v13 = v11[2]; /*0x53584f*/
    v14 = v11[3]; /*0x535854*/
    if ( v23 >= v13 ) /*0x535857*/
    {
      v12 = v13; /*0x535859*/
      v23 = v13; /*0x53585b*/
    }
    v15 = v24; /*0x53585f*/
    if ( v24 >= v14 ) /*0x535865*/
    {
      v15 = v14; /*0x535867*/
      v24 = v14; /*0x535869*/
    }
    if ( v12 >= 480 ) /*0x535873*/
      v23 = 480; /*0x535875*/
    if ( v15 >= 400 ) /*0x535882*/
      v24 = 400; /*0x535884*/
    v16 = 4; /*0x535892*/
    do /*0x5358da*/
    {
      (*(void (**)(int, unsigned int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)MEMORY[0x8872FC] + 8))( /*0x5358b3*/
        MEMORY[0x8872FC],
        v22,
        MEMORY[0x887310],
        v22,
        0,
        1);
      (*(void (**)(int, unsigned int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)MEMORY[0x887310] + 8))( /*0x5358d2*/
        MEMORY[0x887310],
        v22,
        MEMORY[0x8872FC],
        v22,
        0,
        1);
      Sleep(0); /*0x5358d7*/
      --v16; /*0x5358d9*/
    }
    while ( v16 ); /*0x5358da*/
    Time = timeGetTime(); /*0x5358e4*/
    if ( (Time & 0xFF000000) != 0xFF ) /*0x5358f4*/
    {
      (*(void (**)(int, unsigned int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)MEMORY[0x8872FC] + 8))( /*0x535916*/
        MEMORY[0x8872FC],
        v22,
        MEMORY[0x887310],
        v22,
        0,
        1);
      (*(void (**)(int, unsigned int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)MEMORY[0x887310] + 8))( /*0x535935*/
        MEMORY[0x887310],
        v22,
        MEMORY[0x8872FC],
        v22,
        0,
        1);
      for ( i = 1; timeGetTime() - Time <= 0x3E8; ++i ) /*0x535946*/
      {
        if ( i > 5000 ) /*0x53594e*/
          break; /*0x53594e*/
        (*(void (**)(int, unsigned int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)MEMORY[0x8872FC] + 8))( /*0x53596c*/
          MEMORY[0x8872FC],
          v22,
          MEMORY[0x887310],
          v22,
          0,
          1);
        (*(void (**)(int, unsigned int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)MEMORY[0x887310] + 8))( /*0x53598b*/
          MEMORY[0x887310],
          v22,
          MEMORY[0x8872FC],
          v22,
          0,
          1);
      }
      v3 = 1; /*0x53599c*/
      if ( i / 4 >= 1 ) /*0x5359ad*/
        v3 = i / 4; /*0x5359af*/
    }
  }
  Debug::Log(MEMORY[0x827EBC], v3, 2 * i); /*0x5359bb*/
  sprintf(&MEMORY[0xA8F520], stru_827EA4, 2 * i); /*0x5359cb*/
  v18 = v21; /*0x5359d0*/
  dword_825C8C = v21; /*0x5359dd*/
  if ( v21 >= v19 ) /*0x5359e3*/
  {
    v18 = v19; /*0x5359e5*/
    dword_825C8C = v19; /*0x5359e7*/
  }
  if ( v18 >= v20 ) /*0x5359f2*/
  {
    v18 = v20; /*0x5359f4*/
    dword_825C8C = v20; /*0x5359f6*/
  }
  if ( v18 >= v3 ) /*0x5359fd*/
  {
    v18 = v3; /*0x5359ff*/
    dword_825C8C = v3; /*0x535a01*/
  }
  Debug::Log(unk_827E80, v18); /*0x535a0c*/
  sprintf(&MEMORY[0xA8F394], MEMORY[0x827E70], dword_825C8C); /*0x535a22*/
  return dword_825C8C; /*0x535a32*/

}
double PhoneEditor::PopulateList(...) { return 0; }

  HWND *v2; // edi
  HWND DlgItem; // eax
  ObjectClass *v3; // ebx
  LRESULT (*esi2)(HWND, UINT, WPARAM, LPARAM); // esi
  ObjectClass *v5; // eax
  int v7; // ebp
  unsigned __int16 v8; // si
  int v9; // esi
  WPARAM v10; // ecx
  int eax18; // eax
  ObjectClass *v11; // ecx
  HWND v13; // eax
  CampaignScore *v14; // [esp-10h] [ebp-128h]
  wchar_t *StringCSF; // [esp-8h] [ebp-120h]
  CampaignScore *v16; // [esp-4h] [ebp-11Ch]
  LPARAM lParam; // [esp+10h] [ebp-108h] BYREF
  void *v19; // [esp+14h] [ebp-104h] BYREF
  void *v20; // [esp+18h] [ebp-100h] BYREF
  wchar_t Destination[80]; // [esp+28h] [ebp-F0h] BYREF
  wchar_t Format[10]; // [esp+C8h] [ebp-50h] BYREF
  char v23; // [esp+DCh] [ebp-3Ch]

  v2 = this; /*0x631069*/
  Gadget::InitProperties(&lParam); /*0x631073*/
  DlgItem = GetDlgItem(*v2, 1504); /*0x631080*/
  v3 = (ObjectClass *)DlgItem; /*0x631086*/
  if ( DlgItem ) /*0x63108a*/
  {
    esi2 = SendMessageA; /*0x631090*/
    SendMessageA(DlgItem, 0x184u, 0, 0); /*0x6310a0*/
    v5 = *(ObjectClass **)&HouseClass_Player.__pad_5568[18576]; /*0x6310a2*/
    if ( *(int *)&HouseClass_Player.__pad_5568[18576] > 1 ) /*0x6310aa*/
    {
      qsort( /*0x6310bb*/
        *(AbstractClass **)&HouseClass_Player.__pad_5568[18564],
        *(IUnknown **)&HouseClass_Player.__pad_5568[18576],
        4u,
        sub_631C10);
      v5 = *(ObjectClass **)&HouseClass_Player.__pad_5568[18576]; /*0x6310c0*/
    }
    v16 = a2; /*0x6310c8*/
    v7 = 0; /*0x6310c9*/
    if ( (int)v5 > 0 ) /*0x6310cd*/
    {
      do /*0x63124d*/
      {
        if ( wcslen((const wchar_t *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[18564] + 4 * v7) + 112)) ) /*0x6310e0*/
        {
          wcsncpy( /*0x631114*/
            Destination,
            (const wchar_t *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[18564] + 4 * v7) + 112),
            (DropListClass *)0x14);
          Destination[20] = 0; /*0x63111c*/
        }
        else
        {
          wcscpy(Destination, (const wchar_t *)&stru_82083C); /*0x6310f6*/
        }
        v8 = esi2((HWND)v3, 0x4CDu, 0, (LPARAM)Destination); /*0x631132*/
        if ( strlen((const char *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[18564] + 4 * v7) + 154)) ) /*0x631149*/
        {
          strncpy( /*0x63116f*/
            (char *)Format,
            (const char *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[18564] + 4 * v7) + 154),
            (IUnknown *)0x14);
          v23 = 0; /*0x631186*/
          swprintf(Destination, (const size_t)&stru_830620.__pad_14B0[15780], Format, v14); /*0x63118e*/
        }
        else
        {
          wcscpy(Destination, (const wchar_t *)&stru_82083C); /*0x63115a*/
        }
        lParam = 1; /*0x63119f*/
        WideString::Reassign(&v19, Destination); /*0x6311a7*/
        v9 = v8 << 16; /*0x6311b8*/
        v10 = v9; /*0x6311bb*/
        LOBYTE(v10) = v9 | 0x96; /*0x6311c1*/
        SendMessageA((HWND)v3, 0x4A8u, v10, (LPARAM)&lParam); /*0x6311cc*/
        if ( *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[18564] + 4 * v7) + 8) == -1 ) /*0x6311dd*/
        {
          StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[2520], 0, &stru_830620.__pad_579C[2492], 321); /*0x631202*/
          swprintf(Destination, (const size_t)&stru_82A038.objectTypeFlags, StringCSF, v16); /*0x63120d*/
        }
        else
        {
          swprintf( /*0x6311ea*/
            Destination,
            (const size_t)&g_Str_Fmt_PctD,
            *(const wchar_t *const *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[18564] + 4 * v7) + 8),
            v16);
        }
        lParam = 1; /*0x63121d*/
        WideString::Reassign(&v19, Destination); /*0x631226*/
        SendMessageA((HWND)v3, 0x4A8u, v9 | 0x113, (LPARAM)&lParam); /*0x63123d*/
        esi2 = SendMessageA; /*0x631244*/
        ++v7; /*0x63124a*/
      }
      while ( v7 < *(int *)&HouseClass_Player.__pad_5568[18576] ); /*0x63124d*/
      v2 = this; /*0x631253*/
    }
    if ( esi2((HWND)v3, 0x18Bu, 0, 0) && *(int *)&HouseClass_Player.__pad_5568[18440] >= -1 ) /*0x63126f*/
    {
      eax18 = esi2((HWND)v3, 0x18Bu, 0, 0); /*0x63127b*/
      v11 = *(ObjectClass **)&HouseClass_Player.__pad_5568[18440]; /*0x63127d*/
      if ( *(int *)&HouseClass_Player.__pad_5568[18440] < eax18 ) /*0x631285*/
      {
        if ( *(int *)&HouseClass_Player.__pad_5568[18440] <= -1 ) /*0x6312a0*/
          goto LABEL_24; /*0x6312a0*/
      }
      else
      {
        v11 = 0; /*0x631287*/
        *(unsigned int *)&HouseClass_Player.__pad_5568[18440] = 0; /*0x631289*/
      }
      esi2((HWND)v3, 0x186u, (WPARAM)v11, 0); /*0x6312ab*/
      v13 = GetDlgItem(*v2, 1509); /*0x6312b5*/
      if ( v13 ) /*0x6312bd*/
        esi2( /*0x6312dd*/
          v13,
          0x4B4u,
          0,
          *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[18564]
                    + 4 * *(unsigned int *)&HouseClass_Player.__pad_5568[18440])
        + 154);
    }
    else
    {
      *(unsigned int *)&HouseClass_Player.__pad_5568[18440] = -1; /*0x631291*/
    }
  }
LABEL_24:
  DeleteAndZero::Alt(&v20); /*0x6312df*/
  DeleteAndZero::Alt(&v19); /*0x6312ec*/

}
double PingPongBuffer::GetWriteOffset(...) { return 0; }

  ObjectClass *result; // eax

  if ( byte_ABCD50 ) /*0x55af67*/
  {
    result = (ObjectClass *)((char *)dword_829FF4 + dword_829FF8); /*0x55af7a*/
    if ( dword_ABCD44 >= (CampaignScore *)&dword_829FF4->__pad_0[dword_829FF8] ) /*0x55af7e*/
    {
      byte_ABCD50 = 0; /*0x55af80*/
      return dword_829FF4; /*0x55af87*/
    }
  }
  else
  {
    result = dword_829FF4; /*0x55af8a*/
    if ( dword_ABCD44 < (CampaignScore *)dword_829FF4 ) /*0x55af97*/
    {
      byte_ABCD50 = 1; /*0x55af9f*/
      return (ObjectClass *)((char *)dword_829FF4 + dword_829FF8); /*0x55afa6*/
    }
  }
  return result; /*0x55af89*/

}
double Pipe::Dtor(...) { return 0; }

  int result; // eax
  int v3; // ecx

  result = *((char *)this + 1); /*0x631c86*/
  *this = (int)&vt_Pipe; /*0x631c89*/
  if ( result ) /*0x631c91*/
    *(unsigned int *)(result + 8) = *((char *)this + 2); /*0x631c96*/
  v3 = *((char *)this + 2); /*0x631c99*/
  if ( v3 ) /*0x631c9e*/
    result = (*(int (**)(int, unsigned int))(*(unsigned int *)v3 + 12))(v3, *((char *)this + 1)); /*0x631ca6*/
  *((char *)this + 2) = 0; /*0x631ca9*/
  *((char *)this + 1) = 0; /*0x631cac*/
  return result; /*0x631caf*/

}
double Pipe::Pipe_field_0x08(...) { return 0; }
double Pipe::Pipe_field_0x0C(...) { return 0; }
double Pipe::__pad_0(...) { return 0; }
// 0x4e62b0
double PlayerType::GetName(...) { return 0; }

  unsigned int v0; // eax

  v0 = DetectProcessorType(); /*0x4e62b0*/
  if ( v0 > 8 ) /*0x4e62b8*/
    return aUnknown; /*0x4e62c7*/
  else
    return off_822C54[v0]; /*0x4e62bf*/

}
  unsigned int v0; // eax

  v0 = DetectProcessorType(); /*0x4e62b0*/
  if ( v0 > 8 ) /*0x4e62b8*/
    return aUnknown; /*0x4e62c7*/
  else
    return off_822C54[v0]; /*0x4e62bf*/

}
double PreviewClass::ReadPreview(...) { return 0; }

  int v2; // ebp
  void *v3; // esi
  signed int v4; // edi
  char *v5; // eax
  char *v6; // edi
  char MapPreviewImage; // [esp+13h] [ebp-13Dh]
  int v10[3]; // [esp+18h] [ebp-138h] BYREF
  unsigned int v11[4]; // [esp+24h] [ebp-12Ch] BYREF
  int v12[22]; // [esp+34h] [ebp-11Ch] BYREF
  unsigned char v13[12]; // [esp+8Ch] [ebp-C4h] BYREF
  int v14; // [esp+98h] [ebp-B8h]
  void *v15[16]; // [esp+A0h] [ebp-B0h] BYREF
  char v16; // [esp+E0h] [ebp-70h]
  void *v17[16]; // [esp+F8h] [ebp-58h] BYREF
  char v18; // [esp+138h] [ebp-18h]

  CCFileClass::Construct(v12, Source); /*0x641efa*/
  if ( CCFileClass::Open(v12, 0) && FileClass::Load(v12, 1) ) /*0x641f19*/
  {
    INIClass::INIClass(v15); /*0x641f2d*/
    v16 = 0; /*0x641f41*/
    v15[0] = &CCINIClass_Vtable; /*0x641f48*/
    CCINIClass::Load(v15, (int)v12, 1, 0); /*0x641f53*/
    INIClass::ResetSection(v15); /*0x641f5f*/
    PreviewClass::RenderMapPreview((int *)MEMORY[0xA8B230], v15); /*0x641f72*/
    v2 = 0; /*0x641f77*/
    v3 = 0; /*0x641f79*/
    while ( 1 ) /*0x641f7f*/
    {
      v2 += 25; /*0x641f7f*/
      v4 = v2 * CCFileClass::GetSize(v12) / 100; /*0x641f9f*/
      if ( v3 ) /*0x641fa1*/
        __3_YAXPAX_Z(v3); /*0x641fa4*/
      v3 = __2_YAPAXI_Z(v4 + 1); /*0x641fb5*/
      if ( !v3 ) /*0x641fbc*/
        goto LABEL_10; /*0x641fbc*/
      BufferIOFileClass::Seek(v12, 0, 0); /*0x641fc4*/
      CCFileClass::Read(v12, v3, v4); /*0x641fcf*/
      *((unsigned char *)v3 + v4) = 0; /*0x641fda*/
      v5 = strstr((const char *)v3, MEMORY[0x836E5C]); /*0x641fdd*/
      v6 = v5; /*0x641fe2*/
      if ( v5 ) /*0x641fe9*/
        break; /*0x641fe9*/
      if ( v2 >= 100 ) /*0x641fee*/
      {
        __3_YAXPAX_Z(v3); /*0x641ff1*/
LABEL_10:
        HashTable::DestroyHashTableINIClass(v15); /*0x641ff9*/
        goto LABEL_11; /*0x642000*/
      }
    }
    *v5 = 0; /*0x642047*/
    INIClass::INIClass(v17); /*0x642049*/
    v18 = 0; /*0x642055*/
    v17[0] = &CCINIClass_Vtable; /*0x64205e*/
    v10[1] = 0; /*0x642069*/
    v10[2] = 0; /*0x64206d*/
    Buffer::Init(v11, (int)v3, v6 - (unsigned char *)v3 - 1); /*0x642079*/
    v11[3] = 0; /*0x64208c*/
    v10[0] = (int)&vt_BufferStraw; /*0x642090*/
    CCINIClass::LoadAndVerifyDigest((int)v17, (int)v10, 0, 0); /*0x642098*/
    MapPreviewImage = LoadMapPreviewImage(this, v17); /*0x6420af*/
    __3_YAXPAX_Z(v3); /*0x6420b3*/
    Vector::Clear((int)v11); /*0x6420bf*/
    Straw::Dtor(v10); /*0x6420c8*/
    HashTable::DestroyHashTableINIClass(v17); /*0x6420d4*/
    HashTable::DestroyHashTableINIClass(v15); /*0x6420e0*/
    v12[0] = (int)&vt_CCFileClass; /*0x6420ec*/
    v14 = 0; /*0x6420f4*/
    Vector::Clear((int)v13); /*0x6420fb*/
    v12[0] = (int)&off_7E1668; /*0x642104*/
    BufferIOFileClass::Dtor(v12); /*0x64210c*/
    return MapPreviewImage; /*0x642111*/
  }
  else
  {
LABEL_11:
    v12[0] = (int)&vt_CCFileClass; /*0x642005*/
    v14 = 0; /*0x642014*/
    Vector::Clear((int)v13); /*0x64201b*/
    v12[0] = (int)&off_7E1668; /*0x642024*/
    BufferIOFileClass::Dtor(v12); /*0x64202c*/
    return 0; /*0x642034*/
  }

}
double PriorityQueue::Add(...) { return 0; }

  int v2; // eax
  char *v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edx

  if ( !aP1 ) /*0x5d1c27*/
    return -1; /*0x5d1c27*/
  v2 = *(unsigned int *)&this->__pad_4[36]; /*0x5d1c29*/
  v3 = &this->__pad_4[20]; /*0x5d1c2c*/
  v4 = *(unsigned int *)&this->__pad_4[28]; /*0x5d1c2f*/
  if ( v2 >= v4 ) /*0x5d1c34*/
  {
    if ( !v3[13] && v4 ) /*0x5d1c3f*/
      return -1; /*0x5d1c3f*/
    v5 = *((unsigned int *)v3 + 5); /*0x5d1c41*/
    if ( v5 <= 0 || !(*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)v3 + 8))(v3, v4 + v5, 0) ) /*0x5d1c51*/
      return -1; /*0x5d1c7b*/
  }
  v6 = *((unsigned int *)v3 + 4); /*0x5d1c58*/
  v7 = *((unsigned int *)v3 + 1); /*0x5d1c5b*/
  *((unsigned int *)v3 + 4) = v6 + 1; /*0x5d1c61*/
  *(unsigned int *)(v7 + 4 * v6) = aP1; /*0x5d1c68*/
  return (*(int (**)(char *, MSAnim **))(*(unsigned int *)v3 + 16))(v3, &aP1); /*0x5d1c77*/

}
double ProductionClass::StartTimer(...) { return 0; }

  unsigned int *v3; // ecx
  int v4; // edx
  int v5; // edx
  wchar_t *v6; // eax
  int v7; // eax
  int v8; // edi
  int v10; // [esp+Ch] [ebp-8h]

  v3 = *(unsigned int **)(this + 88); /*0x4c9ea7*/
  if ( !v3 && !*(unsigned int *)(this + 104) /*0x4c9edf*/
    || !*(unsigned char *)(this + 112)
    || v3 && *(unsigned int *)(this + 36) == 54
    || *(unsigned int *)(this + 104) != -1 && *(unsigned int *)(this + 36) == 54 )
  {
    return 0; /*0x4c9edf*/
  }
  v4 = 0; /*0x4c9ee5*/
  *(unsigned char *)(this + 112) = 0; /*0x4c9ee7*/
  if ( v3 ) /*0x4c9eed*/
    v4 = HouseClass::CalcProductionSpeed(v3); /*0x4c9ef4*/
  v5 = v4 / 54; /*0x4c9f05*/
  if ( v5 >= 1 ) /*0x4c9f0a*/
  {
    if ( v5 > 255 ) /*0x4c9f19*/
      v5 = 255; /*0x4c9f1b*/
  }
  else
  {
    v5 = 1; /*0x4c9f0c*/
  }
  v6 = MEMORY[0xA8ED84]; /*0x4c9f20*/
  *(unsigned int *)(this + 56) = v5; /*0x4c9f28*/
  *(unsigned int *)(this + 44) = v6; /*0x4c9f2b*/
  *(unsigned int *)(this + 48) = v10; /*0x4c9f31*/
  *(unsigned int *)(this + 52) = v5; /*0x4c9f34*/
  if ( *(unsigned int *)(this + 88) )
  {
    v7 = *(unsigned int *)(this + 36); /*0x4c9f3e*/
    v8 = v7 == 54 ? *(unsigned int *)(this + 96) : *(unsigned int *)(this + 96) / (54 - v7);
  }
  else
  {
    v8 = 0; /*0x4c9f56*/
  }
  if ( (*(int (**)(int))(*(unsigned int *)(*(unsigned int *)(this + 108) + 36) + 24))(*(unsigned int *)(this + 108) + 36) < v8 ) /*0x4c9f66*/
    return 0; /*0x4c9fa7*/
  *(unsigned char *)(this + 113) = 1; /*0x4c9f6c*/
  if ( a2 ) /*0x4c9f72*/
  {
    if ( !*(unsigned char *)(this + 112) ) /*0x4c9f74*/
    {
      *(unsigned char *)(this + 113) = 1; /*0x4c9f7b*/
      *(unsigned char *)(this + 112) = 1; /*0x4c9f7f*/
      *(unsigned int *)(this + 44) = MEMORY[0xA8ED84]; /*0x4c9f8d*/
      *(unsigned int *)(this + 56) = 0; /*0x4c9f93*/
      *(unsigned int *)(this + 48) = v10; /*0x4c9f96*/
      *(unsigned int *)(this + 52) = 0; /*0x4c9f99*/
    }
  }
  return 1; /*0x4c9f9c*/

}
double Property::GetField11(...) { return 0; }

  return *((unsigned int *)this + 11); /*0x726913*/

}
double Property::Set(...) { return 0; }

  __int16 result; // ax

  result = *(this + 18); /*0x433c75*/
  *(this + 18) = (unsigned short)aP1; /*0x433c79*/
  return result; /*0x433c7d*/

}
double PtrVector::Destroy(...) { return 0; }

  int i; // edi

  for ( i = 0; i < *((unsigned int *)this + 4); ++i ) /*0x5c612b*/
    __3_YAXPAX_Z(*(void **)(*((unsigned int *)this + 1) + 4 * i)); /*0x5c6134*/
  return (*(int (**)(unsigned int *))(*(unsigned int *)this + 12))(this); /*0x5c614b*/

}
double PushCommandClass::Execute(...) { return 0; }

  int v2; // eax
  int v3; // edx
  int v4; // ecx
  char result; // al
  unsigned int v6[6]; // [esp+0h] [ebp-1Ch] BYREF
  char v7; // [esp+18h] [ebp-4h]

  if ( a1 ) /*0x6d09c5*/
  {
    v2 = a1[9]; /*0x6d09c7*/
    v6[5] = a2; /*0x6d09ca*/
    v6[1] = a1[3]; /*0x6d09d2*/
    v6[2] = a1[4]; /*0x6d09d9*/
    v3 = a1[5]; /*0x6d09dd*/
    v4 = a1[6]; /*0x6d09e0*/
    v7 = 0; /*0x6d09e3*/
    v6[4] = v4; /*0x6d09e8*/
    v6[0] = v2; /*0x6d09f2*/
    v6[3] = v3; /*0x6d09f6*/
    HashTable::Remove((int *)MEMORY[0x887368], v2); /*0x6d09fa*/
    return CommandClass::AddAction(MEMORY[0x887368], (int)v6); /*0x6d0a0a*/
  }
  return result; /*0x6d0a0f*/

}
double Random::Gaussian(...) { return 0; }

  double v3; // st7
  double v4; // st7
  long double v5; // st7
  long double v6; // st6
  double v7; // st7
  double v8; // [esp+10h] [ebp-10h]
  double v9; // [esp+18h] [ebp-8h]

  if ( *(unsigned char *)this ) /*0x5980cc*/
  {
    *(unsigned char *)this = 0; /*0x5980d1*/
    return *((unsigned int *)this + 1); /*0x5980d4*/
  }
  else
  {
    do /*0x598122*/
    {
      do /*0x598115*/
      {
        v3 = ((double (*)(void))*((unsigned int *)this + 4))(); /*0x5980de*/
        v8 = v3 + v3 - 1.0; /*0x5980e9*/
        v4 = ((double (*)(void))*((unsigned int *)this + 4))(); /*0x5980ed*/
        v9 = v4 + v4 - 1.0; /*0x5980f8*/
        v5 = v9 * v9 + v8 * v8; /*0x598108*/
      }
      while ( v5 >= 1.0 ); /*0x598115*/
    }
    while ( v5 == 0.0 ); /*0x598122*/
    v6 = __FYL2X__(v5, 0.6931471805599453094); /*0x59812d*/
    v7 = Math::Sqrt((-v6 - v6) / v5); /*0x59813e*/
    *(unsigned char *)this = 1; /*0x59814c*/
    *((unsigned int *)this + 1) = v7 * v9; /*0x59814f*/
    return v7 * v8; /*0x598153*/
  }

}
double Random::Range(...) { return 0; }

  IUnknown *result; // eax
  IUnknown *v5; // ecx
  IUnknown *v6; // ebx
  int v7; // edi
  bool v8; // zf
  int v9; // ecx
  int v10; // eax
  int i; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // ecx

  result = aP1; /*0x65c7e0*/
  v5 = aP2; /*0x65c7e6*/
  v6 = aP1; /*0x65c7ed*/
  if ( aP1 != aP2 ) /*0x65c7ef*/
  {
    if ( (int)aP1 > (int)aP2 ) /*0x65c7f5*/
    {
      v6 = aP2; /*0x65c7f7*/
      v5 = aP1; /*0x65c7f9*/
    }
    v7 = (char *)v5 - (char *)v6; /*0x65c7ff*/
    v8 = (char *)v5 - (char *)v6 >= 0; /*0x65c801*/
    v9 = 31; /*0x65c807*/
    if ( v8 ) /*0x65c80c*/
    {
      do /*0x65c81c*/
      {
        if ( v9 <= 0 ) /*0x65c810*/
          break; /*0x65c810*/
        --v9; /*0x65c812*/
      }
      while ( ((1 << v9) & v7) == 0 ); /*0x65c81c*/
    }
    v10 = v7 + 1; /*0x65c824*/
    for ( i = ~(-1 << (v9 + 1)); v10 > v7; v10 = i & v12 ) /*0x65c82b*/
    {
      if ( *(unsigned char *)this ) /*0x65c82e*/
      {
        v12 = 0; /*0x65c833*/
      }
      else
      {
        *(this + *(this + 1) + 3) ^= *(this + *(this + 2) + 3); /*0x65c84b*/
        v13 = *(this + 1); /*0x65c84d*/
        v14 = *(this + v13++ + 3); /*0x65c853*/
        v15 = *(this + 2) + 1; /*0x65c858*/
        *(this + 1) = v13; /*0x65c85e*/
        *(this + 2) = v15; /*0x65c861*/
        if ( v13 >= 250 ) /*0x65c864*/
          *(this + 1) = 0; /*0x65c866*/
        if ( v15 >= 250 ) /*0x65c873*/
          *(this + 2) = 0; /*0x65c875*/
        v12 = v14; /*0x65c87c*/
      }
    }
    return (int)v6 + v10; /*0x65c886*/
  }
  return (int)result; /*0x65c889*/

}
double Random::State(...) { return 0; }

  int result; // eax
  int v2; // edx
  int v3; // esi

  if ( *(unsigned char *)this ) /*0x65c780*/
    return 0; /*0x65c785*/
  *(this + *((unsigned int *)this + 1) + 3) ^= *(this + *((unsigned int *)this + 2) + 3); /*0x65c79d*/
  v2 = *((unsigned int *)this + 1); /*0x65c79f*/
  result = *(this + v2++ + 3); /*0x65c7a5*/
  v3 = *((unsigned int *)this + 2) + 1; /*0x65c7aa*/
  *((unsigned int *)this + 1) = v2; /*0x65c7b1*/
  *((unsigned int *)this + 2) = v3; /*0x65c7b4*/
  if ( v2 >= 250 ) /*0x65c7b7*/
    *((unsigned int *)this + 1) = 0; /*0x65c7b9*/
  if ( v3 >= 250 ) /*0x65c7c7*/
    *((unsigned int *)this + 2) = 0; /*0x65c7c9*/
  return result; /*0x65c787*/

}
double Rect_Point::Set(...) { return 0; }

  *(this + 3) = aP1; /*0x4e1a28*/
  *(this + 4) = aP2; /*0x4e1a2b*/
  return (int)aP1->__pad_0; /*0x4e1a2e*/

}
double ResultNode::CleanupList(...) { return 0; }

  unsigned int *v1; // esi
  unsigned int *v2; // edi

  v1 = (unsigned int *)*((unsigned int *)this + 1); /*0x625ab1*/
  if ( v1 ) /*0x625ab6*/
  {
    do /*0x625ad4*/
    {
      v2 = (unsigned int *)v1[3]; /*0x625ab9*/
      if ( v1 ) /*0x625abe*/
      {
        ResultNode::Init(v1); /*0x625ac2*/
        __3_YAXPAX_Z(v1); /*0x625ac8*/
      }
      v1 = v2; /*0x625ad2*/
    }
    while ( v2 ); /*0x625ad4*/
  }

}
double SafeDelete::Ptr(...) { return 0; }

  if ( *this ) /*0x7b7043*/
    __3_YAXPAX_Z(*this); /*0x7b704a*/
  *this = 0; /*0x7b7052*/

}
double SaveLoadDialog::DlgProc(...) { return 0; }

  HWND v2; // ebp
  SkirmishDialog *Dialog; // edi
  HWND v4; // ebx
  LPARAM v5; // eax
  wchar_t *v6; // eax
  VectorClass *DlgItem; // eax
  LPARAM v9; // ebp
  HWND v10; // eax
  CellStruct *v11; // ebx
  LPARAM v12; // eax
  CellStruct *v13; // ebx
  LPARAM v14; // eax
  HWND v15; // eax
  VectorClass *v16; // ebx
  LRESULT v17; // eax
  void (*v18)(void); // eax
  int v19; // eax
  LRESULT v20; // eax
  LRESULT v21; // ebp
  wchar_t *v22; // eax
  HWND v23; // eax
  int v24; // ebx
  LRESULT v25; // eax
  wchar_t *v26; // eax
  HWND v27; // eax
  LRESULT v28; // eax
  HWND v29; // eax
  wchar_t *v30; // eax
  HWND v31; // eax
  HWND v32; // eax
  RawFileClass *v33; // ebp
  INIClass *v34; // eax
  unsigned int *v35; // eax
  bool v36; // bl
  wchar_t *v37; // eax
  wchar_t *v38; // eax
  int v39; // ebp
  wchar_t *v40; // eax
  int v41; // ebx
  int v42; // eax
  int v43; // ecx
  wchar_t *v44; // eax
  int i; // ebx
  wchar_t *StringCSF; // [esp-10h] [ebp-3D8h]
  wchar_t *v47; // [esp-10h] [ebp-3D8h]
  wchar_t *v48; // [esp-10h] [ebp-3D8h]
  wchar_t *v49; // [esp-10h] [ebp-3D8h]
  wchar_t *v50; // [esp-10h] [ebp-3D8h]
  wchar_t *v51; // [esp-Ch] [ebp-3D4h]
  wchar_t *v52; // [esp-Ch] [ebp-3D4h]
  int v53; // [esp+0h] [ebp-3C8h]
  WPARAM wParam; // [esp+10h] [ebp-3B8h]
  WPARAM wParama; // [esp+10h] [ebp-3B8h]
  VectorClass *hWnd; // [esp+14h] [ebp-3B4h]
  unsigned int v57[22]; // [esp+38h] [ebp-390h] BYREF
  char v58[12]; // [esp+90h] [ebp-338h] BYREF
  int v59; // [esp+9Ch] [ebp-32Ch]
  int v60[9]; // [esp+A4h] [ebp-324h] BYREF
  LPARAM lParam[128]; // [esp+C8h] [ebp-300h] BYREF
  char Buffer[256]; // [esp+2C8h] [ebp-100h] BYREF

  v2 = 0; /*0x558ddc*/
  Dialog = 0; /*0x558de1*/
  hWnd = 0; /*0x558de4*/
  if ( *(dwNewLong + 1) != (const char *)1 ) /*0x558de8*/
  {
    if ( *(dwNewLong + 1) == (const char *)2 ) /*0x558def*/
    {
      if ( DiskSpace::CheckAvailable() < (unsigned int)*(dwNewLong + 4) ) /*0x558e65*/
      {
        StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_829EE8.isOnMap, 432); /*0x558e88*/
        v6 = GetStringCSF((wchar_t *)&stru_829EE8.customSound, 0, &stru_829EE8.isOnMap, 432); /*0x558e9a*/
        Dialog::ShowMessageBox((int)v6, StringCSF, 0, 0, 0, v53); /*0x558ea4*/
        return 0; /*0x558eb5*/
      }
      Dialog = (SkirmishDialog *)CreateDialog(0x2B4u, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))sub_558B90, 0); /*0x558ecc*/
      DlgItem = (VectorClass *)GetDlgItem((HWND)Dialog, 1319); /*0x558ed4*/
      v9 = (LPARAM)*(dwNewLong + 3); /*0x558ed6*/
      hWnd = DlgItem; /*0x558edf*/
      v10 = GetDlgItem((HWND)Dialog, 1318); /*0x558ee3*/
      SendMessageA(v10, 0x4B2u, 0, v9); /*0x558eee*/
      v2 = GetDlgItem((HWND)Dialog, 1735); /*0x558f02*/
      v11 = (CellStruct *)GetDlgItem((HWND)Dialog, 1684); /*0x558f0a*/
      v12 = (*((int (**)(const char **))*dwNewLong + 6))(dwNewLong); /*0x558f0c*/
      SendMessageA((HWND)v11, 0x4B2u, 0, v12); /*0x558f18*/
      if ( SessionClass::GetGameSpeed(&HouseClass_Player.__pad_5568[8068]) ) /*0x558f23*/
        goto LABEL_12; /*0x558f2a*/
    }
    else
    {
      if ( *(dwNewLong + 1) != (const char *)3 ) /*0x558df2*/
        goto LABEL_12; /*0x558df2*/
      Dialog = (SkirmishDialog *)CreateDialog(0x2B5u, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))sub_558CB0, 0); /*0x558e0e*/
      hWnd = (VectorClass *)GetDlgItem((HWND)Dialog, 1320); /*0x558e1e*/
      v2 = GetDlgItem((HWND)Dialog, 1736); /*0x558e2a*/
      v4 = GetDlgItem((HWND)Dialog, 1684); /*0x558e2e*/
      v5 = (*((int (**)(const char **))*dwNewLong + 7))(dwNewLong); /*0x558e34*/
      SendMessageA(v4, 0x4B2u, 0, v5); /*0x558e40*/
      if ( SessionClass::GetGameSpeed(&HouseClass_Player.__pad_5568[8068]) ) /*0x558e4b*/
        goto LABEL_12; /*0x558e52*/
    }
    goto LABEL_11; /*0x558e52*/
  }
  Dialog = (SkirmishDialog *)CreateDialog(0xB7u, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))sub_558A30, 0); /*0x558f44*/
  hWnd = (VectorClass *)GetDlgItem((HWND)Dialog, 1317); /*0x558f54*/
  v2 = GetDlgItem((HWND)Dialog, 1039); /*0x558f60*/
  v13 = (CellStruct *)GetDlgItem((HWND)Dialog, 1684); /*0x558f64*/
  v14 = (*((int (**)(const char **))*dwNewLong + 5))(dwNewLong); /*0x558f6a*/
  SendMessageA((HWND)v13, 0x4B2u, 0, v14); /*0x558f76*/
  if ( !SessionClass::GetGameSpeed(&HouseClass_Player.__pad_5568[8068]) ) /*0x558f81*/
  {
LABEL_11:
    v15 = GetDlgItem((HWND)Dialog, 1036); /*0x558f8a*/
    ShowWindow(v15, 0); /*0x558f99*/
  }
LABEL_12:
  *(dwNewLong + 6) = (const char *)-1; /*0x558f9f*/
  if ( !Dialog ) /*0x558fa8*/
    return *(dwNewLong + 6) == (const char *)1039; /*0x558fa8*/
  SetWindowLongA((HWND)Dialog, 8, (LONG)dwNewLong); /*0x558fb2*/
  v16 = hWnd; /*0x558fb8*/
  if ( hWnd ) /*0x558fbe*/
  {
    LoadSaveDialog::FillList((int *)dwNewLong, (HWND)hWnd); /*0x558fc3*/
    v17 = SendMessageA((HWND)hWnd, 0x18Bu, 0, 0); /*0x558fd2*/
    EnableWindow(v2, v17 > 0); /*0x558fe5*/
  }
  Dialog::Show((HWND)Dialog); /*0x558fed*/
  while ( 1 ) /*0x558ff8*/
  {
    while ( *(dwNewLong + 6) == (const char *)-1 ) /*0x559000*/
    {
      if ( Dialog::PumpMessages() == 1 ) /*0x559009*/
        *(dwNewLong + 6) = (const char *)2; /*0x55900b*/
      v18 = (void (*)(void))*(dwNewLong + 5); /*0x559012*/
      if ( v18 ) /*0x559017*/
        v18(); /*0x559019*/
      if ( !HouseClass_Player.__pad_5568[22252] ) /*0x559022*/
        ScreenSaver::Process(0, (int)v16, -1); /*0x559026*/
    }
    v19 = (int)*(dwNewLong + 6); /*0x559030*/
    if ( v19 == 1 || v19 == 1039 || v19 == 1735 || v19 == 1736 ) /*0x55904b*/
    {
      v20 = SendMessageA((HWND)v16, 0x188u, 0, 0); /*0x559061*/
      wParam = v20; /*0x559066*/
      if ( v20 == -1 ) /*0x55906a*/
        goto LABEL_70; /*0x55906a*/
      v21 = SendMessageA((HWND)v16, 0x199u, v20, 0); /*0x55907b*/
      if ( *(dwNewLong + 1) == (const char *)1 ) /*0x559081*/
      {
        if ( *(unsigned char *)(v21 + 437) ) /*0x5594ae*/
          goto LABEL_71; /*0x5594b6*/
        v41 = Game::CheckForGameCD((void *)0x3C); /*0x5594c6*/
        v42 = *(unsigned int *)(v21 + 424); /*0x5594c8*/
        if ( v42 == -1 ) /*0x5594d1*/
          v43 = -1; /*0x5594d3*/
        else
          v43 = *(unsigned int *)(*(unsigned int *)&g_CampaignTypeArray->__pad_0[4 * v42] + 152); /*0x5594e0*/
        SetSoundWarning(v43); /*0x5594e6*/
        if ( (unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x5594fd*/
        {
          ShowWindow((HWND)Dialog, 0); /*0x559516*/
          (*(void (**)(unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[23344] + 12))(*(unsigned int *)&stru_87C374.__pad_579C[23344]); /*0x559524*/
          if ( (*((unsigned __int8 (**)(const char **, int))*dwNewLong + 1))(dwNewLong, v21 + 256) ) /*0x559532*/
            goto LABEL_71; /*0x559537*/
          (*(void (**)(unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[23344] + 16))(*(unsigned int *)&stru_87C374.__pad_579C[23344]); /*0x559541*/
          ShowWindow((HWND)Dialog, 5); /*0x55954d*/
          v50 = GetStringCSF(g_Str_TXT_OK, 0, &stru_829EE8.isOnMap, 550); /*0x559573*/
          v44 = GetStringCSF(aTxtErrorLoadin, 0, &stru_829EE8.isOnMap, 550); /*0x559585*/
          Dialog::ShowMessageBox((int)v44, v50, 0, 0, 0, v53); /*0x55958f*/
          ShowWindow((HWND)Dialog, 0); /*0x559597*/
        }
        else
        {
          SetSoundWarning(v41); /*0x559509*/
        }
        goto LABEL_70; /*0x55950e*/
      }
      if ( *(dwNewLong + 1) == (const char *)2 ) /*0x559088*/
      {
        v27 = GetDlgItem((HWND)Dialog, 1319); /*0x5591b2*/
        wParama = 0; /*0x5591b6*/
        if ( v27 ) /*0x5591be*/
        {
          v28 = SendMessageA(v27, 0x4EFu, 0, 0); /*0x5591ca*/
          wParama = v28; /*0x5591d2*/
          if ( v28 ) /*0x5591d6*/
            SetDialogActiveFlag(v28, 1); /*0x5591dc*/
        }
        v29 = GetDlgItem((HWND)Dialog, 1318); /*0x5591e7*/
        SendMessageA(v29, 0x4B3u, 0x50u, (LPARAM)lParam); /*0x5591f9*/
        WideString::Trim((wchar_t *)lParam); /*0x559206*/
        if ( !wcslen((const wchar_t *)lParam) ) /*0x559213*/
        {
          v47 = GetStringCSF(g_Str_TXT_OK, 0, &stru_829EE8.isOnMap, 574); /*0x559240*/
          v30 = GetStringCSF((wchar_t *)&stru_829EE8.uniqueId, 0, &stru_829EE8.isOnMap, 574); /*0x559252*/
          Dialog::ShowMessageBox((int)v30, v47, 0, 0, 0, v53); /*0x55925c*/
          v31 = GetDlgItem((HWND)Dialog, 1318); /*0x559267*/
          SetFocus(v31); /*0x55926a*/
          v32 = GetDlgItem((HWND)Dialog, 1318); /*0x55927f*/
          SendMessageA(v32, 0xB1u, 0xFFFFFFFF, -1); /*0x559282*/
LABEL_70:
          *(dwNewLong + 6) = (const char *)-1; /*0x559599*/
          goto LABEL_71; /*0x559599*/
        }
        if ( v21 && *(unsigned char *)(v21 + 436) ) /*0x559291*/
        {
          v33 = (RawFileClass *)(v21 + 256); /*0x55929b*/
        }
        else
        {
          CCFileClass::Construct3((int)v57); /*0x5592a7*/
          do /*0x5592e9*/
          {
            v34 = (INIClass *)rand(); /*0x5592b0*/
            sprintf(Buffer, &stru_829EE8, v34); /*0x5592c3*/
            FileClass::SetFileName(v57, (IUnknown *)Buffer); /*0x5592d7*/
          }
          while ( CCFileClass::Open(v57, 0) == 1 ); /*0x5592e9*/
          v57[0] = &vt_CCFileClass; /*0x5592f2*/
          v59 = 0; /*0x5592fa*/
          Vector::Clear((int)v58); /*0x559305*/
          v57[0] = &off_7E1668; /*0x55930e*/
          BufferIOFileClass::Dtor(v57); /*0x559316*/
          v33 = (RawFileClass *)Buffer; /*0x55931b*/
        }
        if ( v33 ) /*0x559324*/
        {
          v35 = RawFileClass::Construct(v60, v33); /*0x559332*/
          v36 = (*(unsigned __int8 (**)(unsigned int *, unsigned int))(*v35 + 20))(v35, 0) == 1; /*0x559349*/
          RawFileClass::Dtor(v60); /*0x55934c*/
          if ( v36 /*0x5593aa*/
            && (v52 = GetStringCSF((wchar_t *)&stru_829EE8.attachedTag, 0, &stru_829EE8.isOnMap, 594),
                v48 = GetStringCSF((wchar_t *)&stru_829EE8.fallRate, 0, &stru_829EE8.isOnMap, 594),
                v37 = GetStringCSF(aTxtConfirmSave, 0, &stru_829EE8.isOnMap, 594),
                Dialog::ShowMessageBox((int)v37, v48, (Movie *)v52, 0, 0, v53)) )
          {
            *(dwNewLong + 6) = (const char *)-1; /*0x5593b3*/
          }
          else
          {
            ShowWindow((HWND)Dialog, 0); /*0x5593c8*/
            if ( (*((unsigned __int8 (**)(const char **, RawFileClass *, LPARAM *))*dwNewLong + 2))( /*0x5593d7*/
                   dwNewLong,
                   v33,
                   lParam) )
            {
              ShowWindow((HWND)Dialog, 5); /*0x559431*/
              SaveLoadDialog::FindDialogTemplate(Dialog); /*0x559435*/
              v39 = (*((int (**)(const char **))*dwNewLong + 8))(dwNewLong); /*0x559458*/
              v40 = GetStringCSF(g_Str_TXT_OK, 0, &stru_829EE8.isOnMap, 617); /*0x559462*/
              Dialog::ShowMessageBox(v39, v40, 0, 0, 0, v53); /*0x55946d*/
              SaveLoadDialog::LookupDialogHash(Dialog); /*0x559474*/
              ShowWindow((HWND)Dialog, 0); /*0x55947c*/
              if ( *(dwNewLong + 3) ) /*0x55947e*/
                wcscpy((wchar_t *)lParam, (const wchar_t *)*(dwNewLong + 3)); /*0x55948e*/
            }
            else
            {
              ShowWindow((HWND)Dialog, 5); /*0x5593e1*/
              v49 = GetStringCSF(g_Str_TXT_OK, 0, &stru_829EE8.isOnMap, 609); /*0x559407*/
              v38 = GetStringCSF(aTxtErrorSaving, 0, &stru_829EE8.isOnMap, 609); /*0x559419*/
              Dialog::ShowMessageBox((int)v38, v49, 0, 0, 0, v53); /*0x559423*/
              *(dwNewLong + 6) = (const char *)-1; /*0x559428*/
            }
          }
        }
        if ( wParama ) /*0x55949c*/
          SetDialogActiveFlag(wParama, 0); /*0x5594a4*/
      }
      else if ( *(dwNewLong + 1) == (const char *)3 ) /*0x55908f*/
      {
        v22 = GetStringCSF((wchar_t *)&stru_829EE8.ambientSoundController[4], 0, &stru_829EE8.isOnMap, 635); /*0x5590a7*/
        swprintf((wchar_t *const)lParam, (const size_t)stru_829EE8.ambientSoundController, v22, (CampaignScore *)v21); /*0x5590ba*/
        v23 = GetDlgItem((HWND)Dialog, 1320); /*0x5590c8*/
        v24 = 0; /*0x5590ce*/
        if ( v23 ) /*0x5590d2*/
        {
          v25 = SendMessageA(v23, 0x4EFu, 0, 0); /*0x5590dc*/
          v24 = v25; /*0x5590e2*/
          if ( v25 ) /*0x5590e6*/
            SetDialogActiveFlag(v25, 1); /*0x5590ec*/
        }
        v51 = GetStringCSF((wchar_t *)&stru_829EE8.attachedTag, 0, &stru_829EE8.isOnMap, 646); /*0x559113*/
        v26 = GetStringCSF((wchar_t *)&stru_829EE8.fallRate, 0, &stru_829EE8.isOnMap, 646); /*0x559125*/
        if ( Dialog::ShowMessageBox((int)lParam, v26, (Movie *)v51, 0, 0, v53) /*0x559187*/
          || ((*((void (**)(const char **, int))*dwNewLong + 3))(dwNewLong, v21 + 256),
              SendMessageA((HWND)hWnd, 0x182u, wParam, 0),
              SendMessageA((HWND)hWnd, 0x186u, 0, 0),
              SendMessageA((HWND)hWnd, 0x18Bu, 0, 0) > 0) )
        {
          *(dwNewLong + 6) = (const char *)-1; /*0x559189*/
        }
        if ( v24 ) /*0x559192*/
          SetDialogActiveFlag(v24, 0); /*0x55919c*/
      }
    }
LABEL_71:
    if ( *(dwNewLong + 6) != (const char *)-1 ) /*0x5595a4*/
      break; /*0x5595a4*/
    v16 = hWnd; /*0x558ff4*/
  }
  for ( i = 0; i < (int)*(dwNewLong + 12); ++i ) /*0x5595b1*/
    __3_YAXPAX_Z(*(void **)&(*(dwNewLong + 9))[4 * i]); /*0x5595ba*/
  (*((void (**)(const char **))*(dwNewLong + 8) + 3))(dwNewLong + 8); /*0x5595d0*/
  Dialog::Destroy(Dialog); /*0x5595d5*/
  return *(dwNewLong + 6) == (const char *)1039; /*0x558ea9*/

}
double ScoreText::Show(...) { return 0; }

  MSAnim *v3; // eax
  int v4; // edx
  MSShapeAnim *v5; // eax
  GameSetup *v6; // edi
  void *eax4; // eax
  MSAnim *v7; // eax
  MSAnim aP2; // [esp+14h] [ebp-10h] BYREF
  int v10; // [esp+20h] [ebp-4h]

  v3 = (MSAnim *)(*(this + 279) + 140); /*0x76eafd*/
  aP2 = *v3; /*0x76eb04*/
  v4 = *(unsigned int *)v3[1].__pad_0; /*0x76eb16*/
  v5 = (MSShapeAnim *)*(this + 288); /*0x76eb19*/
  v10 = v4; /*0x76eb21*/
  if ( v5 ) /*0x76eb25*/
  {
    Session::RemoveTeam(this, v5); /*0x76eb2a*/
    (*(void (**)(unsigned int, MSAnim *, unsigned int, MSAnim *, unsigned int, int))(**(unsigned int **)&stru_87C374.__pad_579C[22524] /*0x76eb4c*/
                                                                            + 8))(
      *(unsigned int *)&stru_87C374.__pad_579C[22524],
      &aP2,
      *(unsigned int *)&stru_87C374.__pad_579C[22528],
      &aP2,
      0,
      1);
    Surface::CopyRect(this, (ObjectClass *)&aP2); /*0x76eb56*/
    *(this + 288) = 0; /*0x76eb5b*/
  }
  v6 = (GameSetup *)aP1; /*0x76eb65*/
  if ( WideString::Length((const wchar_t **)aP1) ) /*0x76eb6b*/
  {
    WideString::AssignFromPtr((wchar_t **)&aP1, (const wchar_t **)v6); /*0x76eb79*/
    eax4 = (void *)__2_YAPAXI_Z(0x34u); /*0x76eb80*/
    if ( eax4 ) /*0x76eb8a*/
      v7 = (MSAnim *)MSBitPrintAnim::Construct(eax4, (const wchar_t **)&aP1, &aP2, 0); /*0x76eb9a*/
    else
      v7 = 0; /*0x76eba1*/
    *(this + 288) = (int)v7; /*0x76eba7*/
    ScoreClass::SetState(v7, 1); /*0x76ebad*/
    PriorityQueue::Add((Selection_WorldDominationTour *)this, (MSAnim *)*(this + 288)); /*0x76ebbb*/
    DeleteAndZero::Alt((void **)&aP1); /*0x76ebc4*/
  }

}
double ScoreText::ShowAlt(...) { return 0; }

  GameSetup *v4; // edi
  void *eax4; // eax
  MSAnim *v5; // eax

  if ( *(this + 287) ) /*0x76ea24*/
  {
    Session::RemoveTeam(this, (int (***)(unsigned int, int))*(this + 287)); /*0x76ea2f*/
    (*(void (**)(unsigned int, int, unsigned int, int, unsigned int, int))(**(unsigned int **)&MEMORY[0x87F8E4].__pad_5568[9408] + 8))( /*0x76ea5a*/
      *(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9408],
      *(this + 279) + 124,
      *(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9412],
      *(this + 279) + 124,
      0,
      1);
    Surface::CopyRect(this, (ObjectClass *)(*(this + 279) + 124)); /*0x76ea69*/
    *(this + 287) = 0; /*0x76ea6e*/
  }
  v4 = (GameSetup *)aP1; /*0x76ea78*/
  if ( WideString::Length((const wchar_t **)aP1) ) /*0x76ea7e*/
  {
    WideString::AssignFromPtr((wchar_t **)&aP1, (const wchar_t **)v4); /*0x76ea8c*/
    eax4 = (void *)__2_YAPAXI_Z(0x34u); /*0x76ea93*/
    if ( eax4 ) /*0x76ea9d*/
      v5 = (MSAnim *)MSBitPrintAnim::Construct( /*0x76eab2*/
                       eax4,
                       (const wchar_t **)&aP1,
                       (MSAnim *)(*(this + 279) + 124),
                       (MPCooperative *)1);
    else
      v5 = 0; /*0x76eab9*/
    *(this + 287) = (int)v5; /*0x76eabf*/
    ScoreClass::SetState(v5, 1); /*0x76eac5*/
    PriorityQueue::Add((Selection_WorldDominationTour *)this, (MSAnim *)*(this + 287)); /*0x76ead3*/
    DeleteAndZero::Alt((void **)&aP1); /*0x76eadc*/
  }

}
double ScreenSaver::Process(...) { return 0; }

  char result; // al
  Frame *v4; // ecx

  result = MEMORY[0x8A00A0]; /*0x532100*/
  if ( MEMORY[0x8A00A0] || a1 ) /*0x53210b*/
  {
    MEMORY[0x8A00A0] = 0; /*0x532111*/
    Screen::Capture(1, 0, a2, a3); /*0x532118*/
    LOBYTE(v4) = 0; /*0x532123*/
    return Frame::Present(v4, 0); /*0x532127*/
  }
  return result; /*0x53212c*/

}
double SettingsClass::ClampValues(...) { return 0; }

  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int result; // eax

  v1 = *((char *)this + 16); /*0x5975e0*/
  if ( v1 < 4 ) /*0x5975ef*/
  {
    if ( v1 < 0 ) /*0x5975f8*/
      *((char *)this + 16) = 0; /*0x5975fa*/
  }
  else
  {
    *((char *)this + 16) = 3; /*0x5975f1*/
  }
  v2 = *((char *)this + 15); /*0x5975fd*/
  if ( v2 < 5 ) /*0x597603*/
  {
    if ( v2 < 0 ) /*0x597610*/
      *((char *)this + 15) = 0; /*0x597612*/
  }
  else
  {
    *((char *)this + 15) = 4; /*0x597605*/
  }
  v3 = *((char *)this + 18); /*0x597615*/
  if ( v3 < 4 ) /*0x59761b*/
  {
    if ( v3 < 0 ) /*0x597624*/
      *((char *)this + 18) = 0; /*0x597626*/
  }
  else
  {
    *((char *)this + 18) = 3; /*0x59761d*/
  }
  v4 = *((char *)this + 17); /*0x597629*/
  if ( v4 <= 100 ) /*0x597633*/
  {
    if ( v4 < 0 ) /*0x59763c*/
      *((char *)this + 17) = 0; /*0x59763e*/
  }
  else
  {
    *((char *)this + 17) = 100; /*0x597635*/
  }
  v5 = *((char *)this + 19); /*0x597641*/
  if ( v5 <= 100 ) /*0x597646*/
  {
    if ( v5 < 0 ) /*0x59764f*/
      *((char *)this + 19) = 0; /*0x597651*/
  }
  else
  {
    *((char *)this + 19) = 100; /*0x597648*/
  }
  v6 = *((char *)this + 20); /*0x597654*/
  if ( v6 <= 8 ) /*0x59765a*/
  {
    if ( v6 < 2 ) /*0x597668*/
      *((char *)this + 20) = 2; /*0x59766a*/
  }
  else
  {
    *((char *)this + 20) = 8; /*0x59765c*/
  }
  v7 = *((char *)this + 21); /*0x597671*/
  if ( v7 <= 100 ) /*0x597676*/
  {
    if ( v7 < 1 ) /*0x597680*/
      *((char *)this + 21) = 1; /*0x597682*/
  }
  else
  {
    *((char *)this + 21) = 100; /*0x597678*/
  }
  v8 = *((char *)this + 22); /*0x597689*/
  if ( v8 <= 100 ) /*0x59768e*/
  {
    if ( v8 < 0 ) /*0x597697*/
      *((char *)this + 22) = 0; /*0x597699*/
  }
  else
  {
    *((char *)this + 22) = 100; /*0x597690*/
  }
  v9 = *((char *)this + 23); /*0x59769c*/
  if ( v9 <= 100 ) /*0x5976a1*/
  {
    if ( v9 < 0 ) /*0x5976aa*/
      *((char *)this + 23) = 0; /*0x5976ac*/
  }
  else
  {
    *((char *)this + 23) = 100; /*0x5976a3*/
  }
  v10 = *((char *)this + 24); /*0x5976af*/
  if ( v10 <= 100 ) /*0x5976b4*/
  {
    if ( v10 < 0 ) /*0x5976bd*/
      *((char *)this + 24) = 0; /*0x5976bf*/
  }
  else
  {
    *((char *)this + 24) = 100; /*0x5976b6*/
  }
  v11 = *((char *)this + 25); /*0x5976c2*/
  if ( v11 < 4 ) /*0x5976c8*/
  {
    if ( v11 < 0 ) /*0x5976d1*/
      *((char *)this + 25) = 0; /*0x5976d3*/
  }
  else
  {
    *((char *)this + 25) = 3; /*0x5976ca*/
  }
  v12 = *((char *)this + 26); /*0x5976d6*/
  if ( v12 < 4 ) /*0x5976dc*/
  {
    if ( v12 < 0 ) /*0x5976e5*/
      *((char *)this + 26) = 0; /*0x5976e7*/
  }
  else
  {
    *((char *)this + 26) = 3; /*0x5976de*/
  }
  v13 = *((char *)this + 27); /*0x5976ea*/
  if ( v13 <= 100 ) /*0x5976ef*/
  {
    if ( v13 < 0 ) /*0x5976f8*/
      *((char *)this + 27) = 0; /*0x5976fa*/
  }
  else
  {
    *((char *)this + 27) = 100; /*0x5976f1*/
  }
  v14 = *((char *)this + 28); /*0x5976fd*/
  if ( v14 <= 100 ) /*0x597702*/
  {
    if ( v14 < 0 ) /*0x59770b*/
      *((char *)this + 28) = 0; /*0x59770d*/
  }
  else
  {
    *((char *)this + 28) = 100; /*0x597704*/
  }
  result = *((char *)this + 29); /*0x597710*/
  if ( result <= 0xFFFF ) /*0x597718*/
  {
    if ( result < 0 ) /*0x597726*/
      *((char *)this + 29) = 0; /*0x597728*/
  }
  else
  {
    *((char *)this + 29) = 0xFFFF; /*0x59771b*/
  }
  return result; /*0x59771a*/

}
double ShapeButton::SetShape(...) { return 0; }

  int result; // eax

  if ( *(unsigned char *)(this + 92) && *(unsigned int *)(this + 88) ) /*0x69de0b*/
  {
    __3_YAXPAX_Z(*(void **)(this + 88)); /*0x69de13*/
    *(unsigned int *)(this + 88) = 0; /*0x69de1b*/
    *(unsigned char *)(this + 92) = 0; /*0x69de1e*/
    *(unsigned int *)(this + 20) = 0; /*0x69de21*/
    *(unsigned int *)(this + 24) = 0; /*0x69de24*/
  }
  *(unsigned int *)(this + 88) = a2; /*0x69de2d*/
  if ( a2 ) /*0x69de30*/
  {
    *(unsigned int *)(this + 20) = *(__int16 *)(a2 + 2); /*0x69de36*/
    *(unsigned int *)(this + 24) = *(__int16 *)(a2 + 4); /*0x69de3d*/
  }
  else
  {
    *(unsigned int *)(this + 20) = 0; /*0x69de42*/
    *(unsigned int *)(this + 24) = 0; /*0x69de45*/
  }
  if ( a3 ) /*0x69de4e*/
    *(unsigned int *)(this + 20) = a3; /*0x69de50*/
  result = a4; /*0x69de53*/
  if ( a4 ) /*0x69de59*/
    *(unsigned int *)(this + 24) = a4; /*0x69de5b*/
  return result; /*0x69de5e*/

}
// 0x624110
double SimpleDialogControl::Constructor(...) { return 0; }

  *((unsigned int *)this + 1) = 0; /*0x624114*/
  *((unsigned char *)this + 8) = 0; /*0x624117*/
  *this = &OwnerDraw::SimpleDialogControl::`vftable'; /*0x62411a*/
  return this; /*0x624120*/

}
  *((unsigned int *)this + 1) = 0; /*0x624114*/
  *((unsigned char *)this + 8) = 0; /*0x624117*/
  *this = &OwnerDraw::SimpleDialogControl::`vftable'; /*0x62411a*/
  return this; /*0x624120*/

}
double SkirmishMapGen::LookupDialogHash(...) { return 0; }

  unsigned int *v1; // eax
  unsigned int *v3; // eax
  void *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x6067a6*/
  if ( !MEMORY[0xAC1B04] ) /*0x6067ac*/
    return 0; /*0x6067ac*/
  v1 = (unsigned int *)*((unsigned int *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v4) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6067cd*/
  if ( !v1 ) /*0x6067d2*/
    return 0; /*0x6067d2*/
  while ( (void *)*v1 != v4 ) /*0x6067da*/
  {
    v1 = (unsigned int *)v1[129]; /*0x6067dc*/
    if ( !v1 ) /*0x6067e4*/
      return 0; /*0x6067e4*/
  }
  v3 = v1 + 1; /*0x6067ee*/
  if ( v3 ) /*0x6067f3*/
    return *((unsigned char *)v3 + 188); /*0x6067f5*/
  else
    return 0; /*0x6067e6*/

}
double SlaveControlVector::Constructor(...) { return 0; }

  *(this + 1) = 0; /*0x6b1abb*/
  *(this + 2) = a2; /*0x6b1abe*/
  *((unsigned char *)this + 12) = 1; /*0x6b1ac1*/
  *((unsigned char *)this + 13) = 0; /*0x6b1ac5*/
  *this = &vt_VectorClass_SlaveManagerClass_SlaveControl; /*0x6b1ac8*/
  if ( a2 ) /*0x6b1ace*/
  {
    if ( a3 ) /*0x6b1ad6*/
    {
      *(this + 1) = a3; /*0x6b1ad8*/
      return this; /*0x6b1ade*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x6b1aed*/
    *((unsigned char *)this + 13) = 1; /*0x6b1af0*/
  }
  return this; /*0x6b1add*/

}
double SpawnControlVector::Constructor(...) { return 0; }

  *(this + 1) = 0; /*0x6b888b*/
  *(this + 2) = a2; /*0x6b888e*/
  *((unsigned char *)this + 12) = 1; /*0x6b8891*/
  *((unsigned char *)this + 13) = 0; /*0x6b8895*/
  *this = &vt_VectorClass_SpawnManagerClass_SpawnControl; /*0x6b8898*/
  if ( a2 ) /*0x6b889e*/
  {
    if ( a3 ) /*0x6b88a6*/
    {
      *(this + 1) = a3; /*0x6b88a8*/
      return this; /*0x6b88ae*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x6b88bd*/
    *((unsigned char *)this + 13) = 1; /*0x6b88c0*/
  }
  return this; /*0x6b88ad*/

}
double SquadClass::ProcessMove(...) { return 0; }

  CellStruct *result; // eax
  char v2[112]; // [esp+0h] [ebp-70h] BYREF

  result = MEMORY[0xA8B238]; /*0x731840*/
  if ( MEMORY[0xA8B238] ) /*0x73184a*/
  {
    result = (CellStruct *)MEMORY[0xA8B230]; /*0x731850*/
    if ( (MEMORY[0xA8B230]->nextScenario[0] & 0x400) == 0 ) /*0x73185a*/
    {
      result = *(CellStruct **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x731860*/
      if ( *(unsigned char *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5301) ) /*0x731865*/
      {
        if ( *(unsigned char *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5307) ) /*0x73186f*/
        {
          result = (CellStruct *)EventClass::Add2(v2, *(AnimClass **)&HouseClass_Player->__pad_28[8], 3u, this); /*0x73188a*/
          if ( Networking_LastEventIndex < 128 ) /*0x731899*/
          {
            qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], result, 0x6Fu); /*0x7318b7*/
            g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x7318ca*/
            result = (CellStruct *)(Networking_LastEventIndex + 1); /*0x7318e0*/
            Networking_NextPacketIndex = ((unsigned char)Networking_NextPacketIndex + 1) & 0x7F; /*0x7318e1*/
            ++Networking_LastEventIndex; /*0x7318e7*/
          }
        }
      }
    }
  }
  return result; /*0x7318ec*/

}
double StaticString::Factory(...) { return 0; }

  if ( (byte_B77F0C & 1) == 0 ) /*0x7af2ad*/
  {
    byte_B77F0C |= 1u; /*0x7af2b6*/
    String::Assign((char **)&unk_B77F20, (const char *)&off_84D784); /*0x7af2c1*/
    atexit(unknown_libname_64); /*0x7af2cb*/
  }
  if ( (byte_B77F0C & 2) == 0 ) /*0x7af2dd*/
  {
    byte_B77F0C |= 2u; /*0x7af2e6*/
    String::Assign(&dword_B77F08, (const char *)&off_816148); /*0x7af2f1*/
    atexit(unknown_libname_63); /*0x7af2fb*/
  }
  if ( (byte_B77F0C & 4) == 0 ) /*0x7af30d*/
  {
    byte_B77F0C |= 4u; /*0x7af316*/
    String::Assign((char **)&unk_B77F30, (const char *)&off_84D780); /*0x7af321*/
    atexit(unknown_libname_62); /*0x7af32b*/
  }
  if ( this == (void *)1 ) /*0x7af337*/
    return (Selection_WorldDominationTour *)&unk_B77F20; /*0x7af381*/
  if ( this == (void *)2 ) /*0x7af33a*/
    return (Selection_WorldDominationTour *)&dword_B77F08; /*0x7af37b*/
  if ( this == (void *)3 ) /*0x7af33d*/
    return (Selection_WorldDominationTour *)&unk_B77F30; /*0x7af375*/
  if ( (byte_B77F0C & 8) == 0 ) /*0x7af349*/
  {
    byte_B77F0C |= 8u; /*0x7af352*/
    String::Assign((char **)&unk_B77EF0, aXx); /*0x7af35d*/
    atexit(unknown_libname_61); /*0x7af367*/
  }
  return (Selection_WorldDominationTour *)&unk_B77EF0; /*0x7af335*/

}
double Straw::Dtor(...) { return 0; }

  int result; // eax
  int v3; // ecx

  result = *((char *)this + 1); /*0x6c9856*/
  *this = (int)&vt_Straw; /*0x6c9859*/
  if ( result ) /*0x6c9861*/
    *(unsigned int *)(result + 8) = *((char *)this + 2); /*0x6c9866*/
  v3 = *((char *)this + 2); /*0x6c9869*/
  if ( v3 ) /*0x6c986e*/
    result = (*(int (**)(int, unsigned int))(*(unsigned int *)v3 + 4))(v3, *((char *)this + 1)); /*0x6c9876*/
  *((char *)this + 2) = 0; /*0x6c9879*/
  *((char *)this + 1) = 0; /*0x6c987c*/
  return result; /*0x6c987f*/

}
double StringList::Find(...) { return 0; }

  int v3; // esi

  if ( !a2 ) /*0x72121b*/
    return -1; /*0x72121b*/
  if ( !strlen(a2) ) /*0x721220*/
    return -1; /*0x721220*/
  v3 = 0; /*0x721230*/
  if ( (int)*(this + 9) <= 0 ) /*0x721234*/
    return -1; /*0x721252*/
  while ( _strcmpi(*(const void **)(*(this + 6) + 4 * v3), a2) ) /*0x721248*/
  {
    if ( ++v3 >= *(this + 9) ) /*0x721250*/
      return -1; /*0x721250*/
  }
  return v3; /*0x721252*/

}
double StringTable::Find(...) { return 0; }

  ObjectClass *v2; // ebx
  int v4; // esi
  int v6; // esi
  void *v7; // [esp+Ch] [ebp-4h] BYREF

  v2 = (ObjectClass *)a1; /*0x5cf6b2*/
  if ( !String::NotEquals(a1, 0) ) /*0x5cf6be*/
    return 0; /*0x5cf6be*/
  v4 = 0; /*0x5cf6ca*/
  if ( *((int *)this + 4) <= 0 ) /*0x5cf6ce*/
    return 0; /*0x5cf728*/
  while ( 1 ) /*0x5cf6d5*/
  {
    String::AssignFromPtr((char **)&v7, (const char **)v2); /*0x5cf6d5*/
    String::ToLower((const char **)&v7); /*0x5cf6de*/
    String::AssignFromPtr((char **)&a1, *(const char ***)(*((unsigned int *)this + 1) + 4 * v4)); /*0x5cf6ee*/
    String::ToLower((const char **)&a1); /*0x5cf6f7*/
    if ( String::Compare((const char **)&v7, (const char **)&a1) ) /*0x5cf705*/
      break; /*0x5cf705*/
    DeleteAndZero((void **)&a1); /*0x5cf712*/
    DeleteAndZero(&v7); /*0x5cf71b*/
    if ( ++v4 >= *((unsigned int *)this + 4) ) /*0x5cf726*/
      return 0; /*0x5cf726*/
  }
  v6 = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v4); /*0x5cf738*/
  DeleteAndZero((void **)&a1); /*0x5cf73b*/
  DeleteAndZero(&v7); /*0x5cf744*/
  return v6; /*0x5cf728*/

}
double StringVector::Construct(...) { return 0; }

  *(this + 1) = 0; /*0x5ad6fb*/
  *(this + 2) = a2; /*0x5ad6fe*/
  *((unsigned char *)this + 12) = 1; /*0x5ad701*/
  *((unsigned char *)this + 13) = 0; /*0x5ad705*/
  *this = &vt_VectorClass_char; /*0x5ad708*/
  if ( a2 ) /*0x5ad70e*/
  {
    if ( a3 ) /*0x5ad716*/
    {
      *(this + 1) = a3; /*0x5ad718*/
      return this; /*0x5ad71e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x5ad72d*/
    *((unsigned char *)this + 13) = 1; /*0x5ad730*/
  }
  return this; /*0x5ad71d*/

}
double StringVector::StringVector_field_0x14(...) { return 0; }
double StringVector::__pad_0(...) { return 0; }
// 0x4a3840
double StructTable::Append(...) { return 0; }

  int v3; // ecx

  v3 = *(this + 24576); /*0x4a3842*/
  if ( v3 == 1024 ) /*0x4a384e*/
    return 1; /*0x4a3850*/
  qmemcpy(this + 24 * v3, aP1, 0x60u); /*0x4a386b*/
  ++*(this + 24576); /*0x4a3876*/
  return 0; /*0x4a3855*/

}
  int v3; // ecx

  v3 = *(this + 24576); /*0x4a3842*/
  if ( v3 == 1024 ) /*0x4a384e*/
    return 1; /*0x4a3850*/
  qmemcpy(this + 24 * v3, aP1, 0x60u); /*0x4a386b*/
  ++*(this + 24576); /*0x4a3876*/
  return 0; /*0x4a3855*/

}
double SwizzleManager::SaveLoad(...) { return 0; }

  int *v2; // edi
  int result; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  int v7; // edi

  v2 = a2; /*0x55aac1*/
  if ( !a2 ) /*0x55aac7*/
    return -2147467261; /*0x55aac9*/
  result = (*(int (**)(int *, int **, int, unsigned int))(*a2 + 12))(a2, &a2, 4, 0); /*0x55aade*/
  if ( result >= 0 ) /*0x55aae3*/
  {
    SwizzleManagerClass::Here_I_Am(&MEMORY[0xB0C110], a2, a1); /*0x55aaf7*/
    v4 = a1[5]; /*0x55aafe*/
    v5 = *v2; /*0x55ab01*/
    v6 = (*(int (**)(int *, unsigned int))(*a1 + 36))(a1, 0); /*0x55ab07*/
    v7 = (*(int (**)(int *, int *, int))(v5 + 12))(v2, a1, v6); /*0x55ab13*/
    a1[5] = v4; /*0x55ab1b*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], a1 + 3); /*0x55ab1e*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], a1 + 2); /*0x55ab2c*/
    return v7; /*0x55ab33*/
  }
  return result; /*0x55aace*/

}
double SyncDelayClass::ProcessNetworkSync(...) { return 0; }

  int v2; // eax
  int v3; // edi
  int v4; // ebx
  unsigned int *v5; // eax
  int *v6; // ecx
  int v7; // esi
  int v8; // eax
  const wchar_t *v9; // eax
  int v10; // esi
  int v12; // [esp+Ch] [ebp-8h] BYREF
  int v13; // [esp+10h] [ebp-4h] BYREF

  Chat::ProcessMessages(); /*0x55dee8*/
  v2 = *this; /*0x55deed*/
  if ( !*this ) /*0x55def2*/
    return v2; /*0x55def2*/
  BYTE1(v2) &= ~8u; /*0x55def8*/
  v3 = v2; /*0x55defc*/
  v4 = v2; /*0x55df03*/
  BYTE1(v4) = BYTE1(v2) & 0xE8; /*0x55df05*/
  v13 = v4; /*0x55df0a*/
  if ( MEMORY[0x87F684] ) /*0x55df0e*/
  {
    v5 = (unsigned int *)MEMORY[0x87F690]; /*0x55df10*/
    if ( MEMORY[0x87F690] && *(unsigned int *)MEMORY[0x87F690] == v4 ) /*0x55df1b*/
      goto LABEL_7; /*0x55df1b*/
    v5 = (unsigned int *)SortedVector::BinarySearch(&v13); /*0x55df27*/
    if ( v5 ) /*0x55df2e*/
    {
      MEMORY[0x87F690] = (int)v5; /*0x55df30*/
LABEL_7:
      v6 = v5 + 1; /*0x55df35*/
      goto LABEL_9; /*0x55df38*/
    }
  }
  v5 = (unsigned int *)MEMORY[0x87F690]; /*0x55df3a*/
  v6 = (int *)&unk_B7883C; /*0x55df3f*/
LABEL_9:
  v7 = *v6; /*0x55df44*/
  if ( !*v6 ) /*0x55df44*/
  {
    v12 = v3; /*0x55df50*/
    if ( MEMORY[0x87F684] ) /*0x55df56*/
    {
      if ( v5 && *v5 == v3 ) /*0x55df5e*/
        goto LABEL_15; /*0x55df5e*/
      v5 = (unsigned int *)SortedVector::BinarySearch(&v12); /*0x55df6a*/
      if ( v5 ) /*0x55df71*/
      {
        MEMORY[0x87F690] = (int)v5; /*0x55df73*/
LABEL_15:
        v2 = (int)(v5 + 1); /*0x55df78*/
LABEL_23:
        v7 = *(unsigned int *)v2; /*0x55dfd1*/
        goto LABEL_24; /*0x55dfd1*/
      }
    }
    goto LABEL_22; /*0x55df71*/
  }
  LOBYTE(v2) = (*(int (**)(int, int))(*(unsigned int *)v7 + 20))(v7, v3); /*0x55df82*/
  if ( !(unsigned char)v2 ) /*0x55df87*/
  {
    v12 = v3; /*0x55df8e*/
    if ( MEMORY[0x87F684] ) /*0x55df94*/
    {
      if ( !(unsigned __int8)SyncDelay::Check(&v12) ) /*0x55dfa0*/
      {
        v8 = SortedVector::BinarySearch(&v12); /*0x55dfb3*/
        if ( !v8 ) /*0x55dfba*/
          goto LABEL_22; /*0x55dfba*/
        MEMORY[0x87F690] = v8; /*0x55dfbc*/
      }
      v2 = MEMORY[0x87F690] + 4; /*0x55dfc7*/
      goto LABEL_23; /*0x55dfca*/
    }
LABEL_22:
    v2 = (int)&unk_B7883C; /*0x55dfcc*/
    goto LABEL_23; /*0x55dfcc*/
  }
LABEL_24:
  if ( !v7 /*0x55dffc*/
    || MEMORY[0xA8ED9C]
    && (v9 = (const wchar_t *)(*(int (**)(int))(*(unsigned int *)v7 + 12))(v7),
        (v2 = _wcsicmp(v9, g_INI_Key_De)) != 0) )
  {
    switch ( v4 ) /*0x55e07c*/
    {
      case 27: /*0x55e07c*/
        LOBYTE(v2) = UI_Create(); /*0x55e07e*/
        break;
      case 9: /*0x55e07c*/
        LOBYTE(v2) = Network_Process_6ABC40(&MEMORY[0x87F7E8]); /*0x55e094*/
        break;
      case 37: /*0x55e07c*/
        v2 = MEMORY[0xABCE14]; /*0x55e0ab*/
        if ( (*this & 0x800) != 0 ) /*0x55e0b0*/
          BYTE1(v2) = BYTE1(MEMORY[0xABCE14]) & 0xFE; /*0x55e0b2*/
        else
          BYTE1(v2) = BYTE1(MEMORY[0xABCE14]) | 1; /*0x55e0c1*/
        MEMORY[0xABCE14] = v2; /*0x55e0b7*/
        break;
      case 39: /*0x55e07c*/
        v2 = MEMORY[0xABCE14]; /*0x55e0db*/
        if ( (*this & 0x800) != 0 ) /*0x55e0e0*/
          BYTE1(v2) = BYTE1(MEMORY[0xABCE14]) & 0xEF; /*0x55e0e2*/
        else
          BYTE1(v2) = BYTE1(MEMORY[0xABCE14]) | 0x10; /*0x55e0f1*/
        MEMORY[0xABCE14] = v2; /*0x55e0e7*/
        break;
      case 38: /*0x55e07c*/
        v2 = MEMORY[0xABCE14]; /*0x55e10b*/
        if ( (*this & 0x800) != 0 ) /*0x55e110*/
          LOBYTE(v2) = MEMORY[0xABCE14] & 0xFE; /*0x55e112*/
        else
          LOBYTE(v2) = MEMORY[0xABCE14] | 1; /*0x55e120*/
        MEMORY[0xABCE14] = v2; /*0x55e116*/
        break;
      case 40: /*0x55e07c*/
        v2 = MEMORY[0xABCE14]; /*0x55e139*/
        if ( (*this & 0x800) != 0 ) /*0x55e13e*/
          LOBYTE(v2) = MEMORY[0xABCE14] & 0xEF; /*0x55e140*/
        else
          LOBYTE(v2) = MEMORY[0xABCE14] | 0x10; /*0x55e14e*/
        MEMORY[0xABCE14] = v2; /*0x55e144*/
        break;
    }
  }
  else
  {
    if ( (*(unsigned __int8 (**)(int, int))(*(unsigned int *)v7 + 24))(v7, *this) ) /*0x55e006*/
      (*(void (**)(int, int))(*(unsigned int *)v7 + 32))(v7, *this); /*0x55e015*/
    LOBYTE(v2) = (*(int (**)(int, int))(*(unsigned int *)v7 + 28))(v7, *this); /*0x55e020*/
    if ( (unsigned char)v2 ) /*0x55e025*/
    {
      v10 = 0; /*0x55e031*/
      v2 = (unsigned __int16)EventQueue::Process(MEMORY[0x87F770]); /*0x55e03b*/
      if ( v2 == *this ) /*0x55e042*/
      {
        do /*0x55e070*/
        {
          EventQueue::Read(MEMORY[0x87F770]); /*0x55e04e*/
          v2 = (unsigned __int16)EventQueue::Process(MEMORY[0x87F770]); /*0x55e05e*/
          ++v10; /*0x55e063*/
        }
        while ( v10 < 10 && v2 == *this ); /*0x55e070*/
      }
    }
  }
  return v2; /*0x55e072*/

}
double TabCameoListClass::AddCameo_ReplaceItAll(...) { return 0; }

  int v4; // ebp
  int result; // eax
  int *i; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int *v11; // edi
  int *v12; // esi
  wchar_t *v13; // eax
  int v14; // [esp+14h] [ebp-8h]

  v4 = 0; /*0x6a8717*/
  result = *(this + 21) + 1; /*0x6a871f*/
  *(this + 21) = result; /*0x6a8721*/
  if ( result > 0 ) /*0x6a8726*/
  {
    for ( i = this + 22; ; i += 13 ) /*0x6a872c*/
    {
      v7 = a2; /*0x6a8734*/
      if ( RadarClass::GetBlip(a2, a3, i[1], *i) ) /*0x6a8742*/
        break; /*0x6a8742*/
      result = *(this + 21); /*0x6a874b*/
      if ( ++v4 >= result ) /*0x6a8754*/
        return result; /*0x6a8754*/
    }
    v8 = *(this + 21) - 1; /*0x6a8763*/
    if ( v8 > v4 ) /*0x6a8766*/
    {
      v9 = 13 * v8; /*0x6a876b*/
      v10 = v8 - v4; /*0x6a876e*/
      v11 = this + v9 + 22; /*0x6a8770*/
      do /*0x6a8783*/
      {
        --v10; /*0x6a877e*/
        qmemcpy(v11, v11 - 13, 0x34u); /*0x6a877f*/
        v11 -= 13; /*0x6a8781*/
      }
      while ( v10 ); /*0x6a8783*/
      v7 = a2; /*0x6a8785*/
    }
    v12 = this + 13 * v4; /*0x6a8798*/
    v12[23] = v7; /*0x6a879b*/
    v12[22] = a3; /*0x6a879e*/
    if ( v7 == 7 ) /*0x6a87a1*/
      v12[24] = GetHouseTechLevel(7, a3); /*0x6a87aa*/
    v12[25] = 0; /*0x6a87b3*/
    *(this + 12 * v4 + v4 + 26) = 0; /*0x6a87bd*/
    v12[27] = 0; /*0x6a87c0*/
    v13 = MEMORY[0xA8ED84]; /*0x6a87c3*/
    v12[32] = 0; /*0x6a87c8*/
    v12[29] = (int)v13; /*0x6a87ce*/
    v12[30] = v14; /*0x6a87d4*/
    v12[31] = 0; /*0x6a87d7*/
    v12[34] = 0; /*0x6a87da*/
    return v14; /*0x6a87d0*/
  }
  return result; /*0x6a8756*/

}
double Targeting::Readd(...) { return 0; }

  int v1; // eax
  int v2; // edi

  if ( aP0 ) /*0x4a9728*/
  {
    if ( *(unsigned int *)&aP0->__pad_8C[8] != -1 ) /*0x4a9731*/
      RemoveTarget(aP0); /*0x4a9734*/
    v1 = (*(int (**)(IUnknown *))(aP0->field_0 + 120))(aP0); /*0x4a973d*/
    v2 = v1; /*0x4a9740*/
    if ( v1 != -1 && DisplayClass::RenderStatusText(24 * v1 + 9044832, aP0, v1 == 2) ) /*0x4a9759*/
      *(unsigned int *)&aP0->__pad_8C[8] = v2; /*0x4a9762*/
  }

}
double TaskManager::Update(...) { return 0; }

  int result; // eax
  int v3; // ebx
  int i; // edi
  int v5; // ecx
  unsigned int *v6; // edx
  unsigned int *v7; // edx
  unsigned int *v8; // edx
  int v9; // [esp+10h] [ebp-8h]

  result = *((unsigned int *)this + 9); /*0x6b7108*/
  if ( *(int *)(result + 108) > 0 && *(unsigned char *)(result + 144) ) /*0x6b7112*/
    v3 = 0; /*0x6b711c*/
  else
    v3 = *((unsigned int *)this + 12); /*0x6b7120*/
  for ( i = *((unsigned int *)this + 18) - 1; i >= 0; --i ) /*0x6b7127*/
  {
    result = *(unsigned int *)(*((unsigned int *)this + 15) + 4 * i); /*0x6b7136*/
    v5 = *(unsigned int *)(result + 4); /*0x6b7139*/
    if ( v5 != 7 ) /*0x6b713e*/
    {
      if ( !v5 || v5 == 6 ) /*0x6b714f*/
      {
        *(unsigned int *)(result + 4) = 7; /*0x6b71de*/
        v8 = *(unsigned int **)(*((unsigned int *)this + 15) + 4 * i); /*0x6b71e4*/
        (*(void (**)(unsigned int))(*(unsigned int *)*v8 + 248))(*v8); /*0x6b71eb*/
        **(unsigned int **)(*((unsigned int *)this + 15) + 4 * i) = 0; /*0x6b71f7*/
        v7 = (unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 15) + 4 * i) + 8); /*0x6b7208*/
        *v7 = MEMORY[0xA8ED84]; /*0x6b720b*/
        result = v9; /*0x6b720d*/
      }
      else
      {
        if ( v5 == 1 ) /*0x6b7158*/
        {
          AbstractClass::processStateTransition(*(unsigned int *)result); /*0x6b7162*/
          *(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 15) + 4 * i) + 4) = 7; /*0x6b716d*/
          v6 = *(unsigned int **)(*((unsigned int *)this + 15) + 4 * i); /*0x6b7173*/
          (*(void (**)(unsigned int))(*(unsigned int *)*v6 + 248))(*v6); /*0x6b717a*/
        }
        else
        {
          *(unsigned int *)(result + 4) = 7; /*0x6b71a2*/
          UnitClass::GetExitCell(**(unsigned int **)(*((unsigned int *)this + 15) + 4 * i), *((unsigned int *)this + 26)); /*0x6b71b7*/
        }
        **(unsigned int **)(*((unsigned int *)this + 15) + 4 * i) = 0; /*0x6b7186*/
        v7 = (unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 15) + 4 * i) + 8); /*0x6b7197*/
        *v7 = MEMORY[0xA8ED84]; /*0x6b719a*/
        result = v9; /*0x6b719c*/
      }
      v7[1] = result; /*0x6b7211*/
      v7[2] = v3; /*0x6b7214*/
    }
  }
  return result; /*0x6b721f*/

}
double TechnoTypeVector::Constructor(...) { return 0; }

  *(this + 1) = 0; /*0x4cabfb*/
  *(this + 2) = a2; /*0x4cabfe*/
  *((unsigned char *)this + 12) = 1; /*0x4cac01*/
  *((unsigned char *)this + 13) = 0; /*0x4cac05*/
  *this = &vt_VectorClass_TechnoTypeClass_const; /*0x4cac08*/
  if ( a2 ) /*0x4cac0e*/
  {
    if ( a3 ) /*0x4cac16*/
    {
      *(this + 1) = a3; /*0x4cac18*/
      return this; /*0x4cac1e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x4cac2d*/
    *((unsigned char *)this + 13) = 1; /*0x4cac30*/
  }
  return this; /*0x4cac1d*/

}
double Text::DrawRepeated(...) { return 0; }

  char result; // al
  HDC DC; // edi
  IUnknown *v7; // ebx
  IUnknown *v8; // eax
  bool v9; // of
  IUnknown *v10; // esi
  IUnknown *v11; // ebp
  HGDIOBJ h; // [esp+8h] [ebp-4h]
  IUnknown *aP2a; // [esp+14h] [ebp+8h]

  result = *((unsigned char *)&(&g_MatrixTransformState)[22] + 10); /*0x5bd493*/
  if ( *((unsigned char *)&(&g_MatrixTransformState)[22] + 10) ) /*0x5bd49f*/
  {
    if ( this == *(&g_MatrixTransformState + 267) ) /*0x5bd4ab*/
    {
      DC = GetDC((HWND)*(&g_MatrixTransformState + 268)); /*0x5bd4bd*/
      SetBkMode(DC, 2); /*0x5bd4c2*/
      SetBkColor(DC, (COLORREF)*(&g_MatrixTransformState + 198)); /*0x5bd4d0*/
      result = SetTextColor(DC, (COLORREF)*(&g_MatrixTransformState + 192)); /*0x5bd4de*/
      if ( DC ) /*0x5bd4e6*/
      {
        v7 = aP2; /*0x5bd4f6*/
        h = SelectObject(DC, *(&g_MatrixTransformState + 269)); /*0x5bd4fe*/
        v8 = (IUnknown *)((char *)aP2 + a5); /*0x5bd502*/
        v9 = __OFSUB__(aP2, (char *)aP2 + a5); /*0x5bd505*/
        aP2a = (IUnknown *)((char *)aP2 + a5); /*0x5bd507*/
        if ( -a5 < 0 != v9 ) /*0x5bd50b*/
        {
          v10 = aP1; /*0x5bd513*/
          v11 = (IUnknown *)((char *)aP1 + a4); /*0x5bd517*/
          do /*0x5bd53a*/
          {
            if ( (int)v10 < (int)v11 ) /*0x5bd51c*/
            {
              do /*0x5bd52d*/
              {
                Text::DrawCharAtGrid(this, DC, (int)v10, (int)v7); /*0x5bd525*/
                v10 = (IUnknown *)((char *)v10 + 1); /*0x5bd52a*/
              }
              while ( (int)v10 < (int)v11 ); /*0x5bd52d*/
              v10 = aP1; /*0x5bd52f*/
              v8 = aP2a; /*0x5bd533*/
            }
            v7 = (IUnknown *)((char *)v7 + 1); /*0x5bd537*/
          }
          while ( (int)v7 < (int)v8 ); /*0x5bd53a*/
        }
        SelectObject(DC, h); /*0x5bd544*/
        return ReleaseDC((HWND)*(&g_MatrixTransformState + 268), DC); /*0x5bd552*/
      }
    }
  }
  return result; /*0x5bd559*/

}
double Text::Layout(...) { return 0; }

  unsigned __int16 v5; // dx
  unsigned __int16 v6; // di
  int v7; // esi
  int v8; // ebp
  unsigned __int16 *v9; // ebx
  unsigned __int8 *v10; // eax
  int v11; // edx
  int v12; // edx
  int v13; // eax
  AbstractClass *v15; // [esp+4h] [ebp-1Ch]
  unsigned __int16 *v16; // [esp+Ch] [ebp-14h]
  unsigned int *v17; // [esp+10h] [ebp-10h]
  AbstractClass *v18; // [esp+14h] [ebp-Ch]
  AbstractClass *v19; // [esp+18h] [ebp-8h]
  unsigned __int16 i; // [esp+1Ch] [ebp-4h]
  AbstractClass *a1a; // [esp+24h] [ebp+4h]

  v5 = 0; /*0x433cf6*/
  v18 = 0; /*0x433cff*/
  v17 = (unsigned int *)*(this + 1); /*0x433d03*/
  if ( v17 && a1 ) /*0x433d13*/
  {
    v6 = *a1; /*0x433d1f*/
    v7 = 0; /*0x433d22*/
    v8 = 0; /*0x433d24*/
    v9 = a1 + 1; /*0x433d26*/
    a1a = 0; /*0x433d2c*/
    v19 = (AbstractClass *)*(this + 7); /*0x433d30*/
    v15 = v19; /*0x433d34*/
    v16 = 0; /*0x433d38*/
    for ( i = v6; v6; i = v6 ) /*0x433d40*/
    {
      switch ( v6 ) /*0x433d5c*/
      {
        case 9u: /*0x433d5c*/
          v7 = *(this + 10) + v7 - (*(this + 10) + v7) % *(this + 10); /*0x433d92*/
          break; /*0x433d94*/
        case 0xAu: /*0x433d5c*/
        case 0xDu: /*0x433d5c*/
          if ( v5 != 13 ) /*0x433d67*/
          {
            v7 = 0; /*0x433d75*/
            v8 = 0; /*0x433d77*/
            v15 = (AbstractClass *)((char *)v15 + (unsigned int)v19); /*0x433d7b*/
          }
          break; /*0x433d7f*/
        case 0x20u: /*0x433d5c*/
          v16 = v9; /*0x433d9d*/
          v18 = a1a; /*0x433da1*/
          goto LABEL_9; /*0x433da1*/
        default:
LABEL_9:
          v10 = 0; /*0x433da5*/
          if ( v17 ) /*0x433dad*/
          {
            v11 = *(unsigned __int16 *)(v17[6] + 2 * v6); /*0x433db4*/
            if ( (unsigned short)v11 ) /*0x433dba*/
              v10 = (unsigned __int8 *)(v17[7] + (v11 - 1) * v17[5]); /*0x433dc7*/
          }
          if ( v10 || (v10 = (unsigned __int8 *)*(this + 2)) != 0 ) /*0x433dd7*/
          {
            ++v8; /*0x433de1*/
            v12 = *(this + 11); /*0x433de2*/
            v13 = *v10; /*0x433de5*/
            v7 += v12 + v13; /*0x433dea*/
            if ( aP4 && v7 > (int)aP4 ) /*0x433df6*/
            {
              if ( v16 ) /*0x433dfe*/
              {
                if ( v8 > 1 ) /*0x433e03*/
                {
                  v9 = v16; /*0x433e09*/
                  a1a = v18; /*0x433e0b*/
                }
              }
              else
              {
                if ( v8 > 1 ) /*0x433e14*/
                {
                  v7 -= v13 + v12; /*0x433e18*/
                  --v9; /*0x433e1a*/
                }
                if ( v7 > (int)a1a ) /*0x433e21*/
                  a1a = (AbstractClass *)v7; /*0x433e23*/
              }
              v7 = 0; /*0x433e2f*/
              v8 = 0; /*0x433e31*/
              v16 = 0; /*0x433e35*/
              v15 = (AbstractClass *)((char *)v15 + (unsigned int)v19); /*0x433e39*/
            }
            else if ( v7 > (int)a1a ) /*0x433e43*/
            {
              a1a = (AbstractClass *)v7; /*0x433e45*/
            }
          }
          break; /*0x433e3d*/
      }
      v6 = *v9; /*0x433e49*/
      v5 = i; /*0x433e4c*/
      ++v9; /*0x433e50*/
    }
    if ( aP2 ) /*0x433e69*/
      *(unsigned int *)aP2->__pad_0 = a1a; /*0x433e6f*/
    if ( aP3 ) /*0x433e77*/
      *(unsigned int *)aP3->__pad_0 = v15; /*0x433e7d*/
    return 1; /*0x433e7f*/
  }
  else
  {
    if ( aP3 ) /*0x433e8e*/
      *(unsigned int *)aP3->__pad_0 = 0; /*0x433e90*/
    if ( aP2 ) /*0x433e98*/
      *(unsigned int *)aP2->__pad_0 = 0; /*0x433e9a*/
    return 0; /*0x433e9c*/
  }

}
double Text::MeasureWidth(...) { return 0; }

  unsigned int *v2; // ecx

  Text::Layout(v2, (unsigned __int16 *)aP0, (AbstractClass *)&aP2, 0, (AbstractClass *)aP2); /*0x433ee1*/
  return aP2; /*0x433eea*/

}
double TextGroup::SetRect(...) { return 0; }

  AbstractClass *result; // eax

  result = aP1; /*0x433ca0*/
  if ( aP1 ) /*0x433ca8*/
  {
    *(this + 12) = *(unsigned int *)aP1->__pad_0; /*0x433cac*/
    *(this + 13) = *(unsigned int *)&aP1->__pad_0[4]; /*0x433cb2*/
    *(this + 14) = *(unsigned int *)&aP1->__pad_0[8]; /*0x433cb8*/
    result = *(AbstractClass **)&aP1->__pad_0[12]; /*0x433cbb*/
    *(this + 15) = result; /*0x433cbe*/
  }
  else
  {
    *(this + 15) = 0; /*0x433cc4*/
    *(this + 14) = 0; /*0x433cc7*/
    *(this + 13) = 0; /*0x433cca*/
    *(this + 12) = 0; /*0x433ccd*/
  }
  return result->__pad_0; /*0x433cc1*/

}
double TheatreClass::InitView(...) { return 0; }

  int v0; // edx
  unsigned int *v1; // esi
  int v2; // eax
  void *v3; // eax
  int v4; // esi
  int v5; // eax
  int result; // eax

  v0 = MEMORY[0x87F6A8]; /*0x545000*/
  if ( MEMORY[0x87F6A8] > 0 ) /*0x545009*/
  {
    v1 = MEMORY[0x87F69C]; /*0x54500b*/
    do /*0x545054*/
    {
      if ( *v1 ) /*0x545011*/
      {
        (**(void (***)(unsigned int, int))*v1)(*v1, 1); /*0x54501b*/
        v1 = MEMORY[0x87F69C]; /*0x54501d*/
        v0 = MEMORY[0x87F6A8]; /*0x545023*/
      }
      if ( v0 <= 0 ) /*0x54502b*/
        break; /*0x54502b*/
      v2 = 0; /*0x54502e*/
      MEMORY[0x87F6A8] = v0 - 1; /*0x545032*/
      if ( v0 - 1 <= 0 ) /*0x545038*/
        break; /*0x545038*/
      do /*0x545050*/
      {
        v1[v2] = v1[v2 + 1]; /*0x54503e*/
        v0 = MEMORY[0x87F6A8]; /*0x545041*/
        v1 = MEMORY[0x87F69C]; /*0x545047*/
        ++v2; /*0x54504d*/
      }
      while ( v2 < MEMORY[0x87F6A8] ); /*0x545050*/
    }
    while ( MEMORY[0x87F6A8] > 0 ); /*0x545054*/
  }
  v3 = __2_YAPAXI_Z(0x1B4u); /*0x54505b*/
  if ( v3 ) /*0x545065*/
    v4 = LightConvertClass::Constructor( /*0x545094*/
           (int)v3,
           (int)&stru_ABBED0,
           (int)&MEMORY[0x885780],
           MEMORY[0x887308],
           1000,
           1000,
           1000,
           0,
           0,
           53);
  else
    v4 = 0; /*0x545098*/
  if ( MEMORY[0x87F6A8] < MEMORY[0x87F6A0] /*0x5450d0*/
    || (MEMORY[0x87F6A5] || !MEMORY[0x87F6A0])
    && MEMORY[0x87F6AC] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0x87F698] + 8))(
         &MEMORY[0x87F698],
         MEMORY[0x87F6A0] + MEMORY[0x87F6AC],
         0) )
  {
    v5 = MEMORY[0x87F6A8]++; /*0x5450dd*/
    *((unsigned int *)MEMORY[0x87F69C] + v5) = v4; /*0x5450ec*/
  }
  dword_ABDC84 = 0; /*0x54510c*/
  TacticalClass::SetView((int)g_CellClassArray, 0, 0x10000, 0, 1000, 1000, 1000); /*0x545116*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x545120*/
  for ( result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x545132*/
        result;
        result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
  {
    *(unsigned int *)(result + 52) = 0; /*0x545139*/
  }
  return result; /*0x545131*/

}
double TileData::Constructor(...) { return 0; }

  *((unsigned int *)this + 2) = 0; /*0x58bdc4*/
  *((unsigned int *)this + 4) = 0; /*0x58bdc7*/
  *((unsigned int *)this + 6) = 0; /*0x58bdca*/
  *((unsigned int *)this + 8) = 0; /*0x58bdcd*/
  *((unsigned int *)this + 10) = 0; /*0x58bdd0*/
  *((unsigned int *)this + 12) = 0; /*0x58bdd3*/
  *(unsigned short *)this = 0; /*0x58bdd6*/
  *((unsigned short *)this + 1) = 0; /*0x58bdd9*/
  *((unsigned int *)this + 3) = 0; /*0x58bddd*/
  *((unsigned int *)this + 5) = 0; /*0x58bde0*/
  *((unsigned int *)this + 7) = 0; /*0x58bde3*/
  *((unsigned int *)this + 9) = 0; /*0x58bde6*/
  *((unsigned int *)this + 11) = 0; /*0x58bde9*/
  *((unsigned int *)this + 13) = 0; /*0x58bdec*/
  *((unsigned int *)this + 14) = 0; /*0x58bdef*/
  *((unsigned int *)this + 15) = 0; /*0x58bdf2*/
  *((unsigned int *)this + 16) = -1; /*0x58bdf5*/
  *((unsigned char *)this + 68) = 0; /*0x58bdfc*/
  *((unsigned char *)this + 69) = 0; /*0x58bdff*/
  *((unsigned char *)this + 70) = 0; /*0x58be02*/
  *((unsigned char *)this + 71) = 0; /*0x58be05*/
  *((unsigned char *)this + 72) = 0; /*0x58be08*/
  *((unsigned char *)this + 73) = 0; /*0x58be0b*/
  *((unsigned char *)this + 74) = 1; /*0x58be0e*/
  *((unsigned char *)this + 75) = 0; /*0x58be12*/
  return this; /*0x58be15*/

}
double TileNode::Cleanup(...) { return 0; }

  void (***v2)(unsigned int, int); // ecx
  int v3; // eax
  void *v4; // eax
  unsigned int *v5; // [esp+8h] [ebp-4h] BYREF

  v2 = (void (***)(unsigned int, int))*this; /*0x58c077*/
  if ( v2 ) /*0x58c07b*/
  {
    (**v2)(v2, 1); /*0x58c081*/
    *this = 0; /*0x58c083*/
  }
  v5 = this; /*0x58c095*/
  v3 = (*(int (**)(int *, unsigned int **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v5); /*0x58c099*/
  if ( v3 != -1 && v3 < g_RandomMap_TileData && v3 < --g_RandomMap_TileData ) /*0x58c0b4*/
  {
    do /*0x58c0cc*/
    {
      ++v3; /*0x58c0bc*/
      *((unsigned int *)g_RandomMap_TerrainState + v3 - 1) = *((unsigned int *)g_RandomMap_TerrainState + v3); /*0x58c0c0*/
    }
    while ( v3 < g_RandomMap_TileData ); /*0x58c0cc*/
  }
  v4 = (void *)*((unsigned int *)this + 11); /*0x58c0ce*/
  *((unsigned int *)this + 10) = &vt_VectorClass_Cell; /*0x58c0d1*/
  if ( v4 && *((unsigned char *)this + 53) ) /*0x58c0dc*/
  {
    __3_YAXPAX_Z(v4); /*0x58c0e2*/
    *((unsigned int *)this + 11) = 0; /*0x58c0ea*/
  }
  *((unsigned char *)this + 53) = 0; /*0x58c0ed*/
  *((unsigned int *)this + 12) = 0; /*0x58c0f0*/

}
double TileSystem::Constructor(...) { return 0; }

  *(this + 1) = 0; /*0x5ad74b*/
  *(this + 2) = aP1; /*0x5ad74e*/
  *((unsigned char *)this + 12) = 1; /*0x5ad751*/
  *((unsigned char *)this + 13) = 0; /*0x5ad755*/
  *this = &vt_VectorClass_MapRegionClass; /*0x5ad758*/
  if ( aP1 ) /*0x5ad75e*/
  {
    if ( aP2 ) /*0x5ad766*/
    {
      *(this + 1) = aP2; /*0x5ad768*/
      return this; /*0x5ad76e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * (unsigned int)aP1); /*0x5ad77d*/
    *((unsigned char *)this + 13) = 1; /*0x5ad780*/
  }
  return this; /*0x5ad76d*/

}
// 0x724ad0
double ToolTipClass::initString(...) { return 0; }

  unsigned int *v2; // eax
  wchar_t *v3; // ecx
  wchar_t *String; // eax
  const wchar_t *v5; // edi
  int v6; // edx

  v2 = (unsigned int *)*((unsigned int *)this + 1); /*0x724ad7*/
  if ( v2 ) /*0x724adc*/
  {
    v3 = (wchar_t *)v2[5]; /*0x724ae2*/
    if ( v3 ) /*0x724ae7*/
      String = GetStringCSF(v3, 0, MEMORY[0x8449CC], 563); /*0x724b01*/
    else
      String = (wchar_t *)(*(int (**)(wchar_t *, unsigned int))(*(unsigned int *)this + 20))(this, *v2); /*0x724af0*/
    v5 = String; /*0x724b06*/
    if ( String && wcslen(String) ) /*0x724b0d*/
    {
      wcsncpy((unsigned int *)this + 20, v5, 0x100u); /*0x724b23*/
      v6 = *((unsigned int *)this + 4); /*0x724b28*/
      *((unsigned int *)this + 7) = *((unsigned int *)this + 5); /*0x724b36*/
      *((unsigned int *)this + 6) = v6; /*0x724b39*/
      if ( !(*(unsigned __int8 (**)(wchar_t *, unsigned int *))(*(unsigned int *)this + 4))(this, (unsigned int *)this + 6) ) /*0x724b3e*/
      {
        *((unsigned int *)this + 6) = 0; /*0x724b47*/
        *((unsigned int *)this + 7) = 0; /*0x724b49*/
        *((unsigned int *)this + 8) = 0; /*0x724b4c*/
        *((unsigned int *)this + 9) = 0; /*0x724b4f*/
        *((unsigned int *)this + 1) = 0; /*0x724b54*/
        return 0; /*0x724b5f*/
      }
    }
    else
    {
      *((unsigned int *)this + 6) = 0; /*0x724b60*/
      *((unsigned int *)this + 7) = 0; /*0x724b63*/
      *((unsigned int *)this + 8) = 0; /*0x724b66*/
      *((unsigned int *)this + 9) = 0; /*0x724b69*/
      *((unsigned int *)this + 1) = 0; /*0x724b6c*/
    }
  }
  return *((unsigned int *)this + 1) != 0; /*0x724b59*/

}
  unsigned int *v2; // eax
  wchar_t *v3; // ecx
  wchar_t *String; // eax
  const wchar_t *v5; // edi
  int v6; // edx

  v2 = (unsigned int *)*((unsigned int *)this + 1); /*0x724ad7*/
  if ( v2 ) /*0x724adc*/
  {
    v3 = (wchar_t *)v2[5]; /*0x724ae2*/
    if ( v3 ) /*0x724ae7*/
      String = GetStringCSF(v3, 0, MEMORY[0x8449CC], 563); /*0x724b01*/
    else
      String = (wchar_t *)(*(int (**)(wchar_t *, unsigned int))(*(unsigned int *)this + 20))(this, *v2); /*0x724af0*/
    v5 = String; /*0x724b06*/
    if ( String && wcslen(String) ) /*0x724b0d*/
    {
      wcsncpy((unsigned int *)this + 20, v5, 0x100u); /*0x724b23*/
      v6 = *((unsigned int *)this + 4); /*0x724b28*/
      *((unsigned int *)this + 7) = *((unsigned int *)this + 5); /*0x724b36*/
      *((unsigned int *)this + 6) = v6; /*0x724b39*/
      if ( !(*(unsigned __int8 (**)(wchar_t *, unsigned int *))(*(unsigned int *)this + 4))(this, (unsigned int *)this + 6) ) /*0x724b3e*/
      {
        *((unsigned int *)this + 6) = 0; /*0x724b47*/
        *((unsigned int *)this + 7) = 0; /*0x724b49*/
        *((unsigned int *)this + 8) = 0; /*0x724b4c*/
        *((unsigned int *)this + 9) = 0; /*0x724b4f*/
        *((unsigned int *)this + 1) = 0; /*0x724b54*/
        return 0; /*0x724b5f*/
      }
    }
    else
    {
      *((unsigned int *)this + 6) = 0; /*0x724b60*/
      *((unsigned int *)this + 7) = 0; /*0x724b63*/
      *((unsigned int *)this + 8) = 0; /*0x724b66*/
      *((unsigned int *)this + 9) = 0; /*0x724b69*/
      *((unsigned int *)this + 1) = 0; /*0x724b6c*/
    }
  }
  return *((unsigned int *)this + 1) != 0; /*0x724b59*/

}
double ToolTipClass::updateString(...) { return 0; }

  int v2; // eax
  int i; // edi
  int v4; // edx
  void *v5; // eax

  v2 = *((unsigned int *)this + 2); /*0x7240ba*/
  *(unsigned int *)this = &ToolTipManager::`vftable'; /*0x7240bd*/
  ((void (*)(int, int))KillTimer)(v2, 1414809936); /*0x7240c4*/
  if ( *((unsigned int *)this + 1) ) /*0x7240ca*/
    (*(void (**)(char *, char *))(*(unsigned int *)this + 8))(this, (unsigned char *)this + 24); /*0x7240db*/
  __3_YAXPAX_Z(*((void **)this + 147)); /*0x7240e5*/
  *((unsigned int *)this + 147) = 0; /*0x7240ea*/
  *((unsigned int *)this + 148) = 0; /*0x7240f0*/
  *((unsigned int *)this + 149) = 0; /*0x7240f6*/
  *((unsigned char *)this + 600) = 0; /*0x7240fc*/
  *((unsigned int *)this + 151) = 0; /*0x724102*/
  for ( i = 0; i < *((unsigned int *)this + 145); ++i ) /*0x724115*/
  {
    v4 = *((unsigned int *)this + 142); /*0x724117*/
    if ( *(unsigned int *)(v4 + 4 * i) ) /*0x72411d*/
      __3_YAXPAX_Z(*(void **)(v4 + 4 * i)); /*0x724125*/
  }
  (*(void (**)(char *))(*((unsigned int *)this + 141) + 12))((unsigned char *)this + 564); /*0x724146*/
  __3_YAXPAX_Z(*((void **)this + 147)); /*0x724150*/
  *((unsigned int *)this + 147) = 0; /*0x724155*/
  *((unsigned int *)this + 148) = 0; /*0x72415b*/
  *((unsigned int *)this + 149) = 0; /*0x724161*/
  *((unsigned char *)this + 600) = 0; /*0x724167*/
  *((unsigned int *)this + 151) = 0; /*0x72416d*/
  v5 = (void *)*((unsigned int *)this + 142); /*0x724173*/
  *((unsigned int *)this + 141) = &VectorClass<ToolTip const *>::`vftable'; /*0x72417b*/
  if ( v5 && *((unsigned char *)this + 577) ) /*0x724183*/
  {
    __3_YAXPAX_Z(v5); /*0x724189*/
    *((unsigned int *)this + 142) = 0; /*0x724191*/
  }
  *((unsigned char *)this + 577) = 0; /*0x724194*/
  *((unsigned int *)this + 143) = 0; /*0x724197*/

}
double Tooltip::Enable(...) { return 0; }

  char result; // al
  const char *v4; // eax

  result = a2; /*0x7241a0*/
  if ( *((unsigned char *)this + 12) != a2 ) /*0x7241aa*/
  {
    *((unsigned char *)this + 12) = a2; /*0x7241ae*/
    if ( !a2 ) /*0x7241b1*/
    {
      KillTimer(*((HWND *)this + 2), 0x54544950u); /*0x7241bc*/
      if ( *((unsigned int *)this + 1) ) /*0x7241c2*/
        (*(void (**)(void *, int))(*(unsigned int *)this + 8))(this, (int)this + 24); /*0x7241d1*/
    }
    v4 = (const char *)&MEMORY[0x8394E8]; /*0x7241d9*/
    if ( *((unsigned char *)this + 12) != 1 ) /*0x7241de*/
      v4 = (const char *)&MEMORY[0x8394E4]; /*0x7241e0*/
    return Debug::Log(MEMORY[0x8449B8], v4); /*0x7241eb*/
  }
  return result; /*0x7241f3*/

}
double Tree::Destructor(...) { return 0; }

  if ( this ) /*0x5b4085*/
  {
    if ( *this ) /*0x5b4087*/
      Tree::Destructor(); /*0x5b408d*/
    if ( *((unsigned int *)this + 1) ) /*0x5b4092*/
      Tree::Destructor(); /*0x5b4099*/
    __3_YAXPAX_Z(this); /*0x5b409f*/
  }

}
double TypeClass::FindByName(...) { return 0; }

  int v2; // esi

  if ( !this ) /*0x41caa6*/
    return -1; /*0x41caa6*/
  v2 = 0; /*0x41caad*/
  if ( *(int *)&HouseClass_Player.__pad_5568[8052] <= 0 ) /*0x41cab1*/
    return -1; /*0x41cad6*/
  while ( _strcmpi((const void *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8040] + 4 * v2) + 36), this) ) /*0x41caca*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[8052] ) /*0x41cad4*/
      return -1; /*0x41cad4*/
  }
  return v2; /*0x41cad6*/

}
double VQAClass::AdvanceFrame(...) { return 0; }

  unsigned char *v2; // ebp
  int v4; // eax
  int v5; // edi
  unsigned int v6; // eax
  void (*v7)(void); // eax
  int v9; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x759c34*/
  *a2 = 0; /*0x759c3b*/
  if ( !*(this + 1361) ) /*0x759c40*/
  {
    Render_Render_7C3690(*((unsigned int *)this + 128), *((unsigned int *)this + 322)); /*0x759c56*/
    if ( *((unsigned int *)this + 324) != -1 ) /*0x759c62*/
    {
      Render_Render_7C3710(*((unsigned __int8 **)this + 128), &v10, &v9, &a2); /*0x759c78*/
      if ( a2 == (unsigned char *)1 || a2 == (unsigned char *)4 ) /*0x759c89*/
      {
        Voxel::BuildIndexTable(*((void **)this + 324)); /*0x759c91*/
        if ( a2 == (unsigned char *)1 ) /*0x759c9b*/
          Render_Render_7C3230(*((unsigned int *)this + 128), (int)sub_7C6B70, (int)CopySHPFrameToSurface); /*0x759cad*/
      }
    }
    Debug::Log(); /*0x759cb7*/
    *(this + 1361) = 1; /*0x759cbf*/
  }
  if ( *(this + 1360) == 1 && (MEMORY[0xA8D5F8] & 2) == 0 && !MEMORY[0xA8EDA0] ) /*0x759cdf*/
  {
    if ( MEMORY[0xA8ED80] != 1 ) /*0x759ce8*/
      goto LABEL_28; /*0x759ce8*/
    *(this + 1360) = 0; /*0x759cf3*/
    Debug::Log(); /*0x759cfa*/
  }
  if ( MEMORY[0xA8ED80] == 1 && !*(this + 1360) ) /*0x759d0f*/
  {
    v4 = ProcessAudioStreamPipeline(*((unsigned int *)this + 128), 1, 0); /*0x759d2a*/
    v5 = v4; /*0x759d2f*/
    if ( v4 < 0 ) /*0x759d33*/
    {
      if ( v4 >= -11 && (v4 <= -10 || v4 == -1) ) /*0x759d94*/
      {
        *v2 = 0; /*0x759d97*/
        return 0; /*0x759d9c*/
      }
      else
      {
        *v2 = 1; /*0x759da6*/
        return 0; /*0x759dab*/
      }
    }
    else
    {
      if ( *(this + 1320) ) /*0x759d35*/
      {
        Surface::CreateSurfacePalette(this + 516); /*0x759d45*/
        *(this + 1320) = 0; /*0x759d4a*/
      }
      if ( *(unsigned int *)this ) /*0x759d51*/
      {
        v6 = MovieClass::ComputeTime(*((unsigned int *)this + 128)); /*0x759d5c*/
        BinkMovie::CheckKeyframeTransition(*(unsigned int **)this, v6); /*0x759d64*/
      }
      v7 = (void (*)(void))*((unsigned int *)this + 338); /*0x759d69*/
      if ( v7 ) /*0x759d71*/
        v7(); /*0x759d73*/
      *((unsigned int *)this + 321) = v5 + 1; /*0x759d78*/
      return 1; /*0x759d76*/
    }
  }
LABEL_28:
  if ( !byte_B45BA4 ) /*0x759dbb*/
  {
    if ( *(this + 1300) && !*(this + 1360) ) /*0x759dc7*/
      ProcessAudioStreamPipeline(*((unsigned int *)this + 128), 2, 0); /*0x759dde*/
    *(this + 1360) = 1; /*0x759de3*/
    byte_B45BA4 = 1; /*0x759def*/
    Debug::Log(); /*0x759df6*/
  }
  return 0; /*0x759d7e*/

}
double Vector2::NormalizeNonZero(...) { return 0; }

  if ( *this == 0.0 && *((unsigned int *)this + 1) == 0.0 ) /*0x41c47d*/
  {
    *(unsigned int *)this = 0; /*0x41c47f*/
    *((unsigned int *)this + 1) = 1079574528; /*0x41c485*/
  }

}
double Vector3::AddAssign(...) { return 0; }

  *this = *(float *)&aP1->field_0 + *this; /*0x43a10a*/
  *(this + 1) = *(float *)&aP1->field_4 + *(this + 1); /*0x43a112*/
  *(this + 2) = *(float *)&aP1->field_8 + *(this + 2); /*0x43a11b*/
  return this; /*0x43a11e*/

}
double Vector3::Magnitude(...) { return 0; }

  Math::Sqrt(*this * *this + *((unsigned int *)this + 1) * *((unsigned int *)this + 1) + *((unsigned int *)this + 2) * *((unsigned int *)this + 2)); /*0x41c3e4*/

}
double Vector3::Subtract(...) { return 0; }

  int v3; // edx
  int v4; // esi
  int v6; // ecx

  v3 = *this - aP2->field_0; /*0x43716d*/
  v4 = *(this + 1) - aP2->field_4; /*0x437175*/
  v6 = *(this + 2) - aP2->field_8; /*0x43717e*/
  aP1->field_0 = v3; /*0x437182*/
  aP1->field_4 = v4; /*0x437184*/
  aP1->field_8 = v6; /*0x437187*/
  return &aP1->field_0; /*0x43718a*/

}
double Vector4::EraseAt_Copy(...) { return 0; }

  int v2; // edx
  CCINIClass *v3; // eax
  int v4; // edx

  v2 = *(this + 4); /*0x63ef70*/
  v3 = aP1; /*0x63ef73*/
  if ( (int)aP1 >= v2 ) /*0x63ef79*/
    return 0; /*0x63ef9c*/
  v4 = v2 - 1; /*0x63ef7b*/
  *(this + 4) = v4; /*0x63ef7e*/
  if ( (int)aP1 < v4 ) /*0x63ef81*/
  {
    do /*0x63ef94*/
    {
      v3 = (CCINIClass *)((char *)v3 + 1); /*0x63ef87*/
      *(unsigned int *)(*(this + 1) + 4 * (unsigned int)v3 - 4) = *(unsigned int *)(*(this + 1) + 4 * (unsigned int)v3); /*0x63ef8b*/
    }
    while ( (int)v3 < *(this + 4) ); /*0x63ef94*/
  }
  return 1; /*0x63ef99*/

}
double VectorClassUInt::Constructor(...) { return 0; }

  *(this + 1) = 0; /*0x42dc5b*/
  *(this + 2) = a2; /*0x42dc5e*/
  *((unsigned char *)this + 12) = 1; /*0x42dc61*/
  *((unsigned char *)this + 13) = 0; /*0x42dc65*/
  *this = &vt_VectorClass_unsigned_int; /*0x42dc68*/
  if ( a2 ) /*0x42dc6e*/
  {
    if ( a3 ) /*0x42dc76*/
    {
      *(this + 1) = a3; /*0x42dc78*/
      return this; /*0x42dc7e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x42dc8d*/
    *((unsigned char *)this + 13) = 1; /*0x42dc90*/
  }
  return this; /*0x42dc7d*/

}
double Viewport::Clear(...) { return 0; }

  int v0; // esi
  int v1; // edx
  char *v2; // esi
  int v3; // ebx
  char *v4; // edi
  unsigned int v5; // ebx
  char *v6; // esi
  int v7; // edx
  char *v8; // edi

  MEMORY[0xB2D820] = 0; /*0x753e10*/
  MEMORY[0xB2FB70] = 0; /*0x753e16*/
  if ( MEMORY[0x8467E0] ) /*0x753e1c*/
  {
    MEMORY[0x8467E0] = 0; /*0x753e2a*/
    memset(MEMORY[0xB2FF78], 0, 0x10000u); /*0x753e30*/
    memset(MEMORY[0xB1D5E0], 0, 0x10000u); /*0x753e3c*/
  }
  else
  {
    v0 = MEMORY[0xB2FB60]; /*0x753e43*/
    v1 = MEMORY[0xB2FB64]; /*0x753e49*/
    if ( MEMORY[0xB2FB60] < 0 /*0x753e73*/
      || MEMORY[0xB2FB64] < 0
      || MEMORY[0xB2FB60] + MEMORY[0xB2FB68] > 255
      || MEMORY[0xB2FB6C] + MEMORY[0xB2FB64] > 255 )
    {
      memset(MEMORY[0xB2FF78], 0, 0x10000u); /*0x753ec3*/
    }
    else if ( MEMORY[0xB2FB64] <= MEMORY[0xB2FB6C] + MEMORY[0xB2FB64] ) /*0x753e77*/
    {
      v2 = &MEMORY[0xB2FF78][256 * MEMORY[0xB2FB64] + MEMORY[0xB2FB60]]; /*0x753e81*/
      v3 = MEMORY[0xB2FB6C] + 1; /*0x753e88*/
      do /*0x753eab*/
      {
        v4 = v2; /*0x753e8f*/
        v2 += 256; /*0x753e91*/
        memset(v4, 0, MEMORY[0xB2FB68] + 1); /*0x753ea1*/
        --v3; /*0x753ea8*/
      }
      while ( v3 ); /*0x753eab*/
      v0 = MEMORY[0xB2FB60]; /*0x753ead*/
    }
    if ( dword_B43180 && v1 <= MEMORY[0xB2FB6C] + v1 ) /*0x753ed8*/
    {
      v5 = MEMORY[0xB2FB68] + 1; /*0x753ee2*/
      v6 = &MEMORY[0xB1D5E0][256 * v1 + v0]; /*0x753eeb*/
      v7 = MEMORY[0xB2FB6C] + 1; /*0x753ef2*/
      do /*0x753f0f*/
      {
        memset(v6, 0, 4 * (v5 >> 2)); /*0x753eff*/
        v8 = &v6[4 * (v5 >> 2)]; /*0x753eff*/
        v6 += 256; /*0x753f03*/
        --v7; /*0x753f0c*/
        memset(v8, 0, v5 & 3); /*0x753f0d*/
      }
      while ( v7 ); /*0x753f0f*/
    }
  }
  MEMORY[0xB2D5E0] = 1176256512; /*0x753f35*/
  MEMORY[0xB2D5E4] = 1176256512; /*0x753f3b*/
  MEMORY[0xB2D5E8] = 1176256512; /*0x753f40*/
  MEMORY[0xB2D948] = -971227136; /*0x753f6d*/
  MEMORY[0xB2D94C] = -971227136; /*0x753f73*/
  MEMORY[0xB2D950] = -971227136; /*0x753f78*/
  return -971227136; /*0x753f6a*/

}
double VoxelAnimTypeVector::Constructor(...) { return 0; }

  *(this + 1) = 0; /*0x67c31b*/
  *(this + 2) = aP1; /*0x67c31e*/
  *((unsigned char *)this + 12) = 1; /*0x67c321*/
  *((unsigned char *)this + 13) = 0; /*0x67c325*/
  *this = &vt_VectorClass_VoxelAnimTypeClass_const; /*0x67c328*/
  if ( aP1 ) /*0x67c32e*/
  {
    if ( aP2 ) /*0x67c336*/
    {
      *(this + 1) = aP2; /*0x67c338*/
      return this; /*0x67c33e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * (unsigned int)aP1); /*0x67c34d*/
    *((unsigned char *)this + 13) = 1; /*0x67c350*/
  }
  return this; /*0x67c33d*/

}
double VoxelSection::GetInfo(...) { return 0; }

  return *(this + 5) + 164 * ((unsigned int)aP2 + *(unsigned int *)(*(this + 4) + 12 * (unsigned int)aP1)); /*0x7564cf*/

}
double WDTClass::GetCellType(...) { return 0; }

  int v2; // eax
  int v3; // eax
  int v4; // eax

  if ( *(this + 3) ) /*0x76f600*/
  {
    v2 = *(this + 4); /*0x76f607*/
    if ( v2 ) /*0x76f60c*/
    {
      if ( a2 < *(unsigned int *)(*(this + 3) + 32) ) /*0x76f61c*/
      {
        v3 = *(unsigned __int8 *)(v2 + a2); /*0x76f623*/
        if ( !v3 ) /*0x76f628*/
          return 1; /*0x76f645*/
        v4 = v3 - 1; /*0x76f62a*/
        if ( !v4 ) /*0x76f62b*/
          return 2; /*0x76f63d*/
        if ( v4 == 1 ) /*0x76f62e*/
          return 3; /*0x76f635*/
      }
    }
  }
  return 0; /*0x76f635*/

}
double WDTObject::GetSize(...) { return 0; }

  int v1; // eax

  v1 = *((unsigned int *)this + 3); /*0x76bfa0*/
  if ( v1 ) /*0x76bfa5*/
    return *(unsigned int *)(v1 + 24); /*0x76bfa7*/
  else
    return 0; /*0x76bfab*/

}
double WinAPI::Wrapper(...) { return 0; }
// 0x42dd60
double WordVector::Constructor(...) { return 0; }

  *(this + 1) = 0; /*0x42dd6b*/
  *(this + 2) = a2; /*0x42dd6e*/
  *((unsigned char *)this + 12) = 1; /*0x42dd71*/
  *((unsigned char *)this + 13) = 0; /*0x42dd75*/
  *this = &vt_VectorClass_unsigned_short_7E3824; /*0x42dd78*/
  if ( a2 ) /*0x42dd7e*/
  {
    if ( a3 ) /*0x42dd86*/
    {
      *(this + 1) = a3; /*0x42dd88*/
      return this; /*0x42dd8e*/
    }
    *(this + 1) = __2_YAPAXI_Z(2 * a2); /*0x42dd9c*/
    *((unsigned char *)this + 13) = 1; /*0x42dd9f*/
  }
  return this; /*0x42dd8d*/

}
  *(this + 1) = 0; /*0x42dd6b*/
  *(this + 2) = a2; /*0x42dd6e*/
  *((unsigned char *)this + 12) = 1; /*0x42dd71*/
  *((unsigned char *)this + 13) = 0; /*0x42dd75*/
  *this = &vt_VectorClass_unsigned_short_7E3824; /*0x42dd78*/
  if ( a2 ) /*0x42dd7e*/
  {
    if ( a3 ) /*0x42dd86*/
    {
      *(this + 1) = a3; /*0x42dd88*/
      return this; /*0x42dd8e*/
    }
    *(this + 1) = __2_YAPAXI_Z(2 * a2); /*0x42dd9c*/
    *((unsigned char *)this + 13) = 1; /*0x42dd9f*/
  }
  return this; /*0x42dd8d*/

}

} // namespace gamemd
