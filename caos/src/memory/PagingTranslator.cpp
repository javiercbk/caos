#include "../../include/memory/PagingTranslator.h"

namespace pc{

PagingTranslator::PagingTranslator(int bitsDirectory, int bitsPage, int bitsOffset, int wordSize){
  this->bitsDirectory = bitsDirectory;
  this->bitsPage = bitsPage;
  this->bitsOffset = bitsOffset;
  this->wordSize = wordSize;
}

unsigned long long PagingTranslator::extractDecimalFromBits(unsigned long long number, int bitsToClear, int backbits){
  unsigned long long extractor = 0;
  unsigned long long extracted = 0;
  int i;
  ///numero binario para obtener el numero a direccionar
  for(i=0;i < bitsToClear; i++){
    extractor = extractor << 1;
    extractor = extractor + 0x1;
  }
  ///and de bit para eliminar los demas numeros
  extractor = extractor << backbits;
  extracted = number & extractor;
  return extracted >> backbits;
}

os::ProcessPage* PagingTranslator::translateDecimalDirection(unsigned long long base, unsigned long long logicalDirection) throw(InvalidAddressException){
  int dir = logicalDirection >> (bitsPage + bitsOffset);
  int page = this->extractDecimalFromBits(logicalDirection, bitsPage, bitsOffset);
  int offset = this->extractDecimalFromBits(logicalDirection, bitsOffset, 0);
  os::ProcessPage* pf = new os::ProcessPage();
  pf->setDirectory(dir);
  pf->setPage(page);
  pf->setOffset(offset);
  return pf;
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

int PagingTranslator::getWordSize(){
  return wordSize;
}

}
