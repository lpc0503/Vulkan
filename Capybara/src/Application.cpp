//
// Created by ICEJJ on 2024/9/26.
//

#include "core.h"
#include "Application.h"

// Temp Code, to be removed
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

namespace CAPYBARA {

CAPYBARA::Application::Application() {

    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

    CAPYBARA_CORE_INFO("Constructing Application");
}

CAPYBARA::Application::~Application() {
    
    CAPYBARA_CORE_INFO("Destructing Application");
}

void CAPYBARA::Application::run() {

    GLFWwindow* window = glfwCreateWindow(800, 600, "Vulkan window", nullptr, nullptr);

    uint32_t extensionCount = 0;
    vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

    WindowResizeEvent event(1920, 1080);
    CAPYBARA_CLIENT_TRACE("{}", event);

    glm::mat4 matrix;
    glm::vec4 vec;
    auto test = matrix * vec;

    while(!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);

    glfwTerminate();

}

}

