// service
#include "ServiceOneAgent.hpp"

// deps
#include <crow.h>
#include <fmt/core.h>

int main() {
    crow::SimpleApp app;

    ServiceOneAgent serviceOneAgent{app};

    app.port(std::stoi(getenv("ServiceOne.port"))).multithreaded().run();
}