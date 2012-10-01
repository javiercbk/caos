#pragma once

#include "gtest/gtest.h"
#include <KernelConfig.h>
#include <Kernel.h>
#include <scheduler/SchedulerFactory.h>
#include <PCB.h>
#include <Process.h>
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
