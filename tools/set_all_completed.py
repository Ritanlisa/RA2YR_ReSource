#!/usr/bin/env python3
"""Set hook.completed=true for ALL functions in functions.json.

User redefined completed: symbol defined (name exists in IDA/functions.json/hpp).
All 19,133 functions satisfy this, so all → completed=true.
Keeps hook.translated unchanged.
"""

import json
import sys
from pathlib import Path

FUNCTIONS_JSON = Path(__file__).parent.parent / "injectFunctionTest" / "functions.json"

def main():
    with open(FUNCTIONS_JSON, 'r', encoding='utf-8') as f:
        data = json.load(f)
    
    functions = data['functions']
    total = len(functions)
    
    # Count BEFORE
    before_true = sum(1 for fn in functions if fn['hook'].get('completed'))
    before_false = sum(1 for fn in functions if not fn['hook'].get('completed'))
    before_translated = sum(1 for fn in functions if fn['hook'].get('translated'))
    
    print(f"=== BEFORE ===")
    print(f"Total functions: {total}")
    print(f"completed=true:  {before_true}")
    print(f"completed=false: {before_false}")
    print(f"translated=true: {before_translated}")
    
    # Set ALL completed=true
    changed = 0
    for fn in functions:
        if not fn['hook']['completed']:
            fn['hook']['completed'] = True
            changed += 1
    
    # Count AFTER
    after_true = sum(1 for fn in functions if fn['hook'].get('completed'))
    after_false = sum(1 for fn in functions if not fn['hook'].get('completed'))
    after_translated = sum(1 for fn in functions if fn['hook'].get('translated'))
    
    print(f"\n=== AFTER ===")
    print(f"completed=true:  {after_true}")
    print(f"completed=false: {after_false}")
    print(f"translated=true: {after_translated}")
    print(f"\nChanged: {changed} functions")
    
    # Verify translated unchanged
    assert after_translated == before_translated, f"translated changed! {before_translated} -> {after_translated}"
    assert after_true == total, f"Not all completed! {after_true}/{total}"
    assert after_false == 0, f"Still {after_false} false!"
    
    # Update metadata
    data['metadata']['last_updated'] = "all-completed-20260620"
    
    # Write back
    with open(FUNCTIONS_JSON, 'w', encoding='utf-8') as f:
        json.dump(data, f, indent=2, ensure_ascii=False)
    
    print(f"\nWrote {FUNCTIONS_JSON}")
    print("SUCCESS: All functions completed=true, translated unchanged.")

if __name__ == '__main__':
    main()
