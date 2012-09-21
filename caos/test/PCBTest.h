#ifndef PCBTEST_H
#define PCBTEST_H

#include "gtest/gtest.h"
#include "KernelConfig.h"
#include "Kernel.h"
#include "scheduler/SchedulerFactory.h"
#include "PCB.h"

class PCBTest : public testing::Test {
	protected:
		os::PCB* pcb;
		virtual void SetUp();
		virtual void TearDown();

};

#endif // PCBTEST_H

