#ifndef SSTFSCHEDULER_H
#define SSTFSCHEDULER_H

#include <list>
#include "../../include/IO/IOScheduler.h"

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
#endif // SSTFSCHEDULER_H
