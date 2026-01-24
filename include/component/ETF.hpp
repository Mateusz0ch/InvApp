#pragma once

#include <cstdint>
#include "InvestObject.hpp"

class ETF : public InvestObject{
    public:
        ETF(InvestType _it,double _initalValue, double _percentage,uint8_t years);
};
