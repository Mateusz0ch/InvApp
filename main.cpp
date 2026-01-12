#include <iostream>
#include "Obligation.hpp"
#include "ETF.hpp"
#include "InvestmentManager.hpp"

int main(){
    std::cout<<"Investment calculator starting..."<<std::endl;
    InvestmentManager iManager{};
    iManager.addInvestment<Obligation>(1000,5.6,10);
    iManager.addInvestment<ETF>(1000,6,10);
    iManager.getInfo();
    iManager.calcNextState(3);
    iManager.getInfo();
};