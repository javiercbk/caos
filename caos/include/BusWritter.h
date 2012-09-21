#ifndef BUSWRITTER_H
#define BUSWRITTER_H

#include "BUS.h"

namespace pc{

/**
* @brief Hardware conectado al bus
*
* Modela un componente del Hardware capaz de escribir en el bus.
*/
class BusWritter
{
  public:
    /**
    * Crea un BusWritter
    * @param bus Bus del harware.
    */
    BusWritter(BUS* bus);
  protected:
    BUS* bus;
    /**
    * Envia una interrupcion a traves del bus.
    * @param signal Interrupcion a enviar.
    * @post Cada @see [os::BusListener] recibira esta interrupcion.
    */
    void sendSignal(unsigned int signal);
};

}
#endif // BUSWRITTER_H
