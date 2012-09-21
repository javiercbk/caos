#include "RoundRobinTest.h"

#include <stdlib.h>
#include <time.h>

void RoundRobinTest::SetUp() {
	this->kernel = new os::Kernel();
	KernelConfig* kConfig = new KernelConfig();
	kConfig->setShortSchedulerType(os::ROUND_ROBIN);
	kConfig->configureKernel(kernel);
}

void RoundRobinTest::TearDown() {
	delete kernel;
}

os::Process* RoundRobinTest::makeRandomProcess() {
	os::Process* process = new os::Process();
	srand (time(NULL));
	int randomPid = rand() % 100 + 1;
	os::PCB* pcb = new os::PCB(randomPid);
	process->setPCB(pcb);
	processQueue.push(process);
	return process;
}


TEST_F(RoundRobinTest, DefaultConstructor) {
	os::Process* process = NULL;
	for(int i =0; i < 10; i++) {
			process = makeRandomProcess();
			kernel->getShortScheduler()->pushProcess(process);
		}
	while(!processQueue.empty()) {
			process = processQueue.front();
			os::Process* sameProcess = kernel->getShortScheduler()->getNextProcess();
			processQueue.pop();
			EXPECT_EQ(process->getPCB()->getPid(), sameProcess->getPCB()->getPid());
			delete process;
		}
}
