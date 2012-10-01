#pragma once

#include <memory/TranslationStrategy.hpp>
#include <memory/MemoryDirection.hpp>

namespace pc {

class BaseRegistryTranslator : public TranslationStrategy<os::MemoryDirection*, int>
{
	public:
		BaseRegistryTranslator();
		os::MemoryDirection* translateDirection(unsigned long long base, unsigned long long logicalDirection) throw(InvalidAddressException);
		int getDescriptor();
};

}
