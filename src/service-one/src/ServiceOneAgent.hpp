#pragma once

// service
#include "ServiceOneImpl.hpp"

// deps
#include <crow.h>


class ServiceOneAgent {
public:
    ServiceOneAgent(crow::SimpleApp& app) : _app{app} {

        CROW_ROUTE(app, "/health")([this](){
            return _impl.health();
        });

        CROW_ROUTE(app, "/version")([this](){
            return _impl.version();
        });

        CROW_ROUTE(app, "/status")([this](){
            return _impl.status();
        });
    }
private:
    crow::SimpleApp& _app;
    ServiceOneImpl _impl;
};