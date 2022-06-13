//
// Created by mbarb on 30/5/2022.
//

#include "Cuenta.h"
#include <stdexcept>

Cuenta::Cuenta(){
}

void Cuenta::set_numCuenta(int numCuenta) {
    m_num_cuenta = numCuenta;
}

int Cuenta::get_num_cuenta() {
    return m_num_cuenta;
}
