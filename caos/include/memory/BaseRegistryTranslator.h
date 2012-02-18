#ifndef BASEREGISTRYTRANSLATION_H
#define BASEREGISTRYTRANSLATION_H

#include "../../include/memory/TranslationStrategy.h"

namespace pc {

	class BaseRegistryTranslator : public TranslationStrategy<long>
	{
		public:
			BaseRegistryTranslator();
			long translateDecimalDirection(os::PCB* pcb, long logicalDirection) throw(InvalidAddressException);
	};

}
#endif // BASEREGISTRYTRANSLATION_H
