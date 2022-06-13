//
// Created by mbarb on 30/5/2022.
//

#ifndef PROYECTO_PROGRAMACION_II_PROFESIONAL_H
#define PROYECTO_PROGRAMACION_II_PROFESIONAL_H

#include "Empleado.h"

#include <string>

class Profesional : public Empleado {
public:
    Profesional(int t_dni, float t_sueldo, std::string t_nombre, std::string t_mail, std::string t_titulo, std::string t_actividad, int t_anios_servicio);

    std::string get_titulo();
    std::string get_actividad();

    int get_anios_de_servicio();
private:
    std::string m_titulo, m_activiad;
    int m_anios_servicio;
};


#endif //PROYECTO_PROGRAMACION_II_PROFESIONAL_H
