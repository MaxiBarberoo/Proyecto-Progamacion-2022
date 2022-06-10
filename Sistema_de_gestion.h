//
// Created by mbarb on 30/5/2022.
//

#ifndef PROYECTO_PROGRAMACION_II_SISTEMA_DE_GESTION_H
#define PROYECTO_PROGRAMACION_II_SISTEMA_DE_GESTION_H

#include <vector>
#include "Profesional.h"
#include "Administrativo.h"

class Sistema_de_gestion {
public:
    Sistema_de_gestion();

    void guardar_empleado_administrativo(Administrativo);
    void guardar_empleado_profesional(Profesional);

    void Mostrar_empleado(int);
private:
    std::vector<Profesional> m_empleados_profesionales;
    std::vector<Administrativo> m_empleados_administrativos;
};


#endif //PROYECTO_PROGRAMACION_II_SISTEMA_DE_GESTION_H
