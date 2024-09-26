#pragma once

extern Capybara::Application* Capybara::createApplication();

int main() {

    std::cout << "Entry point" << std::endl;
    auto app = Capybara::createApplication();
    std::cout << "Application created" << std::endl;
    app->run();
    std::cout << "Application running" << std::endl;
    delete app;
    std::cout << "Application deleted" << std::endl;

    return 0;
}
