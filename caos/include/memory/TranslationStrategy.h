#pragma once

#include <memory/InvalidAddressException.h>
#include <PCB.h>

namespace pc{

/**
  @brief Estrategia de traduccion de direccion logica a fisica

  Esta clase define la interfaz para la traduccion de una direccion de memoria
  logica a fisica.
*/
template<class T, class M>
class TranslationStrategy
{
  public:
	virtual ~TranslationStrategy(){}
    virtual T translateDirection(unsigned long long base, unsigned long long logicalDirection) throw(InvalidAddressException) = 0;
    virtual M getDescriptor() = 0;
  protected:
    unsigned long long extractDecimalFromBits(unsigned long long number, int bitsToClear, int backbits);
};

}
