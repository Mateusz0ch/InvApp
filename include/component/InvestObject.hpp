#pragma once

#include <cstdint>

enum class InvestType{
    OBLIGATION,
    STOCK,
    ETF
};

class InvestObject{
    constexpr static int daysInYear = 365;
    public:
        InvestType it;
        InvestObject(InvestType _it, double _initalValue, double _percentage, uint8_t _years);
        void calcNextValue(int counter);
        double getCurrentValue();
        double getDaily();
    protected:
        double value;
        double initalValue;
        double percentage;
        uint8_t years;
};