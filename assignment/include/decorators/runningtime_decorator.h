//
// Created by marij on 9/19/2023.
//

#ifndef ADVANCED_PROGRAMMING_CONCEPTS_1_RUNNINGTIME_DECORATOR_H
#define ADVANCED_PROGRAMMING_CONCEPTS_1_RUNNINGTIME_DECORATOR_H

#include "logger_decorator.h"
#include "chrono"

namespace lib::decorators {
class runningtime_decorator: public decorators::logger_decorator {
public:
    virtual void log(std::string_view msg)const override;
    using logger_decorator::logger_decorator;
private:
    const static inline
    std::chrono::time_point<std::chrono::high_resolution_clock> s_start_time
    {
            std::chrono::high_resolution_clock::now()
    };
};

}
#endif //ADVANCED_PROGRAMMING_CONCEPTS_1_RUNNINGTIME_DECORATOR_H
