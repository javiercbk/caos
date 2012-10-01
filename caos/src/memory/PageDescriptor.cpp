/*
 * PageDescriptor.cpp
 *
 *  Created on: Sep 20, 2012
 *      Author: javier
 */

#include <memory/PageDescriptor.hpp>

namespace os{


PageDescriptor::PageDescriptor(int bitsDirectory, int bitPage, int bitsOffset) {
	this->bitsDirectory = bitsDirectory;
	this->bitsPage = bitsPage;
	this->bitsOffset = bitsOffset;
}

PageDescriptor::~PageDescriptor() {

}

int PageDescriptor::getBitsDirectory(){
  return bitsDirectory;
}

int PageDescriptor::getBitsPage(){
  return bitsPage;
}

int PageDescriptor::getBitsOffset(){
  return bitsOffset;
}

}
