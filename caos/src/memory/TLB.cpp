#include "memory/TLB.h"

namespace pc{

template<class T>
TLB<T>::TLB(int size){
  this->size = size;
  this->fifoPointer = 0;
}

template<class T>
TLB<T>::~TLB()
{
  delete buffer;
}

template<class T>
void TLB<T>::update(os::Process process, T* vAddress){

}

template<class T>
void TLB<T>::pointNext(){
    if(fifoPointer == this->size){
        fifoPointer = 0;
    }else{
        fifoPointer++;
    }
}

template<class T>
void TLB<T>::insertTLB(T* cacheElement){
    buffer->insert(buffer->begin()+ fifoPointer, cacheElement);
    pointNext();
}

}
