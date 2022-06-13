//
// Created by mbarb on 30/5/2022.
//

#include "Empleado.h"
#include <stdexcept>
#include <iostream>

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

void Empleado::set_cuenta(int numCuenta) {
    m_cuenta.set_numCuenta(numCuenta);
}

int Empleado::get_num_cuenta() {
    return m_cuenta.get_num_cuenta();
}

int Empleado::get_dni() {
    return m_dni;
}

float Empleado::get_sueldo() {
    return m_sueldo;
}

std::string Empleado::get_nombre() {
    return m_nombre;
}

std::string Empleado::get_mail() {
    return m_mail;
}

std::string Empleado::get_estado_cuenta() {
    return estado_cuenta;
}

void Empleado::set_estado_cuenta(std::string estado) {
    estado_cuenta = estado;
}


