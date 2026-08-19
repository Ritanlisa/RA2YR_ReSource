# Bulk rename script — mechanical conversions only
# Run from D:\RA2YR_ReSource

$targetDirs = @("include\gamemd", "src")
$extensions = @("*.hpp", "*.cpp", "*.h")

$files = Get-ChildItem -Path $targetDirs -Recurse -Include $extensions | 
    Where-Object { 
        $_.FullName -notmatch "\\gen\\" -and 
        $_.FullName -notmatch "injectFunctionTest" -and
        $_.FullName -notmatch "\\app\\" 
    }

# Ordered renames (longer patterns first to avoid partial matches)
$renames = [ordered]@{
    # ── AbstractClass members (m_ prefix removal) ──
    "m_unique_id"          = "uniqueId"
    "m_abstract_flags"     = "abstractFlags"
    "m_ref_count"          = "refCount"
    "m_dirty"              = "isDirty"
    "m_padding_21"         = "padding21"

    # ── Base class virtual methods (PascalCase → camelCase) ──
    "WhatAmI"              = "whatAmI"
    "FetchID"              = "fetchId"
    "CreateID"             = "createId"
    "GetCoordsEx"          = "getCoordsEx"
    "GetCoords"            = "getCoords"
    "GetClassID"            = "GetClassID"  # keep COM standard
    
    # ── Common patterns ──
    "PointerExpired"       = "pointerExpired"
    "OnNotice"             = "onNotice"
    "NotifySinks"          = "notifySinks"
    "IsDirty"              = "IsDirty"  # COM standard, keep
    
    # ── AbstractClass virtuals ──
    "vt_entry_140"          = "clickedAction"    # ObjectClass: handles click action
    "vt_entry_128"          = "getBoundsRect"     # ObjectClass: GetRect
    "vt_entry_12C"          = "getBoundsRectMut"  # ObjectClass: GetRect mutable
    "vt_entry_1A8"          = "onDeployComplete"  # ObjectClass: deploy callback
    "vt_entry_1B0"          = "canDeployHere"     # ObjectClass: deploy check
}

$changed = 0
foreach ($file in $files) {
    $content = Get-Content -Path $file.FullName -Raw
    $original = $content
    foreach ($pair in $renames.GetEnumerator()) {
        $content = $content -replace $pair.Key, $pair.Value
    }
    if ($content -ne $original) {
        Set-Content -Path $file.FullName -Value $content -NoNewline
        $changed++
    }
}

Write-Host "Changed $changed files out of $($files.Count) total"
