//
//  entity.hpp
//  termlife
//
//  Created by Andriy Bychay on 15/10/2015.
//  Copyright © 2015 Andriy Bychay. All rights reserved.
//

#ifndef entity_hpp
#define entity_hpp

#include "geometry.hpp"

class Entity {
    Geometry::Location location;
public:
    inline
    Geometry::Location const & getLocation() {
        return location;
    }
    //    bool isAlive();
};

#endif /* entity_hpp */
