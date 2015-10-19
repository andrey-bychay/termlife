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
    
    class Coordinates2D: public Coordinates {
        int x, y;
    public:
        Coordinates2D(int x, int y);
    };
public:
};

#endif /* geometry_2d_hpp */
