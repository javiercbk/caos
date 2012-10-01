#include <Process.h>
#include <scheduler/RoundRobinScheduler.h>



namespace os {



	RoundRobinScheduler::RoundRobinScheduler()
	{
    processQueue = new std::queue<Process*>();
	}

	RoundRobinScheduler::~RoundRobinScheduler()
	{
		delete processQueue;
	}

	Process* RoundRobinScheduler::getNextProcess() {
		Process* process = processQueue->front();
		processQueue->pop();
		return process;
	}

	std::queue<Process*>* RoundRobinScheduler::getProcessQueue() {
		return this->processQueue;
	}

	void RoundRobinScheduler::pushProcess(Process* process) {
		processQueue->push(process);
	}

}
