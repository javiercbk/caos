#include <Process.hpp>
#include <scheduler/RoundRobinScheduler.hpp>



namespace os {



	RoundRobinScheduler::RoundRobinScheduler()
	{
	}

	RoundRobinScheduler::~RoundRobinScheduler()
	{
	}

	Process RoundRobinScheduler::getNextProcess() {
		Process process = processQueue.front();
		processQueue.pop();
		return process;
	}

	std::queue<Process> RoundRobinScheduler::getProcessQueue() {
		return this->processQueue;
	}

	void RoundRobinScheduler::pushProcess(Process& process) {
		processQueue.push(process);
	}

}
