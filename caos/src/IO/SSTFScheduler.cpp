#include <IO/SSTFScheduler.hpp>
#include <stdlib.h>

namespace os{

SSTFScheduler::SSTFScheduler(int currentBlock) : IOScheduler(currentBlock)
{
  this->currentBlock = currentBlock;
  blockList = new std::list<int>();
}

SSTFScheduler::~SSTFScheduler()
{
  delete blockList;
}

void SSTFScheduler::pushBlock(int block){
  std::list<int>::iterator it = blockList->begin();
  int currentDistance = abs(currentBlock - block);
  bool placed = false;
  while(!placed && it != blockList->end()){
    int dis = (currentBlock - *(it));
    if(currentDistance < dis){
        blockList->insert(it, block);
        placed = true;
    }
    it++;
  }
  if(!placed){
    blockList->push_back(block);
  }
}

int SSTFScheduler::getNextBlock(){
    int nextBlock = blockList->front();
    blockList->pop_front();
    return nextBlock;
}

}
