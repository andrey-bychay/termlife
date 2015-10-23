//
//  evolution.cpp
//  termlife
//
//  Created by Andriy Bychay on 16/10/2015.
//  Copyright © 2015 Andriy Bychay. All rights reserved.
//

#include "evolution.hpp"
#include "space.hpp"

void Evolution::process()
{
    Space & space = Space::getInstance();
    
    Space::iterator it = space.begin();
    Space::iterator end = space.end();
    
    while (it != end) {
        ++it;
    }
}