#include "SegmentTranslator.h"

namespace pc {

SegmentTranslator::SegmentTranslator(int bitsSegment, int bitsPage,
		int bitsOffset) {
	this->bitsSegment = bitsSegment;
	this->bitsPage = bitsPage;
	this->bitsOffset = bitsOffset;
}

SegmentTranslator::~SegmentTranslator() {
	//dtor
}

os::ProcessSegment* SegmentTranslator::translateDecimalDirection(unsigned long long base, unsigned long long logicalDirection)
		throw (InvalidAddressException) {
	return NULL;
}

}
