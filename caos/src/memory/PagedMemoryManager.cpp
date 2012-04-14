#include "../../include/memory/PagedMemoryManager.h"

namespace os{

PagedMemoryManager::PagedMemoryManager(unsigned long long memSize, int bitsDirectory, int bitPage, int bitsOffset, int wordSize) : KernelMemoryManager(memSize)
{
    //ctor
}

PagedMemoryManager::~PagedMemoryManager()
{
    //dtor
}

}
