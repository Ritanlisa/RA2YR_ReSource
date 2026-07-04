#pragma once
// CSP: CheckListClass

class CheckListClass {
public:
    uint8_t pad_0[13716]; // +0x0
    uint32_t member_3594; // +0x3594
    // 0x004886B0
    void COMStub();
    // 0x004AEBA0
    void COMStub_Return0();
    // 0x00488350
    void Clear();
    // 0x00557EB0
    void Draw();
    // 0x00557B00
    void GetItemCount();
    // 0x00557CB0
    void GetItemData();
    // 0x00557E60
    void HitTest();
    // 0x00557D10
    void KillFocus();
    // 0x00557F00
    void OnDblClick();
    // 0x00557A70
    void OnKeyUp();
    // 0x00557570
    void RemoveItem();
    // 0x00557FB0
    void ScrollDown();
    // 0x00488360
    void ScrollUp();
    // 0x004886C0
    void SelectItem();
    // 0x004886D0
    void SetFocus();
    // 0x00557A20
    void SetItemState();
    // 0x004E1520
    void StubReturn();
    // 0x0048E650
    void StubReturnFalse();
    // 0x004E1510
    void StubReturnVoid();
    // 0x00556EE0
    void addItem();
    // 0x00557140
    void checkItem();
    // 0x005583C0
    void clearList();
    // 0x00558470
    void getItemCount();
    // 0x00556EB0
    void initList();
    // 0x00557090
    void removeItem();
    // 0x005581E0
    void scrollList();
    // 0x00558210
    void selectItem();
    // 0x00557B10
    void vt[19]();
};
