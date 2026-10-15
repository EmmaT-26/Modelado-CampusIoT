#pragma once
#include <string>
using namespace std;

// Clase Resultado que representa el resultado de una lectura procesada
class Resultado {
    private:
        // Atributos de la clase
        double valor;
        string unidad;
        string estado;

    public:
        // Constructor por defecto y constructor parametrizado
        Resultado();
        Resultado(double valor, string unidad, string estado);

};
