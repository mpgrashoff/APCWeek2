//
// Created by marij on 9/18/2023.
//

#ifndef ADVANCED_PROGRAMMING_CONCEPTS_1_LOGGER_DECORATOR_H
#define ADVANCED_PROGRAMMING_CONCEPTS_1_LOGGER_DECORATOR_H
#include "ilogger.h"
#include <memory>


namespace lib::decorators {
    class logger_decorator: public loggers::ilogger
{
public:
    logger_decorator(std::unique_ptr<loggers::ilogger> inner);
    virtual void log(std::string_view msg) const override;
private:
    std::unique_ptr<loggers::ilogger> m_internal_logger;


};

}
#endif //ADVANCED_PROGRAMMING_CONCEPTS_1_LOGGER_DECORATOR_H
