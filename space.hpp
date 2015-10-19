//
//  space.hpp
//  life
//
//  Created by Andriy Bychay on 01/10/2015.
//  Copyright © 2015 Andriy Bychay. All rights reserved.
//

#ifndef space_hpp
#define space_hpp

#include "geometry.cpp"
#include "entity.hpp"
#include <map>

class Space {
public:
    typedef std::map<Geometry::Location, Entity> Storage;
    typedef Storage::iterator Iterator;
    
    static Space & getInstance();
    
    Iterator enumerateEntities();
    
    
    bool isNotEmpty(Geometry::Location const & location) const;
    Entity & getEntity(Geometry::Location const & location) const;
};

#endif /* space_hpp */
