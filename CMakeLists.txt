cmake_minimum_required(VERSION 3.10)
# set the project name
project(dsa_ecdsa_signature_demo)

add_subdirectory(lib)

# add the executable
add_executable(${PROJECT_NAME} 
    dsa_test.c
    ecdsa_test.c
    main.c
    debug.c 
    prng_simulator.c
)

target_link_libraries(${PROJECT_NAME}  PUBLIC cyclone_crypto)
if(CMAKE_SYSTEM_NAME STREQUAL Linux)
    target_link_libraries(${PROJECT_NAME}  PUBLIC pthread) # Needed on Linux to compile crypto
endif()