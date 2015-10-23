//
//  geometry.cpp
//  life
//
//  Created by Andriy Bychay on 01/10/2015.
//  Copyright © 2015 Andriy Bychay. All rights reserved.
//

#include "geometry.hpp"
#include <algorithm>
#include <vector>
#include <sstream>

Geometry const & Geometry::getInstance() {
    static Geometry geometry(2); // 2D world
    return geometry;
}

Geometry::Geometry(int dimensions)
: dimensions(dimensions)
{}

Geometry::Dimension::Dimension(Geometry::Coordinate coordinate, std::string const & name)
: coordinate(coordinate)
, name(name)
{}

std::string Geometry::Dimension::toString() const
{
    std::stringstream ostr;
    ostr << name << "(" << coordinate << ")";
    return ostr.str();
}

Geometry::Location::Location(Location const & location)
: dimensions(location.dimensions)
{}

std::string Geometry::Location::toString() const
{
    std::string str;
    std::for_each(dimensions.begin(), dimensions.end(),
                  [&](Dimension const & dim)
                  {
                      if (!str.empty()) {
                          str += ", ";
                      }
                      str += dim.toString();
                  });
    return str;
}

std::set<Geometry::Location> Geometry::getNeighbourhood(Geometry::Location const & location)
{
    std::set<Location> neighbourhood;
    
    std::vector<Geometry::Coordinate> offsets(dimensions, -1);
    // prepare all possible offsets
    while (std::any_of(offsets.begin(), offsets.end(), [](Coordinate c) { return c <= 0; }))
    {
        // prepare next offsets
        for (size_t i = 0; i < offsets.size(); ++i)
        {
            if (offsets[i] <= 0)
            {
                ++offsets[i];
                break;
            }
            offsets[i] = -1;
        }
        // if these are valuable offsets (at least one dimension is not 0)
        if (std::none_of(offsets.begin(), offsets.end(), [](Coordinate c) { return c == 0; }))
        {
            // prepare new location on basis of the offsets
            Location newLocation = location;
            for (size_t i = 0; i < offsets.size(); ++i)
            {
                newLocation.dimensions[i].coordinate += offsets[i];
            }
            // save to neighbourhood
            neighbourhood.insert(newLocation);
        }
    }
    return neighbourhood;
}
