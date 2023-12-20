#pragma once
#include <crow.h>

class ServiceOneImpl {
public:
    crow::response status() {
        return crow::response(crow::status::OK);
    }

    crow::response health() {
        return crow::response(crow::status::OK);
    }

    crow::response version() {
        return crow::response(crow::status::OK);
    }
};