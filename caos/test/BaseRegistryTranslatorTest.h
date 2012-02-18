#ifndef BASEREGISTRYTRANSLATORTEST_H
#define BASEREGISTRYTRANSLATORTEST_H

#include "gtest/gtest.h"

#include "../include/memory/TranslationStrategy.h"
#include "../include/PCB.h"

class BaseRegistryTranslatorTest : public testing::Test
{
  protected:
    virtual void SetUp();
		virtual void TearDown();
    pc::TranslationStrategy<long>* translatorStrategy;
    os::PCB* pcb;
};

#endif // BASEREGISTRYTRANSLATORTEST_H
