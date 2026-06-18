"""Check which render .cpp files exist and what they contain"""
import os

render_dir = 'src/render'
for fname in sorted(os.listdir(render_dir)):
    if fname.endswith('.cpp'):
        fpath = os.path.join(render_dir, fname)
        with open(fpath, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        lines = content.split('\n')
        print(f"\n=== {fname} ({len(lines)} lines) ===")
        # Show first 5 lines
        for l in lines[:5]:
            print(f"  {l}")
