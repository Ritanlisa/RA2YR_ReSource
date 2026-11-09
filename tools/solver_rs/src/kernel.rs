//! minclass 求解内核（Rust 原型）——忠实复刻 tools/csp_export/minclass_solver.py
//! 热路径的「等值类合并 + 簇域传播」最小核：
//!
//!   载入 → 实体驻留/观测 → C4 EXACT 钉 → FUNC_PARAM/CALL_ARG/RET/C20/C17
//!   守卫合并（union-find + EXACT 冲突守卫，最小根=字典序最小实体串）→
//!   簇 → 簇域求交（C1 尺寸下界 + EXACT 覆盖 + 接收者类域钳制 + 空域回退）→
//!   贪心集合覆盖（特异性 tie-break）+ 不相交打包下界
//!
//! 与完整求解器的差异（rust_report.md 全表）：族证据只含 C1（尺寸下界）+ C4
//! （EXACT）；G/M 源证明、C2/C3/C5..、C26、improve 阶段省略；eff_size 无抬升。

use std::collections::{HashMap, HashSet};
use std::time::Instant;

use rayon::prelude::*;

use crate::domain::Domain;
use crate::entity::{ent_id, Interner};
use crate::uf::GuardedUf;
use crate::universe::Universe;

// ---------------------------------------------------------------------------
// 数据载入
// ---------------------------------------------------------------------------

#[derive(serde::Deserialize, Clone)]
pub struct RawEdge {
    #[serde(rename = "type", default)]
    pub ty: String,
    #[serde(default)]
    pub from: Option<String>,
    #[serde(default)]
    pub to: Option<String>,
    #[serde(default)]
    pub receiver: Option<String>,
    #[serde(default)]
    pub base: Option<String>,
    #[serde(default)]
    pub offset: Option<serde_json::Value>,
    #[serde(default)]
    pub width: Option<serde_json::Value>,
    #[serde(default)]
    pub addr: Option<serde_json::Value>,
}

pub fn hx_val(v: &Option<serde_json::Value>) -> Option<u64> {
    match v {
        Some(serde_json::Value::String(s)) => crate::entity::hex_parse(s),
        Some(serde_json::Value::Number(n)) => n.as_u64(),
        _ => None,
    }
}

pub struct BinaryFacts {
    pub alloc_sites: Vec<(u64, u64)>,
    /// (fn, off, sym)
    pub this_installs: Vec<(u64, i64, String)>,
    /// (site, reg) -> (src_entity_str, clean)
    pub reg_links: HashMap<(u64, String), (String, bool)>,
}

pub fn load_edges(path: &str) -> Vec<RawEdge> {
    let f = std::fs::File::open(path).expect("raw_constraints.json");
    #[derive(serde::Deserialize)]
    struct Wrap {
        #[serde(default)]
        constraints: Vec<RawEdge>,
    }
    let w: Wrap = serde_json::from_reader(std::io::BufReader::new(f)).expect("parse raw");
    w.constraints
}

pub fn load_facts(path: &str) -> BinaryFacts {
    let f = std::fs::File::open(path).expect("minclass_binary_facts.json");
    let v: serde_json::Value =
        serde_json::from_reader(std::io::BufReader::new(f)).expect("parse facts");
    let arr = |k: &str| v.get(k).and_then(|x| x.as_array()).cloned().unwrap_or_default();

    let mut alloc_sites = Vec::new();
    for a in arr("alloc_sites") {
        alloc_sites.push((
            a.get(0).and_then(|x| x.as_u64()).unwrap_or(0),
            a.get(1).and_then(|x| x.as_u64()).unwrap_or(0),
        ));
    }
    let mut this_installs = Vec::new();
    for a in arr("this_installs") {
        this_installs.push((
            a.get(0).and_then(|x| x.as_u64()).unwrap_or(0),
            a.get(2).and_then(|x| x.as_i64()).unwrap_or(-1),
            a.get(3).and_then(|x| x.as_str()).unwrap_or("").to_string(),
        ));
    }
    let mut reg_links = HashMap::new();
    for a in arr("reg_links") {
        if a.as_array().map(|x| x.len() >= 4).unwrap_or(false) {
            reg_links.insert(
                (
                    a.get(0).and_then(|x| x.as_u64()).unwrap_or(0),
                    a.get(1).and_then(|x| x.as_str()).unwrap_or("").to_string(),
                ),
                (
                    a.get(2).and_then(|x| x.as_str()).unwrap_or("").to_string(),
                    a.get(3).and_then(|x| x.as_u64()).unwrap_or(0) != 0,
                ),
            );
        }
    }
    BinaryFacts { alloc_sites, this_installs, reg_links }
}

