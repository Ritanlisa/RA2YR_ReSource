//! K3: evidence-building kernels — faithful ports of the hot inline loops in
//! minclass_solver.py (wave 2):
//!
//!  - `ssa_workload`  : C19/SSA reused-slot scan (lines ~4683-4691) — 147
//!                      slots x 1.38M raw edges inner scan.
//!  - `c18_phase`     : C18 binary-signature family (main / b / c variants).
//!  - `c11_fixpoint2` : C11 member-chain narrowing fixpoint (8 chaotic rounds).
//!
//! All kernels are deterministic and order-preserving where the Python output
//! order is observable (masks/pins are emitted in ents iteration order).

use crate::domain::Domain;
use pyo3::types::PyDictMethods;
use std::collections::{HashMap, HashSet};

// ---------------------------------------------------------------------------
// SSA reused-slot workload (C19)
// ---------------------------------------------------------------------------

/// For each slot (frm, fn_v): collect `[addr_int, to_str]` for every CALL_ARG
/// raw edge with `from == frm` and `fn_at(addr) == fn_v`, in raw order.
/// `ca_addr` uses -1 to encode a hex-parse failure (skipped, like Python's
/// `int(str(addr), 16)` ValueError). `faddrs` is the sorted function-start
/// table backing `fn_at`.
#[pyo3::pyfunction]
#[pyo3(signature = (slots, ca_from, ca_addr, ca_to, faddrs))]
pub fn ssa_workload(
    slots: Vec<(String, u64)>,
    ca_from: Vec<String>,
    ca_addr: Vec<i64>,
    ca_to: Vec<String>,
    faddrs: Vec<u64>,
) -> Vec<Vec<(u64, String)>> {
    // bucket CALL_ARG entries by `from` (preserving raw order inside buckets)
    let mut by_from: HashMap<&str, Vec<usize>> = HashMap::with_capacity(ca_from.len());
    for (i, f) in ca_from.iter().enumerate() {
        by_from.entry(f.as_str()).or_default().push(i);
    }
    // fn_at(a): bisect_right(faddrs, a) - 1; a < faddrs[0] -> None (u64::MAX)
    let fn_at = |a: u64| -> u64 {
        match faddrs.binary_search(&a) {
            Ok(i) => faddrs[i],
            Err(0) => u64::MAX,
            Err(i) => faddrs[i - 1],
        }
    };
    let mut out = Vec::with_capacity(slots.len());
    for (frm, fn_v) in &slots {
        let mut uses = Vec::new();
        if let Some(idxs) = by_from.get(frm.as_str()) {
            for &i in idxs {
                let a = ca_addr[i];
                if a < 0 {
                    continue;
                }
                let a = a as u64;
                if fn_at(a) != *fn_v {
                    continue;
                }
                uses.push((a, ca_to[i].clone()));
            }
        }
        out.push(uses);
    }
    out
}

// ---------------------------------------------------------------------------
// C18 binary offset-signature family
// ---------------------------------------------------------------------------

fn cov18(sig: &[(i64, i64)], obs: &[(i64, i64)]) -> bool {
    for &(o, w) in obs {
        let mut hit = false;
        for &(a, b) in sig {
            if a <= o && o + w <= a + b {
                hit = true;
                break;
            }
        }
        if !hit {
            return false;
        }
    }
    true
}

/// ordered-f64 wrapper for tuple-comparing (Python `-h, gap(±inf), ci` sort)
#[derive(PartialEq, PartialOrd)]
struct OF(f64);
impl Eq for OF {}
impl Ord for OF {
    fn cmp(&self, other: &Self) -> std::cmp::Ordering {
        self.partial_cmp(other).unwrap_or(std::cmp::Ordering::Equal)
    }
}

struct C18Out {
    /// (eid index, mask bytes) in loop order — fam["C18"] assignment sites
    masks: Vec<(u32, Vec<u8>)>,
    /// (eid index, class idx) exact pins in loop order
    pins: Vec<(u32, u32)>,
    tried: u64,
    amb: u64,
}

