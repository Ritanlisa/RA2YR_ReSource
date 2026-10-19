#!/usr/bin/env python3
"""X78 seed fix: move the ControlNode vector methods from CaptureManagerClass
to their true carrier classes (live-IDA til `this` types) and rebind the member
accesses to the canonical vector layout (Items/Capacity/IsInitialized/
IsAllocated/Count), mirroring src/core/vector.hpp's proven template model.

Evidence:
  0x7E4BC4 ?$VectorClass@PAUControlNode@@      slots 0x473000..0x472AD0
  0x7E4BA4 ?$DynamicVectorClass@PAUControlNode@@ slots 0x473050..0x472AD0
  live til this-types: _VectorClass_PAUControlNode / _DynamicVectorClass_PAUControlNode
  0x472750: lea esi,[ebp+24h]; call Constructor_473140  (receiver = vector member)
  0x472B96/0x472BEB/0x472C12: byte [esi+0Ch]/[esi+0Dh]  (IsInitialized/IsAllocated)
Usage: python tools/csp_export/x78_seed_fix.py [--apply]
"""
import io, os, sys
ROOT = r"D:\RA2YR_ReSource"
CPP = os.path.join(ROOT, "src", "e4", "CaptureManagerClass_e4.cpp")
HPP = os.path.join(ROOT, "src", "e4", "classes", "CaptureManagerClass_e4.hpp")
VH = os.path.join(ROOT, "src", "e4", "classes", "_VectorClass_PAUControlNode_e4.hpp")
DH = os.path.join(ROOT, "src", "e4", "classes", "_DynamicVectorClass_PAUControlNode_e4.hpp")

EDITS = []  # (path, old, new, label)

def E(path, old, new, label):
    EDITS.append((path, old, new, label))

# ---------------- carrier headers ----------------
VH_NEW = """// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

// X78: ControlNode vector carrier. Members = canonical VectorClass<T> layout
// (src/core/vector.hpp: Items/Capacity/IsInitialized/IsAllocated) with the
// row-evidenced +0x10/+0x14 DynamicVector fields. Methods = vtable authority
// 0x7E4BC4 slots 0..6 (live til this-type _VectorClass_PAUControlNode).
struct _VectorClass_PAUControlNode {
    void* ptr_0;  // 0x0
    void* Items;  // 0x4
    int Capacity;  // 0x8
    bool IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned short tail_E;  // 0xE
    char AddRef(int a2);  // 0x472B40 (vtable slot 1 = operator==)
    char SetCapacity(int a2, unsigned int * a3);  // 0x472B80 (vtable slot 2)
    void Destroy();  // 0x472C30 (vtable slot 3 = Clear)
    int IndexOf(unsigned int * a2);  // 0x472C60 (vtable slot 4 = FindItemIndex)
    unsigned int PointerToIndex(int a2);  // 0x472CA0 (vtable slot 5 = GetItemIndex)
    unsigned int * Constructor_VectorClass_ControlNode___(char a2);  // 0x473000 (vtable slot 0 = dtor)
    unsigned int * Constructor_473140(int a2, int a3);  // 0x473140 (ctor; receiver = +0x24 vector member)
    int CaptureManagerClass__vt_06_(int a2);  // 0x472AD0 (vtable slot 6 = GetItem)
};

} // namespace gamemd
"""
DH_NEW = """// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

// X78: ControlNode dynamic-vector carrier (see _VectorClass_PAUControlNode).
// Methods = vtable authority 0x7E4BA4 slots 0..6 (live til this-type
// _DynamicVectorClass_PAUControlNode).
struct _DynamicVectorClass_PAUControlNode {
    void* ptr_0;  // 0x0
    void* Items;  // 0x4
    int Capacity;  // 0x8
    bool IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned short tail_E;  // 0xE
    int Count;  // 0x10
    int CapacityIncrement;  // 0x14
    unsigned int LoadTypeData(int a2);  // 0x472AB0 (vtable slot 5 = GetItemIndex)
    char Release(int a2, unsigned int * a3);  // 0x472CC0 (vtable slot 2 = SetCapacity)
    int Capture(unsigned int * a2);  // 0x472D70 (vtable slot 4 = FindItemIndex)
    DynamicVector * QueryInterface(char a2);  // 0x473050 (vtable slot 0 = dtor)
    void CaptureManagerClass__vt_03_();  // 0x472A80 (vtable slot 3 = Clear)
};

} // namespace gamemd
"""

