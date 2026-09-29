#!/usr/bin/env python3
"""COFF object-file vtable reader (our-build side).

Parses a 32-bit MSVC .obj: symbol table + per-section relocations, finds
`??_7Class@@6B@` vtable symbols and resolves each 4-byte slot's relocation
to its target symbol name. This is the semantic mirror of the original-PE
slot extraction (no linking needed).

Usage (as a module):
    from read_obj_vtables import obj_vtables
    tables = obj_vtables('pilot.obj')   # {'??_7CDFileClass@@6B@': [slot symbol names...]}
"""
import struct


def obj_vtables(path):
    data = open(path, 'rb').read()
    if data[:2] != b'\x4c\x01':          # IMAGE_FILE_MACHINE_I386
        raise ValueError('not a 32-bit COFF obj: %r' % path[:2])

    nsec = struct.unpack_from('<H', data, 2)[0]
    sym_off = struct.unpack_from('<I', data, 8)[0]
    nsyms = struct.unpack_from('<I', data, 12)[0]

    # ---- symbol table ----
    strtab_off = sym_off + 18 * nsyms
    strtab_size = struct.unpack_from('<I', data, strtab_off)[0]
    strtab = data[strtab_off:strtab_off + strtab_size]

    def sym_name(off):
        zero, offs = struct.unpack_from('<II', data, off)
        if zero == 0:
            end = strtab.index(b'\0', offs)
            return strtab[offs:end].decode('latin-1')
        return data[off:off + 8].rstrip(b'\0').decode('latin-1')

    syms = {}          # index -> (name, section, value)
    aux_skip = 0
    for i in range(nsyms):
        off = sym_off + 18 * i
        if aux_skip:
            aux_skip -= 1
            continue
        name = sym_name(off)
        value, sec, typ, storage, naux = struct.unpack_from('<IHHBB', data, off + 8)
        syms[i] = (name, sec, value)
        aux_skip = naux

    sec_relocs = {}
    sec_raw = {}
    for s in range(1, nsec + 1):
        so = 20 + 40 * (s - 1)
        rsize = struct.unpack_from('<I', data, so + 16)[0]
        raw = struct.unpack_from('<I', data, so + 20)[0]
        reloff = struct.unpack_from('<I', data, so + 24)[0]
        nrel = struct.unpack_from('<H', data, so + 32)[0]
        sec_raw[s] = (raw, rsize)
        rels = []
        for r in range(nrel):
            ro = reloff + 10 * r
            rva, symidx, rtype = struct.unpack_from('<IIH', data, ro)
            rels.append((rva, symidx, rtype))
        sec_relocs[s] = rels

    # ---- vtable symbols -> slot symbol sequences ----
    out = {}
    for idx, (name, sec, value) in syms.items():
        if not name.startswith('??_7') or not name.endswith('@@6B@'):
            continue
        raw, rsize = sec_raw.get(sec, (0, 0))
        rels = sorted(sec_relocs.get(sec, []))
        slots = []
        pos = value
        while pos + 4 <= value + 4 * 256:      # sanity cap
            nxt = [r for r in rels if r[0] == pos]
            if not nxt:
                break
            _, symidx, rtype = nxt[0]
            if rtype not in (0x06, 0x07, 0x14, 0x15):   # DIR32/REL32 families
                break
            tgt = syms.get(symidx, ('?', 0, 0))[0]
            slots.append(tgt)
            pos += 4
        out[name] = slots
    return out


if __name__ == '__main__':
    import sys
    for path in sys.argv[1:]:
        print('==', path)
        for vt, slots in sorted(obj_vtables(path).items()):
            print(' %s (%d slots)' % (vt, len(slots)))
            for i, s in enumerate(slots):
                print('  %2d %s' % (i, s))
