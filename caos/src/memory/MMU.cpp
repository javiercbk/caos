#include "../../include/memory/MMU.h"

namespace pc{

template<class T>
MMU<T>::MMU(long manageSize, TranslationStrategy<T>* strategy){
  memSize = manageSize;
  transStrategy = strategy;
}

template<class T>
MMU<T>::~MMU(){
  delete transStrategy;
}

template<class T>
void MMU<T>::getAddress(os::Process* process, long virtualAddress){
  try{
    long physicalAddress = transStrategy->translateDecimalDirection(virtualAddress);
    if(physicalAddress > memSize){

    }
  }catch(InvalidAddressException& e){

  }
}

}
