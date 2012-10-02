#include <IO/FCFSIOScheduler.hpp>

namespace os{

FCFSIOScheduler::FCFSIOScheduler(int currentBlock) : IOScheduler(currentBlock)
{
  this->currentBlock = currentBlock;
}

FCFSIOScheduler::~FCFSIOScheduler()
{
}

void FCFSIOScheduler::pushBlock(int block){
  blockQueue.push(block);
}

int FCFSIOScheduler::getNextBlock(){
  int nextBlock = blockQueue.front();
  blockQueue.pop();
  return nextBlock;
}

}
