#include "pch.h"
#include "Log.h"

static std::string LOG_FILE_NAME;

std::unique_ptr<CLogSingleton> CLogSingleton::instance_;

CLogSingleton::CLogSingleton()
{
    std::string logDir = StringUtil::wstring2string(PathUtil::GetLogDir());
    CreateDirectoryA(logDir.c_str(), NULL);
    LOG_FILE_NAME = logDir + "\\native-ppt-addin";

    log4cpp::Appender *appender = new log4cpp::DailyRollingFileAppender("DailyFileAppender",
        string(LOG_FILE_NAME) + string(".log"), 30);
    log4cpp::PatternLayout *patternlayout = new log4cpp::PatternLayout();
    patternlayout->setConversionPattern("%d [%t][%p] %x: %m%n");
    appender->setLayout(patternlayout);

    log4cpp::Category& log = log4cpp::Category::getInstance(
        std::string(LOG_FILE_NAME));
    log.addAppender(appender);
}

CLogSingleton::~CLogSingleton()
{
    log4cpp::Category::shutdown();
}

void CLogSingleton::LogInfo(log4cpp::Priority::Value priority,
    const char* stringFormat,
    ...)
{
    va_list va;

    va_start(va, stringFormat);
    log4cpp::Category::getInstance(std::string(LOG_FILE_NAME)).logva(
        priority,
        stringFormat,
        va);

    va_end(va);
}

log4cpp::Category& CLogSingleton::GetLogCategory()
{
    return log4cpp::Category::getInstance(std::string(LOG_FILE_NAME));
}
