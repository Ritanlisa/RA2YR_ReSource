#pragma once

#include "techno_type.hpp"
#include "core/enums.hpp"

namespace gamemd
{

class AnimTypeClass;

class AircraftTypeClass : public TechnoTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::AircraftType;

    static DynamicVectorClass<AircraftTypeClass*>* Array;
    static AircraftTypeClass* Find(const char* pID);
    // unmatched: no callgraph reference and no git history record
    static AircraftTypeClass* FindOrCreate(const char* pID);
    // wrapper: delegates to AircraftTypeClass::AircraftTypeClass at 0x41C8B0
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override; // 0x41CEB0 (as GetClassIdentifier)

    virtual ~AircraftTypeClass() = default;  // 0x41CFE0 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x41CFB0 (as GetTypeIdentifier)
    virtual int objectSize() const override; // 0x41CFC0 (as GetObjectSize)

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override; // 0x41CB60 (as StubReturnFalse)
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override; // 0x41CB70 (as CreateAircraft)

    AircraftTypeClass(const char* pID) noexcept;

protected:
    AircraftTypeClass(noinit_t) noexcept;

public:
    int ArrayIndex;
    bool Carryall;
    AnimTypeClass* Trailer;
    int SpawnDelay;
    bool Rotors;
    bool CustomRotor;
    bool Landable;
    bool FlyBy;
    bool FlyBack;
    bool AirportBound;
    bool Fighter;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int ConstructAircraft(int a1);  // 0x41cb20 -- AircraftTypeClass::ConstructAircraft
    int PowerDrainUpdate(int a1);  // 0x41cdb0 -- AircraftTypeClass::PowerDrainUpdate
    int GetAuxField();  // 0x41cfd0 -- AircraftTypeClass::GetAuxField
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int LoadTypeData(int a1, int a2, int a3);  // 0x41cc20
    int LoadFromINI(int a1, int a2);  // 0x41ce20
    int SaveToINI();  // 0x41ce90
    int GetGameplayValue();  // 0x712120
    // === FUNCS-MOVE (END) ===
};

} // namespace gamemd