pub fn load_faddrs(path: &str) -> Vec<u64> {
    let f = std::fs::File::open(path).expect("ida_function_protos.json");
    let v: serde_json::Value =
        serde_json::from_reader(std::io::BufReader::new(f)).expect("parse protos");
    let mut out = Vec::new();
    if let Some(obj) = v.as_object() {
        for k in obj.keys() {
            if let Some(a) = crate::entity::hex_parse(k) {
                out.push(a);
            }
        }
    }
    out.sort_unstable();
    out
}

pub fn load_bool_map(path: &str, map_key: Option<&str>) -> HashMap<u64, bool> {
    let f = match std::fs::File::open(path) {
        Ok(f) => f,
        Err(_) => return HashMap::new(),
    };
    let v: serde_json::Value = match serde_json::from_reader(std::io::BufReader::new(f)) {
        Ok(v) => v,
        Err(_) => return HashMap::new(),
    };
    let obj = match map_key {
        Some(k) => v.get(k).and_then(|x| x.as_object()).cloned().unwrap_or_default(),
        None => v.as_object().cloned().unwrap_or_default(),
    };
    let mut out = HashMap::new();
    for (k, val) in obj {
        if let Some(a) = crate::entity::hex_parse(&k) {
            out.insert(a, val.as_bool().unwrap_or(false));
        }
    }
    out
}

pub fn fn_at(faddrs: &[u64], a: u64) -> Option<u64> {
    if faddrs.is_empty() {
        return None;
    }
    let i = faddrs.partition_point(|&x| x <= a);
    if i == 0 {
        None
    } else {
        Some(faddrs[i - 1])
    }
}

// ---------------------------------------------------------------------------
// 结果
// ---------------------------------------------------------------------------

#[derive(Default, Clone)]
pub struct Cluster {
    pub root: u32,
    pub ents: Vec<u32>,
    /// (offset, width-or-None)，升序
    pub obs: Vec<(u32, Option<u32>)>,
    /// (ci, src) 升序
    pub exact: Vec<(u32, &'static str)>,
}

#[derive(Default, Clone, Debug, serde::Serialize)]
pub struct KernelResult {
    pub n_edges: usize,
    pub n_ents: usize,
    pub n_ents_obs: usize,
    pub c1_evidence: u64,
    pub c4_exact: u64,
    pub uf_nodes: usize,
    pub unions: u64,
    pub exact_rejects: u64,
    pub merge_rejects: Vec<(String, u64)>,
    pub n_clusters: usize,
    pub n_constrained: usize,
    pub n_conflicted: usize,
    pub n_free: usize,
    pub k_greedy: usize,
    pub lower_bound: usize,
    pub forced_classes: usize,
    pub pinned_classes: usize,
    pub dom_popcount_sum: u64,
    pub dom_size_hist: Vec<u64>,
    /// greedy 选类集合（排序后）——与 Python 参照对拍
    pub chosen_sorted: Vec<u32>,
}

// ---------------------------------------------------------------------------
// 内核
// ---------------------------------------------------------------------------

pub struct Kernel<'a> {
    pub u: &'a Universe,
    pub interner: Interner,
    /// ents 成员序（= Python ents dict 插入序）
    pub ents_order: Vec<u32>,
    is_ent: Vec<bool>,
    pub uf: GuardedUf,
    pub obs: HashMap<u32, HashSet<(u32, Option<u32>)>>,
    pub exact: HashMap<u32, Vec<(u32, &'static str)>>,
    pub n_edges: usize,
    pub c1_evidence: u64,
    pub c4_exact: u64,
    pub merge_rejects: Vec<(String, u64)>,
}

impl<'a> Kernel<'a> {
    pub fn new(u: &'a Universe) -> Self {
        Kernel {
            u,
            interner: Interner::new(),
            ents_order: Vec::new(),
            is_ent: Vec::new(),
            uf: GuardedUf::new(),
            obs: HashMap::new(),
            exact: HashMap::new(),
            n_edges: 0,
            c1_evidence: 0,
            c4_exact: 0,
            merge_rejects: Vec::new(),
        }
    }

    fn intern(&mut self, s: &str) -> u32 {
        let i = self.interner.intern(s);
        if self.is_ent.len() <= i as usize {
            self.is_ent.resize(i as usize + 1, false);
        }
        i
    }

    /// touch()：R:/V: 不进 ents（连接点语义，L1477-1483）
    fn touch(&mut self, eid: u32) {
        let s = self.interner.names[eid as usize].as_str();
        if s.starts_with("R:") || s.starts_with("V:") {
            return;
        }
        if !self.is_ent[eid as usize] {
            self.is_ent[eid as usize] = true;
            self.ents_order.push(eid);
        }
    }

    fn ent_of_intern(&mut self, raw: Option<&String>, fn_ctx: Option<u64>) -> Option<u32> {
        let raw = raw?;
        let s = ent_id(raw, fn_ctx)?;
        Some(self.intern(&s))
    }

