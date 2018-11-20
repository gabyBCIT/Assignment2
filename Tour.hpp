//
// Created by Gabrielle Lamoureux on 2018-11-19.
//

#pragma once

#include <vector>
#include "City.hpp"

class Tour {
public:
    Tour();
    void mutate_tour();
    void generate_fitness();
    virtual ~Tour();

private:
    std::vector<City> route;
    int fitness;
};

