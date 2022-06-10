//
// Created by mbarb on 30/5/2022.
//

#include "Sistema_de_gestion.h"
#include "Cuenta.h"
#include <iostream>
using namespace std;

Sistema_de_gestion::Sistema_de_gestion() {}

void Sistema_de_gestion::guardar_empleado_administrativo(Administrativo administrativo){
    string nombre, mail, puesto;
    int dni;
    float sueldo;

    cout << "Ingrese el nombre completo del empleado: ";
    cin >> nombre;
    cout << "Ingrese el mail del empleado: ";
    cin >> mail;
    cout << "Ingrese el dni del empleado: ";
    cin >> dni;
    cout << "Ingrese el puesto del empleado: ";
    cin >> puesto;
    cout << "Ingrese el sueldo del empelado: ";
    cin >> sueldo;


    m_empleados_administrativos.push_back(administrativo);
}

void Sistema_de_gestion::guardar_empleado_profesional(Profesional profesional){
    m_empleados_profesionales.push_back(profesional);
}

void Sistema_de_gestion::Mostrar_empleado(int) {

}