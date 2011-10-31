#ifndef KERNEL_H
#define KERNEL_H

#include "../include/Dispatcher.h"
#include "../include/scheduler/Scheduler.h"
namespace os {

/**
* @brief El kernel del sistema operativo a simular
*
* Facade del Kernel del sistema operativo. Gestiona todos
* los objetos mas importantes y les delega la responsabilidad
* de ejecutar sus acciones.
*/
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
