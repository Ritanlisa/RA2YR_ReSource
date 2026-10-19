#!/usr/bin/env python3
"""X78 inventory: every `vtable*` / `vtbl*` / `vt_*` identifier site in the
build universe (src minus raw_decomp/_generated/app), classified as
decl-member / decl-local / use-member / use-bare, with class+function context.

Line-exact: comments are blanked (newlines preserved) so offsets map 1:1.

Outputs (evidence dir):
  x78_inventory.json   full site list
  x78_entities.json    grouped by (class|fn, token, kind)
  x78_summary.txt      human summary
"""
import os, re, json, sys, collections

ROOT = r"D:\RA2YR_ReSource"
SRC = os.path.join(ROOT, "src")
OUT = os.path.join(ROOT, ".omo", "evidence", "optimization", "x78")
SKIP_TOP = {"raw_decomp", "_generated", "app"}

TOK = re.compile(r"\b(?:vtable|vtbl)[0-9_]*\b|\bvt_[A-Za-z0-9_]+")
DECL = re.compile(
    r"^\s*(?:(?:static|extern|const|volatile|unsigned|signed|struct|class)\s+)*"
    r"(?:void|int|char|short|long|bool|float|double|unsigned|signed|"
    r"__int8|__int16|__int32|__int64|uint8_t|uint16_t|uint32_t|uint64_t|"
    r"int8_t|int16_t|int32_t|int64_t|size_t|DWORD|WORD|BYTE|BOOL|HWND|HANDLE|"
    r"LPSTR|LPCSTR|WPARAM|LPARAM|LPVOID|UINT|ULONG)\s*\**\s*$"
)
MEMBER_OF = re.compile(r"(->|\.)\s*$")

def blank_comments(s):
    """Return s with comment text replaced by spaces; newlines preserved."""
    out = list(s)
    i, n, state = 0, len(s), 0
    while i < n:
        c = s[i]
        if state == 0:
            if c == "/" and i + 1 < n and s[i + 1] == "/":
                out[i] = " "; out[i + 1] = " "; i += 2; state = 1; continue
            if c == "/" and i + 1 < n and s[i + 1] == "*":
                out[i] = " "; out[i + 1] = " "; i += 2; state = 2; continue
            if c == '"': state = 3; i += 1; continue
            if c == "'": state = 4; i += 1; continue
            i += 1
        elif state == 1:
            if c == "\n": state = 0
            else: out[i] = " "
            i += 1
        elif state == 2:
            if c == "*" and i + 1 < n and s[i + 1] == "/":
                out[i] = " "; out[i + 1] = " "; i += 2; state = 0
            else:
                if c != "\n": out[i] = " "
                i += 1
        elif state == 3:
            if c == "\\": i += 2; continue
            if c == '"': state = 0
            i += 1
        elif state == 4:
            if c == "\\": i += 2; continue
            if c == "'": state = 0
            i += 1
    return "".join(out)

CLASS_OPEN = re.compile(r"\b(class|struct|union)\s+([A-Za-z_]\w*)\s*(?::[^{;]*)?$")
NS_OPEN = re.compile(r"\bnamespace\s+([A-Za-z_]\w*)?\s*$")
FN_OPEN = re.compile(r"([A-Za-z_~][\w:~<>,\s\*&\[\]]*?)\s*\([^;{}]*\)\s*(?:const\s*)?(?:noexcept\s*)?$")

