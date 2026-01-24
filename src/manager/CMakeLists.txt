add_library(manager_invest_lib
            InvestmentManager.cpp
            )

target_include_directories(manager_invest_lib PUBLIC
            ${CMAKE_SOURCE_DIR}/include/manager
            ${CMAKE_SOURCE_DIR}/include/component

            )
message(${CMAKE_SOURCE_DIR})