#include "../../include/memory/MMU.h"
#include "../../include/memory/ProcessPage.h"
#include "../../include/Processor.h"
#include "../../include/memory/PagingTranslator.h"

namespace pc{

    template<class T>
    MMU<T>::MMU(long manageSize, TranslationStrategy<T>* strategy, BUS* bus) : BusWritter(bus){
      memSize = manageSize;
      transStrategy = strategy;
      this->bus = bus;
    }

    template<class T>
    MMU<T>::~MMU(){
      delete transStrategy;
    }

    template<class T>
    T MMU<T>::getAddress(long virtualAddress){
        return NULL;
    }

    template<>
    os::ProcessPage* MMU<os::ProcessPage*>::getAddress(long virtualAddress){
      os::ProcessPage* physicalAddress = NULL;
      PagingTranslator* ptrans = (PagingTranslator*) transStrategy;
      try{
        physicalAddress = ptrans->translateDecimalDirection(NULL, virtualAddress);
        if(physicalAddress->getDecimalDir(ptrans->getBitsDirectory(),ptrans->getBitsPage(), ptrans->getBitsOffset()) > memSize){
            throw new InvalidAddressException(virtualAddress);
        }
      }catch(InvalidAddressException& e){
        bus->transportSignal(SEGMENTATION_FAULT);
      }
      return physicalAddress;
    }

    template
    MMU<os::ProcessPage*>::MMU(long manageSize, TranslationStrategy<os::ProcessPage*>* strategy, BUS* bus);

    template
    MMU<long>::MMU(long manageSize, TranslationStrategy<long>* strategy, BUS* bus);

    template
    MMU<os::ProcessPage*>::~MMU();

    template
    MMU<long>::~MMU();

    template
    long MMU<long>::getAddress(long virtualAddress);

}
