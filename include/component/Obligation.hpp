#pragma once

#include <cstdint>
#include "InvestObject.hpp"

class Obligation : public InvestObject{
    public:
        Obligation(InvestType _it,double _initalValue, double _percentage, uint8_t _years);
};