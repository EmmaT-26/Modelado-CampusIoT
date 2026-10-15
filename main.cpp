
#include <iostream>
#include "Resultado.h"
#include "procesadores.h"
#include "protocolos.h"
#include "nodoIoT.h"

using namespace std;

int main() {

    // Crear los procesadores
    procesadorTemp procesarTemp;
    procesadorGas procesarGas;
    procesadorPresencia procesarPresencia;
    procesadorRuido procesarRuido;

    // Crear los protocolos de envio
    protocoloMQTT protoMQTT;
    protocoloHTTP protoHTTP;
    protocoloBluetooth protoBluetooth;
    protocoloLoRa protoLoRa;

    // Crear el nodo
    nodoIoT nodo(&procesarTemp, &protoMQTT);

    cout << "Monitoreo IoT" << endl;
    cout << "------------------------" << endl;

    // Lectura de temperatura
    cout << "\nLectura de temperatura:" << endl;

    if (nodo.realizarLectura(25.5)) {
        cout << "Envio exitoso" << endl;
    } else {
        cout << "Error al enviar la lectura" << endl;
    }

    // Cambiar a gas y HTTP
    nodo.setProcesador(&procesarGas);
    nodo.setProtocolo(&protoHTTP);

    cout << "\nLectura de gas:" << endl;

    if (nodo.realizarLectura(40.0)) {
        cout << "Envio exitoso" << endl;
    } else {
        cout << "Error al enviar la lectura" << endl;
    }

    // Cambiar a presencia y Bluetooth
    nodo.setProcesador(&procesarPresencia);
    nodo.setProtocolo(&protoBluetooth);

    cout << "\nLectura de presencia:" << endl;

    if (nodo.realizarLectura(1.0)) {
        cout << "Envio exitoso" << endl;
    } else {
        cout << "Error al enviar la lectura" << endl;
    }

    // Cambiar a ruido y LoRa
    nodo.setProcesador(&procesarRuido);
    nodo.setProtocolo(&protoLoRa);

    cout << "\nLectura de ruido:" << endl;

    if (nodo.realizarLectura(65.0)) {
        cout << "Envio exitoso" << endl;
    } else {
        cout << "Error al enviar la lectura" << endl;
    }

    return 0;
}
