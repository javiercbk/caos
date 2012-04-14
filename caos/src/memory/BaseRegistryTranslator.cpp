#include "../../include/memory/BaseRegistryTranslator.h"

namespace pc{

BaseRegistryTranslator::BaseRegistryTranslator(){
}

unsigned long long BaseRegistryTranslator::translateDecimalDirection(unsigned long long base, unsigned long long logicalDirection) throw(InvalidAddressException)
{
    return base + logicalDirection;
}

}
