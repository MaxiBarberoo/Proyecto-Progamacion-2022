//
// Created by mbarb on 30/5/2022.
//

#ifndef PROYECTO_PROGRAMACION_II_EMPLEADO_H
#define PROYECTO_PROGRAMACION_II_EMPLEADO_H

#include <string>
#include "Cuenta.h"

class Empleado {
public:
    Empleado(int t_dni, float t_sueldo, std::string t_nombre, std::string t_mail);

    void set_cuenta(int numCuenta);

    int get_num_cuenta();
    void set_estado_cuenta(std::string estado);

    int get_dni();
    float get_sueldo();
    std::string get_nombre();
    std::string get_mail();
    std::string get_estado_cuenta();

private:
    Cuenta m_cuenta;
    int m_dni;
    float m_sueldo;
    std::string m_nombre, m_mail;
    std::string estado_cuenta = "ALTA";
};


#endif //PROYECTO_PROGRAMACION_II_EMPLEADO_H
