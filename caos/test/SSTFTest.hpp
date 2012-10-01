#pragma once

#include "gtest/gtest.h"
#include <IO/SSTFScheduler.hpp>

#include <list>

class SSTFTest : public testing::Test
{
  protected:
    virtual void SetUp();
    virtual void TearDown();
    os::IOScheduler* ioScheduler;
    std::list<int>* blockList;
    void sortList();
    std::list<int>::iterator getNearerBlock(std::list<int>* availableBlocks, std::list<int>::iterator it);
    int makeRandomBlock();
    int currentBlock;
};
