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

    constexpr VectorClass() noexcept : Items(nullptr), Count(0), Capacity(0) {} // IDA: NOT_FOUND
};

class RadioClass : public MissionClass {
public:
    virtual HRESULT __stdcall Load(IStream* stream) override;  // 0x65AB80
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x65AC40

    virtual ~RadioClass() = default; // 0x65A750

    virtual RadioCommand sendToFirstLink(RadioCommand command); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual RadioCommand sendCommand(RadioCommand command, TechnoClass* recipient); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual RadioCommand sendCommandWithData(RadioCommand command, AbstractClass*& inout, TechnoClass* recipient); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void sendToEachLink(RadioCommand command); // IDA: NOT_FOUND

    // 0x65AAC0 -- vt10: Remove a specific object from radio links
    virtual void ExecuteAction(TechnoClass* obj, bool clear);  // 0x65AAC0
    // 0x65AD90 -- Linear search for linked object index
    virtual int FindLinkIndex(TechnoClass* obj);  // 0x65AD90
    // 0x65AB10 -- vt13: Update power drain for all linked objects
    virtual void PowerDrainUpdate();  // 0x65AB10
    // 0x65AA80 -- vt53: Process undeploy command
    virtual void ProcessCmd();  // 0x65AA80
    // 0x65AB80 -- Load radio link state from stream
    virtual HRESULT __stdcall LoadState(IStream* stream);  // 0x65AB80
    // 0x65AC40 -- Save radio link state to stream
    virtual HRESULT __stdcall SaveState(IStream* stream, int clear_dirty);  // 0x65AC40
    // 0x65AE60 -- Resize radio link array
    virtual void SetLinkCount(int count);  // 0x65AE60

    TechnoClass* const& getNthLink(int idx = 0) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    bool hasFreeLink() const;  // 0x65ADC0
    bool hasAnyLink() const; // IDA: NOT_FOUND

    int32_t             lastCommands[3];
    VectorClass<TechnoClass*> radioLinks;

protected:
    RadioClass() noexcept; // 0x65A750
};

} // namespace game
} // namespace ra2
