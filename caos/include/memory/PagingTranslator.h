#ifndef PAGINGTRANSLATOR_H
#define PAGINGTRANSLATOR_H

#include "../../include/memory/TranslationStrategy.h"
#include "../../include/memory/PageFrame.h"
#include "../../include/PCB.h"

namespace pc{

class PagingTranslator : public TranslationStrategy<os::PageFrame*>
{
    public:
        PagingTranslator(int bitsDirectory, int bitPage, int bitsOffset, int wordSize);
        os::PageFrame* translateDecimalDirection(os::PCB* pcb, long logicalDirection) throw(InvalidAddressException);
        int getBitsDirectory();
        int getBitsPage();
        int getBitsOffset();
        int getWordSize();
    private:
        int bitsDirectory;
        int bitsPage;
        int bitsOffset;
        int wordSize;
        int extractDecimalFromBits(int number, int bitsToClear, int backbits);
};

}

#endif // PAGINGTRANSLATOR_H
