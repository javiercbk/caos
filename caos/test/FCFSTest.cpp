#include "FCFSTest.h"

#include "../include/IO/FCFSIOScheduler.h"
#include <stdlib.h>
#include <time.h>

void FCFSTest::SetUp() {
  ioScheduler = new os::FCFSIOScheduler(0);
  blockQueue = new std::queue<int>();
}

void FCFSTest::TearDown() {
  delete blockQueue;
  delete ioScheduler;
}

int FCFSTest::makeRandomBlock(){
  srand (time(NULL));
	return rand() % 100 + 1;
}


TEST_F(FCFSTest, DefaultConstructor) {
	int block = 0;
	for(int i; i < 10; i++) {
			block = makeRandomBlock();
			ioScheduler->pushBlock(block);
		}
	while(!blockQueue->empty()) {
			block = blockQueue->front();
			int sameBlock = ioScheduler->getNextBlock();
			blockQueue->pop();
			EXPECT_EQ(block, sameBlock);
		}
}
