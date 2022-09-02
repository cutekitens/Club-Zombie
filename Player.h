//
//  Player.h
//  Club Zombie
//
//  Created by Winona Kraus on 4/5/19.
//  Copyright © 2019 Winona Kraus. All rights reserved.
//

#ifndef Player_h
#define Player_h

#include <stdio.h>
#include "Arena.h"

class Player
{
public:
    // Constructor
    Player(Arena *ap, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    int  age() const;
    bool isDead() const;
    
    // Mutators
    void   stand();
    void   moveOrAttack(int dir);
    void   setDead();
    
private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_age;
    bool   m_dead;
};


#endif /* Player_h */
