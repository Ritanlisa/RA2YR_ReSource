#pragma once

#include <cstdint>
#include <windows.h>

#include "core/math.hpp"

namespace gamemd
{

// ============================================================================
// MessageListClass — on-screen message log
// IDA vtbl @ 0x7E3CE8, Constructor @ 0x5D39D0, Dtor @ 0x5D3A40
// sizeof(MessageListClass) == 0x149C
// ============================================================================
class MessageListClass
{
public:
    static MessageListClass* Instance; // data: 0xA8BC60

    // --- Core API (from YRpp) ---

    // Init @ 0x5D3A60: sets up message area position and dimensions
    // AddMessage @ 0x5D3BA0: adds a message text label to the list
    // GetMessage @ 0x5D3F60: retrieves message text by ID
    // GetLabel @ 0x5D3F90: retrieves TextLabelClass* by ID
    // ConcatMessage @ 0x5D3FC0: appends to existing message by ID
    // SetEditFocus @ 0x5D41E0, HasEditFocus @ 0x5D41F0: edit box focus
    // AddEdit @ 0x5D4210: creates editable text line
    // RemoveEdit @ 0x5D4390: removes edit box
    // GetEditBuffer @ 0x5D4400, SetEditColor @ 0x5D4410
    // Manage @ 0x5D4430: per-frame update
    // Input @ 0x5D4510: keyboard input handler
    // Draw @ 0x5D49A0: render all messages
    // NumMessages @ 0x5D4AA0: count active messages
    // SetWidth @ 0x5D4AD0: set message area width
    // TrimMessage @ 0x5D4B20: trim/word-wrap text
    // ComputeY @ 0x5D4BF0: compute vertical layout

    // --- Convenience wrappers ---

    // unmatched: no callgraph reference and no git history record
    void PrintMessage(const wchar_t* pLabel, uint32_t unk1, const wchar_t* pMessage,
                      int32_t colorIndex, uint32_t unk2, int32_t duration, bool silent);
    // calls AddMessage @ 0x5D3BA0 internally

    // unmatched: no callgraph reference and no git history record
    void PrintMessage(const wchar_t* pMessage, int32_t durationFrames = 150,
                      int32_t colorIndex = 0, bool silent = false);
    // 150 frames = 10s @ ~15fps (convenience wrapper)

    // unmatched: no callgraph reference and no git history record
    void PrintMessage(const wchar_t* pMessage, double durationMinutes,
                      int32_t colorIndex = 0, bool silent = false);
    // minutes * 900 → frame count (convenience wrapper)

    // --- Member variables ---
    // (simplified subset; full layout is 0x149C bytes)

    int32_t              MessageCount;
    int32_t              MaxMessageCount;
    int32_t              ScrollOffset;
    int32_t              TextColorIndex;
    int32_t              DisplayDuration;
    TimerStruct           MessageTimer;
    RectangleStruct       MessageRect;
    bool                  IsScrolling;
    uint8_t               padding_after_scroll[3];

protected:
    MessageListClass() = default;  // 0x5D39D0
    ~MessageListClass() = default; // 0x5D3A40
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int CountCharsInWidth(void* a1, int a2, int a3, int a4);  // 0x433F50
    void Init(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);  // 0x5D3A60
    int AddMessage(void* a1, int a2, void* a3, int a4, int a5, int a6, int a7);  // 0x5D3BA0
    int clearMessages(int a1, int a2, int a3, int a4, int a5);  // 0x72A440
    // --- gap2 auto-generated stub declarations (END) ---
};

} // namespace gamemd
