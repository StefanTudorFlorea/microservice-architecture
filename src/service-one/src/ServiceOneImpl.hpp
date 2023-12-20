#pragma once
#include <crow.h>
#include <yaml-cpp/yaml.h>

class ServiceOneImpl {
public:
    crow::response status() {
        return crow::response(crow::status::OK);
    }

    crow::response health() {
        return crow::response(crow::status::OK);
    }

    crow::json::wvalue version() {
        // load version information
        YAML::Node config = YAML::LoadFile("config.yml");

        return {
            {"version", config["version"]["id"].as<std::string>()}
        };
    }
};