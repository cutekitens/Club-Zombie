//
//  Game.hpp
//  Club Zombie
//
//  Created by Winona Kraus on 4/5/19.
//  Copyright © 2019 Winona Kraus. All rights reserved.
//

#ifndef Game_h
#define Game_h

#include <stdio.h>
#include "Arena.h"

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nZombies);
    ~Game();
    
    // Mutators
    void play();
    
private:
    Arena* m_arena;
};
#endif /* Game_h */
