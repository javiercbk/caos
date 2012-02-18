#ifndef INVALIDADRESSEXCEPTION_H
#define INVALIDADRESSEXCEPTION_H

#include <exception>
#include "../../include/Process.h"

namespace pc{

class InvalidAddressException : public std::exception
{
  public:
    InvalidAddressException(os::Process* causedBy, long address);
    os::Process* getCausedBy();
    long getAddressAtempted();
  private:
    os::Process* causedBy;
    long addressAtempted;
};

}

#endif // INVALIDADRESSEXCEPTION_H
