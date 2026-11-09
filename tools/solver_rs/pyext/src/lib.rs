//! minclass_rs — PyO3 extension: Rust kernels for minclass_solver.py hot path.
//!
//! K1 `PySolver.solve`        — cluster_domains + greedy + improve + lower_bound + stats
//! K2 `PySolver.c10_fixpoint` — C10 base_dom/propagate/neutralizer composite
//!
//! All inputs are bulk arrays prepared by the Python wrapper; masks cross the
//! boundary as little-endian bytes (Python `int.to_bytes` / `int.from_bytes`).

use pyo3::prelude::*;
use pyo3::types::PyDict;
use std::collections::{HashMap, HashSet};

mod c10;
mod domain;
mod solver;

use domain::Domain;
use solver::{solve_pipeline, Solver, FLAG_EXACT_CONTRADICTS};

#[pyclass]
struct PySolver {
    sv: Solver,
}

fn dom_from_bytes(nbits: usize, b: &[u8]) -> Domain {
    Domain::from_le_bytes(nbits, b)
}

#[pymethods]
impl PySolver {
    #[new]
    #[pyo3(signature = (
        n_bits, classmask, families, fam_eids, fam_masks,
        roots, cluster_ents, cluster_obs, cluster_exact,
        eff_size, intervals, dense, all_exact_classes,
        anc, desc, exact_eids, exact_cis, ent_ids
    ))]
    #[allow(clippy::too_many_arguments)]
    fn new(
        n_bits: usize,
        classmask: Vec<u8>,
        families: Vec<String>,
        fam_eids: Vec<Vec<String>>,
        fam_masks: Vec<Vec<Vec<u8>>>,
        roots: Vec<String>,
        cluster_ents: Vec<Vec<String>>,
        cluster_obs: Vec<Vec<(i64, i64)>>,
        cluster_exact: Vec<Vec<(usize, Vec<String>)>>,
        eff_size: Vec<i64>,
        intervals: Vec<Vec<(i64, i64)>>,
        dense: Vec<bool>,
        all_exact_classes: Vec<usize>,
        anc: Vec<Vec<usize>>,
        desc: Vec<Vec<usize>>,
        exact_eids: Vec<String>,
        exact_cis: Vec<Vec<usize>>,
        ent_ids: Vec<String>,
    ) -> PyResult<Self> {
        if fam_eids.len() != families.len() || fam_masks.len() != families.len() {
            return Err(pyo3::exceptions::PyValueError::new_err(
                "fam_eids/fam_masks length mismatch",
            ));
        }
        let full = Domain::full(n_bits);
        let classmask = dom_from_bytes(n_bits, &classmask);
        let mut intern: HashMap<String, u32> = HashMap::new();
        let mut intern_rev: Vec<String> = Vec::new();
        let mut iget = |s: &str| -> u32 {
            if let Some(&i) = intern.get(s) {
                i
            } else {
                let i = intern_rev.len() as u32;
                intern.insert(s.to_string(), i);
                intern_rev.push(s.to_string());
                i
            }
        };

        // family maps
        let fam_idx: HashMap<String, usize> = families
            .iter()
            .enumerate()
            .map(|(i, f)| (f.clone(), i))
            .collect();
        let mut mask_pool: Vec<Domain> = Vec::new();
        let mut mask_pool_ids: HashMap<Vec<u64>, u32> = HashMap::new();
        let mut fam_maps: Vec<HashMap<u32, u32>> = Vec::with_capacity(families.len());
        for (fi, eids) in fam_eids.iter().enumerate() {
            if eids.len() != fam_masks[fi].len() {
                return Err(pyo3::exceptions::PyValueError::new_err(format!(
                    "fam {} eids/masks length mismatch",
                    families[fi]
                )));
            }
            let mut m: HashMap<u32, u32> = HashMap::with_capacity(eids.len());
            for (k, e) in eids.iter().enumerate() {
                let id = iget(e);
                let d = dom_from_bytes(n_bits, &fam_masks[fi][k]);
                let pi = if let Some(&i) = mask_pool_ids.get(&d.words) {
                    i
                } else {
                    let i = mask_pool.len() as u32;
                    mask_pool.push(d.clone());
                    mask_pool_ids.insert(d.words, i);
                    i
                };
                m.insert(id, pi);
            }
            fam_maps.push(m);
        }

        // clusters
        let mut clusters = Vec::with_capacity(roots.len());
        for (ci, root) in roots.iter().enumerate() {
            let root_id = iget(root);
            let ents: Vec<u32> = cluster_ents[ci].iter().map(|e| iget(e)).collect();
            let exact_raw = cluster_exact[ci].clone();
            clusters.push(solver::Cluster {
                root: root.clone(),
                root_id,
                ents,
                obs: cluster_obs[ci].clone(),
                exact_raw,
            });
        }

        // intervals/starts (sort + merge, mirroring the Python builder)
        let mut ivs: Vec<Vec<(i64, i64)>> = Vec::with_capacity(intervals.len());
        let mut starts: Vec<Vec<i64>> = Vec::with_capacity(intervals.len());
        for iv in &intervals {
            let mut v: Vec<(i64, i64)> = iv.clone();
            v.sort();
            let mut merged: Vec<(i64, i64)> = Vec::new();
            for (a, b) in v {
                if let Some(last) = merged.last_mut() {
                    if a <= last.1 {
                        if b > last.1 {
                            last.1 = b;
                        }
                        continue;
                    }
                }
                merged.push((a, b));
            }
            starts.push(merged.iter().map(|&(a, _)| a).collect());
            ivs.push(merged);
        }

        // exact pins (C10 seeds)
        let mut exact_pins: HashMap<u32, Vec<usize>> = HashMap::new();
        for (k, e) in exact_eids.iter().enumerate() {
            if !exact_cis[k].is_empty() {
                let id = iget(e);
                exact_pins.insert(id, exact_cis[k].clone());
            }
        }

        let ent_ids: HashSet<u32> = ent_ids.iter().map(|e| iget(e)).collect();

        let anc_v: Vec<Vec<u32>> = anc
            .iter()
            .map(|v| v.iter().map(|&x| x as u32).collect())
            .collect();
        let desc_v: Vec<Vec<u32>> = desc
            .iter()
            .map(|v| v.iter().map(|&x| x as u32).collect())
            .collect();

        let sv = Solver {
            nbits: n_bits,
            classmask,
            full,
            family_names: families,
            fam_idx,
            fam_maps,
            mask_pool,
            mask_pool_ids,
            intern,
            intern_rev,
            clusters,
            eff_size,
            intervals: ivs,
            starts,
            dense,
            all_exact_classes: all_exact_classes.into_iter().collect(),
            anc: anc_v,
            desc: desc_v,
            exact_pins,
            ent_ids,
            size_ok_cache: HashMap::new(),
            anc_mask_cache: vec![None; n_bits],
            desc_mask_cache: vec![None; n_bits],
            anc_union_cache: HashMap::new(),
            desc_union_cache: HashMap::new(),
        };
        Ok(PySolver { sv })
    }

    /// K1: full solve pipeline. `enabled` mirrors solve()'s argument (may
    /// contain "C1"; filtered identically). `proven` is _proven_cell[0] as
    /// little-endian bytes. Returns a plain dict consumed by the wrapper.
    #[pyo3(signature = (enabled, proven, unknown_roots, max_pairs, all_masks))]
    fn solve(
        &mut self,
        py: Python<'_>,
        enabled: Vec<String>,
        proven: Vec<u8>,
        unknown_roots: Vec<String>,
        max_pairs: usize,
        all_masks: bool,
    ) -> PyResult<Py<PyDict>> {
        // resolve enabled families (skip C1, order preserved) + C4/C8 gates
        let mut enabled_fams: Vec<usize> = Vec::new();
        let mut has_c4 = false;
        let mut has_c8 = false;
        for f in &enabled {
            if f == "C1" {
                continue;
            }
            let fi = match self.sv.fam_idx.get(f) {
                Some(&i) => i,
                None => {
                    return Err(pyo3::exceptions::PyValueError::new_err(format!(
                        "unknown family {}",
                        f
                    )))
                }
            };
            if f == "C4" {
                has_c4 = true;
            }
            if f == "C8" {
                has_c8 = true;
            }
            enabled_fams.push(fi);
        }
        let proven_dom = dom_from_bytes(self.sv.nbits, &proven);
        let unknown: HashSet<u32> = unknown_roots
            .iter()
            .filter_map(|r| self.sv.intern_id(r))
            .collect();
        let exempt: HashSet<u32> = HashSet::new(); // _c1_exempt is always empty (verified)
        let out = py.allow_threads(|| {
            solve_pipeline(
                &mut self.sv,
                &enabled_fams,
                has_c4,
                has_c8,
                &proven_dom,
                &unknown,
                &exempt,
                max_pairs,
            )
        });

        let dict = PyDict::new(py);
        dict.set_item("constrained", out.constrained.clone())?;
        dict.set_item("conflicted", out.conflicted.clone())?;
        dict.set_item("chosen", out.chosen.clone())?;
        dict.set_item("k", out.k)?;
        dict.set_item("k_greedy", out.k_greedy)?;
        dict.set_item("lower_bound", out.lower_bound)?;
        dict.set_item("merges", out.merges)?;
        dict.set_item("pinned_classes", out.pinned_classes)?;
        dict.set_item("forced_classes", out.forced_classes)?;
        dict.set_item("bad_cover", out.bad_cover)?;
        dict.set_item("c1_gaps", out.c1_gaps)?;
        dict.set_item("exact_conflicts", out.exact_conflicts)?;
        dict.set_item("n_conflicts", out.n_conflicts)?;
        dict.set_item("diag_flagged", out.diag_flagged)?;
        dict.set_item("free", out.free)?;
        dict.set_item("uncovered_left", out.uncovered_left)?;

        // per-cluster arrays (parallel to clusters order)
        let mut exci_all: Vec<i32> = Vec::with_capacity(out.outs.len());
        let mut flags_all: Vec<u8> = Vec::with_capacity(out.outs.len());
        let mut popc_all: Vec<u32> = Vec::with_capacity(out.outs.len());
        for o in &out.outs {
            exci_all.push(o.exci);
            flags_all.push(o.flags);
            popc_all.push(o.mask.popcount());
        }
        dict.set_item("exci", exci_all)?;
        dict.set_item("flagbits", flags_all)?;
        dict.set_item("popcounts", popc_all)?;

        // masks: constrained + conflicted (all clusters when all_masks)
        let masks_dict = PyDict::new(py);
        if all_masks {
            for (i, o) in out.outs.iter().enumerate() {
                masks_dict.set_item(i, o.mask.to_le_bytes())?;
            }
        } else {
            for &i in out.constrained.iter().chain(out.conflicted.iter()) {
                masks_dict.set_item(i as usize, out.outs[i as usize].mask.to_le_bytes())?;
            }
        }
        dict.set_item("masks", masks_dict)?;

        // contra family lists for exact_contradicts clusters (family idx or sentinel)
        let contra_dict = PyDict::new(py);
        for (i, o) in out.outs.iter().enumerate() {
            if o.flags & FLAG_EXACT_CONTRADICTS != 0 {
                contra_dict.set_item(i, o.contra.clone())?;
            }
        }
        dict.set_item("contra", contra_dict)?;

        // assign pairs (cluster idx, class idx)
        dict.set_item("assign_pairs", out.assign.clone())?;

        // dom bits per constrained slot (ascending, capped at 1600)
        let mut bits: Vec<Vec<u16>> = Vec::with_capacity(out.constrained.len());
        for &i in &out.constrained {
            let m = &out.outs[i as usize].mask;
            let b: Vec<u16> = m.iter_bits().take(1600).map(|x| x as u16).collect();
            bits.push(b);
        }
        dict.set_item("dom_bits", bits)?;

        Ok(dict.into())
    }

    /// K2: C10 fixpoint composite over `edges` (string pairs). Returns final
    /// edges, final dom (bytes per entity), empty ent ids, neutralizer stats.
    fn c10_fixpoint(&mut self, py: Python<'_>, edges: Vec<(String, String)>) -> PyResult<Py<PyDict>> {
        // intern any edge endpoints not yet known (sequential, before the
        // GIL-released kernel)
        let mut edge_ids: Vec<(u32, u32)> = Vec::with_capacity(edges.len());
        for (a, b) in &edges {
            let ia = self.sv.intern(a);
            let ib = self.sv.intern(b);
            edge_ids.push((ia, ib));
        }
        let res = py.allow_threads(|| c10::c10_fixpoint(&mut self.sv, &edge_ids));

        let dict = PyDict::new(py);
        let edges_py: Vec<(String, String)> = res
            .edges
            .iter()
            .map(|&(a, b)| {
                (self.sv.name_of(a).to_string(), self.sv.name_of(b).to_string())
            })
            .collect();
        dict.set_item("edges", edges_py)?;
        let dom_dict = PyDict::new(py);
        for (node, m) in &res.dom {
            dom_dict.set_item(self.sv.name_of(*node), m.to_le_bytes())?;
        }
        dict.set_item("dom", dom_dict)?;
        let empt: Vec<String> = res
            .empty_ids
            .iter()
            .map(|&id| self.sv.name_of(id).to_string())
            .collect();
        dict.set_item("empty_ids", empt)?;
        dict.set_item("neutralized_total", res.neutralized_total)?;
        dict.set_item("steps", res.steps)?;
        dict.set_item("skipped", res.skipped)?;
        Ok(dict.into())
    }

    fn n_interned(&self) -> usize {
        self.sv.intern.len()
    }

    fn n_clusters(&self) -> usize {
        self.sv.clusters.len()
    }

    /// incremental family-mask injection (used for fam["C10"] after the C10
    /// writeback loop — the object was built with an empty C10 family map).
    fn add_family_entries(
        &mut self,
        family: String,
        eids: Vec<String>,
        masks: Vec<Vec<u8>>,
    ) -> PyResult<()> {
        let fi = match self.sv.fam_idx.get(&family) {
            Some(&i) => i,
            None => {
                return Err(pyo3::exceptions::PyValueError::new_err(format!(
                    "unknown family {}",
                    family
                )))
            }
        };
        if eids.len() != masks.len() {
            return Err(pyo3::exceptions::PyValueError::new_err(
                "add_family_entries eids/masks length mismatch",
            ));
        }
        let nbits = self.sv.nbits;
        for (k, e) in eids.iter().enumerate() {
            let id = self.sv.intern(e);
            let d = dom_from_bytes(nbits, &masks[k]);
            let pi = self.sv.pool_insert(d);
            self.sv.fam_maps[fi].insert(id, pi);
        }
        Ok(())
    }
}

#[pymodule]
fn minclass_rs(m: &Bound<'_, PyModule>) -> PyResult<()> {
    m.add_class::<PySolver>()?;
    Ok(())
}
