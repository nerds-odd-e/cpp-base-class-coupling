#ifndef CPP_OTP_LESSTHANONEYEAREMPLOYEE_H
#define CPP_OTP_LESSTHANONEYEAREMPLOYEE_H

#include "Employee.h"

class LessThanOneYearEmployee : public Employee {
public:
    double getYearlyBonus() override;

private:
    double workingYear();
    double getDaysBetween(tm start, tm end);
};

#endif //CPP_OTP_LESSTHANONEYEAREMPLOYEE_H
