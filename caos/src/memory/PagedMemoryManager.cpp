#include "memory/PagedMemoryManager.h"

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
    pageDirectory.empty();
    delete &pageDirectory;
    delete freeMemoryManager;
}

void PagedMemoryManager::allocateProcess(PCB* process){
	//ProcessPage* allocatedPage = freeMemoryManager->getNextFreeSpace();
}

void PagedMemoryManager::deallocateProcess(PCB* process){

}

void PagedMemoryManager::getAddress(const PCB* process, unsigned long long memoryAddress){

}

}
