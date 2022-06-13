//
// Created by mbarb on 30/5/2022.
//
/*
Consignas:
• Un banco presta el servicio de pago de haberes a los empleados de distintas empresas. Cada
persona se identifica por el tipo actividad que realiza, con el objetivo de poder ofrecer
diferentes tipos de servicios. En principio se clasifican en dos grandes grupos bien definidos:
Profesionales y Administrativos.
• Los datos necesarios para registrar a cada persona son DNI, Nombres, mail.
• Para el caso de Administrativos, se debe registrar el puesto en el que se desempeña.
• Profesionales, deben registrar su título y actividad que desarrollan y tiempo de servicio.
• A cada persona que ingresa al sistema, se le abre una cuenta sueldo. Los datos son Numero
de Cuenta, Saldo.
• Los profesionales tienen, además de la cuenta sueldo, un paquete de tarjetas de crédito con
los siguientes datos: Número de Tarjeta, Límite de Compra.
El programa debe permitir:
• Mantener la lista de Clientes. Alta y Baja (En este caso considerar cambiar el estado de
ALTA a BAJA)
• Crear cuenta sueldo para cada cliente ingresado. Cada cuenta mantiene el saldo en función
de los movimientos que se produzcan en la cuenta (Ingresos - Egresos)
• Otorgar Tarjeta de Crédito para cada profesional ingresado al sistema. Se pueden otorgar 3
tipos de tarjetas: Bronce, Plata, Oro. El tipo de tarjeta se otorga en función de los ingresos
declarados (Sueldo)
*/

#include <iostream>
#include "Sistema_de_gestion.h"


using namespace std;

int main() {
    int opcion = 0;
    int numCuenta = 1;
    Sistema_de_gestion S1;

    do {
        cout << "1. Crear Sistema de gestion" << endl;
        cout << "2. Salir" << endl;
        cout << "ingresar opcion: ";
        cin >> opcion;
        cout << "\n\n";
    } while (opcion != 1 && opcion != 2);

    switch (opcion) {
        case 1: {
            break;
        }
        case 2: {
            exit(0);
        }
    }

    opcion = 0;

    do {
        cout << "1. Agregar Empeleado" << endl;
        cout << "2. Cambiar Estado de un empleado" << endl;
        cout << "3. Visualizar Empleado" << endl;
        cout << "4. Salir" << endl;
        cout << "ingresar opcion: ";
        cin >> opcion;
        cout << "\n\n";

        switch (opcion) {
            case 1: {
                int tipo_empleado = 0;
                do {
                    cout << "Que tipo de empleado se desea agregar? \n";
                    cout << "1. Profesional \n";
                    cout << "2. Administrativo \n";
                    cin >> tipo_empleado;
                } while (tipo_empleado != 1 && tipo_empleado != 2);

                cout << "\n\n";

                switch (tipo_empleado) {
                    case 1: {
                        S1.guardar_empleado_profesional(numCuenta);
                        opcion = 0;
                        numCuenta += 1;
                        cout << "Empleado agregado correctamente. \n\n";
                        break;
                    }
                    case 2: {
                        S1.guardar_empleado_administrativo(numCuenta);
                        opcion = 0;
                        numCuenta += 1;
                        cout << "Empleado agregado correctamente. \n\n";
                        break;
                    }
                }
                break;
            }

            case 2: {
                S1.cambiar_estado_empleado();
                cout << "\n\n";
                opcion = 0;
                break;
            }

            case 3: {
                do {
                    cout << "1.Visualizar todos los empleados" << endl;
                    cout << "2.Visualizar Empelado por numero de cuenta" << endl;
                    cin >> opcion;
                } while (opcion != 1 && opcion != 2);

                switch (opcion) {
                    case 1: {
                        S1.Mostrar_todos_empleados();
                        cout << "\n\n";
                        opcion = 0;
                        break;
                    }

                    case 2: {
                        S1.Mostrar_empleado();
                        cout << "\n\n";
                        opcion = 0;
                        break;
                    }
                }
                break;
            }

            case 4: {
                exit(0);
            }
        }

    } while (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4);


}