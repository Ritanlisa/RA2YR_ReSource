//! K2: C10 fixpoint kernel — faithful port of minclass_solver.py's
//! `_c10_base_dom` + `_c10_propagate` + the outer neutralizer loop
//! (L6790-7110): single chaotic iteration to the least fixpoint with
//! junction neutralization (dead junctions / local-conflict roots) and
//! full re-propagation per outer round (≤14 rounds, ≤12 inner rounds).

use crate::domain::Domain;
use crate::solver::Solver;
use std::collections::{BTreeSet, HashMap, HashSet};

pub struct C10Result {
    /// final filtered edges (order preserved)
    pub edges: Vec<(u32, u32)>,
    /// final dom per present node (node idx, mask)
    pub dom: Vec<(u32, Domain)>,
    /// empty ents discovered during neutralization (any order; Python sorts)
    pub empty_ids: Vec<u32>,
    pub neutralized_total: usize,
    pub steps: i64,
    pub skipped: i64,
}

struct NodeSpace {
    /// node idx -> slot (dense per call space)
    slot_of: HashMap<u32, usize>,
    nodes: Vec<u32>,
}

impl NodeSpace {
    fn from_edges(edges: &[(u32, u32)]) -> Self {
        let mut slot_of = HashMap::new();
        let mut nodes = Vec::new();
        for &(a, b) in edges {
            for n in [a, b] {
                if !slot_of.contains_key(&n) {
                    slot_of.insert(n, nodes.len());
                    nodes.push(n);
                }
            }
        }
        NodeSpace { slot_of, nodes }
    }
}

/// _c10_base_dom: merged non-C10 family masks + exact pin seeds per node.
fn base_dom(sv: &mut Solver, ns: &NodeSpace, edges: &[(u32, u32)]) -> Vec<Domain> {
    let c10_fi = sv.fam_idx.get("C10").copied();
    let mut present = vec![false; ns.nodes.len()];
    for &(a, b) in edges {
        present[ns.slot_of[&a]] = true;
        present[ns.slot_of[&b]] = true;
    }
    let mut out: Vec<Domain> = Vec::with_capacity(ns.nodes.len());
    for (slot, &node) in ns.nodes.iter().enumerate() {
        if !present[slot] {
            out.push(sv.full.clone()); // never read (absent from dom dict)
            continue;
        }
        let mut m = sv.full.clone();
        for fi in 0..sv.family_names.len() {
            if Some(fi) == c10_fi {
                continue;
            }
            if let Some(&pi) = sv.fam_maps[fi].get(&node) {
                m.intersect(&sv.mask_pool[pi as usize]);
            }
        }
        if let Some(pins) = sv.exact_pins.get(&node) {
            let mut m_ex = Domain::empty(sv.nbits);
            for &ci in pins {
                m_ex.set(ci);
            }
            m.intersect(&m_ex);
        }
        out.push(m);
    }
    out
}

/// _c10_propagate: ≤12 chaotic rounds over edges in order.
/// Perf: per-slot anc/desc union caches (invalidated on narrowing) +
/// allocation-free subset checks; semantics identical to the naive port.
fn propagate(
    sv: &mut Solver,
    ns: &NodeSpace,
    edges: &[(u32, u32)],
    dom: &mut [Domain],
    skip_empty: bool,
) -> (i64, i64) {
    let nn = ns.nodes.len();
    let mut anc_cache: Vec<Option<Domain>> = vec![None; nn];
    let mut desc_cache: Vec<Option<Domain>> = vec![None; nn];
    let mut steps: i64 = 0;
    let mut skipped: i64 = 0;
    for _round in 0..12 {
        let mut chg: i64 = 0;
        for &(c, e) in edges {
            let sc = ns.slot_of[&c];
            let se = ns.slot_of[&e];
            // allowed_e = anc_union(dom[sc]) — per-slot cached
            if anc_cache[sc].is_none() {
                let mc = dom[sc].clone();
                let u = sv.anc_union(&mc);
                anc_cache[sc] = Some(u);
            }
            // new_e = me & allowed_e — only when not already a subset
            let not_subset = dom[se]
                .words
                .iter()
                .zip(anc_cache[sc].as_ref().unwrap().words.iter())
                .any(|(m, a)| m & !a != 0);
            if not_subset {
                let mut new_e = dom[se].clone();
                new_e.intersect(anc_cache[sc].as_ref().unwrap());
                if skip_empty && new_e.is_empty() {
                    skipped += 1;
                } else {
                    dom[se] = new_e;
                    anc_cache[se] = None; // dom[se] narrowed → both stale
                    desc_cache[se] = None;
                    chg += 1;
                }
            }
            // allowed_c = desc_union(dom[se]) — per-slot cached
            if desc_cache[se].is_none() {
                let me = dom[se].clone();
                let u = sv.desc_union(&me);
                desc_cache[se] = Some(u);
            }
            let not_subset_c = dom[sc]
                .words
                .iter()
                .zip(desc_cache[se].as_ref().unwrap().words.iter())
                .any(|(m, d)| m & !d != 0);
            if not_subset_c {
                let mut new_c = dom[sc].clone();
                new_c.intersect(desc_cache[se].as_ref().unwrap());
                if skip_empty && new_c.is_empty() {
                    skipped += 1;
                } else {
                    dom[sc] = new_c;
                    anc_cache[sc] = None; // dom[sc] narrowed → both stale
                    desc_cache[sc] = None;
                    chg += 1;
                }
            }
        }
        steps += chg;
        if chg == 0 {
            break;
        }
    }
    (steps, skipped)
}

