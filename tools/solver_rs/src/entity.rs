//! 实体命名（复刻 minclass_solver.ent_id, L887-921）+ 字符串驻留。
//!
//! 实体形态：
//!   RET:<fn>            函数返回值        （"0xADDR.return"）
//!   R:<fn>:<reg>        寄存器值（连接点，不进 ents）
//!   S:<fn>:+N           栈槽/局部变量
//!   V:<addr>            vtable 槽（连接点，不进 ents）
//!   G:<addr>            数据段全局
//!   T:<fn>              函数 this
//!   P:<fn>:k            函数参数 k
//!   M:<fn>:this:<off>   this 成员链（子对象）
//!   N:<site>            operator new 分配点

use std::collections::HashMap;

pub const REGS: [&str; 8] = ["eax", "ebx", "ecx", "edx", "esi", "edi", "ebp", "esp"];
pub const DATA_LO: u64 = 0x812_000;
pub const DATA_HI: u64 = 0xB7A_000;

/// 宽容十六进制解析（"0x410000"/"410000"/"0X41..."，含非法定符失败）
pub fn hex_parse(s: &str) -> Option<u64> {
    let t = s.trim();
    let t = t.strip_prefix("0x").or_else(|| t.strip_prefix("0X")).unwrap_or(t);
    if t.is_empty() {
        return None;
    }
    u32::from_str_radix(t, 16).ok().map(|v| v as u64)
}

pub fn is_reg(s: &str) -> bool {
    REGS.contains(&s)
}

fn parse_hex(s: &str) -> Option<u64> {
    hex_parse(s)
}

fn is_hex(s: &str) -> bool {
    !s.is_empty() && s.bytes().all(|b| b.is_ascii_hexdigit())
}

/// global_addr 的核内子集：仅十六进制直书 + dword_/off_ 等 IDA 名的后缀十六进制。
/// （求解器还有 ida_global_types 名字表回查——核内不载该表，此类名字计 unresolved。）
fn global_addr(tok: &str) -> Option<u64> {
    let tok = tok.trim();
    if tok.starts_with("0x") {
        let a = parse_hex(tok)?;
        return if (DATA_LO..DATA_HI).contains(&a) { Some(a) } else { None };
    }
    // 末尾 6-8 位十六进制 + dword_/byte_/word_/stru_/off_/qword_/flt_ 前缀
    let lower = tok.to_ascii_lowercase();
    let pfx = ["dword_", "byte_", "word_", "stru_", "off_", "qword_", "flt_"]
        .iter()
        .any(|p| lower.starts_with(p));
    if pfx {
        let tail_len = tok.len().saturating_sub(6);
        // 找最长 6-8 位十六进制后缀
        for l in (6..=8usize).rev() {
            if tok.len() >= l {
                let cand = &tok[tok.len() - l..];
                if is_hex(cand) {
                    if let Some(a) = parse_hex(cand) {
                        if (DATA_LO..DATA_HI).contains(&a) {
                            return Some(a);
                        }
                    }
                }
            }
        }
        let _ = tail_len;
    }
    None
}

/// 复刻 ent_id()。返回规范实体字符串（与 Python 同构，保证两侧键一致）。
pub fn ent_id(raw: &str, fn_ctx: Option<u64>) -> Option<String> {
    let s = raw.trim();
    if s.is_empty() {
        return None;
    }
    if let Some(head) = s.strip_suffix(".return") {
        let a = parse_hex(head)?;
        return Some(format!("RET:{a:X}"));
    }
    if REGS.contains(&s) {
        let f = fn_ctx?;
        return Some(format!("R:{f:X}:{s}"));
    }
    if let Some(rest) = s.strip_prefix("stack_+") {
        let f = fn_ctx?;
        return Some(format!("S:{f:X}:+{rest}"));
    }
    if let Some(rest) = s.strip_prefix("vtable_slot_") {
        // vtable_slot_0xADDR[:...] —— 取第一段十六进制
        let head = rest.split(':').next().unwrap_or("");
        let a = parse_hex(head)?;
        return Some(format!("V:{a:X}"));
    }
    if let Some(rest) = s.strip_prefix("offset ") {
        let g = global_addr(rest.trim())?;
        return Some(format!("G:{g:X}"));
    }
    // 0x...:... / NNNNNN:... 形态：取首段冒号前子串做地址
    //（复刻 Python：`s.startswith("0x") or re.match(r"^[0-9A-Fa-f]{6,8}:", s)`
    //  然后 `hx(s.split(":")[0])`）
    let ok_addr = {
        if s.starts_with("0x") || s.starts_with("0X") {
            true
        } else {
            let b = s.as_bytes();
            let mut i = 0;
            while i < b.len() && b[i].is_ascii_hexdigit() {
                i += 1;
            }
            (6..=8).contains(&i) && i < b.len() && b[i] == b':'
        }
    };
    if ok_addr {
        let head = s.split(':').next().unwrap_or("");
        let a = parse_hex(head)?;
        if let Some(pos) = s.find(".member(") {
            let off = s[pos + 8..].trim_end_matches(')'); // ".member(" = 8 字符
            let which = if s.contains("::param") {
                // 0xADDR::paramN.member(0xNN) → pN
                let seg = s.split("::param").nth(1).unwrap_or("");
                let nn: String = seg.chars().take_while(|c| c.is_ascii_digit()).collect();
                if nn.is_empty() { "this" } else { &format!("p{nn}") }
            } else {
                "this"
            };
            return Some(format!("M:{a:X}:{which}:{off}"));
        }
        if s.ends_with(".return") {
            return Some(format!("RET:{a:X}"));
        }
        if s.ends_with(":this") {
            return Some(format!("T:{a:X}"));
        }
        if let Some(pos) = s.find("::param") {
            return Some(format!("P:{a:X}:{}", &s[pos + 7..])); // "::param" = 7 字符
        }
    }
    None
}

/// 字符串驻留：实体字符串 → 稠密 u32。
pub struct Interner {
    map: HashMap<String, u32>,
    pub names: Vec<String>,
}

impl Interner {
    pub fn new() -> Self {
        Interner { map: HashMap::new(), names: Vec::new() }
    }

    pub fn intern(&mut self, s: &str) -> u32 {
        if let Some(&i) = self.map.get(s) {
            return i;
        }
        let i = self.names.len() as u32;
        self.names.push(s.to_string());
        self.map.insert(s.to_string(), i);
        i
    }

    pub fn get(&self, s: &str) -> Option<u32> {
        self.map.get(s).copied()
    }

    pub fn len(&self) -> usize {
        self.names.len()
    }
}
