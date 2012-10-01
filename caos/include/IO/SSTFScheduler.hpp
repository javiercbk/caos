#pragma once

#include <list>
#include <IO/IOScheduler.hpp>

namespace os{

class SSTFScheduler : public IOScheduler
{
  public:
    SSTFScheduler(int currentBlock);
    virtual ~SSTFScheduler();
    void pushBlock(int block);
    int getNextBlock();
  private:
    std::list<int>* blockList;
};

}
