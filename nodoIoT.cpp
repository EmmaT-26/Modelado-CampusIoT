#include "nodoIoT.h"
using namespace std;

// Definición de la clase nodoIoT que representa un nodo de IoT que puede procesar lecturas y enviarlas mediante un protocolo

nodoIoT::nodoIoT(procesadorLectura* procesador, protocoloEnvio* protocolo) {
    this -> procesador = procesador;
    this -> protocolo = protocolo;
}

void nodoIoT::setProcesador(procesadorLectura* procesador) {
    this -> procesador = procesador;
}

void nodoIoT::setProtocolo(protocoloEnvio* protocolo) {
    this -> protocolo = protocolo;
}

bool nodoIoT::realizarLectura(double valor) {
    Resultado resultado = procesador -> procesar(valor);
    return protocolo -> enviar(resultado);
}
