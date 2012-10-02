#pragma once

#include <memory/TranslationStrategy.hpp>
#include <memory/SegmentationFaultException.hpp>
#include <Process.hpp>
#include <BusWritter.hpp>
#include <memory/TLB.hpp>
#include <BUS.hpp>

namespace pc{

template<class T, class M>
class MMU : public BusWritter
{
  public:
	MMU(long manageSize, TranslationStrategy<T, M>* strategy, BUS* bus) : BusWritter(bus){
	  memSize = manageSize;
	  transStrategy = strategy;
	  this->bus = bus;
	}
    ~MMU(){
    	delete transStrategy;
    }
    T getAddress(long virtualAddress){
	  T physicalAddress = NULL;
	  try{
		physicalAddress = transStrategy->translateDirection(NULL, virtualAddress);
		if(physicalAddress->getDecimalDir(transStrategy->getDescriptor()) > memSize){
			throw new InvalidAddressException(virtualAddress);
		}
	  }catch(InvalidAddressException& e){
		bus->transportSignal(SEGMENTATION_FAULT);
	  }
	  return physicalAddress;
    }
  private:
    unsigned long long memSize;
    TLB<T>* tlb;
    TranslationStrategy<T, M>* transStrategy;
    BUS* bus;
};

}
