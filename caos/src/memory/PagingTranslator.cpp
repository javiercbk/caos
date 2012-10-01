#include <memory/PagingTranslator.h>

namespace pc{

PagingTranslator::PagingTranslator(int bitsDirectory, int bitsPage, int bitsOffset){
  this->bitsDirectory = bitsDirectory;
  this->bitsPage = bitsPage;
  this->bitsOffset = bitsOffset;
  this->descriptor = new os::PageDescriptor(bitsDirectory, bitsPage, bitsOffset);
}

PagingTranslator::~PagingTranslator(){
	delete descriptor;
}

os::ProcessPage* PagingTranslator::translateDirection(unsigned long long base, unsigned long long logicalDirection) throw(InvalidAddressException){
  int dir = logicalDirection >> (bitsPage + bitsOffset);
  int page = this->extractDecimalFromBits(logicalDirection, bitsPage, bitsOffset);
  int offset = this->extractDecimalFromBits(logicalDirection, bitsOffset, 0);
  return new os::ProcessPage(dir, page, offset);
}

int PagingTranslator::getBitsDirectory(){
  return bitsDirectory;
}

int PagingTranslator::getBitsPage(){
  return bitsPage;
}

int PagingTranslator::getBitsOffset(){
  return bitsOffset;
}

os::PageDescriptor PagingTranslator::getDescriptor(){
	return *(this->descriptor);
}

}
