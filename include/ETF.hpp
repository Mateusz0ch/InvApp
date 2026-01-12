#pragma once

#include <cstdint>
#include "InvestObject.hpp"

class ETF : public InvestObject{
    public:
        ETF(double _initalValue, double _percentage,uint8_t years):InvestObject(_initalValue,_percentage,years){
        };
};