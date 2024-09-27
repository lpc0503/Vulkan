//
// Created by ICEJJ on 2024/9/27.
//
#include "Capybara.h"

#ifndef VULKAN_LOG_H
#define VULKAN_LOG_H

#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Capybara {

    class Log {

    public:

        Log();

        ~Log();

        static void init();

        inline static std::shared_ptr<spdlog::logger>& getCoreLogger() { return m_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& getClientLogger() { return m_ClientLogger; }

    private:
        static std::shared_ptr<spdlog::logger> m_CoreLogger;
        static std::shared_ptr<spdlog::logger> m_ClientLogger;
    };

}

#define CAPYBARA_CORE_TRACE(...) Capybara::Log::getCoreLogger()->trace(__VA_ARGS__)
#define CAPYBARA_CORE_INFO(...) Capybara::Log::getCoreLogger()->info(__VA_ARGS__)
#define CAPYBARA_CORE_WARN(...) Capybara::Log::getCoreLogger()->warn(__VA_ARGS__)
#define CAPYBARA_CORE_ERROR(...) Capybara::Log::getCoreLogger()->error(__VA_ARGS__)
#define CAPYBARA_CORE_FATAL(...) Capybara::Log::getCoreLogger()->fatal(__VA_ARGS__)

#define CAPYBARA_CLIENT_TRACE(...) Capybara::Log::getClientLogger()->trace(__VA_ARGS__)
#define CAPYBARA_CLIENT_INFO(...) Capybara::Log::getClientLogger()->info(__VA_ARGS__)
#define CAPYBARA_CLIENT_WARN(...) Capybara::Log::getClientLogger()->warn(__VA_ARGS__)
#define CAPYBARA_CLIENT_ERROR(...) Capybara::Log::getClientLogger()->error(__VA_ARGS__)
#define CAPYBARA_CLIENT_FATAL(...) Capybara::Log::getClientLogger()->fatal(__VA_ARGS__)

#endif //VULKAN_LOG_H
