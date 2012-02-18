#ifndef MMU_H
#define MMU_H

#include "../../include/memory/TranslationStrategy.h"
#include "../../include/memory/SegmentationFaultException.h"
#include "../../include/Process.h"
#include "../../include/BusWritter.h"
#include "../../include/memory/TLB.h"

namespace pc{

template<class T>
class MMU : public BusWritter
{
  public:
    MMU(long manageSize, TranslationStrategy<T>* strategy);
    ~MMU();
    void getAddress(os::Process* process, long virtualAddress);
  private:
    long memSize;
    TLB<T>* tlb;
    TranslationStrategy<T>* transStrategy;

};

}
#endif // MMU_H
