# W3 .data inventory (dword ledger)

Region: VA 0x812000..0xB79BE4 (892665 dwords = 3570660 bytes); file-backed 0x812000..0x87e000 (110592 dwords), zero tail 0x87e000..0xB79BE4 (782073 dwords)

| category | dwords | bytes | % of virtual .data | dwords in file-backed | % of file-backed |
|---|---|---|---|---|---|
| crt_cpp_init_table | 3946 | 15784 | 0.44% | 3946 | 3.57% |
| crt_c_init_table | 5 | 20 | 0.00% | 5 | 0.00% |
| crt_term_group | 9 | 36 | 0.00% | 9 | 0.01% |
| rtti_type_info | 11171 | 44684 | 1.25% | 11171 | 10.10% |
| string_data | 34646 | 138584 | 3.88% | 34646 | 31.33% |
| widestring_data | 712 | 2848 | 0.08% | 712 | 0.64% |
| numeric_table | 25555 | 102220 | 2.86% | 25555 | 23.11% |
| function_pointer_table | 83 | 332 | 0.01% | 83 | 0.08% |
| function_pointer_single | 358 | 1432 | 0.04% | 358 | 0.32% |
| rdata_pointer | 199 | 796 | 0.02% | 199 | 0.18% |
| data_pointer | 647 | 2588 | 0.07% | 647 | 0.59% |
| zero | 789203 | 3156812 | 88.41% | 7130 | 6.45% |
| small_integer | 4542 | 18168 | 0.51% | 4542 | 4.11% |
| other_integer | 21589 | 86356 | 2.42% | 21589 | 19.52% |

## CRT init tables (verified)

- C++ table `__xc_a..__xc_z` = [0x812000, 0x815DA4): leading NULL + **3944 ctor pointers** + XCZ NULL. Strictly ascending: 3943/3943 pairs; range 0x403ce0..0x7bc950; unique 3944.
- C table `__xi_a..__xi_z` = [0x815DA8, 0x815DBC): XIA NULL + 4 entries: 0x0, 0x7c979c, 0x7cb33d, 0x7d386a, 0x7d9fac.
- Terminator group [0x815DBC,0x815DE0): 0x0, 0x0, 0x7cb3e5, 0x7d5791, 0x7de12f, 0x0, 0x0, 0x7d9fbd, 0x0.
- __cinit@0x7CBDAF calls `__initterm(0x812000,0x815DA4)` then `__initterm(0x815DA8,0x815DBC)` (disassembled; see report).

## RTTI type_info descriptors

- 988 objects, 44684 bytes, VA 0x815de0..0x87da10; static vfptr = 0x7F9594. Name prefixes: .?AV:962, .?AU:26

## Strings

- ASCII runs >= 8: 7408 spans / 160816 bytes; UTF-16LE runs >= 4 chars: 139 / 2752 bytes.
- Anchored `char[N]` globals (global_init_types gdata-strlit): 3326 records / 50206 bytes; label coverage 3313/3326. Union with ida_global_types: 3338 records / 125707 bytes (+12 large buffers).

## Numeric tables

- 91 monotone runs (>=16 entries), 102220 bytes total. Top: 0x8650bc..0x8750bc(65536B); 0x8613d8..0x8650b8(15584B); 0x854274..0x855088(3604B); 0x855088..0x855e98(3600B); 0x850e28..0x851088(608B)

## Function-pointer tables

- 16 runs (>=2 consecutive .text pointers), 332 bytes. Top: 0x846840..0x8468c0(128B); 0x81632c..0x816358(44B); 0x87c4d0..0x87c4e8(24B); 0x81636c..0x81637c(16B); 0x825bac..0x825bbc(16B)

## Class instance vptrs

- File-backed dwords equal to a known vtable VA: **990** = 988 type_info vfptr (0x7F9594) + 2 numeric-table coincidences (0x7F31AC @0x874F20, 0x7F57C8 @0x874F6C, inside the 16K monotone table). **Class-instance vptr stored in the file: 0.**
- Runtime installs found by raw `mov [imm32], imm32` scan: **341 sites**, 177 unique destination globals; all 341 destinations are in the zero tail (>=0x87e000); 0 in file-backed region.

## Singletons

- 176 entries from singleton_types.json; region split: 0 file-backed / 176 zero-tail.
