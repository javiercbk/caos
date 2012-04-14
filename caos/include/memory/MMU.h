#ifndef MMU_H
#define MMU_H

#include "../../include/memory/TranslationStrategy.h"
#include "../../include/memory/SegmentationFaultException.h"
#include "../../include/Process.h"
#include "../../include/BusWritter.h"
#include "../../include/memory/TLB.h"
#include "../../include/BUS.h"

namespace pc{

template<class T>
class MMU : public BusWritter
{
  public:
    MMU(long manageSize, TranslationStrategy<T>* strategy, BUS* bus);
    ~MMU();
    T getAddress(long virtualAddress);
  private:
    unsigned long long memSize;
    TLB<T>* tlb;
    TranslationStrategy<T>* transStrategy;
    BUS* bus;
};

}
#endif // MMU_H
