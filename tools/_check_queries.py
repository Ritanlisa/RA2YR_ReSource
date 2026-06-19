#!/usr/bin/env python3
"""Quick analysis of IDA queries."""
import json

with open('tools/ida_queries.json') as f:
    q = json.load(f)

print(f'Total queries: {len(q)}')
with_class = sum(1 for x in q if x['class_name'])
without_class = sum(1 for x in q if not x['class_name'])
print(f'With class: {with_class}')
print(f'Without class: {without_class}')

# Show last 10
print('\nLast 10:')
for x in q[-10:]:
    print(f'  [{x["class_name"]}] {x["func_name"]}() -> {x["file"]}:{x["line"]}')
