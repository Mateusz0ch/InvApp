add_library(component_invest_lib
            InvestObject.cpp
            ETF.cpp
            Obligation.cpp
            )

target_include_directories(component_invest_lib PUBLIC
            ${CMAKE_SOURCE_DIR}/include/component
            )
            
