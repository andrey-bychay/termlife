//
//  evolution_rules.hpp
//  life
//
//  Created by Andriy Bychay on 01/10/2015.
//  Copyright © 2015 Andriy Bychay. All rights reserved.
//

#ifndef evolution_rules_hpp
#define evolution_rules_hpp

class EvolutionRules {
public:
    struct ValueRange {
        int from, upto;
        ValueRange(int from, int upto) : from(from), upto(upto) {}
    };
    
    int getCellMaxHealthLevel();
    ValueRange getCellNeighboursCount();
    
    int getCellDevelopingPeriod();
    ValueRange getCellDevelopingNeighbourCount();
};

#endif /* evolution_rules_hpp */
