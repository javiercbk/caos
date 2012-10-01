/*
 * Address.h
 *
 *  Created on: Sep 20, 2012
 *      Author: javier
 */

#pragma once

namespace os {

template<class T>
class Address {
public:
	virtual ~Address(){}
	virtual unsigned long long getDecimalDir(T wordDescriptor) = 0;
};

}
