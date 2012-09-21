#ifndef MMU_H
#define MMU_H

#include "memory/TranslationStrategy.h"
#include "memory/SegmentationFaultException.h"
#include "Process.h"
#include "BusWritter.h"
#include "memory/TLB.h"
#include "BUS.h"

namespace pc{

template<class T, class M>
class MMU : public BusWritter
{
  public:
    MMU(long manageSize, TranslationStrategy<T, M>* strategy, BUS* bus);
    ~MMU();
    T getAddress(long virtualAddress);
  private:
    unsigned long long memSize;
    TLB<T>* tlb;
    TranslationStrategy<T, M>* transStrategy;
    BUS* bus;
};

}
#endif // MMU_H
