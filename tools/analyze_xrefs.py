"""
analyze_xrefs.py — Analyze IDA xrefs for global variables to classify usage patterns
                   and determine observed types.

Usage:
    python tools/analyze_xrefs.py                          # full batch
    python tools/analyze_xrefs.py --batch 1                # batch 1 (globals 1-100)
    python tools/analyze_xrefs.py --batch 2                # batch 2 (globals 101-200)
    python tools/analyze_xrefs.py --addrs 0x008871e0,0x00a8ed84  # specific globals

Input:
    tools/top200_globals.json  — {name, addr, ref_count, reads, writes, confidence_from_type_db}

Output:
    tools/xref_analysis_batch{N}.json  — [{name, addr, usage_class, observed_type, xref_count, sample_xrefs}]

Requirements:
    - IDA Pro running with MCP server (127.0.0.1:13337)
    - ida-pro-mcp tool available
"""

import json
import os
import sys
import argparse
import tempfile
import time

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_ROOT = os.path.dirname(SCRIPT_DIR)
INPUT_PATH = os.path.join(SCRIPT_DIR, "top200_globals.json")
EVIDENCE_DIR = os.path.join(PROJECT_ROOT, ".omo", "evidence")

BATCH_SIZE = 100
MAX_XREFS_PER_GLOBAL = 25
MAX_INSN_CONTEXT = 5  # instructions to check after the reference

# --- Classification helpers (also used inside IDA) ---

INT_CMP_MNEMONICS = {'cmp', 'test', 'sub', 'add', 'inc', 'dec', 'shl', 'shr', 'sar', 'and', 'or', 'xor', 'imul', 'idiv', 'cdq'}
FLOAT_MNEMONICS = {'fld', 'fstp', 'fcomp', 'fadd', 'fsub', 'fmul', 'fdiv', 'fild', 'fistp', 'fist', 'fchs', 'fabs', 'fxch', 'fcom', 'fcompp', 'fnstsw'}
JUMP_MNEMONICS = {'jz', 'jnz', 'je', 'jne', 'jg', 'jge', 'jl', 'jle', 'ja', 'jae', 'jb', 'jbe', 'jmp', 'jns', 'js', 'jnp', 'jp', 'jnb'}
CALL_MNEMONICS = {'call'}

# Classification logic (mirrors what IDA-side script will use)
def classify_xref_site(mnemonic: str, next_mnemonics: list[str]) -> list[str]:
    """Classify a single xref site based on instruction and context."""
    classes = []
    
    # Check next instructions for comparison patterns
    has_cmp = False
    has_jump = False
    has_float = False
    has_call = False
    
    for nm in next_mnemonics[:MAX_INSN_CONTEXT]:
        if nm in INT_CMP_MNEMONICS:
            has_cmp = True
        if nm in FLOAT_MNEMONICS:
            has_float = True
        if nm in JUMP_MNEMONICS:
            has_jump = True
        if nm in CALL_MNEMONICS:
            has_call = True
    
    # Float ops are most specific
    if has_float:
        classes.append('float_op')
        if mnemonic in FLOAT_MNEMONICS:
            classes.append('float_direct')
        return classes
    
    # Int comparison patterns
    if has_cmp:
        classes.append('int_cmp')
    
    # Boolean pattern: compare then conditional jump
    if has_cmp and has_jump:
        classes.append('bool_flag')
    
    # Function pointer pattern: load then call
    if has_call and not has_cmp:
        classes.append('func_ptr')
    
    # Array base: LEA instruction
    if mnemonic == 'lea':
        classes.append('array_base')
    
    # Pointer dereference: loaded then used as memory operand
    if mnemonic in ('mov', 'push') and not has_cmp and not has_call:
        classes.append('ptr_deref')
    elif mnemonic in ('mov', 'push') and has_cmp:
        classes.append('ptr_deref')
    elif not classes:
        classes.append('ptr_deref' if mnemonic in ('mov', 'push') else 'unknown')
    
    # String pointer: push of global address
    if mnemonic == 'push':
        classes.append('string_ptr')
    
    return classes


