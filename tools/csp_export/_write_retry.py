"""Write-point AV-lock retry -- permanent form of the T4c sitecustomize
shim (I65/I72/I77).

Why: Windows Defender real-time scan transiently locks src files written
seconds earlier by a sibling fixer in the same battery (observed Errno 13
/ WinError 32 across fix_leaks_general, fix_conversion_noise,
fix_dupdef_corpses, fix_ida_mem_macros; 3 chain runs).  Same bounded
retry semantics as the proven shim: 5 attempts, 1+attempt second
backoff, PermissionError only.  Read paths are never wrapped.

Coverage model: step4_bodies.main() installs the Path.write_bytes /
Path.write_text / shutil.copy2 / write-mode open wrappers once at chain
entry, so every battery script (and any standalone sub-run inside that
process) is covered without per-script edits.  The io.open binding is
rebound separately -- io.open is captured at io-module import time, so
rebinding builtins.open does NOT cover `io.open(..., 'w')` call sites
(T4c L106, fix_dupdef_corpses family).

Idempotent: the _write_retry_installed guard makes repeated installs a
no-op (step2 runs in the same process for some entry points).
"""
import builtins
import io as _io
import shutil
import time
from pathlib import Path

ATTEMPTS = 5


def retry(fn, *a, **kw):
    """Run fn, retrying on PermissionError with a 1/2/3/4s backoff."""
    for attempt in range(ATTEMPTS):
        try:
            return fn(*a, **kw)
        except PermissionError:
            if attempt == ATTEMPTS - 1:
                raise
            time.sleep(1.0 + attempt)


def open_write(file, mode='w', *a, **kw):
    """Write/append-mode open with retry; read modes pass through."""
    if ('w' in mode or 'a' in mode or 'x' in mode) and 'r' not in mode:
        return retry(_io.open, file, mode, *a, **kw)
    return _io.open(file, mode, *a, **kw)


def install():
    """Install the write-path wrappers (idempotent)."""
    if getattr(install, '_installed', False):
        return
    install._installed = True

    if not getattr(Path.write_bytes, '_write_retry', False):
        _orig_wb = Path.write_bytes

        def _wb(self, data):
            return retry(_orig_wb, self, data)

        _wb._write_retry = True
        Path.write_bytes = _wb

    if not getattr(Path.write_text, '_write_retry', False):
        _orig_wt = Path.write_text

        def _wt(self, data, **kw):
            return retry(_orig_wt, self, data, **kw)

        _wt._write_retry = True
        Path.write_text = _wt

    if not getattr(shutil.copy2, '_write_retry', False):
        _orig_copy2 = shutil.copy2

        def _copy2(src, dst, **kw):
            return retry(_orig_copy2, src, dst, **kw)

        _copy2._write_retry = True
        shutil.copy2 = _copy2

    if not getattr(builtins.open, '_write_retry', False):
        _orig_open = builtins.open

        def _open(file, mode='r', *a, **kw):
            if ('w' in mode or 'a' in mode or 'x' in mode) \
                    and 'r' not in mode:
                return retry(_orig_open, file, mode, *a, **kw)
            return _orig_open(file, mode, *a, **kw)

        _open._write_retry = True
        builtins.open = _open
        # io.open is a separate binding captured at io-module import;
        # rebinding builtins.open does not cover io.open call sites.
        _io.open = _open
