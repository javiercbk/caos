#include <memory/ProcessSegment.hpp>

namespace os{

ProcessSegment::ProcessSegment(unsigned long long base, unsigned long long size){
  this->base = base;
  this->size = size;
}

ProcessSegment::ProcessSegment(ProcessSegmentType* type, unsigned long long base, unsigned long long size){
  this->base = base;
  this->size = size;
  this->type = type;
}

ProcessSegment::~ProcessSegment(){
  //dtor
}

void ProcessSegment::setType(ProcessSegmentType type){
	this->type = &type;
}

}

