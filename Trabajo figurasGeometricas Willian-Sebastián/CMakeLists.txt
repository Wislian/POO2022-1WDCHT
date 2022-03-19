cmake_minimum_required(VERSION 3.21)
project(FIGURAS)

set(CMAKE_CXX_STANDARD 14)

add_executable(FIGURAS FiguraGeometrica.h FiguraGeometrica.cpp Sistema.h Sistema.cpp Cuadrado.h Cuadrado.cpp Rectangulo.h Rectangulo.cpp Circulo.h Circulo.cpp main.cpp)
