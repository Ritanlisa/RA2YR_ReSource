//! K1: solve-pipeline kernel — faithful port of minclass_solver.py's
//! `cluster_domains` + `greedy` + `improve` + `lower_bound` + solve() stats.
//!
//! Semantics contract (byte-identical dumps):
//!  - cluster iteration order, per-cluster ents order, enabled-family order,
//!    exact-pin first-touch order are preserved from the Python structures.
//!  - mask algebra is order-independent (AND/OR commute); the order-sensitive
//!    results (greedy tie-break via counts first-appearance order, improve's
//!    stable sorts, lower_bound's stable sort) are replicated deterministically.
//!  - improve()'s excl-list iteration order (CPython set order upstream) is
//!    NOT replicated: the final `inter` is the AND over ALL excl entries when
//!    non-empty (commutative) and 0 otherwise (early break short-circuits to
//!    the same zero) — outcome provably order-independent.
//!  - C1 uses the DEFAULT path only (`c1_ok_mask == FULL`; `--c1-covers` /
//!    `--strict-c1` are rejected by the Python wrapper before dispatch).

use crate::domain::Domain;
use rayon::prelude::*;
use std::cell::RefCell;
use std::collections::{BTreeMap, BTreeSet, HashMap, HashSet};

pub const FLAG_EXACT_CONFLICT: u8 = 1; // flags["exact_conflict"]
pub const FLAG_EMPTY_DOMAIN: u8 = 2; // flags["empty_domain"]
pub const FLAG_C1_GAP: u8 = 4; // flags["c1_gap"]
pub const FLAG_WIDTH_CONFLICT: u8 = 8; // flags["width_conflict"] (presence)
pub const FLAG_EXACT_CONTRADICTS: u8 = 16; // flags["exact_contradicts_family"] (presence)
/// sentinel in `contra` for the appended "C1(missing-offset)" entry
pub const CONTRA_C1_MISSING: u16 = u16::MAX;

pub struct Cluster {
    pub root: String,
    pub root_id: u32,
    pub ents: Vec<u32>,
    /// (offset, width) — width -1 encodes Python None; arbitrary order (set),
    /// only order-independent aggregates are derived from it.
    pub obs: Vec<(i64, i64)>,
    /// exact pins in first-touch order: (class_idx, srcs)
    pub exact_raw: Vec<(usize, Vec<String>)>,
}

#[derive(Clone)]
pub struct ClusterOut {
    pub mask: Domain, // final domain (single-bit / union / fallback / FULL per Python)
    pub exci: i32,    // -1 = None
    pub flags: u8,
    /// enabled-family indices (enabled order) for exact_contradicts_family,
    /// possibly ending with CONTRA_C1_MISSING
    pub contra: Vec<u16>,
}

pub struct CdCtx {
    pub enabled_fams: Vec<usize>, // family indices after C1 filter, in order
    pub enabled_has_c4: bool,
    pub enabled_has_c8: bool,
    pub proven: Domain,
    pub unknown_roots: HashSet<u32>, // interned root ids
    pub c1_exempt: HashSet<u32>,
}

pub struct Solver {
    pub nbits: usize,
    pub classmask: Domain,
    pub full: Domain,

    pub family_names: Vec<String>,
    pub fam_idx: HashMap<String, usize>,

    /// per family: entity idx -> mask pool idx
    pub fam_maps: Vec<HashMap<u32, u32>>,
    pub mask_pool: Vec<Domain>,
    pub mask_pool_ids: HashMap<Vec<u64>, u32>,

    pub intern: HashMap<String, u32>,
    pub intern_rev: Vec<String>,
    pub clusters: Vec<Cluster>,

    pub eff_size: Vec<i64>, // -1 = None
    pub intervals: Vec<Vec<(i64, i64)>>,
    pub starts: Vec<Vec<i64>>,
    pub dense: Vec<bool>,
    pub all_exact_classes: BTreeSet<usize>,

    /// per class: ancestor idxs / descendant idxs (U["anc"] / U["desc"])
    pub anc: Vec<Vec<u32>>,
    pub desc: Vec<Vec<u32>>,
    /// exact pins per entity (C10 seeds): ent idx -> class idxs
    pub exact_pins: HashMap<u32, Vec<usize>>,

