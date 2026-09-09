// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Voxel {
    void* vfptr;  // minimal E2 declaration
    char BuildIndexTable();  // 0x748220
    float * RenderFrame();  // 0x754510
    int SetProjectionAngle(float a1);  // 0x754C00
    int Projection_Setup();  // 0x754CB0
    int SortDepth(ObjectClass * aP1, int a3);  // 0x755DB0
    int ProcessColor(unsigned int * a2, float * a3);  // 0x756590
    char DrawHelper(IUnknown * aP1);  // 0x75C240
    int BlendShadowColor(int a2, WaveClass * aP2, int arg8, unsigned short * a4);  // 0x75EDF0
    int InitDistanceTable();  // 0x75F020
    int loadSectionData();  // 0x75F140
    char renderSection(ObjectClass * aP1);  // 0x75F4C0
    void ShadowCalc(WaveClass * aP1, int * a2);  // 0x75FA90
    int BlendColor(int a2, WaveClass * aP2, int arg8, unsigned short * a4);  // 0x760190
    void FaceDraw(unsigned int * a1, WaveClass * aP2);  // 0x7609E0
    void FaceBlit();  // 0x7610F0
    int SectionProject(int * a2, int a3);  // 0x761640
    int LightRender(AbstractClass ** a2, int a3);  // 0x762070
    int TransformMatrix();  // 0x762AF0
    char freeSectionMemory(unsigned int * a2);  // 0x763330
    int FacePixelBuffer(int * a1);  // 0x7DF9C0
    int FacePixelBufferEx(int a1);  // 0x7DFAE0
    int FacePixelBuffer3(int * a1);  // 0x7DFC00
};
} // namespace gamemd
