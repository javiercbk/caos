#ifndef KERNELCONFIG_H
#define KERNELCONFIG_H

#include "../include/Kernel.h"
#include "../include/scheduler/Scheduler.h"
#include "../include/scheduler/SchedulerFactory.h"

class KernelConfig
{
	public:
		KernelConfig();
		virtual ~KernelConfig();
		void configureKernel(os::Kernel* kernel);
		void setShortSchedulerType(os::SchedulerType type);
	protected:
	private:
		os::SchedulerType shortSchedulerType;
};

#endif // KERNELCONFIG_H
