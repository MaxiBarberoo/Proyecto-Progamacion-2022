cmake_minimum_required(VERSION 3.21)
project(Proyecto_Programacion_II)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proyecto_Programacion_II
        main.cpp
        Empleado.h Empleado.cpp
        Profesional.h Profesional.cpp
        Administrativo.h Administrativo.cpp
        Cuenta.h Cuenta.cpp
        Tarjeta_de_credito.h Tarjeta_de_credito.cpp
        Sistema_de_gestion.h Sistema_de_gestion.cpp)
