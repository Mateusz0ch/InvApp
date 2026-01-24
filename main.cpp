#include <iostream>
#include "Obligation.hpp"
#include "ETF.hpp"
#include "InvestmentManager.hpp"

int main(){
    std::cout<<"Investment calculator starting..."<<std::endl;
    InvestmentManager iManager{};
    iManager.addInvestment<Obligation>(InvestType::ETF,1000,5.6,10);
    iManager.addInvestment<ETF>(InvestType::OBLIGATION,1000,7,10);
    iManager.getInfo();
    iManager.calcNextState(10);
    iManager.getInfo();
};