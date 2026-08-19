# BINK / 主菜单踩坑记录

从实现主菜单过程中提取的失败尝试和经验教训。架构参考见 `docs/menu_architecture.md`。

---

## 1. BINK SDK 踩坑总结

| # | 问题 | 表现 | 根因 | 修复 |
|---|------|------|------|------|
| 1 | BINK 画面模糊/低分辨率 | 视频呈现方块像素 | `_BinkNextFrame` 在 `_BinkCopyToBuffer` 之前调用，复制到用户缓冲区时已失效 | NextFrame 必须在 CopyToBuffer 之后（SDK 顺序: DoFrame→CopyToBuffer→NextFrame） |
| 2 | BINK 完全不可见 | 黑屏 | `_BinkWait` 在 AdvanceFrame 和 RenderFrameRaw 中双重调用，破坏 BINK 帧时序 | 仅在 RenderFrameRaw 的 CopyToBuffer 前调用一次 BinkWait |
| 3 | BINK 不可见（第二个原因） | 表面 Lock 失败/超时 | cnc-ddraw 翻转链后缓冲不支持 `Lock()` | 渲染到独立离屏表面(DDSCAPS_SYSTEMMEMORY)，Lock→渲染→Unlock，再双Lock→memcpy→Flip |
| 4 | BINK 无声 | 无音频 | `BinkSetSoundSystem` 传入 `BinkOpenDirectSound` + param=0 可能阻塞 | 需正确实现 DirectSound 初始化后才调用 |
| 5 | 按钮不可见 | UI 不显示 | Win32 对话框 `WS_EX_TOPMOST` 覆盖 DDraw 渲染 | 对话框必须作为 DDraw 窗口的**子窗口**（非 POPUP） |
| 6 | 对话框创建失败 | error 1407 | cnc-ddraw fullscreen 下 `CreateDialogIndirectParamA` 找不到窗口类 | 需要 comctl32 链接 + `InitCommonControls()` |
| 7 | cnc-ddraw 模糊 | BINK 像素模糊 | ddraw.ini 默认 `d3d9_filter=2` (双三次过滤) + bilinear shader | 改为 `d3d9_filter=0` (最近邻) + 注释 shader |
| 8 | SHP 按钮加载失败 | 尺寸 2x0 | button00.shp 头部 `0000 3400 2000 0200` 非标准 TS/TD 格式 | 待修复 SHP 解析器 |

---

## 2. 主菜单渲染踩坑 (M1-M8)

| # | 修改尝试 | 结果 | 失败原因 |
|---|---------|------|---------|
| **M1** | Win32 GDI 按钮 + cnc-ddraw 默认配置 | 按钮不可见 | cnc-ddraw `nonexclusive=false` 下 OpenGL 渲染覆盖 GDI 子窗口 |
| **M2** | 纯 DDraw 手工渲染按钮(彩色矩形+位图字体) | 按钮可见但用户不满意 | 用户要原游戏素材(button*.shp) |
| **M3** | DDraw 手工渲染 + SHP 按钮加载 | SHP 加载失败 | button*.shp 非标准格式, 新老解析器均无法解析 |
| **M4** | Win32 dialog + GDI 按钮 + `nonexclusive=true` | 按钮可见但闪烁 | DDraw Flip 和 GDI WM_PAINT 时序不同步 |
| **M5** | BS_OWNERDRAW 自定义绘制按钮 | 不可见 | GDI 在 cnc-ddraw 表面上渲染有问题 |
| **M6** | WM_COMMAND 路由(BN_CLICKED) | 点击无反应 | 可能是 IsDialogMessageA 拦截或对话框窗口过程未正确子类化 |
| **M7** | WM_LBUTTONDOWN 手动命中检测 | 未充分测试 | 刚实现, 用户报告仍无效 |
| **M8** | IsDialogMessageA 用于键盘导航 | 无效果 | 可能与对话框类不匹配 |

---

## 3. BINK 踩坑详细记录 (B1-B10)

| # | 修改尝试 | 结果 | 失败原因 |
|---|---------|------|---------|
| **B1** | 修复 NextFrame 顺序: DoFrame→CopyToBuffer→NextFrame | 画面模糊 | CopyToBuffer 后无 BinkWait 同步 |
| **B2** | AdvanceFrame 返回 false 时跳过渲染(门控) | 黑屏 | 首帧被跳过, 屏幕无初始化内容 |
| **B3** | BinkWait 放在 AdvanceFrame 开头做节速 + 门控 | 黑屏 | 首帧 BinkWait 可能返回非零; 门控导致首帧不渲染 |
| **B4** | BinkWait 放在 AdvanceFrame 末尾(NextFrame 之后) | UI 冻结 | BinkWait 内部 Sleep(1) 阻塞主循环, 消息泵无法运行 |
| **B5** | 把 DoFrame 移到 RenderFrameRaw, AdvanceFrame 只管节流 | 帧率异常 | 改变了 BINK SDK 调用时序, 内部状态混乱 |
| **B6** | m_frame_decoded 门控: AdvanceFrame 标记,RenderFrameRaw 检查 | 复杂且 buggy | AdvanceFrame 返回 false(跳过)后 m_frame_decoded 状态不一致 |
| **B7** | BinkWait 双重调用 + 无节流 | 帧率太快 | BinkWait 只做解压同步,不做显示节速(需 NextFrame 后调用体积算才生效) |
| **B8** | 计数器节流 + BinkWait 双重(先门控再解压) | 帧率太快 | 同上, BinkWait 位置不对 |
| **B9** | 纯 BinkWait 放在 DoFrame 前门控(去除计数器) | 帧率不对 | BinkWait 内部时序计算可能未正确初始化(*(handle+512)字段问题) |
| **B10** | BinkGoto 之后缺失 DoFrame 调用 | 循环后画面花屏 | BinkGoto 内部 seek 后需 DoFrame 解码第0帧, 否则 CopyToBuffer 拷贝垃圾数据 |

