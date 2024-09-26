cmake_minimum_required(VERSION 3.23)
project(main)

find_package(Vulkan REQUIRED)
find_package(glfw3 3.3 REQUIRED)

set(CMAKE_CXX_STANDARD 20)

add_executable(main main.cpp)

target_include_directories(main PRIVATE 
    ${Vulkan_INCLUDE_DIRS}
    ${GLFW_INCLUDE_DIRS}
)
target_link_libraries(main PRIVATE 
    ${Vulkan_LIBRARIES} 
    glfw
)