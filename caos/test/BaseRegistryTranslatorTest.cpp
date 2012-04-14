#include "BaseRegistryTranslatorTest.h"
#include "../include/memory/BaseRegistryTranslator.h"

void BaseRegistryTranslatorTest::SetUp() {
	translatorStrategy = new pc::BaseRegistryTranslator();
}

void BaseRegistryTranslatorTest::TearDown() {
	delete translatorStrategy;
}


TEST_F(BaseRegistryTranslatorTest, DefaultConstructor) {
  long physicalDir = translatorStrategy->translateDecimalDirection(103,45);
	EXPECT_EQ(103 + 45, physicalDir);
}
