#include <KernelConfig.hpp>

KernelConfig::KernelConfig()
{
	//ctor
}

KernelConfig::~KernelConfig()
{
	//dtor
}

void KernelConfig::configureKernel(os::Kernel* kernel) {
	os::SchedulerFactory* schedFactory = new os::SchedulerFactory();
	os::Scheduler* shortScheduler = schedFactory->getScheduler(this->shortSchedulerType);;
	kernel->setShortScheduler(shortScheduler);
}

void KernelConfig::setShortSchedulerType(os::SchedulerType type) {
	this->shortSchedulerType = type;
}


