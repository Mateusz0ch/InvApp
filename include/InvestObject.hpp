#include <cstdint>

class InvestObject{

    public:
        InvestObject(double _initalValue, double _percentage, uint8_t _years) : initalValue(_initalValue),percentage(_percentage),years(_years){
            value = initalValue;
        };
        void calcNextValue(int counter){
            for(int i=0;i<counter;i++)
                value = value + ((value * percentage) / 100);
        };
        double getCurrentValue(){
            return value;
        };
    protected:
        
        double value;
        double initalValue;
        double percentage;
        uint8_t years;
};