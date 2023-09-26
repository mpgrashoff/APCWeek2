//
// Created by marij on 9/19/2023.
//

#include <iostream>
#include "decorators/runningtime_decorator.h"

void lib::decorators::runningtime_decorator::log(std::string_view msg) const {
    auto running_time = std::chrono::high_resolution_clock::now() - s_start_time;
    std::cout << '[' << std::chrono::duration<double>{running_time} << "] ";
    logger_decorator::log(msg);
}