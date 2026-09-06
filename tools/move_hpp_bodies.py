#!/usr/bin/env python3
"""move_hpp_bodies.py — 机械化迁移 .hpp 中的函数体到 .cpp/.inl（hpp-impl 门控清零）。

规则（AGENTS.md hpp-impl 门控对齐）:
  - 普通成员/自由函数  → <stem>_bodies.cpp；hpp 留声明（默认实参留在声明侧）
  - 模板上下文/constexpr → <stem>_bodies.inl（hpp 末尾 #include；模板走 .inl 是
    AGENTS.md 明文许可，constexpr 必须留在头文件编译期可用，同路线）
  - `= default` 析构    → 声明 `;` + cpp `X::~X() = default;`
  - `= delete`          → 不动（无函数体，门控豁免）

转换为 AST offset 精确的文本等价移动：声明头 + 限定名 + 原始 body。
用法: python tools/move_hpp_bodies.py [--dry-run] [--file substr ...]
"""
import argparse
import glob
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import clang.cindex as ci  # noqa: E402
from clang_ast_checker import ClangChecker  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FUNC_KINDS = (ci.CursorKind.FUNCTION_DECL, ci.CursorKind.CXX_METHOD,
              ci.CursorKind.CONSTRUCTOR, ci.CursorKind.DESTRUCTOR,
              ci.CursorKind.CONVERSION_FUNCTION)
_COMMENT_TAIL = re.compile(r'//.*$')


def collect_flagged(hpp_path):
    ck = ClangChecker(hpp_path)
    ck.parse()
    out = []

    def walk(node):
        if node.kind in FUNC_KINDS and node.is_definition() and \
                node.location.file and \
                os.path.samefile(node.location.file.name, hpp_path):
            out.append(node)
        for ch in node.get_children():
            walk(ch)

    walk(ck.tu.cursor)
    return out


def path_chain(node):
    chain = []
    p = node.semantic_parent
    while p is not None and p.kind != ci.CursorKind.TRANSLATION_UNIT:
        chain.append((p.kind, p.spelling or ""))
        p = p.semantic_parent
    return chain


def is_template_ctx(node):
    return any(kind in (ci.CursorKind.CLASS_TEMPLATE,
                        ci.CursorKind.FUNCTION_TEMPLATE)
               for kind, _ in path_chain(node))


def class_chain(node):
    return [nm for kind, nm in path_chain(node)
            if kind in (ci.CursorKind.CLASS_DECL, ci.CursorKind.STRUCT_DECL,
                        ci.CursorKind.CLASS_TEMPLATE)]


def namespace_chain(node):
    return [nm for kind, nm in reversed(path_chain(node))
            if kind == ci.CursorKind.NAMESPACE]


def find_body_span(toks):
    """首个顶层 `{` 到配对 `}`；无 brace（= default/= delete）→ (None, 末 token)。

    注意: defaulted 函数的 cursor token 流不含结尾 `;`（libclang 行为），
    无分号时回退到末 token。"""
    depth = 0
    i_brace = -1
    for i, (_, _, sp) in enumerate(toks):
        if sp == '{':
            if depth == 0 and i_brace < 0:
                i_brace = i
            depth += 1
        elif sp == '}':
            depth -= 1
            if depth == 0 and i_brace >= 0:
                return i_brace, i
        elif sp == ';' and i_brace < 0 and depth == 0:
            return None, i
    if i_brace >= 0:
        return i_brace, len(toks) - 1
    if toks:
        return None, len(toks) - 1
    return None, None


def split_trailing_comment(text):
    lines = text.split('\n')
    m = _COMMENT_TAIL.search(lines[-1])
    if m:
        lines[-1] = lines[-1][:m.start()].rstrip()
        return '\n'.join(lines).rstrip(), m.group(0)
    return text.rstrip(), None


def append_semicolon(text):
    """声明文本 + `;`；尾行含 // 注释时分号插到注释之前（否则被注释吞掉）。"""
    lines = text.split('\n')
    m = _COMMENT_TAIL.search(lines[-1])
    if m:
        lines[-1] = lines[-1][:m.start()].rstrip() + ';' + ' ' + m.group(0)
        return '\n'.join(lines)
    return text.rstrip() + ';'


