#include "../../include/IO/IOScheduler.h"
#include <cstdlib>

namespace os{

IOScheduler::IOScheduler(int currentBlock=0)
{
  this->currentBlock = currentBlock;
}

IOScheduler::~IOScheduler()
{
  //dtor
}

int IOScheduler::getCurrentBlock(){
  return this->currentBlock;
}
int IOScheduler::getMoveCost(){
  return this->moveCost;
}
int IOScheduler::getReadCost(){
  return this->readCost;
}
void IOScheduler::setMoveCost(int moveCost){
  this->moveCost = moveCost;
}
void IOScheduler::setReadCost(int readCost){
  this->readCost = readCost;
}
unsigned int IOScheduler::readBlock(int block){
  return goToBlock(block) + readCost;
}
unsigned int IOScheduler::goToBlock(int block){
  int blocksAway = abs(currentBlock - block);
  return blocksAway * moveCost;

}

}
