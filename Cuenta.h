//
// Created by mbarb on 30/5/2022.
//

#ifndef PROYECTO_PROGRAMACION_II_CUENTA_H
#define PROYECTO_PROGRAMACION_II_CUENTA_H

class Cuenta {
public:
    Cuenta();

    void set_numCuenta(int numCuenta);

    int get_num_cuenta();
private:
    float m_saldo = 0;
    int m_num_cuenta = 0;
};


#endif //PROYECTO_PROGRAMACION_II_CUENTA_H
