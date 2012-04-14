#ifndef PAGEDMEMORYMANAGER_H
#define PAGEDMEMORYMANAGER_H

#include "KernelMemoryManager.h"
#include "MMU.h"
#include "ProcessPage.h"
#include <list>

namespace os{

class PagedMemoryManager : public KernelMemoryManager
{
    public:
        PagedMemoryManager(unsigned long long memSize, int bitsDirectory, int bitPage, int bitsOffset, int wordSize);
        virtual ~PagedMemoryManager();
    private:
        pc::MMU<os::ProcessPage*>* mmu;///Direct access to MMU
        unsigned long long tablesCount;
        unsigned long long pagesCount;
        unsigned long long directoriesCount;


};

}
#endif // PAGEDMEMORYMANAGER_H
