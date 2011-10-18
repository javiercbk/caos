#ifndef PCB_H
#define PCB_H

#include <vector>
#include <string>

namespace pc {
	struct CPUReg;
}

#include "../include/Processor.h"




/**
    @brief Namespace os
    Namespace que contiene los objetos manejados por el SO.
*/
namespace os {
	/**
	    @brief Estado del Proceso
	    Enumeracion de los estados posibles de un proceso.
	    @author Javier Lecuona
	    @date Octubre 2011
	*/
	enum Estado { NEW = 0, READY = 1, RUNNING = 2, BLOCKED = 3, TERMINATED = 4 };


	/**
	    @brief Process Control Block

	    Esta clase define la estructura de un proceso utilizada por el SO.
	    @author Javier Lecuona
	    @date Octubre 2011
	    */
	class PCB
	{
		public:
			PCB(int pid);
			unsigned int getPid();
			unsigned int getIp();
			unsigned int getNice();
			unsigned int getQExecuted();
			std::vector<pc::CPUReg> getRegistros();
			Estado getEstado();
			void setIp(unsigned int);
			void setNice(unsigned int);
			void setQExecuted(unsigned int);
			void setRegistros(std::vector<pc::CPUReg>);
			void setEstado(Estado);
		protected:
			Estado estado;
			unsigned int pid;
			unsigned int ip;
			unsigned int nice;
			unsigned int qExecuted;
			std::vector<pc::CPUReg> registros;
			//TODO agregar los recursos utilizados
		private:
	};

}

#endif // PCB_H
