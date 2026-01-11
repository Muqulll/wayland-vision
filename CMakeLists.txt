cmake_minimum_required(VERSION 3.10)
project(WaylandVision)

find_package(PkgConfig REQUIRED)
pkg_check_modules(WAYLAND_CLIENT REQUIRED wayland-client)

add_executable(wayland-vision src/main.cpp)

target_link_libraries(wayland-vision ${WAYLAND_CLIENT_LIBRARIES})
target_include_directories(wayland-vision PUBLIC ${WAYLAND_CLIENT_INCLUDE_DIRS})
