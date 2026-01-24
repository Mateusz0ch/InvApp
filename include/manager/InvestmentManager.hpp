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
        void addInvestment(InvestType it,double initalValue, double percentage, uint8_t years){
            properties.emplace_back(std::make_unique<T>(it,initalValue,percentage,years));
        };
        void getInfo(){
            std::vector<std::unique_ptr<ETF>>etfs;
            std::vector<std::unique_ptr<Obligation>>obligations;
            for(const std::unique_ptr<InvestObject>& o : properties){
                printTypeHeader(o->it);
                std::cout<<o->getCurrentValue()<<std::endl;
            };
            printInvestment<std::unique_ptr<ETF>>(etfs);
        };
        void calcNextState(int years){
            for(std::unique_ptr<InvestObject>& o: properties){
                o->calcNextValue(years);
            };
        };
        void printTypeHeader(InvestType it){
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
        }

};
