//
// Created by marij on 9/15/2023.
//

#include "clogger_adapter.h"

lib::clogger_adapter::clogger_adapter(): //delegating default constructor
        clogger_adapter(60)
{}

lib::clogger_adapter::clogger_adapter(int rollingInterval)
{
    lg_result lgResult = lg_create(&m_logger,rollingInterval);
    if(lgResult==lgr_ok)
    {
        lg_set_debug_output(m_logger, true);
        std::cout<< "legacy logger initialisation successful\n";
    }
    else throw std::runtime_error ( "error with creating legacy logger object\n" );
}

lib::clogger_adapter::~clogger_adapter() noexcept
{
    lg_destroy(&m_logger);
}


void lib::clogger_adapter::log(std::string_view msg) const
{
    lg_log(m_logger,msg.data());
}