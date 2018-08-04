//
// Created by Joseph Yao on 2018/7/30.
//

#include "today_provider.h"

tm& getToday() {
    time_t now = time(0);
    return *localtime(&now);
}
