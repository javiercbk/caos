#ifndef FCB_H
#define FCB_H

#include <string>
#include <vector>

#include "../include/PCB.h"

namespace os {

	/**
	    @brief Modo de apertura
	    Enumeracion de modos de apertura de un archivo
	    @author Javier Lecuona
	    @date Octubre 2011
	*/
	enum Mode {READ = 1, WRITE = 2};

	/**
	    @brief Consumidor de archivo
	    Estructura que modela el modo de apertura de un archivo en relacion a un proceso.
	    @author Javier Lecuona
	    @date Octubre 2011
	*/
	struct FileConsumer {
		PCB* process;
		Mode mode;
	};

	/**
	    @brief File Control Block

	    Esta clase define la estructura de un archivo abierto utilizada por el SO.
	    @author Javier Lecuona
	    @date Octubre 2011
	*/
	class FCB
	{
		public:
			FCB();
		protected:
		private:
			unsigned int fid;
			std::string fileName;
			std::vector<FileConsumer*> fileConsumers;
	};

}

#endif // FCB_H