def determine_observed_type(usage_counts: dict) -> str:
    """Determine the most likely type from usage classification counts."""
    if not usage_counts:
        return None
    
    # Priority: float > bool > int > pointer > array > string > func_ptr
    total = sum(usage_counts.values())
    if total == 0:
        return None
    
    # Bool_flag dominant → bool or int
    bool_pct = usage_counts.get('bool_flag', 0) / total
    float_pct = usage_counts.get('float_op', 0) / total
    ptr_pct = usage_counts.get('ptr_deref', 0) / total
    int_pct = usage_counts.get('int_cmp', 0) / total
    array_pct = usage_counts.get('array_base', 0) / total
    string_pct = usage_counts.get('string_ptr', 0) / total
    func_pct = usage_counts.get('func_ptr', 0) / total
    
    # Float dominant
    if float_pct >= 0.3:
        return 'float'
    
    # Boolean: high bool_flag ratio
    if bool_pct >= 0.4:
        return 'bool'
    
    # Array base dominant
    if array_pct >= 0.2:
        return 'array'
    
    # String pointer dominant
    if string_pct >= 0.3:
        return 'const char*'
    
    # Function pointer dominant
    if func_pct >= 0.3:
        return 'function pointer'
    
    # Int dominant (lots of cmp/test usage, not purely bool)
    if int_pct >= 0.3 and bool_pct < 0.3:
        return 'int'
    
    # Mixed bool+int → int
    if bool_pct >= 0.2 and int_pct >= 0.2:
        return 'int'
    
    # Pure pointer deref → class/struct pointer
    if ptr_pct >= 0.5:
        return 'pointer'
    
    # Default
    return 'int'


def format_usage_class(usage_counts: dict) -> str:
    """Format usage_class string from counts."""
    if not usage_counts:
        return "unknown"
    sorted_items = sorted(usage_counts.items(), key=lambda x: -x[1])
    return '+'.join(f"{k}:{v}" for k, v in sorted_items[:3])


# --- IDA-side analysis script (to be executed via py_exec_file) ---

