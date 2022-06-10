//
// Created by mbarb on 30/5/2022.
//

#include "Tarjeta_de_credito.h"
#include <stdexcept>
Tarjeta_de_credito::Tarjeta_de_credito(int t_num_tarjeta, int t_limite_compra, std::string t_tipo_tarjeta) : m_num_tarjeta{t_num_tarjeta}, m_limite_compra{t_limite_compra}, m_tipo_tarjeta{t_tipo_tarjeta}{
    if(t_num_tarjeta <= 0){
        throw std::invalid_argument("Numero de tarjeta invalido.");
    }

    if(t_limite_compra <= 0){
        throw std::invalid_argument("Limite de compra invalido.");
    }

    if(t_tipo_tarjeta.length() <= 0){
        throw std::invalid_argument("Tipo de tarjeta invalido.");
    }
}
