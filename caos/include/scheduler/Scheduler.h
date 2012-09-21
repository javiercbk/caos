#ifndef ABSTRACTSCHEDULER_H
#define ABSTRACTSCHEDULER_H


#include "Process.h"

namespace os {


	class Scheduler {
		public:
			virtual Process* getNextProcess() = 0;
			virtual void pushProcess(Process* process) = 0;
	};

}
#endif // ABSTRACTSCHEDULER_H
