//
//  main.cpp
//  Club Zombie
//
//  Created by Winona Kraus on 4/5/19.
//  Copyright © 2019 Winona Kraus. All rights reserved.
//

#include "Game.h"
#include "Arena.h"
#include "globals.h"
#include "History.h"
#include "Player.h"
#include "Zombie.h"

int main()
{
	Game g(16, 16, 40);
	g.play();
}
