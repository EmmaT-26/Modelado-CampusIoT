#pragma once
#include "procesadores.h"
#include "protocolos.h"

using namespace std;

// Clase nodoIoT que representa un nodo de IoT que puede procesar lecturas y enviarlas mediante un protocolo
class nodoIoT {
    private:
        // Atributos de la clase
        procesadorLectura* procesador;
        protocoloEnvio* protocolo;
    public:
        // Constructor que recibe un procesador y un protocolo
        nodoIoT(procesadorLectura* procesador, protocoloEnvio* protocolo);
        
        // Métodos para cambiar el procesador y el protocolo
        void setProcesador(procesadorLectura* p);
        void setProtocolo(protocoloEnvio* p);
        
        // Método para realizar una lectura, procesarla y enviarla mediante el protocolo
        bool realizarLectura(double valor);
};

