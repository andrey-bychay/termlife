//
//  space.hpp
//  life
//
//  Created by Andriy Bychay on 01/10/2015.
//  Copyright © 2015 Andriy Bychay. All rights reserved.
//

#ifndef space_hpp
#define space_hpp

#include "geometry.hpp"
#include "entity.hpp"
#include <map>

class Space {
public:
    typedef std::map<Geometry::Location, Entity> Storage;
    typedef Storage::iterator iterator;
    typedef Storage::const_iterator const_iterator;
    
    static Space & getInstance();
    
    iterator begin();
    const_iterator begin() const;
    iterator end();
    const_iterator end() const;
    
    bool isNotEmpty(Geometry::Location const & location) const;
    Entity & getEntity(Geometry::Location const & location);
    
private:
    Storage storage;
};

#endif /* space_hpp */
