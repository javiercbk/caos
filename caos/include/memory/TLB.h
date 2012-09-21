#ifndef TLB_H
#define TLB_H

#include "Process.h"

namespace pc{

/**
* @brief Translation Lookaside Buffer
*
* Cache de instrucciones traducidas. Hay 1 por procesador.
*/
template <class T>
class TLB
{
  public:
    TLB(int size);
    virtual ~TLB();
    unsigned int getSize() { return size; }
    unsigned int getUsageCost() { return usageCost; }
    void setUsageCost(unsigned int cost) { usageCost = cost; }
    void update(os::Process process, T* vAddress);
  private:
    std::vector<T*> buffer;
    int fifoPointer;
    unsigned int usageCost;
    unsigned int size;
    void pointNext();
    void insertTLB(T* cacheElement);
};

}
#endif // TLB_H