def write_new(path, text, label):
    EDITS.append((path, None, text, label))

write_new(VH, VH_NEW, "rewrite _VectorClass_PAUControlNode carrier")
write_new(DH, DH_NEW, "rewrite _DynamicVectorClass_PAUControlNode carrier")

# ---------------- CaptureManagerClass_e4.cpp: carrier includes ----------------
E(CPP, '#include "e4/classes/CaptureManagerClass_e4.hpp"',
     '#include "e4/classes/CaptureManagerClass_e4.hpp"\n'
     '#include "e4/classes/_DynamicVectorClass_PAUControlNode_e4.hpp"  // X78 seed fix\n'
     '#include "e4/classes/_VectorClass_PAUControlNode_e4.hpp"  // X78 seed fix',
     "include the ControlNode vector carriers")

# ---------------- CaptureManagerClass_e4.hpp: drop the moved declarations ----------------
for line in [
    "    DynamicVector * QueryInterface(char a2);\n",
    "    VectorClass_flat * Constructor_VectorClass_ControlNode___(char a2);\n",
    "    char AddRef(int a2);\n",
    "    char Release(int a2, unsigned int * a3);\n",
    "    char SetCapacity(int a2, unsigned int * a3);\n",
    "    int Capture(unsigned int * a2);\n",
    "    int IndexOf(unsigned int * a2);\n",
    "    unsigned int * Constructor_473140(int a2, int a3);\n",
    "    unsigned int LoadTypeData(int a2);\n",
    "    unsigned int PointerToIndex(int a2);\n",
    "    int Destroy(void *a1);\n",
    "    VectorClass_flat * Constructor_VectorClass_ControlNode___(unsigned int * Block, char a2);\n",
    "    DynamicVector * QueryInterface(unsigned int * Block, char a2);\n",
]:
    E(HPP, line, "", "drop moved decl: " + line.strip())

# ---------------- CaptureManagerClass_e4.cpp: qualifiers + member rebinds ----------------
C = CPP
# 0x472AB0 LoadTypeData -> _DynamicVectorClass_PAUControlNode
E(C, "unsigned int CaptureManagerClass::LoadTypeData(int a2)",
     "unsigned int _DynamicVectorClass_PAUControlNode::LoadTypeData(int a2)", "requalify LoadTypeData")
E(C, "  if ( ((this->vtable4) & 0xFF) ) /*0x472ab0*/",
     "  if ( this->IsInitialized ) /*0x472ab0*/", "LoadTypeData: flags byte0 -> IsInitialized")
E(C, "    return (unsigned int)(a2 - *&this->ptr_4) >> 2; /*0x472ac5*/",
     "    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x472ac5*/", "LoadTypeData: Items")

# 0x472B40 AddRef -> _VectorClass_PAUControlNode (slot 1 = operator==)
E(C, "char CaptureManagerClass::AddRef(int a2)",
     "char _VectorClass_PAUControlNode::AddRef(int a2)", "requalify AddRef")
E(C, "  m_8 = (int)(this->ptr_8); /*0x472b42*/",
     "  m_8 = this->Capacity; /*0x472b42*/", "AddRef: Capacity")
E(C, "    v4 = (unsigned int *)(*&this->ptr_4); /*0x472b55*/",
     "    v4 = (unsigned int *)(*&this->Items); /*0x472b55*/", "AddRef: Items")

