"""Mark AbstractClass/ObjectClass/MissionClass functions as completed=true in functions.json."""
import json
import sys

data = json.load(open('injectFunctionTest/functions.json', encoding='utf-8'))
funcs = data['functions']

target_classes = ('AbstractClass', 'ObjectClass', 'MissionClass')
count = 0

for f in funcs:
    class_name = f.get('call', {}).get('class_name')
    if class_name in target_classes and not f.get('completed'):
        f['completed'] = True
        count += 1

json.dump(data, open('injectFunctionTest/functions.json', 'w', encoding='utf-8'), indent=2)
print(f"Marked {count} entries as completed=true")
print(f"Total entries in target classes: {sum(1 for f in funcs if f.get('call',{}).get('class_name') in target_classes)}")
print(f"Verified completed: {sum(1 for f in funcs if f.get('call',{}).get('class_name') in target_classes and f.get('completed'))}")
