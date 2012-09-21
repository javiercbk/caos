#include "PCB.h"

namespace os {

	PCB::PCB(int pid)
	{
		this->estado = NEW;
		this->pid = pid;
		this->ip = 0;
		this->nice = 20;
		this->qExecuted = 0;
		this->registros = new std::vector<pc::CPUReg*>();
	}

  PCB::~PCB(){
    delete registros;
  }
	unsigned int PCB::getPid() {
		return this->pid;
	}

	unsigned int PCB::getIp() {
		return this->ip;
	}

	unsigned int PCB::getNice() {
		return this->nice;
	}

	unsigned int PCB::getQExecuted() {
		return this->qExecuted;
	}

	std::vector<pc::CPUReg*>* PCB::getRegistros() {
		return this->registros;
	}

	Estado PCB::getEstado() {
		return this->estado;
	}

	void PCB::setIp(unsigned int ip) {
		this->ip = ip;
	}

	void PCB::setNice(unsigned int nice) {
		this->nice = nice;
	}

	void PCB::setQExecuted(unsigned int qExecuted) {
		this->qExecuted = qExecuted;
	}

	void PCB::setRegistros(std::vector<pc::CPUReg*>* registros) {
		this->registros = registros;
	}

	void PCB::setEstado(Estado estado) {
		this->estado = estado;
	}

	unsigned long PCB::getBase(){
    return this->base;
	}

  unsigned long PCB::getLimit(){
    return this->limit;
  }

  void PCB::setBase(unsigned long base){
    this->base = base;
  }

  void PCB::setLimit(unsigned long limit){
    this->limit = limit;
  }

}
