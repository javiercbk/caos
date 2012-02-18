#ifndef PAGINGTRANSLATORTEST_H
#define PAGINGTRANSLATORTEST_H

#include "gtest/gtest.h"

#include "../include/memory/TranslationStrategy.h"
#include "../include/memory/PageFrame.h"
#include "../include/PCB.h"

class PagingTranslatorTest : public testing::Test
{
  protected:
    virtual void SetUp();
		virtual void TearDown();
		pc::TranslationStrategy<os::PageFrame*>* translatorStrategy;
    os::PCB* pcb;
};

#endif // PAGINGTRANSLATORTEST_H
