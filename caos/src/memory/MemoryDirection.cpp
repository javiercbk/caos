/*
 * MemoryDirection.cpp
 *
 *  Created on: Sep 20, 2012
 *      Author: javier
 */

#include <memory/MemoryDirection.hpp>

namespace os{

MemoryDirection::MemoryDirection(unsigned long long address) {
	this->address = address;
}

MemoryDirection::~MemoryDirection() {
	// TODO Auto-generated destructor stub
}

unsigned long long MemoryDirection::getAddress(){
	return this->address;
}

unsigned long long MemoryDirection::getDecimalDir(int wordDescriptor){
	return getAddress();
}

}
