#pragma once

#include <memory/FreeSpaceManager.hpp>
#include <memory/ProcessPage.hpp>
#include <boost/dynamic_bitset.hpp>

namespace os {

class BitVectorFreePageManager : public FreeSpaceManager<ProcessPage>{
public:
	BitVectorFreePageManager(unsigned long long size, unsigned long long dirCount, unsigned long long pageCount);
	virtual ~BitVectorFreePageManager();
	ProcessPage* getNextFreeSpace();
private:
	unsigned long long dirCount;
	unsigned long long pageCount;
	unsigned long long size;
	boost::dynamic_bitset<> bitVector;///Bit vector
};

}
