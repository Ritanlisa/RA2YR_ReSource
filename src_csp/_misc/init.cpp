#include "init.hpp"

char __usercall Init::Intro@<al>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>)
{
    if ( (g_IntroMovieObject & 4) != 0 )
    Movie::Play(-1, a2, a3, 1, 1, 1, 0);
    Screen::Capture(1, 0, a1, a2);
    return Event::Dispatch();
}

