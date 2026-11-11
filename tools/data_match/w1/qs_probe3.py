import gdb

LOG = r"D:\RA2YR_ReSource\.omo\agents\datamatch\qs_probe3.log"
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


def cstr(a, n=48):
    try:
        b = bytes(gdb.selected_inferior().read_memory(a, n))
        z = b.find(b"\x00")
        s = b[:z] if z >= 0 else b
        return s.decode("latin1")
    except Exception:
        return None


class QS(gdb.Breakpoint):
    def stop(self):
        if self.hits > 0:
            self.hits += 1
            return False
        esp = reg("esp")
        base = u32(esp)
        num = u32(esp + 4)
        log("QS num=%s" % num)
        if base and num and 0 < num < 5000:
            for i in range(num):
                p = u32(base + i * 4)
                rec = u32(p + 0x18) if p else 0
                fields = []
                strs = []
                for off in (0, 4, 8, 0xC, 0x10, 0x14):
                    v = u32(rec + off) if rec else 0
                    fields.append(v)
                    if v and 0x400000 <= v < 0x20000000:
                        s = cstr(v, 24)
                        strs.append(s if s and s.isprintable() else None)
                    else:
                        strs.append(None)
                log("%3d sc=%08x rec=%08x f=%s strs=%s" % (i, p or 0, rec or 0,
                                                           [hex(x) if x else 0 for x in fields], strs))
        self.hits += 1
        return False

    hits = 0


QS("*0x40f5d6", internal=True, temporary=False)
log("installed")
