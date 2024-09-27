//
// Created by ICEJJ on 2024/9/26.
//
#pragma once

#ifndef VULKAN_APPLICATION_H
#define VULKAN_APPLICATION_H

#include "Capybara.h"

namespace CAPYBARA {

class Application {

public:

    Application();

    virtual ~Application();

    void run();

private:

};

// To be defined in the client
Application* createApplication();



}


#endif //VULKAN_APPLICATION_H
