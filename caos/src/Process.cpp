#include "../include/Process.h"
namespace os{
Process::Process()
{
    //ctor
}

Process::~Process()
{
    //dtor
}


os::PCB* Process::getPCB(){
    return this->pcb;
}

Process* Process::getParent(){
    return this->parent;
}

std::vector<Process*> Process::getChildren(){
    return this->children;
}

void Process::setPCB(os::PCB* pcb){
    this->pcb = pcb;
}

void Process::getParent(Process* parent){
        this->parent = parent;
}

void Process::getChildren(std::vector<Process*> children){
    this->children = children;
}
}