    fn is_ent_id(&self, eid: u32) -> bool {
        self.is_ent.get(eid as usize).copied().unwrap_or(false)
    }

    // ---- 阶段 1：实体/观测收集（L1490-1513 / 1802-1841 / 1868）----

    pub fn stage_collect(&mut self, edges: &[RawEdge], facts: &BinaryFacts, faddrs: &[u64]) {
        self.n_edges = edges.len();

        // (a) 被调方实体预创建（CALL_ARG → :this）
        for e in edges {
            if e.ty != "CALL_ARG" {
                continue;
            }
            let to = match &e.to {
                Some(t) => t,
                None => continue,
            };
            if !to.ends_with(":this") || to.starts_with("vtable_slot_") {
                continue;
            }
            if let Some(s) = ent_id(to, None) {
                let eid = self.intern(&s);
                self.touch(eid);
            }
        }

        // (b) MEMBER_ACCESS → obs（并行分片解析，按边序串行落地保持 ents 插入序）
        let parsed: Vec<Vec<(String, u32, Option<u32>)>> = edges
            .par_chunks(1 << 16)
            .map(|chunk| {
                let mut v = Vec::new();
                for e in chunk {
                    if e.ty != "MEMBER_ACCESS" {
                        continue;
                    }
                    let base = match &e.base {
                        Some(b) => b,
                        None => continue,
                    };
                    let s = match ent_id(base, None) {
                        Some(s) => s,
                        None => continue,
                    };
                    let off = e.offset.as_ref().and_then(|x| x.as_i64()).unwrap_or(0);
                    let w = e.width.as_ref().and_then(|x| x.as_u64()).filter(|w| *w > 0);
                    v.push((s, off as u32, w.map(|x| x as u32)));
                }
                v
            })
            .collect();
        let mut c1 = 0u64;
        for shard in &parsed {
            for (s, off, w) in shard {
                let eid = self.intern(s);
                self.touch(eid);
                self.obs.entry(eid).or_default().insert((*off, *w));
                c1 += 1;
            }
        }
        self.c1_evidence = c1;

        // (c) FUNC_PARAM / CALL_ARG / CALL_VTABLE / RETURN touch
        for e in edges {
            match e.ty.as_str() {
                "FUNC_PARAM" => {
                    let fr = match &e.from {
                        Some(f) => f,
                        None => continue,
                    };
                    let a = if fr.contains(":this") {
                        crate::entity::hex_parse(fr.split(':').next().unwrap_or(""))
                    } else {
                        None
                    };
                    if let Some(eid) = self.ent_of_intern(Some(fr), a) {
                        self.touch(eid);
                    }
                }
                "CALL_ARG" => {
                    let a = hx_val(&e.addr).unwrap_or(0);
                    if let Some(eid) = self.ent_of_intern(e.to.as_ref(), None) {
                        self.touch(eid);
                    }
                    if let Some(eid) = self.ent_of_intern(e.from.as_ref(), fn_at(faddrs, a)) {
                        self.touch(eid);
                    }
                }
                "CALL_VTABLE" => {
                    let a = hx_val(&e.addr).unwrap_or(0);
                    if let Some(eid) = self.ent_of_intern(e.receiver.as_ref(), fn_at(faddrs, a)) {
                        self.touch(eid);
                    }
                    if let Some(eid) = self.ent_of_intern(e.to.as_ref(), None) {
                        self.touch(eid);
                    }
                }
                "RETURN" => {
                    if let Some(eid) = self.ent_of_intern(e.to.as_ref(), None) {
                        self.touch(eid);
                    }
                }
                _ => {}
            }
        }

        // (d) alloc_sites → N: 实体
        for (_fn_, site) in &facts.alloc_sites {
            let s = format!("N:{site:X}");
            let eid = self.intern(&s);
            self.touch(eid);
        }
    }

    // ---- 阶段 2：C4 EXACT（this_installs off==0 export 单类路径，L2700-2721）----

    pub fn stage_c4_exact(&mut self, facts: &BinaryFacts) -> u64 {
        let mut src: HashMap<u64, HashSet<u32>> = HashMap::new();
        for (fn_, off, sym) in &facts.this_installs {
            if *off != 0 {
                continue;
            }
            if let Some(ci) = self.u.resolve(sym) {
                src.entry(*fn_).or_default().insert(ci);
            }
        }
        let mut n = 0u64;
        let mut pins: Vec<(u32, u32)> = Vec::new();
        for (a, ex) in &src {
            if ex.len() != 1 {
                continue;
            }
            let s = format!("T:{a:X}");
            if let Some(eid) = self.interner.get(&s) {
                if !self.is_ent_id(eid) {
                    continue; // 复刻 `if eid in ents`
                }
                let ci = *ex.iter().next().unwrap();
                pins.push((eid, ci));
                n += 1;
            }
        }
        for (eid, ci) in pins {
            self.exact.entry(eid).or_default().push((ci, "C4"));
            self.uf.set_exact(eid, ci);
        }
        self.c4_exact = n;
        n
    }

