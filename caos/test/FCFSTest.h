#ifndef FCFSTEST_H
#define FCFSTEST_H

#include "gtest/gtest.h"
#include "IO/FCFSIOScheduler.h"

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

#endif // FCFSTEST_H
