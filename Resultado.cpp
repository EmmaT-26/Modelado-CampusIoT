#include "Resultado.h"

// Definición de la clase Resultado que representa el resultado de una lectura procesada
Resultado::Resultado() {
    valor = 0.0;
    unidad = "";
    estado = "";
}

Resultado::Resultado(double valor, string unidad, string estado) {
    this -> valor = valor;
    this -> unidad = unidad;
    this -> estado = estado;
}
