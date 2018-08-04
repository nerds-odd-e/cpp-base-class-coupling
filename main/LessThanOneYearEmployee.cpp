#include "LessThanOneYearEmployee.h"
#include "DebugHelper.h"
#include <math.h>
#include <iostream>
#include "today_provider.h"
#include <ctime>

using namespace std;

double LessThanOneYearEmployee::getYearlyBonus() {
    info("--get yearly bonus--");
    double salary = this->getMonthlySalary();
    info("id:" + to_string(getId()) + ", his monthly salary is:" + to_string(salary));
    return this->workingYear() * salary;
}

double LessThanOneYearEmployee::workingYear() {
    info("--get working year--");

    double year = round(getDaysBetween(*getStartWorkingDate(), *getToday()) / 365 * 100) / 100;
    return year > 1 ? 1 : year;
}

double LessThanOneYearEmployee::getDaysBetween(tm start, tm end) {
    return difftime(mktime(&end), mktime(&start)) / (60 * 60 * 24);
}

void LessThanOneYearEmployee::info(const string msg) const {
    DebugHelper::info(msg);
}
