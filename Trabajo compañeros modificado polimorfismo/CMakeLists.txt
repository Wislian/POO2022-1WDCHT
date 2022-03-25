cmake_minimum_required(VERSION 3.21)
project(Ejercicio_Polimorfismo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ejercicio_Polimorfismo FiguraGeometrica.h FiguraGeometrica.cpp Rectangulo.h Rectangulo.cpp Circulo.h Circulo.cpp Cuadrado.h Cuadrado.cpp View.h View.cpp main.cpp)
