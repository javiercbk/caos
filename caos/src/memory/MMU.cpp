#include "memory/MMU.h"
#include "memory/ProcessPage.h"
#include "Processor.h"
#include "memory/PagingTranslator.h"
#include "memory/MemoryDirection.h"

namespace pc{

    template<class T, class M>
    MMU<T, M>::MMU(long manageSize, TranslationStrategy<T, M>* strategy, BUS* bus) : BusWritter(bus){
      memSize = manageSize;
      transStrategy = strategy;
      this->bus = bus;
    }

    template<class T, class M>
    MMU<T, M>::~MMU(){
      delete transStrategy;
    }

    template<class T, class M>
    T MMU<T, M>::getAddress(long virtualAddress){
      T physicalAddress = NULL;
      try{
        physicalAddress = transStrategy->translateDecimalDirection(NULL, virtualAddress);
        if(physicalAddress->getDecimalDir(transStrategy->getDescriptor()) > memSize){
            throw new InvalidAddressException(virtualAddress);
        }
      }catch(InvalidAddressException& e){
        bus->transportSignal(SEGMENTATION_FAULT);
      }
      return physicalAddress;
    }

    template
    MMU<os::ProcessPage*, os::PageDescriptor>::MMU(long manageSize, TranslationStrategy<os::ProcessPage*, os::PageDescriptor>* strategy, BUS* bus);

    template
    MMU<os::MemoryDirection*, int>::MMU(long manageSize, TranslationStrategy<os::MemoryDirection*, int>* strategy, BUS* bus);

    template
    MMU<os::ProcessPage*, os::PageDescriptor>::~MMU();

    template
    MMU<os::MemoryDirection*, int>::~MMU();

    template
    os::ProcessPage* MMU<os::ProcessPage*, os::PageDescriptor>::getAddress(long virtualAddress);

}
