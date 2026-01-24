#include <iostream>
#include "Obligation.hpp"
#include "ETF.hpp"
#include "InvestmentManager.hpp"

int main(){
    InvestmentManager manager;
    manager.addInvestment<Obligation>(InvestType::OBLIGATION,100000,5.6,10);
    manager.addInvestment<Obligation>(InvestType::ETF,100000,7,10);


    manager.getInfo();
    manager.calculateDaily();
};