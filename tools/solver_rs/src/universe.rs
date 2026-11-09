//! 类宇宙：names（class_db.json 键序 + type_universe 附加）、alias 解析、
//! 布局成员表。忠实复刻 minclass_solver.build_universe 的骨架
//! （resolve 的 @-剥离循环 / ?$ 模板基名 / alias 优先），
//! 但不含 identified/eff_size 证据抬升（核内省略，报告注明偏差）。

use std::collections::HashMap;

pub struct Universe {
    pub names: Vec<String>,
    pub idx: HashMap<String, u32>,
    pub alias: HashMap<String, String>,
    pub n: usize,
    /// 前 n_cls_only 位是「真类」——receiver 簇的 _CLASSMASK 边界
    pub n_cls_only: usize,
    /// class_layouts 解析出的 sizeof（kernel 口径：eff_size = layout size，无证据抬升）
    pub layout_size: Vec<Option<u32>>,
    pub has_layout: Vec<bool>,
}

fn jload(path: &str) -> Option<serde_json::Value> {
    let f = std::fs::File::open(path).ok()?;
    serde_json::from_reader(std::io::BufReader::new(f)).ok()
}

impl Universe {
    /// names 顺序 = class_db.json 对象键序（JSON 插入序，与 Python dict 一致），
    /// 之后追加 type_universe.json 的 types 中不在 class_db 的项。
    pub fn load(root: &str) -> Universe {
        let db = jload(&format!("{root}/anchors/class_db.json")).expect("class_db.json");
        let classes = db.get("classes").expect("classes key").as_object().expect("classes obj");

        let mut names: Vec<String> = Vec::with_capacity(classes.len() + 64);
        let mut idx: HashMap<String, u32> = HashMap::with_capacity(classes.len() + 64);
        for k in classes.keys() {
            if !idx.contains_key(k) {
                idx.insert(k.clone(), names.len() as u32);
                names.push(k.clone());
            }
        }
        let n_cls_only = names.len();

        if let Some(tu) = jload(&format!("{root}/anchors/type_universe.json")) {
            if let Some(tys) = tu.get("types").and_then(|v| v.as_array()) {
                for t in tys {
                    if let Some(s) = t.as_str() {
                        if !idx.contains_key(s) {
                            idx.insert(s.to_string(), names.len() as u32);
                            names.push(s.to_string());
                        }
                    }
                }
            }
        }
        let n = names.len();

        // alias：class_name_align.rtti_to_canon（canon 字段）+ mangled_alias
        let mut alias: HashMap<String, String> = HashMap::new();
        if let Some(al) = jload(&format!("{root}/anchors/class_name_align.json")) {
            if let Some(r2c) = al.get("rtti_to_canon").and_then(|v| v.as_object()) {
                for (rn, rec) in r2c {
                    if let Some(c) = rec.get("canon").and_then(|v| v.as_str()) {
                        if idx.contains_key(c) && !alias.contains_key(rn) {
                            alias.insert(rn.clone(), c.to_string());
                        }
                    }
                }
            }
        }
        if let Some(ma) = jload(&format!("{root}/anchors/mangled_alias.json")) {
            if let Some(obj) = ma.as_object() {
                for (k, v) in obj {
                    let canon = match v {
                        serde_json::Value::String(s) => Some(s.clone()),
                        serde_json::Value::Object(o) => {
                            o.get("canon").and_then(|x| x.as_str()).map(|s| s.to_string())
                        }
                        _ => None,
                    };
                    if let Some(c) = canon {
                        if idx.contains_key(&c) && !alias.contains_key(k) {
                            alias.insert(k.clone(), c);
                        }
                    }
                }
            }
        }

        // 布局：class_layouts.json {name: {size, parent, offsets}} —— 直接名解析
        //（求解器还会经 rti_names 多候选挑最大布局；核内只用直接名，报告注明）
        let mut layout_size: Vec<Option<u32>> = vec![None; n];
        let mut has_layout = vec![false; n];
        if let Some(lay) = jload(&format!("{root}/tools/class_layouts.json")) {
            if let Some(obj) = lay.as_object() {
                for (name, rec) in obj {
                    if let Some(&ci) = idx.get(name) {
                        has_layout[ci as usize] = true;
                        if let Some(sz) = rec.get("size").and_then(|v| v.as_u64()) {
                            layout_size[ci as usize] = Some(sz as u32);
                        }
                    }
                }
            }
        }

        Universe { names, idx, alias, n, n_cls_only, layout_size, has_layout }
    }

    /// 复刻 solver resolve()：idx → alias → 逐步剥尾部 '@'（≤8 轮）→ ?$ 模板基名
    pub fn resolve(&self, name: &str) -> Option<u32> {
        let s = name.trim();
        if s.is_empty() {
            return None;
        }
        if let Some(&i) = self.idx.get(s) {
            return Some(i);
        }
        if let Some(a) = self.alias.get(s) {
            return self.idx.get(a).copied();
        }
        let mut t = s;
        for _ in 0..8 {
            if let Some(&i) = self.idx.get(t) {
                return Some(i);
            }
            if let Some(a) = self.alias.get(t) {
                return self.idx.get(a).copied();
            }
            if t.ends_with('@') {
                t = &t[..t.len() - 1];
                continue;
            }
            break;
        }
        if let Some(rest) = s.strip_prefix("?$") {
            let base = rest.split('@').next().unwrap_or("");
            if let Some(&i) = self.idx.get(base) {
                return Some(i);
            }
        }
        None
    }

    pub fn classmask(&self) -> crate::domain::Domain {
        let mut d = crate::domain::Domain::empty(self.n);
        for b in 0..self.n_cls_only {
            d.set(b);
        }
        d
    }
}
