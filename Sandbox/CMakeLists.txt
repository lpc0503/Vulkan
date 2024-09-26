cmake_minimum_required(VERSION 3.23)
project(Sandbox)

find_package(Vulkan REQUIRED)
find_package(glfw3 3.3 REQUIRED)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME}
        Sandbox.cpp

        )

target_link_libraries(${PROJECT_NAME} PRIVATE
        Capybara
#        Rish::Engine project_options project_warnings
        )