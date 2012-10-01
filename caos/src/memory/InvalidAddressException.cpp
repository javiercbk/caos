#include <memory/InvalidAddressException.hpp>

namespace pc{

InvalidAddressException::InvalidAddressException(long address)
{
  this->addressAtempted = address;
}

/** Direccion invalida pedida por el proceso
 * @param direccion virtual pedida.
 */
long InvalidAddressException::getAddressAtempted() {
  return addressAtempted;
}

}
