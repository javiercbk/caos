#include <memory/PagedMemoryManager.hpp>

namespace os{

PagedMemoryManager::PagedMemoryManager(unsigned long long memSize, int bitsDirectory, int bitsPage, int bitsOffset, int wordSize, pc::BUS* bus)
{
	int totalPages = (2 ^ bitsDirectory) * (2 ^ bitsPage);
	this->memSize = memSize;
	this->wordSize = wordSize;
    this->mmu = new pc::MMU<ProcessPage*, PageDescriptor>(memSize, new pc::PagingTranslator(bitsDirectory, bitsPage, bitsOffset), bus);
    this->dirCount = 2 ^ bitsDirectory;
    this->pageCount = 2 ^ bitsPage;
    freeMemoryManager = new BitVectorFreePageManager(totalPages, dirCount, pageCount);
}

PagedMemoryManager::~PagedMemoryManager()
{
    delete mmu;
    for (auto itDir = pageDirectory.begin(); itDir != pageDirectory.end(); itDir++) {
    	for (auto itPag = (*itDir).begin(); itPag != (*itDir).end(); itPag++) {
    		delete *itPag;
    	}
    }
    delete freeMemoryManager;
}

void PagedMemoryManager::allocateProcess(PCB& process){
	//ProcessPage* allocatedPage = freeMemoryManager->getNextFreeSpace();
}

void PagedMemoryManager::deallocateProcess(PCB& process){

}

void PagedMemoryManager::allocateBytesProcess(PCB& process, unsigned long long bytes){

}

void PagedMemoryManager::getAddress(const PCB& process, unsigned long long memoryAddress){

}

}
