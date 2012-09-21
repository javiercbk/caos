#ifndef PAGINGTRANSLATORTEST_H
#define PAGINGTRANSLATORTEST_H

#include "gtest/gtest.h"

#include "memory/TranslationStrategy.h"
#include "memory/ProcessPage.h"
#include "memory/PageDescriptor.h"

class PagingTranslatorTest : public testing::Test
{
  protected:
    virtual void SetUp();
    virtual void TearDown();
    pc::TranslationStrategy<os::ProcessPage*, os::PageDescriptor>* translatorStrategy;
};

#endif // PAGINGTRANSLATORTEST_H
