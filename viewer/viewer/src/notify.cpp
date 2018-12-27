//------------------------------------------------------------------------------
//
//      OSG log messages handler
//      (c) maisvendoo, 12/12/2018
//
//------------------------------------------------------------------------------
/*!
 * \file
 * \brief OSG log messages handler
 * \copyright maisvendoo
 * \author maisvendoo
 * \date 12/12/2018
 */

#include    "notify.h"

//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
LogFileHandler::LogFileHandler(const std::string &file)
{
    log.open(file.c_str());
}

//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
LogFileHandler::~LogFileHandler()
{
    log.close();
}

//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
void LogFileHandler::notify(osg::NotifySeverity severity, const char *msg)
{
    (void) severity;

    log << msg;
}