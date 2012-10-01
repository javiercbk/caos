#pragma once

#include "gtest/gtest.h"

#include <memory/TranslationStrategy.hpp>
#include <memory/MemoryDirection.hpp>
#include <PCB.hpp>

class BaseRegistryTranslatorTest : public testing::Test
{
  protected:
    virtual void SetUp();
	virtual void TearDown();
    pc::TranslationStrategy<os::MemoryDirection*, int>* translatorStrategy;
    os::PCB* pcb;
};
