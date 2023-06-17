#include <iostream>
#include "Lagrange.hpp"

#include "rang.hpp"
#include <string>

using namespace rang;

using namespace std;
    class MenuInterpolacion {
private:
    int salir;
public:
    MenuInterpolacion() {
        salir = 0;
    }

    ~MenuInterpolacion() {
    }

    void ejecutar() {
        int n, ciclo;
        char opc;
        float valor;
        LagrangeInterpolator* obj1;
        do {
            cout << endl;
            cout << fg::magenta << style::bold << " \t\tMENU\t\t " << style::reset << endl;
            cout << fgB::cyan << style::italic << "1. Hacer una interpolacion" << endl;
            cout << fgB::cyan << style::italic << "2. Salir del programa" << endl;
            cout << fgB::blue << style::italic << "Ingrese el numero de la opcion deseada: ";
            cin >> opc;

            switch (opc) {
                case '1':
                   cout << fgB::green << style::italic << "Ingrese el numero de datos que tendra la subtabla de datos: ";
                cin >> n;

                obj1 = new LagrangeInterpolator(n);
                obj1->IngresarDatos();

                do {
                    float z;

                    cout << endl << fgB::yellow << style::italic << "Ingrese el valor de X: ";
                    cin >> z;

                    float* valoresX = obj1->obtenerX();  // Obtener el puntero a x
                    float maximoX = valoresX[n - 1];  // Obtener el valor máximo de x
                    float minimoX = valoresX[n - n];
                   
                    if (z > maximoX) { //si el profe dice que quiere que no tiene que ser con el numero tope ponle un = despues del > 
                        cout << "No se puede poner un valor mayor al maximo valor de X (" << maximoX << ")" << endl;
                    }if(z < minimoX){   
                        cout << "No se puede poner un valor minimo al minimo valor de X (" << minimoX << ")" << endl;
                    }if(z <= maximoX && z >= minimoX) {
                        valor = obj1->HacerIteracion(z);
                        cout << endl << endl << fgB::red << style::underline << "El valor de Y cuando X es igual a " << z << style::reset << fg::reset
                            << fgB::gray << style::bold << " es: " << valor << style::reset << fg::reset << endl << endl;
                    }

                    cout << fgB::cyan <<"Deseas ingresar otro valor de X?" << endl;
                    cout << fgB::green << "1.- si\n2.- no" << endl;
                    cin >> ciclo;

                    } while (ciclo != 2);
                    


                    break;
                case '2':
                    cout << fgB::red << style::bold << "Saliendo del programa..." << style::reset << fg::reset << endl;
                    salir = 1;
                    break;
                default:
                    cout << fgB::green << style::italic << "Opcion invalida. Por favor, ingrese una opcion valida." << style::reset << fg::reset << endl;
                    break;
            }
        } while (salir != 1);
    }
};

