#include "Employee.h"
#include "DebugHelper.h"
#include "SalaryRepo.h"
#include <iostream>

int Employee::getId() const {
    return id;
}

void Employee::setId(int id) {
    Employee::id = id;
}

tm *Employee::getStartWorkingDate() const {
    return startWorkingDate;
}

void Employee::setStartWorkingDate(tm *startWorkingDate) {
    Employee::startWorkingDate = startWorkingDate;
}

double Employee::getMonthlySalary() {
    DebugHelper::info("query monthly salary id:" + to_string(id));
    return SalaryRepo::get(this->id);
}

