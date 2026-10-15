#include "procesadores.h"
using namespace std;

// Definición de las clases concretas que implementan la interfaz procesadorLectura para diferentes tipos de lecturas
Resultado procesadorTemp::procesar(double lectura) {
    return Resultado(lectura, "", "");
}

Resultado procesadorGas::procesar(double lectura) {
    return Resultado(lectura, "", "");
}

Resultado procesadorPresencia::procesar(double lectura) {
    return Resultado(lectura, "", "");
}

Resultado procesadorRuido::procesar(double lectura) {
    return Resultado(lectura, "", "");
}
