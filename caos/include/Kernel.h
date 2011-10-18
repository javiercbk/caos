#ifndef KERNEL_H
#define KERNEL_H

#include "../include/Dispatcher.h"
#include "../include/scheduler/Scheduler.h"
namespace os {

	class Kernel
	{
		public:
			Kernel();
			virtual ~Kernel();
			void boot();
			Dispatcher* getDispatcher();
			Scheduler* getShortScheduler();
			Scheduler* getLongScheduler();
			int getMultiprogrammingDegree();
			void setDispatcher(Dispatcher* dispatcher);
			void setShortScheduler(Scheduler* scheduler);
			void setLongScheduler(Scheduler* scheduler);
			void setMultiprogrammingDegree(int mpd);
		private:
			Dispatcher* dispatcher;
			Scheduler* shortScheduler;
			Scheduler* longScheduler;
			int multiprogrammingDegree;
	};

}

#endif // KERNEL_H
