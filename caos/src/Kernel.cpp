#include <Kernel.h>

namespace os {

	Kernel::Kernel()
	{
		//ctor
	}

	Kernel::~Kernel()
	{
		//dtor
	}

	void Kernel::boot() {

	}

	Dispatcher* Kernel::getDispatcher() {
		return this->dispatcher;
	}
	Scheduler* Kernel::getShortScheduler() {
		return this->shortScheduler;
	}
	Scheduler* Kernel::getLongScheduler() {
		return this->longScheduler;
	}
	int Kernel::getMultiprogrammingDegree() {
		return this->multiprogrammingDegree;
	}
	void Kernel::setDispatcher(Dispatcher* dispatcher) {
		this->dispatcher = dispatcher;
	}
	void Kernel::setShortScheduler(Scheduler* scheduler) {
		this->shortScheduler = scheduler;
	}
	void Kernel::setLongScheduler(Scheduler* scheduler) {
		this->longScheduler = scheduler;
	}
	void Kernel::setMultiprogrammingDegree(int mpd) {
		this->multiprogrammingDegree = multiprogrammingDegree;
	}

	std::list<PCB*> Kernel::getPcbs(){
    return pcbs;
}
}
