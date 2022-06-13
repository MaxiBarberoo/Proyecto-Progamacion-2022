//
// Created by mbarb on 30/5/2022.
//

#include "Sistema_de_gestion.h"
#include "Cuenta.h"
#include <iostream>
using namespace std;

Sistema_de_gestion::Sistema_de_gestion() {}

void Sistema_de_gestion::guardar_empleado_administrativo(int numCuenta){
    string nombre, mail, puesto;
    int dni;
    float sueldo;

    cout << "Ingrese el nombre completo del empleado:\n";
    cin >> nombre;
    cout << "Ingrese el mail del empleado:\n";
    cin >> mail;
    cout << "Ingrese el dni del empleado:\n";
    cin >> dni;
    cout << "Ingrese el puesto del empleado:\n";
    cin >> puesto;
    cout << "Ingrese el sueldo del empelado:\n";
    cin >> sueldo;

    Administrativo A(dni, sueldo, nombre, mail, puesto);
    A.set_cuenta(numCuenta);
    m_empleados_administrativos.push_back(A);
}

void Sistema_de_gestion::guardar_empleado_profesional(int numCuenta){
    int dni, anios_servicio;
    float sueldo ;
    std::string nombre, mail, titulo, actividad;

    cout << "Ingrese el nombre completo del empleado:\n" ;
    cin >> nombre;
    cout << "Ingrese el mail del empleado:\n";
    cin >> mail;
    cout << "Ingrese el dni del empleado:\n";
    cin >> dni;
    cout << "Ingrese la actividad del empleado:\n";
    cin >> actividad;
    cout << "Ingrese el sueldo del empelado:\n";
    cin >> sueldo;
    cout << "Ingrese el titulo del empleado:\n";
    cin >> titulo;
    cout << "Ingrese los anios de servicio del empleado:\n";
    cin >> anios_servicio;

    Profesional P(dni, sueldo, nombre, mail, titulo, actividad, anios_servicio);
    P.set_cuenta(numCuenta);
    m_empleados_profesionales.push_back(P);
    
}

void Sistema_de_gestion::Mostrar_empleado() {
    int numCuenta;

    cout << "Ingrese el numero de cuenta del empelado:\n";
    cin >> numCuenta;

    for (int i = 0; i < m_empleados_profesionales.max_size(); ++i) {
        if(m_empleados_profesionales[i].get_num_cuenta() == numCuenta){
            cout << "Nombre: " << m_empleados_profesionales[i].get_nombre() << endl;
            cout << "DNI: " << m_empleados_profesionales[i].get_dni() << endl;
            cout << "Mail: " << m_empleados_profesionales[i].get_mail() << endl;
            cout << "Actividad: " << m_empleados_profesionales[i].get_actividad() << endl;
            cout << "Sueldo: " << m_empleados_profesionales[i].get_sueldo() << endl;
            cout << "Titulo: " << m_empleados_profesionales[i].get_titulo() << endl;
            cout << "Anios de servicio: " << m_empleados_profesionales[i].get_anios_de_servicio() << endl;
        }
    }

    for (int i = 0; i < m_empleados_administrativos.max_size(); ++i) {
        if(m_empleados_administrativos[i].get_num_cuenta() == numCuenta){
            cout << "Nombre: " << m_empleados_administrativos[i].get_nombre() << endl;
            cout << "DNI: " << m_empleados_administrativos[i].get_dni() << endl;
            cout << "Mail: " << m_empleados_administrativos[i].get_mail() << endl;
            cout << "Sueldo: " << m_empleados_administrativos[i].get_sueldo() << endl;
            cout << "Puesto: " << m_empleados_administrativos[i].get_puesto() << endl;
        }
    }

}

void Sistema_de_gestion::cambiar_estado_empleado() {
    int numCuenta;
    
    cout << "Ingrese el numero de cuenta del empleado que desea cambiar de estado:\n";
    cin >> numCuenta;

    for (int i = 0; i < m_empleados_profesionales.max_size(); ++i){
        if(m_empleados_profesionales[i].get_num_cuenta() == numCuenta){
            m_empleados_profesionales[i].cambiar_estado_cuenta();
        }
    }
    for (int i = 0; i < m_empleados_administrativos.max_size(); ++i) {
        if(m_empleados_administrativos[i].get_num_cuenta() == numCuenta){
            m_empleados_administrativos[i].cambiar_estado_cuenta();
        }else{
            cout << "No existe esa cuenta.";
        }
    }

}
