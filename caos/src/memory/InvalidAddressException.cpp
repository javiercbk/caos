#include "../../include/memory/InvalidAddressException.h"

namespace pc{

InvalidAddressException::InvalidAddressException(os::Process* causedBy, long address)
{
  this->causedBy = causedBy;
  this->addressAtempted = address;
}


/** Proceso que pidio una direccion de memoria invalida
 * @return puntero al proceso que causo la excepcion
 */
os::Process* InvalidAddressException::getCausedBy() {
  return causedBy;
}

/** Direccion invalida pedida por el proceso
 * @param direccion virtual pedida.
 */
long InvalidAddressException::getAddressAtempted() {
  return addressAtempted;
}

}
