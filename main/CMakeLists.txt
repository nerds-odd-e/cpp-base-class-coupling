set(Main_SRCS main.cpp LessThanOneYearEmployee.cpp LessThanOneYearEmployee.h Employee.cpp Employee.h DebugHelper.cpp DebugHelper.h SalaryRepo.cpp SalaryRepo.h)

add_library(core ${Main_SRCS})
add_executable(${CMAKE_PROJECT_NAME} main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} core)
