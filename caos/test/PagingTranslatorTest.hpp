#pragma once

#include "gtest/gtest.h"

#include <memory/TranslationStrategy.hpp>
#include <memory/ProcessPage.hpp>
#include <memory/PageDescriptor.hpp>

class PagingTranslatorTest : public testing::Test
{
  protected:
    virtual void SetUp();
    virtual void TearDown();
    pc::TranslationStrategy<os::ProcessPage*, os::PageDescriptor>* translatorStrategy;
};
