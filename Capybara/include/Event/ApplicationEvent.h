//
// Created by ICEJJ on 2024/9/27.
//
#pragma once

#ifndef VULKAN_APPLICATIONEVENT_H
#define VULKAN_APPLICATIONEVENT_H

#include "core.h"
#include "Event.h"

namespace CAPYBARA {

    class WindowResizeEvent : public Event {

    public:
        WindowResizeEvent(unsigned int width, unsigned int height) 
            : m_Width(width), m_Height(height) {}

        inline unsigned int GetWidth() const { return m_Width; }
        inline unsigned int GetHeight() const { return m_Height; }  

        EVENT_CLASS_TOSTRING("WindowResizeEvent: {} {}", m_Width, m_Height);

        EVENT_CLASS_TYPE(WindowResize)
        EVENT_CLASS_CATEGORY(EventCategoryApplication)    
    private:
        unsigned int m_Width, m_Height;
    };

    class WindowCloseEvent : public Event {

    public:
        WindowCloseEvent() = default;

        EVENT_CLASS_TYPE(WindowClose)
        EVENT_CLASS_CATEGORY(EventCategoryApplication)
    };
    
    class AppTickEvent : public Event {

    public:
        AppTickEvent() = default;

        EVENT_CLASS_TYPE(AppTick)
        EVENT_CLASS_CATEGORY(EventCategoryApplication)
    };
    
    class AppUpdateEvent : public Event {

    public:
        AppUpdateEvent() = default;

        EVENT_CLASS_TYPE(AppUpdate)
        EVENT_CLASS_CATEGORY(EventCategoryApplication)
    };
    
    class AppRenderEvent : public Event {

    public:
        AppRenderEvent() = default;

        EVENT_CLASS_TYPE(AppRender)
        EVENT_CLASS_CATEGORY(EventCategoryApplication)
    };
    
}

#endif //VULKAN_APPLICATIONEVENT_H
