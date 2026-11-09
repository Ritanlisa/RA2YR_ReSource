//! Bitset domain over the class universe (n ≈ 2063 bits = 33 u64 words).
//! Faithful equivalent of the solver's Python arbitrary-precision-int masks
//! (`FULL = (1 << n) - 1`, `mf &= fm`, `m.bit_count()`), minus bigint overhead.
//! Copied from tools/solver_rs/src/domain.rs (feasibility prototype).

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

    pub fn from_le_bytes(nbits: usize, bytes: &[u8]) -> Self {
        // Caller guarantees len == (nbits+7)/8 (Python int.to_bytes(nbytes,'little')).
        let nw = words_for(nbits);
        let mut words = vec![0u64; nw];
        for (wi, w) in words.iter_mut().enumerate() {
            let lo = wi * 8;
            if lo >= bytes.len() {
                break;
            }
            let hi = (lo + 8).min(bytes.len());
            let mut v: u64 = 0;
            for (k, b) in bytes[lo..hi].iter().enumerate() {
                v |= (*b as u64) << (8 * k);
            }
            *w = v;
        }
        let mut d = Domain { words, nbits };
        clear_tail(&mut d.words, nbits);
        d
    }

    pub fn to_le_bytes(&self) -> Vec<u8> {
        let nbytes = (self.nbits + 7) / 8;
        let mut out = vec![0u8; nbytes];
        for (wi, &w) in self.words.iter().enumerate() {
            let lo = wi * 8;
            if lo >= nbytes {
                break;
            }
            let hi = (lo + 8).min(nbytes);
            for k in lo..hi {
                out[k] = ((w >> (8 * (k - lo))) & 0xFF) as u8;
            }
        }
        out
    }

    pub fn set(&mut self, bit: usize) {
        self.words[bit / 64] |= 1u64 << (bit % 64);
    }

    pub fn bit(&self, bit: usize) -> bool {
        (self.words[bit / 64] >> (bit % 64)) & 1 == 1
    }

    pub fn clear_bit(&mut self, bit: usize) {
        self.words[bit / 64] &= !(1u64 << (bit % 64));
    }

    /// `self &= other`
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

    /// bit_length() - 1  ==  highest set bit index (None when empty)
    pub fn highest_bit(&self) -> Option<usize> {
        for (i, &w) in self.words.iter().enumerate().rev() {
            if w != 0 {
                return Some(i * 64 + (63 - w.leading_zeros() as usize));
            }
        }
        None
    }

    /// `self & other != 0`
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
    if nw == 0 {
        return;
    }
    let lo = nw * 64 - 64;
    if lo + 64 > nbits {
        words[nw - 1] &= word_mask(nbits, nw - 1);
    }
}
