#include "../../include/scheduler/SchedulerFactory.h"

namespace os {

	Scheduler* SchedulerFactory::getScheduler(SchedulerType type) {
		if(type == ROUND_ROBIN) {
				return new RoundRobinScheduler();
			}
		return NULL;
	}

}
