#pragma once
#include "Resultado.h"
using namespace std;

// Clase abstracta protocoloEnvio que define la interfaz para enviar resultados
class protocoloEnvio {
    public:
        virtual bool enviar(Resultado resultado) = 0;
        virtual ~protocoloEnvio() = default;
};

// Clases concretas que implementan la interfaz protocoloEnvio para diferentes protocolos de envio
// Clase protocoloMQTT que implementa el envio de resultados mediante el protocolo MQTT
class protocoloMQTT : public protocoloEnvio {
    public:
        bool enviar(Resultado resultado) override;
};

// Clase protocoloHTTP que implementa el envio de resultados mediante el protocolo HTTP
class protocoloHTTP : public protocoloEnvio {
    public:
        bool enviar(Resultado resultado) override;
};

// Clase protocoloBluetooth que implementa el envio de resultados mediante el protocolo Bluetooth
class protocoloBluetooth : public protocoloEnvio {
    public:
        bool enviar(Resultado resultado) override;
};

// Clase protocoloLoRa que implementa el envio de resultados mediante el protocolo LoRa
class protocoloLoRa : public protocoloEnvio {
    public:
        bool enviar(Resultado resultado) override;
};