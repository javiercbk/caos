#pragma once

#include <BusListener.h>
#include <vector>

namespace pc{

/**
* @brief Bus del sistema
*
* Modela el translado de informacion por el bus.
* Cada @see [pc::BusWritter] tiene la capacidad de escribir algo en
* el bus del sistema. Dicha interrupcion es captada por todos los
* @see [os::BusListener].
*/
class BUS
{
  public:
    BUS();
    virtual ~BUS();
    /**
    * @brief envia a todos los listeners una interrupcion
    * @param signal Interrupcion a enviar por el bus.
    */
    void transportSignal(unsigned int signal);
    /**
    * @brief Agrega un @see [os::BusListener] al vector de listeners
    */
    void appendListener(os::BusListener* listener);
  private:
    std::vector<os::BusListener*>* listeners;
};

}
