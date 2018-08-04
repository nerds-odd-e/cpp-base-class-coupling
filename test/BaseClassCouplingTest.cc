#include "gtest/gtest.h"
#include "../main/LessThanOneYearEmployee.h"
#include "SpyLessThanOneYearEmployee.h"
#include <ctime>
#include "stub_today_provider.h"

using ::testing::NiceMock;
using ::testing::Return;

namespace {

    TEST(BaseClassCoupling, CalculateLessThanOneYearEmployeeBonus) {
        //if my monthly salary is 1200, working year is 0.5, my bonus should be 600
        NiceMock<SpyLessThanOneYearEmployee> lessThanOneYearEmployee;
        lessThanOneYearEmployee.setId(91);
        tm date = {0, 0, 0, 26, 11, 117};
        lessThanOneYearEmployee.setStartWorkingDate(date);
        ON_CALL(lessThanOneYearEmployee, getMonthlySalary()).WillByDefault(Return(1200));
        tm today = {0, 0, 0, 28, 5, 118};
        setToday(today);

        double actual = lessThanOneYearEmployee.getYearlyBonus();
        ASSERT_DOUBLE_EQ(600, actual);
    }

}