#pragma once
#include "Resultado.h"

using namespace std;

// Clase abstracta procesadorLectura que define la interfaz para procesar lecturas
class procesadorLectura {
    public:
        virtual Resultado procesar(double valor) = 0;
        virtual ~procesadorLectura() = default;
};

// Clases concretas que implementan la interfaz procesadorLectura para diferentes tipos de lecturas
// Clase procesadorTemp que procesa lecturas de temperatura
class procesadorTemp : public procesadorLectura {
    public:
        Resultado procesar(double lectura) override;
};

// Clase procesadorGas que procesa lecturas de gas
class procesadorGas : public procesadorLectura {
    public:
        Resultado procesar(double lectura) override;
};

// Clase procesadorPresencia que procesa lecturas de presencia
class procesadorPresencia : public procesadorLectura {
    public:
        Resultado procesar(double lectura) override;
};

// Clase procesadorRuido que procesa lecturas de ruido
class procesadorRuido : public procesadorLectura {
    public:
        Resultado procesar(double lectura) override;
};