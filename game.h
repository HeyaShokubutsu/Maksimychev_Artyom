#ifndef GAME_H
#define GAME_H

#include "entity.h"

class Game
{
    HANDLE handle;
public:
    Game( HANDLE h );
    void start0();
    void start1();
};

#endif // GAME_H
