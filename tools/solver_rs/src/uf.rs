//! 带守卫的并查集（复刻 minclass_solver.UF + un(), L182-205 / L4712-4736）：
//!  - 路径压缩 + 最小根胜出（`if ra > rb: swap` → 根 = 较小 id，与 Python 一致）
//!  - EXACT 硬约束守卫：两侧根都持有 EXACT 类钉且集合不相交 → 拒绝合并（记冲突）
//!  - 合并成功时 root_exact 取并集

pub struct GuardedUf {
    parent: Vec<u32>,
    /// 每根的 EXACT 类钉集合（小集合，保持有序便于判交）
    root_exact: Vec<Vec<u32>>,
    pub unions: u64,
    pub exact_rejects: u64,
}

impl GuardedUf {
    pub fn new() -> Self {
        GuardedUf { parent: Vec::new(), root_exact: Vec::new(), unions: 0, exact_rejects: 0 }
    }

    pub fn ensure(&mut self, x: u32) {
        let need = x as usize + 1;
        if self.parent.len() < need {
            self.parent.resize(need, u32::MAX);
            self.root_exact.resize(need, Vec::new());
        }
        if self.parent[x as usize] == u32::MAX {
            self.parent[x as usize] = x;
        }
    }

    pub fn find(&mut self, x: u32) -> u32 {
        self.ensure(x);
        let mut r = x;
        while self.parent[r as usize] != r {
            r = self.parent[r as usize];
        }
        // 路径压缩
        let mut c = x;
        while self.parent[c as usize] != r {
            let nx = self.parent[c as usize];
            self.parent[c as usize] = r;
            c = nx;
        }
        r
    }

    /// 只读 find（不改结构），用于已压缩后的快速查询
    pub fn find_ro(&self, x: u32) -> u32 {
        let mut r = x;
        while self.parent[r as usize] != r {
            r = self.parent[r as usize];
        }
        r
    }

    pub fn set_exact(&mut self, x: u32, ci: u32) {
        self.ensure(x);
        let r = self.find(x);
        if !self.root_exact[r as usize].contains(&ci) {
            self.root_exact[r as usize].push(ci);
            self.root_exact[r as usize].sort_unstable();
        }
    }

    /// un(a, b)：EXACT 冲突守卫 + 最小根合并（比较键 = 实体字符串，
    /// 复刻 Python `if ra > rb: swap` 的字符串序）。
    /// 返回 true = 合并成功。
    pub fn guarded_union_by(&mut self, a: u32, b: u32, names: &[String]) -> bool {
        let ra = self.find(a);
        let rb = self.find(b);
        if ra == rb {
            return false;
        }
        let ea = self.root_exact[ra as usize].clone();
        let eb = self.root_exact[rb as usize].clone();
        if !ea.is_empty() && !eb.is_empty() && is_disjoint(&ea, &eb) {
            self.exact_rejects += 1;
            return false;
        }
        // 最小串胜出为根
        let (hi, lo) = if names[ra as usize] > names[rb as usize] { (ra, rb) } else { (rb, ra) };
        self.parent[hi as usize] = lo;
        let mut merged = ea;
        for c in eb {
            if !merged.contains(&c) {
                merged.push(c);
            }
        }
        merged.sort_unstable();
        self.root_exact[lo as usize] = merged;
        self.root_exact[hi as usize].clear();
        self.unions += 1;
        true
    }

    /// 无名比较版（测试用：按 id 序）
    pub fn guarded_union(&mut self, a: u32, b: u32) -> bool {
        let ra = self.find(a);
        let rb = self.find(b);
        if ra == rb {
            return false;
        }
        let ea = self.root_exact[ra as usize].clone();
        let eb = self.root_exact[rb as usize].clone();
        if !ea.is_empty() && !eb.is_empty() && is_disjoint(&ea, &eb) {
            self.exact_rejects += 1;
            return false;
        }
        let (hi, lo) = if ra > rb { (ra, rb) } else { (rb, ra) };
        self.parent[hi as usize] = lo;
        let mut merged = ea;
        for c in eb {
            if !merged.contains(&c) {
                merged.push(c);
            }
        }
        merged.sort_unstable();
        self.root_exact[lo as usize] = merged;
        self.root_exact[hi as usize].clear();
        self.unions += 1;
        true
    }

    pub fn root_exact_of(&mut self, x: u32) -> Vec<u32> {
        let r = self.find(x);
        self.root_exact[r as usize].clone()
    }

    pub fn size(&self) -> usize {
        // 实际 ensure 过的节点数（parent 槽位可能是空洞 u32::MAX）
        self.parent.iter().filter(|&&x| x != u32::MAX).count()
    }
}

fn is_disjoint(a: &[u32], b: &[u32]) -> bool {
    let (mut i, mut j) = (0, 0);
    while i < a.len() && j < b.len() {
        match a[i].cmp(&b[j]) {
            std::cmp::Ordering::Less => i += 1,
            std::cmp::Ordering::Greater => j += 1,
            std::cmp::Ordering::Equal => return false,
        }
    }
    true
}
