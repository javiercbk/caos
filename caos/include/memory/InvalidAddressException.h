#ifndef INVALIDADRESSEXCEPTION_H
#define INVALIDADRESSEXCEPTION_H

#include <exception>
#include "../../include/Process.h"

namespace pc{

class InvalidAddressException : public std::exception
{
  public:
    InvalidAddressException(long address);
    long getAddressAtempted();
  private:
    long addressAtempted;
};

}

#endif // INVALIDADRESSEXCEPTION_H