# 0x472B80 SetCapacity -> _VectorClass_PAUControlNode
E(C, "char CaptureManagerClass::SetCapacity(int a2, unsigned int * a3)",
     "char _VectorClass_PAUControlNode::SetCapacity(int a2, unsigned int * a3)", "requalify SetCapacity")
E(C, "    (this->vtable4) = ((this->vtable4) & ~0xFF) | ((0) & 0xFF); /*0x472b96*/",
     "    this->IsInitialized = 0; /*0x472b96*/", "SetCapacity: IsInitialized=0")
E(C, "    (this->vtable4) = ((this->vtable4) & ~0xFF) | ((1) & 0xFF); /*0x472bb6*/",
     "    this->IsInitialized = 1; /*0x472bb6*/", "SetCapacity: IsInitialized=1")
E(C, "      if ( *&this->ptr_4 ) /*0x472bc5*/",
     "      if ( *&this->Items ) /*0x472bc5*/", "SetCapacity: Items guard")
E(C, "        int m_8 = this->ptr_8; // ecx /*0x472bcc*/",
     "        int m_8 = this->Capacity; // ecx /*0x472bcc*/", "SetCapacity: Capacity read")
E(C, "        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->ptr_4 + 4 * i - 4) ) /*0x472bd9*/",
     "        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x472bd9*/",
     "SetCapacity: Items copy")
E(C, "        if ( (((this->vtable4) >> 8) & 0xFF) ) /*0x472beb*/",
     "        if ( this->IsAllocated ) /*0x472beb*/", "SetCapacity: flags byte1 -> IsAllocated (SEED)")
E(C, "          __3_YAXPAX_Z(*&this->ptr_4); /*0x472bf6*/",
     "          __3_YAXPAX_Z(*&this->Items); /*0x472bf6*/", "SetCapacity: free Items")
E(C, "          *&this->ptr_4 = 0; /*0x472bfe*/",
     "          *&this->Items = 0; /*0x472bfe*/", "SetCapacity: Items=0")
E(C, "      *&this->ptr_4 = v4; /*0x472c07*/",
     "      *&this->Items = v4; /*0x472c07*/", "SetCapacity: Items=v4")
E(C, "      this->ptr_8 = a2; /*0x472c0f*/",
     "      this->Capacity = a2; /*0x472c0f*/", "SetCapacity: Capacity=a2 (C2440 fix)")
E(C, "      (this->vtable4) = ((this->vtable4) & ~(0xFF << 8)) | (((a3 == 0) & 0xFF) << 8); /*0x472c12*/",
     "      this->IsAllocated = a3 == 0; /*0x472c12*/", "SetCapacity: IsAllocated=a3==0")
E(C, "    (*(void (**)(_VectorClass_PAUControlNode *))(*(unsigned int *)this->ptr_0 + 12))(this); /*0x472c22*/",
     "    (*(void (**)(_VectorClass_PAUControlNode *))(*(unsigned int *)this->ptr_0 + 12))(this); /*0x472c22*/",
     "SetCapacity: self-dispatch (ptr_0 kept)")

# 0x472C30 Destroy -> _VectorClass_PAUControlNode slot 3 (Clear)
E(C, """void CaptureManagerClass::Destroy(void *a1)
{
  if ( *(unsigned int *)&a1->m_1[3] && (((unsigned char *)&(a1->m_C))[1]) ) /*0x472c3d*/
  {
    operator delete((*(void **)&a1->ptr_4)); /*0x472c43*/
    *(unsigned int *)&a1->ptr_2 = 0; /*0x472c4b*/
  }
  (((unsigned char *)&(a1->ptr_C))[1]) = 0; /*0x472c4e*/
  *(unsigned int *)&a1->ptr_3 = 0; /*0x472c51*/
}""", """void _VectorClass_PAUControlNode::Destroy()
{
  if ( *&this->Items && this->IsAllocated ) /*0x472c3d*/
  {
    operator delete((*&this->Items)); /*0x472c43*/
    *&this->Items = 0; /*0x472c4b*/
  }
  this->IsAllocated = 0; /*0x472c4e*/
  this->Capacity = 0; /*0x472c51*/
}""", "Destroy -> Clear with vector members")

