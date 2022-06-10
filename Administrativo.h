//
// Created by mbarb on 30/5/2022.
//

#ifndef PROYECTO_PROGRAMACION_II_ADMINISTRATIVO_H
#define PROYECTO_PROGRAMACION_II_ADMINISTRATIVO_H

#include "Empleado.h"
#include "Tarjeta_de_credito.h"
#include <string>

class Administrativo : public Empleado {
public:
    Administrativo(int t_dni, float t_sueldo, std::string t_nmobre, std::string t_mail, Cuenta t_cuenta, std::string t_puesto);
private:
    std::string m_puesto;
};


#endif //PROYECTO_PROGRAMACION_II_ADMINISTRATIVO_H
