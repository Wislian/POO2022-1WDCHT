cmake_minimum_required(VERSION 3.21)
project(EJERCICIO_LAURA)

set(CMAKE_CXX_STANDARD 14)

add_executable(EJERCICIO_LAURA FiguraGeometrica.h FiguraGeometrica.cpp Rectangulo.h Rectangulo.cpp Circulo.h Circulo.cpp Cuadrado.h Cuadrado.cpp TrianguloRectangulo.cpp TrianguloRectangulo.h View.h View.cpp main.cpp)
