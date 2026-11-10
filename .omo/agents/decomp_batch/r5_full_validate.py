#!/usr/bin/env python3
"""r5_full_validate.py -- regression (359) then wall385 rerun, sequential."""
import subprocess
import sys

HERE = ".omo/agents/decomp_batch"
cmds = [
    ["python", HERE + "/run_parts_r5.py",
     HERE + "/r5_regression_batch.json",
     ".omo/decomp_batch/r5_regression_final", "0", "17", "20"],
    ["python", HERE + "/run_wall385_r5.py", "0", "19"],
]
for c in cmds:
    print(">>> " + " ".join(c), flush=True)
    subprocess.call(c)
print("ALL DONE", flush=True)
