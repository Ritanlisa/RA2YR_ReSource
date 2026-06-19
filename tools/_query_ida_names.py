#!/usr/bin/env python3
"""Query IDA for actual current names at HIGH addresses."""
import json, os

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

renames = json.load(open(os.path.join(ROOT, 'tools', '_high_renames_final.json'), 'r'))
addrs = [r['addr'] for r in renames]
print(f"Total addresses to query: {len(addrs)}")

# Save addresses for batching
with open(os.path.join(ROOT, 'tools', '_ida_query_addrs.txt'), 'w') as f:
    for a in addrs:
        f.write(a + '\n')
print(f"Saved to tools/_ida_query_addrs.txt")

# Output in groups of 50 for batch queries
batch_size = 50
for i in range(0, len(addrs), batch_size):
    batch = addrs[i:i+batch_size]
    print(f"\nBatch {i//batch_size + 1}: {len(batch)} addrs")
