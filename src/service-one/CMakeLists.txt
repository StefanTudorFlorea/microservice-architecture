# crud-service
add_executable(service-one 
    src/main.cpp 
    src/ServiceOneAgent.hpp
    src/ServiceOneImpl.hpp
)

# dependencies
target_link_libraries(service-one
    PRIVATE 
        Crow::Crow
        fmt::fmt-header-only 
        yaml-cpp::yaml-cpp
)

# config
# add_custom_command(
#     TARGET crud-service POST_BUILD
#     COMMAND ${CMAKE_COMMAND} -E copy
#             ${CMAKE_SOURCE_DIR}/config/config.yml
#             ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/config.yml)