#include <iostream>
#include "Obligation.hpp"
#include "InvestmentManager.hpp"

int main(){
    std::cout<<"Investment calculator starting..."<<std::endl;
    InvestmentManager iManager{};
    iManager.addInvestment<Obligation>(1000,5.6,10);
    iManager.getInfo();
    iManager.calcNextState(3);
    iManager.getInfo();
};