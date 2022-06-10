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

    virtual void mostrar_empleado() const = 0;

private:
    Cuenta m_cuenta;
    int m_dni;
    float m_sueldo;
    std::string m_nombre, m_mail;
    std::string estado_cuenta = "ALTA";
};


#endif //PROYECTO_PROGRAMACION_II_EMPLEADO_H
