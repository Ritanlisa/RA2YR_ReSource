#!/usr/bin/env python3
"""W-A body-shape census (read-only): categorize emitted bodies in the three
constant-family buckets so variant families can be designed from data."""
import json, os, re, sys, glob, collections

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
STATE = os.path.join(ROOT, ".omo", "agents", "decomp_batch")


def source_body(part_dir, addr):
    tag = addr[2:].upper()
    for cpp in glob.glob(os.path.join(part_dir, "*.cpp")):
        try:
            s = open(cpp, encoding="utf-8", errors="replace").read()
        except OSError:
            continue
        i = s.find("fn 0x%s" % tag)
        if i < 0:
            i = s.find("fn %s" % addr)
        if i < 0:
            continue
        start = s.rfind("// GENERATED", 0, i)
        nxt = s.find("// GENERATED", i)
        block = s[start:nxt if nxt >= 0 else len(s)]
        bo = block.find("\n{\n")
        be = block.rstrip().rfind("\n}")
        if bo >= 0 and be > bo:
            return block[bo + 3:be + 1]
    return ""


def norm(line):
    s = line.strip()
    s = re.sub(r"\bDataGlobal_[0-9A-Fa-f]{6,8}\b", "G", s)
    s = re.sub(r"\b(?:dbl|flt|dword|word|byte|qword)_[0-9A-Fa-f]{6,8}\b", "D", s)
    s = re.sub(r"\b(?:v|p|result|this_)\w*", "V", s)
    s = re.sub(r"0x[0-9A-Fa-f]+|\b\d+\.\d+(?:[eE][+-]?\d+)?\b|\b\d+\b", "N", s)
    s = re.sub(r"\s+", " ", s)
    return s


def main():
    rows = json.load(open(os.path.join(STATE, "w_census_rows.json"), encoding="utf-8"))
    buckets = sys.argv[1:] or ["D_CONST_FOLD", "D_CONST_FP", "D_IMM"]
    for b in buckets:
        xs = [r for r in rows if r.get("cls") == b]
        shapes = collections.Counter()
        missing = 0
        samples = {}
        for r in xs:
            pdir = os.path.join(ROOT, r["part_dir"])
            body = source_body(pdir, r["addr"])
            if not body:
                missing += 1
                continue
            # normalized statement with FP literal
            stmts = [x for x in body.split(";") if x.strip()]
            fp_lines = [x for x in stmts if re.search(r"\d+\.\d+", x)]
            if fp_lines:
                key = " + ".join(norm(x) for x in fp_lines[:2])
            else:
                # first 2 statements normalized
                key = " | ".join(norm(x) for x in stmts[:2])
            key = key[:180]
            shapes[key] += 1
            samples.setdefault(key, (r["addr"], r.get("name")))
        print("=" * 100)
        print("BUCKET %s n=%d missing_body=%d shapes=%d" % (b, len(xs), missing, len(shapes)))
        for k, n in shapes.most_common(24):
            print("  %4d  %s" % (n, k))
            print("        e.g. %s %s" % samples[k])


if __name__ == "__main__":
    main()
