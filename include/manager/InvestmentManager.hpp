#pragma once

#include <iostream>
#include <vector>
#include <memory>

#include "ETF.hpp"
#include "Obligation.hpp"

class InvestmentManager{
        std::vector<std::unique_ptr<InvestObject>>properties = {};
    public:
        InvestmentManager();

        template <typename T>
        void addInvestment(InvestType it,double initalValue, double percentage, uint8_t years){
            properties.emplace_back(std::make_unique<T>(it,initalValue,percentage,years));
        };
        
        template<typename T>
        void printInvestment(std::vector<T>& v){
            if(v.empty())
            return;
            printTypeHeader(v[0]->it);
            for(const auto& t:v){
                std::cout<<t->getCurrentValue()<<std::endl;
            };
        };

        template<InvestType>
        bool getType(std::unique_ptr<InvestType>&it){
            return false;
        };
        void getInfo();
        void calcNextState(int years);
        void printTypeHeader(InvestType it);
    };

