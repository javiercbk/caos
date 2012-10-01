#pragma once

#include <Process.hpp>

namespace os{

class SegmentationFaultException
{
  public:
    SegmentationFaultException(Process* causeBy, long address);
    ~SegmentationFaultException();
    Process* getCausedBy();
    long getAddressAttempted();
  protected:
  private:
    Process* causedBy;
    long addressAttempted;
};

}
