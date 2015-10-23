//
//  space.cpp
//  life
//
//  Created by Andriy Bychay on 01/10/2015.
//  Copyright © 2015 Andriy Bychay. All rights reserved.
//

#include "space.hpp"

namespace {
    Space space;
}

Space & Space::getInstance() {
    return space;
}

Space::iterator Space::begin() {
    return storage.begin();
}

Space::const_iterator Space::begin() const {
    return storage.begin();
}

Space::iterator Space::end() {
    return storage.end();
}

Space::const_iterator Space::end() const {
    return storage.end();
}

bool Space::isNotEmpty(Geometry::Location const & location) const {
    return storage.find(location) != storage.end();
}

Entity & Space::getEntity(Geometry::Location const & location) {
    iterator it = storage.find(location);
    if (it != storage.end()) {
        return it->second;
    }
    throw std::out_of_range("no entity if found at " + location.toString());
}
