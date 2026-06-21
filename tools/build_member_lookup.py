#!/usr/bin/env python3
"""
build_member_lookup.py v3 — Class member offset lookup using anchor points + known offsets.

Uses anchor markers (align_NNN, _field_XXX_NNN) in headers plus hardcoded known
offsets for instance classes (from ctor-confirmed // +0xNN comments in object.hpp).
"""

import re, json, sys
from pathlib import Path
from collections import OrderedDict

ROOT = Path(__file__).parent.parent

KNOWN_OFFSETS = {
    "AbstractClass": {
        0x10: {"name":"uniqueId","type":"uint32_t"},
        0x14: {"name":"abstractFlags","type":"uint32_t"},
        0x18: {"name":"nextArrayIndex","type":"uint32_t"},
        0x1C: {"name":"referenceCount","type":"int32_t"},
        0x20: {"name":"needsSave","type":"bool"},
        0x21: {"name":"__pad_21","type":"uint8_t[3]"},
    },
    "ObjectClass": {
        0x24:{"name":"objectTypeFlags","type":"uint32_t"},
        0x28:{"name":"owningHouseIndex","type":"uint32_t"},
        0x2C:{"name":"fallRate","type":"int32_t"},
        0x30:{"name":"nextObject","type":"ObjectClass*"},
        0x34:{"name":"attachedTag","type":"TagClass*"},
        0x38:{"name":"attachedBomb","type":"BombClass*"},
        0x3C:{"name":"ambientSoundController","type":"AudioController"},
        0x50:{"name":"customSound_controller","type":"AudioController"},
        0x64:{"name":"customSound","type":"int32_t"},
        0x68:{"name":"bombVisible","type":"bool"},
        0x69:{"name":"__pad_69","type":"uint8_t[3]"},
        0x6C:{"name":"health","type":"int32_t"},
        0x70:{"name":"estimatedHealth","type":"int32_t"},
        0x74:{"name":"isOnMap","type":"bool"},
        0x75:{"name":"__pad_75","type":"uint8_t[3]"},
        0x78:{"name":"spawnStatus","type":"uint32_t"},
        0x7C:{"name":"visibilityFlags","type":"uint32_t"},
        0x80:{"name":"needsRedraw","type":"bool"},
        0x81:{"name":"inLimbo","type":"bool"},
        0x82:{"name":"inOpenToppedTransport","type":"bool"},
        0x83:{"name":"isSelected","type":"bool"},
        0x84:{"name":"hasParachute","type":"bool"},
        0x85:{"name":"__pad_85","type":"uint8_t[3]"},
        0x88:{"name":"parachute","type":"AnimClass*"},
        0x8C:{"name":"onBridge","type":"bool"},
        0x8D:{"name":"isFallingDown","type":"bool"},
        0x8E:{"name":"wasFallingDown","type":"bool"},
        0x8F:{"name":"isBomb","type":"bool"},
        0x90:{"name":"isAliveFlag","type":"bool"},
        0x91:{"name":"__pad_91","type":"uint8_t[3]"},
        0x94:{"name":"lastLayer","type":"uint32_t"},
        0x98:{"name":"isInLogic","type":"bool"},
        0x99:{"name":"isVisible","type":"bool"},
        0x9A:{"name":"__pad_9A","type":"uint8_t[2]"},
        0x9C:{"name":"location","type":"CoordStruct"},
        0xA8:{"name":"lineTrailer","type":"LineTrail*"},
    },
    "MissionClass": {
        0xAC:{"name":"currentMission","type":"int32_t"},
        0xB0:{"name":"suspendedMission","type":"int32_t"},
        0xB4:{"name":"queuedMission","type":"int32_t"},
        0xB8:{"name":"missionQueued","type":"bool"},
        0xB9:{"name":"__pad_B9","type":"uint8_t[3]"},
        0xBC:{"name":"missionStatus","type":"int32_t"},
        0xC0:{"name":"missionStartTime","type":"int32_t"},
        0xC4:{"name":"missionData","type":"uint32_t"},
        0xC8:{"name":"missionTimer","type":"TimerStruct"},
    },
    "RadioClass": {
        0xD4:{"name":"lastCommands","type":"int32_t[3]"},
        0xE0:{"name":"radioLinks","type":"VectorClass<TechnoClass*>"},
    },
    "UnitClass": {
        0x6C0:{"name":"unknown_6C0","type":"int32_t"},
        0x6C4:{"name":"Type","type":"UnitTypeClass*"},
        0x6C8:{"name":"FollowerCar","type":"UnitClass*"},
        0x6CC:{"name":"FlagHouseIndex","type":"int32_t"},
        0x6D0:{"name":"HasFollowerCar","type":"bool"},
        0x6D1:{"name":"Unloading","type":"bool"},
        0x6D2:{"name":"unknown_6D2","type":"bool"},
        0x6D3:{"name":"TerrainPalette","type":"bool"},
        0x6D4:{"name":"unknown_6D4","type":"int32_t"},
        0x6D8:{"name":"DeathFrameCounter","type":"int32_t"},
        0x6DC:{"name":"ElectricBolt","type":"EBolt*"},
        0x6E0:{"name":"Deployed","type":"bool"},
        0x6E1:{"name":"Deploying","type":"bool"},
        0x6E2:{"name":"Undeploying","type":"bool"},
        0x6E4:{"name":"NonPassengerCount","type":"int32_t"},
        0x6E8:{"name":"ToolTipText","type":"wchar_t[0x100]"},
    },
}