IDA_SCRIPT_TEMPLATE = '''
"""
IDA-side xref analysis script.
Reads globals from a JSON file, analyzes xrefs, writes results back.
"""
import json
import sys
import os

try:
    import idautils
    import idc
    import ida_ua
    import ida_bytes
    import ida_funcs
except ImportError:
    print("ERROR: Not running inside IDA")
    sys.exit(1)

INPUT_FILE = r"__INPUT_FILE__"
OUTPUT_FILE = r"__OUTPUT_FILE__"
MAX_XREFS = __MAX_XREFS__
MAX_INSNS = __MAX_INSNS__

INT_CMP_MNEMONICS = {'cmp', 'test', 'sub', 'add', 'inc', 'dec', 'shl', 'shr', 'sar', 'and', 'or', 'xor', 'imul', 'idiv', 'cdq'}
FLOAT_MNEMONICS = {'fld', 'fstp', 'fcomp', 'fadd', 'fsub', 'fmul', 'fdiv', 'fild', 'fistp', 'fist', 'fchs', 'fabs', 'fxch', 'fcom', 'fcompp', 'fnstsw'}
JUMP_MNEMONICS = {'jz', 'jnz', 'je', 'jne', 'jg', 'jge', 'jl', 'jle', 'ja', 'jae', 'jb', 'jbe', 'jmp', 'jns', 'js', 'jnp', 'jp', 'jnb'}
CALL_MNEMONICS = {'call'}

def classify_one_xref(xref_addr):
    """Classify a single xref site based on instruction + operand context."""
    mnem = idc.print_insn_mnem(xref_addr)
    if not mnem:
        return [], [], "", ""
    
    # Get operand string for deref detection
    op_str = idc.print_operand(xref_addr, 0) or ""
    
    # Get next N instructions (mnemonic + first operand) for context
    next_info = []
    next_addr = idc.next_head(xref_addr)
    for _ in range(MAX_INSNS):
        if next_addr == idc.BADADDR:
            break
        nm = idc.print_insn_mnem(next_addr)
        no = idc.print_operand(next_addr, 0) or ""
        if nm:
            next_info.append((nm, no))
        next_addr = idc.next_head(next_addr)
    
    next_mnems = [n[0] for n in next_info]
    
    # Classification
    classes = []
    has_cmp = False
    has_jump = False
    has_float = False
    has_call = False
    has_deref = False
    
    for nm, no in next_info:
        if nm in INT_CMP_MNEMONICS:
            has_cmp = True
        if nm in FLOAT_MNEMONICS:
            has_float = True
        if nm in JUMP_MNEMONICS:
            has_jump = True
        if nm in CALL_MNEMONICS:
            has_call = True
        # Check for pointer dereference: next instruction reads from [general_reg+offset]
        # NOT lea (address calc), NOT store-to-stack (mov [ebp/esp], reg)
        # Only actual memory reads through the loaded register
        if '[' in no and '+' in no:
            deref_regs = ['eax', 'ecx', 'edx', 'ebx', 'esi', 'edi']
            if any(f'[{r}' in no.lower() or f'[{r}+' in no.lower() for r in deref_regs):
                # Exclude lea (address calculation) and store patterns (destination is memory)
                if nm != 'lea' and not ('[ebp' in no.lower() or '[esp' in no.lower()):
                    has_deref = True
    
    # Float ops are most specific - classify and return
    if has_float:
        classes.append('float_op')
        return classes, next_mnems, mnem, idc.get_func_name(xref_addr)
    
    # LEA → array/struct base
    if mnem == 'lea':
        classes.append('array_base')
        return classes, next_mnems, mnem, idc.get_func_name(xref_addr)
    
    # Function pointer: loaded then called indirectly (call reg pattern)
    # Only if the global value is used as the call target, not just passed as arg
    if mnem == 'call' and '+' not in op_str.lower():
        classes.append('func_ptr')
    elif has_call and not has_cmp and not has_deref:
        # check if one of the next instructions is an indirect call (call reg or call [reg])
        indirect_call = False
        for nm, no in next_info[:3]:
            if nm == 'call':
                # call [reg] or call reg (no '+' in operand = indirect)
                if '[' not in no.lower() or 'ebp' not in no.lower():
                    indirect_call = True
                    break
        if indirect_call:
            classes.append('func_ptr')
    
    # Int comparison patterns
    if has_cmp:
        classes.append('int_cmp')
    
    # Boolean flag: compare then conditional jump (high confidence bool)
    if has_cmp and has_jump:
        classes.append('bool_flag')
    
    # Pointer dereference: loaded value used as pointer in next instruction
    # Only add ptr_deref if the value is actually dereferenced (not just compared/passed)
    if has_deref:
        classes.append('ptr_deref')
    
    # String pointer hint
    if mnem == 'push':
        classes.append('string_ptr')
    
    if not classes:
        classes.append('unknown')
    
    func_name = idc.get_func_name(xref_addr)
    return classes, next_mnems, mnem, func_name

def determine_observed_type(usage_counts, name=""):
    """Determine observed type from usage counts.
    
    Key heuristic: real booleans have HIGH bool_flag + LOW ptr_deref (no dereferencing).
    Pointers have HIGH ptr_deref + moderate int_cmp (from null checks).
    """
    if not usage_counts:
        return None
    total = sum(usage_counts.values())
    if total == 0:
        return None
    
    bool_cnt = usage_counts.get('bool_flag', 0)
    float_cnt = usage_counts.get('float_op', 0)
    ptr_cnt = usage_counts.get('ptr_deref', 0)
    int_cnt = usage_counts.get('int_cmp', 0)
    array_cnt = usage_counts.get('array_base', 0)
    string_cnt = usage_counts.get('string_ptr', 0)
    func_cnt = usage_counts.get('func_ptr', 0)
    
    bool_pct = bool_cnt / total
    float_pct = float_cnt / total
    ptr_pct = ptr_cnt / total
    int_pct = int_cnt / total
    array_pct = array_cnt / total
    string_pct = string_cnt / total
    func_pct = func_cnt / total
    
    # Naming hints
    name_lower = name.lower()
    is_instance = '_instance' in name_lower or name_lower.endswith('_player')
    is_bool_name = any(kw in name_lower for kw in ['iknow', 'flag', 'ready', 'done', 'active', 'enabled', 'visible'])
    
    # 1. Float dominant → float (only if low pointer deref — pointer with float members still pointer)
    if float_pct >= 0.25 and ptr_cnt < 4 and not is_instance:
        return 'float'
    
    # 2. Array base dominant → array (usually LEA patterns)
    if array_pct >= 0.15:
        return 'array'
    
    # 3. String pointer dominant → const char*
    if string_pct >= 0.25:
        return 'const char*'
    
    # 4. Function pointer (call indirect, low deref context)
    if func_pct >= 0.12 and ptr_pct < 0.2 and not is_instance:
        return 'function pointer'
    
    # 5. Boolean: bool_flag is the most common pattern, low deref (booleans aren't dereferenced)
    # Also check naming: Count/Size/Index/etc are ints, not bools
    is_int_name = any(kw in name_lower for kw in ['count', 'size', 'index', 'width', 'height', 'length', 'offset', 'bitshift', 'bitmask', 'bit', 'frame', 'number', 'num_', 'array', 'cell'])
    if is_int_name:
        pass  # skip bool, go to int
    else:
        max_cnt = max(bool_cnt, float_cnt, ptr_cnt, int_cnt, array_cnt, string_cnt, func_cnt)
        if bool_cnt >= 5 and bool_cnt >= max_cnt * 0.5 and ptr_pct < 0.1:
            return 'bool'
        if is_bool_name and bool_cnt >= 3 and ptr_cnt < 3:
            return 'bool'

    # 6. Pointer: significant dereference OR pointer-like naming
    if ptr_cnt >= 4 and ptr_pct >= 0.12:
        return 'pointer'
    if is_instance:
        return 'pointer'
    if ptr_pct >= 0.25:
        return 'pointer'

    # 7. Int: comparison-heavy, low deref
    if int_pct >= 0.15:
        return 'int'

    # 8. Fallback
    if ptr_pct >= 0.3:
        return 'pointer'
    return 'int'

# Load input
with open(INPUT_FILE, 'r', encoding='utf-8') as f:
    globals_list = json.load(f)

results = []
for entry in globals_list:
    name = entry['name']
    addr_str = entry['addr']
    addr = int(addr_str, 16)
    
    # Get xrefs
    xrefs = []
    try:
        xrefs = list(idautils.XrefsTo(addr))
    except Exception as e:
        pass
    
    if not xrefs:
        results.append({
            'name': name,
            'addr': addr_str,
            'usage_class': 'no_xrefs',
            'observed_type': None,
            'xref_count': 0,
            'sample_xrefs': []
        })
        continue
    
    # Sample xrefs (spread across the list for diversity)
    total_xrefs = len(xrefs)
    if total_xrefs <= MAX_XREFS:
        sample_indices = list(range(total_xrefs))
    else:
        step = max(1, total_xrefs // MAX_XREFS)
        sample_indices = list(range(0, total_xrefs, step))[:MAX_XREFS]
    
    # Classify each sampled xref
    usage_counts = {}
    sample_xrefs = []
    
    for idx in sample_indices:
        xref = xrefs[idx]
        classes, next_mnems, mnem, func_name = classify_one_xref(xref.frm)
        
        for c in classes:
            usage_counts[c] = usage_counts.get(c, 0) + 1
        
        if len(sample_xrefs) < 5:
            sample_xrefs.append({
                'addr': f'{xref.frm:#010x}',
                'mnem': mnem,
                'class': classes,
                'func': func_name,
            })
    
    # Determine usage_class string and observed_type
    sorted_usage = sorted(usage_counts.items(), key=lambda x: -x[1])
    usage_class = '+'.join(f'{k}:{v}' for k, v in sorted_usage[:3]) if sorted_usage else 'unknown'
    observed_type = determine_observed_type(usage_counts, name)
    
    results.append({
        'name': name,
        'addr': addr_str,
        'usage_class': usage_class,
        'observed_type': observed_type,
        'xref_count': total_xrefs,
        'sample_xrefs': sample_xrefs
    })

# Write output
with open(OUTPUT_FILE, 'w', encoding='utf-8') as f:
    json.dump(results, f, indent=2)

print(f"OK: Analyzed {len(results)} globals, output to {OUTPUT_FILE}")
print(f"  with observed_type: {sum(1 for r in results if r['observed_type'])}")
print(f"  with xrefs: {sum(1 for r in results if r['xref_count'] > 0)}")
'''

