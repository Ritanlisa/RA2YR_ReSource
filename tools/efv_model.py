#!/usr/bin/env python3
"""
efv_model.py — Shared data model for the execution-flow verifier (CFG variant).

This module is the FOUNDATION of the execution-flow-cfg pipeline. It defines:

  1. The event-string grammar (the exact string encoding both the IDA-side and
     C++-side extractors must emit), reused verbatim from the original
     token-level verifier (`verify_execution_flow.py`) so encodings stay
     comparable across the rewrite.
  2. Event builder helpers, so every producer constructs the same canonical
     strings (uppercase hex addresses, decimal byte offsets).
  3. `event_class()` — splits events into SEQUENCED (ordered-gating) vs SET
     (block-internal, order-independent). This is the WHOLE reason a shared
     classifier lives here: the matcher must treat CALL/WRITE/RET as an ordered
     sequence and READ(member/global) as an unordered set.
  4. `Block` and `CFG` data structures (with helpers to build edges, iterate,
     and traverse a cyclic graph safely) used by the IDA CFG extractor, the C++
     CFG extractor, and the matcher.

NO extraction logic and NO matching logic live here — data structures and
classification constants only. The API defined here is a stable contract:
T7/T8/T10/T14/T16/T17/T18 all import this module.

------------------------------------------------------------------------------
EVENT-STRING GRAMMAR (canonical — comparison is plain list/set equality)
------------------------------------------------------------------------------
  CALL(0xADDR)          direct / named call          ADDR = uppercase hex
  CALL(vfptr+N)         virtual call                 N    = byte offset (decimal)
  READ(member,N)        this-relative member read    N    = byte offset (decimal)
  WRITE(member,N)       this-relative member write   N    = byte offset (decimal)
  READ(global,0xADDR)   global variable read         ADDR = uppercase hex
  WRITE(global,0xADDR)  global variable write        ADDR = uppercase hex
  RET                   return

  Match by byte OFFSET / address, never by name.

------------------------------------------------------------------------------
EVENT CLASSIFICATION
------------------------------------------------------------------------------
  SEQUENCED : CALL(...), WRITE(...), RET     -> ordered gating, position matters
  SET       : READ(...)                      -> block-internal set, order-free

------------------------------------------------------------------------------
EDGE LABELS (CFG successor edges)
------------------------------------------------------------------------------
  "true"        conditional taken branch
  "false"       conditional not-taken branch
  "fallthrough" unconditional / straight-line successor
  "case:<V>"    switch case with selector value <V>   (see edge_case())
  "default"     switch default arm
  "back"        loop back-edge (target dominates / precedes source)
"""

# ============================================================
# Event class constants
# ============================================================

CLASS_SEQUENCED = "SEQUENCED"  # CALL / WRITE / RET -> ordered gating
CLASS_SET = "SET"              # READ -> block-internal unordered set

# Event verb prefixes (the token before the first '(' , or the whole string).
VERB_CALL = "CALL"
VERB_READ = "READ"
VERB_WRITE = "WRITE"
VERB_RET = "RET"

# The RET event has no operands; expose it as a constant so producers don't
# hand-spell the literal.
RET = "RET"


# ============================================================
# Edge-label constants + helper
# ============================================================

EDGE_TRUE = "true"
EDGE_FALSE = "false"
EDGE_FALLTHROUGH = "fallthrough"
EDGE_DEFAULT = "default"
EDGE_BACK = "back"

# The full set of *fixed* edge labels. "case:<V>" is parametric and is built
# with edge_case(); is_edge_label() recognises both.
EDGE_LABELS = frozenset({
    EDGE_TRUE, EDGE_FALSE, EDGE_FALLTHROUGH, EDGE_DEFAULT, EDGE_BACK,
})

_CASE_PREFIX = "case:"


def edge_case(value):
    """Build a switch-case edge label: edge_case(3) -> 'case:3'."""
    return "{}{}".format(_CASE_PREFIX, value)


def is_case_label(label):
    """True if `label` is a 'case:<V>' edge."""
    return isinstance(label, str) and label.startswith(_CASE_PREFIX)


def case_value(label):
    """Selector value of a 'case:<V>' label as a string, or None."""
    if is_case_label(label):
        return label[len(_CASE_PREFIX):]
    return None


def is_edge_label(label):
    """True if `label` is any recognised edge label (fixed or parametric)."""
    return label in EDGE_LABELS or is_case_label(label)


