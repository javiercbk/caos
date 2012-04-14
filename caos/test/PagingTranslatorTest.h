#ifndef PAGINGTRANSLATORTEST_H
#define PAGINGTRANSLATORTEST_H

#include "gtest/gtest.h"

#include "../include/memory/TranslationStrategy.h"
#include "../include/memory/ProcessPage.h"

class PagingTranslatorTest : public testing::Test
{
  protected:
    virtual void SetUp();
    virtual void TearDown();
    pc::TranslationStrategy<os::ProcessPage*>* translatorStrategy;
};

#endif // PAGINGTRANSLATORTEST_H
