#pragma once
// CSP: FileSystem

class FileSystem {
public:
    // 0x0072D350
    void CleanupTrees();
    // 0x006267A0
    void InitExtensionState();
    // 0x005F76B0
    void InitPipShapes();
    // 0x00626DA0
    void ProcessNextFileExtension();
    // 0x00628170
    void closeFile();
    // 0x00628740
    void readFile();
};
