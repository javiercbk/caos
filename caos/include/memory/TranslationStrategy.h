#ifndef TRANSLATIONSTRATEGY_H
#define TRANSLATIONSTRATEGY_H

#include "../../include/memory/InvalidAddressException.h"
#include "../../include/PCB.h"

namespace pc{

/**
  @brief Estrategia de traduccion de direccion logica a fisica

  Esta clase define la interfaz para la traduccion de una direccion de memoria
  logica a fisica.
*/
template<class T>
class TranslationStrategy
{
  public:
    virtual T translateDecimalDirection(os::PCB* pcb, long logicalDirection) throw(InvalidAddressException) = 0;
};

}
#endif // TRANSLATIONSTRATEGY_H
