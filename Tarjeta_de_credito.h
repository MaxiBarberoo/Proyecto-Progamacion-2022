//
// Created by mbarb on 30/5/2022.
//

#ifndef PROYECTO_PROGRAMACION_II_TARJETA_DE_CREDITO_H
#define PROYECTO_PROGRAMACION_II_TARJETA_DE_CREDITO_H

#include <string>

class Tarjeta_de_credito {
public:
    Tarjeta_de_credito(int t_num_tarjeta, int t_limite_compra, std::string t_tipo_tarjeta);
private:
    int m_num_tarjeta;
    int m_limite_compra;
    std::string m_tipo_tarjeta;
};


#endif //PROYECTO_PROGRAMACION_II_TARJETA_DE_CREDITO_H
