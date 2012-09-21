#ifndef BASEREGISTRYTRANSLATORTEST_H
#define BASEREGISTRYTRANSLATORTEST_H

#include "gtest/gtest.h"

#include "memory/TranslationStrategy.h"
#include "memory/MemoryDirection.h"
#include "PCB.h"

class BaseRegistryTranslatorTest : public testing::Test
{
  protected:
    virtual void SetUp();
	virtual void TearDown();
    pc::TranslationStrategy<os::MemoryDirection*, int>* translatorStrategy;
    os::PCB* pcb;
};

#endif // BASEREGISTRYTRANSLATORTEST_H
