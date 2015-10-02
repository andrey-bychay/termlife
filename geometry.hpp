//
//  geometry.hpp
//  life
//
//  Created by Andriy Bychay on 01/10/2015.
//  Copyright © 2015 Andriy Bychay. All rights reserved.
//

#ifndef geometry_hpp
#define geometry_hpp


class Geometry {
    Geometry() {}
public:
    struct Coordinate {};
    
    virtual Geometry const & getInstance();
};

#endif /* geometry_hpp */
