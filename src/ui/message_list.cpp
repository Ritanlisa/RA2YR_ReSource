#include "ui/message_list.hpp"

namespace gamemd
{

MessageListClass* MessageListClass::Instance = nullptr;

void MessageListClass::PrintMessage(const wchar_t* pLabel, uint32_t unk1, const wchar_t* pMessage,
                                    int32_t colorIndex, uint32_t unk2, int32_t duration, bool silent)
{
    (void)pLabel;
    (void)unk1;
    (void)pMessage;
    (void)colorIndex;
    (void)unk2;
    (void)duration;
    (void)silent;
    // TODO: add message to queue with full parameters
}

void MessageListClass::PrintMessage(const wchar_t* pMessage, int32_t durationFrames,
                                    int32_t colorIndex, bool silent)
{
    PrintMessage(nullptr, 0, pMessage, colorIndex, 0, durationFrames, silent);
}

void MessageListClass::PrintMessage(const wchar_t* pMessage, double durationMinutes,
                                    int32_t colorIndex, bool silent)
{
    // TODO: convert minutes to frames and delegate
    int32_t durationFrames = (int32_t)(durationMinutes * 60.0 * 15.0);
    PrintMessage(pMessage, durationFrames, colorIndex, silent);
}

// TODO: complete MessageListClass implementation

} // namespace gamemd
