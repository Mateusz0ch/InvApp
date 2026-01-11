#include <iostream>
#include "include/InvestObject.hpp"

int main(){
    std::cout<<"Investment calculator"<<std::endl;
    InvestObject io{1000,5.6,10};
    io.calcNextValue(6);
    std::cout<<io.getCurrentValue()<<std::endl;
};