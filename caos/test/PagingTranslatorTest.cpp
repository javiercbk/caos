#include "PagingTranslatorTest.h"
#include "../include/memory/PagingTranslator.h"
#include "../include/memory/PageFrame.h"

void PagingTranslatorTest::SetUp() {
  //dir: 16, Pag: 110, offset: 824
  // 10000 | 1101110 | 00000000001100111000
	translatorStrategy = new pc::PagingTranslator(5,7,20,32);
	pcb = new os::PCB(1);
}

void PagingTranslatorTest::TearDown() {
	delete translatorStrategy;
	delete pcb;
}


TEST_F(PagingTranslatorTest, DefaultConstructor) {
  os::PageFrame* physicalDir = translatorStrategy->translateDecimalDirection(pcb,2262827832);
	EXPECT_EQ(16, physicalDir->getDirectory());
	EXPECT_EQ(110, physicalDir->getPage());
	EXPECT_EQ(824, physicalDir->getFrame());
}

