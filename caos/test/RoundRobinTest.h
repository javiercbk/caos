#ifndef ROUNDROBINTEST_H
#define ROUNDROBINTEST_H

#include "gtest/gtest.h"
#include "../include/KernelConfig.h"
#include "../include/Kernel.h"
#include "../include/scheduler/SchedulerFactory.h"
#include "../include/PCB.h"
#include "../include/Process.h"
#include <queue>

class RoundRobinTest : public testing::Test
{
  protected:
    virtual void SetUp();
    virtual void TearDown();
    os::Kernel* kernel;
    std::queue<os::Process*> processQueue;
    os::Process* makeRandomProcess();
};

#endif // ROUNDROBINTEST_H
