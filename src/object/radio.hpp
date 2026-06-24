#pragma once

#include "mission.hpp"

namespace ra2 {
namespace game {

enum class RadioCommand : int;

template <typename T>
class VectorClass {
public:
    T*      Items;
    int32_t Count;
    int32_t Capacity;

    // design: constexpr operator, compile-time only
    constexpr VectorClass() noexcept : Items(nullptr), Count(0), Capacity(0) {}
};

class RadioClass : public MissionClass {
public:
    virtual HRESULT __stdcall Load(IStream* stream) override;  // 0x65AB80
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x65AC40

    virtual ~RadioClass() = default; // 0x65A750

    // unmatched: no callgraph reference and no git history record
    virtual RadioCommand sendToFirstLink(RadioCommand command);
    // unmatched: no callgraph reference and no git history record
    virtual RadioCommand sendCommand(RadioCommand command, TechnoClass* recipient);
    // unmatched: no callgraph reference and no git history record
    virtual RadioCommand sendCommandWithData(RadioCommand command, AbstractClass*& inout, TechnoClass* recipient);
    // wrapper: delegates to RadioClass::RadioClass at 0x65A750
    virtual void sendToEachLink(RadioCommand command);

    virtual void ExecuteAction(TechnoClass* obj, bool clear);
    // 0x65AD90 -- Linear search for linked object index
    virtual int FindLinkIndex(TechnoClass* obj);  // 0x65AD90
    virtual void PowerDrainUpdate();
    virtual void ProcessCmd();
    // 0x65AB80 -- Load radio link state from stream
    virtual HRESULT __stdcall LoadState(IStream* stream);  // 0x65AB80
    // 0x65AC40 -- Save radio link state to stream
    virtual HRESULT __stdcall SaveState(IStream* stream, int clear_dirty);  // 0x65AC40
    // 0x65AE60 -- Resize radio link array
    virtual void SetLinkCount(int count);  // 0x65AE60

    // unmatched: no callgraph reference and no git history record
    TechnoClass* const& getNthLink(int idx = 0) const;
    bool hasFreeLink() const;  // 0x65ADC0
    // wrapper: delegates to RadioClass::HasFreeLink at 0x65ADC0
    bool hasAnyLink() const;

    int32_t             lastCommands[3];
    VectorClass<TechnoClass*> radioLinks;

protected:
    RadioClass() noexcept; // 0x65A750
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Constructor();  // 0x5B2DA0
    void* ProcessEvent(int a1);  // 0x65AEB0
    // --- gap2 auto-generated stub declarations (END) ---
};

} // namespace game
} // namespace ra2
