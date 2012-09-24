#ifndef PAGINGTRANSLATOR_H
#define PAGINGTRANSLATOR_H

#include "memory/TranslationStrategy.h"
#include "memory/PageDescriptor.h"
#include "memory/ProcessPage.h"
#include "PCB.h"

namespace pc{

class PagingTranslator : public TranslationStrategy<os::ProcessPage*, os::PageDescriptor>
{
    public:
        PagingTranslator(int bitsDirectory, int bitPage, int bitsOffset);
        ~PagingTranslator();
        os::ProcessPage* translateDirection(unsigned long long base, unsigned long long logicalDirection) throw(InvalidAddressException);
        int getBitsDirectory();
        int getBitsPage();
        int getBitsOffset();
        os::PageDescriptor getDescriptor();
    private:
        int bitsDirectory;
        int bitsPage;
        int bitsOffset;
        os::PageDescriptor* descriptor;
};

}

#endif // PAGINGTRANSLATOR_H
