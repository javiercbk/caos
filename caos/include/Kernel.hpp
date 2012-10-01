#pragma once

#include <list>
#include <Dispatcher.hpp>
#include <scheduler/Scheduler.hpp>
#include <memory/KernelMemoryManager.hpp>

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
			std::list<PCB*> getPcbs();
		private:
			Dispatcher* dispatcher;
			Scheduler* shortScheduler;
			Scheduler* longScheduler;
			KernelMemoryManager* memoryManager;
			int multiprogrammingDegree;
			std::list<PCB*> pcbs;

	};

}
