#pragma once


#include <Process.hpp>

namespace os {


	class Scheduler {
		public:
			virtual Process getNextProcess() = 0;
			virtual void pushProcess(Process& process) = 0;
	};

}
