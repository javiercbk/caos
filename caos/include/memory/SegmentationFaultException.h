#ifndef SEGMENTATIONFAULTEXCEPTION_H
#define SEGMENTATIONFAULTEXCEPTION_H

#include "../../include/Process.h"

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

#endif // SEGMENTATIONFAULTEXCEPTION_H
