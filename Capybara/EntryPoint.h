#pragma once

extern Capybara::Application* Capybara::createApplication();

int main() {

    Capybara::Log::init();
    CAPYBARA_CORE_INFO("Log initialized");
    CAPYBARA_CLIENT_INFO("I am {} years old", 26);


    auto app = Capybara::createApplication();
    CAPYBARA_CORE_INFO("Application created");

    app->run();
    CAPYBARA_CORE_INFO("Application finished");

    delete app;

    return 0;
}
