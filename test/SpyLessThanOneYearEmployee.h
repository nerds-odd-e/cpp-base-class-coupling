#ifndef CPP_OTP_SPYLESSTHANONEYEAREMPLOYEE_H
#define CPP_OTP_SPYLESSTHANONEYEAREMPLOYEE_H

#include "../main/LessThanOneYearEmployee.h"
#include "gmock/gmock.h"

class SpyLessThanOneYearEmployee : public LessThanOneYearEmployee {

public:
    MOCK_CONST_METHOD1(info, void(string));
    MOCK_METHOD0(getMonthlySalary, double());
};

#endif //CPP_OTP_SPYLESSTHANONEYEAREMPLOYEE_H
