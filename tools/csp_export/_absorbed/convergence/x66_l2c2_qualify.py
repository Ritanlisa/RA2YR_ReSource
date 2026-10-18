#!/usr/bin/env python3
"""X66 L2-C2 — namespace qualification for the command-class supply.
The e4 command headers declare in `namespace gamemd`; init_game.cpp uses the
names unqualified at global scope. Qualify token uses (decls, casts, qualified
calls) for the 5 supplied classes. Word-boundary; only init_game.cpp.
"""
import re, os, sys, json

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, '..', '..', '..', '..'))
APPLY = '--apply' in sys.argv

F = os.path.join(ROOT, r'src\core\init_game.cpp')
NAMES = ['CreateTeamCommand', 'SelectTeamCommand', 'AddTeamCommand',
         'CenterTeamCommand', 'TauntCommandClass']
# ScreenCaptureCommandClass etc. are NOT supplied -> untouched.

txt = open(F, encoding='utf-8', errors='replace').read()
lines = txt.split('\n')
ledger = []
n = 0
for i, ln in enumerate(lines):
    code = re.sub(r'//.*$', '', ln)
    new_ln = ln
    for nm in NAMES:
        # qualify bare uses: at token start NOT preceded by `gamemd::` or `::`
        new_ln = re.sub(r'(?<![\w:])\b%s\b(?!:)' % nm, 'gamemd::%s' % nm, new_ln)
    # fix double-qualification just created on `gamemd::X::Construct` forms is
    # unnecessary: (?<![\w:]) prevents qualifying the name inside `gamemd::X`.
    if new_ln != ln:
        ledger.append({'line': i + 1, 'before': ln.rstrip(), 'after': new_ln.rstrip()})
        lines[i] = new_ln
        n += 1
print('qualified lines:', n)
for e in ledger[:10]:
    print('  L%s: %s' % (e['line'], e['after'].strip()[:110]))
json.dump({'ledger': ledger}, open(os.path.join(HERE, 'x66_l2c2_ledger.json'), 'w'), indent=1)
if APPLY:
    open(F, 'w', encoding='utf-8', errors='replace', newline='').write('\n'.join(lines))
    print('APPLIED')
else:
    print('DRY RUN (use --apply)')
