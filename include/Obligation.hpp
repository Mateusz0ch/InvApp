#pragma once

#include <cstdint>
#include "InvestObject.hpp"

class Obligation : public InvestObject{
    public:
        Obligation(double _initalValue, double _percentage, uint8_t _years) : InvestObject(_initalValue, _percentage, _years){
        };
};