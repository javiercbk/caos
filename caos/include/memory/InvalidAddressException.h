#pragma once

#include <exception>
#include <Process.h>

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
