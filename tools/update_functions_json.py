"""
Update functions.json: mark menu category functions as completed=true.
"""
import json

with open('injectFunctionTest/functions.json', 'r', encoding='utf-8') as f:
    data = json.load(f)

updated = 0
for func in data['functions']:
    if func.get('category') == 'menu' and not func.get('completed', False):
        func['completed'] = True
        updated += 1

with open('injectFunctionTest/functions.json', 'w', encoding='utf-8') as f:
    json.dump(data, f, indent=2, ensure_ascii=False)

print(f"Updated {updated} menu functions to completed=true")
print(f"Total functions in json: {len(data['functions'])}")
