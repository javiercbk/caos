#ifndef SEGMENTTRANSLATOR_H
#define SEGMENTTRANSLATOR_H

#include "TranslationStrategy.h"
#include "ProcessSegment.h"
#include "PageDescriptor.h"

namespace pc{

class SegmentTranslator : public TranslationStrategy<os::ProcessSegment*, os::PageDescriptor>
{
    public:
        SegmentTranslator(int bitsSegment, int bitsPage, int bitsOffset);
        virtual ~SegmentTranslator();
        os::ProcessSegment* translateDecimalDirection(unsigned long long base, unsigned long long logicalDirection) throw(InvalidAddressException);
    protected:
    private:
        int bitsSegment;
        int bitsPage;
        int bitsOffset;
};

}

#endif // SEGMENTTRANSLATOR_H

