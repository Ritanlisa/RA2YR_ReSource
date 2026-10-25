#pragma once

#include "mission.hpp"
#include "core/vector.hpp"

namespace ra2 {
namespace game {

enum class RadioCommand : int;

class RadioClass : public MissionClass {
public:

    // === X134: inherited-range overrides (Radio binary 0x7F0508 slots 0-156 where RVA != MissionClass) ===
    virtual HRESULT __stdcall Load(IStream* stream) override;  // X134 slot 5 = 0x65AB80 (def merged from LoadState)
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // X134 slot 6 = 0x65AC40 (def merged from SaveState)
    virtual int Unlink(int a1, int a2) override;  // X134 slot 10 = 0x65AAC0 (signals: ExecuteAction)
    virtual int ProcessPower() override;  // X134 slot 13 = 0x65AB10 (signals: PowerDrainUpdate; base arity 0 per I525)
    virtual AbstractClass** Undeploy() override;  // X134 slot 53 = 0x65AA80 (signals: ProcessCmd)
    virtual int ProcessInputKey(int a1, int a2, int a3) override;  // X134 slot 101 = 0x65A820 (signals: ProcessGroupInput)

    // ========================================================================
    // X134: RadioClass own virtuals -- binary table 0x7F0508 slots [157]-[160] (4)
    // declaration order = slot order; arity = Capstone/decompiled head.
    // ========================================================================
    virtual int ThunkTo159x4();  // X134 slot 157 = 0x65ACB0 (thunk family to RemoveElement)
    virtual int ThunkTo636();  // X134 slot 158 = 0x65AAA0 (thunk to byte-0x27C family)
    virtual int RemoveElement(int a1, void* a2, int a3);  // X134 slot 159 = 0x65A970 (promoted; 3 stack args per vtable callsites)
    virtual int UpdateObjects();  // X134 slot 160 = 0x65ACE0

    virtual ~RadioClass() = default; // X134: slot 8 = 0x65AEB0 (deleting dtor; 0x65A750 = complete dtor)

    // unmatched: no callgraph reference and no git history record
    RadioCommand sendToFirstLink(RadioCommand command);
    // unmatched: no callgraph reference and no git history record
    RadioCommand sendCommand(RadioCommand command, TechnoClass* recipient);
    // unmatched: no callgraph reference and no git history record
    RadioCommand sendCommandWithData(RadioCommand command, AbstractClass*& inout, TechnoClass* recipient);
    // wrapper: delegates to RadioClass::RadioClass at 0x65A750
    void sendToEachLink(RadioCommand command);

    void ExecuteAction(TechnoClass* obj, bool clear);
    // 0x65AD90 -- Linear search for linked object index
    int FindLinkIndex(TechnoClass* obj);  // 0x65AD90
    int PowerDrainUpdate(int a2);
    void ProcessCmd();
    // 0x65AE60 -- Resize radio link array
    void SetLinkCount(int count);  // 0x65AE60

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
