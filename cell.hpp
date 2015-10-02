//
//  cell.hpp
//  life
//
//  Created by Andriy Bychay on 01/10/2015.
//  Copyright © 2015 Andriy Bychay. All rights reserved.
//

#ifndef cell_hpp
#define cell_hpp

#include "geometry.hpp"
#include <list>

class Cell {
    std::list<Geometry::Coordinate> neighbours;
    
public:
    int getHealthLevel();
    void link(Cell const & cell);
    void refreshLinks();
};



#endif /* cell_hpp */
