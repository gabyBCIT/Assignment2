//
// Created by Gabrielle Lamoureux on 2018-11-19.
//

#pragma once

#include <vector>
#include "Tour.hpp"

class Population {

public:
    Population();
    void update_tours();

private:
    std::vector<Tour> tours;
    void shuffle_tours(); // might not be needed  - just used in creation really
    void crossover_tours();

};