# 0x472C60 IndexOf -> _VectorClass_PAUControlNode
E(C, "int CaptureManagerClass::IndexOf(unsigned int * a2)",
     "int _VectorClass_PAUControlNode::IndexOf(unsigned int * a2)", "requalify IndexOf")
E(C, "  if ( !((this->vtable4) & 0xFF) ) /*0x472c60*/",
     "  if ( !this->IsInitialized ) /*0x472c60*/", "IndexOf: IsInitialized")
E(C, "  int m_8 = this->ptr_8; // edx /*0x472c6e*/",
     "  int m_8 = this->Capacity; // edx /*0x472c6e*/", "IndexOf: Capacity (C2440 fix)")
E(C, "  for ( i = *&this->ptr_4; *i != *a2; ++i ) /*0x472c7b*/",
     "  for ( i = *&this->Items; *i != *a2; ++i ) /*0x472c7b*/", "IndexOf: Items")

# 0x472CA0 PointerToIndex -> _VectorClass_PAUControlNode
E(C, "unsigned int CaptureManagerClass::PointerToIndex(int a2)",
     "unsigned int _VectorClass_PAUControlNode::PointerToIndex(int a2)", "requalify PointerToIndex")
E(C, "  if ( ((this->vtable4) & 0xFF) ) /*0x472ca0*/",
     "  if ( this->IsInitialized ) /*0x472ca0*/", "PointerToIndex: IsInitialized")
E(C, "    return (unsigned int)(a2 - *&this->vtable2) >> 2; /*0x472cb5*/",
     "    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x472cb5*/", "PointerToIndex: Items")

# 0x472CC0 Release -> _DynamicVectorClass_PAUControlNode (slot 2 = SetCapacity)
E(C, "char CaptureManagerClass::Release(int a2, unsigned int * a3)",
     "char _DynamicVectorClass_PAUControlNode::Release(int a2, unsigned int * a3)", "requalify Release")
E(C, "    (this->vtable4) = ((this->vtable4) & ~0xFF) | ((0) & 0xFF); /*0x472cd2*/",
     "    this->IsInitialized = 0; /*0x472cd2*/", "Release: IsInitialized=0")
E(C, "    (this->vtable4) = ((this->vtable4) & ~0xFF) | ((1) & 0xFF); /*0x472cf2*/",
     "    this->IsInitialized = 1; /*0x472cf2*/", "Release: IsInitialized=1")
E(C, "    if ( *&this->ptr_4 ) /*0x472cf8*/",
     "    if ( *&this->Items ) /*0x472cf8*/", "Release: Items guard")
E(C, "      int m_8 = this->ptr_8; // ecx /*0x472cff*/",
     "      int m_8 = this->Capacity; // ecx /*0x472cff*/", "Release: Capacity")
E(C, "      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->vtable2 + 4 * i - 4) ) /*0x472d0c*/",
     "      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x472d0c*/",
     "Release: Items copy")
E(C, "      if ( (((this->vtable4) >> 8) & 0xFF) ) /*0x472d1e*/",
     "      if ( this->IsAllocated ) /*0x472d1e*/", "Release: IsAllocated")
E(C, "        __3_YAXPAX_Z(*&this->ptr_4); /*0x472d29*/",
     "        __3_YAXPAX_Z(*&this->Items); /*0x472d29*/", "Release: free Items")
E(C, "        *&this->ptr_4 = 0; /*0x472d31*/",
     "        *&this->Items = 0; /*0x472d31*/", "Release: Items=0")
E(C, "    *&this->ptr_4 = v4; /*0x472d3a*/",
     "    *&this->Items = v4; /*0x472d3a*/", "Release: Items=v4")
E(C, "    this->ptr_8 = a2; /*0x472d42*/",
     "    this->Capacity = a2; /*0x472d42*/", "Release: Capacity=a2")