---

## 4. BINK 循环检测

| 尝试 | 检测方式 | 结果 |
|------|---------|------|
| C1 | `doFrameResult < 0` | 不触发 (BinkDoFrame 返回 0 或正值, 从不负) |
| C2 | `doFrameResult == 0` | 立即触发 (正常帧也返回 0, 判断方向反了) |
| C3 | `doFrameResult != 0` | 已实现但未测试能否正确触发 |
| C4 | `*(handle+12) >= *(handle+8)` (BINK 内部计数器) | 未充分测试 (偏移可能不对) |

---

## 5. 工作基线: commit `20baad6`

这是已知 BINK 视频质量和播放速度正常（但无循环）的提交。其 BINK 管线为：

```cpp
// AdvanceFrame (20baad6) — 已验证画质+帧率正常
bool BinkMovieHandle::AdvanceFrame() {
    if (!m_playing) return false;
    if (m_bink_handle) {
        if (m_throttle_counter++ % 4 != 0) return true;  // 计数器节流, 返回 true
        int doFrameResult = s_BinkDoFrame(m_bink_handle);
        if (doFrameResult < 0) {  // 循环检测 (未生效, 因为 BinkDoFrame 不返回负值)
            s_BinkGoto(m_bink_handle, 0, 0); m_current_frame = 0; m_throttle_counter = 0;
            doFrameResult = s_BinkDoFrame(m_bink_handle);  // ← 关键: Goto后必须再 DoFrame
            if (doFrameResult < 0) { m_playing = false; return false; }
        }
        s_BinkWait(m_bink_handle);   // 解压同步
        s_BinkNextFrame(m_bink_handle);  // 推进帧 (注意: 在 CopyToBuffer 之前)
        ++m_current_frame;
        return true;  // 始终返回 true (不门控渲染)
    }
    // ... 软件回退 ...
}

// RenderFrameRaw (20baad6)
void BinkMovieHandle::RenderFrameRaw(buf, pitch, h, dx, dy) {
    if (!locked_buffer || !m_playing) return;
    if (m_bink_handle && s_BinkCopyToBuffer) {
        s_BinkWait(m_bink_handle);   // 再次同步
        s_BinkCopyToBuffer(m_bink_handle, buf, pitch, h, dx, dy, m_surface_flags);
    }
}

// 主菜单循环 (20baad6)
movie->AdvanceFrame();  // 返回值存在 bikAdvanced 但未使用
Lock → RenderFrameRaw → Unlock → Flip  // 每帧都渲染，不受门控
```

**关键特征**: 计数器节流每4帧推进一次，但每帧都调用 RenderFrameRaw（CopyToBuffer 复制同一帧）。AdvanceFrame 始终返回 true（即便油门跳过也不返回 false），因此主循环不门控渲染。

---

## 6. 正确的前进方向

1. **BINK 管线**: 保持 20baad6 的 AdvanceFrame + RenderFrameRaw 结构不动。**只修复循环检测**：需确认 `doFrameResult != 0` 或 `BinkWait 返回非零且帧计数到末尾` 哪个正确触发。当前代码(HEAD=828ffbc)已改为 `doFrameResult != 0` 但未充分测试。
2. **主菜单按钮**: 原版用 GDI + DIALOGEX 模板 0xE2。按钮素材不是 SHP，是 Windows 标准控件 + CSF 字符串。cnc-ddraw 需 `nonexclusive=true` 才能显示 GDI 子窗口。
3. **SHP 素材**: button*.shp 虽存在于 MIX，但原版主菜单不使用（可能用于游戏内 UI）。需修复 SHP 解析器支持其非标准格式。
4. **构建**: 切换分支后务必 `cmake -B build_win -G "Visual Studio 17 2022" -A Win32` 重配置。
5. **渲染架构**: 原版整个主菜单由 `Dialog::PumpMessages` 驱动，BINK 在 DlgItem 1818 的 subclass 内部渲染，按钮由 GDI 渲染。在 cnc-ddraw 下完全复现此架构需要 `nonexclusive=true`。
