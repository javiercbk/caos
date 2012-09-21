#ifndef PROCESS_H
#define PROCESS_H

#include <vector>
#include "memory/ProcessPage.h"

namespace os {
	class PCB;
}

#include "../include/PCB.h"


namespace os {
	/**
	    @brief Process

	    Esta clase define la estructura de un proceso.
	    @author Javier Lecuona
	    @date Octubre 2011
	*/
	class Process
	{
		public:
			Process();
			virtual ~Process();
			os::PCB* getPCB();
			Process* getParent();
			std::vector<Process*> getChildren();
			void setPCB(PCB* pcb);
			void getParent(Process* parent);
			void getChildren(std::vector<Process*> children);
			std::vector<ProcessPage*>* getFrames();
		private:
			PCB* pcb;
			Process* parent;
			std::vector<Process*> children;
			std::vector<ProcessPage*>* frames;
	};

}
#endif // PROCESS_H
