#include <crow.h>
#include <fmt/core.h>

int main() {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        return "Hello from service-one\n";
    });

    fmt::print("service-one listening on port: {}", getenv("service.one.port"));

    app.port(8001).multithreaded().run();
}