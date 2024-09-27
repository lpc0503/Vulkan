//
// Created by ICEJJ on 2024/9/27.
//
#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Capybara {

    std::shared_ptr<spdlog::logger> Log::m_CoreLogger;
    std::shared_ptr<spdlog::logger> Log::m_ClientLogger;

    Log::Log() {

    }

    Log::~Log() {

        
    }

    void Log::init() {
        spdlog::set_pattern("%^[%T] %n: %v%$");
        m_CoreLogger = spdlog::stdout_color_mt("CAPYBARA");
        m_CoreLogger->set_level(spdlog::level::trace);
        
        m_ClientLogger = spdlog::stdout_color_mt("APP");
        m_ClientLogger->set_level(spdlog::level::trace);
    }
}


