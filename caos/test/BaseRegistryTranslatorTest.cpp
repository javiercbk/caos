#include "BaseRegistryTranslatorTest.h"
#include "../include/memory/BaseRegistryTranslator.h"

void BaseRegistryTranslatorTest::SetUp() {
	translatorStrategy = new pc::BaseRegistryTranslator();
	pcb = new os::PCB(1);
	pcb->setBase(103);
}

void BaseRegistryTranslatorTest::TearDown() {
	delete translatorStrategy;
	delete pcb;
}


TEST_F(BaseRegistryTranslatorTest, DefaultConstructor) {
  long physicalDir = translatorStrategy->translateDecimalDirection(pcb,45);
	EXPECT_EQ(103 + 45, physicalDir);
}