pub fn c10_fixpoint(sv: &mut Solver, edges_in: &[(u32, u32)]) -> C10Result {
    let ns = NodeSpace::from_edges(edges_in);
    let mut edges: Vec<(u32, u32)> = edges_in.to_vec();
    let mut dom = base_dom(sv, &ns, &edges);
    let mut empty_ids: Vec<u32> = Vec::new();
    let mut neutralized_total: usize = 0;
    let mut total_steps: i64 = 0;
    let mut total_skipped: i64 = 0;

    for _outer in 0..14 {
        let (st, sk) = propagate(sv, &ns, &edges, &mut dom, false);
        total_steps += st;
        total_skipped += sk;
        let empt_all: BTreeSet<usize> = ns
            .nodes
            .iter()
            .enumerate()
            .filter(|&(slot, _)| dom[slot].is_empty())
            .map(|(slot, _)| slot)
            .collect();
        if empt_all.is_empty() {
            break;
        }
        let dead_j: BTreeSet<usize> = empt_all
            .iter()
            .copied()
            .filter(|&slot| !sv.ent_ids.contains(&ns.nodes[slot]))
            .collect();
        let mut dead_roots: BTreeSet<usize> = BTreeSet::new();
        if dead_j.is_empty() {
            let base_now = base_dom(sv, &ns, &edges);
            // adjacency (both directions, in edge order)
            let mut adj: HashMap<usize, Vec<(usize, bool)>> = HashMap::new();
            for &(a, b) in &edges {
                let sa = ns.slot_of[&a];
                let sb = ns.slot_of[&b];
                adj.entry(sa).or_default().push((sb, true)); // out
                adj.entry(sb).or_default().push((sa, false)); // in
            }
            for &e0 in &empt_all {
                let eb0 = base_now[e0].clone();
                if let Some(nbrs) = adj.get(&e0) {
                    for &(nb0, is_out) in nbrs {
                        let ob0 = base_now[nb0].clone();
                        let hit = if is_out {
                            let t1 = {
                                let mut t = ob0.clone();
                                t.intersect(&sv.anc_union(&eb0));
                                t.is_empty()
                            };
                            let t2 = {
                                let mut t = eb0.clone();
                                t.intersect(&sv.desc_union(&ob0));
                                t.is_empty()
                            };
                            t1 || t2
                        } else {
                            let t1 = {
                                let mut t = eb0.clone();
                                t.intersect(&sv.anc_union(&ob0));
                                t.is_empty()
                            };
                            let t2 = {
                                let mut t = ob0.clone();
                                t.intersect(&sv.desc_union(&eb0));
                                t.is_empty()
                            };
                            t1 || t2
                        };
                        if hit {
                            dead_roots.insert(e0);
                            break;
                        }
                    }
                }
            }
        }
        let dead: BTreeSet<usize> = dead_j.union(&dead_roots).copied().collect();
        if dead.is_empty() {
            break;
        }
        for &slot in &dead {
            let node = ns.nodes[slot];
            if sv.ent_ids.contains(&node) {
                empty_ids.push(node);
            }
        }
        edges.retain(|&(a, b)| {
            let sa = ns.slot_of.get(&a).copied();
            let sb = ns.slot_of.get(&b).copied();
            let in_dead =
                |s: Option<usize>| s.map(|x| dead.contains(&x)).unwrap_or(false);
            !in_dead(sa) && !in_dead(sb)
        });
        dom = base_dom(sv, &ns, &edges);
        neutralized_total += dead.len();
    }

    // final dom over present nodes only (mirror: dict keyed by edge endpoints)
    let mut present = HashSet::new();
    for &(a, b) in &edges {
        present.insert(ns.slot_of[&a]);
        present.insert(ns.slot_of[&b]);
    }
    let mut dom_out: Vec<(u32, Domain)> = Vec::with_capacity(present.len());
    for (slot, &node) in ns.nodes.iter().enumerate() {
        if present.contains(&slot) {
            dom_out.push((node, dom[slot].clone()));
        }
    }

    C10Result {
        edges,
        dom: dom_out,
        empty_ids,
        neutralized_total,
        steps: total_steps,
        skipped: total_skipped,
    }
}
