#ifndef CPP_OTP_EMPLOYEE_H
#define CPP_OTP_EMPLOYEE_H

#include <ctime>
#include <string>

using namespace std;

class Employee {

private:
    int id;
    tm* startWorkingDate;

public:
    int getId() const;
    tm& getStartWorkingDate() const;

    void setId(int id);
    void setStartWorkingDate(tm& startWorkingDate);

    virtual double getYearlyBonus() = 0;

protected:
    virtual double getMonthlySalary();

};

#endif //CPP_OTP_EMPLOYEE_H