TYPE_SZ = {
    "bool":1,"char":1,"int8_t":1,"uint8_t":1,"byte":1,
    "short":2,"int16_t":2,"uint16_t":2,"wchar_t":2,
    "int":4,"int32_t":4,"uint32_t":4,"DWORD":4,
    "float":4,"long":4,"int64_t":8,"uint64_t":8,"double":8,
    "CoordStruct":12,"TimerStruct":12,"CellStruct":4,"ColorStruct":4,
    "Point2D":8,"RectangleStruct":16,"FacingStruct":4,"DirStruct":4,
    "_GUID":16,"CLSID":16,"WeaponStruct":16,"TurretControl":16,
    "AbilitiesStruct":6,"VeterancyStruct":4,"OwnedTiberiumStruct":16,
    "FlashData":8,"ProgressTimer":8,"TransitionTimer":12,
    "PassengersClass":8,"RecoilData":24,"SHPStruct":4,"VoxelStruct":4,
    "LandType":4,"Armor":4,"SpeedType":4,"MovementZone":4,
    "Category":4,"PipScale":4,"AudioController":20,
}

def tsize(ts):
    ts=ts.strip(); ts=re.sub(r'^(const|volatile|mutable)\s+','',ts)
    if'*'in ts:return 4
    am=re.search(r'\[([^\]]*)\]',ts)
    base=re.sub(r'\s*\[[^\]]*\]','',ts).strip()
    base=re.sub(r'^(unsigned|signed)\s+','',base).strip()
    sz=TYPE_SZ.get(base,4)
    if am and am.group(1).strip():
        for p in am.group(1).split('x'):
            p=p.strip()
            if p.isdigit():sz*=int(p)
    return sz

def tal(ts):
    ts=ts.strip(); ts=re.sub(r'^(const|volatile|mutable)\s+','',ts)
    if'*'in ts:return 4
    sz=tsize(ts);return min(sz,4)if sz<=8 else 4

def alup(o,a):return(o+a-1)&~(a-1)if a else o

RE_ANCH=re.compile(r'(?:align[_ ]*([0-9a-fA-F]{3,})|_field_\w*_([0-9a-fA-F]{3,})$)',re.I)
RE_MEM=re.compile(
    r'^\s*((?:[\w:*&<>_]+\s+)+?)'
    r'(\w+(?:\[\s*\d*\s*(?:x\s*\d+\s*)?\])?)\s*;'
    r'(?:\s*//.*)?$',re.MULTILINE)
RE_CLASS=re.compile(
    r'(?:class|struct)\s+(\w+)\s*'
    r'(?::\s*(?:public|private|protected)\s+([\w:]+(?:\s*,\s*(?:public|private|protected)\s+[\w:]+)*))?\s*\{')

