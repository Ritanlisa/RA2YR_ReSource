import json
d = json.load(open('injectFunctionTest/functions.json', 'r'))
translated = sum(1 for f in d['functions'] if f['hook'].get('translated'))
named = sum(1 for f in d['functions'] if f['hook'].get('named'))
print(f"Total functions: {len(d['functions'])}")
print(f"Translated: {translated}")
print(f"Named: {named}")
