//
//  History.hpp
//  Club Zombie
//
//  Created by Winona Kraus on 4/5/19.
//  Copyright © 2019 Winona Kraus. All rights reserved.
//

#ifndef History_h
#define History_h

#include <stdio.h>
#include "globals.h"

class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
private:
    int mRows;
    int mCols;
    int mGrid[MAXROWS][MAXCOLS]; // Used to create grid
};

#endif /* History_h */
