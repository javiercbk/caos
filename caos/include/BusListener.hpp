#pragma once

namespace os{

/**
* @brief Escucha el Bus
*
* Modela un recurso del sistema operativo que tiene la capacidad de
* recibir interrupciones del bus.
*/
class BusListener
{
  public:
    /**
    * Recibe una interrupcion del bus.
    * @param signal Interrupcion recibida.
    */
    virtual void receiveSignal(unsigned int signal) = 0;
};

}
