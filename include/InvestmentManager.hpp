#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include "InvestObject.hpp"

class InvestmentManager{
        std::vector<std::unique_ptr<InvestObject>>properties = {};
    public:
        InvestmentManager(){};
        template <typename T>
        void addInvestment(double initalValue, double percentage, uint8_t years){
            properties.emplace_back(std::make_unique<T>(initalValue,percentage,years));
        };
        void displayObjects(){
            std::cout<<"size of properties: "<<properties.size()<<std::endl;
        };
        void callProperties(){
            for(const std::unique_ptr<InvestObject>& o : properties){
                std::cout<<o->getCurrentValue()<<std::endl;
            };
        }
};
