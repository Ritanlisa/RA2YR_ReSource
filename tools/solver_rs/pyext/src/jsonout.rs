//! K5: byte-identical stdlib-json dump writers (wave 2).
//!
//! Replicates CPython `json.dump(obj, fh, ensure_ascii=False, indent=0)`
//! byte-for-byte for the three indent-0 artifacts whose pure-Python encoder
//! (indent forces the slow `_iterencode` path) dominates the dumps segment:
//! minclass_assignments.json (417 MB), minclass_clusters.json,
//! derived_layouts.json. Any type outside the supported schema is rejected
//! (fail-closed); the caller falls back to stdlib.

use pyo3::prelude::*;

/// CPython `py_encode_basestring` (ensure_ascii=False): escape `"` and `\`,
/// control chars < 0x20 as \b \t \n \f \r or \u00xx (lowercase hex); all
/// other bytes (incl. >= 0x80 UTF-8 continuation) pass through.
fn esc(s: &str, out: &mut Vec<u8>) {
    const HEX: &[u8; 16] = b"0123456789abcdef";
    out.push(b'"');
    for &b in s.as_bytes() {
        match b {
            0x22 => out.extend_from_slice(b"\\\""),
            0x5C => out.extend_from_slice(b"\\\\"),
            0x08 => out.extend_from_slice(b"\\b"),
            0x09 => out.extend_from_slice(b"\\t"),
            0x0A => out.extend_from_slice(b"\\n"),
            0x0C => out.extend_from_slice(b"\\f"),
            0x0D => out.extend_from_slice(b"\\r"),
            0x00..=0x1F => {
                out.extend_from_slice(b"\\u00");
                out.push(HEX[((b >> 4) & 0xF) as usize]);
                out.push(HEX[(b & 0xF) as usize]);
            }
            _ => out.push(b),
        }
    }
    out.push(b'"');
}

/// Python `io.open(path, "w")` text-mode newline translation: '\n' is
/// written as the platform line separator (CRLF on Windows). The pure path's
/// json.dump goes through that translation, so byte-identity requires it.
#[cfg(windows)]
const NL: &[u8] = b"\r\n";
#[cfg(not(windows))]
const NL: &[u8] = b"\n";

fn begin_obj(out: &mut Vec<u8>, n_items: usize) {
    if n_items == 0 {
        out.push(b'{');
    } else {
        out.extend_from_slice(b"{");
        out.extend_from_slice(NL);
    }
}

fn end_obj(out: &mut Vec<u8>, n_items: usize) {
    if n_items == 0 {
        out.push(b'}');
    } else {
        out.extend_from_slice(NL);
        out.push(b'}');
    }
}

/// `"key": ` prefix
fn key(out: &mut Vec<u8>, k: &str) {
    esc(k, out);
    out.extend_from_slice(b": ");
}

fn str_list(out: &mut Vec<u8>, items: &[String]) {
    if items.is_empty() {
        out.extend_from_slice(b"[]");
        return;
    }
    out.extend_from_slice(b"[");
        out.extend_from_slice(NL);
    for (i, s) in items.iter().enumerate() {
        if i > 0 {
            out.extend_from_slice(b",");
            out.extend_from_slice(NL);
        }
        esc(s, out);
    }
    out.extend_from_slice(NL);
        out.push(b']');
}

fn pair_list(out: &mut Vec<u8>, items: &[(i64, i64)]) {
    if items.is_empty() {
        out.extend_from_slice(b"[]");
        return;
    }
    out.extend_from_slice(b"[");
        out.extend_from_slice(NL);
    for (i, &(a, b)) in items.iter().enumerate() {
        if i > 0 {
            out.extend_from_slice(b",");
            out.extend_from_slice(NL);
        }
        out.extend_from_slice(b"[");
        out.extend_from_slice(NL);
        out.extend_from_slice(a.to_string().as_bytes());
        out.extend_from_slice(b",");
            out.extend_from_slice(NL);
        out.extend_from_slice(b.to_string().as_bytes());
        out.extend_from_slice(NL);
        out.push(b']');
    }
    out.extend_from_slice(NL);
        out.push(b']');
}

fn int_lit(out: &mut Vec<u8>, v: i64) {
    out.extend_from_slice(v.to_string().as_bytes());
}

/// Decode a packed little-endian u16 blob into per-key name lists.
fn cand_from_blob(blob: &[u8], counts: &[u32], names: &[String]) -> Vec<Vec<String>> {
    let mut out = Vec::with_capacity(counts.len());
    let mut pos = 0usize;
    for &c in counts {
        let mut v = Vec::with_capacity(c as usize);
        for _ in 0..c {
            let b0 = blob[pos] as u16;
            let b1 = blob[pos + 1] as u16;
            v.push(names[((b1 << 8) | b0) as usize].clone());
            pos += 2;
        }
        out.push(v);
    }
    out
}

