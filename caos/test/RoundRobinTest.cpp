#include "RoundRobinTest.hpp"

#include <stdlib.h>
#include <time.h>

void RoundRobinTest::SetUp() {
	this->kernel = new os::Kernel();
	KernelConfig* kConfig = new KernelConfig();
	kConfig->setShortSchedulerType(os::ROUND_ROBIN);
	kConfig->configureKernel(kernel);
	delete kConfig;
}

void RoundRobinTest::TearDown() {
	delete kernel;
	for (auto it = createdProcesses.begin(); it != createdProcesses.end(); it++) {
		delete *it;
	}
}

os::Process* RoundRobinTest::makeRandomProcess() {
	os::Process* process = new os::Process();
	srand (time(NULL));
	int randomPid = rand() % 100 + 1;
	os::PCB* pcb = new os::PCB(randomPid);
	process->setPCB(pcb);
	processQueue.push((*process));
	createdProcesses.push_back(process);
	return process;
}


TEST_F(RoundRobinTest, DefaultConstructor) {
	for(int i =0; i < 10; i++) {
			os::Process* process = makeRandomProcess();
			kernel->getShortScheduler()->pushProcess((*process));
		}
	while(!processQueue.empty()) {
			os::Process process = processQueue.front();
			os::Process sameProcess = kernel->getShortScheduler()->getNextProcess();
			processQueue.pop();
			EXPECT_EQ(process.getPCB()->getPid(), sameProcess.getPCB()->getPid());
		}
}
