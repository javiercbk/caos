#include <Processor.hpp>

namespace pc {

	Processor::Processor()
	{
		//ctor
	}

	Processor::~Processor()
	{
		//dtor
	}

	/**
	  @brief ejecuta un proceso

	  Ejecuta un proceso hasta que se dispare una interrupción (enmascarable o no)
	  segun el estado actual del procesador.

	  @param[in,out] process Proceso a ejecutar.
	  @return Cantidad de quantos ejecutada.
	*/
	int Processor::executeProcess(os::Process* process) {
		return 0;
	}
	/**
	  @brief ejecuta un proceso por una cantidad de quantos

	  Ejecuta la cantidad de quantos dada para un proceso. Si excede la cantidad de quantos
	  estipulada por el planificador

	  @param[in,out] process Proceso a ejecutar.
	  @param[in] quantums Quantos a ejecutar.
	  @return Cantidad de quantos ejecutada.
	*/
	int Processor::executeProcess(os::Process* process, int quantums) {
		return 0;
	}

	/**
	  @brief Llama al dispatcher
	  Llama explicitamente al dispatcher para que ejecute el context switch
	*/
	void Processor::callDispatcher() {

	}

}

/**
  @brief Llama al dispatcher
  Llama explicitamente al dispatcher para que ejecute el context switch
*/
void receiveInterrupt() {

}
