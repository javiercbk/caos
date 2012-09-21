#ifndef FCFSIOSCHEDULER_H
#define FCFSIOSCHEDULER_H

#include "IO/IOScheduler.h"
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
#endif // FCFSIOSCHEDULER_H
