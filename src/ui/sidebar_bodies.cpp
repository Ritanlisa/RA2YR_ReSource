// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/ui/sidebar.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "sidebar.hpp"

namespace gamemd {
CameoDataStruct::CameoDataStruct() noexcept : ItemIndex(-1), ItemType(AbstractType::None), IsAlt(false),
          CurrentFactory(nullptr), CameoDataStruct_field_10(0), Progress(0),
          ProgressHasChanged(false), ProgressTimerStart(-1), ProgressTimerCurrent(0),
          ProgressTimerTimeLeft(0), ProgressRate(0), ProgressStep(1),
                                                                         
          FlashEndFrame(0) {}

CameoDataStruct::CameoDataStruct(int32_t itemIndex, AbstractType itemType) noexcept : ItemIndex(itemIndex), ItemType(itemType), IsAlt(false),
          CurrentFactory(nullptr), CameoDataStruct_field_10(0), Progress(0),
          ProgressHasChanged(false), ProgressTimerStart(-1), ProgressTimerCurrent(0),
          ProgressTimerTimeLeft(0), ProgressRate(0), ProgressStep(1),
                                                                         
          FlashEndFrame(0) {}

bool CameoDataStruct::operator==(const CameoDataStruct& rhs) const noexcept {
        return ItemIndex == rhs.ItemIndex && ItemType == rhs.ItemType;
    }

bool CameoDataStruct::operator!=(const CameoDataStruct& rhs) const noexcept {
        return ItemIndex != rhs.ItemIndex || ItemType != rhs.ItemType;
    }
}

