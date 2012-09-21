#include "IO/FCFSIOScheduler.h"

namespace os{

FCFSIOScheduler::FCFSIOScheduler(int currentBlock) : IOScheduler(currentBlock)
{
  this->currentBlock = currentBlock;
  blockQueue = new std::queue<int>();
}

FCFSIOScheduler::~FCFSIOScheduler()
{
  delete blockQueue;
}

void FCFSIOScheduler::pushBlock(int block){
  blockQueue->push(block);
}

int FCFSIOScheduler::getNextBlock(){
  int nextBlock = blockQueue->front();
  blockQueue->pop();
  return nextBlock;
}

}
