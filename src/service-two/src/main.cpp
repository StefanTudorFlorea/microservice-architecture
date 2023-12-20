#include <crow.h>

int main() {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        return "Hello from service-two\n";
    });

    app.port(8002).multithreaded().run();
}