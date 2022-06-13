//
// Created by mbarb on 30/5/2022.
//

#include "Administrativo.h"
#include <string>
#include <stdexcept>

Administrativo::Administrativo(int t_dni, float t_sueldo, std::string t_nombre, std::string t_mail, std::string t_puesto) : Empleado(t_dni, t_sueldo, t_nombre, t_mail), m_puesto{t_puesto} {
        if(t_puesto.length() < 0){
            throw std::invalid_argument("puesto invalido.");
        }

        if(t_sueldo <= 2000){

        }
}

std::string Administrativo::get_puesto() {
    return m_puesto;
}
