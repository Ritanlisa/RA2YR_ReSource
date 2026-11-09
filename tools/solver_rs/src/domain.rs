//! Bitset domain over the class universe (n ≈ 2136 bits = 34 u64 words).
//! Faithful equivalent of the solver's Python arbitrary-precision-int masks
//! (`FULL = (1 << n) - 1`, `mf &= fm`, `m.bit_count()`), minus bigint overhead.

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Domain {
    pub words: Vec<u64>,
    pub nbits: usize,
}

impl Domain {
    pub fn full(nbits: usize) -> Self {
        let nw = words_for(nbits);
        let mut words = vec![u64::MAX; nw];
        clear_tail(&mut words, nbits);
        Domain { words, nbits }
    }

    pub fn empty(nbits: usize) -> Self {
        Domain { words: vec![0u64; words_for(nbits)], nbits }
    }

    pub fn single(nbits: usize, bit: usize) -> Self {
        let mut d = Domain::empty(nbits);
        d.set(bit);
        d
    }

    pub fn set(&mut self, bit: usize) {
        self.words[bit / 64] |= 1u64 << (bit % 64);
    }

    pub fn bit(&self, bit: usize) -> bool {
        (self.words[bit / 64] >> (bit % 64)) & 1 == 1
    }

    /// `self &= other`（求解器 `mf &= fm`）
    pub fn intersect(&mut self, other: &Domain) {
        for (a, b) in self.words.iter_mut().zip(other.words.iter()) {
            *a &= *b;
        }
    }

    /// `self |= other`
    pub fn union(&mut self, other: &Domain) {
        for (a, b) in self.words.iter_mut().zip(other.words.iter()) {
            *a |= *b;
        }
    }

    pub fn is_empty(&self) -> bool {
        self.words.iter().all(|&w| w == 0)
    }

    pub fn is_full(&self) -> bool {
        for (i, &w) in self.words.iter().enumerate() {
            let expect = word_mask(self.nbits, i);
            if w != expect {
                return false;
            }
        }
        true
    }

    pub fn popcount(&self) -> u32 {
        self.words.iter().map(|w| w.count_ones()).sum()
    }

    pub fn first_bit(&self) -> Option<usize> {
        for (i, &w) in self.words.iter().enumerate() {
            if w != 0 {
                return Some(i * 64 + w.trailing_zeros() as usize);
            }
        }
        None
    }

    /// `self & other != ∅`（求解器 `if m & _CLASSMASK:` 判定）
    pub fn intersects(&self, other: &Domain) -> bool {
        self.words
            .iter()
            .zip(other.words.iter())
            .any(|(a, b)| a & b != 0)
    }

    pub fn iter_bits(&self) -> impl Iterator<Item = usize> + '_ {
        self.words.iter().enumerate().flat_map(move |(i, &w)| {
            let base = i * 64;
            (0..64).filter_map(move |b| if (w >> b) & 1 == 1 { Some(base + b) } else { None })
        })
    }
}

pub fn words_for(nbits: usize) -> usize {
    (nbits + 63) / 64
}

fn word_mask(nbits: usize, wi: usize) -> u64 {
    let lo = wi * 64;
    if lo + 64 <= nbits {
        u64::MAX
    } else if lo >= nbits {
        0
    } else {
        (1u64 << (nbits - lo)) - 1
    }
}

fn clear_tail(words: &mut [u64], nbits: usize) {
    let nw = words.len();
    let lo = nw * 64 - 64;
    if lo + 64 > nbits {
        words[nw - 1] &= word_mask(nbits, nw - 1);
    }
}
