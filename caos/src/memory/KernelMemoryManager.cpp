
#include "../../include/memory/KernelMemoryManager.h"

namespace os{

KernelMemoryManager::KernelMemoryManager(unsigned long long memSize){
    this->memSize = memSize;
}

unsigned long long KernelMemoryManager::getFreeMem(){
    return this->freeMem;
}
unsigned long long KernelMemoryManager::getMemSize(){
    return this->memSize;
}

}
