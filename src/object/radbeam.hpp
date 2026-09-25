#pragma once

#include <cstdint>
#include <windows.h>
#include <objidl.h>   // IStream, CLSID

#include "abstract.hpp"

namespace ra2 {
namespace game {

// e4 物化遗留类型名（RadBeam::Create/InitState 签名）；真身为样式小整数
// （调用方传字面量 1/2，Create 比较 !=1 定 20/10）——翻译轮定谳后可除名
class rc_ptr_base;

// sizeof 0xC8（Create 0x659110 new(0xC8) + InitState 0x6593F0 写图铁证）
// 非多态：InitState 不安装 vtable（首字段清零为数据写非虚表指针）——
// G21 L6 二进制裁决：撤除 e4 时代误建模的 `: public AbstractClass` 继承。
// draw* 族（0x6594xx-0x6595xx）真 owner = RadBeam：双调用方
// （CreateFireBeamEffect 0x6FD620 / SpreadRadiationAreaEffect 0x6FD800）
// 接收者均为本类对象，TechnoClass:: 前缀系 #108 同型误归属。
class RadBeam {
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::None; // TODO: derive ID lacks IDA evidence - confirm in translation pass

    HRESULT __stdcall GetClassID(CLSID* class_id);
    HRESULT __stdcall Load(IStream* stream);
    HRESULT __stdcall Save(IStream* stream, int clear_dirty);
    void pointerExpired(AbstractClass* ptr, bool removed);
    AbstractType __stdcall whatAmI() const;
    int objectSize() const;
    void calculateChecksum(void* checksum) const;
// --- G21 L6 draw* 族归属迁入（真身均为属性设置器，写字段即返回） ---
    char drawSelectionBox(uint8_t* a2);   // 0x659470  3 字节 RGB 拷入 +0x20
    int drawHealthBar(int a2);            // 0x659490  写 +0x0C
    int drawPipScale(int* a2);            // 0x6594A0  3 dwords 拷入 +0x24
    int drawSpawnPips(int* a2);           // 0x6594C0  3 dwords 拷入 +0x30
    int drawAmmoPips(int a2);             // 0x6594E0  写 +0x3C
    int drawTiberiumPips(int a2, int a3); // 0x6594F0  写 +0x40 / +0x44
    int drawMindControlPips(int a2);      // 0x659540  写 +0x54
    char drawPassengerPips(char a2);      // 0x659550  写 +0x58

// --- data layout (InitState 0x6593F0 写图 + draw* setter 目的场, G21 L6) ---
    uint8_t  pad_0[12];            // +0x00 InitState 清零区（dword@+0/+4/+8）
    int32_t  memberAtOffset12;     // +0x0C drawHealthBar 写入（调用方传屏幕 dy）
    uint8_t  pad_16[4];            // +0x10 InitState 存 Create 参数（rc_ptr_base*）
    uint8_t  pad_20[4];            // +0x14 InitState 清零区
    uint8_t  pad_24[8];            // +0x18 InitState 清零; Create 写 double@+0x18
    uint8_t  color[3];             // +0x20 drawSelectionBox 写入 3 字节 RGB
    uint8_t  pad_35[1];            // +0x23
    int32_t  memberAtOffset36[3];  // +0x24 drawPipScale 拷入 3 dwords（屏幕坐标）
    int32_t  memberAtOffset48[3];  // +0x30 drawSpawnPips 拷入 3 dwords（屏幕坐标）
    int32_t  memberAtOffset60;     // +0x3C drawAmmoPips 写入（调用方传 15）
    int32_t  memberAtOffset64;     // +0x40 drawTiberiumPips a2（调用方传 0）
    int32_t  memberAtOffset68;     // +0x44 drawTiberiumPips a3（调用方传 0x40500000）
    uint8_t  pad_72[12];           // +0x48 InitState 清零区 +0x48..+0x53
    int32_t  memberAtOffset84;     // +0x54 drawMindControlPips 写入（InitState=1）
    uint8_t  memberAtOffset88;     // +0x58 drawPassengerPips 写入（InitState=0）
    uint8_t  pad_89[103];          // +0x59..+0xBF InitState 清零区（dword@+0x7C）
    uint8_t  color2[3];            // +0xC0 InitState 清零 3 字节（第二颜色槽）
    uint8_t  pad_195[5];           // +0xC3..+0xC7 → sizeof 0xC8
};

} // namespace game
} // namespace ra2
