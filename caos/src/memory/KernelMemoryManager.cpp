#include <memory/KernelMemoryManager.hpp>

namespace os{

unsigned long long KernelMemoryManager::getFreeMem(){
    return this->freeMem;
}
unsigned long long KernelMemoryManager::getMemSize(){
    return this->memSize;
}

}