/// kind: 0 = C18 main, 1 = C18b, 2 = C18c.
/// `obs` is parallel to the Python `list(ents.keys())` order the caller used.
#[pyo3::pyfunction]
#[pyo3(signature = (kind, nbits, cls_big_ci, cls_big_sig, obs, exact_flat, eff_size, members, allow))]
pub fn c18_phase(
    kind: u8,
    nbits: usize,
    cls_big_ci: Vec<u32>,
    cls_big_sig: Vec<Vec<(i64, i64)>>,
    obs: Vec<Vec<(i64, i64)>>,
    exact_flat: Vec<(u32, u32)>,
    eff_size: Vec<i64>,
    members: Vec<Vec<(i64, i64)>>,
    allow: bool,
) -> pyo3::PyResult<pyo3::PyObject> {
    let cls_big: Vec<(u32, Vec<(i64, i64)>)> =
        cls_big_ci.into_iter().zip(cls_big_sig.into_iter()).collect();
    let out = match kind {
        0 => c18_main(nbits, &cls_big, &obs, &exact_flat, &eff_size, &members, allow),
        1 => c18b(&cls_big, &obs, &exact_flat, &eff_size, allow),
        2 => c18c(&cls_big, &obs, &exact_flat),
        _ => return Err(pyo3::exceptions::PyValueError::new_err("bad kind")),
    };
    pyo3::Python::with_gil(|py| {
        let dict = pyo3::types::PyDict::new(py);
        dict.set_item("tried", out.tried)?;
        dict.set_item("amb", out.amb)?;
        dict.set_item("masks", out.masks)?;
        dict.set_item("pins", out.pins)?;
        Ok(dict.into())
    })
}

/// C18 main loop (lines ~4397-4436): mask over all hits + arbitration pin.
fn c18_main(
    nbits: usize,
    cls_big: &[(u32, Vec<(i64, i64)>)],
    obs: &[Vec<(i64, i64)>],
    exact_flat: &[(u32, u32)],
    eff_size: &[i64],
    members: &[Vec<(i64, i64)>],
    allow: bool,
) -> C18Out {
    let mut exact_of: HashMap<u32, Vec<u32>> = HashMap::new();
    for &(ei, ci) in exact_flat {
        exact_of.entry(ei).or_default().push(ci);
    }
    let mut masks = Vec::new();
    let mut pins = Vec::new();
    let mut tried = 0u64;
    let mut amb = 0u64;
    for (ei, obs) in obs.iter().enumerate() {
        if obs.len() < 2 {
            continue;
        }
        tried += 1;
        let mut need: i64 = 0;
        for &(o, w) in obs {
            if o + w > need {
                need = o + w;
            }
        }
        let mut hit: Vec<u32> = Vec::new();
        for bc in cls_big {
            let ci = bc.0;
            let sig = &bc.1;
            let sz = eff_size[ci as usize];
            // Python: include iff (not sz) or (sz <= 6*need)
            if sz > 0 && sz > 6 * need {
                continue;
            }
            if cov18(sig, obs) {
                hit.push(ci);
            }
        }
        if hit.is_empty() {
            continue;
        }
        let mut m = Domain::empty(nbits);
        for &ci in &hit {
            m.set(ci as usize);
        }
        masks.push((ei as u32, m.to_le_bytes()));
        if hit.len() != 1 {
            // arbitration: (-hits, |eff_size-need| or +inf, ci), sorted
            let mut rank: Vec<(i64, OF, u32)> = Vec::with_capacity(hit.len());
            for &ci in &hit {
                let mem = &members[ci as usize];
                let mut h: i64 = 0;
                for &(o, w) in obs {
                    for &(mo, mw) in mem.iter() {
                        if mo == o && mw >= w {
                            h += 1;
                            break;
                        }
                    }
                }
                let sz = eff_size[ci as usize];
                let gap = if sz > 0 { (sz - need).abs() as f64 } else { f64::INFINITY };
                rank.push((-h, OF(gap), ci));
            }
            rank.sort();
            if rank[0].0 <= -2 && rank[0].0 < rank[1].0 {
                hit = vec![rank[0].2];
            }
        }
        if hit.len() != 1 {
            amb += 1;
            continue;
        }
        if let Some(ex) = exact_of.get(&(ei as u32)) {
            if ex.iter().any(|&c| c != hit[0]) {
                continue;
            }
        }
        if !allow {
            continue;
        }
        pins.push((ei as u32, hit[0]));
    }
    C18Out { masks, pins, tried, amb }
}

