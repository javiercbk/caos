/*
 * MemoryDirection.h
 *
 *  Created on: Sep 20, 2012
 *      Author: javier
 */

#pragma once

#include <memory/Address.hpp>

namespace os{

class MemoryDirection : public Address<int>
{
public:
	MemoryDirection(unsigned long long address);
	virtual ~MemoryDirection();
	unsigned long long getAddress();
	unsigned long long getDecimalDir(int wordDescriptor);
private:
	unsigned long long address;
};

}
