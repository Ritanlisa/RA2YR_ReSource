//! K4: conflict-resolution round kernel — faithful port of the
//! `_fmasks` recomputation loop in minclass_solver.py (lines ~7598-7634):
//! per empty-domain conflicted cluster, recompute every family's mask
//! (C1 size-bound + per-entity AND over all_fams, NO receiver clamp, NO _pfm
//! on per-family masks), the total intersection, and per-family popcounts +
//! first-12 candidate class indices for the resolution ledger. The drop
//! decision (`not inter or not _pfm(inter)`) and the ledger JSON stay Python.

use crate::domain::Domain;
use crate::solver::Solver;

/// c1_mask default-path exact port for the ledger loop: c1_ok_mask == FULL
/// under default flags, so this is the size lower bound only.
/// Python: `_ww = w if w else 4` (w==0/None -> 4; negative widths stay).
/// Read-only: size_ok must be pre-warmed by `prewarm_size_ok` below.
fn c1_mask_ledger(sv: &Solver, obs: &[(i64, i64)]) -> Domain {
    let mut m = sv.full.clone();
    let mut need: i64 = 0;
    for &(o, w) in obs {
        let ww = if w != 0 { w } else { 4 };
        if o + ww > need {
            need = o + ww;
        }
    }
    if need > 0 {
        let sok = sv.size_ok_read(need);
        m.intersect(&sok);
    }
    m
}

fn prewarm_size_ok(sv: &mut Solver, cluster_idxs: &[usize]) {
    let mut needs = std::collections::BTreeSet::new();
    for &ci in cluster_idxs {
        for &(o, w) in &sv.clusters[ci].obs {
            let _ = o;
            let ww = if w != 0 { w } else { 4 };
            let need = o + ww;
            if need > 0 {
                needs.insert(need);
            }
        }
    }
    for nd in needs {
        sv.size_ok(nd);
    }
}

pub struct ResolveRec {
    /// (position within all_fams incl. C1, popcount, first <=12 ascending
    /// class idxs) for every family whose mask != FULL, in all_fams order
    pub fams: Vec<(u16, u32, Vec<u16>)>,
    pub inter: Domain,
}

pub fn resolve_round_impl(
    sv: &mut Solver,
    all_fams: &[String],
    cluster_idxs: &[usize],
) -> Vec<ResolveRec> {
    prewarm_size_ok(sv, cluster_idxs);
    // resolve family indices once (C1 handled at its own position)
    let fam_of: Vec<Option<usize>> = all_fams
        .iter()
        .map(|f| {
            if f == "C1" {
                None
            } else {
                sv.fam_idx.get(f).copied()
            }
        })
        .collect();
    let mut out = Vec::with_capacity(cluster_idxs.len());
    for &ci_cl in cluster_idxs {
        let cl = &sv.clusters[ci_cl];
        let mut fam_masks: Vec<Option<Domain>> = Vec::with_capacity(all_fams.len());
        let mut inter = sv.full.clone();
        for (pos, f) in all_fams.iter().enumerate() {
            if f == "C1" {
                let m_c1 = if cl.obs.is_empty() {
                    sv.full.clone()
                } else {
                    c1_mask_ledger(sv, &cl.obs)
                };
                inter.intersect(&m_c1);
                fam_masks.push(if m_c1 != sv.full { Some(m_c1) } else { None });
                continue;
            }
            let fi = fam_of[pos].unwrap();
            let mut mf = sv.full.clone();
            let mut hit = false;
            let fm = &sv.fam_maps[fi];
            for &e in &cl.ents {
                if let Some(&pi) = fm.get(&e) {
                    mf.intersect(&sv.pool(pi));
                    hit = true;
                }
            }
            if hit {
                inter.intersect(&mf);
            }
            fam_masks.push(if hit && mf != sv.full { Some(mf) } else { None });
        }
        let mut fams = Vec::new();
        for (pos, m) in fam_masks.iter().enumerate() {
            if let Some(m) = m {
                let pop = m.popcount();
                let first: Vec<u16> = m.iter_bits().take(12).map(|b| b as u16).collect();
                fams.push((pos as u16, pop, first));
            }
        }
        out.push(ResolveRec { fams, inter });
    }
    out
}