    // ---- 阶段 3：等值合并（L4742-4957）----

    pub fn stage_equality(
        &mut self,
        edges: &[RawEdge],
        facts: &BinaryFacts,
        faddrs: &[u64],
        ret_this: &HashMap<u64, bool>,
        takes_this: &HashMap<u64, bool>,
    ) {
        let mut rejects: HashMap<String, u64> = HashMap::new();
        macro_rules! bump {
            ($k:expr) => {
                *rejects.entry($k.to_string()).or_default() += 1;
            };
        }

        // (a) FUNC_PARAM：ent_id(from) ≡ ent_id(to)（fn 上下文 = from 地址前缀）
        for e in edges {
            if e.ty != "FUNC_PARAM" {
                continue;
            }
            let fr = match &e.from {
                Some(f) => f,
                None => continue,
            };
            let a = crate::entity::hex_parse(fr.split(':').next().unwrap_or(""));
            let fe = self.ent_of_intern(Some(fr), a);
            let te = self.ent_of_intern(e.to.as_ref(), a);
            if let (Some(ae), Some(be)) = (fe, te) {
                self.uf.guarded_union_by(ae, be, &self.interner.names);
            }
        }

        // (b) CALL_ARG 候选收集
        // per-to-string 边计数（_edge_cnt，L4840-4851）
        let mut edge_cnt: HashMap<u32, u64> = HashMap::new();
        {
            let mut cnt_str: HashMap<&str, u64> = HashMap::new();
            for e in edges {
                if e.ty != "CALL_ARG" {
                    continue;
                }
                if let Some(t) = &e.to {
                    if t.contains(":this") || t.contains("::param") {
                        *cnt_str.entry(t.as_str()).or_default() += 1;
                    }
                }
            }
            for (t, c) in cnt_str {
                if let Some(s) = ent_id(t, None) {
                    if let Some(te) = self.interner.get(&s) {
                        let e0 = edge_cnt.entry(te).or_default();
                        *e0 = (*e0).max(c);
                    }
                }
            }
        }

        struct Cand {
            channel: u8, // 0=reg_def 1=direct
            fe: u32,
            te: u32,
            kind: u8,
            clean: bool,
        }
        let mut cands: Vec<Cand> = Vec::new();
        let mut target_froms: HashMap<u32, HashSet<u32>> = HashMap::new();
        for e in edges {
            if e.ty != "CALL_ARG" {
                continue;
            }
            let to = match &e.to {
                Some(t) => t,
                None => continue,
            };
            // is_arg_target（L4738-4740）
            if !((to.ends_with(":this") || to.contains("::param"))
                && !to.starts_with("vtable_slot_"))
            {
                continue;
            }
            let fr = match &e.from {
                Some(f) => f.clone(),
                None => continue,
            };
            if fr.starts_with("stack_+") {
                continue;
            }
            let a = hx_val(&e.addr).unwrap_or(0);
            let te = match self.ent_of_intern(Some(&to), None) {
                Some(t) => t,
                None => continue,
            };
            if crate::entity::is_reg(&fr) {
                if let Some((src, clean)) = facts.reg_links.get(&(a, fr.clone())) {
                    if src.is_empty() {
                        continue;
                    }
                    let fe = self.intern(src);
                    let kind = src.as_bytes()[0];
                    cands.push(Cand { channel: 0, fe, te, kind, clean: *clean });
                    target_froms.entry(te).or_default().insert(fe);
                }
                continue;
            }
            let fe = match self.ent_of_intern(Some(&fr), fn_at(faddrs, a)) {
                Some(f) => f,
                None => continue,
            };
            let kind = self.interner.names[fe as usize].as_bytes()[0];
            cands.push(Cand { channel: 1, fe, te, kind, clean: true });
            target_froms.entry(te).or_default().insert(fe);
        }

        // (c) 守卫合并（L4852-4888）
        for c in cands {
            let multi = target_froms
                .get(&c.te)
                .map(|s| s.len() > 1)
                .unwrap_or(false)
                || edge_cnt.get(&c.te).copied().unwrap_or(0) > 1;
            if multi {
                bump!("multi_caller_join");
                continue;
            }
            if c.channel == 0 {
                if !c.clean {
                    bump!("reg_flow_tainted");
                    continue;
                }
            } else if c.kind == b'G' {
                // 核内无 singleton/ctor-types 证明表 → 保守拒绝（求解器同语义）
                bump!("global_unproven(kernel)");
                continue;
            } else if c.kind == b'M' {
                bump!("member_chain_unproven(kernel)");
                continue;
            } else if !(c.kind == b'T' || c.kind == b'P') {
                bump!("unproven_kind");
                continue;
            }
            self.uf.guarded_union_by(c.fe, c.te, &self.interner.names);
        }

        // (d) RET == this（fn_returns_this，L4896-4910）
        for (a, flag) in ret_this {
            if !*flag {
                continue;
            }
            let rs = format!("RET:{a:X}");
            let ts = format!("T:{a:X}");
            if let (Some(r), Some(t)) = (self.interner.get(&rs), self.interner.get(&ts)) {
                if self.is_ent_id(r) && self.is_ent_id(t) {
                    self.uf.guarded_union_by(r, t, &self.interner.names);
                }
            }
        }

        // (e) C20 ecx == this（fn_takes_this，L4916-4939）
        for (a, flag) in takes_this {
            if !*flag {
                continue;
            }
            let rs = format!("R:{a:X}:ecx");
            let ts = format!("T:{a:X}");
            if let (Some(r), Some(t)) = (self.interner.get(&rs), self.interner.get(&ts)) {
                if self.is_ent_id(r) && self.is_ent_id(t) {
                    self.uf.guarded_union_by(r, t, &self.interner.names);
                }
            }
        }

        // (f) C17 洁净寄存器 == this（reg_links src 为 T:，L4945-4957）
        for ((_site, reg), (src, clean)) in &facts.reg_links {
            if !*clean || !src.starts_with("T:") {
                continue;
            }
            let reid = format!("R:{}:{reg}", &src[2..]);
            if let (Some(r), Some(t)) = (self.interner.get(&reid), self.interner.get(src)) {
                if self.is_ent_id(r) && self.is_ent_id(t) {
                    self.uf.guarded_union_by(r, t, &self.interner.names);
                }
            }
        }

        let mut rv: Vec<(String, u64)> = rejects.into_iter().collect();
        rv.sort();
        self.merge_rejects = rv;
    }

