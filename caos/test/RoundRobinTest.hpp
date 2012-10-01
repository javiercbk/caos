#pragma once

#include "gtest/gtest.h"
#include <KernelConfig.hpp>
#include <Kernel.hpp>
#include <scheduler/SchedulerFactory.hpp>
#include <PCB.hpp>
#include <Process.hpp>
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
