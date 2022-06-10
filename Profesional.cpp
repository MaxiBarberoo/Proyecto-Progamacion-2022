//
// Created by mbarb on 30/5/2022.
//

#include "Profesional.h"
#include <stdexcept>

Profesional::Profesional(int t_dni, float t_sueldo, std::string t_nombre, std::string t_mail, Cuenta t_cuenta, std::string t_titulo,
                         std::string t_actividad, int t_anios_servicio) : Empleado(t_dni, t_sueldo, t_nombre, t_mail),
                         m_titulo{t_titulo}, m_activiad{t_actividad}, m_anios_servicio{t_anios_servicio} {

        if(t_titulo.length() < 0){
            throw std::invalid_argument("titulo invalido.");
        }

        if(t_titulo.length() < 0){
            throw std::invalid_argument("titulo invalido.");
        }
}
