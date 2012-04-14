#ifndef PAGINGTRANSLATOR_H
#define PAGINGTRANSLATOR_H

#include "../../include/memory/TranslationStrategy.h"
#include "../../include/memory/ProcessPage.h"
#include "../../include/PCB.h"

namespace pc{

class PagingTranslator : public TranslationStrategy<os::ProcessPage*>
{
    public:
        PagingTranslator(int bitsDirectory, int bitPage, int bitsOffset, int wordSize);
        os::ProcessPage* translateDecimalDirection(unsigned long long base, unsigned long long logicalDirection) throw(InvalidAddressException);
        int getBitsDirectory();
        int getBitsPage();
        int getBitsOffset();
        int getWordSize();
    private:
        int bitsDirectory;
        int bitsPage;
        int bitsOffset;
        int wordSize;
        unsigned long long extractDecimalFromBits(unsigned long long number, int bitsToClear, int backbits);
};

}

#endif // PAGINGTRANSLATOR_H
