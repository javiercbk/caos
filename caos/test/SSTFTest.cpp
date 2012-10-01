#include "SSTFTest.h"

#include <IO/SSTFScheduler.h>
#include "TestHelper.h"

void SSTFTest::SetUp() {
    currentBlock = test::TestHelper::makeRandomBlock();
    ioScheduler = new os::SSTFScheduler(currentBlock);
    blockList = new std::list<int>();
    blockList->push_back(currentBlock);
    for(int i = 0; i < 20; i++){
        int block = test::TestHelper::makeRandomBlock();
        ioScheduler->pushBlock(block);
        blockList->push_back(block);
    }
    sortList();
    blockList->erase(blockList->begin());
}

void SSTFTest::TearDown() {
  delete blockList;
  delete ioScheduler;
}

void SSTFTest::sortList(){
    std::list<int>::iterator it = blockList->begin();
    std::list<int>::iterator next;
    while(it != blockList->end()){
        next = getNearerBlock(blockList, it);
        blockList->splice(it, *(blockList), next);
        it++;
    }
}

std::list<int>::iterator SSTFTest::getNearerBlock(std::list<int>* availableBlocks, std::list<int>::iterator it){
    int distance = -1;
    int auxDistance = 0;
    std::list<int>::iterator nextBlock;
    while( it != availableBlocks->end() ){
      int b = *it++;
      if(distance == -1){
        nextBlock = it;
        distance = abs(currentBlock - b);
      }else{
        auxDistance = abs(currentBlock - b);
        if(distance > auxDistance){
            nextBlock = it;
            distance = auxDistance;
        }
      }
    }
    return nextBlock;
}


TEST_F(SSTFTest, DefaultConstructor) {
	int block = 0;
	while(!blockList->empty()) {
        block = blockList->front();
        int sameBlock = ioScheduler->getNextBlock();
        blockList->pop_front();
        EXPECT_EQ(block, sameBlock);
    }
}
