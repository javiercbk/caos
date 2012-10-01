#include <memory/SegmentationFaultException.hpp>

namespace os{

SegmentationFaultException::SegmentationFaultException(Process* causeBy, long address)
{
  this->causedBy = causedBy;
  this->addressAttempted = address;
}

SegmentationFaultException::~SegmentationFaultException()
{
  //dtor
}


Process* SegmentationFaultException::getCausedBy() {
  return causedBy;
}

long SegmentationFaultException::getAddressAttempted() {
  return addressAttempted;
}

}
