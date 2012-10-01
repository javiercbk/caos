#pragma once

#include <scheduler/Scheduler.hpp>
#include <scheduler/RoundRobinScheduler.hpp>

namespace os {

	enum SchedulerType {ROUND_ROBIN=1, VROUND_ROBIN=2, SPN=3, SJF=4};

	class SchedulerFactory
	{
		public:
			Scheduler* getScheduler(SchedulerType type);
	};

}
