#ifndef PAGEDMEMORYMANAGER_H
#define PAGEDMEMORYMANAGER_H

#include "memory/KernelMemoryManager.h"
#include "memory/MMU.h"
#include "memory/ProcessPage.h"
#include "memory/PageDescriptor.h"
#include "memory/PagingTranslator.h"
#include "memory/BitVectorFreeMemoryManager.h"
#include "BUS.h"
#include <vector>

namespace os{

/**
 * Esta clase provee la interfaz del kernel para el manejo de memoria paginada.
 * Invocar’a al MMU a traves de assembler, en este caso se opt— por dar una referencia
 * directa al MMU que en realidad es Hardware.
 */
class PagedMemoryManager : public KernelMemoryManager
{
    public:
        PagedMemoryManager(unsigned long long memSize, int bitsDirectory, int bitsPage, int bitsOffset, int wordSize, pc::BUS* bus);
        ~PagedMemoryManager();
        void allocateProcess(PCB* process);
		void deallocateProcess(PCB* process);
		void getAddress(const PCB* process, unsigned long long memoryAddress);
    private:
		unsigned long long dirCount; ///este campo es para uso interno y no existe en un SO.
		unsigned long long pageCount; ///este campo es para uso interno y no existe en un SO.
		int wordSize;
		BitVectorFreePageManager* freeMemoryManager;
        pc::MMU<ProcessPage*, PageDescriptor>* mmu;///acceso directo al MMU a pesar que es un componente electronico.
        std::vector< std::vector<ProcessPage*> > pageDirectory;///tabla de P‡ginas, esta soportada por el HW.

};

}
#endif // PAGEDMEMORYMANAGER_H
