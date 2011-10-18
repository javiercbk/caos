#ifndef PROCESSOR_H
#define PROCESSOR_H

namespace os {
	class Process;
}

#include <string>
#include "../include/Dispatcher.h"
#include "../include/Process.h"

namespace pc {

	/**
	    @brief Interrupciones
	    Enumeracion de interrupciones mas comunes. Cumplen con la siguientes condiciones:
	    * El Instruction  Pointer (IP) es guardado.
	    * Todas las instrucciones anteriores han sido manejadas.
	    * Cualquier instruccion anterior al IP ha sido ejecutada.
	    * El estado de ejecucion de la instruccion del IP es conocido

	    @author Javier Lecuona
	    @date Octubre 2011
	*/
	enum Interrupt {ZERO_DIV=0, OVERFLOW=4, RANGE_EXCEPTION=5, INV_OPCODE=6, DEV_NOT_AVAL=7, STACK_FAULT=12, PAGE_FAULT=14, MASCARABLE_INT=32};

	/**
	    @brief Registros de la CPU
	    Esta estructura modela registros simples de la CPU
	    @author Javier Lecuona
	    @date Octubre 2011
	*/
	struct CPUReg {
		std::string regName;
		int val;
	};

	/**
	    @brief Processor

	    Esta clase modela un procesador virtual. Simula la ejecucion de
	    instrucciones de un proceso.
	    @author Javier Lecuona
	    @date Octubre 2011
	*/
	class Processor
	{
		public:
			Processor();
			virtual ~Processor();
			int executeProcess(os::Process* process);
			int executeProcess(os::Process* process, int quantums);
			void receiveInterrupt();
		protected:
			void callDispatcher();
		private:
			std::string name;
			unsigned int architecture;
			os::Dispatcher* dispatcher;
	};

}
#endif // PROCESSOR_H
