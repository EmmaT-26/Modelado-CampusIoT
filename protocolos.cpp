#include "protocolos.h"
using namespace std;

// Clases concretas que implementan la interfaz protocoloEnvio para diferentes protocolos de envio
bool protocoloMQTT::enviar(Resultado resultado) { return true; }

bool protocoloHTTP::enviar(Resultado resultado) { return true; }

bool protocoloBluetooth::enviar(Resultado resultado) { return true; }

bool protocoloLoRa::enviar(Resultado resultado) { return true; }