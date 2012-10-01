#pragma once

#include <TranslationStrategy.hpp>
#include <ProcessSegment.hpp>
#include <PageDescriptor.hpp>

namespace pc{

class SegmentTranslator : public TranslationStrategy<os::ProcessSegment*, long>
{
    public:
        SegmentTranslator(int bitsSegment, int bitsPage, int bitsOffset);
        virtual ~SegmentTranslator();
        long getDescriptor();
        os::ProcessSegment* translateDirection(unsigned long long base, unsigned long long logicalDirection) throw(InvalidAddressException);
    protected:
    private:
        int bitsSegment;
        int bitsPage;
        int bitsOffset;
};

}
