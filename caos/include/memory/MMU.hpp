#pragma once

#include <memory/TranslationStrategy.hpp>
#include <memory/SegmentationFaultException.hpp>
#include <Process.hpp>
#include <BusWritter.hpp>
#include <memory/TLB.hpp>
#include <BUS.hpp>

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