def analyze_file(path, rel):
    txt = open(path, encoding="utf-8", errors="replace").read()
    code = blank_comments(txt)
    lines = code.split("\n")
    raw = txt.split("\n")
    # scope stack of (kind, name, depth)
    stack = []  # open scopes
    depth = 0
    sites = []
    for ln, line in enumerate(lines, 1):
        for m in TOK.finditer(line):
            tok = m.group(0)
            before = line[:m.start()]
            after = line[m.end():]
            # receiver?
            recv = None
            mb = MEMBER_OF.search(before)
            if mb:
                # walk back over identifier/paren chain
                j = mb.start() - 1
                while j >= 0 and (line[j].isalnum() or line[j] in "_)]>.*&" or line[j] == " "):
                    j -= 1
                recv = before[j + 1:mb.start()].strip()
            kind = "use-bare"
            if mb:
                kind = "use-member"
            decl = DECL.match(before) and re.match(r"\s*(?:\[[^\]]*\])?\s*;", after)
            if decl:
                kind = "decl-local" if stack and stack[-1][0] == "fn" else "decl-member"
            cls = next((s[1] for s in reversed(stack) if s[0] == "cls"), "")
            fn = next((s[1] for s in reversed(stack) if s[0] == "fn"), "")
            sites.append({
                "file": rel, "line": ln, "tok": tok, "kind": kind,
                "recv": recv, "cls": cls, "fn": fn,
                "code": raw[ln - 1].strip()[:220],
            })
        # scope tracking on this line (after site capture)
        s = line.strip()
        # opens
        mo = CLASS_OPEN.search(s)
        if mo and "{" in line:
            stack.append(("cls", mo.group(2), depth)); depth += line.count("{") - line.count("}")
            continue
        if NS_OPEN.search(s) and "{" in line:
            stack.append(("ns", "", depth)); depth += line.count("{") - line.count("}")
            continue
        if "{" in line:
            fo = FN_OPEN.search(s.split("{")[0])
            if fo and "(" in s and not s.startswith(("if", "for", "while", "switch", "else")):
                nm = fo.group(1).strip().replace(" ", "")
                stack.append(("fn", nm, depth))
                depth += line.count("{") - line.count("}")
                continue
        depth += line.count("{") - line.count("}")
        while stack and depth <= stack[-1][2]:
            stack.pop()
    return sites

def main():
    os.makedirs(OUT, exist_ok=True)
    all_sites = []
    for dp, dns, fns in os.walk(SRC):
        rel_dir = os.path.relpath(dp, SRC)
        top = rel_dir.split(os.sep)[0]
        if top in SKIP_TOP:
            continue
        for fn in fns:
            if not fn.lower().endswith((".hpp", ".cpp", ".h", ".inl")):
                continue
            p = os.path.join(dp, fn)
            rel = os.path.relpath(p, SRC)
            all_sites.extend(analyze_file(p, rel))
    json.dump(all_sites, open(os.path.join(OUT, "x78_inventory.json"), "w", encoding="utf-8"),
              ensure_ascii=False, indent=1)
    # entities
    ent = collections.defaultdict(lambda: {"count": 0, "kinds": collections.Counter(),
                                           "files": collections.Counter(), "lines": []})
    for s in all_sites:
        owner = (s["cls"] or ("<fn:%s>" % s["fn"] if s["fn"] else "<global>"))
        key = "%s :: %s" % (owner, s["tok"])
        e = ent[key]
        e["count"] += 1
        e["kinds"][s["kind"]] += 1
        e["files"][s["file"]] += 1
        if len(e["lines"]) < 6:
            e["lines"].append("%s:%d" % (s["file"], s["line"]))
    out_ent = {}
    for k, v in sorted(ent.items(), key=lambda kv: -kv[1]["count"]):
        out_ent[k] = {"count": v["count"], "kinds": dict(v["kinds"]),
                      "files": dict(v["files"]), "sample": v["lines"]}
    json.dump(out_ent, open(os.path.join(OUT, "x78_entities.json"), "w", encoding="utf-8"),
              ensure_ascii=False, indent=1)
    kinds = collections.Counter(s["kind"] for s in all_sites)
    toks = collections.Counter(s["tok"] for s in all_sites)
    files = collections.Counter(s["file"] for s in all_sites)
    rep = []
    rep.append("TOTAL SITES: %d  (files: %d, distinct tokens: %d, entities: %d)" %
               (len(all_sites), len(files), len(toks), len(out_ent)))
    rep.append("KINDS: " + json.dumps(dict(kinds)))
    rep.append("TOKENS(top40): " + json.dumps(dict(toks.most_common(40))))
    rep.append("FILES(top25): " + json.dumps(dict(files.most_common(25))))
    rep.append("")
    rep.append("ENTITIES(top60 by count):")
    for k, v in list(out_ent.items())[:60]:
        rep.append("  %-70s %5d %s" % (k, v["count"], json.dumps(v["kinds"])))
    open(os.path.join(OUT, "x78_summary.txt"), "w", encoding="utf-8").write("\n".join(rep))
    print("\n".join(rep[:6]))

if __name__ == "__main__":
    main()
