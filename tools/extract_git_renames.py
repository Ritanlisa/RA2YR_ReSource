"""Extract function name changes from git commit diffs in functions.json"""
import subprocess, json, re
from pathlib import Path

REPO_ROOT = Path(__file__).parent.parent

def git_cmd(args):
    result = subprocess.run(
        ['git'] + args,
        capture_output=True, text=True, encoding='utf-8', errors='replace',
        cwd=REPO_ROOT
    )
    if result.returncode != 0:
        return []
    return result.stdout.split('\n')

def has_parent(sha):
    lines = git_cmd(['cat-file', '-t', f'{sha}^'])
    return lines and lines[0].strip() == 'commit'

def extract_renames(sha):
    """Extract old->new name pairs from a commit diff of functions.json"""
    if not has_parent(sha):
        return []
    
    lines = git_cmd(['diff', f'{sha}^..{sha}', '--', 'injectFunctionTest/functions.json'])
    renames = []
    i = 0
    while i < len(lines):
        line = lines[i]
        # Match old name: -      "name": "old_value",
        if line.startswith('-') and '"name"' in line:
            m_old = re.search(r'"name":\s*"([^"]+)"', line)
            if not m_old:
                i += 1
                continue
            old_name = m_old.group(1)
            
            # Look ahead up to 30 lines for matching + line with new name
            for j in range(i+1, min(i+30, len(lines))):
                nline = lines[j]
                if nline.startswith('+') and '"name"' in nline:
                    m_new = re.search(r'"name":\s*"([^"]+)"', nline)
                    if m_new:
                        new_name = m_new.group(1)
                        if old_name != new_name:
                            renames.append((old_name, new_name))
                    break
                if nline.startswith('-') and '"name"' in nline:
                    # Next rename pair - stop
                    break
        i += 1
    return renames

def main():
    # Find all commits that modified functions.json
    all_commits = git_cmd([
        'log', '--all', '--format=%H', '--', 'injectFunctionTest/functions.json'
    ])
    # Deduplicate
    commits = list(set([c.strip() for c in all_commits if c.strip()]))
    print(f'Scanning {len(commits)} commits that modified functions.json...')
    
    all_renames = {}
    reverse_map = {}
    
    for sha in commits:
        try:
            pairs = extract_renames(sha)
            if pairs:
                print(f'  {sha[:7]}: {len(pairs)} renames')
                for old, new in pairs:
                    if old != new:
                        all_renames[old] = new
                        if new not in reverse_map:
                            reverse_map[new] = []
                        if old not in reverse_map[new]:
                            reverse_map[new].append(old)
        except Exception as e:
            pass
    
    output = {
        'description': 'Function name evolution from git commit history',
        'old_to_new': all_renames,
        'new_to_old': reverse_map,
        'total_pairs': len(all_renames),
    }
    
    out_path = Path(__file__).parent / 'git_name_history.json'
    with open(out_path, 'w', encoding='utf-8') as f:
        json.dump(output, f, indent=2, sort_keys=True, ensure_ascii=False)
    
    print(f'\nTotal rename pairs: {len(all_renames)}')
    print(f'Output: {out_path}')
    
    for i, (old, new) in enumerate(list(all_renames.items())[:25]):
        print(f'  {old} -> {new}')

if __name__ == '__main__':
    main()