    // ---- 阶段 4：簇（L4971-4985）----

    pub fn stage_clusters(&mut self) -> Vec<Cluster> {
        let mut order: Vec<u32> = Vec::new();
        let mut index: HashMap<u32, usize> = HashMap::new();
        let mut members: Vec<Vec<u32>> = Vec::new();
        for &eid in &self.ents_order {
            let root = self.uf.find(eid);
            match index.get(&root) {
                Some(&i) => members[i].push(eid),
                None => {
                    index.insert(root, members.len());
                    order.push(root);
                    members.push(vec![eid]);
                }
            }
        }
        let n = members.len();
        let mut clusters: Vec<Cluster> = (0..n)
            .map(|i| Cluster {
                root: order[i],
                ents: std::mem::take(&mut members[i]),
                obs: Vec::new(),
                exact: Vec::new(),
            })
            .collect();
        for cl in clusters.iter_mut() {
            let mut obs_set: HashSet<(u32, Option<u32>)> = HashSet::new();
            let mut ex_map: HashMap<u32, Vec<&'static str>> = HashMap::new();
            for &m in &cl.ents {
                if let Some(s) = self.obs.get(&m) {
                    obs_set.extend(s.iter().copied());
                }
                if let Some(lst) = self.exact.get(&m) {
                    for (ci, src) in lst {
                        ex_map.entry(*ci).or_default().push(src);
                    }
                }
            }
            let mut obs: Vec<(u32, Option<u32>)> = obs_set.into_iter().collect();
            obs.sort_unstable();
            let mut exv: Vec<(u32, &'static str)> =
                ex_map.into_iter().map(|(ci, ss)| (ci, ss[0])).collect();
            exv.sort_unstable();
            cl.obs = obs;
            cl.exact = exv;
        }
        clusters
    }

    // ---- 阶段 5：簇域 + 贪心（cluster_domains/greedy/lower_bound）----

    pub fn stage_solve(&mut self, clusters: &[Cluster]) -> KernelResult {
        let nbits = self.u.n;
        let full = Domain::full(nbits);
        let classmask = self.u.classmask();

        // C1 尺寸下界掩码缓存（need -> Domain）
        let mut needs: HashSet<u32> = HashSet::new();
        for cl in clusters {
            let root_str = &self.interner.names[cl.root as usize];
            if !root_str.starts_with("T:") || cl.obs.is_empty() {
                continue;
            }
            let mut need = 0u32;
            for &(o, w) in &cl.obs {
                let ww = w.unwrap_or(4);
                if o + ww > need {
                    need = o + ww;
                }
            }
            if need > 0 {
                needs.insert(need);
            }
        }
        let mut size_masks: HashMap<u32, Domain> = HashMap::new();
        for &need in &needs {
            let mut m = Domain::empty(nbits);
            for i in 0..nbits {
                // 复刻 `if not _sz or int(_sz) >= need`：None 或 0 = 未知 → 放行
                match self.u.layout_size[i] {
                    Some(s) if s > 0 && (s as u32) < need => {}
                    _ => {
                        m.set(i);
                    }
                }
            }
            size_masks.insert(need, m);
        }

        struct DomOut {
            domain: Domain,
            exact_ci: Option<u32>,
            hard_flag: Option<&'static str>,
            soft_flags: Vec<&'static str>,
        }

        let sm_ref = &size_masks;
        let intn = &self.interner;
        let doms: Vec<DomOut> = clusters
            .par_iter()
            .map(|cl| {
                let root_str = &intn.names[cl.root as usize];
                let c1_applies = root_str.starts_with("T:");
                let mut m = full.clone();
                let mut need = 0u32;
                if c1_applies && !cl.obs.is_empty() {
                    for &(o, w) in &cl.obs {
                        let ww = w.unwrap_or(4);
                        if o + ww > need {
                            need = o + ww;
                        }
                    }
                    if need > 0 {
                        if let Some(sm) = sm_ref.get(&need) {
                            m.intersect(sm);
                        }
                    }
                }
                let mut mask_c1 = m.clone(); // _pfm 省略（proven universe 全保留口径）

                // EXACT 覆盖优先
                let exs: Vec<(u32, &'static str)> = cl.exact.clone();
                if exs.len() == 1 {
                    let exact_ci = exs[0].0;
                    let mut flags = Vec::new();
                    if !mask_c1.bit(exact_ci as usize) && !cl.obs.is_empty() {
                        flags.push("C1(missing-offset)");
                    }
                    return DomOut {
                        domain: Domain::single(nbits, exact_ci as usize),
                        exact_ci: Some(exact_ci),
                        hard_flag: None,
                        soft_flags: flags,
                    };
                }
                if exs.len() > 1 {
                    let mut d = Domain::empty(nbits);
                    for (ci, _) in &exs {
                        d.set(*ci as usize);
                    }
                    return DomOut {
                        domain: d,
                        exact_ci: None,
                        hard_flag: Some("exact_conflict"),
                        soft_flags: vec![],
                    };
                }

                // 接收者类域钳制（T:/R:/GS；族掩码空交→族置 FULL，主域保留，L5164-5171）
                let pfx2 = &root_str[..root_str.len().min(2)];
                if pfx2 == "T:" || pfx2 == "R:" || pfx2 == "GS" {
                    if mask_c1.intersects(&classmask) {
                        mask_c1.intersect(&classmask);
                    } else {
                        mask_c1 = full.clone();
                    }
                    if m.intersects(&classmask) {
                        m.intersect(&classmask);
                    }
                }

                if !m.is_empty() {
                    return DomOut { domain: m, exact_ci: None, hard_flag: None, soft_flags: vec![] };
                }
                // 空域回退：非 FULL 族掩码之并
                let mut fb = Domain::empty(nbits);
                if !mask_c1.is_empty() && !mask_c1.is_full() {
                    fb.union(&mask_c1);
                }
                let flag = if !mask_c1.is_empty() && !mask_c1.is_full() {
                    "c1_gap"
                } else {
                    "empty_domain"
                };
                if fb.is_empty() {
                    fb = full.clone();
                }
                DomOut { domain: fb, exact_ci: None, hard_flag: None, soft_flags: vec![flag] }
            })
            .collect();

        // solve() 分桶（L5355-5384）
        let mut constrained: Vec<(usize, Domain)> = Vec::new();
        let mut n_conflicted = 0usize;
        let mut forced: HashSet<u32> = HashSet::new();
        let mut pinned: HashSet<u32> = HashSet::new();
        let mut dom_pop_sum = 0u64;
        let mut hist = vec![0u64; 16];
        for (i, d) in doms.iter().enumerate() {
            let pc = d.domain.popcount();
            if let Some(ci) = d.exact_ci {
                forced.insert(ci);
            } else if pc == 1 {
                if let Some(b) = d.domain.first_bit() {
                    forced.insert(b as u32);
                }
            }
            if pc == 1 {
                if let Some(b) = d.domain.first_bit() {
                    pinned.insert(b as u32);
                }
            }
            if d.hard_flag.is_some() {
                n_conflicted += 1;
                continue;
            }
            if !d.domain.is_full() {
                dom_pop_sum += pc as u64;
                hist[(pc as usize).min(15)] += 1;
                constrained.push((i, d.domain.clone()));
            }
        }
        let n_free = clusters.len() - constrained.len() - n_conflicted;

        // ALL_EXACT_CLASSES（support 加成）
        let mut support_extra: HashSet<u32> = HashSet::new();
        for cl in clusters {
            for (ci, _) in &cl.exact {
                support_extra.insert(*ci);
            }
        }

        let (chosen, _assign_n) = greedy(&constrained, &support_extra);
        let lb = lower_bound(&constrained);
        let mut chosen_sorted = chosen;
        chosen_sorted.sort_unstable();

        KernelResult {
            n_edges: self.n_edges,
            n_ents: self.ents_order.len(),
            n_ents_obs: self.obs.values().filter(|s| !s.is_empty()).count(),
            c1_evidence: self.c1_evidence,
            c4_exact: self.c4_exact,
            uf_nodes: self.uf.size(),
            unions: self.uf.unions,
            exact_rejects: self.uf.exact_rejects,
            merge_rejects: self.merge_rejects.clone(),
            n_clusters: clusters.len(),
            n_constrained: constrained.len(),
            n_conflicted,
            n_free,
            k_greedy: chosen_sorted.len(),
            lower_bound: lb,
            forced_classes: forced.len(),
            pinned_classes: pinned.len(),
            dom_popcount_sum: dom_pop_sum,
            dom_size_hist: hist,
            chosen_sorted,
        }
    }
}

// ---------------------------------------------------------------------------
// 贪心集合覆盖 + 下界（L5229-5270 / 5342-5351）
// ---------------------------------------------------------------------------

pub fn greedy(dom_list: &[(usize, Domain)], support_extra: &HashSet<u32>) -> (Vec<u32>, usize) {
    let nc = dom_list.len();

    // cover_of：插入序键（= 各簇 bit 升序、簇序首触）
    let mut cover_keys: Vec<u32> = Vec::new();
    let mut cover_pos: HashMap<u32, usize> = HashMap::new();
    let mut cover_sets: Vec<Vec<usize>> = Vec::new();
    let mut cls_of_cluster: Vec<Vec<u32>> = Vec::with_capacity(nc);
    for (ci_cl, (_, m)) in dom_list.iter().enumerate() {
        let mut lst = Vec::new();
        for b in m.iter_bits() {
            let k = b as u32;
            lst.push(k);
            let p = match cover_pos.get(&k) {
                Some(&p) => p,
                None => {
                    cover_keys.push(k);
                    cover_sets.push(Vec::new());
                    let p = cover_keys.len() - 1;
                    cover_pos.insert(k, p);
                    p
                }
            };
            cover_sets[p].push(ci_cl);
        }
        cls_of_cluster.push(lst);
    }

    // counts：插入序 = cover_keys 序
    let mut counts: Vec<i64> = cover_sets.iter().map(|s| s.len() as i64).collect();

    // support：单点域 + EXACT 类
    let mut support: HashMap<u32, i64> = HashMap::new();
    for (_, m) in dom_list.iter() {
        if m.popcount() == 1 {
            if let Some(b) = m.first_bit() {
                *support.entry(b as u32).or_default() += 1;
            }
        }
    }
    for &ci in support_extra {
        *support.entry(ci).or_default() += 1;
    }

    let mut uncovered: Vec<bool> = vec![true; nc];
    let mut remaining = nc;
    let mut chosen: Vec<u32> = Vec::new();
    let mut assign_n = 0usize;

    while remaining > 0 {
        let mut best_i: i64 = -1;
        let mut bestn: i64 = 0;
        let mut bestsup: i64 = -1;
        for (i, &c) in counts.iter().enumerate() {
            if c <= 0 && bestn > 0 {
                continue;
            }
            let k = cover_keys[i];
            let sup = support.get(&k).copied().unwrap_or(0);
            if c > bestn || (c == bestn && c > 0 && sup > bestsup) {
                best_i = i as i64;
                bestn = c;
                bestsup = sup;
            }
        }
        if best_i < 0 || bestn == 0 {
            break;
        }
        let bi = best_i as usize;
        let bcls = cover_keys[bi];
        let take: Vec<usize> = cover_sets[bi]
            .iter()
            .copied()
            .filter(|&cl| uncovered[cl])
            .collect();
        for cl in &take {
            assign_n += 1;
            uncovered[*cl] = false;
            remaining -= 1;
            for &c in &cls_of_cluster[*cl] {
                if let Some(&p) = cover_pos.get(&c) {
                    if counts[p] > 0 {
                        counts[p] -= 1;
                    }
                }
            }
        }
        counts[bi] = -1;
        chosen.push(bcls);
    }
    (chosen, assign_n)
}

pub fn lower_bound(dom_list: &[(usize, Domain)]) -> usize {
    let nbits = dom_list.first().map(|(_, d)| d.nbits).unwrap_or(1);
    let mut idxs: Vec<usize> = (0..dom_list.len()).collect();
    idxs.sort_by_key(|&i| dom_list[i].1.popcount()); // 稳定排序 = Python sorted
    let mut picked = Domain::empty(nbits);
    let mut lb = 0usize;
    for i in idxs {
        let m = &dom_list[i].1;
        if m.is_empty() {
            continue;
        }
        let mut t = m.clone();
        t.intersect(&picked);
        if t.is_empty() {
            picked.union(m);
            lb += 1;
        }
    }
    lb
}

// ---------------------------------------------------------------------------
// 传播吞吐微基准：60 族合成层（测热循环形状，不进结果）
// ---------------------------------------------------------------------------

pub fn splitmix64(x: &mut u64) -> u64 {
    *x = x.wrapping_add(0x9E37_79B9_7F4A_7C15);
    let mut z = *x;
    z = (z ^ (z >> 30)).wrapping_mul(0xBF58_476D_1CE4_E5B9);
    z = (z ^ (z >> 27)).wrapping_mul(0x94D0_49BB_1331_11EB);
    z ^ (z >> 31)
}

/// FNV-1a 64（Python 参照逐字节同构——合成层种子用，跨语言一致）
pub fn fnv1a64(s: &str) -> u64 {
    let mut h: u64 = 0xcbf2_9ce4_8422_2325;
    for b in s.as_bytes() {
        h ^= *b as u64;
        h = h.wrapping_mul(0x0000_0100_0000_01b3);
    }
    h
}

/// 与 Python 参照逐位同构的稀疏约束模型（模拟求解器 fam 分布形态：
/// 多数实体在多数族中无证据=FULL；p=1/16 非 FULL，非 FULL 时密度 1/2）。
/// seed = fnv1a(entity_str)*0x9E3779B9 + (fam<<32)。
pub fn synth_fam_mask(nbits: usize, ent_hash: u64, fam: u32) -> Domain {
    let mut st = ent_hash.wrapping_mul(0x9E37_79B9).wrapping_add((fam as u64) << 32);
    let gate = splitmix64(&mut st);
    if gate & 15 != 0 {
        return Domain::full(nbits); // 无证据 → FULL（热路径大多数走这条）
    }
    let mut words = vec![0u64; (nbits + 63) / 64];
    let mut filled = 0usize;
    while filled < nbits {
        let r = splitmix64(&mut st);
        for b in 0..64 {
            if filled >= nbits {
                break;
            }
            words[filled / 64] |= ((r >> b) & 1) << (filled % 64);
            filled += 1;
        }
    }
    Domain { words, nbits }
}

pub struct PropResult {
    pub micros: u64,
    pub and_ops: u64,
    pub checksum: u64,
    pub gen_micros: u64,
    pub gen_ops: u64,
}

/// 两阶段传播微基准：
///   phase1（生成，单独计时）——稀疏约束模型预生成非 FULL 掩码；
///   phase2（传播，主计时）——每簇 × 每族 × 每实体 `fam.get(eid, FULL)` + AND，
///   即求解器 cluster_domains 内层循环的真实形状（dict 查找 + 掩码求交）。
pub fn propagation_bench(
    clusters: &[Cluster],
    ent_names: &[String],
    nbits: usize,
    n_fams: usize,
) -> PropResult {
    // phase 1：预生成（计时但不并入传播耗时）
    let t_gen0 = Instant::now();
    let max_id = clusters
        .iter()
        .flat_map(|c| c.ents.iter().copied())
        .max()
        .unwrap_or(0) as usize;
    let mut ent_fnv = vec![0u64; max_id + 1];
    for (i, h) in ent_fnv.iter_mut().enumerate() {
        if i < ent_names.len() {
            *h = fnv1a64(&ent_names[i]);
        }
    }
    let mut fam: HashMap<(u32, u32), Domain> = HashMap::new();
    let mut gen_ops = 0u64;
    for cl in clusters {
        for &eid in &cl.ents {
            for f in 0..n_fams as u32 {
                let d = synth_fam_mask(nbits, ent_fnv[eid as usize], f);
                gen_ops += 1;
                if !d.is_full() {
                    fam.insert((eid, f), d);
                }
            }
        }
    }
    let gen_micros = t_gen0.elapsed().as_micros() as u64;

    // phase 2：传播（主计时）
    let t0 = Instant::now();
    let pops: Vec<u32> = clusters
        .par_iter()
        .map(|cl| {
            let mut m = Domain::full(nbits);
            for f in 0..n_fams as u32 {
                let mut mf = Domain::full(nbits);
                let mut hit = false;
                for &eid in &cl.ents {
                    if let Some(fm) = fam.get(&(eid, f)) {
                        mf.intersect(fm);
                        hit = true;
                    }
                }
                if hit {
                    m.intersect(&mf);
                }
            }
            m.popcount()
        })
        .collect();
    let el = t0.elapsed().as_micros() as u64;
    let mut and_ops = 0u64;
    for cl in clusters {
        and_ops += (cl.ents.len() as u64 + 1) * n_fams as u64;
    }
    let checksum: u64 = pops.iter().map(|&p| p as u64).sum();
    PropResult { micros: el, and_ops, checksum, gen_micros, gen_ops }
}
