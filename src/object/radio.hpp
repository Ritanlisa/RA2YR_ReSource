#pragma once

#include "mission.hpp"
#include "core/vector.hpp"

namespace ra2 {
namespace game {

enum class RadioCommand : int;

class RadioClass : public MissionClass {
public:
    int RemoveElement(int a1, void* a2);  // 0x65A970 vt+636 (canon RadioClass 2 参; raw ret int; g57w10 r4 item5)
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
    virtual int PowerDrainUpdate(int a2);
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

    int32_t             lastCommands[3];                  // 0xD4 (offset 212)
    gamemd::VectorClass<TechnoClass*> radioLinks;         // 0xE0 (offset 224, 16 bytes: ptr_0/Items/Capacity/IsInitialized/IsAllocated)

protected:
    RadioClass() noexcept; // 0x65A750
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Constructor();  // 0x5B2DA0
    void* ProcessEvent(int a1);  // 0x65AEB0
    // --- gap2 auto-generated stub declarations (END) ---
    char HasFreeLink();  // gB sig supply @cache

    TagClass* attachedTag;  // X10 supply (csp_canon_members)
    int32_t currentMission;  // X10 supply (csp_canon_members)
    unsigned int missionData;  // X10 supply (csp_canon_members)
    bool missionQueued;  // X10 supply (csp_canon_members)
    int32_t missionStartTime;  // X10 supply (csp_canon_members)
    int32_t missionStatus;  // X10 supply (csp_canon_members)
    unsigned char missionTimer[12];  /* TimerStruct */  // X10 supply (csp_canon_members)
    bool q0ED;  // X10 supply (member_lookup)
    int32_t queuedMission;  // X10 supply (csp_canon_members)
    int32_t suspendedMission;  // X10 supply (csp_canon_members)
    void* ptr_4;  // X10 supply (csp_canon_members)
    void* ptr_8;  // X10 supply (csp_canon_members)
    void* ptr_C;  // X10 supply (csp_canon_members)

    unsigned int u32_E8;  // X10 supply (member_lookup)
};

} // namespace game
} // namespace ra2
