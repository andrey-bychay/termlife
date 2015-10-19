//
//  iterator.hpp
//  termlife
//
//  Created by Andriy Bychay on 16/10/2015.
//  Copyright © 2015 Andriy Bychay. All rights reserved.
//

#ifndef iterator_hpp
#define iterator_hpp

template <typename Container>
class Iterator {
    typename Container::iterator it;
    typename Container::iterator begin;
    typename Container::iterator end;
public:
    typename Container::type_name type_name;
    
    inline
    Iterator(Container & container)
    : begin()
    , it()
    , end()
    {}
    
    inline
    bool hasNext() {
        return it != end;
    }
    
    //inline
    
};

#endif /* iterator_hpp */
