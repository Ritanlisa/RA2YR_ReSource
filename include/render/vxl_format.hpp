#pragma once

#include <cstdint>
#include <cstring>
#include "core/math.hpp"

namespace gamemd
{

//
// VXL (Voxel) Binary Format
// Reverse-engineered from VXL_LoadFile (IDA 0x755DB0)
//
// A VXL file contains:
//   1. Header (16 bytes)
//   2. Section table (num_sections x 28 bytes in file, stored as 12 bytes)
//   3. Body data (raw voxel grid)
//   4. Frame table (num_frames x 92 bytes in file, stored as 164 bytes)
//   5. Optional embedded palette (770 bytes header + 768 entries)
//

#pragma pack(push, 1)

struct VXLHeader
{
    char     magic[16];     // Usually "Voxel Section" followed by NULLs
    uint32_t num_sections;  // Number of body sections
    uint32_t num_frames;    // Number of animation frames
    uint32_t body_size;     // Total size of body data in bytes
};

// Section entry -- defines a range within the body data
struct VXLSection
{
    uint32_t start_offset;  // Byte offset into body data
    uint32_t end_offset;    // End position (exclusive)
    uint8_t  flags;         // Section type/visibility flags
    uint8_t  _pad[3];
};

// Frame entry -- defines one pose/frame of the animation
// In file: 92 bytes. In memory: 164 bytes (includes derived bounds vectors)
struct VXLFrame
{
    // --- From file (28 bytes) ---
    uint32_t body_offsets[3];  // Offsets into body data for this frame
    float    scale;            // Frame scale factor

    // --- Transform matrix (48 bytes, 12 floats, 3x4 affine) ---
    // Storage order: row-major 3x4 matrix (position + rotation + scale)
    float    matrix[12];       // Affine transform: [Tx,R11,R12,R13, Ty,R21,R22,R23, Tz,R31,R32,R33]

    // --- Bounding box vectors (48 bytes, 12 floats, precomputed) ---
    float    bounds[12];       // 4 x 3D corner points of bounding box

    // --- Derived data (not from file, computed during load) ---
    // Total in memory: 28 + 48 + 48 = 124 bytes -> padded to 164
};

// HVA (Hierarchical Voxel Animation) Binary Format
// Reverse-engineered from HVA_LoadFile (IDA 0x5BD570 / 0x5BD5C0)

struct HVAHeader
{
    char     magic[16];     // "HVA Animation" or similar
    uint32_t num_frames;    // Number of animation frames
    uint32_t num_sections;  // Number of sections per frame
};

// HVA Section Frame -- 48 bytes (12 floats = 3x4 matrix)
// Used for turret/barrel/extra section animation
struct HVASectionMatrix
{
    float matrix[12];       // 3x4 affine transform per section per frame
};

#pragma pack(pop)

// ---------------------------------------------------------------------------
// VoxelAnimType Storage Layout (in-memory after loading)
// Based on IDA analysis of VoxelAnimTypeClass members
//
// Data loaded from VXL/HVA:
//   +0x44*4 = body VXL data handle  (VoxelBody*)
//   +0x45*4 = body HVA data handle  (VoxelAnim*)
//   +0x46*4 = turret VXL handle     (VoxelBody*)
//   +0x47*4 = turret HVA handle     (VoxelAnim*)
//   +0x48*4 = barrel VXL handle     (VoxelBody*)
//   +0x49*4 = barrel HVA handle     (VoxelAnim*)
// ---------------------------------------------------------------------------

// Number of body sections per voxel type
// Loaded from: this+0x514 = num_voxel_sections (see VoxelAnimType_LoadAnim)
static constexpr int VOXEL_MAX_SECTIONS = 8;

// Voxel body data -- raw voxel grid loaded from VXL file
struct VoxelBody
{
    int      num_sections;  // Number of sections in this body
    int      num_frames;    // Number of animation frames
    int      body_size;     // Total body data size
    VXLSection* sections;   // Array of section descriptors (num_sections x 12B)
    VXLFrame*   frames;     // Array of frame data (num_frames x 164B)
    void*       body_data;  // Raw voxel grid body data
};

// HVA animation data -- transform matrices per frame per section
struct VoxelAnim
{
    int                 num_frames;    // Number of animation frames
    int                 num_sections;  // Number of sections per frame
    HVASectionMatrix*   matrices;      // (num_frames x num_sections) x 48B entries
};

// Voxel section info -- runtime query results (VoxelSection_GetInfo @ 0x7564B0)
struct VoxelSectionInfo
{
    uint8_t byte_160;    // Span size X
    uint8_t byte_161;    // Span size Y
    uint8_t byte_162;    // Span size Z
    float   scale;       // Section scale
};

} // namespace gamemd