/// C18b minimal-signature loop (lines ~4443-4466).
fn c18b(
    cls_big: &[(u32, Vec<(i64, i64)>)],
    obs: &[Vec<(i64, i64)>],
    exact_flat: &[(u32, u32)],
    eff_size: &[i64],
    allow: bool,
) -> C18Out {
    let has_exact: HashSet<u32> = exact_flat.iter().map(|&(ei, _)| ei).collect();
    let mut pins = Vec::new();
    let mut amb = 0u64;
    for (ei, obs) in obs.iter().enumerate() {
        if has_exact.contains(&(ei as u32)) {
            continue;
        }
        if obs.len() < 6 {
            continue;
        }
        let mut maxo = i64::MIN;
        for &(o, _w) in obs {
            if o > maxo {
                maxo = o;
            }
        }
        if maxo < 0x40 {
            continue;
        }
        let mut need: i64 = 0;
        for &(o, w) in obs {
            if o + w > need {
                need = o + w;
            }
        }
        let mut hitb: Vec<(u32, usize)> = Vec::new();
        for bc in cls_big {
            let ci = bc.0;
            let sig = &bc.1;
            let sz = eff_size[ci as usize];
            if sz > 0 && sz > 6 * need {
                continue;
            }
            if cov18(sig, obs) {
                hitb.push((ci, sig.len()));
            }
        }
        if hitb.len() < 2 {
            continue;
        }
        hitb.sort_by_key(|&(_, l)| l); // stable — condition is strict <, order-safe
        if hitb[0].1 < hitb[1].1 && allow {
            pins.push((ei as u32, hitb[0].0));
        } else {
            amb += 1;
        }
    }
    C18Out { masks: Vec::new(), pins, tried: 0, amb }
}

/// C18c cascade round (lines ~4485-4497): unique coverage pins only.
fn c18c(
    cls_big: &[(u32, Vec<(i64, i64)>)],
    obs: &[Vec<(i64, i64)>],
    exact_flat: &[(u32, u32)],
) -> C18Out {
    let has_exact: HashSet<u32> = exact_flat.iter().map(|&(ei, _)| ei).collect();
    let mut pins = Vec::new();
    for (ei, obs) in obs.iter().enumerate() {
        if has_exact.contains(&(ei as u32)) {
            continue;
        }
        if obs.len() < 3 {
            continue;
        }
        let mut maxo = i64::MIN;
        for &(o, _w) in obs {
            if o > maxo {
                maxo = o;
            }
        }
        if maxo < 0x40 {
            continue;
        }
        let mut hit: Vec<u32> = Vec::new();
        for bc in cls_big {
            let ci = bc.0;
            let sig = &bc.1;
            if cov18(sig, obs) {
                hit.push(ci);
            }
        }
        if hit.len() == 1 {
            pins.push((ei as u32, hit[0]));
        }
    }
    C18Out { masks: Vec::new(), pins, tried: 0, amb: 0 }
}

// ---------------------------------------------------------------------------
// C11 member-chain narrowing fixpoint
// ---------------------------------------------------------------------------