def strip_default_args(param_text):
    """定义侧参数表去掉默认实参（`= expr`），深度感知，保留类型名。"""
    out, depth, i, n = [], 0, 0, len(param_text)
    while i < n:
        ch = param_text[i]
        if ch in '(<[':
            depth += 1
        elif ch in ')>]':
            depth -= 1
        elif ch == '=' and depth == 0:
            # 跳到本层逗号或结尾
            j = i
            d2 = 0
            while j < n:
                c2 = param_text[j]
                if c2 in '(<[':
                    d2 += 1
                elif c2 in ')>]':
                    d2 -= 1
                elif c2 == ',' and d2 == 0:
                    break
                j += 1
            i = j
            continue
        out.append(ch)
        i += 1
    return re.sub(r',\s*,', ',', ''.join(out)).rstrip().rstrip(',').rstrip()


def rebuild_defhead(head_code, fname, qual, is_ctor_or_dtor):
    """声明头 → out-of-line 定义头: 去说明符、去默认实参、插限定名。"""
    # 1) 定位参数表（函数名后的首个顶层 `(` ... 配对 `)`）
    pat = re.compile(r'\b' + re.escape(fname) + r'\s*\(')
    ms = list(pat.finditer(head_code))
    if not ms:
        # 运算符形（spelling 如 operator==）
        alt = re.compile(re.escape(fname) + r'\s*\(')
        ms = list(alt.finditer(head_code))
    if not ms:
        raise RuntimeError(f'name {fname!r} not in head: {head_code!r}')
    nm = ms[-1] if is_ctor_or_dtor else ms[0]
    p_open = head_code.index('(', nm.end() - 1)
    depth = 0
    p_close = p_open
    for i in range(p_open, len(head_code)):
        if head_code[i] == '(':
            depth += 1
        elif head_code[i] == ')':
            depth -= 1
            if depth == 0:
                p_close = i
                break
    params = head_code[p_open + 1:p_close]
    params_def = strip_default_args(params)
    # 2) 去尾限定符后的说明符（保留 const/noexcept/调用约定）
    tail = head_code[p_close + 1:]
    for sp in ('override', 'final', 'virtual', 'static', 'explicit', 'inline'):
        tail = re.sub(r'(?<![\w:])\b' + sp + r'\b\s*', '', tail)
    ret_part = head_code[:nm.start()].rstrip()
    for sp in ('virtual', 'static', 'explicit', 'inline'):
        ret_part = re.sub(r'(?<![\w:])\b' + sp + r'\b\s*', '', ret_part)
    ret_part = ret_part.strip()
    # 3) 拼装
    name_part = head_code[nm.start():p_open].rstrip()
    if qual:
        # 类名最后一项替换为 Foo<T>:: 仅由调用方做（模板）; 此处普通限定
        name_part = qual + '::' + name_part
    defhead = ' '.join(x for x in (ret_part, name_part) if x)
    defhead += '(' + params_def + ')'
    tail_clean = re.sub(r'\s+', ' ', tail.replace(';', '')).strip()
    if tail_clean:
        defhead += ' ' + tail_clean
    return defhead


def find_template_prefix(src, node):
    off = node.extent.start.offset
    window = src[max(0, off - 500):off]
    ms = list(re.finditer(r'template\s*<', window))
    if not ms:
        return None
    start = max(0, off - 500) + ms[-1].start()
    depth = 0
    for i in range(start, len(src)):
        if src[i] == '<':
            depth += 1
        elif src[i] == '>':
            depth -= 1
            if depth == 0:
                return src[start:i + 1]
    return None


