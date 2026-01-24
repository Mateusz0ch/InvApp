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
        InvestObject(InvestType _it, double _initalValue, double _percentage, uint8_t _years) : initalValue(_initalValue),percentage(_percentage),years(_years){
            value = initalValue;
            it = _it;
        };
        void calcNextValue(int counter){
            for(int i=0;i<counter;i++)
                value = value + ((value * percentage) / 100);
        };
        double getCurrentValue(){
            return value;
        };
        double getDaily(){
            double dailyVal = (value * percentage)/daysInYear;
            return dailyVal;
        };
    protected:
        
        double value;
        double initalValue;
        double percentage;
        uint8_t years;
};