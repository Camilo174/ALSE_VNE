cmake_minimum_required(VERSION 2.8.12)

project(primer_punto)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Core)

add_executable(${PROJECT_NAME} "main.cpp" "Geometrica.h" "Geometrica.cpp"
    "cuadrado.h" "cuadrado.cpp" "triangulo.h" "triangulo.cpp" "circulo.h"
    "circulo.cpp" "pentagono.h" "pentagono.cpp")
target_link_libraries(${PROJECT_NAME} Qt5::Core)
