# gdb python tracing helper for LINK.EXE experiments
# Usage: gdb -batch -x link_trace.gdb --args LINK.EXE ...
# This file is sourced from link_trace.gdb.
import gdb

LOG = None
INF = None
PATTERN = "2e69646174612434"   # .idata$4
BASEADDR = 0x4968c4
RANGES = [(0x0f000000, 0x20000000)]


def log(msg):
    global LOG
    if LOG is None:
        LOG = open(r"D:\RA2YR_ReSource\.omo\agents\datamatch\gdb_trace.log", "w", encoding="utf-8", buffering=1)
    LOG.write(msg + "\n")
    LOG.flush()


def reg(name):
    try:
        return int(gdb.newest_frame().read_register(name)) & 0xFFFFFFFF
    except Exception:
        return None


def u32(addr):
    try:
        return int.from_bytes(gdb.selected_inferior().read_memory(addr, 4), "little")
    except Exception:
        return None


def u16(addr):
    try:
        return int.from_bytes(gdb.selected_inferior().read_memory(addr, 2), "little")
    except Exception:
        return None


def cstr(addr, maxlen=64):
    try:
        b = bytes(gdb.selected_inferior().read_memory(addr, maxlen))
        z = b.find(b"\x00")
        if z >= 0:
            b = b[:z]
        return b.decode("latin1")
    except Exception:
        return None


class Probe(gdb.Breakpoint):
    def __init__(self, addr, name, kind):
        super().__init__("*0x%x" % addr, internal=True)
        self.pname = name
        self.kind = kind
        self.silent = True

    def stop(self):
        esp = reg("esp")
        try:
            if self.kind == "stack4":
                args = [u32(esp + 4 + 4 * i) for i in range(4)]
                log("%s esp=%08x a0=%08x a1=%08x a2=%08x a3=%08x" %
                    (self.pname, esp, args[0] or 0, args[1] or 0, args[2] or 0, args[3] or 0))
            elif self.kind == "hash_name":
                name = cstr(u32(esp + 4))
                log("%s HASH %s" % (self.pname, name))
            elif self.kind == "sec_read":  # 0x420310: arg2 = struct; +0 name? print words
                a1 = u32(esp + 4)
                a2 = u32(esp + 8)
                w0 = u16(a2) if a2 else None
                w1 = u16(a2 + 2) if a2 else None
                w2 = u16(a2 + 0x10) if a2 else None
                log("%s a1=%08x a2=%08x n0=%s n2=%s n10=%s" %
                    (self.pname, a1 or 0, a2 or 0, w0, w1, w2))
            elif self.kind == "str_arg0":
                log("%s %s" % (self.pname, cstr(u32(esp + 4))))
            elif self.kind == "str_arg1":
                log("%s %s" % (self.pname, cstr(u32(esp + 8))))
            elif self.kind == "ret_only":
                log("%s hit esp=%08x" % (self.pname, esp))
            elif self.kind == "findstr":
                pat = bytes.fromhex(PATTERN)
                found = []
                for a, b in RANGES:
                    chunk = 0x100000
                    x = a
                    while x < b and len(found) < 20:
                        try:
                            m = bytes(gdb.selected_inferior().read_memory(x, min(chunk, b - x)))
                            pos = 0
                            while True:
                                i = m.find(pat, pos)
                                if i < 0:
                                    break
                                found.append(x + i)
                                pos = i + 1
                                if len(found) > 20:
                                    break
                        except Exception:
                            pass
                        x += chunk
                log("%s FIND %s -> %s" % (self.pname, PATTERN, [hex(x) for x in found]))
            elif self.kind == "dumptable":
                base = u32(BASEADDR)
                log("%s TABLE base=%08x" % (self.pname, base or 0))
                if base:
                    for i in range(16):
                        try:
                            rec = bytes(gdb.selected_inferior().read_memory(base + i * 40, 40))
                        except Exception:
                            break
                        nm = rec[:8].split(b"\x00")[0]
                        log("  rec%d name=%r hex=%s" % (i, nm, rec.hex()))
            elif self.kind == "impobj2":
                a0 = u32(esp + 4)
                a1 = u32(esp + 8)
                a2 = u32(esp + 0xC)
                a3 = u32(esp + 0x10)
                if a2:
                    try:
                        hdr = bytes(gdb.selected_inferior().read_memory(a2, 0x14))
                        sig = hdr[0:4].hex()
                        size = int.from_bytes(hdr[0xC:0x10], "little")
                        hint = int.from_bytes(hdr[0x10:0x12], "little")
                        tn = int.from_bytes(hdr[0x12:0x14], "little")
                        nm = cstr(a2 + 0x14, 64)
                        log("impobj2 mod=%d a1=%08x a2=%08x sig=%s size=%d hint=%d type=%d name=%s ret=%08x" %
                            (a0 or 0, a1 or 0, a2 or 0, sig, size, hint, tn, nm, u32(esp) or 0))
                    except Exception as e:
                        log("impobj2 mod=%d ERR %s" % (a0 or 0, e))
                else:
                    log("impobj2 mod=%d a1=%08x a2=0 (%s)" %
                        (a0 or 0, a1 or 0, cstr(u32(a1) if a1 else 0, 16)))
        except Exception as e:
            log("%s ERR %s" % (self.pname, e))
        return False  # don't stop


def install(spec):
    # spec: "addr:name:kind,addr:name:kind"
    for item in spec.split(","):
        if not item.strip():
            continue
        a, n, k = item.split(":")
        Probe(int(a, 16), n, k)
        log("installed %s @%s (%s)" % (n, a, k))
