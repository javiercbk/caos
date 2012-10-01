#pragma once

#include <IO/IOScheduler.hpp>
#include <queue>

namespace os{

class FCFSIOScheduler : public IOScheduler
{
  public:
    FCFSIOScheduler(int currentBlock);
    virtual ~FCFSIOScheduler();
    void pushBlock(int block);
    int getNextBlock();
  private:
    std::queue<int>* blockQueue;

};

}
