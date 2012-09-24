#include "memory/BaseRegistryTranslator.h"

namespace pc{

BaseRegistryTranslator::BaseRegistryTranslator(){
}

os::MemoryDirection* BaseRegistryTranslator::translateDirection(unsigned long long base, unsigned long long logicalDirection) throw(InvalidAddressException)
{
    return new os::MemoryDirection(base + logicalDirection);
}

int BaseRegistryTranslator::getDescriptor(){
	return NULL;
}

}
