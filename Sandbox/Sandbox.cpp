//
// Created by ICEJJ on 2024/9/26.
//
#include <iostream>
#include "Capybara.h"
#include "EntryPoint.h"

class Sandbox : public Capybara::Application {

public:

    Sandbox() {

        std::cout << "Sandbox constructor" << std::endl;
    }

    ~Sandbox() {

        std::cout << "Sandbox destructor" << std::endl;
    }

};


Capybara::Application* Capybara::createApplication() {

    return new Sandbox();
}

