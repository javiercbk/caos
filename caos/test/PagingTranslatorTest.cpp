#include "PagingTranslatorTest.h"
#include "../include/memory/PagingTranslator.h"
#include "../include/memory/ProcessPage.h"

void PagingTranslatorTest::SetUp() {
  //dir: 16, Pag: 110, offset: 824
  // 10000 | 1101110 | 00000000001100111000
	translatorStrategy = new pc::PagingTranslator(5,7,20,32);
}

void PagingTranslatorTest::TearDown() {
	delete translatorStrategy;
}


TEST_F(PagingTranslatorTest, DefaultConstructor) {
    os::ProcessPage* physicalDir = translatorStrategy->translateDecimalDirection(NULL,2262827832);
    EXPECT_EQ(16, physicalDir->getDirectory());
	EXPECT_EQ(110, physicalDir->getPage());
	EXPECT_EQ(824, physicalDir->getOffset());
	delete physicalDir;
	//pruebo que no haya overflow al menos en 32 bits
	physicalDir = translatorStrategy->translateDecimalDirection(NULL,4294967295);
    EXPECT_EQ(31, physicalDir->getDirectory());
	EXPECT_EQ(127, physicalDir->getPage());
	EXPECT_EQ(1048575, physicalDir->getOffset());
	delete physicalDir;
}

