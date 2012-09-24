#ifndef BASEREGISTRYTRANSLATION_H
#define BASEREGISTRYTRANSLATION_H

#include "memory/TranslationStrategy.h"
#include "memory/MemoryDirection.h"

namespace pc {

class BaseRegistryTranslator : public TranslationStrategy<os::MemoryDirection*, int>
{
	public:
		BaseRegistryTranslator();
		os::MemoryDirection* translateDirection(unsigned long long base, unsigned long long logicalDirection) throw(InvalidAddressException);
		int getDescriptor();
};

}
#endif // BASEREGISTRYTRANSLATION_H
