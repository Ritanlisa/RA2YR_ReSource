// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/render/movie.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "movie.hpp"

namespace gamemd {
BinkMovieHandle::BinkMovieHandle() : totalFrames(0) {}

int BinkMovieHandle::GetWidth() const { return width; }

int BinkMovieHandle::GetHeight() const { return height; }

bool BinkMovieHandle::IsPlaying() const { return playing; }

int BinkMovieHandle::GetCurrentFrame() const { return currentFrame; }

int BinkMovieHandle::GetTotalFrames() const { return totalFrames; }

uint32_t BinkMovieHandle::GetSurfaceFlags() const { return surfaceFlags; }

int VQMovieHandle::GetWidth() const { return width; }

int VQMovieHandle::GetHeight() const { return height; }

bool VQMovieHandle::IsPlaying() const { return playing; }

MoviePlayer& MoviePlayer::Instance() {
        static MoviePlayer inst;
        return inst;
    }

MovieHandle* MoviePlayer::CurrentMovie() const { return currentMovie; }
}

