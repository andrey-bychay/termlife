//
//  geometry.hpp
//  life
//
//  Created by Andriy Bychay on 01/10/2015.
//  Copyright © 2015 Andriy Bychay. All rights reserved.
//

#ifndef geometry_hpp
#define geometry_hpp

#include <list>
#include <memory>

class Geometry {
    Geometry();
    
protected:
    class Coordinates {
    };
    
public:
    class Location {
        std::shared_ptr<Coordinates *> coordinates;
    };
    
    static Geometry const & getInstance();
    
    virtual std::list<Location> getNeighbourhood(Location const & location);
};

#endif /* geometry_hpp */
