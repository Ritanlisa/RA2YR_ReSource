"""IR value-layer sidecar for the decomp_sys pipeline.

Purely additive: nothing here is imported by ``decompile.py`` or ``passes.py``.
The probe driver (:mod:`ir.probe`) applies the layer after the normal text
pipeline has produced a body (``ctx.lines``) and uses the existing
compile + diffasm harness for verdicts.
"""
