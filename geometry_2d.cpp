//
//  geometry_2d.cpp
//  life
//
//  Created by Andriy Bychay on 02/10/2015.
//  Copyright © 2015 Andriy Bychay. All rights reserved.
//

#include "geometry_2d.hpp"

std::set<Geometry::Location const> Geometry2D::getNeighbourhood(Location const & location) {
    return location.getNeighbourhood();
}