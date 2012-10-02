#pragma once

#include <scheduler/Scheduler.hpp>
#include <queue>

namespace os {

	class RoundRobinScheduler : public Scheduler {
		public:
			RoundRobinScheduler();
			virtual ~RoundRobinScheduler();
			Process getNextProcess();
			std::queue<Process> getProcessQueue();
			void pushProcess(Process& process);
		private:
			std::queue<Process> processQueue;

	};

}
