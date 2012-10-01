/*
 * BitVectorFreeMemoryManager.cpp
 *
 *  Created on: Sep 23, 2012
 *      Author: javier
 */

#include <memory/BitVectorFreeMemoryManager.hpp>

namespace os {

BitVectorFreePageManager::BitVectorFreePageManager(unsigned long long size, unsigned long long dirCount, unsigned long long pageCount) {
	//FIXME esto capaz que da segmentation fault
	this->size = size;
	this->dirCount = dirCount;
	this->pageCount = pageCount;
}

BitVectorFreePageManager::~BitVectorFreePageManager() {
}

ProcessPage* BitVectorFreePageManager::getNextFreeSpace(){
	unsigned long long vectorSize = bitVector.size();
	unsigned long long i = 0;
	while(i < vectorSize && bitVector[i]){
		i++;
	}
	if(i == vectorSize){
		//memoria llena
		return NULL;
	}
	unsigned long long dir = 0;
	unsigned long long page = 0;
	if(dirCount > 0){
		dir = i / dirCount;
	}
	page = (i - (dir * pageCount));
	return new ProcessPage(dir, page, 0);
}

}
