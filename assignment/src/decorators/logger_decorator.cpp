//
// Created by marij on 9/18/2023.
//
#include "decorators/logger_decorator.h"

void lib::decorators::logger_decorator::log(std::string_view msg) const
{
    m_internal_logger->log(msg);
}

lib::decorators::logger_decorator::logger_decorator(std::unique_ptr<loggers::ilogger> inner) :
    m_internal_logger{std::move(inner)}
{

}