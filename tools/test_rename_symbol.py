#!/usr/bin/env python3
"""Isolated regression tests for C++-qualified rename_symbol behavior."""

import importlib.util
import json
import sys
import tempfile
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parent.parent
SPEC = importlib.util.spec_from_file_location("rename_symbol_under_test", ROOT / "tools" / "rename_symbol.py")
rename = importlib.util.module_from_spec(SPEC)
assert SPEC.loader is not None
SPEC.loader.exec_module(rename)


class RenameSymbolRegression(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        base = Path(self.tmp.name)
        self.src = base / "src"
        self.src.mkdir()
        (self.src / "sample.hpp").write_text(
            "class BuildingClass {\n"
            "public:\n"
            "    void OldMethod();\n"
            "    void OldMethodExtra();\n"
            "};\n",
            encoding="utf-8",
        )
        (self.src / "sample.cpp").write_text(
            "void BuildingClass::OldMethod() {}\n"
            "void BuildingClass::OldMethodExtra() {}\n"
            "void Other::OldMethod() {}\n",
            encoding="utf-8",
        )
        self.signals = base / "signals.json"
        self.signals.write_text(json.dumps({
            "symbols": {
                "BuildingClass::OldMethod": {
                    "name": "BuildingClass::OldMethod", "kind": "member",
                    "class": "BuildingClass", "offset": 12, "type": "void"},
            },
            "_by_name": {"BuildingClass::OldMethod": {
                "symbols": {"BuildingClass::OldMethod": "member"}}},
            "globals": {"OldGlobal": "0x1000"},
            "classes": {"BuildingClass": {"offsets": {
                "12": {"ida_name": "OldMethod", "type": "void", "size": 4}}}},
            "_member_by_name": {"BuildingClass": {"OldMethod": 12}},
        }, indent=2) + "\n", encoding="utf-8")
        self.member_lookup = base / "member_lookup.json"
        self.member_lookup.write_text(json.dumps({"BuildingClass": {
            "12": {"name": "OldMethod", "type": "void", "inherited_from": "Base"}}},
            indent=2) + "\n", encoding="utf-8")
        self.class_layouts = base / "class_layouts.json"
        self.class_layouts.write_text(json.dumps({"BuildingClass": {
            "offsets": {"12": {"ida_name": "OldMethod", "type": "void"}},
            "_member_by_name": {"OldMethod": 12}}}, indent=2) + "\n", encoding="utf-8")
        self.ida_index = base / "ida_name_index.json"
        self.ida_index.write_text(json.dumps({"BuildingClass::OldMethod": "0x100"}, indent=2) + "\n", encoding="utf-8")

        self.old_constants = {
            "SRC_DIR": rename.SRC_DIR, "SIGNALS_JSON": rename.SIGNALS_JSON,
            "MEMBER_LOOKUP_JSON": rename.MEMBER_LOOKUP_JSON,
            "CLASS_LAYOUTS_JSON": rename.CLASS_LAYOUTS_JSON,
            "IDA_NAME_INDEX": rename.IDA_NAME_INDEX,
        }
        rename.SRC_DIR = self.src
        rename.SIGNALS_JSON = self.signals
        rename.MEMBER_LOOKUP_JSON = self.member_lookup
        rename.CLASS_LAYOUTS_JSON = self.class_layouts
        rename.IDA_NAME_INDEX = self.ida_index

    def tearDown(self):
        for name, value in self.old_constants.items():
            setattr(rename, name, value)
        self.tmp.cleanup()

    def test_qualified_dry_run_is_side_effect_free(self):
        before = {p: p.read_bytes() for p in (
            self.signals, self.member_lookup, self.class_layouts, self.ida_index,
            self.src / "sample.hpp", self.src / "sample.cpp")}
        plan = rename._preflight("BuildingClass::OldMethod", "BuildingClass::NewMethod")
        self.assertTrue(plan["qualified"])
        self.assertEqual(plan["source_matches"], 2)
        self.assertEqual(rename.replace_in_file(
            self.src / "sample.hpp", "BuildingClass::OldMethod",
            "BuildingClass::NewMethod", dry_run=True), 1)
        self.assertEqual(before, {p: p.read_bytes() for p in before})

    def test_qualified_apply_updates_all_indexes(self):
        count = rename.replace_in_file(
            self.src / "sample.hpp", "BuildingClass::OldMethod",
            "BuildingClass::NewMethod")
        count += rename.replace_in_file(
            self.src / "sample.cpp", "BuildingClass::OldMethod",
            "BuildingClass::NewMethod")
        self.assertEqual(count, 2)
        signals = rename.update_signals_json(
            "BuildingClass::OldMethod", "BuildingClass::NewMethod")
        self.assertEqual(signals["symbols"], 1)
        self.assertEqual(rename.update_member_lookup(
            "BuildingClass::OldMethod", "BuildingClass::NewMethod"), 1)
        self.assertEqual(rename.update_class_layouts(
            "BuildingClass::OldMethod", "BuildingClass::NewMethod"), 2)
        self.assertEqual(rename.update_ida_name_index(
            "BuildingClass::OldMethod", "BuildingClass::NewMethod"), 1)

        source = (self.src / "sample.hpp").read_text(encoding="utf-8")
        self.assertIn("void NewMethod();", source)
        self.assertNotIn("void OldMethod();", source)
        self.assertIn("OldMethodExtra", source)
        self.assertIn("void Other::OldMethod()", (self.src / "sample.cpp").read_text(encoding="utf-8"))
        data = json.loads(self.signals.read_text(encoding="utf-8"))
        self.assertIn("BuildingClass::NewMethod", data["symbols"])
        self.assertNotIn("BuildingClass::OldMethod", data["symbols"])
        self.assertIn("BuildingClass::NewMethod", data["_by_name"])
        self.assertEqual(data["_member_by_name"]["BuildingClass"]["NewMethod"], 12)
        member = json.loads(self.member_lookup.read_text(encoding="utf-8"))["BuildingClass"]["12"]
        self.assertEqual(member["name"], "NewMethod")
        self.assertEqual(member["type"], "void")
        self.assertEqual(member["inherited_from"], "Base")
        layout = json.loads(self.class_layouts.read_text(encoding="utf-8"))["BuildingClass"]
        self.assertEqual(layout["offsets"]["12"]["ida_name"], "NewMethod")
        self.assertEqual(layout["_member_by_name"]["NewMethod"], 12)
        self.assertEqual(json.loads(self.ida_index.read_text(encoding="utf-8")),
                         {"BuildingClass::NewMethod": "0x100"})

    def test_bare_member_with_multiple_owners_is_rejected(self):
        data = json.loads(self.member_lookup.read_text(encoding="utf-8"))
        data["OtherClass"] = {"8": {"name": "OldMethod", "type": "void"}}
        self.member_lookup.write_text(json.dumps(data, indent=2) + "\n", encoding="utf-8")
        with self.assertRaises(ValueError):
            rename._preflight("OldMethod", "NewMethod")

    def test_qualified_member_collision_is_rejected(self):
        data = json.loads(self.member_lookup.read_text(encoding="utf-8"))
        data["BuildingClass"]["16"] = {"name": "NewMethod", "type": "void"}
        self.member_lookup.write_text(json.dumps(data, indent=2) + "\n", encoding="utf-8")
        with self.assertRaises(ValueError):
            rename._preflight("BuildingClass::OldMethod", "BuildingClass::NewMethod")

    def test_similar_suffix_is_not_replaced(self):
        rename.replace_in_file(
            self.src / "sample.hpp", "BuildingClass::OldMethod",
            "BuildingClass::NewMethod")
        source = (self.src / "sample.hpp").read_text(encoding="utf-8")
        self.assertNotIn("NewMethodExtra", source)
        self.assertIn("OldMethodExtra", source)


if __name__ == "__main__":
    unittest.main()
