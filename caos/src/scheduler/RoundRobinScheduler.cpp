#include "../../include/Process.h"
#include "../../include/scheduler/RoundRobinScheduler.h"



namespace os {



	RoundRobinScheduler::RoundRobinScheduler()
	{

	}

	RoundRobinScheduler::~RoundRobinScheduler()
	{
		delete &processQueue;
	}

	Process* RoundRobinScheduler::getNextProcess() {
		Process* process = processQueue.front();
		processQueue.pop();
		return process;
	}

	std::queue<Process*> RoundRobinScheduler::getProcessQueue() {
		return this->processQueue;
	}

	void RoundRobinScheduler::pushProcess(Process* process) {
		processQueue.push(process);
	}

}
