//
// Created by mbarb on 30/5/2022.
//

#include "Empleado.h"
#include <stdexcept>

Empleado::Empleado(int t_dni, float t_sueldo, std::string t_nombre, std::string t_mail) : m_dni{t_dni}, m_sueldo{t_sueldo}, m_nombre{t_nombre}, m_mail{t_mail}{
        if(t_dni <= 0){
            throw std::invalid_argument("Valor de DNI invalido.");
        }

        if(t_sueldo <= 0){
            throw std::invalid_argument("Valor de Sueldo invalido.");
        }

        if(t_nombre.length() <= 0){
            throw std::invalid_argument("Nombre invalido.");
        }

        if(t_mail.length() < 0){
            throw std::invalid_argument("Mail invalido.");
        }
}