    /// ents membership (C10 neutralizer dead_j check)
    pub ent_ids: HashSet<u32>,

    // caches
    pub size_ok_cache: HashMap<i64, u32>,
    pub anc_mask_cache: Vec<Option<u32>>,
    pub desc_mask_cache: Vec<Option<u32>>,
    pub anc_union_cache: HashMap<Vec<u64>, u32>,
    pub desc_union_cache: HashMap<Vec<u64>, u32>,
}

impl Solver {
    pub fn intern(&mut self, s: &str) -> u32 {
        if let Some(&i) = self.intern.get(s) {
            return i;
        }
        let i = self.intern_rev.len() as u32;
        self.intern.insert(s.to_string(), i);
        self.intern_rev.push(s.to_string());
        i
    }

    pub fn intern_id(&self, s: &str) -> Option<u32> {
        self.intern.get(s).copied()
    }

    pub fn name_of(&self, id: u32) -> &str {
        &self.intern_rev[id as usize]
    }

    pub fn pool_insert(&mut self, d: Domain) -> u32 {
        if let Some(&i) = self.mask_pool_ids.get(&d.words) {
            return i;
        }
        let i = self.mask_pool.len() as u32;
        self.mask_pool.push(d.clone());
        self.mask_pool_ids.insert(d.words, i);
        i
    }

    pub fn pool(&self, i: u32) -> &Domain {
        &self.mask_pool[i as usize]
    }

    pub fn anc_mask_idx(&mut self, ci: usize) -> u32 {
        if self.anc_mask_cache[ci].is_none() {
            let mut m = Domain::single(self.nbits, ci);
            for &a in &self.anc[ci] {
                m.set(a as usize);
            }
            let idx = self.pool_insert(m);
            self.anc_mask_cache[ci] = Some(idx);
        }
        self.anc_mask_cache[ci].unwrap()
    }

    pub fn desc_mask_idx(&mut self, ci: usize) -> u32 {
        if self.desc_mask_cache[ci].is_none() {
            let mut m = Domain::single(self.nbits, ci);
            for &d in &self.desc[ci] {
                m.set(d as usize);
            }
            let idx = self.pool_insert(m);
            self.desc_mask_cache[ci] = Some(idx);
        }
        self.desc_mask_cache[ci].unwrap()
    }

    /// _anc_union(m): union of anc_mask(ci) over set bits — memoized by mask.
    pub fn anc_union(&mut self, m: &Domain) -> Domain {
        if let Some(&i) = self.anc_union_cache.get(&m.words) {
            return self.mask_pool[i as usize].clone();
        }
        let mut r = Domain::empty(self.nbits);
        for b in m.iter_bits() {
            let am = self.anc_mask_idx(b);
            r.union(&self.mask_pool[am as usize]);
        }
        let i = self.pool_insert(r.clone());
        self.anc_union_cache.insert(m.words.clone(), i);
        r
    }

    /// _desc_union(m)
    pub fn desc_union(&mut self, m: &Domain) -> Domain {
        if let Some(&i) = self.desc_union_cache.get(&m.words) {
            return self.mask_pool[i as usize].clone();
        }
        let mut r = Domain::empty(self.nbits);
        for b in m.iter_bits() {
            let dm = self.desc_mask_idx(b);
            r.union(&self.mask_pool[dm as usize]);
        }
        let i = self.pool_insert(r.clone());
        self.desc_union_cache.insert(m.words.clone(), i);
        r
    }

    /// c1_size_mask(need): classes with unknown/zero eff_size or eff_size >= need.
    pub fn size_ok(&mut self, need: i64) -> Domain {
        if let Some(&i) = self.size_ok_cache.get(&need) {
            return self.mask_pool[i as usize].clone();
        }
        let mut m = Domain::empty(self.nbits);
        for i in 0..self.nbits {
            let sz = self.eff_size[i];
            if sz <= 0 || sz >= need {
                m.set(i);
            }
        }
        let idx = self.pool_insert(m.clone());
        self.size_ok_cache.insert(need, idx);
        m
    }

