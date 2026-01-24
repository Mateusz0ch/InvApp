add_executable(main main.cpp)

set(INC include/component include/manager)

add_subdirectory(src)

target_include_directories(main INTERFACE
                ${INC})       

target_link_libraries(main 
                component_invest_lib
                manager_invest_lib
                )           