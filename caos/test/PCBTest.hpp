#pragma once

#include "gtest/gtest.h"
#include <KernelConfig.hpp>
#include <Kernel.hpp>
#include <scheduler/SchedulerFactory.hpp>
#include <PCB.hpp>

class PCBTest : public testing::Test {
	protected:
		os::PCB* pcb;
		virtual void SetUp();
		virtual void TearDown();
};
