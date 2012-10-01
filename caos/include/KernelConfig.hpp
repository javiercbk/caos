#pragma once

#include <Kernel.hpp>
#include <scheduler/Scheduler.hpp>
#include <scheduler/SchedulerFactory.hpp>

/**
* Esta clase configura un Kernel segun las opciones
* parseadas.
*/
class KernelConfig
{
	public:
		KernelConfig();
		virtual ~KernelConfig();
		/**
		* Con todas las opciones parseadas, constuye un kernel.
		* @param kernel Kernel configurado con las opciones parseadas.
		*/
		void configureKernel(os::Kernel* kernel);
		void setShortSchedulerType(os::SchedulerType type);
	protected:
	private:
		os::SchedulerType shortSchedulerType;
};
