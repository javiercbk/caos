#include <BUS.hpp>

namespace pc{

BUS::BUS()
{
  listeners = new std::vector<os::BusListener*>();
}

BUS::~BUS()
{
  delete listeners;
}

void BUS::transportSignal(unsigned int signal){
  for (std::vector<os::BusListener*>::iterator it = listeners->begin(); it!=listeners->end(); ++it) {
    (*(it))->receiveSignal(signal);
  }
}

void BUS::appendListener(os::BusListener* listener){
  listeners->push_back(listener);
}

}