/// minclass_assignments.json — schema:
/// `{root: {"candidates": [..], "ents": [..], "class": str|null,
///          "confidence": "forced"|"narrow"|"wide"}}`
/// `cand_blob`: packed LE u16 class indices; `cand_counts`: per-entry count.
#[pyfunction]
#[pyo3(signature = (path, roots, cand_counts, cand_blob, names, ents, cls, conf))]
pub fn dump_assignments(
    path: String,
    roots: Vec<String>,
    cand_counts: Vec<u32>,
    cand_blob: Vec<u8>,
    names: Vec<String>,
    ents: Vec<Vec<String>>,
    cls: Vec<Option<String>>,
    conf: Vec<u8>,
) -> pyo3::PyResult<()> {
    let cands = cand_from_blob(&cand_blob, &cand_counts, &names);
    let n = roots.len();
    let mut out: Vec<u8> = Vec::with_capacity(64 * 1024 * 1024);
    begin_obj(&mut out, n);
    for i in 0..n {
        if i > 0 {
            out.extend_from_slice(b",");
            out.extend_from_slice(NL);
        }
        key(&mut out, &roots[i]);
        begin_obj(&mut out, 4);
        out.extend_from_slice(b"\"candidates\": ");
        str_list(&mut out, &cands[i]);
        out.extend_from_slice(b",");
        out.extend_from_slice(NL);
        out.extend_from_slice(b"\"ents\": ");
        str_list(&mut out, &ents[i]);
        out.extend_from_slice(b",");
        out.extend_from_slice(NL);
        out.extend_from_slice(b"\"class\": ");
        match &cls[i] {
            Some(s) => esc(s, &mut out),
            None => out.extend_from_slice(b"null"),
        }
        out.extend_from_slice(b",");
        out.extend_from_slice(NL);
        out.extend_from_slice(b"\"confidence\": ");
        esc(
            match conf[i] {
                0 => "forced",
                1 => "narrow",
                _ => "wide",
            },
            &mut out,
        );
        end_obj(&mut out, 4);
    }
    end_obj(&mut out, n);
    std::fs::write(&path, &out).map_err(|e| {
        pyo3::exceptions::PyIOError::new_err(format!("write {}: {}", path, e))
    })?;
    Ok(())
}

/// minclass_clusters.json — schema:
/// `{root: {"class": str, "obs": [[o,w]..], "ents": [str..]}}`
#[pyfunction]
#[pyo3(signature = (path, roots, cls_names, obs, ents))]
pub fn dump_clusters(
    path: String,
    roots: Vec<String>,
    cls_names: Vec<String>,
    obs: Vec<Vec<(i64, i64)>>,
    ents: Vec<Vec<String>>,
) -> pyo3::PyResult<()> {
    let n = roots.len();
    let mut out: Vec<u8> = Vec::with_capacity(16 * 1024 * 1024);
    begin_obj(&mut out, n);
    for i in 0..n {
        if i > 0 {
            out.extend_from_slice(b",");
            out.extend_from_slice(NL);
        }
        key(&mut out, &roots[i]);
        begin_obj(&mut out, 3);
        out.extend_from_slice(b"\"class\": ");
        esc(&cls_names[i], &mut out);
        out.extend_from_slice(b",");
        out.extend_from_slice(NL);
        out.extend_from_slice(b"\"obs\": ");
        pair_list(&mut out, &obs[i]);
        out.extend_from_slice(b",");
        out.extend_from_slice(NL);
        out.extend_from_slice(b"\"ents\": ");
        str_list(&mut out, &ents[i]);
        end_obj(&mut out, 3);
    }
    end_obj(&mut out, n);
    std::fs::write(&path, &out).map_err(|e| {
        pyo3::exceptions::PyIOError::new_err(format!("write {}: {}", path, e))
    })?;
    Ok(())
}

/// derived_layouts.json — schema:
/// `{class: {"member_count": i, "extent": i, "clusters": i, "members": [[o,w]..]}}`
#[pyfunction]
#[pyo3(signature = (path, names, member_count, extent, clusters, members))]
pub fn dump_derived(
    path: String,
    names: Vec<String>,
    member_count: Vec<i64>,
    extent: Vec<i64>,
    clusters: Vec<i64>,
    members: Vec<Vec<(i64, i64)>>,
) -> pyo3::PyResult<()> {
    let n = names.len();
    let mut out: Vec<u8> = Vec::with_capacity(1024 * 1024);
    begin_obj(&mut out, n);
    for i in 0..n {
        if i > 0 {
            out.extend_from_slice(b",");
            out.extend_from_slice(NL);
        }
        key(&mut out, &names[i]);
        begin_obj(&mut out, 4);
        out.extend_from_slice(b"\"member_count\": ");
        int_lit(&mut out, member_count[i]);
        out.extend_from_slice(b",");
        out.extend_from_slice(NL);
        out.extend_from_slice(b"\"extent\": ");
        int_lit(&mut out, extent[i]);
        out.extend_from_slice(b",");
        out.extend_from_slice(NL);
        out.extend_from_slice(b"\"clusters\": ");
        int_lit(&mut out, clusters[i]);
        out.extend_from_slice(b",");
        out.extend_from_slice(NL);
        out.extend_from_slice(b"\"members\": ");
        pair_list(&mut out, &members[i]);
        end_obj(&mut out, 4);
    }
    end_obj(&mut out, n);
    std::fs::write(&path, &out).map_err(|e| {
        pyo3::exceptions::PyIOError::new_err(format!("write {}: {}", path, e))
    })?;
    Ok(())
}