/// In-place 8-round chaotic fixpoint, link order, mk-then-ck updates with the
/// mk update visible to the ck direction in the same iteration (exact port of
/// lines 6144-6182). `dom_pairs` is the caller's dict order; returned masks
/// are parallel to it.
#[pyo3::pyfunction]
#[pyo3(signature = (nbits, mk, ck, off, dom_pairs, mp_key_ci, mp_key_off, mp_types, desc))]
pub fn c11_fixpoint2(
    nbits: usize,
    mk: Vec<String>,
    ck: Vec<String>,
    off: Vec<i64>,
    dom_pairs: Vec<(String, Vec<u8>)>,
    mp_key_ci: Vec<u32>,
    mp_key_off: Vec<i64>,
    mp_types: Vec<Vec<u32>>,
    desc: Vec<Vec<u32>>,
) -> pyo3::PyResult<pyo3::PyObject> {
    let mut slot_of: HashMap<&str, usize> = HashMap::with_capacity(dom_pairs.len());
    for (i, (k, _)) in dom_pairs.iter().enumerate() {
        slot_of.insert(k.as_str(), i);
    }
    let mut dom: Vec<Domain> = dom_pairs
        .iter()
        .map(|(_, b)| Domain::from_le_bytes(nbits, b))
        .collect();

    let mut member_pairs: HashMap<(u32, i64), Vec<u32>> = HashMap::with_capacity(mp_key_ci.len());
    for i in 0..mp_key_ci.len() {
        member_pairs
            .entry((mp_key_ci[i], mp_key_off[i]))
            .or_insert_with(Vec::new)
            .extend_from_slice(&mp_types[i]);
    }

    // desc mask pool with per-class cache (single(ci) | desc[ci])
    let mut desc_cache: Vec<Option<u32>> = vec![None; nbits];
    let mut pool: Vec<Domain> = Vec::new();

    let mut steps: u64 = 0;
    for _round in 0..8 {
        let mut chg: u64 = 0;
        for li in 0..mk.len() {
            let s_mk = slot_of[mk[li].as_str()];
            let s_ck = slot_of[ck[li].as_str()];
            let _off = off[li];
            let dm0 = dom[s_mk].clone();
            let dc0 = dom[s_ck].clone();
            let dc0_bak = dc0.clone();
            // forward: allowed_m = union over candidate classes with member-
            // type evidence at _off of desc_mask(t) for each declared type t
            let mut allowed_m = Domain::empty(nbits);
            let mut has_ev = false;
            for ci in dc0.iter_bits() {
                if let Some(ts) = member_pairs.get(&(ci as u32, _off)) {
                    has_ev = true;
                    for &t in ts {
                        if desc_cache[t as usize].is_none() {
                            let mut m = Domain::empty(nbits);
                            m.set(t as usize);
                            for &d in desc[t as usize].iter() {
                                m.set(d as usize);
                            }
                            pool.push(m);
                            desc_cache[t as usize] = Some((pool.len() - 1) as u32);
                        }
                        allowed_m.union(&pool[desc_cache[t as usize].unwrap() as usize]);
                    }
                }
            }
            let mut dm = dm0;
            if has_ev {
                let mut nm = dm.clone();
                nm.intersect(&allowed_m);
                if nm != dm && !nm.is_empty() {
                    dom[s_mk] = nm.clone();
                    dm = nm;
                    chg += 1;
                }
            }
            // reverse: container candidates compatible with (possibly just
            // narrowed) member domain dm
            let mut allowed_c = Domain::empty(nbits);
            for ci in dc0.iter_bits() {
                match member_pairs.get(&(ci as u32, _off)) {
                    None => allowed_c.set(ci), // no evidence -> keep
                    Some(ts) => {
                        let mut ok = false;
                        for &t in ts {
                            if desc_cache[t as usize].is_none() {
                                let mut m = Domain::empty(nbits);
                                m.set(t as usize);
                                for &d in desc[t as usize].iter() {
                                    m.set(d as usize);
                                }
                                pool.push(m);
                                desc_cache[t as usize] = Some((pool.len() - 1) as u32);
                            }
                            if pool[desc_cache[t as usize].unwrap() as usize].intersects(&dm) {
                                ok = true;
                                break;
                            }
                        }
                        if ok {
                            allowed_c.set(ci);
                        }
                    }
                }
            }
            let mut nc = dc0;
            nc.intersect(&allowed_c);
            // Python compares against the iteration-start value _dc (an mk==ck
            // self-link with a forward update would see the stale read too)
            if nc != dc0_bak && !nc.is_empty() {
                dom[s_ck] = nc;
                chg += 1;
            }
        }
        steps += chg;
        if chg == 0 {
            break;
        }
    }

    pyo3::Python::with_gil(|py| {
        let dict = pyo3::types::PyDict::new(py);
        let out_masks: Vec<Vec<u8>> = dom.iter().map(|d| d.to_le_bytes()).collect();
        dict.set_item("dom", out_masks)?;
        dict.set_item("steps", steps)?;
        Ok(dict.into())
    })
}
