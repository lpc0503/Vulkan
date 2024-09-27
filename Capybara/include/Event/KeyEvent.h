//
// Created by ICEJJ on 2024/9/27.
//
#pragma once
#ifndef VULKAN_KEYEVENT_H
#define VULKAN_KEYEVENT_H
#include "core.h"
#include "Event.h"

namespace CAPYBARA {

    class KeyEvent : public Event {

    public:
        inline int GetKeyCode() const { return m_KeyCode; }

        EVENT_CLASS_CATEGORY(EventCategoryKeyboard | EventCategoryInput)
    protected:

        KeyEvent(int keycode) : m_KeyCode(keycode) {}
        int m_KeyCode;
    };

    class KeyPressedEvent : public KeyEvent {

    public:
        KeyPressedEvent(int keycode, int repeatCount) : 
            KeyEvent(keycode), m_RepeatCount(repeatCount) {}

        inline int GetRepeatCount() const { return m_RepeatCount; }

        EVENT_CLASS_TOSTRING("KeyPressedEvent: {} ({})", m_KeyCode, m_RepeatCount);

        EVENT_CLASS_TYPE(KeyPressed)
    private:
        int m_RepeatCount;
    };

    class KeyReleasedEvent : public KeyEvent {

    public:
        KeyReleasedEvent(int keycode) : KeyEvent(keycode) {}

        EVENT_CLASS_TOSTRING("KeyReleasedEvent: {}", m_KeyCode);

        EVENT_CLASS_TYPE(KeyReleased)
    };
}


#endif //VULKAN_KEYEVENT_H
