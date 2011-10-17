#ifndef PCBTEST_H
#define PCBTEST_H

#include "gtest/gtest.h"
#include "../include/KernelConfig.h"
#include "../include/Kernel.h"
#include "../include/scheduler/SchedulerFactory.h"
#include "../include/PCB.h"

class PCBTest : public testing::Test{
  protected:
  os::PCB* pcb;
  virtual void SetUp();
  virtual void TearDown();

};

#endif // PCBTEST_H

