#include "InvestmentManager.hpp"

InvestmentManager::InvestmentManager(){};
void InvestmentManager::getInfo(){
    std::vector<std::unique_ptr<ETF>>etfs;
    std::vector<std::unique_ptr<Obligation>>obligations;
    for(const std::unique_ptr<InvestObject>& o : properties){
        printTypeHeader(o->it);
        std::cout<<o->getCurrentValue()<<std::endl;
    };
    printInvestment<std::unique_ptr<ETF>>(etfs);
};

void InvestmentManager::calcNextState(int years){
    for(std::unique_ptr<InvestObject>& o: properties){
        o->calcNextValue(years);
    };
};

void InvestmentManager::printTypeHeader(InvestType it){
    switch(it){
        case InvestType::ETF:
            std::cout<<"ETF"<<std::endl;
            break;
        case InvestType::OBLIGATION:
            std::cout<<"OBLIGATION"<<std::endl;
            break;
        case InvestType::STOCK:
            std::cout<<"STOCK"<<std::endl;
            break;
    };
};