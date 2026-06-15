#pragma once

#include <cstdint>
#include <windows.h>

namespace gamemd
{

class MessageListClass
{
public:
    static MessageListClass* Instance;

    void PrintMessage(const wchar_t* pLabel, uint32_t unk1, const wchar_t* pMessage,
                      int32_t colorIndex, uint32_t unk2, int32_t duration, bool silent);

    void PrintMessage(const wchar_t* pMessage, int32_t durationFrames = 150,
                      int32_t colorIndex = 0, bool silent = false);

    void PrintMessage(const wchar_t* pMessage, double durationMinutes,
                      int32_t colorIndex = 0, bool silent = false);

    // TODO: complete MessageListClass (message queue, text rendering state)

protected:
    MessageListClass() = default;
    ~MessageListClass() = default;
};

} // namespace gamemd
