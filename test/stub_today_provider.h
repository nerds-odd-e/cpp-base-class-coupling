#include <ctime>

#ifndef CPP_BIRTHDAY_TODAY_PROVIDER_H
#define CPP_BIRTHDAY_TODAY_PROVIDER_H

static tm* today;

void setToday(tm& aToday) {
    today = &aToday;
}

tm& getToday() {
    return *today;
}

#endif //CPP_BIRTHDAY_TODAY_PROVIDER_H
