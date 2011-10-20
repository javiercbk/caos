#ifndef ROUNDROBINSCHEDULER_H
#define ROUNDROBINSCHEDULER_H

#include "../../include/scheduler/Scheduler.h"
#include <queue>

namespace os {

	class RoundRobinScheduler : public Scheduler {
		public:
			RoundRobinScheduler();
			virtual ~RoundRobinScheduler();
			Process* getNextProcess();
			std::queue<Process*>* getProcessQueue();
			void pushProcess(Process* process);
		private:
			std::queue<Process*>* processQueue;

	};

}

#endif // ROUNDROBINSCHEDULER_H
