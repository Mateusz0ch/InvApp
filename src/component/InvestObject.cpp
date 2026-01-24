#include "InvestObject.hpp"

InvestObject::InvestObject(InvestType _it, double _initalValue, double _percentage, uint8_t _years) : initalValue(_initalValue),percentage(_percentage),years(_years){
    value = initalValue;
    it = _it;
};
void InvestObject::calcNextValue(int counter){
            for(int i=0;i<counter;i++)
                value = value + ((value * percentage) / 100);
};
double InvestObject::getCurrentValue(){
    return value;
};
double InvestObject::getDaily(){
    double dailyVal = ((value * percentage)/100)/daysInYear;
    return dailyVal;
};