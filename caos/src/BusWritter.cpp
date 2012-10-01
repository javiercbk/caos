#include <BusWritter.h>

namespace pc{
BusWritter::BusWritter(BUS* bus){
  this->bus = bus;
}

void BusWritter::sendSignal(unsigned int signal){
  bus->transportSignal(signal);
}

}
