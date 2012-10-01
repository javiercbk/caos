#pragma once

#include <PCB.h>

namespace os{

/**
 * Esta clase es la que provee la interfaz generica de bajo nivel del kernel
 * para alocar un proceso, de-allocarlo y pedirle una direcci—n de
 * memoria de un proceso.
 * Esta clase se invoca a traves de System Calls
 */
class KernelMemoryManager
{
    public:
        virtual void allocateProcess(PCB* process) = 0;
        virtual void deallocateProcess(PCB* process) = 0;
        virtual void allocateBytesProcess(PCB* process, unsigned long long bytes) = 0;
        virtual void getAddress(const PCB* process, unsigned long long memoryAddress) = 0;
        unsigned long long getFreeMem();
        unsigned long long getMemSize();
    protected:
        unsigned long long memSize;
        unsigned long long freeMem;

};

}