def parse_file(filepath):
    with open(filepath,'r',encoding='utf-8',errors='replace')as f:content=f.read()
    classes={}
    for cm in RE_CLASS.finditer(content):
        name=cm.group(1);bs=cm.group(2)
        bases=[]
        if bs:
            if re.search(r'(?:public|private|protected)\s+',bs):
                for bm in re.finditer(r'(?:public|private|protected)\s+([\w:]+)',bs):
                    bases.append(bm.group(1).split('::')[-1])
            else:bases.append(bs.strip().split('::')[-1])
        st=cm.end();dep,pos=1,st
        while pos<len(content)and dep>0:
            if content[pos]=='{':dep+=1
            elif content[pos]=='}':dep-=1
            pos+=1
        body=content[st:pos-1]
        mems=[]
        for line in body.split('\n'):
            s=line.strip()
            if not s or s.startswith('//')or s.startswith('#'):continue
            if s.startswith(('public:','private:','protected:','}','virtual','static',
                           'explicit','operator','using','typedef','enum','template',
                           'constexpr','friend')):continue
            if re.match(r'^\s*~?\w+\s*\(',s):continue
            if re.match(r'^\s*(?:[\w:*&<>_]+\s+)+\w+\s*\(',s):continue
            mm=RE_MEM.match(s)
            if not mm:continue
            t=mm.group(1).strip();fn=mm.group(2).strip()
            t=re.sub(r'^(const|volatile)\s+','',t).strip()
            mems.append({"name":fn,"type":t})
        result=OrderedDict();cur=0
        for mem in mems:
            am=RE_ANCH.search(mem["name"])
            if am:
                ahex=am.group(1)or am.group(2);av=int(ahex,16)
                if av>=cur:cur=av
            cur=alup(cur,tal(mem["type"]))
            off=cur;k=str(off)
            if k not in result:result[k]={"name":mem["name"],"type":mem["type"]}
            cur+=tsize(mem["type"])
        classes[name]={"bases":bases,"members":result}
    return classes

def main():
    output=OrderedDict()
    for cn,mem in KNOWN_OFFSETS.items():
        mi=OrderedDict()
        for o in sorted(mem):mi[str(o)]=mem[o]
        output[cn]=mi

    for pat in ["src/type/*.hpp","src/structure/*.hpp","src/object/*.hpp",
                "src/entity/*.hpp","src/render/*.hpp","src/house/*.hpp",
                "src/system/*.hpp","src/misc/*.hpp","src/core/*.hpp",
                "src/network/*.hpp","src/team/*.hpp","src/ui/*.hpp"]:
        for fp in sorted(Path(ROOT).glob(pat)):
            for name,info in parse_file(str(fp)).items():
                if name not in output:output[name]=info["members"]
                else:
                    ex=output[name]
                    for o,m in info["members"].items():
                        if o not in ex:ex[o]=m

    # Build parent map
    parents={}
    all_hpp=list(Path(ROOT).glob("src/**/*.hpp"))+list(Path(ROOT).glob("include/gamemd/**/*.hpp"))
    for fp in all_hpp:
        try:
            c=Path(fp).read_text(encoding='utf-8',errors='replace')
            for cm in RE_CLASS.finditer(c):
                cn=cm.group(1);bs=cm.group(2)
                if cn in parents:continue
                if bs:
                    pb=[]
                    if re.search(r'(?:public|private|protected)\s+',bs):
                        for bm in re.finditer(r'(?:public|private|protected)\s+([\w:]+)',bs):
                            pb.append(bm.group(1).split('::')[-1])
                    else:pb.append(bs.strip().split('::')[-1])
                    if pb:parents[cn]=pb
        except:pass

    def get_inh(cn,vis=None):
        if vis is None:vis=set()
        if cn in vis:return OrderedDict()
        vis.add(cn)
        r=OrderedDict()
        for b in parents.get(cn,[]):
            bn=b.split('::')[-1]
            for o,m in get_inh(bn,vis.copy()).items():
                if o not in r:
                    e=dict(m);e["inherited_from"]=bn;r[o]=e
        return r

    for cn in list(output.keys()):
        inh=get_inh(cn)
        ex=output[cn]
        mg=OrderedDict()
        for o,m in inh.items():mg[o]=m
        for o,m in ex.items():mg[o]=m
        output[cn]=mg

    outpath=ROOT/"tools"/"member_lookup.json"
    with open(outpath,'w',encoding='utf-8')as f:
        json.dump(output,f,indent=2,ensure_ascii=False)
    total=sum(len(v)for v in output.values())
    print(f"{total} entries in {len(output)} classes",file=sys.stderr)
    for cn in['UnitClass','FootClass','TechnoClass','RadioClass','MissionClass',
              'ObjectClass','AbstractClass','UnitTypeClass','TechnoTypeClass']:
        if cn in output:print(f"  {cn}:{len(output[cn])}",file=sys.stderr)

if __name__=="__main__":main()
