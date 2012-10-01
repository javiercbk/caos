#pragma once

#include "gtest/gtest.h"
#include <IO/FCFSIOScheduler.h>

#include <queue>

class FCFSTest : public testing::Test
{
protected:
    virtual void SetUp();
    virtual void TearDown();
    os::IOScheduler* ioScheduler;
    std::queue<int>* blockQueue;
    int makeRandomBlock();
};