def process(hpp, dry):
    src = open(hpp, encoding='latin-1', newline='').read()  # 字节保真: token 偏移是字节偏移, CRLF 必须保留
    flagged = collect_flagged(hpp)
    if not flagged:
        return None
    edits = []
    stats = {'cpp': 0, 'inl': 0, 'default': 0}
    for node in flagged:
        toks = [(t.extent.start.offset, t.extent.end.offset, t.spelling)
                for t in node.get_tokens()]
        i_brace, i_end = find_body_span(toks)
        if i_end is None:
            continue
        fname = node.spelling
        # libclang extent 起点不可靠（可能落在名字中间）——用 token 流边界
        head = src[toks[0][0]:
                   toks[i_brace][0] if i_brace is not None else toks[i_end][1]]
        head_code, tail_comment = split_trailing_comment(head)
        # 位置保持的注释剥离副本: init-list 冒号扫描与定义头重建用它
        # （hpp 注释里的 `:` 会误判为初始化列表）
        head_clean = re.sub(r'//[^\n]*',
                            lambda m: ' ' * len(m.group(0)), head_code)
        end_off = toks[-1][1]
        msemi = re.match(r'\s*;', src[end_off:end_off + 4])
        repl_end = end_off + (msemi.end() if msemi else 0)
        body_txt = src[(toks[i_brace][0] if i_brace is not None
                        else toks[i_end][0]):repl_end].rstrip()

        if i_brace is None and re.search(r'=\s*delete\s*$', head_code):
            continue
        is_default = i_brace is None and bool(re.search(r'=\s*default\s*$', head_code))

        qual_cls = class_chain(node)
        nss = namespace_chain(node)
        tpl = is_template_ctx(node)
        is_cx = bool(re.search(r'\bconstexpr\b', head_code))
        is_cd = node.kind in (ci.CursorKind.CONSTRUCTOR, ci.CursorKind.DESTRUCTOR)

        # 构造函数初始化列表（参数表后顶层 `:` 到 head 末尾）: 定义侧专属
        init_list = ''
        p_open = head_clean.find('(')
        depth = 0
        p_close = -1
        for i in range(p_open if p_open >= 0 else 0, len(head_clean)):
            if head_clean[i] == '(':
                depth += 1
            elif head_code[i] == ')':
                depth -= 1
                if depth == 0:
                    p_close = i
                    break
        if p_close >= 0:
            j = p_close + 1
            d2 = 0
            while j < len(head_clean):
                c2 = head_clean[j]
                if c2 in '(<[':
                    d2 += 1
                elif c2 in ')>]':
                    d2 -= 1
                elif c2 == ':' and d2 == 0:
                    if j + 1 < len(head_clean) and head_clean[j + 1] == ':':
                        j += 2
                        continue
                    init_list = head_clean[j:].strip()
                    head_code = head_code[:j].rstrip()
                    break
                j += 1
        if is_default:
            hc = re.sub(r'=\s*default\s*$', '', head_code).rstrip()
            decl_in_hpp = append_semicolon(hc)
        else:
            decl_in_hpp = append_semicolon(head_code)
        # 声明侧去掉 inline: 定义已移至单一 .cpp, inline 承诺（每 TU 有
        # 定义）不再成立。constexpr 走 .inl 路线不受影响。
        decl_in_hpp = re.sub(r'(?<![\w:])inline\s+', '', decl_in_hpp, count=1)
        if tail_comment:
            decl_in_hpp += ' ' + tail_comment

        qual = '::'.join(qual_cls)
        name_for_match = re.sub(r'<[^<>]*>$', '', fname)  # Node<T> -> Node
        # windows.h 宏: GetClassName → AST spelling GetClassNameA/W
        _probe = name_for_match
        if not re.search(re.escape(_probe) + r'\s*\(', head_code):
            if _probe.endswith('A') or _probe.endswith('W'):
                _alt = _probe[:-1]
                if re.search(re.escape(_alt) + r'\s*\(', head_code):
                    name_for_match = _alt
        if node.kind == ci.CursorKind.CONVERSION_FUNCTION:
            # spelling 用规范类型(`operator unsigned int`), 源码可能写
            # `operator target_t` — 从声明头提取实际文本
            mcv = re.search(r'operator\s+[\w:<>,~]+\s*(?=\()', head_code)
            if mcv:
                name_for_match = mcv.group(0).strip()
        hc_for_def = re.sub(r'//[^\n]*',
                            lambda m: ' ' * len(m.group(0)), head_code)
        defhead = rebuild_defhead(hc_for_def, name_for_match, qual, is_cd)
        if init_list:
            defhead = defhead + ' ' + init_list
        # 定义头去内部注释（注释会吞掉单行后续 token）
        if is_default:
            definition = f'{defhead} = default;'
            route = 'cpp'
            stats['default'] += 1
        else:
            definition = f'{defhead} {body_txt.strip()}'
            if tpl or is_cx:
                route = 'inl'
                stats['inl'] += 1
                tp = find_template_prefix(src, node)
                params = re.findall(r'(?:typename|class)\s+(\w+)', tp or '')
                if params and qual:
                    defhead = defhead.replace(
                        qual_cls[-1] + '::',
                        qual_cls[-1] + '<' + ', '.join(params) + '>::', 1)
                    definition = f'{defhead} {body_txt.strip()}'
                if tp:
                    definition = f'{tp}\n{definition}'
            else:
                route = 'cpp'
                stats['cpp'] += 1
        edits.append({'start': node.extent.start.offset, 'end': repl_end,
                      'hpp_text': decl_in_hpp, 'def': definition,
                      'route': route, 'nss': nss})

    rel = os.path.relpath(hpp, ROOT).replace(os.sep, '/')
    if dry:
        print(f'{rel}: {len(edits)} (cpp={stats["cpp"]} inl={stats["inl"]} '
              f'default={stats["default"]})')
        return stats

    new_src = src
    for e in sorted(edits, key=lambda x: -x['start']):
        new_src = new_src[:e['start']] + e['hpp_text'] + new_src[e['end']:]
    open(hpp, 'w', encoding='latin-1', newline='').write(new_src)

    stem = hpp[:-4]
    base = os.path.basename(stem)
    out = {'cpp': 0, 'inl': 0, 'default': 0}
    cpp_edits = [e for e in edits if e['route'] == 'cpp']
    inl_edits = [e for e in edits if e['route'] == 'inl']
    if cpp_edits:
        groups = {}
        for e in cpp_edits:
            groups.setdefault(tuple(e['nss']), []).append(e['def'])
        body = (f'// 自动生成 by tools/move_hpp_bodies.py — 函数体自 {rel} 迁出\n'
                f'// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）\n'
                f'#include "{base}.hpp"\n\n')
        for nss, defs in groups.items():
            body += ''.join(f'namespace {n} {{\n' for n in nss)
            body += '\n\n'.join(defs) + '\n'
            body += '}\n' * len(nss) + '\n'
        open(stem + '_bodies.cpp', 'w', encoding='utf-8', newline='').write(body)
        out['cpp'] = len(cpp_edits)
    if inl_edits:
        groups = {}
        for e in inl_edits:
            groups.setdefault(tuple(e['nss']), []).append(e['def'])
        body = ('// 自动生成 by tools/move_hpp_bodies.py — 模板/constexpr 函数体\n'
                '// 模板走 .inl 为 AGENTS.md 许可路线; constexpr 须留在头文件侧\n\n')
        for nss, defs in groups.items():
            body += ''.join(f'namespace {n} {{\n' for n in nss)
            body += '\n\n'.join(defs) + '\n'
            body += '}\n' * len(nss) + '\n'
        open(stem + '_bodies.inl', 'w', encoding='utf-8', newline='').write(body)
        cur = open(hpp, encoding='latin-1', newline='').read()
        if '_bodies.inl' not in cur:
            open(hpp, 'a', encoding='latin-1', newline='').write(
                '\n// template/constexpr impl (hpp-impl gate: non-hpp ext)\n'
                f'#include "{base}_bodies.inl"\n')
        out['inl'] = len(inl_edits)
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--dry-run', action='store_true')
    ap.add_argument('--file', action='append',
                    help='只处理路径含 substr 的 hpp')
    args = ap.parse_args()
    os.chdir(ROOT)
    hpps = sorted(set(glob.glob('src/**/*.hpp', recursive=True)) |
                set(glob.glob('app/**/*.hpp', recursive=True)))
    if args.file:
        hpps = [f for f in hpps if any(x in f for x in args.file)]
    total = {'cpp': 0, 'inl': 0, 'default': 0}
    for hp in hpps:
        try:
            r = process(hp, args.dry_run)
        except Exception as e:
            print(f'ERROR {hp}: {e}', file=sys.stderr)
            continue
        if r:
            for k in total:
                total[k] += r.get(k, 0)
    print(f"总迁移: cpp={total['cpp']} inl={total['inl']} "
          f"default={total['default']}")


if __name__ == '__main__':
    main()