# --- Main orchestrator ---

def run_ida_analysis(globals_batch: list[dict], output_path: str) -> list[dict]:
    """Execute IDA-side analysis via py_exec_file."""
    # Write globals batch to temp JSON for IDA to read
    fd, temp_input = tempfile.mkstemp(suffix='.json', prefix='xref_input_')
    os.close(fd)
    
    with open(temp_input, 'w', encoding='utf-8') as f:
        json.dump(globals_batch, f)
    
    # Generate IDA script with simple placeholder replacement
    # Use forward slashes for Windows compatibility in IDA Python
    ida_script = IDA_SCRIPT_TEMPLATE.replace('__INPUT_FILE__', temp_input.replace('\\', '/'))
    ida_script = ida_script.replace('__OUTPUT_FILE__', output_path.replace('\\', '/'))
    ida_script = ida_script.replace('__MAX_XREFS__', str(MAX_XREFS_PER_GLOBAL))
    ida_script = ida_script.replace('__MAX_INSNS__', str(MAX_INSN_CONTEXT))
    
    fd2, temp_script = tempfile.mkstemp(suffix='.py', prefix='xref_ida_')
    os.close(fd2)
    
    with open(temp_script, 'w', encoding='utf-8') as f:
        f.write(ida_script)
    
    print(f"Executing IDA analysis script: {temp_script}")
    print(f"Input: {len(globals_batch)} globals")
    print(f"Output: {output_path}")
    
    # This function will be called with IDA MCP from the orchestrator
    # The actual py_exec_file call is done by the caller
    return temp_script, temp_input


