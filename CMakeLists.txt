cmake_minimum_required(VERSION 3.20.0)
project(TARG VERSION 0.1.0)

# Compilation flags
add_compile_options(-Wall -pedantic-errors)

include_directories(lecture10/include)
# Add executable

#add_executable(TARG lecture8/src/main.cpp lecture8/src/date.cpp lecture8/src/engine.cpp lecture8/src/driver.cpp lecture8/src/vehicle.cpp)
add_executable(TARG lecture10/src/main.cpp)

add_custom_command(TARGET TARG POST_BUILD
    COMMAND ./TARG | c++filt -t
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Resolve name mangling"
    VERBATIM
)

# add_custom_target(demangle ALL
#     COMMAND ./lecture3 | c++filt -t
#     DEPENDS lecture3
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# )

# add_custom_command(TARGET lecture3 POST_BUILD
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture3
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#     COMMENT "Running Valgrind after building lecture3"
#     VERBATIM
# )
# add_custom_command(TARGET lecture3 POST_BUILD
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture3
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#     COMMENT "Running Valgrind after building lecture3"
#     VERBATIM
# )


# add_custom_target(run_valgrind ALL
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture8
#     DEPENDS lecture8
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# )
# add_custom_target(run_valgrind ALL
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture3
#     DEPENDS lecture3
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# )


# Set C++ standard to C++17
set_property(TARGET TARG PROPERTY CXX_STANDARD 17)

