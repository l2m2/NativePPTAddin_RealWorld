#pragma once
#include <memory>
#include <mutex>
#include <iostream>
#include <log4cpp/Category.hh>
#include <log4cpp/Appender.hh>
#include <log4cpp/Priority.hh>
#include <log4cpp/NDC.hh>
#include <log4cpp/PatternLayout.hh>
#include <log4cpp/BasicConfigurator.hh>
#include <log4cpp/DailyRollingFileAppender.hh>
#include <stdarg.h>

#pragma comment(lib, "log4cpp.lib")

#define LOG_X_ARGS(priority, formatStr, ...) {\
        char temp[2048]; \
        sprintf_s(temp, "[%s][%d]%s", __FUNCTION__, __LINE__, formatStr); \
        CLogSingleton::GetInstance().LogInfo(priority, temp, __VA_ARGS__);  \
    }

#define LOG_INFO(formatStr, ...) LOG_X_ARGS(log4cpp::Priority::INFO, formatStr, __VA_ARGS__);
#define LOG_NOTICE(formatStr, ...) LOG_X_ARGS(log4cpp::Priority::NOTICE, formatStr, __VA_ARGS__);
#define LOG_WARN(formatStr, ...) LOG_X_ARGS(log4cpp::Priority::WARN, formatStr, __VA_ARGS__);
#define LOG_ERROR(formatStr, ...) LOG_X_ARGS(log4cpp::Priority::ERROR, formatStr, __VA_ARGS__);
#define LOG_CRIT(formatStr, ...) LOG_X_ARGS(log4cpp::Priority::CRIT, formatStr, __VA_ARGS__);
#define LOG_ALTER(formatStr, ...) LOG_X_ARGS(log4cpp::Priority::ALERT, formatStr, __VA_ARGS__);

class CLogSingleton
{
public:
    static CLogSingleton& GetInstance() {
        static std::once_flag s_flag;
        std::call_once(s_flag, [&]() {
            instance_.reset(new CLogSingleton);
        });

        return *instance_;
    }

    ~CLogSingleton();

    log4cpp::Category& GetLogCategory();

    void LogInfo(log4cpp::Priority::Value priority,
        const char* stringFormat,
        ...);

private:
    CLogSingleton();

    CLogSingleton(const CLogSingleton&) = delete;
    CLogSingleton& operator=(const CLogSingleton&) = delete;

private:
    static std::unique_ptr<CLogSingleton> instance_;
};
