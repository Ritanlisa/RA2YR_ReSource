import json, re, sys
ROOT = r'D:\RA2YR_ReSource'
body = json.load(open(rf'{ROOT}\.omo\agents\s3b\bodies.json', encoding='utf-8'))
rx = re.compile(r'^\s*(fld|fstp|fild|fistp|fmul|fadd|fsub|fdiv|fcomp|fchs|fxch|fstsw|jmp|jnz|jz|push|pop|mov|lea|test|cmp|sub|add|xor|and|or|shl|shr|sar|inc|dec|retn|nop|nucom|fldz|fld1)\b', re.M)
n=0
for a,b in body.items():
    m = rx.search(b)
    if not m: continue
    ln = b[:m.start()].count('\n')
    L=b.split('\n')
    print('#'*80); print(a)
    for i in range(max(0,ln-6), min(len(L), ln+6)):
        print(('>>' if i==ln else '  ')+L[i][:150])
    n+=1
    if n>=3: break
