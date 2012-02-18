#include "../../include/memory/TLB.h"

namespace pc{

template<class T>
TLB<T>::TLB(int size)
{
  //ctor
}

template<class T>
TLB<T>::~TLB()
{
  delete buffer;
}

template<class T>
void TLB<T>::update(os::Process process, T* vAddress){
  if(buffer->size() == this->size){
    //TLB is full
  }else{
    //TLB has space
  }
}

template<class T>
void TLB<T>::pointNext(){
  if(buffer->size() == this->size){
    pointNext(this->size - 1);
  }else{
    pointNext(buffer->size() - 1);
  }
}

template<class T>
void TLB<T>::pointNext(int size){
  if(fifoPointer == size){
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
