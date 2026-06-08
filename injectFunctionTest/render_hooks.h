// render_hooks.h -- Vtable-level render hooks for element tracking
// Hooks DSurface vtable entries to intercept Blit/BlitPart without
// the 5-byte minimal instruction problem of inline hooks.
#pragma once

namespace render_hooks {
    void Install();
    void Remove();
} // namespace render_hooks
