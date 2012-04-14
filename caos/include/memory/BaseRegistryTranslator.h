#ifndef BASEREGISTRYTRANSLATION_H
#define BASEREGISTRYTRANSLATION_H

#include "../../include/memory/TranslationStrategy.h"

namespace pc {

	class BaseRegistryTranslator : public TranslationStrategy<unsigned long long>
	{
		public:
			BaseRegistryTranslator();
			unsigned long long translateDecimalDirection(unsigned long long base, unsigned long long logicalDirection) throw(InvalidAddressException);
	};

}
#endif // BASEREGISTRYTRANSLATION_H
