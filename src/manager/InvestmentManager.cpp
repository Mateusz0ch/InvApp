#include "InvestmentManager.hpp"

InvestmentManager::InvestmentManager(){};
void InvestmentManager::getInfo(){
    std::vector<std::unique_ptr<ETF>>etfs;
    std::vector<std::unique_ptr<Obligation>>obligations;
    for(const std::unique_ptr<InvestObject>& o : properties){
        printTypeHeader(o->it);
        std::cout<<o->getCurrentValue()<<std::endl;
    };
};

void InvestmentManager::calcNextState(int years){
    for(std::unique_ptr<InvestObject>& o: properties){
        o->calcNextValue(years);
    };
};

void InvestmentManager::printTypeHeader(InvestType it){
    switch(it){
        case InvestType::ETF:
            std::cout<<"ETF: ";
            break;
        case InvestType::OBLIGATION:
            std::cout<<"OBLIGATION: ";
            break;
        case InvestType::STOCK:
            std::cout<<"STOCK: ";
            break;
    };
};

void InvestmentManager::calculateDaily(){
    using std::cout;
    using std::endl;

    double dailyETF = 0;
    double dailyObligation = 0;
    std::vector<std::unique_ptr<ETF>>etfs;
    std::vector<std::unique_ptr<Obligation>>obligations;
    for(std::unique_ptr<InvestObject>&u:properties){
        switch(u->it){
            case InvestType::OBLIGATION:
                dailyObligation += u->getDaily();
                break;
            case InvestType::ETF:
                dailyETF += u->getDaily();
                break;
        };
    }
    cout<<"Daily ETF: "<<dailyETF<<endl;
    cout<<"Daily Obligation: "<<dailyObligation<<endl;
    cout<<"Overall: "<<dailyETF + dailyObligation<<endl;
}