# ============================================================
# Event builders (canonical encodings)
# ============================================================

def call_direct(addr):
    """Direct / named call. `addr` is an int -> 'CALL(0xADDR)' (uppercase hex)."""
    return "CALL(0x{:X})".format(addr)


def call_virtual(offset):
    """Virtual call via vtable. `offset` is a decimal byte offset -> 'CALL(vfptr+N)'."""
    return "CALL(vfptr+{})".format(offset)


def read_member(offset):
    """this-relative member read at decimal byte `offset` -> 'READ(member,N)'."""
    return "READ(member,{})".format(offset)


def write_member(offset):
    """this-relative member write at decimal byte `offset` -> 'WRITE(member,N)'."""
    return "WRITE(member,{})".format(offset)


def read_global(addr):
    """Global read. `addr` is an int -> 'READ(global,0xADDR)' (uppercase hex)."""
    return "READ(global,0x{:X})".format(addr)


def write_global(addr):
    """Global write. `addr` is an int -> 'WRITE(global,0xADDR)' (uppercase hex)."""
    return "WRITE(global,0x{:X})".format(addr)


# ============================================================
# Event classification
# ============================================================

def event_verb(event_str):
    """The leading verb of an event string ('CALL' / 'READ' / 'WRITE' / 'RET').

    Returns the verb token (the text before the first '(' , or the whole
    string for operand-less events like RET). Returns "" for empty input.
    """
    if not event_str:
        return ""
    paren = event_str.find("(")
    if paren < 0:
        return event_str
    return event_str[:paren]


def event_class(event_str):
    """Classify an event string as CLASS_SEQUENCED or CLASS_SET.

        CALL(...), WRITE(...), RET  -> "SEQUENCED"  (ordered gating)
        READ(...)                   -> "SET"        (block-internal, unordered)

    Unrecognised verbs are conservatively treated as SEQUENCED so an unexpected
    event still participates in ordered matching rather than silently vanishing
    into a set.
    """
    verb = event_verb(event_str)
    if verb == VERB_READ:
        return CLASS_SET
    if verb in (VERB_CALL, VERB_WRITE, VERB_RET):
        return CLASS_SEQUENCED
    return CLASS_SEQUENCED


def is_sequenced(event_str):
    """True if the event participates in ordered (position-sensitive) matching."""
    return event_class(event_str) == CLASS_SEQUENCED


def is_set(event_str):
    """True if the event participates in unordered (set) matching."""
    return event_class(event_str) == CLASS_SET


# ============================================================
# Block
# ============================================================

class Block:
    """A basic block of the execution-flow CFG.

    Attributes:
        id              hashable block identifier (int or str)
        ordered_events  list[str]  events in source order (mixed SEQUENCED/SET)
        successors      list[(target_id, edge_label)]  outgoing edges, in order

    `ordered_events` keeps every event in its original order; the matcher pulls
    out the SEQUENCED subsequence and the SET subset via the helpers below.
    """

    __slots__ = ("id", "ordered_events", "successors")

    def __init__(self, id, ordered_events=None, successors=None):
        self.id = id
        self.ordered_events = list(ordered_events) if ordered_events else []
        # each successor is a (target_id, edge_label) tuple
        self.successors = list(successors) if successors else []

    # -- events --------------------------------------------------------------

    def add_event(self, event_str):
        """Append a single event string in source order."""
        self.ordered_events.append(event_str)
        return self

    def add_events(self, events):
        """Append an iterable of event strings in source order."""
        self.ordered_events.extend(events)
        return self

    def sequenced_events(self):
        """The ordered subsequence of SEQUENCED events (CALL/WRITE/RET)."""
        return [e for e in self.ordered_events if event_class(e) == CLASS_SEQUENCED]

    def set_events(self):
        """The SET events (READ) as a list (caller may compare as a set/multiset)."""
        return [e for e in self.ordered_events if event_class(e) == CLASS_SET]

    # -- edges ---------------------------------------------------------------

    def add_successor(self, target_id, edge_label):
        """Add an outgoing edge to `target_id` labelled `edge_label`."""
        self.successors.append((target_id, edge_label))
        return self

    def successor_ids(self):
        """Target ids of all outgoing edges, in edge order."""
        return [t for (t, _label) in self.successors]

    def edge_to(self, target_id):
        """First edge label to `target_id`, or None."""
        for (t, label) in self.successors:
            if t == target_id:
                return label
        return None

    # -- dunder --------------------------------------------------------------

    def __iter__(self):
        """Iterate the ordered events."""
        return iter(self.ordered_events)

    def __len__(self):
        """Number of ordered events in the block."""
        return len(self.ordered_events)

    def __eq__(self, other):
        return (isinstance(other, Block)
                and self.id == other.id
                and self.ordered_events == other.ordered_events
                and self.successors == other.successors)

    def __hash__(self):
        return hash(self.id)

    def __repr__(self):
        return "Block(id={!r}, events={}, succ={!r})".format(
            self.id, len(self.ordered_events), self.successors)


