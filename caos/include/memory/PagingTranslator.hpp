#pragma once

#include <memory/TranslationStrategy.hpp>
#include <memory/PageDescriptor.hpp>
#include <memory/ProcessPage.hpp>
#include <PCB.hpp>

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
