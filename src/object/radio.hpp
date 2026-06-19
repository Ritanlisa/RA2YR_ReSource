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

    constexpr VectorClass() noexcept : Items(nullptr), Count(0), Capacity(0) {}
};

class RadioClass : public MissionClass {
public:
    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~RadioClass() = default;

    virtual RadioCommand sendToFirstLink(RadioCommand command);
    virtual RadioCommand sendCommand(RadioCommand command, TechnoClass* recipient);
    virtual RadioCommand sendCommandWithData(RadioCommand command, AbstractClass*& inout, TechnoClass* recipient);
    virtual void sendToEachLink(RadioCommand command);

    // IDA: 0x65AAC0 -- vt10: Remove a specific object from radio links
    virtual void ExecuteAction(TechnoClass* obj, bool clear);  // 0x65aac0
    // IDA: 0x65AD90 -- Linear search for linked object index
    virtual int FindLinkIndex(TechnoClass* obj);  // 0x65ad90
    // IDA: 0x65AB10 -- vt13: Update power drain for all linked objects
    virtual void PowerDrainUpdate();  // 0x65ab10
    // IDA: 0x65AA80 -- vt53: Process undeploy command
    virtual void ProcessCmd();  // 0x65aa80
    // IDA: 0x65AB80 -- Load radio link state from stream
    virtual HRESULT __stdcall LoadState(IStream* stream);  // 0x65ab80
    // IDA: 0x65AC40 -- Save radio link state to stream
    virtual HRESULT __stdcall SaveState(IStream* stream, int clear_dirty);  // 0x65ac40
    // IDA: 0x65AE60 -- Resize radio link array
    virtual void SetLinkCount(int count);  // 0x65ae60

    TechnoClass* const& getNthLink(int idx = 0) const;
    bool hasFreeLink() const;  // 0x65ADC0
    bool hasAnyLink() const;

    int32_t             lastCommands[3];
    VectorClass<TechnoClass*> radioLinks;

protected:
    RadioClass() noexcept;
};

} // namespace game
} // namespace ra2