# ============================================================
# CFG
# ============================================================

class CFG:
    """A control-flow graph of Blocks.

    Attributes:
        entry_id   id of the entry block
        blocks     dict[id -> Block]

    Helper methods build blocks/edges, look them up, iterate, and traverse the
    graph safely even with back-edges (each block visited once).
    """

    __slots__ = ("entry_id", "blocks")

    def __init__(self, entry_id, blocks=None):
        self.entry_id = entry_id
        self.blocks = dict(blocks) if blocks else {}

    # -- construction --------------------------------------------------------

    def add_block(self, block):
        """Register a Block (overwrites any block with the same id). Returns it."""
        self.blocks[block.id] = block
        return block

    def new_block(self, id, ordered_events=None, successors=None):
        """Create, register, and return a new Block."""
        return self.add_block(Block(id, ordered_events, successors))

    def get_block(self, id):
        """Block by id, or None."""
        return self.blocks.get(id)

    def add_edge(self, src_id, dst_id, edge_label):
        """Add an edge src -> dst with `edge_label`.

        The source block must already exist; the destination need not (it can be
        registered later). Returns the source Block.
        """
        src = self.blocks.get(src_id)
        if src is None:
            raise KeyError("source block {!r} not in CFG".format(src_id))
        src.add_successor(dst_id, edge_label)
        return src

    # -- access --------------------------------------------------------------

    def entry(self):
        """The entry Block, or None."""
        return self.blocks.get(self.entry_id)

    def successors(self, block_id):
        """The (target_id, edge_label) list of `block_id` (empty if unknown)."""
        b = self.blocks.get(block_id)
        return list(b.successors) if b is not None else []

    def edges(self):
        """Yield every edge as (src_id, dst_id, edge_label), in block/edge order."""
        for bid, block in self.blocks.items():
            for (dst, label) in block.successors:
                yield (bid, dst, label)

    def back_edges(self):
        """Edges explicitly labelled 'back', as a list of (src_id, dst_id)."""
        return [(s, d) for (s, d, label) in self.edges() if label == EDGE_BACK]

    # -- traversal -----------------------------------------------------------

    def traverse(self, start_id=None, order="dfs"):
        """Yield block ids reachable from `start_id` (default: entry), each once.

        `order` is "dfs" (pre-order, edge order) or "bfs". Back-edges and other
        cycles terminate safely because every block is visited at most once.
        """
        if start_id is None:
            start_id = self.entry_id
        if start_id not in self.blocks:
            return
        visited = set()
        if order == "bfs":
            from collections import deque
            queue = deque([start_id])
            visited.add(start_id)
            while queue:
                bid = queue.popleft()
                yield bid
                for (dst, _label) in self.blocks[bid].successors:
                    if dst in self.blocks and dst not in visited:
                        visited.add(dst)
                        queue.append(dst)
        else:  # dfs pre-order, honouring successor edge order
            stack = [start_id]
            while stack:
                bid = stack.pop()
                if bid in visited:
                    continue
                visited.add(bid)
                yield bid
                # push successors reversed so the first edge is explored first
                succ = self.blocks[bid].successors
                for (dst, _label) in reversed(succ):
                    if dst in self.blocks and dst not in visited:
                        stack.append(dst)

    def reachable_blocks(self, start_id=None):
        """Set of block ids reachable from `start_id` (default entry)."""
        return set(self.traverse(start_id))

    # -- dunder --------------------------------------------------------------

    def __iter__(self):
        """Iterate the Block objects (dict insertion order)."""
        return iter(self.blocks.values())

    def __len__(self):
        """Number of blocks."""
        return len(self.blocks)

    def __contains__(self, block_id):
        return block_id in self.blocks

    def __repr__(self):
        return "CFG(entry={!r}, blocks={})".format(self.entry_id, len(self.blocks))
