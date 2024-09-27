//
// Created by ICEJJ on 2024/9/27.
//
#pragma once
#ifndef VULKAN_EVENTFORMATTER_H
#define VULKAN_EVENTFORMATTER_H
#include "Event.h"
#include "Log.h"

template<typename T>
struct fmt::formatter<T, std::enable_if_t<std::is_base_of_v<CAPYBARA::Event, T>, char>> : fmt::formatter<std::string> {
    auto format(const T& e, format_context& ctx) {
        return fmt::formatter<std::string>::format(e.ToString(), ctx);
    }
};



#endif //VULKAN_EVENTFORMATTER_H
