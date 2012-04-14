#ifndef KERNELMEMORYMANAGER_H
#define KERNELMEMORYMANAGER_H


#include "../../include/PCB.h"

namespace os{

class KernelMemoryManager
{
    public:
        KernelMemoryManager(unsigned long long memSize);
        virtual void allocateProcess(PCB* process) = 0;
        virtual void deallocateProcess(PCB* process) = 0;
        virtual void getAddress(const PCB* process, unsigned long long memoryAddress) = 0;
        unsigned long long getFreeMem();
        unsigned long long getMemSize();
    protected:
        unsigned long long memSize;
        unsigned long long freeMem;

};

}

#endif // KERNELMEMORYMANAGER_H
