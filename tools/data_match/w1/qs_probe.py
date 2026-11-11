import gdb

LOG = r"D:\RA2YR_ReSource\.omo\agents\datamatch\qs_probe.log"
_out = open(LOG, "w", encoding="utf-8", buffering=1)


def log(m):
    _out.write(m + "\n")


def reg(n):
    try:
        return int(gdb.newest_frame().read_register(n)) & 0xFFFFFFFF
    except Exception:
        return None


def u32(a):
    try:
        return int.from_bytes(gdb.selected_inferior().read_memory(a, 4), "little")
    except Exception:
        return None


def cstr(a, n=64):
    try:
        b = bytes(gdb.selected_inferior().read_memory(a, n))
        z = b.find(b"\x00")
        return b[:z].decode("latin1") if z >= 0 else b.decode("latin1")
    except Exception:
        return None


class QS(gdb.Breakpoint):
    """Stop at the qsort CALL inside LINK's sort-list routine (0x40f5d6)."""

    def stop(self):
        esp = reg("esp")
        base = u32(esp)
        num = u32(esp + 4)
        width = u32(esp + 8)
        comp = u32(esp + 0xC)
        log("QS call#%d base=%08x num=%s width=%s comp=%08x" % (self.hits, base or 0, num, width, comp or 0))
        names = []
        if base and num and 0 < num < 5000:
            for i in range(num):
                p = u32(base + i * 4)
                nm = None
                if p:
                    r = u32(p + 0x18)
                    if r:
                        s = u32(r + 4)
                        if s:
                            nm = cstr(s, 32)
                names.append(nm)
        log("  ORDER=" + ",".join(str(x) for x in names))
        self.hits += 1
        return False

    hits = 0


QS("*0x40f5d6", internal=True, temporary=False)
log("installed qs @0x40f5d6")
