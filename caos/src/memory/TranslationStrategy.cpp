#include <memory/TranslationStrategy.hpp>
#include <memory/ProcessPage.hpp>
#include <memory/PageDescriptor.hpp>
#include <memory/MemoryDirection.hpp>

namespace pc{

template<class T,class M>
unsigned long long TranslationStrategy<T, M>::extractDecimalFromBits(unsigned long long number, int bitsToClear, int backbits){
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

template
unsigned long long TranslationStrategy<os::ProcessPage*, os::PageDescriptor>::extractDecimalFromBits(unsigned long long number, int bitsToClear, int backbits);

template
unsigned long long TranslationStrategy<os::MemoryDirection*, int>::extractDecimalFromBits(unsigned long long number, int bitsToClear, int backbits);

}
