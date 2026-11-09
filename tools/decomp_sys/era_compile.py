#!/usr/bin/env python3
"""Era compile helper for decomp_sys pilot (reuses build_era env assembly)."""
import os
import subprocess
import sys

REPO = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
sys.path.insert(0, os.path.join(REPO, "tools", "codegen_match"))
from build_era import era_env  # noqa: E402


def compile_cpp(cpp_path, outdir=None, extra=()):
    vc_dir, env = era_env()
    cl = os.path.join(vc_dir, "BIN", "cl.exe")
    cpp = os.path.abspath(cpp_path)
    outdir = os.path.abspath(outdir or os.path.dirname(cpp))
    r = subprocess.run([cl, "/nologo", "/c", os.path.basename(cpp)] + list(extra),
                       cwd=outdir, env=env, capture_output=True, text=True)
    return r


if __name__ == "__main__":
    target = sys.argv[1] if len(sys.argv) > 1 else os.path.join(
        REPO, "src", "decomp_out", "smoke.hpp")
    r = compile_cpp(target)
    print("rc=", r.returncode)
    print("--stdout--")
    print(r.stdout)
    print("--stderr--")
    print(r.stderr)
