//
// Created by ICEJJ on 2024/9/26.
//
#include <iostream>
#include "Capybara.h"
#include "EntryPoint.h"

class Sandbox : public CAPYBARA::Application {

public:

    Sandbox() {

        std::cout << "Sandbox constructor" << std::endl;
    }

    ~Sandbox() {

        std::cout << "Sandbox destructor" << std::endl;
    }

};


CAPYBARA::Application* CAPYBARA::createApplication() {

    return new Sandbox();
}

