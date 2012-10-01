#pragma once

#include <vector>
#include <memory/ProcessPage.hpp>

namespace os {
	class PCB;
}

#include <PCB.hpp>


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
