#include <iostream>

using namespace std;
class LagrangeInterpolator {
private:
    float* x;
    float* y;
    int tam;

public:
    LagrangeInterpolator(int n) {
        tam = n;
        x = new float[n];
        y = new float[n];
        
    }
    

    ~LagrangeInterpolator() {
        delete[] x;
        delete[] y;
    }

    void IngresarDatos() {
        for (int i = 0; i < tam; i++) {
            cout << "Ingrese el dato numero " << i << " de la subtabla de X: ";
            cin >> x[i];
        }

        cout<<endl;

        for (int i = 0; i < tam; i++) {
            cout << "Ingrese el dato numero " << i << " de la subtabla de Y: ";
            cin >> y[i];
        }

        cout<<endl;
    }

    float HacerIteracion(float z) {
        float valor = 0.0;

        for (int i = 0; i < tam; i++) {
            float l = y[i];
            for (int j = 0; j < tam; j++) {
                if (i != j) {
                    l = (l * (z - x[j])) / (x[i] - x[j]);
                }
            }
            valor += l;
        }
        return valor;
    }
    float* obtenerX(){
        return x;
    }
};