//
// Created by dza02 on 8/28/2021.
//

#ifndef LESSON_TIMESTAMP_DECORATOR_H
#define LESSON_TIMESTAMP_DECORATOR_H

#include <string>
#include <memory>
#include "ilogger.h"
#include "logger_decorator.h"

namespace lib::decorators {

class timestamp_decorator: public decorators::logger_decorator {
public:
    virtual void log(std::string_view msg) const override;
    using  logger_decorator::logger_decorator;
};
}

#endif //LESSON_TIMESTAMP_DECORATOR_H
