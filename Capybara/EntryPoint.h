#pragma once

extern CAPYBARA::Application* CAPYBARA::createApplication();

int main() {

    Capybara::Log::init();
    CAPYBARA_CORE_INFO("Log initialized");

    auto app = CAPYBARA::createApplication();
    CAPYBARA_CORE_INFO("Application created");

    app->run();
    CAPYBARA_CORE_INFO("Application finished");

    delete app;

    return 0;
}
