#include "LessThanOneYearEmployee.h"
#include "DebugHelper.h"
#include <math.h>

using namespace std;

double LessThanOneYearEmployee::getYearlyBonus() {
    DebugHelper::info("--get yearly bonus--");
    double salary = this->getMonthlySalary();
    DebugHelper::info("id:" + to_string(getId()) + ", his monthly salary is:" + to_string(salary));
    return this->workingYear() * salary;
}

double LessThanOneYearEmployee::workingYear() {
    DebugHelper::info("--get working year--");

    time_t now = time(0);
    double year = round(getDaysBetween(*getStartWorkingDate(), *localtime(&now)) / 365);
    return year > 1 ? 1 : year;
}

double LessThanOneYearEmployee::getDaysBetween(tm start, tm end) {
    return difftime(mktime(&end), mktime(&start)) / (60 * 60 * 24);
}
