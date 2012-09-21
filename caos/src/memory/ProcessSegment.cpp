#include "memory/ProcessSegment.h"

namespace os{

ProcessSegment::ProcessSegment(ProcessSegmentType* type, unsigned long long base, unsigned long long size){
  this->base = base;
  this->size = size;
}

ProcessSegment::~ProcessSegment(){
  //dtor
}

}

