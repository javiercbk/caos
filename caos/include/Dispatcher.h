#ifndef DISPATCHER_H
#define DISPATCHER_H

namespace os {

/**
* @brief Dispatcher del Sistema Operativo
*
* El dispatcher es el responsable de hacer el context switch
* cada vez que se da una interrupcion de reloj.
* Es el encargado de guardar y cargar el contexto de los procesos
* para que estos sigan ejecutandose normalmente.
*/
class Dispatcher{
		public:
			Dispatcher();
			virtual ~Dispatcher();
			void contextSwitch();
		protected:
		private:
};

}
#endif // DISPATCHER_H
