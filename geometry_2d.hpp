//
//  geometry_2d.hpp
//  life
//
//  Created by Andriy Bychay on 02/10/2015.
//  Copyright © 2015 Andriy Bychay. All rights reserved.
//

#ifndef geometry_2d_hpp
#define geometry_2d_hpp

#include "geometry.hpp"

class Geometry2D : public Geometry {
    
    class Coordinate2D: public Coordinate {
        int x, y;
    public:
        Coordinate2D(int x, int y)
        : x(x), y(y)
        {}
    };
public:
};

#endif /* geometry_2d_hpp */