E(C, "    (this->vtable4) = ((this->vtable4) & ~(0xFF << 8)) | (((a3 == 0) & 0xFF) << 8); /*0x472d45*/",
     "    this->IsAllocated = a3 == 0; /*0x472d45*/", "Release: IsAllocated")
E(C, "    (*(void (**)(_DynamicVectorClass_PAUControlNode *))(*(unsigned int *)this->vtable1 + 12))(this); /*0x472d4e*/",
     "    (*(void (**)(_DynamicVectorClass_PAUControlNode *))(*(unsigned int *)this->ptr_0 + 12))(this); /*0x472d4e*/",
     "Release: vptr name")
E(C, "  int v7 = this->ptr_8; // eax /*0x472d51*/",
     "  int v7 = this->Capacity; // eax /*0x472d51*/", "Release: Capacity read")
E(C, "  if ( v7 < this->uniqueId ) /*0x472d59*/",
     "  if ( v7 < this->Count ) /*0x472d59*/", "Release: Count clamp (til m_10)")
E(C, "    this->uniqueId = v7; /*0x472d5b*/",
     "    this->Count = v7; /*0x472d5b*/", "Release: Count=v7")

# 0x472D70 Capture -> _DynamicVectorClass_PAUControlNode slot 4 (FindItemIndex)
E(C, "int CaptureManagerClass::Capture(unsigned int * a2)",
     "int _DynamicVectorClass_PAUControlNode::Capture(unsigned int * a2)", "requalify Capture")
E(C, "  m_10 = (int)(this->uniqueId); /*0x472d70*/",
     "  m_10 = this->Count; /*0x472d70*/", "Capture: Count (til m_10)")
E(C, "  for ( i = *&this->ptr_4; *i != *a2; ++i ) /*0x472d7e*/",
     "  for ( i = *&this->Items; *i != *a2; ++i ) /*0x472d7e*/", "Capture: Items")

# 0x473000 Constructor_VectorClass_ControlNode___ (dtor, slot 0) -> _VectorClass_PAUControlNode
E(C, """VectorClass_flat * CaptureManagerClass::Constructor_VectorClass_ControlNode___(unsigned int * Block, char a2)
{

  void *v3 = *&Block->u32_100; // eax /*0x473003*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x473006*/
  if ( v3 && (Block->u32_D) ) /*0x473010*/
  {
    operator delete((v3)); /*0x473018*/
    *&Block->u32_100 = 0; /*0x473020*/
  }
  (Block->u8_101) = 0; /*0x47302b*/
  *&Block->u32_100 = 0; /*0x473031*/
  if ( (a2 & 1) != 0 ) /*0x473038*/
    operator delete((Block)); /*0x47303b*/
  return Block->tail_0; /*0x473045*/
}""", """unsigned int * _VectorClass_PAUControlNode::Constructor_VectorClass_ControlNode___(char a2)
{

  void *v3 = *&this->Items; // eax /*0x473003*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x473006*/
  if ( v3 && this->IsAllocated ) /*0x473010*/
  {
    operator delete((v3)); /*0x473018*/
    *&this->Items = 0; /*0x473020*/
  }
  this->IsAllocated = 0; /*0x47302b*/
  this->Capacity = 0; /*0x473031*/
  if ( (a2 & 1) != 0 ) /*0x473038*/
    operator delete((this)); /*0x47303b*/
  return (unsigned int *)this; /*0x473045*/
}""", "0x473000 dtor -> carrier + vector members")

