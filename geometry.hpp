//
//  geometry.hpp
//  life
//
//  Created by Andriy Bychay on 01/10/2015.
//  Copyright © 2015 Andriy Bychay. All rights reserved.
//

#ifndef geometry_hpp
#define geometry_hpp

#include <set>
#include <memory>
#include <string>
#include <vector>

class Geometry {
    class Dimension;
public:
    typedef long Coordinate;
    class Location;
    friend bool operator < (Location const & lhs, Location const & rhs);
    friend bool operator < (Dimension const & lhs, Dimension const & rhs);
    
private:
    int dimensions;
    
    Geometry(int dimensions);
    
    class Dimension {
        friend class Geometry;
        friend bool operator < (Dimension const & lhs, Dimension const & rhs);
        
        Coordinate coordinate;
        std::string name;
    public:
        Dimension(Coordinate coordinate, std::string const & name);
        
        std::string toString() const;
    };
    
public:
    class Location {
        friend class Geometry;
        friend bool operator < (Location const & lhs, Location const & rhs);
        
        std::vector<Dimension> dimensions;
        
    public:
        Location(Location const & location);
        
        std::string toString() const;
        std::set<Location> getNeighbourhood();
    };
    
    static Geometry const & getInstance();
    
    virtual std::set<Location> getNeighbourhood(Location const & location);
};

inline
bool operator < (Geometry::Location const & lhs, Geometry::Location const & rhs)
{
    return std::lexicographical_compare(lhs.dimensions.begin(), lhs.dimensions.end(),
                                        rhs.dimensions.begin(), rhs.dimensions.end(),
                                        [](Geometry::Dimension const & d1, Geometry::Dimension const & d2) { return d1 < d2; });
}

inline
bool operator < (Geometry::Dimension const & lhs, Geometry::Dimension const & rhs)
{
    return lhs.coordinate < rhs.coordinate;
}

#endif /* geometry_hpp */
