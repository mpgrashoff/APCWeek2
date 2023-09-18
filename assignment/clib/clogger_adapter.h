//
// Created by marij on 9/15/2023.
//

#ifndef ADVANCED_PROGRAMMING_CONCEPTS_1_CLOGGER_ADAPTER_H
#define ADVANCED_PROGRAMMING_CONCEPTS_1_CLOGGER_ADAPTER_H

#include "../include/ilogger.h"
#include "../clib/logger.h"
#include "iostream"

namespace lib {

    class clogger_adapter : public loggers::ilogger
    {
    public:
        clogger_adapter();
        clogger_adapter(int rollingInterval);
        //log function to be overwriten to implement ilogger
        virtual void log(std::string_view msg) const override;
        ~clogger_adapter();

    private:
        lg_logger* m_logger= NULL;
    };



}

#endif //ADVANCED_PROGRAMMING_CONCEPTS_1_CLOGGER_ADAPTER_H
