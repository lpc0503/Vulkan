cmake_minimum_required(VERSION 3.23)
project(Capybara)

find_package(Vulkan REQUIRED)
find_package(glfw3 3.3 REQUIRED)

set(CMAKE_CXX_STANDARD 20)

add_library(${PROJECT_NAME} STATIC
    src/Application.cpp
    src/Log.cpp
    EntryPoint.h
)

target_include_directories(${PROJECT_NAME} 
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/include

    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${Vulkan_INCLUDE_DIRS}
        ${GLFW_INCLUDE_DIRS}
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        spdlog::spdlog
        glfw
        ${Vulkan_LIBRARIES}
)