    /// covers(ci, o, w): binary search in merged intervals (Python `covers`).
    pub fn covers(&self, ci: usize, o: i64, w: i64) -> bool {
        let st = &self.starts[ci];
        if st.is_empty() {
            return false;
        }
        let mut lo = 0usize;
        let mut hi = st.len();
        while lo < hi {
            let mid = (lo + hi) / 2;
            if st[mid] <= o {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        if lo == 0 {
            return false;
        }
        let (a, b) = self.intervals[ci][lo - 1];
        a <= o && o + w <= b
    }

    /// c1_width_conflict presence predicate (content is rebuilt Python-side
    /// for the rare conflicted clusters): dense[ci] && any span uncovered.
    fn width_conflict_present(&self, ci: usize, obs: &[(i64, i64)]) -> bool {
        if !self.dense[ci] {
            return false;
        }
        obs.iter().any(|&(o, w)| {
            let ww = if w > 0 { w } else { 4 };
            !self.covers(ci, o, ww)
        })
    }

    /// c1_mask(obs) — DEFAULT path: c1_ok_mask == FULL ⇒ size lower bound only.
    fn c1_mask_default(&self, obs: &[(i64, i64)]) -> Domain {
        let mut need: i64 = 0;
        for &(o, w) in obs {
            let ww = if w > 0 { w } else { 4 };
            if o + ww > need {
                need = o + ww;
            }
        }
        if need > 0 {
            self.size_ok_read(need)
        } else {
            self.full.clone()
        }
    }

    pub fn size_ok_read(&self, need: i64) -> Domain {
        // read-only variant used from the parallel section; the table is
        // pre-warmed for every observed need by solve_pipeline / resolve_round.
        if let Some(&i) = self.size_ok_cache.get(&need) {
            return self.mask_pool[i as usize].clone();
        }
        let mut m = Domain::empty(self.nbits);
        for i in 0..self.nbits {
            let sz = self.eff_size[i];
            if sz <= 0 || sz >= need {
                m.set(i);
            }
        }
        m
    }
}

// ---------------------------------------------------------------------------
// cluster_domains
// ---------------------------------------------------------------------------
pub fn compute_cluster(sv: &Solver, ctx: &CdCtx, cl: &Cluster) -> ClusterOut {
    let full = &sv.full;
    let root_pfx: &str = &cl.root[..cl.root.len().min(2)];

    let c1_applies = root_pfx == "T:";
    let mut m_c1 = if !cl.obs.is_empty() && c1_applies {
        sv.c1_mask_default(&cl.obs)
    } else {
        full.clone()
    };
    if ctx.c1_exempt.contains(&cl.root_id) {
        m_c1 = full.clone();
    }
    let unknown_root = ctx.unknown_roots.contains(&cl.root_id);
    if unknown_root {
        m_c1 = full.clone();
    }
    // _pfm
    if !(ctx.proven.is_full() || m_c1.is_full()) {
        m_c1.intersect(&ctx.proven);
    }

    let mut m = m_c1.clone();
    let nf = ctx.enabled_fams.len();
    // fam_masks[0] = C1 (post-pfm, pre-clamp — the clamp below mutates in place)
    let mut fam_masks: Vec<Domain> = Vec::with_capacity(nf + 1);
    fam_masks.push(m_c1.clone());
    for &fi in &ctx.enabled_fams {
        if unknown_root {
            fam_masks.push(full.clone());
            continue;
        }
        let mut mf = full.clone();
        let mut hit = false;
        let fm = &sv.fam_maps[fi];
        for &e in &cl.ents {
            if let Some(&pi) = fm.get(&e) {
                mf.intersect(&sv.mask_pool[pi as usize]);
                hit = true;
            }
        }
        let v = if hit {
            if !(ctx.proven.is_full() || mf.is_full()) {
                mf.intersect(&ctx.proven);
            }
            mf
        } else {
            full.clone()
        };
        m.intersect(&v);
        fam_masks.push(v);
    }
    // receiver-kind clamp: T:/R:/GS roots (mutates masks incl. C1, then m)
    let is_receiver = root_pfx == "T:" || root_pfx == "R:" || root_pfx == "GS";
    if is_receiver {
        for fm in fam_masks.iter_mut() {
            if fm.intersects(&sv.classmask) {
                fm.intersect(&sv.classmask);
            } else {
                *fm = full.clone();
            }
        }
        if m.intersects(&sv.classmask) {
            m.intersect(&sv.classmask);
        }
    }

    // exact pin filtering (C4/C8 enabled gates) — first-touch order preserved
    let mut exs: Vec<usize> = Vec::new();
    for (ci, srcs) in &cl.exact_raw {
        let any_kept = srcs.iter().any(|s| {
            !(s.starts_with("C4") && !ctx.enabled_has_c4)
                && !(s.starts_with("C8") && !ctx.enabled_has_c8)
        });
        if any_kept {
            exs.push(*ci);
        }
    }

    let mut flags: u8 = 0;
    let mut contra: Vec<u16> = Vec::new();

    if exs.len() == 1 {
        let exact_ci = exs[0];
        if !cl.obs.is_empty() && sv.width_conflict_present(exact_ci, &cl.obs) {
            flags |= FLAG_WIDTH_CONFLICT;
        }
        for (k, &fi) in ctx.enabled_fams.iter().enumerate() {
            let fm = &fam_masks[k + 1];
            if !fm.is_empty() && !fm.bit(exact_ci) {
                contra.push(fi as u16);
            }
        }
        if !fam_masks[0].bit(exact_ci) && !cl.obs.is_empty() && flags & FLAG_WIDTH_CONFLICT == 0 {
            contra.push(CONTRA_C1_MISSING);
        }
        if !contra.is_empty() {
            flags |= FLAG_EXACT_CONTRADICTS;
        }
        return ClusterOut {
            mask: Domain::single(sv.nbits, exact_ci),
            exci: exact_ci as i32,
            flags,
            contra,
        };
    }
    if exs.len() > 1 {
        let mut domain = Domain::empty(sv.nbits);
        for ci in &exs {
            domain.set(*ci);
        }
        return ClusterOut {
            mask: domain,
            exci: -1,
            flags: FLAG_EXACT_CONFLICT,
            contra,
        };
    }
    if !m.is_empty() {
        return ClusterOut { mask: m, exci: -1, flags, contra };
    }
    // empty intersection → fallback union of non-FULL nonzero family masks
    let mut fallback = Domain::empty(sv.nbits);
    for fm in &fam_masks {
        if !fm.is_empty() && !fm.is_full() {
            fallback.union(fm);
        }
    }
    if fam_masks[0].is_empty() && !cl.obs.is_empty() {
        flags |= FLAG_C1_GAP;
    } else {
        flags |= FLAG_EMPTY_DOMAIN;
    }
    ClusterOut {
        mask: if fallback.is_empty() { full.clone() } else { fallback },
        exci: -1,
        flags,
        contra,
    }
}

// ---------------------------------------------------------------------------
// greedy / improve / lower_bound
// ---------------------------------------------------------------------------
pub struct GreedyOut {
    pub chosen: Vec<usize>,        // class indices, pick order
    pub chosen_dense: Vec<usize>,  // dense idx per pick (parallel to chosen)
    pub assign: Vec<(u32, usize)>, // (constrained slot, class)
    pub uncovered_left: usize,
    pub cover_of: Vec<Vec<u32>>,   // per dense class idx -> slots ascending
    pub dense_class: Vec<usize>,   // dense idx -> class idx, first-appearance order
}

pub fn greedy(sv: &Solver, dom_masks: &[Domain]) -> GreedyOut {
    let nc = dom_masks.len();
    let mut class_dense: HashMap<usize, usize> = HashMap::new();
    let mut cover_of: Vec<Vec<u32>> = Vec::new();
    let mut dense_class: Vec<usize> = Vec::new();
    let mut cls_of_cluster: Vec<Vec<usize>> = Vec::with_capacity(nc);
    for (ci_cl, m) in dom_masks.iter().enumerate() {
        let mut lst = Vec::with_capacity(m.popcount() as usize);
        for b in m.iter_bits() {
            let di = *class_dense.entry(b).or_insert_with(|| {
                cover_of.push(Vec::new());
                dense_class.push(b);
                cover_of.len() - 1
            });
            lst.push(di);
            cover_of[di].push(ci_cl as u32);
        }
        cls_of_cluster.push(lst);
    }
    let mut counts: Vec<i64> = cover_of.iter().map(|v| v.len() as i64).collect();
    // support: single-bit domains by slot order + ALL_EXACT_CLASSES
    let mut support: HashMap<usize, u32> = HashMap::new();
    for m in dom_masks.iter() {
        if m.popcount() == 1 {
            if let Some(b) = m.first_bit() {
                *support.entry(b).or_insert(0) += 1;
            }
        }
    }
    for &ci in &sv.all_exact_classes {
        *support.entry(ci).or_insert(0) += 1;
    }
    let mut uncovered = vec![true; nc];
    let mut uncovered_cnt = nc;
    let mut chosen: Vec<usize> = Vec::new();
    let mut chosen_dense: Vec<usize> = Vec::new();
    let mut assign: Vec<(u32, usize)> = Vec::new();
    while uncovered_cnt > 0 {
        let mut best_di: i64 = -1;
        let mut bestn: i64 = 0;
        let mut bestsup: i64 = -1;
        for (di, &c) in counts.iter().enumerate() {
            if c > bestn || (c == bestn && c > 0) {
                let i = dense_class[di];
                let sup = *support.get(&i).unwrap_or(&0) as i64;
                if c > bestn || sup > bestsup {
                    best_di = di as i64;
                    bestn = c;
                    bestsup = sup;
                }
            }
        }
        if best_di < 0 || bestn == 0 {
            break;
        }
        let bdi = best_di as usize;
        let best_cls = dense_class[bdi];
        let take: Vec<u32> = cover_of[bdi]
            .iter()
            .copied()
            .filter(|&cl| uncovered[cl as usize])
            .collect();
        for cl in &take {
            assign.push((*cl, best_cls));
            uncovered[*cl as usize] = false;
            uncovered_cnt -= 1;
            for &di in &cls_of_cluster[*cl as usize] {
                if counts.get(di).copied().unwrap_or(0) > 0 {
                    counts[di] -= 1;
                }
            }
        }
        counts[bdi] = -1;
        chosen.push(best_cls);
        chosen_dense.push(bdi);
    }
    GreedyOut { chosen, chosen_dense, assign, uncovered_left: uncovered_cnt, cover_of, dense_class }
}

fn lower_bound(dom_masks: &[Domain], nbits: usize) -> usize {
    let mut idxs: Vec<u32> = (0..dom_masks.len() as u32).collect();
    idxs.sort_by_key(|&i| dom_masks[i as usize].popcount()); // stable
    let mut picked = Domain::empty(nbits);
    let mut lb = 0usize;
    for i in idxs {
        let m = &dom_masks[i as usize];
        if !m.is_empty() && !m.intersects(&picked) {
            picked.union(m);
            lb += 1;
        }
    }
    lb
}

/// faithful port of improve(); chosen passed as dense idxs (mapped via
/// dense_class). Returns (chosen_dense, replaced).
pub fn improve(
    dom_masks: &[Domain],
    chosen_dense_in: &[usize],
    cover_of: &[Vec<u32>],
    max_pairs: usize,
) -> (Vec<usize>, usize) {
    let popc: Vec<u32> = dom_masks.iter().map(|m| m.popcount()).collect();
    let mut chosen: Vec<usize> = chosen_dense_in.to_vec();
    let mut replaced = 0usize;

    // idx: slot -> dense classes covering it, in chosen order
    let make_index = |chosen: &Vec<usize>| -> Vec<Vec<usize>> {
        let mut idx: Vec<Vec<usize>> = vec![Vec::new(); dom_masks.len()];
        for &c in chosen {
            for &cl in &cover_of[c] {
                idx[cl as usize].push(c);
            }
        }
        idx
    };
    let mut idx = make_index(&chosen);
    // removal loop
    let mut changed = true;
    while changed {
        changed = false;
        // stable sort by cover size, ties keep chosen order
        let mut order: Vec<usize> = (0..chosen.len()).collect();
        order.sort_by_key(|&k| cover_of[chosen[k]].len());
        for k in order {
            let c = chosen[k];
            if cover_of[c].iter().all(|cl| idx[*cl as usize].len() >= 2) {
                chosen.remove(k);
                for cl in &cover_of[c] {
                    if let Some(pos) = idx[*cl as usize].iter().position(|&x| x == c) {
                        idx[*cl as usize].remove(pos);
                    }
                }
                replaced += 1;
                changed = true;
                break;
            }
        }
    }
    // pair loop
    let mut n_pairs = 0usize;
    while n_pairs < max_pairs {
        let idx = make_index(&chosen);
        let mut excl1: BTreeMap<usize, Vec<u32>> = BTreeMap::new();
        let mut pair2: BTreeMap<(usize, usize), Vec<u32>> = BTreeMap::new();
        for (cl, cs) in idx.iter().enumerate() {
            match cs.len() {
                1 => excl1.entry(cs[0]).or_default().push(cl as u32),
                2 => {
                    let key = if cs[0] < cs[1] { (cs[0], cs[1]) } else { (cs[1], cs[0]) };
                    pair2.entry(key).or_default().push(cl as u32);
                }
                _ => {}
            }
        }
        let mergeable: Vec<usize> = chosen
            .iter()
            .copied()
            .filter(|&c| cover_of[c].iter().any(|cl| popc[*cl as usize] > 1))
            .collect();
        let mut improved = false;
        'outer: for ii in 0..mergeable.len() {
            if improved || n_pairs >= max_pairs {
                break;
            }
            let a = mergeable[ii];
            for &b in mergeable.iter().skip(ii + 1) {
                n_pairs += 1;
                if n_pairs >= max_pairs {
                    break;
                }
                let key = if a < b { (a, b) } else { (b, a) };
                let mut excl: Vec<u32> = Vec::new();
                if let Some(v) = excl1.get(&a) {
                    excl.extend_from_slice(v);
                }
                if let Some(v) = excl1.get(&b) {
                    excl.extend_from_slice(v);
                }
                if let Some(v) = pair2.get(&key) {
                    excl.extend_from_slice(v);
                }
                if excl.is_empty() {
                    if let Some(pos) = chosen.iter().position(|&x| x == b) {
                        chosen.remove(pos);
                    }
                    replaced += 1;
                    improved = true;
                    break 'outer;
                }
                // inter = AND of all excl doms (order-independent), clear a,b
                let mut inter = dom_masks[excl[0] as usize].clone();
                let mut dead = false;
                for &cl in excl.iter().skip(1) {
                    inter.intersect(&dom_masks[cl as usize]);
                    if inter.is_empty() {
                        dead = true;
                        break;
                    }
                }
                if !dead {
                    inter.clear_bit(a);
                    inter.clear_bit(b);
                }
                if inter.is_empty() {
                    continue;
                }
                let cand = match inter.highest_bit() {
                    Some(c) => c,
                    None => continue,
                };
                // chosen = [x for x in chosen if x not in (a, b)] + [cand]
                let mut newc: Vec<usize> = Vec::with_capacity(chosen.len());
                for &x in &chosen {
                    if x != a && x != b {
                        newc.push(x);
                    }
                }
                newc.push(cand);
                chosen = newc;
                replaced += 1;
                improved = true;
                break 'outer;
            }
        }
        if !improved {
            break;
        }
    }
    (chosen, replaced)
}

// ---------------------------------------------------------------------------
// solve_pipeline
// ---------------------------------------------------------------------------
pub struct SolveOut {
    pub outs: Vec<ClusterOut>,
    pub constrained: Vec<u32>, // cluster indices, doms order
    pub conflicted: Vec<u32>,
    pub free: usize,
    pub chosen: Vec<usize>,        // class indices, improved
    pub assign: Vec<(u32, usize)>, // cluster idx -> class (greedy assignment)
    pub k: usize,
    pub k_greedy: usize,
    pub lower_bound: usize,
    pub merges: usize,
    pub pinned_classes: usize,
    pub forced_classes: usize,
    pub bad_cover: usize,
    pub c1_gaps: usize,
    pub exact_conflicts: usize,
    pub n_conflicts: usize,
    pub diag_flagged: usize,
    pub uncovered_left: usize,
}

pub fn solve_pipeline(
    sv: &mut Solver,
    enabled_family_idx: &[usize],
    enabled_has_c4: bool,
    enabled_has_c8: bool,
    proven: &Domain,
    unknown_roots: &HashSet<u32>,
    c1_exempt: &HashSet<u32>,
    max_pairs: usize,
) -> SolveOut {
    // pre-warm size_ok for every distinct T:-root need (read-only parallel use)
    {
        let mut needs: BTreeSet<i64> = BTreeSet::new();
        for cl in &sv.clusters {
            if cl.obs.is_empty() || !cl.root.starts_with("T:") {
                continue;
            }
            let mut need: i64 = 0;
            for &(o, w) in &cl.obs {
                let ww = if w > 0 { w } else { 4 };
                if o + ww > need {
                    need = o + ww;
                }
            }
            if need > 0 {
                needs.insert(need);
            }
        }
        for n in needs {
            sv.size_ok(n);
        }
    }

    let ctx = CdCtx {
        enabled_fams: enabled_family_idx.to_vec(),
        enabled_has_c4,
        enabled_has_c8,
        proven: proven.clone(),
        unknown_roots: unknown_roots.clone(),
        c1_exempt: c1_exempt.clone(),
    };

    // cluster_domains — parallel over clusters (independent per-cluster results)
    let sv_ref: &Solver = sv;
    let outs: Vec<ClusterOut> = sv_ref
        .clusters
        .par_iter()
        .map(|cl| compute_cluster(sv_ref, &ctx, cl))
        .collect();

    let hard = |f: u8| f & (FLAG_EXACT_CONFLICT | FLAG_EMPTY_DOMAIN) != 0;
    let mut constrained: Vec<u32> = Vec::new();
    let mut conflicted: Vec<u32> = Vec::new();
    let mut diag_flagged = 0usize;
    let mut c1_gaps = 0usize;
    let mut exact_conflicts = 0usize;
    for (i, o) in outs.iter().enumerate() {
        if hard(o.flags) {
            conflicted.push(i as u32);
            if o.flags & (FLAG_EXACT_CONFLICT | FLAG_WIDTH_CONFLICT | FLAG_EXACT_CONTRADICTS) != 0 {
                exact_conflicts += 1;
            }
        } else {
            if !o.mask.is_full() {
                constrained.push(i as u32);
            }
            if o.flags & FLAG_C1_GAP != 0 {
                c1_gaps += 1;
            }
            // Python: diag_flagged = sum(1 for d in doms if d[4] and d not in conflicted)
            if o.flags != 0 {
                diag_flagged += 1;
            }
        }
    }
    let free = outs.len() - constrained.len() - conflicted.len();
    let n_conflicts_v = conflicted.len();

    let dom_masks: Vec<Domain> = constrained
        .iter()
        .map(|&i| outs[i as usize].mask.clone())
        .collect();
    let g = greedy(sv_ref, &dom_masks);
    let k_greedy = g.chosen.len();

    let (chosen_dense, merges) = improve(&dom_masks, &g.chosen_dense, &g.cover_of, max_pairs);
    let chosen: Vec<usize> = chosen_dense.iter().map(|&d| g.dense_class[d]).collect();
    let k = chosen.len();

    let mut pinned: BTreeSet<usize> = BTreeSet::new();
    for m in &dom_masks {
        if m.popcount() == 1 {
            if let Some(b) = m.first_bit() {
                pinned.insert(b);
            }
        }
    }
    let mut forced: BTreeSet<usize> = BTreeSet::new();
    for o in &outs {
        if o.exci >= 0 {
            forced.insert(o.exci as usize);
        } else if o.mask.popcount() == 1 {
            if let Some(b) = o.mask.first_bit() {
                forced.insert(b);
            }
        }
    }
    let lb = lower_bound(&dom_masks, sv.nbits).max(pinned.len());

    let chosen_set: BTreeSet<usize> = chosen.iter().copied().collect();
    let bad_cover = dom_masks
        .iter()
        .filter(|m| !chosen_set.iter().any(|&c| m.bit(c)))
        .count();

    SolveOut {
        outs,
        constrained,
        conflicted,
        free,
        chosen,
        assign: g.assign,
        k,
        k_greedy,
        lower_bound: lb,
        merges,
        pinned_classes: pinned.len(),
        forced_classes: forced.len(),
        bad_cover,
        c1_gaps,
        exact_conflicts,
        n_conflicts: n_conflicts_v,
        diag_flagged,
        uncovered_left: g.uncovered_left,
    }
}

// suppress unused-import warning for RefCell (kept out)
#[allow(dead_code)]
fn _unused(_: RefCell<()>) {}
