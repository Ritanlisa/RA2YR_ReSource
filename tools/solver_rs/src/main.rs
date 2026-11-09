//! solver_rs —— minclass 求解器热路径 Rust 内核原型（阶段计时 + 对拍输出）
//!
//! 用法：
//!   solver_rs <repo_root> [--threads N] [--prop] [--json]
//!     --prop   额外跑 60 族合成层传播吞吐微基准
//!     --json   结果以 JSON 输出（对拍脚本消费）

mod domain;
mod entity;
mod kernel;
mod uf;
mod universe;

use std::time::Instant;

fn main() {
    let args: Vec<String> = std::env::args().collect();
    let root = args.get(1).cloned().unwrap_or_else(|| ".".to_string());
    let threads: usize = args
        .iter()
        .position(|a| a == "--threads")
        .and_then(|i| args.get(i + 1))
        .and_then(|v| v.parse().ok())
        .unwrap_or(0);
    let want_prop = args.iter().any(|a| a == "--prop");
    let want_json = args.iter().any(|a| a == "--json");

    if threads > 0 {
        rayon::ThreadPoolBuilder::new()
            .num_threads(threads)
            .build_global()
            .ok();
    }

    let mut t = Instant::now();
    let u = universe::Universe::load(&root);
    let t_universe = t.elapsed().as_micros() as u64;

    t = Instant::now();
    let edges = kernel::load_edges(&format!("{}/tools/type_infer/constraints/raw_constraints.json", root));
    let facts = kernel::load_facts(&format!("{}/anchors/minclass_binary_facts.json", root));
    let faddrs = kernel::load_faddrs(&format!("{}/anchors/ida_function_protos.json", root));
    let ret_this = kernel::load_bool_map(&format!("{}/anchors/fn_returns_this.json", root), Some("map"));
    let takes_this = kernel::load_bool_map(&format!("{}/anchors/fn_takes_this.json", root), None);
    let t_load = t.elapsed().as_micros() as u64;

    let mut k = kernel::Kernel::new(&u);

    t = Instant::now();
    k.stage_collect(&edges, &facts, &faddrs);
    let t_collect = t.elapsed().as_micros() as u64;

    t = Instant::now();
    k.stage_c4_exact(&facts);
    let t_c4 = t.elapsed().as_micros() as u64;

    t = Instant::now();
    k.stage_equality(&edges, &facts, &faddrs, &ret_this, &takes_this);
    let t_equal = t.elapsed().as_micros() as u64;

    t = Instant::now();
    let clusters = k.stage_clusters();
    let t_clusters = t.elapsed().as_micros() as u64;

    t = Instant::now();
    let res = k.stage_solve(&clusters);
    let t_solve = t.elapsed().as_micros() as u64;

    // 传播吞吐微基准（60 族合成层；不进求解结果）
    let prop = if want_prop {
        t = Instant::now();
        let p = kernel::propagation_bench(&clusters, &k.interner.names, u.n, 60);
        (t.elapsed().as_micros() as u64, p)
    } else {
        (0, kernel::PropResult { micros: 0, and_ops: 0, checksum: 0, gen_micros: 0, gen_ops: 0 })
    };

    if want_json {
        println!(
            "{}",
            serde_json::json!({
                "universe": { "n": u.n, "n_cls_only": u.n_cls_only,
                              "with_layout": u.has_layout.iter().filter(|&&b| b).count() },
                "timings_us": {
                    "universe": t_universe, "load": t_load, "collect": t_collect,
                    "c4_exact": t_c4, "equality": t_equal, "clusters": t_clusters,
                    "solve": t_solve,
                    "propagation_micros": prop.1.micros, "propagation_wall_us": prop.0,
                },
                "prop": { "and_ops": prop.1.and_ops, "checksum": prop.1.checksum,
                          "micros": prop.1.micros, "gen_micros": prop.1.gen_micros },
                "result": res,
            })
        );
        return;
    }

    println!("== solver_rs kernel ==");
    println!("[universe] n={} cls_only={} with_layout={}  ({} ms)",
        u.n, u.n_cls_only, u.has_layout.iter().filter(|&&b| b).count(), t_universe / 1000);
    println!("[load] edges={} faddrs={}  ({} ms)", res.n_edges, faddrs.len(), t_load / 1000);
    println!("[collect] ents={} with_obs={} c1_evidence={}  ({} ms)",
        res.n_ents, res.n_ents_obs, res.c1_evidence, t_collect / 1000);
    println!("[c4_exact] pins={}  ({} ms)", res.c4_exact, t_c4 / 1000);
    println!("[equality] uf_nodes={} unions={} exact_rejects={}  ({} ms)",
        res.uf_nodes, res.unions, res.exact_rejects, t_equal / 1000);
    for (k, v) in &res.merge_rejects {
        println!("           reject {k}={v}");
    }
    println!("[clusters] n={}  ({} ms)", res.n_clusters, t_clusters / 1000);
    println!("[solve] constrained={} conflicted={} free={}  ({} ms)",
        res.n_constrained, res.n_conflicted, res.n_free, t_solve / 1000);
    println!("        k_greedy={} lower_bound={} forced={} pinned={}",
        res.k_greedy, res.lower_bound, res.forced_classes, res.pinned_classes);
    println!("        dom_popcount_sum={}", res.dom_popcount_sum);
    if want_prop {
        println!("[prop-bench] 60 fams: propagate {} ops in {} ms; gen {} ops in {} ms  checksum={}",
            prop.1.and_ops, prop.1.micros / 1000, prop.1.gen_ops, prop.1.gen_micros / 1000, prop.1.checksum);
    }
    let total = t_universe + t_load + t_collect + t_c4 + t_equal + t_clusters + t_solve;
    println!("[total-kernel] {} ms", total / 1000);
}
