// GENERATED template-collision flat carrier (mechanical).
#pragma once

namespace gamemd {

struct DynamicVectorClass_flat {
    unsigned int q010;
    void* vfptr;
    void* q000;  // 0x0
    void* Items;  // 0x4
    int Capacity;  // 0x8
    unsigned int m_8;  // 0x8
    bool IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    int Count;  // 0x10
    unsigned char m_1[4];  // 0x1
    int CapacityIncrement;  // 0x14
    bool q018;  // 0x18
    unsigned char __pad_01C;  // 0x1C
    int q020;  // 0x20
    bool q024;  // 0x24
    unsigned char __pad_028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    int q034;  // 0x34
    unsigned char __pad_038;  // 0x38
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char __pad_04C;  // 0x4C
    int q050;  // 0x50
    bool q054;  // 0x54
    unsigned char __pad_058;  // 0x58
    unsigned char q068;  // 0x68
    unsigned char __pad_06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char __pad_078;  // 0x78
    int q080;  // 0x80
unsigned int * AnimTypeConstructor(DynamicVector * aP1, DynamicVector * aP2);
unsigned int * BuildingTypeConstructor(int a2, int a3);
unsigned int * Construct(int a2, int a3, void *a3_2, void *a4, void *a5, void *a6);
unsigned int * Copy(DynamicVector * aP1, void *a2);
int Destroy(void *a1);
    void* VectorClass;  // 0x0 (no offset truth)
int Destroy_Alt();
    void* vtable1;  // 0x0 (no offset truth)
    int BuildIndexTable();
    AbstractClass * RenderFrame();
    int Projection_Setup();
    void * * SortDepth(void * aP1, int a3, void *a3_2);
    int ProcessColor(unsigned int *a2, float *a3);
    void* DrawHelper(IUnknown * aP1);
    int BlendShadowColor(int a2, void * aP2, int arg8, unsigned short * a4);
    int loadSectionData();
    void * * renderSection(void * aP1);
    void ShadowCalc(void * aP1, int * a2);
    int BlendColor(int a2, void * aP2, int arg8, unsigned short * a4);
    void * * FaceDraw(unsigned int * a1, void * aP2);
    void* FaceBlit();
    int SectionProject(int * a2, int a3);
    void * * LightRender(AbstractClass ** a2, int a3);
    DynamicVectorClass_flat * * TransformMatrix();
    int freeSectionMemory(unsigned int * a2);
    int FacePixelBuffer(int * a1);
    int FacePixelBufferEx(int a1);
    int FacePixelBuffer3(int * a1);
    int SetProjectionAngle(float a1);
    int InitDistanceTable();
};

} // namespace gamvoid Destroy();