def analyze_batch(batch_num: int = 1, output_path: str = None):
    """Analyze a batch of 100 globals."""
    with open(INPUT_PATH, 'r', encoding='utf-8') as f:
        all_globals = json.load(f)
    
    start_idx = (batch_num - 1) * BATCH_SIZE
    end_idx = start_idx + BATCH_SIZE
    batch = all_globals[start_idx:end_idx]
    
    if not batch:
        print(f"ERROR: No globals found for batch {batch_num}")
        return None
    
    if output_path is None:
        output_path = os.path.join(SCRIPT_DIR, f"xref_analysis_batch{batch_num}.json")
    
    print(f"Batch {batch_num}: {len(batch)} globals (indices {start_idx}-{end_idx-1})")
    return batch, output_path


def analyze_specific(addrs: list[str], output_path: str = None):
    """Analyze specific global addresses."""
    with open(INPUT_PATH, 'r', encoding='utf-8') as f:
        all_globals = json.load(f)
    
    addr_set = {a.lower() for a in addrs}
    batch = [g for g in all_globals if g['addr'].lower() in addr_set]
    
    if not batch:
        print(f"ERROR: No globals found for addresses {addrs}")
        return None
    
    if output_path is None:
        output_path = os.path.join(SCRIPT_DIR, "xref_analysis_custom.json")
    
    print(f"Custom: {len(batch)} globals")
    return batch, output_path


def main():
    parser = argparse.ArgumentParser(description='Analyze IDA xrefs for global variables')
    parser.add_argument('--batch', type=int, default=1, help='Batch number (1-based, 100 globals each)')
    parser.add_argument('--addrs', type=str, help='Comma-separated addresses')
    parser.add_argument('--output', type=str, help='Output path (default: tools/xref_analysis_batchN.json)')
    parser.add_argument('--ida-script-only', action='store_true', help='Only generate IDA script, do not execute')
    args = parser.parse_args()
    
    if args.addrs:
        result = analyze_specific(args.addrs.split(','), args.output)
    else:
        result = analyze_batch(args.batch, args.output)
    
    if result is None:
        return 1
    
    batch, output_path = result
    
    # Generate IDA script and temp input
    temp_script, temp_input = run_ida_analysis(batch, output_path)
    
    if args.ida_script_only:
        print(f"\nIDA script saved to: {temp_script}")
        print(f"Temp input saved to: {temp_input}")
        print(f"\nRun in IDA: idc.Exec(open('{temp_script}').read())")
        return 0
    
    # Print instructions for the orchestrator
    print(f"\n{'='*60}")
    print(f"Ready for IDA execution.")
    print(f"  Script: {temp_script}")
    print(f"  Output: {output_path}")
    print(f"  Globals: {len(batch)}")
    print(f"\nExecute in orchestrator:")
    print(f"  ida-pro-mcp py_exec_file file_path='{temp_script}'")
    print(f"{'='*60}")
    
    return 0


if __name__ == '__main__':
    sys.exit(main())