# 0x473050 QueryInterface -> _DynamicVectorClass_PAUControlNode (slot 0 = dtor)
E(C, """DynamicVector * CaptureManagerClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3 = *&Block->u32_100; // eax /*0x473053*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x473056*/
  if ( v3 && (Block->u32_D) ) /*0x473060*/
  {
    operator delete((v3)); /*0x473068*/
    *&Block->u32_100 = 0; /*0x473070*/
  }
  (Block->u8_101) = 0; /*0x47307b*/
  *&Block->u32_100 = 0; /*0x473081*/
  if ( (a2 & 1) != 0 ) /*0x473088*/
    operator delete((Block)); /*0x47308b*/
  return Block->tail_0; /*0x473095*/
}""", """DynamicVector * _DynamicVectorClass_PAUControlNode::QueryInterface(char a2)
{

  void *v3 = *&this->Items; // eax /*0x473053*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x473056*/
  if ( v3 && this->IsAllocated ) /*0x473060*/
  {
    operator delete((v3)); /*0x473068*/
    *&this->Items = 0; /*0x473070*/
  }
  this->IsAllocated = 0; /*0x47307b*/
  this->Count = 0; /*0x473081*/
  if ( (a2 & 1) != 0 ) /*0x473088*/
    operator delete((this)); /*0x47308b*/
  return (DynamicVector *)this; /*0x473095*/
}""", "0x473050 dtor -> carrier + vector members")

# 0x473140 ctor -> _VectorClass_PAUControlNode (receiver = &obj->controlNodes, 0x472750)
E(C, "unsigned int * CaptureManagerClass::Constructor_473140(int a2, int a3)",
     "unsigned int * _VectorClass_PAUControlNode::Constructor_473140(int a2, int a3)",
     "requalify 0x473140 ctor")
E(C, "  this->ptr_4 = 0; /*0x47314b*/", "  this->Items = 0; /*0x47314b*/", "ctor473140: Items=0")
E(C, "  this->ptr_8 = (void *)a2; /*0x47314e*/", "  this->Capacity = a2; /*0x47314e*/", "ctor473140: Capacity=a2")
E(C, "  (this->vtable4) = ((this->vtable4) & ~0xFF) | ((1) & 0xFF); /*0x473151*/",
     "  this->IsInitialized = 1; /*0x473151*/", "ctor473140: IsInitialized=1")
E(C, "  (this->IsAllocated) = ((this->IsAllocated) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x473155*/",
     "  this->IsAllocated = 0; /*0x473155*/", "ctor473140: IsAllocated=0")
E(C, "      this->ptr_4 = (void *)a3; /*0x473168*/", "      this->Items = (void *)a3; /*0x473168*/", "ctor473140: Items=a3")
E(C, "      return &this->AbstractClass; /*0x47316e*/", "      return &this->ptr_0; /*0x47316e*/", "ctor473140: return this")
E(C, "    this->ptr_4 = __2_YAPAXI_Z(4 * a2); /*0x47317d*/", "    this->Items = __2_YAPAXI_Z(4 * a2); /*0x47317d*/", "ctor473140: Items=malloc")
E(C, "    (this->IsAllocated) = ((this->IsAllocated) & ~(0xFF << 8)) | (((1) & 0xFF) << 8); /*0x473180*/",
     "    this->IsAllocated = 1; /*0x473180*/", "ctor473140: IsAllocated=1")
E(C, "  return &this->AbstractClass; /*0x47316d*/", "  return &this->ptr_0; /*0x47316d*/", "ctor473140: return this")


def main():
    apply = "--apply" in sys.argv
    files = {}
    for path in (CPP, HPP, VH, DH):
        files[path] = open(path, encoding="utf-8", newline="").read()
    failed = []
    for path, old, new, label in EDITS:
        if old is None:
            files[path] = new
            continue
        s = files[path]
        if old not in s:
            failed.append((path, label, old.splitlines()[0] if old else ""))
            continue
        files[path] = s.replace(old, new, 1)
    print("edits:", len(EDITS), "failed:", len(failed))
    for f in failed:
        print("  FAILED", os.path.basename(f[0]), "|", f[1], "|", f[2][:80])
    if failed:
        return 1
    if apply:
        for path, text in files.items():
            open(path, "w", encoding="utf-8", newline="").write(text)
        print("APPLIED")
    else:
        print("DRY (no write)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
