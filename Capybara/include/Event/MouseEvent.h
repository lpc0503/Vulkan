//
// Created by ICEJJ on 2024/9/27.
//
#pragma once
#ifndef VULKAN_MOUSEEVENT_H
#define VULKAN_MOUSEEVENT_H
#include "core.h"
#include "Event.h"

namespace CAPYBARA {

    class MouseMovedEvent : public Event {

    public:
        MouseMovedEvent(float x, float y)
            : m_MouseX(x), m_MouseY(y) {}

        inline float GetX() const { return m_MouseX; }
        inline float GetY() const { return m_MouseY; }

        EVENT_CLASS_TOSTRING("MouseMovedEvent: {} {}", m_MouseX, m_MouseY);

        EVENT_CLASS_TYPE(MouseMoved)
        EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)
        
    private:
        float m_MouseX, m_MouseY;
    };

    class MouseScrolledEvent : public Event {

    public:
        MouseScrolledEvent(float xOffset, float yOffset)
            : m_XOffset(xOffset), m_YOffset(yOffset) {}

        inline float GetXOffset() const { return m_XOffset; }
        inline float GetYOffset() const { return m_YOffset; }

        EVENT_CLASS_TOSTRING("MouseScrolledEvent: {} {}", m_XOffset, m_YOffset);

        EVENT_CLASS_TYPE(MouseScrolled)
        EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)

    private:
        float m_XOffset, m_YOffset;
    };

    class MouseButtonEvent : public Event {

    public:
        inline int GetMouseButton() const { return m_Button; }

        EVENT_CLASS_CATEGORY(EventCategoryMouse | EventCategoryInput)

    protected:
        MouseButtonEvent(int button) : m_Button(button) {}  
        int m_Button;
    };

    class MouseButtonPressedEvent : public MouseButtonEvent {

    public:
        MouseButtonPressedEvent(int button) 
            : MouseButtonEvent(button) {}   

        EVENT_CLASS_TOSTRING("MouseButtonPressedEvent: {}", m_Button);

        EVENT_CLASS_TYPE(MouseButtonPressed)    
    }; 
    
    class MouseButtonReleasedEvent : public MouseButtonEvent {

    public:
        MouseButtonReleasedEvent(int button) 
            : MouseButtonEvent(button) {}

        EVENT_CLASS_TOSTRING("MouseButtonReleasedEvent: {}", m_Button);

        EVENT_CLASS_TYPE(MouseButtonReleased)
    };
}


#endif //VULKAN_MOUSEEVENT_H
